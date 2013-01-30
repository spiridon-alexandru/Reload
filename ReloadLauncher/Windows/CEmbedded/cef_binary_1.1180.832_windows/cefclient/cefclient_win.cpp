// Copyright (c) 2010 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "cefclient/cefclient.h"
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
#include <direct.h>
#include <sstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <process.h>
#include "include/cef_app.h"
#include "include/cef_browser.h"
#include "include/cef_frame.h"
#include "include/cef_runnable.h"
#include "cefclient/client_handler.h"
#include "cefclient/resource.h"
#include "cefclient/string_util.h"

#define MAX_LOADSTRING 100
#define MAX_URL_LENGTH  255
#define BUTTON_WIDTH 72
#define URLBAR_HEIGHT  24

// Global Variables:
HINSTANCE hInst;   // current instance
TCHAR szTitle[MAX_LOADSTRING];  // The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];  // the main window class name
char szWorkingDir[MAX_PATH];  // The current working directory
UINT uFindMsg;  // Message identifier for find events.
HWND hFindDlg = NULL;  // Handle for the find dialog.

// Forward declarations of functions included in this code module:
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void StartReloadServer(void* ID);
void StopReloadServer();
void CreateReloadServerProcess(wchar_t* cmd);
void ExecuteSystemCommand(char* cmd);
std::string ExecuteCommand(char* cmd);


// The global ClientHandler reference.
extern CefRefPtr<ClientHandler> g_handler;

#if defined(OS_WIN)
// Add Common Controls to the application manifest because it's required to
// support the default tooltip implementation.
#pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")  // NOLINT(whitespace/line_length)
#endif

// Program entry point function.
int APIENTRY wWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow) {

  // Starts the reload server in a new thread.
  _beginthread(StartReloadServer, 0, NULL);

  // Starts the reload server in a new process.
  //CreateReloadServerProcess(L"cd \"MoSync_Reload_BETA_Windows\\server\" & start bin\\win\\node.exe ReloadServer.js");

  UNREFERENCED_PARAMETER(hPrevInstance);
  UNREFERENCED_PARAMETER(lpCmdLine);

  // Retrieve the current working directory.
  if (_getcwd(szWorkingDir, MAX_PATH) == NULL)
    szWorkingDir[0] = 0;

  // Parse command line arguments. The passed in values are ignored on Windows.
  AppInitCommandLine(0, NULL);

  CefSettings settings;
  CefRefPtr<CefApp> app;

  // Populate the settings based on command line arguments.
  AppGetSettings(settings, app);

  // Initialize CEF.
  CefInitialize(settings, app);

  HACCEL hAccelTable;

  // Initialize global strings
  LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
  LoadString(hInstance, IDC_CEFCLIENT, szWindowClass, MAX_LOADSTRING);
  MyRegisterClass(hInstance);

  // Perform application initialization
  if (!InitInstance (hInstance, nCmdShow))
    return FALSE;

  hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_CEFCLIENT));

  // Register the find event message.
  uFindMsg = RegisterWindowMessage(FINDMSGSTRING);

  int result = 0;

  if (!settings.multi_threaded_message_loop) {
    // Run the CEF message loop. This function will block until the application
    // recieves a WM_QUIT message.
    CefRunMessageLoop();
  } else {
    MSG msg;

    // Run the application message loop.
    while (GetMessage(&msg, NULL, 0, 0)) {
      // Allow processing of find dialog messages.
      if (hFindDlg && IsDialogMessage(hFindDlg, &msg))
        continue;

      if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
      }
    }

    result = static_cast<int>(msg.wParam);
  }

  // Shut down CEF.
  CefShutdown();

  return result;
}

//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
//  COMMENTS:
//
//    This function and its usage are only necessary if you want this code
//    to be compatible with Win32 systems prior to the 'RegisterClassEx'
//    function that was added to Windows 95. It is important to call this
//    function so that the application will get 'well formed' small icons
//    associated with it.
//
ATOM MyRegisterClass(HINSTANCE hInstance) {
  WNDCLASSEX wcex;

  wcex.cbSize = sizeof(WNDCLASSEX);

  wcex.style         = CS_HREDRAW | CS_VREDRAW;
  wcex.lpfnWndProc   = WndProc;
  wcex.cbClsExtra    = 0;
  wcex.cbWndExtra    = 0;
  wcex.hInstance     = hInstance;
  wcex.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_CEFCLIENT));
  wcex.hCursor       = LoadCursor(NULL, IDC_ARROW);
  wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
  wcex.lpszMenuName  = MAKEINTRESOURCE(IDC_CEFCLIENT);
  wcex.lpszClassName = szWindowClass;
  wcex.hIconSm       = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

  return RegisterClassEx(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow) {
  HWND hWnd;

  hInst = hInstance;  // Store instance handle in our global variable

  hWnd = CreateWindow(szWindowClass, szTitle,
                      WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, CW_USEDEFAULT, 0,
                      CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

  if (!hWnd)
    return FALSE;

  ShowWindow(hWnd, nCmdShow);
  UpdateWindow(hWnd);

  return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam,
                         LPARAM lParam) {
  static HWND backWnd = NULL, forwardWnd = NULL, reloadWnd = NULL,
      stopWnd = NULL, editWnd = NULL;
  static WNDPROC editWndOldProc = NULL;

  // Static members used for the find dialog.
  static FINDREPLACE fr;
  static WCHAR szFindWhat[80] = {0};
  static WCHAR szLastFindWhat[80] = {0};
  static bool findNext = false;
  static bool lastMatchCase = false;

  int wmId, wmEvent;
  PAINTSTRUCT ps;
  HDC hdc;

  if (message == uFindMsg) {
    return 0;
  } else {
    // Callback for the main window
    switch (message) {
    case WM_CREATE: {
      // Create the single static handler class instance
      g_handler = new ClientHandler();
      g_handler->SetMainHwnd(hWnd);

	  // Create the child windows used for navigation
      RECT rect;
      GetClientRect(hWnd, &rect);

      CefWindowInfo info;
      CefBrowserSettings settings;

      // Populate the settings based on command line arguments.
      AppGetBrowserSettings(settings);

      // Initialize window info to the defaults for a child window
      info.SetAsChild(hWnd, rect);

      // Creat the new child browser window
      CefBrowser::CreateBrowser(info,
          static_cast<CefRefPtr<CefClient> >(g_handler),
          g_handler->GetStartupURL(), settings);

      return 0;
    }

    case WM_COMMAND: {
      CefRefPtr<CefBrowser> browser;
      if (g_handler.get())
        browser = g_handler->GetBrowser();

      wmId    = LOWORD(wParam);
      wmEvent = HIWORD(wParam);
      // Parse the menu selections:
      switch (wmId) {
      case ID_WARN_CONSOLEMESSAGE:
        if (g_handler.get()) {
          std::wstringstream ss;
          ss << L"Console messages will be written to "
              << std::wstring(CefString(g_handler->GetLogFile()));
        }
        return 0;
      case ID_WARN_DOWNLOADCOMPLETE:
      case ID_WARN_DOWNLOADERROR:
        if (g_handler.get()) {
          std::wstringstream ss;
          ss << L"File \"" <<
              std::wstring(CefString(g_handler->GetLastDownloadFile())) <<
              L"\" ";

          if (wmId == ID_WARN_DOWNLOADCOMPLETE)
            ss << L"downloaded successfully.";
          else
            ss << L"failed to download.";

          MessageBox(hWnd, ss.str().c_str(), L"File Download",
              MB_OK | MB_ICONINFORMATION);
        }
        return 0;
      case ID_TESTS_DEVTOOLS_SHOW:
        if (browser.get())
          browser->ShowDevTools();
        return 0;
      case ID_TESTS_DEVTOOLS_CLOSE:
        if (browser.get())
          browser->CloseDevTools();
        return 0;
      }
      break;
    }

    case WM_PAINT:
      hdc = BeginPaint(hWnd, &ps);
      EndPaint(hWnd, &ps);
      return 0;

    case WM_SETFOCUS:
      if (g_handler.get() && g_handler->GetBrowserHwnd()) {
        // Pass focus to the browser window
        PostMessage(g_handler->GetBrowserHwnd(), WM_SETFOCUS, wParam, NULL);
      }
      return 0;

    case WM_SIZE:
      if (g_handler.get() && g_handler->GetBrowserHwnd()) {
        // Resize the browser window and address bar to match the new frame
        // window size
        RECT rect;
        GetClientRect(hWnd, &rect);

        int urloffset = rect.left;
        HDWP hdwp = BeginDeferWindowPos(1);
        
		hdwp = DeferWindowPos(hdwp, g_handler->GetBrowserHwnd(), NULL,
          rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top,
          SWP_NOZORDER);
        EndDeferWindowPos(hdwp);
      }
      break;

    case WM_ERASEBKGND:
      if (g_handler.get() && g_handler->GetBrowserHwnd()) {
        // Dont erase the background if the browser window has been loaded
        // (this avoids flashing)
        return 0;
      }
      break;

    case WM_CLOSE:
      if (g_handler.get()) {
        CefRefPtr<CefBrowser> browser = g_handler->GetBrowser();
        if (browser.get()) {
          // Let the browser window know we are about to destroy it.
          browser->ParentWindowWillClose();
        }
      }

	  // We kill the 'node.exe' process when chromium closes.
	  StopReloadServer();
      break;

    case WM_DESTROY:
      // The frame window has exited
      PostQuitMessage(0);
      return 0;
    }

    return DefWindowProc(hWnd, message, wParam, lParam);
  }
}

// Global functions

std::string AppGetWorkingDirectory() {
  return szWorkingDir;
}

//
//  FUNCTION: StartReloadServer()
//
//  PURPOSE: Starts the reload server in a new thread.
//
//  COMMENTS:
//
//    This function can use two methods to start the reload server.
//    See ExecuteCommand and ExecuteSystemCommand for more details
//
void StartReloadServer(void *ID)
{
	// Uses '_popen()' to execute the batch command.
//	std::string result = ExecuteCommand("cd \"MoSync_Reload_BETA_Windows\\server\" & start bin\\win\\node.exe ReloadServer.js");
	// Uses 'system()' to execute the batch command.
	ExecuteSystemCommand("call StartReloadServer.bat");
}

//
//  FUNCTION: StopReloadServer()
//
//  PURPOSE: Stops the reload server by running a batch script that searches for the 'node.exe' process
//			 and kills it if it's running.
//
void StopReloadServer()
{
	ExecuteSystemCommand("call StopNode.bat");
}

//
//  FUNCTION: ExecuteCommand()
//
//  PURPOSE: Executes a batch command using '_popen()'.
//
//	COMMENTS: 
//
//			If used in a Windows program, the _popen function returns an invalid file pointer that causes the
//			program to stop responding indefinitely. _popen works properly in a console application. 
//
// TODO SA: remove this after a final mehthod is decided (be sure to remove the forward declaration and
// the call).
std::string ExecuteCommand(char* cmd) 
{
    FILE* pipe = _popen(cmd, "r");
    if (!pipe) return "ERROR";
    char buffer[128];
    std::string result = "";
    while(!feof(pipe)) {
    	if(fgets(buffer, 128, pipe) != NULL)
    		result += buffer;
    }
    _pclose(pipe);
    return result;
}

//
//  FUNCTION: ExecuteSystemCommand()
//
//  PURPOSE: Executes a batch command using 'system()'.
//
// TODO SA: remove this after a final mehthod is decided (be sure to remove the forward declaration and
// the call).
void ExecuteSystemCommand(char* cmd)
{
	// http://msdn.microsoft.com/en-us/library/277bwbdz(v=vs.71).aspx
	// Quote: "You must explicitly flush (using fflush or _flushall) or close any stream before calling system."
	_flushall();

	int error = system(cmd);
	
	// An error has occured.
	// TODO SA: see what could be done in case of error
	if (error == -1)
	{
		std::string errorText;
		switch(errno)
		{
			// Argument list (which is system dependent) is too big.
			case E2BIG:
				OutputDebugStringW(L"Argument list (which is system dependent) is too big.");
				break;
			// Command interpreter cannot be found.
			case ENOENT:
				OutputDebugStringW(L"Command interpreter cannot be found.");
				break;
			// Command-interpreter file has invalid format and is not executable.
			case ENOEXEC:
				OutputDebugStringW(L"Command-interpreter file has invalid format and is not executable.");
				break;
			// Not enough memory is available to execute command;
			// or available memory has been corrupted; or invalid block exists, indicating that process making call was not allocated properly.
			case ENOMEM:
				errorText = "this is a long sentence that I want to" 
                           "declare over a couple of lines instead "
                           "of on one long long line.";
				OutputDebugStringA(errorText.c_str());
				break;
			default:
				OutputDebugStringW(L"Unknown error.");
		}
	}
}

//
//  FUNCTION: CreateReloadServerProcess()
//
//  PURPOSE: Creates a new process that starts the reload server.
//
// TODO SA: remove this after a final mehthod is decided (be sure to remove the forward declaration and
// the call).
void CreateReloadServerProcess(wchar_t* cmd)
{
	STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

	LPTSTR szCmdline = _wcsdup(cmd);

    // Start the child process. 
    if( !CreateProcess( NULL,   // No module name (use command line)
        szCmdline,        // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si,            // Pointer to STARTUPINFO structure
        &pi )           // Pointer to PROCESS_INFORMATION structure
    )
    {
		int error = GetLastError();
        printf( "CreateProcess failed (%d).\n", error );
    }
	else
	{
		// Close handles to the child process and its primary thread.
		// Some applications might keep these handles to monitor the status
		// of the child process, for example.

	//	CloseHandle(pi.hProcess);
	//	CloseHandle(pi.hThread);
	}
}

namespace {

// Determine a temporary path for the bitmap file.
bool GetBitmapTempPath(LPWSTR szTempName) {
  DWORD dwRetVal;
  DWORD dwBufSize = 512;
  TCHAR lpPathBuffer[512];
  UINT uRetVal;

  dwRetVal = GetTempPath(dwBufSize,      // length of the buffer
                         lpPathBuffer);  // buffer for path
  if (dwRetVal > dwBufSize || (dwRetVal == 0))
    return false;

  // Create a temporary file.
  uRetVal = GetTempFileName(lpPathBuffer,  // directory for tmp files
                            L"image",      // temp file name prefix
                            0,             // create unique name
                            szTempName);   // buffer for name
  if (uRetVal == 0)
    return false;

  size_t len = wcslen(szTempName);
  wcscpy(szTempName + len - 3, L"bmp");
  return true;
}

void UIT_RunGetImageTest(CefRefPtr<CefBrowser> browser) {
  REQUIRE_UI_THREAD();

  int width, height;
  bool success = false;

  // Retrieve the image size.
  if (browser->GetSize(PET_VIEW, width, height)) {
    void* bits;

    // Populate the bitmap info header.
    BITMAPINFOHEADER info;
    info.biSize = sizeof(BITMAPINFOHEADER);
    info.biWidth = width;
    info.biHeight = -height;  // minus means top-down bitmap
    info.biPlanes = 1;
    info.biBitCount = 32;
    info.biCompression = BI_RGB;  // no compression
    info.biSizeImage = 0;
    info.biXPelsPerMeter = 1;
    info.biYPelsPerMeter = 1;
    info.biClrUsed = 0;
    info.biClrImportant = 0;

    // Create the bitmap and retrieve the bit buffer.
    HDC screen_dc = GetDC(NULL);
    HBITMAP bitmap =
        CreateDIBSection(screen_dc, reinterpret_cast<BITMAPINFO*>(&info),
                         DIB_RGB_COLORS, &bits, NULL, 0);
    ReleaseDC(NULL, screen_dc);

    // Read the image into the bit buffer.
    if (bitmap && browser->GetImage(PET_VIEW, width, height, bits)) {
      // Populate the bitmap file header.
      BITMAPFILEHEADER file;
      file.bfType = 0x4d42;
      file.bfSize = sizeof(BITMAPFILEHEADER);
      file.bfReserved1 = 0;
      file.bfReserved2 = 0;
      file.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

      TCHAR temp_path[512];
      if (GetBitmapTempPath(temp_path)) {
        // Write the bitmap to file.
        HANDLE file_handle =
            CreateFile(temp_path, GENERIC_WRITE, 0, 0, CREATE_ALWAYS,
                       FILE_ATTRIBUTE_NORMAL, 0);
        if (file_handle != INVALID_HANDLE_VALUE) {
          DWORD bytes_written = 0;
          WriteFile(file_handle, &file, sizeof(file), &bytes_written, 0);
          WriteFile(file_handle, &info, sizeof(info), &bytes_written, 0);
          WriteFile(file_handle, bits, width * height * 4, &bytes_written, 0);

          CloseHandle(file_handle);

          // Open the bitmap in the default viewer.
          ShellExecute(NULL, L"open", temp_path, NULL, NULL, SW_SHOWNORMAL);
          success = true;
        }
      }
    }

    DeleteObject(bitmap);
  }

  if (!success) {
    browser->GetMainFrame()->ExecuteJavaScript(
        "alert('Failed to create image!');",
        browser->GetMainFrame()->GetURL(), 0);
  }
}

}  // namespace
