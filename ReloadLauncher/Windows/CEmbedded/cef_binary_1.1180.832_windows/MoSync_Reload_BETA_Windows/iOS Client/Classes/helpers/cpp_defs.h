#ifndef MAAPI_DEFS_H
#define MAAPI_DEFS_H

/** \brief A hash of the abstract representation of the API described in this file.
 * Identifiers, declarations and definitions are included in the calculation of the hash,
 * but documentation is not.
 */
#define MAIDL_HASH ((int)0xd169f276)

#ifndef DONT_WANT_MAAPI_TYPEDEFS
#ifndef _WCHAR_DEFINED
#define _WCHAR_DEFINED
#ifdef MAPIP
#ifdef __cplusplus
typedef wchar_t wchar;
#else
typedef unsigned short wchar;
typedef wchar wchar_t;
#endif	//__cplusplus
#else	//MAPIP
typedef unsigned short wchar;
#endif	//MAPIP
#endif	//_WCHAR_DEFINED

#ifndef _SYSV_TYPES_DEFINED
#define _SYSV_TYPES_DEFINED
typedef unsigned short ushort;
typedef unsigned int uint;
#endif	//_SYSV_TYPES_DEFINED

typedef char* MAString;
typedef wchar* MAWString;
typedef unsigned int MAAddress;
typedef int MAHandle;
typedef int MAExtent;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef long long longlong;
typedef int MAExtensionModule;
typedef int MAExtensionFunction;
/** @ingroup AudioAPI */
typedef int MAAudioData;
/** @ingroup AudioAPI */
typedef int MAAudioInstance;

#endif
/// Returns the height of an MAExtent.
#define  EXTENT_Y(e) ((short)(e))

/// Returns the width of an MAExtent.
#define  EXTENT_X(e) ((short)((e) >> 16))

/// Creates an MAExtent.
#define  EXTENT(x, y) ((MAExtent)((((int)(x)) << 16) | ((y) & 0xFFFF)))

/// The image is copied unchanged.
#define TRANS_NONE 0

/// The image is rotated clockwise by 90 degrees.
#define TRANS_ROT90 5

/// The image is rotated clockwise by 180 degrees.
#define TRANS_ROT180 3

/// The image is rotated clockwise by 270 degrees.
#define TRANS_ROT270 6

/// The image is reflected about its vertical center.
#define TRANS_MIRROR 2

/// The image is reflected about its vertical center, then rotated clockwise by 90 degrees.
#define TRANS_MIRROR_ROT90 7

/// The image is reflected about its vertical center, then rotated clockwise by 180 degrees.
#define TRANS_MIRROR_ROT180 1

/// The image is reflected about its vertical center, then rotated clockwise by 270 degrees.
#define TRANS_MIRROR_ROT270 4
/// This handle refers to the back buffer, which is initially black.
#define HANDLE_SCREEN 0

#define HANDLE_LOCAL 0
#define RES_OUT_OF_MEMORY -1
#define RES_BAD_INPUT -2
#define RES_OK 1
#define MAS_CREATE_IF_NECESSARY 1
/// Generic error.
#define STERR_GENERIC -2

/// The storage medium is full.
#define STERR_FULL -3

/// The store does not exist.
#define STERR_NONEXISTENT -5
/// Generic error.
#define CONNERR_GENERIC -2

/// The maximum number of open connections allowed has been reached.
#define CONNERR_MAX -3

/// DNS resolution error.
#define CONNERR_DNS -4

/// Internal error. Please report any occurrences.
#define CONNERR_INTERNAL -5

/** \brief The connection was closed by the remote peer.
*
* Happens when HTTP servers finish sending data.
*/
#define CONNERR_CLOSED -6

/// You attempted to write to a read-only connection.
#define CONNERR_READONLY -7

/// The OS does not trust you enough to let you open this connection.
#define CONNERR_FORBIDDEN -8

/// No operation has been started yet.
#define CONNERR_UNINITIALIZED -9

/// The Content-Length header could not be found.
#define CONNERR_CONLEN -10

/// You supplied a malformed URL.
#define CONNERR_URL -11

/// The protocol is not available.
/// If a Bluetooth function returns this, the Bluetooth chip is turned off.
#define CONNERR_UNAVAILABLE -12

/// You canceled the operation.
#define CONNERR_CANCELED -13

/// The server gave an invalid response.
#define CONNERR_PROTOCOL -14

/// The network connection could not be established.
#define CONNERR_NETWORK -15

/// The requested header could not be found.
#define CONNERR_NOHEADER -16

/// The requested object could not be found.
#define CONNERR_NOTFOUND -17

/// An error occurred during SSL negotiation.
#define CONNERR_SSL -18

/**
* If you wish to share the CONNERR codespace,
* use values below this for your own error codes.
*/
#define CONNERR_USER -1000000
#define CONNOP_READ 1
#define CONNOP_WRITE 2
#define CONNOP_CONNECT 7
#define CONNOP_FINISH 11
#define CONNOP_ACCEPT 16
/// The maximum number of open connections allowed.
#define CONN_MAX 32
#define BTADDR_LEN 6
#define CONN_FAMILY_INET4 1
#define CONN_FAMILY_BT 2
#define HTTP_GET 1
#define HTTP_POST 2
#define HTTP_HEAD 3
#define HTTP_PUT 4
#define HTTP_DELETE 5
#define MA_RESOURCE_OPEN 0x1
#define MA_RESOURCE_CLOSE 0x2
#define MAK_UNKNOWN 0
#define MAK_FIRST 0
#define MAK_BACKSPACE 8
#define MAK_TAB 9
#define MAK_CLEAR 12
#define MAK_RETURN 13
#define MAK_PAUSE 19
#define MAK_ESCAPE 27
#define MAK_SPACE 32
#define MAK_EXCLAIM 33
#define MAK_QUOTEDBL 34
#define MAK_POUND 35
#define MAK_HASH 35
#define MAK_GRID 35
#define MAK_DOLLAR 36
#define MAK_AMPERSAND 38
#define MAK_QUOTE 39
#define MAK_LEFTPAREN 40
#define MAK_RIGHTPAREN 41
#define MAK_ASTERISK 42
#define MAK_STAR 42
#define MAK_PLUS 43
#define MAK_COMMA 44
#define MAK_MINUS 45
#define MAK_PERIOD 46
#define MAK_SLASH 47
#define MAK_0 48
#define MAK_1 49
#define MAK_2 50
#define MAK_3 51
#define MAK_4 52
#define MAK_5 53
#define MAK_6 54
#define MAK_7 55
#define MAK_8 56
#define MAK_9 57
#define MAK_COLON 58
#define MAK_SEMICOLON 59
#define MAK_LESS 60
#define MAK_EQUALS 61
#define MAK_GREATER 62
#define MAK_QUESTION 63
#define MAK_AT 64
#define MAK_LEFTBRACKET 91
#define MAK_BACKSLASH 92
#define MAK_RIGHTBRACKET 93
#define MAK_CARET 94
#define MAK_UNDERSCORE 95
#define MAK_BACKQUOTE 96
#define MAK_A 97
#define MAK_B 98
#define MAK_C 99
#define MAK_D 100
#define MAK_E 101
#define MAK_F 102
#define MAK_G 103
#define MAK_H 104
#define MAK_I 105
#define MAK_J 106
#define MAK_K 107
#define MAK_L 108
#define MAK_M 109
#define MAK_N 110
#define MAK_O 111
#define MAK_P 112
#define MAK_Q 113
#define MAK_R 114
#define MAK_S 115
#define MAK_T 116
#define MAK_U 117
#define MAK_V 118
#define MAK_W 119
#define MAK_X 120
#define MAK_Y 121
#define MAK_Z 122
#define MAK_DELETE 127
#define MAK_KP0 256
#define MAK_KP1 257
#define MAK_KP2 258
#define MAK_KP3 259
#define MAK_KP4 260
#define MAK_KP5 261
#define MAK_KP6 262
#define MAK_KP7 263
#define MAK_KP8 264
#define MAK_KP9 265
#define MAK_KP_PERIOD 266
#define MAK_KP_DIVIDE 267
#define MAK_KP_MULTIPLY 268
#define MAK_KP_MINUS 269
#define MAK_KP_PLUS 270
#define MAK_KP_ENTER 271
#define MAK_KP_EQUALS 272
#define MAK_UP 273
#define MAK_DOWN 274
#define MAK_RIGHT 275
#define MAK_LEFT 276
#define MAK_INSERT 277
#define MAK_HOME 278
#define MAK_END 279
#define MAK_PAGEUP 280
#define MAK_PAGEDOWN 281
#define MAK_FIRE 284
#define MAK_SOFTLEFT 285
#define MAK_SOFTRIGHT 286
#define MAK_PEN 291
#define MAK_BACK 292
#define MAK_MENU 293
#define MAK_RSHIFT 303
#define MAK_LSHIFT 304
#define MAK_RCTRL 305
#define MAK_LCTRL 306
#define MAK_RALT 307
#define MAK_LALT 308
#define MAK_SEARCH 309
#define MAKB_LEFT 0x00001
#define MAKB_UP 0x00002
#define MAKB_RIGHT 0x00004
#define MAKB_DOWN 0x00008
#define MAKB_FIRE 0x00010
#define MAKB_SOFTLEFT 0x00020
#define MAKB_SOFTRIGHT 0x00040
#define MAKB_0 0x00080
#define MAKB_1 0x00100
#define MAKB_2 0x00200
#define MAKB_3 0x00400
#define MAKB_4 0x00800
#define MAKB_5 0x01000
#define MAKB_6 0x02000
#define MAKB_7 0x04000
#define MAKB_8 0x08000
#define MAKB_9 0x10000
#define MAKB_ASTERISK 0x20000
#define MAKB_STAR 0x20000
#define MAKB_HASH 0x40000
#define MAKB_POUND 0x40000
#define MAKB_GRID 0x40000
#define MAKB_CLEAR 0x80000
#define EVENT_BUFFER_SIZE 256

/// In milliseconds
#define EVENT_CLOSE_TIMEOUT 2000
/**
* This event is posted when the operating system sends MoSync a command to exit.
* Causes include the OS shutting down and OS-controlled user commands.
* \see maGetEvent()
*/
#define EVENT_TYPE_CLOSE 1

#define EVENT_TYPE_KEY_PRESSED 2
#define EVENT_TYPE_KEY_RELEASED 3

/// Connection
#define EVENT_TYPE_CONN 4

/// Bluetooth discovery
#define EVENT_TYPE_BT 5

#define EVENT_TYPE_POINTER_PRESSED 8
#define EVENT_TYPE_POINTER_RELEASED 9
#define EVENT_TYPE_POINTER_DRAGGED 10

/**
 * While MoSync doesn't have focus, no key events will arrive and the screen will not be updated.
 * If the keypad is locked, no application will have focus.
 * \see maLockKeypad
 */
#define EVENT_TYPE_FOCUS_LOST 13

#define EVENT_TYPE_FOCUS_GAINED 14

/// Has MAEvent::data point to an MALocation.
#define EVENT_TYPE_LOCATION 16

/// MAEvent::state is one of the \link #MA_LPS_AVAILABLE MA_LPS \endlink constants.
#define EVENT_TYPE_LOCATION_PROVIDER 17

/**
* \brief Event which is triggered when an audio has been asychronous prepared
* The MAEvent::audioInstance contains the prepared MAAudioInstance,
* or <0 if a problem happened while preparing.
*/
#define EVENT_TYPE_AUDIO_PREPARED 19

/**
* \brief Event which is triggered when a streaming audio has finished playing
* The MAEvent::audioInstance contains the MAAudioInstance which finished
*/
#define EVENT_TYPE_AUDIO_COMPLETED 20

/** \brief The size of the screen has changed.
* Use maGetScrSize() to get the new size.
*
* If the screen is the current draw target, the clipping rectangle is removed.
* Use maSetClipRect() to reset it.
*/
#define EVENT_TYPE_SCREEN_CHANGED 21

/// Character input. Uses MAEvent::character.
#define EVENT_TYPE_CHAR 22

/** \brief The text box created by maTextBox() was just closed.
* Uses MAEvent::textboxResult and MAEvent::textboxLength.
*/
#define EVENT_TYPE_TEXTBOX 23

/** \brief The home screen became visible.
 * Currently implemented only on Android and Symbian.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_SHOWN 24

/** \brief The home screen was hidden because an
 * application came to front.
 * Currently implemented only on Android and Symbian.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_HIDDEN 25

/** \brief The screen was turned on (the device
 * went out of sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_ON 26

/** \brief The screen was turned off (the device
 * went into sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_OFF 27

/**
* \brief An event sent from a native widget.
* \par The application can use the MAEvent.data field to access
* widget event data, which is of type MAWidgetEventData.
* For example: \n
* \code MAWidgetEventData* widgetEventData = (MAWidgetEventData*) event.data; \endcode
* \see MAWidgetEventData
*/
#define EVENT_TYPE_WIDGET 28

/** \brief The bluetooth chip was turned off.
* Bluetooth functions will return #CONNERR_UNAVAILABLE.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_OFF 29

/** \brief The bluetooth chip was turned on.
* Bluetooth functions will now work normally again.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_ON 30

/**
* \brief The ImagePicker dialog was dismissed either by Cancel, either by OK.
*/
#define EVENT_TYPE_IMAGE_PICKER 31

/** \brief SMS result message.
* The field status contains one of the
* This event is sent on Android and iOS.
*/
#define EVENT_TYPE_SMS 32

/**
* \brief Provides data from active sensors.
* \see MAEvent::sensor
* \see maSensorStart()
*/
#define EVENT_TYPE_SENSOR 33

/**
* \brief The maAlert message box was dismissed by one of the available buttons.
* See #EVENT_TYPE_ALERT for the event.
*/
#define EVENT_TYPE_ALERT 34

/** \brief A new NFC tag was received
* A new tag has been received, use maGetNextTag to
* retreive it.
*/
#define EVENT_TYPE_NFC_TAG_RECEIVED 35

/** \brief New tag data was read
* An asynchronous NFC tag read operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_READ 36

/** \brief New tag data was written
* An asynchronous NFC tag write operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_WRITTEN 37

/** \brief A batch operation was performed
*/
#define EVENT_TYPE_NFC_BATCH_OP 38

/** \brief Tag authentication was performed
* An asynchronous NFC tag authentication read was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_AUTH_COMPLETE 39

/**
* \brief Tag was made read only
*  An asynchronous NFC tag read only operation was completed.
*/
#define EVENT_TYPE_NFC_TAG_READ_ONLY 40

/**
* Send by maOptionsBox dialog when one of the option buttons is clicked.
*/
#define EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED 41

/**
* \brief Send by a banner ad.
*/
#define EVENT_TYPE_ADS_BANNER 42

/**
* \brief Send when the application receives a local notification.
*/
#define EVENT_TYPE_LOCAL_NOTIFICATION 43

/**
* \brief Send when the application receives a registration result.
* The application tries to register to Apple Push Service, or Google GCM/C2DM Service,
* and the received result ( either success, either fail) is sending this event.
* After this event is received, get the result of the registration request by
* calling maNotificationPushGetRegistration.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION_REGISTRATION 44

/**
* \brief Send when the application receives an unregistration result.
* The application unregistered from Google GCM/C2DM Service, and will not
* receive anymore push messages.
* Platform: Android only.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION_UNREGISTRATION 45

/**
* \brief Send when the application receives a push notification.
*/
#define EVENT_TYPE_PUSH_NOTIFICATION 46

/**
* \brief Send before the Native Image Picker is dismissed.
* This event will contain a MACaptureEventData struct.
*/
#define EVENT_TYPE_CAPTURE 47

/**
* \brief Send by the Purchase API.
* This event will contain a MAPurchaseEventData struct.
*/
#define EVENT_TYPE_PURCHASE 48

/** \brief The telephone network status changed.
* MAEvent::state is the new state,
* one of the \link #MA_NETWORK_UNKNOWN MA_NETWORK \endlink constants.
*/
#define EVENT_TYPE_NETWORK 49
/// The MoSync Reference Environment, also known as the Emulator.
#define RUNTIME_MORE 1

/// Java ME
#define RUNTIME_JAVA 2

/// Symbian
#define RUNTIME_SYMBIAN 3

/// Windows CE, also known as Windows Mobile.
#define RUNTIME_WINCE 4
/// Caused by a MoSync Panic. MAPanicReport::code is the panic code.
#define REPORT_PANIC 1

/// Caused by a native exception. MAPanicReport::string describes the exception.
#define REPORT_EXCEPTION 2

/// Caused by a platform-specific error. MAPanicReport::code is valid.
#define REPORT_PLATFORM_CODE 3

/// Caused by a call to maPanic(). MAPanicReport::code and MAPanicReport::string are the
/// parameters from the call.
#define REPORT_USER_PANIC 4

/// Caused by the Close event timeout. Neither code or string are valid.
#define REPORT_TIMEOUT 5
#define MA_EXTENSION_MODULE_UNAVAILABLE -1
#define MA_EXTENSION_FUNCTION_UNAVAILABLE -1
#define FONT_TYPE_SERIF 0
#define FONT_TYPE_SANS_SERIF 1
#define FONT_TYPE_MONOSPACE 2
#define FONT_STYLE_NORMAL 0
#define FONT_STYLE_BOLD 1
#define FONT_STYLE_ITALIC 2
/**
* The available result codes for fonts.
*/
/**
* \brief Indicates that the call to a font syscall was successful.
*/
#define RES_FONT_OK 1

/**
* \brief Indicates that an invalid font handle was passed.
*/
#define RES_FONT_INVALID_HANDLE -1

/**
* \brief Indicates that the index was off the list size.
*/
#define RES_FONT_INDEX_OUT_OF_BOUNDS -2

/**
* \brief Indicates that a default font with that combination does not exist.
*/
#define RES_FONT_NO_TYPE_STYLE_COMBINATION -3

/**
* \brief Indicates that there is no font with that name on the device.
*/
#define RES_FONT_NAME_NONEXISTENT -4

/**
* \brief Indicates that maFontGetCount() was not called first.
*/
#define RES_FONT_LIST_NOT_INITIALIZED -5

/**
* \brief Indicates that the buffer is not big enough to store the font name.
*/
#define RES_FONT_INSUFFICIENT_BUFFER -6

/**
* \brief Indicates that an invalid size was passed.
*/
#define RES_FONT_INVALID_SIZE -7

/**
* \brief Indicates that the font cannot be deleted because it is in use.
*  maFontDelete(handle)  fails with this return code.
*/
#define RES_FONT_DELETE_DENIED -8
#define MA_LOC_NONE 1
#define MA_LOC_INVALID 2
#define MA_LOC_UNQUALIFIED 3
#define MA_LOC_QUALIFIED 4
/**
* Availability status code: the location provider is available.
*/
#define MA_LPS_AVAILABLE 1

/**
* Availability status code: the location provider is temporarily unavailable.
* Temporary unavailability means that the method is unavailable due to reasons
* that can be expected to possibly change in the future and the provider to
* become available. An example is not being able to receive the signal because
* the signal used by the location method is currently being obstructed,
* e.g. when deep inside a building for satellite based methods.
* However, a very short transient obstruction of the signal should not cause
* the provider to toggle quickly between TEMPORARILY_UNAVAILABLE and AVAILABLE.
*/
#define MA_LPS_TEMPORARILY_UNAVAILABLE 2

/**
* Availability status code: the location provider is out of service.
* Being out of service means that the method is unavailable and the implementation
* is not able to expect that this situation would change in the near future.
* An example is when using a location method implemented in an external device and
* the external device is detached.
*/
#define MA_LPS_OUT_OF_SERVICE 3
#define MA_ACCESS_READ 1
#define MA_ACCESS_READ_WRITE 3
/// Beginning of file.
#define MA_SEEK_SET 0

/// Current position.
#define MA_SEEK_CUR 1

/// End of file.
#define MA_SEEK_END 2
/// Don't sort the files.
#define MA_FL_SORT_NONE 0

/// Sort the files by date. See maFileDate().
#define MA_FL_SORT_DATE 1

/// Sort the files by name. Case-sensitive?
#define MA_FL_SORT_NAME 2

/// Sort the files by size. See maFileSize().
#define MA_FL_SORT_SIZE 3
/// Oldest / smallest / A first.
#define MA_FL_ORDER_ASCENDING 0x10000

/// Newest / biggest / Z first.
#define MA_FL_ORDER_DESCENDING 0x20000
#define MA_FERR_GENERIC -2
#define MA_FERR_NOTFOUND -3
#define MA_FERR_FORBIDDEN -4
#define MA_FERR_RENAME_FILESYSTEM -5
#define MA_FERR_RENAME_DIRECTORY -6
#define MA_FERR_WRONG_TYPE -7

/// The sorting method requested is unsupported on the current platform.
#define MA_FERR_SORTING_UNSUPPORTED -8
/**
* Values for the status field in the #EVENT_TYPE_SMS event.
* This event is sent on Android and iOS.
* Note: On iOS platforms the MA_SMS_RESULT_DELIVERED message corresponds
* To the SMS being successfully queued by the system. There is no way to
* know if it was actually delivered.
*/
/// The SMS was sent.
#define MA_SMS_RESULT_SENT 1

/// The SMS was NOT sent.
#define MA_SMS_RESULT_NOT_SENT 2

/// The SMS was delivered.
#define MA_SMS_RESULT_DELIVERED 3

/// The SMS was NOT delivered.
#define MA_SMS_RESULT_NOT_DELIVERED 4
#define MA_NETWORK_UNKNOWN 0
#define MA_NETWORK_NO_SERVICE 1
#define MA_NETWORK_EMERGENCY_ONLY 2
#define MA_NETWORK_SEARCHING 3
#define MA_NETWORK_BUSY 4

/**
* Your operator's home network. Data connections are possible here.
*/
#define MA_NETWORK_HOME 5

#define MA_NETWORK_DENIED 6

/**
* You're abroad. Data connections are possible here, but usually, extremely expensive.
* Avoid making any connections unless you have WLAN access,
* or the user is very sure of the cost.
*/
#define MA_NETWORK_ROAMING 7
/** The default. Connects to the IAP saved by maIapSave(), or,
* if there is no saved IAP, opens the IAP selection dialog.
*/
#define MA_IAP_METHOD_STANDARD 1

/**
* Connects to the WLAN IAP with the highest signal strength.
*/
#define MA_IAP_METHOD_WLAN 2
/// All IAPs except WLAN.
#define MA_IAP_FILTER_NOT_WLAN 1

/// Only WLAN IAPs.
#define MA_IAP_FILTER_WLAN 2

/// All IAPs. This is the default.
#define MA_IAP_FILTER_ALL 3
/**
* @brief A constant that represents the flash being on.
*/
/** @ingroup CameraAPI */
#define MA_CAMERA_CONST_BACK_CAMERA 0

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
/** @ingroup CameraAPI */
#define MA_CAMERA_CONST_FRONT_CAMERA 1
/**
* @brief A constant that represents successful camera operation.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_OK 1

/**
* @brief A constant that represents a failed camera operation.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_FAILED -2

/**
* @brief A constant that represents a camera failing to start.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_NOT_STARTED -3

/**
* @brief A constant that represents a property not supported by the device.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_PROPERTY_NOTSUPPORTED -4

/**
* @brief A constant that represents an invalid value for that property.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_INVALID_PROPERTY_VALUE -5

/**
* @brief A constant that represents a property value not supported by the device.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_VALUE_NOTSUPPORTED -6
/**
* @brief A constant that represents the flash being on.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_ON "on"

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_AUTO "auto"

/**
* @brief A constant that represents the flash being off.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_OFF "off"

/**
* @brief A constant that represents the flash being in the torch mode.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_TORCH "torch"
/**
* @brief A constant that represents the focus mode being automatic.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_AUTO "auto"

/**
* @brief A constant that turns the camera to focus to infinity.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_INFINITY "infinity"

/**
* @brief A constant that turns the camera to macro mode.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_MACRO "macro"

/**
* @brief A constant that sets the camera to fixed focus mode.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_FIXED "fixed"
/**
* @brief A constant that represents JPEG image format.
*/
/** @ingroup ImageFormat */
#define MA_CAMERA_IMAGE_JPEG "jpeg"

/**
* @brief A constant that represents RAW image format.
*/
/** @ingroup ImageFormat */
#define MA_CAMERA_IMAGE_RAW "raw"
/**
* @brief Sets the flash mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FLASH_ON, #MA_CAMERA_FLASH_OFF, #MA_CAMERA_FLASH_AUTO, #MA_CAMERA_FLASH_TORCH constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FLASH_MODE, MA_CAMERA_FLASH_AUTO);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FLASH_MODE "flash-mode"

/**
* @brief Sets the focus mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FOCUS_AUTO, #MA_CAMERA_FOCUS_INFINITY, #MA_CAMERA_FOCUS_MACRO, #MA_CAMERA_FOCUS_FIXED constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FOCUS_MODE, MA_CAMERA_FOCUS_AUTO);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FOCUS_MODE "focus-mode"

/**
* @brief Sets the image format for the camera.
*
* @validvalue can be one of the #MA_CAMERA_IMAGE_JPEG, #MA_CAMERA_IMAGE_RAW constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_IMAGE_FORMAT, MA_CAMERA_IMAGE_JPEG);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_IMAGE_FORMAT "image-format"

/**
* @brief Sets the zoom level for the camera.
*
* @validvalue an int string that can be between 0 and #MA_CAMERA_MAX_ZOOM
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_ZOOM, "1");
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_ZOOM "zoom"

/**
* @brief Provides the information about the maximum supported zoom level on the device.
*
* @getonly
*
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_MAX_ZOOM "max-zoom"

/**
* @brief Indicates that if the device supports zoom or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_ZOOM_SUPPORTED "zoom-supported"

/**
* @brief Indicates that if the device has a flash or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FLASH_SUPPORTED "flash-supported"
/// The user is allowed to enter any text, including line breaks.
#define MA_TB_TYPE_ANY 0

/// The user is allowed to enter an e-mail address.
#define MA_TB_TYPE_EMAILADDR 1

/// The user is allowed to enter an integer value.
#define MA_TB_TYPE_NUMERIC 2

/// The user is allowed to enter a phone number.
#define MA_TB_TYPE_PHONENUMBER 3

/// The user is allowed to enter a URL.
#define MA_TB_TYPE_URL 4

/// The user is allowed to enter a real number value.
/// This extends #MA_TB_TYPE_NUMERIC by allowing a decimal point.
#define MA_TB_TYPE_DECIMAL 5

/** \brief The user is allowed to enter any text, except for line breaks.
* Unavailable on some platforms.
* In that case, maTextBox() will return #MA_TB_RES_TYPE_UNAVAILABLE.
* You can use #MA_TB_TYPE_ANY instead.
*/
#define MA_TB_TYPE_SINGLE_LINE 100

/** Use this to separate types from flags in the \a constraints parameter.
* This is not a valid type value.
*/
#define MA_TB_TYPE_MASK 0xFFFF
/// The user chose OK.
#define MA_TB_RES_OK 1

/// The user chose Cancel.
#define MA_TB_RES_CANCEL 2

/// The specified type is unavailable on this platform.
#define MA_TB_RES_TYPE_UNAVAILABLE -3
/// Indicates that the text entered is confidential data that should be
/// obscured whenever possible.
/// This implies #MA_TB_FLAG_SENSITIVE.
#define MA_TB_FLAG_PASSWORD 0x10000

/// Indicates that editing is disallowed.
#define MA_TB_FLAG_UNEDITABLE 0x20000

/// Indicates that the text entered is sensitive data that the implementation
/// must never store into a dictionary or table for use in predictive, auto-completing,
/// or other accelerated input schemes. A credit card number is an example of sensitive data.
#define MA_TB_FLAG_SENSITIVE 0x40000

/// Indicates that the text entered does not consist of words that are likely
/// to be found in dictionaries typically used by predictive input schemes.
#define MA_TB_FLAG_NON_PREDICTIVE 0x80000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each word should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_WORD 0x100000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each sentence should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_SENTENCE 0x200000
/// A persistent notification that will launch the
/// application when selected.
#define NOTIFICATION_TYPE_APPLICATION_LAUNCHER 1
/// Landscape screen orientation.
#define SCREEN_ORIENTATION_LANDSCAPE 1

/// Portrait screen orientation.
#define SCREEN_ORIENTATION_PORTRAIT 2

/// Screen orientation is based on device sensor.
#define SCREEN_ORIENTATION_DYNAMIC 3
/// The device is in portrait mode, with the device held upright and the home button on
/// the bottom.
#define MA_SCREEN_ORIENTATION_PORTRAIT 0x000001

/// The device is in portrait mode but upside down, with the device held upright and the
/// home button at the top.
#define MA_SCREEN_ORIENTATION_PORTRAIT_UPSIDE_DOWN 0x000002

/// The device is in landscape mode, with the device held upright and the home button on
/// the left side.
#define MA_SCREEN_ORIENTATION_LANDSCAPE_LEFT 0x000004

/// The device is in landscape mode, with the device held upright and the home button on
/// the right side.
#define MA_SCREEN_ORIENTATION_LANDSCAPE_RIGHT 0x000008
///
#define MA_SCREEN_ORIENTATION_RES_OK 0

///
#define MA_SCREEN_ORIENTATION_RES_NOT_SUPPORTED -1

///
#define MA_SCREEN_ORIENTATION_RES_INVALID_VALUE -2
/// Application will run with screen on (consumes power).
#define MA_WAKE_LOCK_ON 1

/// Turn off the wake lock.
#define MA_WAKE_LOCK_OFF 2
/** @ingroup SensorTypes */
#define SENSOR_TYPE_ACCELEROMETER 1
/** @ingroup SensorTypes */
#define SENSOR_TYPE_MAGNETIC_FIELD 2
/** @ingroup SensorTypes */
#define SENSOR_TYPE_ORIENTATION 3
/** @ingroup SensorTypes */
#define SENSOR_TYPE_GYROSCOPE 4
/** @ingroup SensorTypes */
#define SENSOR_TYPE_PROXIMITY 5
/** @ingroup SensorTypes */
#define SENSOR_TYPE_COMPASS 6
/** @ingroup SensorConsts */
#define SENSOR_RATE_FASTEST 0
/** @ingroup SensorConsts */
#define SENSOR_RATE_GAME -1
/** @ingroup SensorConsts */
#define SENSOR_RATE_NORMAL -2
/** @ingroup SensorConsts */
#define SENSOR_RATE_UI -3
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NONE 0
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NOT_AVAILABLE -1
/** @ingroup SensorConsts */
#define SENSOR_ERROR_INTERVAL_NOT_SET -2
/** @ingroup SensorConsts */
#define SENSOR_ERROR_ALREADY_ENABLED -3
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NOT_ENABLED -4
/** @ingroup SensorConsts */
#define SENSOR_ERROR_CANNOT_DISABLE -5
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_UNKNOWN 0
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_PORTRAIT 1
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_PORTRAIT_UPSIDE_DOWN 2
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_LANDSCAPE_LEFT 3
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_LANDSCAPE_RIGHT 4
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_FACE_UP 5
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_FACE_DOWN 6
/** @ingroup SensorConsts */
#define SENSOR_PROXIMITY_VALUE_FAR 0
/** @ingroup SensorConsts */
#define SENSOR_PROXIMITY_VALUE_NEAR 1
/**
* A constant indicating there is no NFC support on the device.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NOT_AVAILABLE -1

/**
* A constant indicating NFC is not enabled on the device. (But there is hardware support).
*/
/** @ingroup NFCAPI */
#define MA_NFC_NOT_ENABLED -2

/**
* A constant indicating an invalid tag type.
*/
/** @ingroup NFCAPI */
#define MA_NFC_INVALID_TAG_TYPE -2

/**
* An error code if tag connection is lost.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_CONNECTION_LOST -3

/**
* An error code if trying to perform I/O on an unconnected
* tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_NOT_CONNECTED -4

/**
* An error code used by maNFCWriteNDEF if maNFCWriteNDEF was
* performed on an NDEF_FORMATTABLE tag and failed.
*/
/** @ingroup NFCAPI */
#define MA_NFC_FORMAT_FAILED -5

/**
* An error code if some general I/O error occurred,
* other than the special case of tag connection being lost.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_IO_ERROR -127
/**
* Represents an NDEF (NFC Data Exchange Format) tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NDEF 1

/**
* Represents a Mifare Classic tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_MIFARE_CL 2

/**
* Represents a Mifare Ultralight tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_MIFARE_UL 3

/**
* Represents an NfcA tag (ISO 14443-3A).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NFC_A 4

/**
* Represents an NfcB tag (ISO 14443-3B).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NFC_B 5

/**
* Represents an ISO-DEP tag (ISO 14443-4).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_ISO_DEP 6

/**
* Represents an 'abstract' tag that can
* accept requests for formatting it into
* an NDEF tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NDEF_FORMATTABLE 128
/**
* Indicates the NDEF message is empty.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_EMPTY 0

/**
* Indicates the NDEF message is of a 'well-known' type;
* it may be further identified using the MA_NFC_NDEF_RTD_*
* constants.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_WELL_KNOWN 1

/**
* Indicates the NDEF message contains mime media;
* use maNFCGetType() to get the mime type.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_MIME_MEDIA 2

/**
* Indicates the NDEF message contains an absolute URI,
* the type conforming to RFC 3986.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_ABSOLUTE_URI 3

/**
* Indicates the type of the NDEF message being 'external'.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_EXTERNAL_TYPE 4

/**
* Indicates the contents of the NDEF message to be of
* an unknown type. The type of the NDEF message should
* be empty.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_UNKNOWN 5

/**
* Constant for chunked NDEF messages.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_UNCHANGED 6

/**
* Reserved constant.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_RESERVED 7
/**
* The A key for MiFare Classic authentication
*/
/** @ingroup NFCAPI */
#define MA_NFC_MIFARE_KEY_A 1

/**
* The B key for MiFare Classic authentication
*/
/** @ingroup NFCAPI */
#define MA_NFC_MIFARE_KEY_B 2
/** @ingroup DBAPI */
#define MA_DB_TYPE_NULL 1
/** @ingroup DBAPI */
#define MA_DB_TYPE_INT 2
/** @ingroup DBAPI */
#define MA_DB_TYPE_INT64 3
/** @ingroup DBAPI */
#define MA_DB_TYPE_DOUBLE 4
/** @ingroup DBAPI */
#define MA_DB_TYPE_BLOB 5
/** @ingroup DBAPI */
#define MA_DB_TYPE_DATA 6
/** @ingroup DBAPI */
#define MA_DB_TYPE_TEXT 7
/**
 * Status codes returned by the maDB functions.
 */
/**
 * Success return value.
 */
/** @ingroup DBAPI */
#define MA_DB_OK 0

/**
 * Error return value (-1 reserved for IOCtl not implemented).
 */
/** @ingroup DBAPI */
#define MA_DB_ERROR -2

/**
 * The cursor is beyond the last row
 * when calling #maDBCursorNext.
 */
/** @ingroup DBAPI */
#define MA_DB_NO_ROW -3

/**
 * A database field value was NULL when calling
 * the maDBCursorGetColumn* functions.
 */
/** @ingroup DBAPI */
#define MA_DB_NULL -4
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_DATA_STREAM 1
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_OK 0
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_INVALID_INSTANCE -2
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_INVALID_DATA -3
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_INVALID_FILENAME -4
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_INVALID_FILE -5
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_STREAMING_NOT_SUPPORTED -6
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_VOLUME_OUT_OF_RANGE -7
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_POSITION_OUT_OF_RANGE -8
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_INVALID_SOUND_FORMAT -9
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_OUT_OF_MEMORY -10
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_ALREADY_PREPARED -11
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_PREPARE_FAILED -12
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_IS_PLAYING -13
/** @ingroup AudioAPIConsts */
#define MA_AUDIO_ERR_GENERIC -14
/**
* @brief Indicates that the call was successful.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_OK 0

/**
* @brief Indicates that the call to a maAdsAddBannerToScreen or maAdsRemoveBannerFromScreen received
* an invalid layout handle.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_INVALID_LAYOUT_HANDLE -1

/**
* @brief Indicates that the call to a banner function received an invalid banner handle.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_INVALID_BANNER_HANDLE -2

/**
* @brief Indicates that the call to maAdsBannerSetProperty or maAdsBannerGetProperty received
* an invalid property name.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_INVALID_PROPERTY_NAME -3

/**
* @brief Indicates that the call to maAdsBannerSetProperty or maAdsBannerGetProperty received
* an invalid property value.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maAdsBannerSetProperty needs a larger buffer.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that the call to an Ad syscall was unsuccessful.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_ERROR -6

/**
* @brief Indicates that ads are not supported on current platform.
*/
/** @ingroup AdsResultCodes */
#define MA_ADS_RES_UNSUPPORTED -7
/**
* @brief Indicates that something happened internally: for instance, the Activity may have been destroyed mid-refresh.
* Platform: Android.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_INTERNAL -1

/**
* @brief Indicates that the ad request is invalid.
* Platform: Android.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_INVALID_REQUEST -2

/**
* @brief Indicates that the connection to the advertisements server failed.
* Platform: Android, iOS and Windows Phone 7.1.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_NETWORK -3

/**
* @brief Indicates that no ad was returned due to lack of ad inventory.
* Platform: Android, iOS and Windows Phone 7.1.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_NO_FILL -4

/**
* @brief Indicates that your application has not been configured to receive advertisements.
* Platform: iOS.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_CONFIGURATION -5

/**
* @brief Indicates that the banner is visible, but no advertisement is shown.
* Your application must always hide the banner when it does not have an advertisement to display.
* Platform: iOS.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_NO_CONTENT -6

/**
* @brief Indicates that ad content is not available because the application is not currently active.
* Platform: iOS.
*/
/** @ingroup AdsErrorCodes */
#define MA_ADS_ERROR_APPLICATION_INACTIVE -7
/**
* @brief Gets the height of the ads banner.
* The view will have no size until the ad is loaded.
*
* @validvalue an int.
*
* @getonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerGetProperty(MA_ADS_HEIGHT, buf);
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_HEIGHT "height"

/**
* @brief Gets the width of the ads banner.
* The view will have no size until the ad is loaded.
*
* @validvalue an int.
*
* @getonly
*
* @par Example
* \code
*    char buf[256];
*	maAdsBannerGetProperty(MA_ADS_WIDTH, buf);
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_WIDTH "width"

/**
* @brief Sets whether the banner is visible or not. Layouts ignore invisible widgets.
* The banner is visible by default.
*
* @validvalue A boolean string 'true' or 'false', where true is visible and false is invisible.
*
* @setandget
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_VISIBLE, "false");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_VISIBLE "visible"

/**
* @brief Sets whether the banner is enabled or not. If disabled, the user cannot interact with it.
* Ads are enabled by default.
*
* @validvalue A boolean string 'true' or 'false', where true is enabled and false is disabled.
*
* @setandget
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_ENABLED, "false");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_ENABLED "enabled"

/**
* @brief Sets the devices that are going to receive test ads only.
* You should utilize this property during development to avoid generating false impressions.
* Available only on Android.
*
* @validvalue String that holds the device ID.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_TEST_DEVICE, "E83D20734F72FB3108F104ABC0FFC738"); // My T-Mobile G1 test phone
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_TEST_DEVICE "testDevice"

/**
* @brief Sets the request state of the ads.
* If set to true ads are starting to be requested, if set to false the request for ads is stopped.
* After requesting for content no other property setter will be taken into account.
* @validvalue A boolean string 'true' or 'false'.
* Available only on Android.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_REQUEST_CONTENT, "true");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_REQUEST_CONTENT "requestContent"

/**
* @brief Returns true if the ad is successfully loaded and is ready to be shown.
* Available only on Android.
*
* @validvalue A boolean string 'true' or 'false'.
*
* @getonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerGetProperty(bannerHandle, MA_ADS_IS_READY, buf);
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_IS_READY "isReady"

/**
* @brief Sets the coloration of test ads, specifically the background color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BG, "0xAAAAFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_BG "colorBg"

/**
* @brief Sets the coloration of test ads,specifically the gradient background color at top.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BG_TOP, "0xFFFFFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_BG_TOP "colorBgTop"

/**
* @brief Sets the coloration of test ads, specfiically the border color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_BORDER, "0xFFFFFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_BORDER "colorBorder"

/**
* @brief Sets the coloration of test ads, specfiically the link text color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_LINK, "0xFFFFFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_LINK "colorLink"

/**
* @brief Sets the coloration of test ads, specfiically the text color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_TEXT, "0xFFFFFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_TEXT "colorText"

/**
* @brief Sets the coloration of test ads, specfiically the url color.
*
* @validvalue A hexadecimal value 0xRRGGBB, where R, G and B are the red, green and blue components respectively.
*
* @setonly
*
* @par Example
* \code
*   char buf[256];
*	maAdsBannerSetProperty(bannerHandle, MA_ADS_COLOR_URL, "0xFFFFFF");
* \endcode
*/
/** @ingroup AdsProperties */
#define MA_ADS_COLOR_URL "colorUrl"
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_BANNER 0
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_RECT 1
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_IAB_BANNER 2
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_LEADERBOARD 3
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_WP7_XLARGE 4
/** @ingroup AdsConstants */
#define MA_ADS_SIZE_WP7_XXLARGE 5
/** @ingroup AdsEventTypes */
#define MA_ADS_EVENT_FAILED 0
/** @ingroup AdsEventTypes */
#define MA_ADS_EVENT_LOADED 1
/** @ingroup AdsEventTypes */
#define MA_ADS_EVENT_ON_DISMISS 2
/** @ingroup AdsEventTypes */
#define MA_ADS_EVENT_ON_LEAVE_APPLICATION 3
/**
* @brief Indicates that the call was successful.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_OK 0

/**
* @brief Indicates that the syscall received an invalid local notification handle.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_INVALID_HANDLE -1

/**
* @brief Indicates that the call to maNotificationLocalSetProperty or maNotificationLocalGetProperty received
* an invalid property name.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_INVALID_PROPERTY_NAME -3

/**
* @brief Indicates that the call to maNotificationLocalSetProperty or maNotificationLocalGetProperty received
* an invalid property value.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maNotificationLocalGetProperty or maNotificationPushGetData needs a larger buffer.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that notifications are not supported on current platform.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_UNSUPPORTED -6

/**
* @brief Indicates that maNotficationLocalSetProperty cannot be called after scheduling via
* maNotificationLocalSchedule, or that the call to maNotificationLocalSchedule failed because
* the notification was already scheduled.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_ALREADY_SCHEDULED -7

/**
* @brief Indicates that the call to maNotificationLocalUnschedule failed because the notification
* was not scheduled.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_CANNOT_UNSCHEDULE -8

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccessful because
* the application is already registered for receiving push notification.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_ALREADY_REGISTERED -9

/**
* @brief Indicates that the call to maNotificationPushUnregister was unsuccessful because
* the application is not registered for receiving push notification.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_NOT_REGISTERED -10

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccessful because
* the application did not finish processing a previous registration request.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_IN_PROGRESS -11

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the
* device can't read the response, or there was a 500/503 from the server that can be retried later.
* The application should use exponential back off and retry.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_SERVICE_NOT_AVAILABLE -12

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because there is no
* Google account on the phone.
* The application should ask the user to open the account manager and add a Google account.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_ACCOUNT_MISSING -13

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the password was bad.
* The application should ask the user to enter his/her password, and let user retry manually later.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_AUTHENTICATION_FAILED -14

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the user has too many
* applications registered.
* The application should tell the user to uninstall some other applications, let user retry manually.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_TOO_MANY_REGISTRATIONS -15

/**
* @brief Indicates that the call to maNotificationPushRegister was unsuccesfull because the sender account
* is not recognized.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_INVALID_SENDER -16

/**
* @brief  Indicates that the call to maNotificationPushRegister was unsuccesfull because of incorrect
* phone registration with Google. This phone doesn't currently support GCM/C2DM.
* Platform: Android only.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_PHONE_REGISTRATION_ERROR -17

/**
* @brief Indicates that the call to maNotificationPushGetRegistration needs a larger buffer.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_MESSAGE_BUF_TOO_SMALL -18

/**
* @brief Indicates that the call to maNotificationPushGetRegistration occured before trying to register.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_REGISTRATION_NOT_CALLED -19

/**
* @brief Indicates that the call to an notification syscall was unsuccessful.
*/
/** @ingroup NotificationResultCodes */
#define MA_NOTIFICATION_RES_ERROR -20
/**
* If set, the audio will be repeated until the notification is canceled or the
* notification window is opened.
* Platform: Android only.
*/
/** @ingroup NotificationFlags */
#define MA_NOTIFICATION_FLAG_INSISTENT 4

/**
* Should be set if the notification should not be canceled when the user clicks the
* Clear all button.
* Platform: Android only.
*/
/** @ingroup NotificationFlags */
#define MA_NOTIFICATION_FLAG_NO_CLEAR 32

/**
* Should be set if this notification represents a high-priority event that may be shown to
* the user even if notifications are otherwise unavailable (that is, when the status bar is hidden).
* Platform: Android only.
*/
/** @ingroup NotificationFlags */
#define MA_NOTIFICATION_FLAG_HIGH_PRIORITY 128

/**
* Should be set if the notification should be canceled when it is clicked by the user.
* Platform: Android only.
*/
/** @ingroup NotificationFlags */
#define MA_NOTIFICATION_FLAG_AUTO_CANCEL 16
/**
* For local notifications: if set, the incoming notifications will be displayed to
* the user only if the application is in background.
* For push notifications: if set, the incoming notifications will be displayed to
* the user only if the application is not in use.
* Note that the received push notification event will always be received regardless
* of this flag.
* This setting is enabled by default.
* Platform: Android only.
*/
/** @ingroup NotificationDisplayFlags */
#define MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT 0

/**
* If set, all the incoming notification will be displayed to the user regardless of
* it's focus state.
* For local notifications: this means that the user will get the notifications when the
* application is in background, but also in foreground.
* For push notifications: this means that the user will get the notifications when the
* application is closed, but also when it's in use.
* Note that the  event will always be received regardless of this flag.
* Platform: Android only.
*/
/** @ingroup NotificationDisplayFlags */
#define MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME 1
/**
* @brief The application accepts notifications that badge the application icon.
* Platform: iOS only.
*/
/** @ingroup NotificationPushTypes */
#define MA_NOTIFICATION_PUSH_TYPE_BADGE 1

/**
* @brief The application accepts alert sounds as notifications.
* Platform: iOS only.
*/
/** @ingroup NotificationPushTypes */
#define MA_NOTIFICATION_PUSH_TYPE_SOUND 2

/**
* @brief The application accepts alert messages as notifications.
* This is the only push notification type that is supported by
* both Android and iOS.
*/
/** @ingroup NotificationPushTypes */
#define MA_NOTIFICATION_PUSH_TYPE_ALERT 4
/**
* @brief Set the number displayed on the application's icon badge.
* Platform: iOS.
*
* @validvalue an int.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*	maNotificationLocalGetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_BADGE_NUMBER, buf);
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_BADGE_NUMBER "badge_number"

/**
* @brief Set the date and time when the system should deliver the notification.
*
* @validvalue an int.
* The date is in seconds(UNIX time - seconds elapsed since January 1, 1970).
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*	maNotificationLocalGetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FIRE_DATE, buf);
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_FIRE_DATE "fire_date"

/**
* @brief Set the message displayed in the notification alert.
* Platform: Android and iOS.
*
* @validvalue an string.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_CONTENT_BODY, "Did you forget something?");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_CONTENT_BODY "content_body"

/**
* @brief Set the title of the action button or slider.
* Platform: iOS.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_ALERT_ACTION, "Show");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_ALERT_ACTION "alert_action"

/**
* @brief Enable/disable the sound played when an alert is displayed.
* Platform: iOS and Android.
* If set to true, it will play the default sound.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_PLAY_SOUND, "true");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_PLAY_SOUND "play_sound"

/**
* @brief Set the sound to play when an alert is displayed.
* The sound file should be saved in a notifications folder under sdcard storage.
* Note that some devices can only play notification sounds stored in the internal storage,
* in the \system\media\audio\notifications folder.
* Platform: Android.
*
* @validvalue a valid path to an audio file.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_SOUND_PATH, "....");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_SOUND_PATH "soundPath"

/**
* @brief Set the title that goes in the expanded entry of the notification.
* Platform: Android.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_CONTENT_TITLE, "My message");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_CONTENT_TITLE "contentTitle"

/**
* @brief The text that flows by in the status bar when the notification first activates.
* Platform: Android.
*
* @validvalue a string.
*
* @setandget
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_TICKER_TEXT, "You got new message");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_TICKER_TEXT "tickerText"

/**
* @brief Set the flags applied to the local notification.
* Platform: Android.
*
* @validvalue One of the constants:
* - #MA_NOTIFICATION_FLAG_INSISTENT
* - #MA_NOTIFICATION_FLAG_AUTO_CANCEL
* - #MA_NOTIFICATION_FLAG_HIGH_PRIORITY
* - #MA_NOTIFICATION_FLAG_NO_CLEAR.
*
* @setonly
*
* @par Example
* \code
*     maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLAG, MA_NOTIFICATION_FLAG_AUTO_CANCEL);
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_FLAG "flag"

/**
* @brief Set the display flag applied to the local notification.
* Note the regardless of this flag, the #EVENT_TYPE_LOCAL_NOTIFICATION event will be received.
* Platform: Android.
*
* @validvalue One of the constants:
* - #MA_NOTIFICATION_DISPLAY_FLAG_DEFAULT Which is enabled by default.
* - #MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME.
*
* @setonly
*
* @par Example
* \code
*    // Display the notification even when the application is in foreground.
*    maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_DISPLAY_FLAG, MA_NOTIFICATION_DISPLAY_FLAG_ANYTIME);
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_DISPLAY_FLAG "displayFlag"

/**
* @brief Enable/disable the the default vibration when an alert is displayed.
* Platform: Android only.
* If set to true, it will use the default notification vibrate. This will ignore any given vibrate.
* Using phone vibration requires the VIBRATE permission.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_VIBRATE, "true");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_VIBRATE "vibrate"

/**
* @brief Set the vibration duration when an alert is displayed.
* Platform: Android only.
* Using phone vibration requires the VIBRATE permission.
*
* @validvalue an int The number of milliseconds to vibrate.
*
* @setonly
*
* @par Example
* \code
*   // Vibrate for 3 seconds.
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_VIBRATE_DURATION, "3000");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_VIBRATE_DURATION "vibrateDuration"

/**
* @brief Enable/Disable the default notification lights.
* This will ignore the #MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN.
* Not every color in the spectrum is supported by the device LEDs, and not every device supports the same
* colors, so the hardware estimates to the best of its ability. Green is the most common notification color.
* Platform: Android only.
*
* @validvalue "true" or "false" strings.
*
* @setandget
*
* @par Example
* \code
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLASH_LIGHTS, "true");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_FLASH_LIGHTS "flashLights"

/**
* @brief Define your own color and pattern for the lights.
* Not every color in the spectrum is supported by the device LEDs, and not every device supports the same
* colors, so the hardware estimates to the best of its ability. Green is the most common notification color.
* Also, not all Android devices support this feature.
* Platform: Android only.
*
* @validvalue An int array containing 3 values:
* - a value for the ledARGB field (for the color),
* - the ledOffMS field (length of time, in milliseconds, to keep the light off),
* - the ledOnMS (length of time, in milliseconds, to keep the light on).
*  returns #MA_NOTIFICATION_RES_ERROR if the current device doesn't support flashing LED.
* @setonly
*
* @par Example
* \code
* // In this example, the green light repeatedly flashes on for 300 milliseconds and turns off for one second.
*	maNotificationLocalSetProperty(notificationHandle, MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN, "0xff00ff00,300,1000");
* \endcode
*/
/** @ingroup LocalNotificationProperties */
#define MA_NOTIFICATION_LOCAL_FLASH_LIGHTS_PATTERN "flashLightsPattern"
/**
* @brief Indicates that the call was successful.
* Platform: Android and iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_OK 0

/**
* @brief The given file name is invalid.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_FILE_INVALID_NAME -1

/**
* @brief The file already exists.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_FILE_ALREADY_EXISTS -2

/**
* @brief Indicates that the call to maCaptureSetProperty or maCaptureGetProperty received
* an invalid property name.
* Platform: iOS and Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_INVALID_PROPERTY -3

/**
* @brief Indicates that the call to maCaptureSetProperty or maCaptureGetProperty received
* an invalid property value.
* Platform: iOS and Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_INVALID_PROPERTY_VALUE -4

/**
* @brief Indicates that the call to maCaptureGetProperty needs a larger buffer.
* Platform: iOS and Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_INVALID_STRING_BUFFER_SIZE -5

/**
* @brief Indicates that the call to maCaptureAction received an invalid action type.
* Platform: iOS and Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_INVALID_ACTION -6

/**
* @brief Indicates that the call to maCaptureDestroyData received an invalid handle.
* Platform: iOS and Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_INVALID_HANDLE -7

/**
* @brief Indicates that capture is not supported on current platform.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_UNSUPPORTED -8

/**
* @brief Indicates that camera is not available at the moment.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_CAMERA_NOT_AVAILABLE -9

/**
* @brief Indicates that video recording is not supported.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_VIDEO_NOT_SUPPORTED -10

/**
* @brief Indicates that camera picture mode is not supported.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_PICTURE_NOT_SUPPORTED -11

/**
* @brief Indicates that flash mode is not supported.
* Platform: iOS.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_FLASH_NOT_SUPPORTED -12

/**
* @brief Indicates that the recording max duration is not supported.
* Platform: Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED -13

/**
* @brief Indicates that a call to maCaptureGetProperty was unsuccessfull
* because the property was not previously set.
* Platform: Android.
*/
/** @ingroup CaptureResultCodes */
#define MA_CAPTURE_RES_PROPERTY_VALUE_UNDEFINED -14
/**
* @brief Maximum duration video that should be recorded, in seconds.
* Platform: Android and iOS.
*
* @validvalue Positive integer value.
* Default value is platform specific.
*
* On iOS the maximum duration is by defualt set to 600 seconds.
*
* On Android devices with API level lower than 8
* it returns #MA_CAPTURE_RES_MAX_DURATION_NOT_SUPPORTED.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", 100);
*	maCaptureSetProperty(MA_CAPTURE_MAX_DURATION, buf);
* \endcode
*/
/** @ingroup CaptureProperties */
#define MA_CAPTURE_MAX_DURATION "maxDuration"

/**
* @brief Set the video recording quality.
* Platform: Android and iOS.
* Android: Note that some devices the default camera either does not support low-res video capture,
* or it doesn't understand/process the MediaStore.EXTRA_SIZE_LIMIT correctly.
*
* @validvalue One of the \link #MA_CAPTURE_VIDEO_QUALITY_LOW MA_CAPTURE_VIDEO_QUALITY \endlink constants.
* iOS: Default value is MA_CAPTURE_VIDEO_QUALITY_MEDIUM.
* Android: Default value is MA_CAPTURE_VIDEO_QUALITY_HIGH.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", MA_CAPTURE_VIDEO_QUALITY_HIGH);
*	maCaptureSetProperty(MA_CAPTURE_VIDEO_QUALITY, buf);
* \endcode
*/
/** @ingroup CaptureProperties */
#define MA_CAPTURE_VIDEO_QUALITY "videoQuality"

/**
* @brief Store the recorded movie/taken photo to the user’s Camera Roll album.
* Platform: iOS.
*
* @validvalue "false" or "true".
* Default value: "true".
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%s", "true");
*	maCaptureSetProperty(MA_CAPTURE_CAMERA_ROLL, buf);
* \endcode
*/
/** @ingroup CaptureProperties */
#define MA_CAPTURE_CAMERA_ROLL "cameraRoll"

/**
* @brief Set the flash mode used by the active camera.
* Platform: iOS.
*
* @validvalue One of the \link #MA_CAPTURE_FLASH_AUTO MA_CAPTURE_FLASH \endlink constants.
* Default value: #MA_CAPTURE_FLASH_AUTO.
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%d", MA_CAPTURE_FLASH_OFF);
*	maCaptureSetProperty(MA_CAPTURE_FLASH, buf);
* \endcode
*/
/** @ingroup CaptureProperties */
#define MA_CAPTURE_FLASH "flash"

/**
* @brief Show/hide default camera controls.
* @brief Show/hide default camera controls.
* Platform: iOS.
*
* @validvalue "true" or "false".
* Default value: "true".
*
* @setandget
*
* @par Example
* \code
*   char buf[256];
*   sprintf(buf, "%s", "false");
*	maCaptureSetProperty(MA_CAPTURE_CAMERA_CONTROLS, buf);
* \endcode
*/
/** @ingroup CaptureProperties */
#define MA_CAPTURE_CAMERA_CONTROLS "cameraControls"
/// Use low-quality video recording.
/// Platform: iOS and Android.
/** @ingroup CaptureVideoQuality */
#define MA_CAPTURE_VIDEO_QUALITY_LOW 0

/// The highest-quality video recording supported for the active camera on the device.
/// Platform: iOS and Android.
/** @ingroup CaptureVideoQuality */
#define MA_CAPTURE_VIDEO_QUALITY_HIGH 1

/// Use medium-quality video recording.
/// Platform: iOS only.
/** @ingroup CaptureVideoQuality */
#define MA_CAPTURE_VIDEO_QUALITY_MEDIUM 2
/// Starts video capture.
/// Platform: Android and iOS.
/** @ingroup CaptureAction */
#define MA_CAPTURE_ACTION_RECORD_VIDEO 0

/// Stops recording.
/// Platform: iOS only.
/** @ingroup CaptureAction */
#define MA_CAPTURE_ACTION_STOP_RECORDING 1

/// Starts image capture (takes photo).
/// Platform: Android and iOS.
/** @ingroup CaptureAction */
#define MA_CAPTURE_ACTION_TAKE_PICTURE 2
/// Sent after a image has been taken.
/// Platform: Android and iOS.
/** @ingroup CaptureEventType */
#define MA_CAPTURE_EVENT_TYPE_IMAGE 0

/// Sent after a video has been taken.
/// Platform: Android and iOS.
/** @ingroup CaptureEventType */
#define MA_CAPTURE_EVENT_TYPE_VIDEO 1

/// Sent if the user cancels taking image/video.
/// Platform: iOS and Android.
/** @ingroup CaptureEventType */
#define MA_CAPTURE_EVENT_TYPE_CANCEL 2
/// Specifies that the device should consider ambient light conditions to automatically
/// determine whether or not to use flash illumination.
/// Platform: iOS.
/** @ingroup CaptureFlashMode */
#define MA_CAPTURE_FLASH_AUTO 0

/// Specifies that flash illumination is always on, no matter what the ambient light conditions are.
/// Platform: iOS.
/** @ingroup CaptureFlashMode */
#define MA_CAPTURE_FLASH_ON 1

/// Specifies that flash illumination is always off, no matter what the ambient light conditions are.
/// Platform: iOS.
/** @ingroup CaptureFlashMode */
#define MA_CAPTURE_FLASH_OFF 2
/**
        * \brief No error occurred.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_OK 0

/**
        * \brief Indicates that in app-purchase is not available because the
* API version is not compatible or the user is not eligible to make
* in-app purchases (for example, the user resides in a country that
* prohibits in-app purchases).
* Platform: Android only.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_UNAVAILABLE -1

/**
        * \brief Indicates that there was an error connecting with the Google Play application.
* Platform: Android.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_CONNECTION_ERROR -2

/**
        * \brief Indicates that the #maPurchaseSupported() call failed because the Google Play
* application is out of date and needs to be updated. In this case, you can provide users
* with an error message that contains a link to the Updating Google Play Help topic.
* Platform: Android.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_OUT_OF_DATE -3

/**
        * \brief
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_CLIENT_INVALID -4

/**
        * \brief
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_NOT_ALLOWED -5

/**
        * \brief Returned by the #maPurchaseSupported()  and #maPurchaseGetField()
        * syscalls if purchase is not allowed on the device.
        * Platform: Android and iOS.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_DISABLED -6

/**
        * \brief Returned by the #maPurchaseGetName(), #maPurchaseVerifyReceipt(),
* #maPurchaseGetField() or #maPurchaseDestroy() syscalls if the productHandle is invalid.
* Platform: Android and iOS.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_INVALID_HANDLE -7

/**
        * \brief Returned by the #maPurchaseGetName() syscall if the the given buffer is
        * too small.
* Platform: Android and iOS.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_BUFFER_TOO_SMALL -8

/**
        * \brief Returned by the #maPurchaseGetField() syscall if the receipt has not been
        * received or if the transaction is invalid.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_RECEIPT_NOT_AVAILABLE -9

/**
        * \brief Returned by the #maPurchaseGetField() syscall if the receipt does not
        * contain the given field.
        */
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_INVALID_FIELD_NAME -10

/**
* \bried returned by the #maPurchaseSetPublicKey() syscall if the encoded public key
* is invalid.
*/
/** @ingroup PurchaseResultCodes */
#define MA_PURCHASE_RES_MALFORMED_PUBLIC_KEY -11
/**
        * \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST ,
        * #MA_PURCHASE_EVENT_VERIFY_RECEIPT event types.
        * Sent by the #maPurchaseRequest() and #maPurchaseVerifyReceipt() syscalls
        * if the given product handle is invalid.
        */
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_INVALID_HANDLE -1

/**
        * \brief Possible error code for any of the requests.
        * Indicates that the connection with the App Store / Google Play has failed.
        */
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_CONNECTION_FAILED -2

/**
        * \brief Possible error code for #MA_PURCHASE_STATE_RECEIPT_ERROR.
        * Indicates that response from App Store/ Google Play for verifying
* a receipt cannot be parsed.
* Platform: iOS.
        */
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_CANNOT_PARSE_RECEIPT -3

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the requested product is not valid
* on the App Store/ Google Play.
* Platform: iOS and Android.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_INVALID_PRODUCT -4

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the client is not allowed to perform
* the attempted action.
* Platform: iOS.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_INVALID_CLIENT -5

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user cancelled the payment request.
* On Android, when the user pressed the back button on the checkout page instead of
* buying the item.
* Platform: iOS and Android.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_CANCELLED -6

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user is not allowed to authorize payments.
* Platform: iOS.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_NOT_ALLOWED -7

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the user did not previously call #maPurchaseSetPublicKey().
* Platform: Android.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_PUBLIC_KEY_NOT_SET -8

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if an unknown or unexpected server error occurred.
* Platform: iOS and Android.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_UNKNOWN -9

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_REQUEST.
* Sent by the #maPurchaseRequest() syscall if the quantity is not greater than zero.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_INVALID_QUANTITY -10

/**
* \brief Possible error code for #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Sent by the #maPurchaseVerifyReceipt() syscall if the product has not been purchased.
* Platform: iOS and Android.
*/
/** @ingroup PurchaseErrorCodes */
#define MA_PURCHASE_ERROR_NO_RECEIPT -11
/**
        * \brief Sent by the #maPurchaseCreate() syscall.
        * Check the event state member object to see if the product is valid or if an error occured.
* Platform: Android and iOS.
        */
/** @ingroup PurchaseEventTypes */
#define MA_PURCHASE_EVENT_PRODUCT_CREATE 0

/**
        * \brief Sent by the #maPurchaseRequest syscall after an operation step has been completed
        * or if the operation has failed. Check event's purchaseData struct variable
        * for more information.
* Platform: Android and iOS.
        */
/** @ingroup PurchaseEventTypes */
#define MA_PURCHASE_EVENT_REQUEST 1

/**
        * \brief Sent by the #maPurchaseVerifyReceipt() syscall.
        * Check the event state member object to see if the receipt is valid or not.
        * Platform: Android and iOS.
*/
/** @ingroup PurchaseEventTypes */
#define MA_PURCHASE_EVENT_VERIFY_RECEIPT 2

/**
* \brief Received when the Billing service triggers a refund for your purchase.
* A new product has been created, and the event's productHandle member contains
* a handle to the purchased product.
        * \brief Platform: Android.
        */
/** @ingroup PurchaseEventTypes */
#define MA_PURCHASE_EVENT_REFUNDED 3

/**
        * \brief Sent by the #maPurchaseRestoreTransactions() syscall.
        * A new product has been restored, or the request has failed. The event's
* productHandle member contains a handle to the purchased product.
        * Platform: iOS and Android.
        */
/** @ingroup PurchaseEventTypes */
#define MA_PURCHASE_EVENT_RESTORE 4
/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that product was validated by the App Store.
* On Android no product validation is done at this moment.
* Platform: iOS and Android.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_PRODUCT_VALID 0

/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that the product is not valid in the App Store.
* Platform: iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_PRODUCT_INVALID 1

/**
* \brief Sent by the #maPurchaseCreate(), #maPurchaseRequest() and
* #maPurchaseVerifyReceipt() syscalls.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE,
* #MA_PURCHASE_EVENT_REQUEST and #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that purchase is not supported/disabled on the device.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_DISABLED 2

/**
* \brief Sent by the #maPurchaseCreate() syscall.
* Assocciated with #MA_PURCHASE_EVENT_PRODUCT_CREATE.
* Indicates that the given productHandle already exists.
* Use #maCreatePlaceholder() to generate a new one.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_DUPLICATE_HANDLE 3

/**
        * \brief Sent by the #maPurchaseRequest syscall if the operation failed.
        * Check the errorCode variable from event's purchaseData struct for more info.
        */
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_FAILED 0

/**
        * \brief Sent by the #maPurchaseRequest syscall when the transaction has been received by the
        * Apple App Store/Google Play.
        */
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_IN_PROGRESS 1

/**
        * \brief Sent by the #maPurchaseRequest syscall when the transaction has been successfully
        * processed. Your application should provide the content the user purchased.
        */
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_COMPLETED 2

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that the receipt has been validated by the App Store / Google Play.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_RECEIPT_VALID 4

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that the receipt has been invalidated by the App Store / Google Play.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_RECEIPT_INVALID 5

/**
* \brief Sent by the #maPurchaseVerifyReceipt() syscall.
* Assocciated with #MA_PURCHASE_EVENT_VERIFY_RECEIPT.
* Indicates that an error has occurred while verifying the receipt.
        * Check the event's errorCode member object for more information.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_RECEIPT_ERROR 6

/**
* \brief Sent by the #maPurchaseRestoreTransactions() syscall.
* Associated with #MA_PURCHASE_EVENT_RESTORE.
* Indicates that an error has occured while restoring transactions.
* The error can be one of the following: #MA_PURCHASE_ERROR_CONNECTION_FAILED,
* #MA_PURCHASE_ERROR_PUBLIC_KEY_NOT_SET.
        * Check the event's errorCode member object for more information.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_RESTORE_ERROR -7

/**
* \brief Sent by the #maPurchaseRestoreTransactions() syscall.
* Associated with #MA_PURCHASE_EVENT_RESTORE.
* Indicates that a product has been restored.
* Platform: Android and iOS.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_PRODUCT_RESTORED -8

/**
* \brief Received after a refund was initiated on the server.
* Associated with #MA_PURCHASE_EVENT_REFUNDED.
* Indicates that a product has been refunded.
* Platform: Android.
*/
/** @ingroup PurchaseStateCodes */
#define MA_PURCHASE_STATE_PRODUCT_REFUNDED -9
/**
        * \brief The number of items purchased.
        * Platform: iOS. On Android just one item can be bought at one time.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_QUANTITY "quantity"

/**
        * \brief The product identifier of the item that was purchased.
        * Example: "com.yourapplication.productname".
        * Platform: iOS and Android.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_PRODUCT_ID "product_id"

/**
        * \brief The transaction identifier of the item that was purchased.
        * Platform: iOS and Android.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_TRANSACTION_ID "transaction_id"

/**
        * \brief The date and time this transaction occurred.
        * The date represents the number of seconds that elapsed since 1970-01-01T00:00:00.
        * Platform: iOS and Android.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_PURCHASE_DATE "purchase_date"

/**
        * \brief For a transaction that restores a previous transaction, this holds the original
        * purchase date(in seconds).
        * Platform: iOS.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_ORIGINAL_TRANSACTION_ID "original_transaction_id"

/**
        * \brief A string that the App Store uses to uniquely identify the application that
        * created the payment transaction. If your server supports multiple
        * applications, you can use this value to differentiate between them.
        * Applications that are executing in the sandbox do not yet have an
        * app-item-id assigned to them,so this key is missing from receipts created
        * by the sandbox.
        * Platform: iOS and Android.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_APP_ITEM_ID "app_item_id"

/**
        * \brief An arbitrary number that uniquely identifies a revision of your application.
        * This key is missing in receipts created by the sandbox.
        * Platform: iOS.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_VERSION_EXTERNAL_IDENTIFIER "version_external_identifier"

/**
        * \brief The bundle identifier for the application.
        * Example: "com.yourcompany.yourapplication".
        * Platform: iOS.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_BID "bid"

/**
        * \brief A version number for the application.
        * Platform: iOS.
        */
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_BVRS "bvrs"

/**
* \brief The cost of the product in the local currency.
* Platform: iOS.
*/
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_PRICE "price"

/**
* \brief The localized product title.
* Platform: iOS.
*/
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_TITLE "title"

/**
* \brief The localized product description.
* Platform: iOS.
*/
/** @ingroup PurchaseReceiptFields */
#define MA_PURCHASE_RECEIPT_DESCRIPTION "description"
#define IOCTL_UNAVAILABLE -1
/**
 * \brief A structure representing a two-dimensional point, with coordinates 'x' and 'y'.
 */
typedef struct MAPoint2d {
	int x;
	int y;
} MAPoint2d;
typedef struct MAPoint2dNative {
	int x;
	int y;
} MAPoint2dNative;

/**
 * \brief A structure representing a rectangle.
 *
 * The x and y coordinate of the top-left corner are defined by 'left' and 'top'.
 * The dimensions of the rectangle are defined by 'width' and 'height'.
 */
typedef struct MARect {
	int left;
	int top;
	int width;
	int height;
} MARect;
typedef struct MARectNative {
	int left;
	int top;
	int width;
	int height;
} MARectNative;

/**
* \brief Parameters for the maCopyData() function.
*/
typedef struct MACopyData {
	MAHandle dst;
	int dstOffset;
	MAHandle src;
	int srcOffset;
	int size;
} MACopyData;
typedef struct MACopyDataNative {
	MAHandle dst;
	int dstOffset;
	MAHandle src;
	int srcOffset;
	int size;
} MACopyDataNative;

/**
* \brief An address for the TCP/IPv4 protocol.
*/
typedef struct MAConnAddrInet4 {
	int addr;
	int port;
} MAConnAddrInet4;
typedef struct MAConnAddrInet4Native {
	int addr;
	int port;
} MAConnAddrInet4Native;

/**
* \brief A Bluetooth device address.
*/
typedef struct MABtAddr {
	byte a[BTADDR_LEN];
} MABtAddr;
typedef struct MABtAddrNative {
	byte a[BTADDR_LEN];
} MABtAddrNative;

/**
* \brief An address for the Bluetooth Serial Port protocol.
*/
typedef struct MAConnAddrBt {
	int port;
	MABtAddr addr;
} MAConnAddrBt;
typedef struct MAConnAddrBtNative {
	int port;
	MABtAddr addr;
} MAConnAddrBtNative;

/**
* \brief A connection address.
*/
typedef struct MAConnAddr {
	/// One of the CONN_FAMILY constants
	int family;
	union {

		MAConnAddrInet4 inet4;

		MAConnAddrBt bt;
	};
} MAConnAddr;
typedef struct MAConnAddrNative {
	/// One of the CONN_FAMILY constants
	int family;
	union {

		MAConnAddrInet4 inet4;

		MAConnAddrBt bt;
	};
} MAConnAddrNative;

/**
* \brief Data for a connection event, including an indicator or success or failure.
*/
typedef struct MAConnEventData {
	/// The handle to the connection associated with the event.
	MAHandle handle;

	/// One of the \link #CONNOP_READ CONNOP \endlink constants.
	int opType;

	/// A success value \> 0 or a \link #CONNERR_GENERIC CONNERR \endlink code.
	int result;
} MAConnEventData;
typedef struct MAConnEventDataNative {
	/// The handle to the connection associated with the event.
	MAHandle handle;

	/// One of the \link #CONNOP_READ CONNOP \endlink constants.
	int opType;

	/// A success value \> 0 or a \link #CONNERR_GENERIC CONNERR \endlink code.
	int result;
} MAConnEventDataNative;

/**
* \brief A structure containing the sensor type and the data sent to the event.
*/
typedef struct MASensor {
	int type;
	float values[3];
} MASensor;
typedef struct MASensorNative {
	int type;
	float values[3];
} MASensorNative;

/**
* \brief An event containing the result of an NFC asynchronous operation
*/
typedef struct MANFCEventData {
	/// The handle this event pertains to.
	MAHandle handle;

	/// The result of the asynchronous operation, usually a length if >= 0,
	/// or an error code of < 0.
	int result;

	/// The destination of any read or write operation. Could be a memory
	/// address, a block number, or some other value depending on the operation.
	int dstId;
} MANFCEventData;
typedef struct MANFCEventDataNative {
	/// The handle this event pertains to.
	MAHandle handle;

	/// The result of the asynchronous operation, usually a length if >= 0,
	/// or an error code of < 0.
	int result;

	/// The destination of any read or write operation. Could be a memory
	/// address, a block number, or some other value depending on the operation.
	int dstId;
} MANFCEventDataNative;

/**
* \brief An event send by a banner widget.
*/
typedef struct MAAdsEventData {
	/// Banner's handle that send the event.
	MAHandle bannerHandle;

	/// One of the \link #MA_ADS_EVENT_FAILED MA_ADS_EVENT \endlink constants.
	int bannerEventType;

	/// If bannerEventType is #\link #MA_ADS_EVENT_FAILED MA_ADS_EVENT_FAILED \endlink
	/// this variable will contain the error code.
	/// One of the \link #MA_ADS_ERROR_INTERNAL MA_ADS_ERROR \endlink constants.
	int bannerErrorCode;
} MAAdsEventData;
typedef struct MAAdsEventDataNative {
	/// Banner's handle that send the event.
	MAHandle bannerHandle;

	/// One of the \link #MA_ADS_EVENT_FAILED MA_ADS_EVENT \endlink constants.
	int bannerEventType;

	/// If bannerEventType is #\link #MA_ADS_EVENT_FAILED MA_ADS_EVENT_FAILED \endlink
	/// this variable will contain the error code.
	/// One of the \link #MA_ADS_ERROR_INTERNAL MA_ADS_ERROR \endlink constants.
	int bannerErrorCode;
} MAAdsEventDataNative;

/**
* \brief An event send by the Native Image Picker(Capture API).
*/
typedef struct MACaptureEventData {
	/// One of the \link #MA_CAPTURE_EVENT_TYPE_IMAGE MA_CAPTURE_EVENT_TYPE \endlink constants.
	int type;

	/// Handle to a video/image data object.
	/// This value is set only if the event type is MA_CAPTURE_EVENT_TYPE_IMAGE or MA_CAPTURE_EVENT_TYPE_VIDEO.
	MAHandle handle;
} MACaptureEventData;
typedef struct MACaptureEventDataNative {
	/// One of the \link #MA_CAPTURE_EVENT_TYPE_IMAGE MA_CAPTURE_EVENT_TYPE \endlink constants.
	int type;

	/// Handle to a video/image data object.
	/// This value is set only if the event type is MA_CAPTURE_EVENT_TYPE_IMAGE or MA_CAPTURE_EVENT_TYPE_VIDEO.
	MAHandle handle;
} MACaptureEventDataNative;

/**
* \brief An puchase event struct.
* A MoSync event will contain an struct object of this type only if event type
* is #EVENT_TYPE_PURCHASE.
*/
typedef struct MAPurchaseEventData {
	/**
	* \brief Type of the purchase event.
	* One of the \link MA_PURCHASE_EVENT_REQUEST MA_PURCHASE_EVENT \endlink constants.
	*/
	int type;

	/**
	* \brief State of the purchase.
	* One of the \link MA_PURCHASE_STATE_FAILED MA_PURCHASE_STATE \endlink constants.
	*/
	int state;

	/**
	* \brief Handle to the product that sent the event.
	*/
	MAHandle productHandle;

	/**
	* \brief Reason why the puchase failed.
	* Valid only if the state is #MA_PURCHASE_STATE_FAILED, #MA_PURCHASE_STATE_RECEIPT_INVALID,
	* #MA_PURCHASE_STATE_RECEIPT_ERROR or #MA_PURCHASE_STATE_RESTORE_ERROR.
	* One of the \link MA_PURCHASE_ERROR_INVALID_HANDLE MA_PURCHASE_ERROR \endlink constants.
	*/
	int errorCode;
} MAPurchaseEventData;
typedef struct MAPurchaseEventDataNative {
	/**
	* \brief Type of the purchase event.
	* One of the \link MA_PURCHASE_EVENT_REQUEST MA_PURCHASE_EVENT \endlink constants.
	*/
	int type;

	/**
	* \brief State of the purchase.
	* One of the \link MA_PURCHASE_STATE_FAILED MA_PURCHASE_STATE \endlink constants.
	*/
	int state;

	/**
	* \brief Handle to the product that sent the event.
	*/
	MAHandle productHandle;

	/**
	* \brief Reason why the puchase failed.
	* Valid only if the state is #MA_PURCHASE_STATE_FAILED, #MA_PURCHASE_STATE_RECEIPT_INVALID,
	* #MA_PURCHASE_STATE_RECEIPT_ERROR or #MA_PURCHASE_STATE_RESTORE_ERROR.
	* One of the \link MA_PURCHASE_ERROR_INVALID_HANDLE MA_PURCHASE_ERROR \endlink constants.
	*/
	int errorCode;
} MAPurchaseEventDataNative;

#ifdef SYMBIAN
typedef struct _AS00001 {
	/**
	* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
	*/
	int key;

	/**
	* In KEY events, this will be the native keycode.
	*/
	int nativeKey;
} _AS00001;
typedef struct _AS00001Native {
	/**
	* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
	*/
	int key;

	/**
	* In KEY events, this will be the native keycode.
	*/
	int nativeKey;
} _AS00001Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00002 {
	/**
	* In POINTER events, this will be the location of the pointer.
	*/
	MAPoint2d point;

	/**
	* In POINTER events, this will be the finger triggering the event.
	*/
	int touchId;
} _AS00002;
typedef struct _AS00002Native {
	/**
	* In POINTER events, this will be the location of the pointer.
	*/
	MAPoint2d point;

	/**
	* In POINTER events, this will be the finger triggering the event.
	*/
	int touchId;
} _AS00002Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00003 {
	/**
	* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
	*/
	int textboxResult;

	/**
	* The length, in characters, of the finished text.
	* Does not include the terminating zero.
	*/
	int textboxLength;
} _AS00003;
typedef struct _AS00003Native {
	/**
	* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
	*/
	int textboxResult;

	/**
	* The length, in characters, of the finished text.
	* Does not include the terminating zero.
	*/
	int textboxLength;
} _AS00003Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00004 {
	/**
	 * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
	 */
	int imagePickerState;

	/**
	* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
	*/
	MAHandle imagePickerItem;
} _AS00004;
typedef struct _AS00004Native {
	/**
	 * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
	 */
	int imagePickerState;

	/**
	* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
	*/
	MAHandle imagePickerItem;
} _AS00004Native;
#endif

/**
* \brief An event; a message indicating that something has happened, e.g. that a key has been pressed.
*/
typedef struct MAEvent {
	/**
	* One of the \link #EVENT_TYPE_CLOSE EVENT_TYPE \endlink constants.
	*/
	int type;
	union {

#ifdef SYMBIAN
		_AS00001 ked;
#else
		struct {
			/**
			* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
			*/
			int key;

			/**
			* In KEY events, this will be the native keycode.
			*/
			int nativeKey;
		};
#endif

		/**
		* In CHAR events, this is the Unicode character that was received.
		*/
		uint character;

#ifdef SYMBIAN
		_AS00002 pointer;
#else
		struct {
			/**
			* In POINTER events, this will be the location of the pointer.
			*/
			MAPoint2d point;

			/**
			* In POINTER events, this will be the finger triggering the event.
			*/
			int touchId;
		};
#endif

		/**
		* In \link #EVENT_TYPE_BT BT \endlink events, this will be a value \>= 0 or
		* one of the \link #CONNERR_GENERIC CONNERR \endlink constants.
		*/
		int state;

		/**
		* Valid only in CONN events.
		*/
		MAConnEventData conn;

#ifdef SYMBIAN
		_AS00003 textbox;
#else
		struct {
			/**
			* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
			*/
			int textboxResult;

			/**
			* The length, in characters, of the finished text.
			* Does not include the terminating zero.
			*/
			int textboxLength;
		};
#endif

#ifdef SYMBIAN
		_AS00004 imagePicker;
#else
		struct {
			/**
			 * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
			 */
			int imagePickerState;

			/**
			* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
			*/
			MAHandle imagePickerItem;
		};
#endif

		/**
		* #EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED event, contains the index of the selected option.
		*/
		int optionsBoxButtonIndex;

		/**
		* #EVENT_TYPE_ALERT event. The index of the selected button.
		* If button1 is pressed, the value is 1.
		* If button2 is pressed, the value is 2.
		* If button3 is pressed, the value is 3.
		*/
		int alertButtonIndex;

		/**
		* In #EVENT_TYPE_SMS events, this will be one of the
		* @link #MA_SMS_RESULT_SENT MA_SMS_RESULT_* @endlink constants.
		*/
		int status;

		/**
		* Valid in \link #EVENT_TYPE_SENSOR SENSOR \endlink events.
		*/
		MASensor sensor;

		/**
		* NFC event data
		*/
		MANFCEventData nfc;

		/**
		* Ads event data.
		*/
		MAAdsEventData adsData;

		/**
		* Local notification's handle that send the event.
		* Valid only if the event type is \link #EVENT_TYPE_LOCAL_NOTIFICATION LOCAL_NOTIFICATION \endlink.
		*/
		MAHandle localNotificationHandle;

		/**
		* Push notification's handle that send the event.
		* Valid only if the event type is \link #EVENT_TYPE_PUSH_NOTIFICATION PUSH_NOTIFICATION \endlink.
		*/
		MAHandle pushNotificationHandle;

		/**
		* Store the result for a capture action.
		* Valid only if the event type is \link #EVENT_TYPE_CAPTURE CAPTURE \endlink.
		*/
		MACaptureEventData captureData;

		/**
		* Used by custom events. See invididual event descriptions.
		*/
		MAAddress data;

		/**
		* Contains the prepared audio instance.
		* Valid only if the event type is \link #EVENT_TYPE_AUDIO_PREPARED AUDIO_PREPARED \endlink
		* or \link #EVENT_TYPE_AUDIO_COMPLETED AUDIO_COMPLETED \endlink.
		*/
		MAAudioInstance audioInstance;

		/**
		* Contains purchase related data.
		* Valid only if the event type is \link #EVENT_TYPE_PURCHASE PURCHASE \endlink.
		*/
		MAPurchaseEventData purchaseData;
	};
} MAEvent;
typedef struct MAEventNative {
	/**
	* One of the \link #EVENT_TYPE_CLOSE EVENT_TYPE \endlink constants.
	*/
	int type;
	union {

#ifdef SYMBIAN
		_AS00001 ked;
#else
		struct {
			/**
			* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
			*/
			int key;

			/**
			* In KEY events, this will be the native keycode.
			*/
			int nativeKey;
		};
#endif

		/**
		* In CHAR events, this is the Unicode character that was received.
		*/
		uint character;

#ifdef SYMBIAN
		_AS00002 pointer;
#else
		struct {
			/**
			* In POINTER events, this will be the location of the pointer.
			*/
			MAPoint2d point;

			/**
			* In POINTER events, this will be the finger triggering the event.
			*/
			int touchId;
		};
#endif

		/**
		* In \link #EVENT_TYPE_BT BT \endlink events, this will be a value \>= 0 or
		* one of the \link #CONNERR_GENERIC CONNERR \endlink constants.
		*/
		int state;

		/**
		* Valid only in CONN events.
		*/
		MAConnEventData conn;

#ifdef SYMBIAN
		_AS00003 textbox;
#else
		struct {
			/**
			* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
			*/
			int textboxResult;

			/**
			* The length, in characters, of the finished text.
			* Does not include the terminating zero.
			*/
			int textboxLength;
		};
#endif

#ifdef SYMBIAN
		_AS00004 imagePicker;
#else
		struct {
			/**
			 * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
			 */
			int imagePickerState;

			/**
			* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
			*/
			MAHandle imagePickerItem;
		};
#endif

		/**
		* #EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED event, contains the index of the selected option.
		*/
		int optionsBoxButtonIndex;

		/**
		* #EVENT_TYPE_ALERT event. The index of the selected button.
		* If button1 is pressed, the value is 1.
		* If button2 is pressed, the value is 2.
		* If button3 is pressed, the value is 3.
		*/
		int alertButtonIndex;

		/**
		* In #EVENT_TYPE_SMS events, this will be one of the
		* @link #MA_SMS_RESULT_SENT MA_SMS_RESULT_* @endlink constants.
		*/
		int status;

		/**
		* Valid in \link #EVENT_TYPE_SENSOR SENSOR \endlink events.
		*/
		MASensor sensor;

		/**
		* NFC event data
		*/
		MANFCEventData nfc;

		/**
		* Ads event data.
		*/
		MAAdsEventData adsData;

		/**
		* Local notification's handle that send the event.
		* Valid only if the event type is \link #EVENT_TYPE_LOCAL_NOTIFICATION LOCAL_NOTIFICATION \endlink.
		*/
		MAHandle localNotificationHandle;

		/**
		* Push notification's handle that send the event.
		* Valid only if the event type is \link #EVENT_TYPE_PUSH_NOTIFICATION PUSH_NOTIFICATION \endlink.
		*/
		MAHandle pushNotificationHandle;

		/**
		* Store the result for a capture action.
		* Valid only if the event type is \link #EVENT_TYPE_CAPTURE CAPTURE \endlink.
		*/
		MACaptureEventData captureData;

		/**
		* Used by custom events. See invididual event descriptions.
		*/
		void* data;

		/**
		* Contains the prepared audio instance.
		* Valid only if the event type is \link #EVENT_TYPE_AUDIO_PREPARED AUDIO_PREPARED \endlink
		* or \link #EVENT_TYPE_AUDIO_COMPLETED AUDIO_COMPLETED \endlink.
		*/
		MAAudioInstance audioInstance;

		/**
		* Contains purchase related data.
		* Valid only if the event type is \link #EVENT_TYPE_PURCHASE PURCHASE \endlink.
		*/
		MAPurchaseEventData purchaseData;
	};
} MAEventNative;

/**
* \brief A MoSync Panic or other unrecoverable error.
*
* In MoSync Debug builds, when such an error occurs, the runtime writes
* an instance of this structure to a Store named "panic.report".
*
* The length of that instance may be greater than sizeof(MAPanicReport),
* because of the variable-length string that may appear at its end.
* The member \a string can, then, be longer than the one byte that is declared.
*
* To properly read an instance of this struct from a store, you should allocate a
* chunk of memory whose size is equal to the size of the store, then read the entire store
* into that chunk of memory. Then you should make a pointer of type MAPanicReport and point it
* to the chunk. Then you can read normally, using that pointer.
*
* \see maOpenStore()
* \see maPanic()
* \see malloc()
*/
typedef struct MAPanicReport {
	/// The type of MoSync runtime that wrote the report. A \link #RUNTIME_MORE RUNTIME \endlink constant.
	int runtimeId;

	/**
	* The type report. Specifies whether the members \a code and \a string are valid.
	* A \link #REPORT_PANIC REPORT \endlink constant.
	*/
	int reportType;

	/// The time the report was generated. The format is unix time. \see maTime()
	int time;

	/**
	* The value of the MoSync instruction pointer at the time the report was generated.
	* \< 0 if the MoSync core was inaccessible.
	*/
	int ip;

	int code;

	char string[1];
} MAPanicReport;
typedef struct MAPanicReportNative {
	/// The type of MoSync runtime that wrote the report. A \link #RUNTIME_MORE RUNTIME \endlink constant.
	int runtimeId;

	/**
	* The type report. Specifies whether the members \a code and \a string are valid.
	* A \link #REPORT_PANIC REPORT \endlink constant.
	*/
	int reportType;

	/// The time the report was generated. The format is unix time. \see maTime()
	int time;

	/**
	* The value of the MoSync instruction pointer at the time the report was generated.
	* \< 0 if the MoSync core was inaccessible.
	*/
	int ip;

	int code;

	char string[1];
} MAPanicReportNative;

/**
* \brief Information about a Bluetooth device.
*/
typedef struct MABtDevice {
	///in (pointer), out (buffer)
	MAAddress name;

	///in, the length of the buffer pointed to by a name.
	int nameBufSize;

	///out, the length of the name, excluding the terminating zero.
	int actualNameLength;

	///out
	MABtAddr address;
} MABtDevice;
typedef struct MABtDeviceNative {
	///in (pointer), out (buffer)
	char* name;

	///in, the length of the buffer pointed to by a name.
	int nameBufSize;

	///out, the length of the name, excluding the terminating zero.
	int actualNameLength;

	///out
	MABtAddr address;
} MABtDeviceNative;

/**
* \brief A Universally Unique Identifier.
*
* Common Bluetooth UUID values can be found in MAUtil/mauuid.h.
*/
typedef struct MAUUID {
	int i[4];
} MAUUID;
typedef struct MAUUIDNative {
	int i[4];
} MAUUIDNative;

/**
* \brief Information about an MABtService object.
*/
typedef struct MABtServiceSize {
	/**
	* The buffer size neccesary to contain the full name,
	* or <0 if the service has no name.
	*/
	int nameBufSize;

	/**
	* The number of UUIDs associated with the service.
	*/
	int nUuids;
} MABtServiceSize;
typedef struct MABtServiceSizeNative {
	/**
	* The buffer size neccesary to contain the full name,
	* or <0 if the service has no name.
	*/
	int nameBufSize;

	/**
	* The number of UUIDs associated with the service.
	*/
	int nUuids;
} MABtServiceSizeNative;

/**
* \brief Information about a Bluetooth service.
*/
typedef struct MABtService {
	/**
	* The port number for the service.
	* \see maConnect()
	*/
	int port;

	/**
	* Pointer to a buffer that receives the service's human-readable name.
	*/
	MAAddress name;

	/**
	* The size of the buffer being pointed to by \a name.
	*/
	int nameBufSize;

	/**
	* Pointer to a buffer that receives the UUIDs associated with the service.
	* The buffer must be large enough to contain the number of UUIDs reported
	* by the last call to maBtGetNextServiceSize().
	*/
	MAAddress uuids;
} MABtService;
typedef struct MABtServiceNative {
	/**
	* The port number for the service.
	* \see maConnect()
	*/
	int port;

	/**
	* Pointer to a buffer that receives the service's human-readable name.
	*/
	char* name;

	/**
	* The size of the buffer being pointed to by \a name.
	*/
	int nameBufSize;

	/**
	* Pointer to a buffer that receives the UUIDs associated with the service.
	* The buffer must be large enough to contain the number of UUIDs reported
	* by the last call to maBtGetNextServiceSize().
	*/
	MAUUID* uuids;
} MABtServiceNative;

/**
* \brief A geographical location specified by latitude and longitude, horizontal and vertical accuracy, and altitude.
*
* Only if \a state equals #MA_LOC_QUALIFIED do the other members contain valid data.
*
* Coordinates are in the WGS84 datum.
*
* The horizontal accuracy is the RMS (root mean square) of east accuracy
* (latitudinal error in meters, 1-sigma standard deviation), north accuracy
* (longitudinal error in meters, 1-sigma).
*
* The vertical accuracy is in meters in vertical direction
* (orthogonal to ellipsoid surface, 1-sigma standard deviation).
*
* Accuracy values may be NaN, if accuracy is unknown.
*
* \see maLocationStart()
*/
typedef struct MALocation {
	/**
	* The validity of the coordinates.
	* One of the \link #MA_LOC_NONE MA_LOC \endlink constants.
	*/
	int state;

	double lat;

	double lon;

	double horzAcc;

	double vertAcc;

	float alt;
} MALocation;
typedef struct MALocationNative {
	/**
	* The validity of the coordinates.
	* One of the \link #MA_LOC_NONE MA_LOC \endlink constants.
	*/
	int state;

	double lat;

	double lon;

	double horzAcc;

	double vertAcc;

	float alt;
} MALocationNative;

/**
* \brief A structure containing information about the native framebuffer, including color format and resolution.
*
* The 'sizeInBytes' field is the amount of bytes that should be used to allocate the offscreen framebuffer (a backbuffer).
*/
typedef struct MAFrameBufferInfo {
	int sizeInBytes;
	int bytesPerPixel;
	int bitsPerPixel;
	int redMask;
	int redShift;
	int redBits;
	int greenMask;
	int greenShift;
	int greenBits;
	int blueMask;
	int blueShift;
	int blueBits;
	int width;
	int height;
	int pitch;
	int supportsGfxSyscalls;
} MAFrameBufferInfo;
typedef struct MAFrameBufferInfoNative {
	int sizeInBytes;
	int bytesPerPixel;
	int bitsPerPixel;
	int redMask;
	int redShift;
	int redBits;
	int greenMask;
	int greenShift;
	int greenBits;
	int blueMask;
	int blueShift;
	int blueBits;
	int width;
	int height;
	int pitch;
	int supportsGfxSyscalls;
} MAFrameBufferInfoNative;

/**
* \brief The camera format, in pixels.
*/
/** @ingroup CameraFunctions */
typedef struct MA_CAMERA_FORMAT {
	int width;
	int height;
} MA_CAMERA_FORMAT;
typedef struct MA_CAMERA_FORMATNative {
	int width;
	int height;
} MA_CAMERA_FORMATNative;

/** @ingroup DBAPI */
typedef struct MADBBlob {
	MAAddress data;
	int size;
} MADBBlob;
typedef struct MADBBlobNative {
	MAAddress data;
	int size;
} MADBBlobNative;

/** @ingroup DBAPI */
typedef struct MADBText {
	MAAddress addr;
	/// Length in bytes of the string pointed to by \a addr.
	/// May be \< 0, in which case the string is null-terminated.
	int length;
} MADBText;
typedef struct MADBTextNative {
	MAString addr;
	/// Length in bytes of the string pointed to by \a addr.
	/// May be \< 0, in which case the string is null-terminated.
	int length;
} MADBTextNative;

/// Input value for maDBExecSQLParams().
/** @ingroup DBAPI */
typedef struct MADBValue {
	union {
		int i;
		double d;
		MADBBlob blob;
		MAHandle dataHandle;
		MADBText text;
		longlong i64;
	};
		/// One of the MA_DB_TYPE_ constants.
		int type;
} MADBValue;
typedef struct MADBValueNative {
	union {
		int i;
		double d;
		MADBBlob blob;
		MAHandle dataHandle;
		MADBText text;
		longlong i64;
	};
		/// One of the MA_DB_TYPE_ constants.
		int type;
} MADBValueNative;

/**
* \brief An push notification event.
*/
/** @ingroup NotificationPushStruct */
typedef struct MAPushNotificationData {
	/// A bit mask specifying the types of notifications.
	/// The bit mask is created using \link #MA_NOTIFICATION_PUSH_TYPE_BADGE
	/// MA_NOTIFICATION_PUSH_TYPE \endlink type values.
	/// Specific to iOS. On Android it will be #MA_NOTIFICATION_PUSH_TYPE_ALERT.
	int type;

	/// The  buffer that will contain the message displayed in the notification alert,
	/// or the notification content on Android.
	/// This buffer will be filled only if the type is MA_NOTIFICATION_PUSH_TYPE_ALERT.
	/// Platform: iOS and Android.
	MAAddress alertMessage;

	/// The size of the buffer that will contain the notification alert message.
	int alertMessageSize;

	/// The address to a buffer that will contain the name of the file containing
	/// the sound to play when an alert is displayed.
	/// This buffer will be filled only if the type is MA_NOTIFICATION_PUSH_TYPE_SOUND.
	/// Platform: iOS only.
	MAAddress soundFileName;

	/// The size of the buffer that will contain the sound filename.
	int soundFileNameSize;

	/// Will contain the number to display as the application’s icon badge.
	/// This value will be set only if the type is MA_NOTIFICATION_PUSH_TYPE_BADGE.
	/// Platform: iOS only.
	int badgeIcon;
} MAPushNotificationData;
typedef struct MAPushNotificationDataNative {
	/// A bit mask specifying the types of notifications.
	/// The bit mask is created using \link #MA_NOTIFICATION_PUSH_TYPE_BADGE
	/// MA_NOTIFICATION_PUSH_TYPE \endlink type values.
	/// Specific to iOS. On Android it will be #MA_NOTIFICATION_PUSH_TYPE_ALERT.
	int type;

	/// The  buffer that will contain the message displayed in the notification alert,
	/// or the notification content on Android.
	/// This buffer will be filled only if the type is MA_NOTIFICATION_PUSH_TYPE_ALERT.
	/// Platform: iOS and Android.
	MAString alertMessage;

	/// The size of the buffer that will contain the notification alert message.
	int alertMessageSize;

	/// The address to a buffer that will contain the name of the file containing
	/// the sound to play when an alert is displayed.
	/// This buffer will be filled only if the type is MA_NOTIFICATION_PUSH_TYPE_SOUND.
	/// Platform: iOS only.
	MAString soundFileName;

	/// The size of the buffer that will contain the sound filename.
	int soundFileNameSize;

	/// Will contain the number to display as the application’s icon badge.
	/// This value will be set only if the type is MA_NOTIFICATION_PUSH_TYPE_BADGE.
	/// Platform: iOS only.
	int badgeIcon;
} MAPushNotificationDataNative;

#define maExtensionFunctionInvoke_MAAPI_caselist \

#define maExtensionFunctionInvoke_MAAPI_syscall_caselist \

#define maIOCtl_MAAPI_caselist \
maIOCtl_maExtensionModuleLoad_case(maExtensionModuleLoad) \
maIOCtl_maExtensionFunctionLoad_case(maExtensionFunctionLoad) \
maIOCtl_maFontLoadDefault_case(maFontLoadDefault) \
maIOCtl_maFontSetCurrent_case(maFontSetCurrent) \
maIOCtl_maFontGetCount_case(maFontGetCount) \
maIOCtl_maFontGetName_case(maFontGetName) \
maIOCtl_maFontLoadWithName_case(maFontLoadWithName) \
maIOCtl_maFontDelete_case(maFontDelete) \
maIOCtl_maReportCallStack_case(maReportCallStack) \
maIOCtl_maDumpCallStackEx_case(maDumpCallStackEx) \
maIOCtl_maProtectMemory_case(maProtectMemory) \
maIOCtl_maUnprotectMemory_case(maUnprotectMemory) \
maIOCtl_maSetMemoryProtection_case(maSetMemoryProtection) \
maIOCtl_maGetMemoryProtection_case(maGetMemoryProtection) \
maIOCtl_maGetBatteryCharge_case(maGetBatteryCharge) \
maIOCtl_maLockKeypad_case(maLockKeypad) \
maIOCtl_maUnlockKeypad_case(maUnlockKeypad) \
maIOCtl_maKeypadIsLocked_case(maKeypadIsLocked) \
maIOCtl_maWriteLog_case(maWriteLog) \
maIOCtl_maBtStartDeviceDiscovery_case(maBtStartDeviceDiscovery) \
maIOCtl_maBtGetNewDevice_case(maBtGetNewDevice) \
maIOCtl_maBtStartServiceDiscovery_case(maBtStartServiceDiscovery) \
maIOCtl_maBtGetNextServiceSize_case(maBtGetNextServiceSize) \
maIOCtl_maBtGetNewService_case(maBtGetNewService) \
maIOCtl_maBtCancelDiscovery_case(maBtCancelDiscovery) \
maIOCtl_maLocationStart_case(maLocationStart) \
maIOCtl_maLocationStop_case(maLocationStop) \
maIOCtl_maPlatformRequest_case(maPlatformRequest) \
maIOCtl_maFileOpen_case(maFileOpen) \
maIOCtl_maFileExists_case(maFileExists) \
maIOCtl_maFileClose_case(maFileClose) \
maIOCtl_maFileCreate_case(maFileCreate) \
maIOCtl_maFileDelete_case(maFileDelete) \
maIOCtl_maFileSize_case(maFileSize) \
maIOCtl_maFileAvailableSpace_case(maFileAvailableSpace) \
maIOCtl_maFileTotalSpace_case(maFileTotalSpace) \
maIOCtl_maFileDate_case(maFileDate) \
maIOCtl_maFileRename_case(maFileRename) \
maIOCtl_maFileTruncate_case(maFileTruncate) \
maIOCtl_maFileWrite_case(maFileWrite) \
maIOCtl_maFileWriteFromData_case(maFileWriteFromData) \
maIOCtl_maFileRead_case(maFileRead) \
maIOCtl_maFileReadToData_case(maFileReadToData) \
maIOCtl_maFileTell_case(maFileTell) \
maIOCtl_maFileSeek_case(maFileSeek) \
maIOCtl_maFileListStart_case(maFileListStart) \
maIOCtl_maFileListNext_case(maFileListNext) \
maIOCtl_maFileListClose_case(maFileListClose) \
maIOCtl_maSendTextSMS_case(maSendTextSMS) \
maIOCtl_maFrameBufferGetInfo_case(maFrameBufferGetInfo) \
maIOCtl_maFrameBufferInit_case(maFrameBufferInit) \
maIOCtl_maFrameBufferClose_case(maFrameBufferClose) \
maIOCtl_maAccept_case(maAccept) \
maIOCtl_maSendToBackground_case(maSendToBackground) \
maIOCtl_maBringToForeground_case(maBringToForeground) \
maIOCtl_maGetSystemProperty_case(maGetSystemProperty) \
maIOCtl_maIapSave_case(maIapSave) \
maIOCtl_maIapReset_case(maIapReset) \
maIOCtl_maIapShutdown_case(maIapShutdown) \
maIOCtl_maNetworkStatus_case(maNetworkStatus) \
maIOCtl_maIapSetMethod_case(maIapSetMethod) \
maIOCtl_maIapSetFilter_case(maIapSetFilter) \
maIOCtl_maCameraFormatNumber_case(maCameraFormatNumber) \
maIOCtl_maCameraFormat_case(maCameraFormat) \
maIOCtl_maCameraStart_case(maCameraStart) \
maIOCtl_maCameraStop_case(maCameraStop) \
maIOCtl_maCameraSetPreview_case(maCameraSetPreview) \
maIOCtl_maCameraSelect_case(maCameraSelect) \
maIOCtl_maCameraNumber_case(maCameraNumber) \
maIOCtl_maCameraSnapshot_case(maCameraSnapshot) \
maIOCtl_maCameraRecord_case(maCameraRecord) \
maIOCtl_maCameraSetProperty_case(maCameraSetProperty) \
maIOCtl_maCameraGetProperty_case(maCameraGetProperty) \
maIOCtl_maShowVirtualKeyboard_case(maShowVirtualKeyboard) \
maIOCtl_maTextBox_case(maTextBox) \
maIOCtl_maKeyCaptureStart_case(maKeyCaptureStart) \
maIOCtl_maKeyCaptureStop_case(maKeyCaptureStop) \
maIOCtl_maHomeScreenEventsOn_case(maHomeScreenEventsOn) \
maIOCtl_maHomeScreenEventsOff_case(maHomeScreenEventsOff) \
maIOCtl_maHomeScreenShortcutAdd_case(maHomeScreenShortcutAdd) \
maIOCtl_maHomeScreenShortcutRemove_case(maHomeScreenShortcutRemove) \
maIOCtl_maNotificationAdd_case(maNotificationAdd) \
maIOCtl_maNotificationRemove_case(maNotificationRemove) \
maIOCtl_maScreenSetOrientation_case(maScreenSetOrientation) \
maIOCtl_maScreenSetFullscreen_case(maScreenSetFullscreen) \
maIOCtl_maAutostartOn_case(maAutostartOn) \
maIOCtl_maAutostartOff_case(maAutostartOff) \
maIOCtl_maScreenSetSupportedOrientations_case(maScreenSetSupportedOrientations) \
maIOCtl_maScreenGetSupportedOrientations_case(maScreenGetSupportedOrientations) \
maIOCtl_maScreenGetCurrentOrientation_case(maScreenGetCurrentOrientation) \
maIOCtl_maScreenStateEventsOn_case(maScreenStateEventsOn) \
maIOCtl_maScreenStateEventsOff_case(maScreenStateEventsOff) \
maIOCtl_maWakeLock_case(maWakeLock) \
maIOCtl_maReportResourceInformation_case(maReportResourceInformation) \
maIOCtl_maMessageBox_case(maMessageBox) \
maIOCtl_maAlert_case(maAlert) \
maIOCtl_maImagePickerOpen_case(maImagePickerOpen) \
maIOCtl_maOptionsBox_case(maOptionsBox) \
maIOCtl_maSensorStart_case(maSensorStart) \
maIOCtl_maSensorStop_case(maSensorStop) \
maIOCtl_maNFCStart_case(maNFCStart) \
maIOCtl_maNFCStop_case(maNFCStop) \
maIOCtl_maNFCReadTag_case(maNFCReadTag) \
maIOCtl_maNFCDestroyTag_case(maNFCDestroyTag) \
maIOCtl_maNFCConnectTag_case(maNFCConnectTag) \
maIOCtl_maNFCCloseTag_case(maNFCCloseTag) \
maIOCtl_maNFCIsType_case(maNFCIsType) \
maIOCtl_maNFCGetTypedTag_case(maNFCGetTypedTag) \
maIOCtl_maNFCBatchStart_case(maNFCBatchStart) \
maIOCtl_maNFCBatchCommit_case(maNFCBatchCommit) \
maIOCtl_maNFCBatchRollback_case(maNFCBatchRollback) \
maIOCtl_maNFCTransceive_case(maNFCTransceive) \
maIOCtl_maNFCSetReadOnly_case(maNFCSetReadOnly) \
maIOCtl_maNFCIsReadOnly_case(maNFCIsReadOnly) \
maIOCtl_maNFCGetSize_case(maNFCGetSize) \
maIOCtl_maNFCReadNDEFMessage_case(maNFCReadNDEFMessage) \
maIOCtl_maNFCWriteNDEFMessage_case(maNFCWriteNDEFMessage) \
maIOCtl_maNFCCreateNDEFMessage_case(maNFCCreateNDEFMessage) \
maIOCtl_maNFCGetNDEFMessage_case(maNFCGetNDEFMessage) \
maIOCtl_maNFCGetNDEFRecord_case(maNFCGetNDEFRecord) \
maIOCtl_maNFCGetNDEFRecordCount_case(maNFCGetNDEFRecordCount) \
maIOCtl_maNFCGetNDEFId_case(maNFCGetNDEFId) \
maIOCtl_maNFCGetNDEFPayload_case(maNFCGetNDEFPayload) \
maIOCtl_maNFCGetNDEFTnf_case(maNFCGetNDEFTnf) \
maIOCtl_maNFCGetNDEFType_case(maNFCGetNDEFType) \
maIOCtl_maNFCSetNDEFId_case(maNFCSetNDEFId) \
maIOCtl_maNFCSetNDEFPayload_case(maNFCSetNDEFPayload) \
maIOCtl_maNFCSetNDEFTnf_case(maNFCSetNDEFTnf) \
maIOCtl_maNFCSetNDEFType_case(maNFCSetNDEFType) \
maIOCtl_maNFCAuthenticateMifareSector_case(maNFCAuthenticateMifareSector) \
maIOCtl_maNFCGetMifareSectorCount_case(maNFCGetMifareSectorCount) \
maIOCtl_maNFCGetMifareBlockCountInSector_case(maNFCGetMifareBlockCountInSector) \
maIOCtl_maNFCMifareSectorToBlock_case(maNFCMifareSectorToBlock) \
maIOCtl_maNFCReadMifareBlocks_case(maNFCReadMifareBlocks) \
maIOCtl_maNFCWriteMifareBlocks_case(maNFCWriteMifareBlocks) \
maIOCtl_maNFCReadMifarePages_case(maNFCReadMifarePages) \
maIOCtl_maNFCWriteMifarePages_case(maNFCWriteMifarePages) \
maIOCtl_maDBOpen_case(maDBOpen) \
maIOCtl_maDBClose_case(maDBClose) \
maIOCtl_maDBExecSQL_case(maDBExecSQL) \
maIOCtl_maDBExecSQLParams_case(maDBExecSQLParams) \
maIOCtl_maDBCursorDestroy_case(maDBCursorDestroy) \
maIOCtl_maDBCursorNext_case(maDBCursorNext) \
maIOCtl_maDBCursorGetColumnData_case(maDBCursorGetColumnData) \
maIOCtl_maDBCursorGetColumnText_case(maDBCursorGetColumnText) \
maIOCtl_maDBCursorGetColumnInt_case(maDBCursorGetColumnInt) \
maIOCtl_maDBCursorGetColumnDouble_case(maDBCursorGetColumnDouble) \
maIOCtl_maAudioDataCreateFromResource_case(maAudioDataCreateFromResource) \
maIOCtl_maAudioDataCreateFromURL_case(maAudioDataCreateFromURL) \
maIOCtl_maAudioDataDestroy_case(maAudioDataDestroy) \
maIOCtl_maAudioInstanceCreate_case(maAudioInstanceCreate) \
maIOCtl_maAudioInstanceCreateDynamic_case(maAudioInstanceCreateDynamic) \
maIOCtl_maAudioSubmitBuffer_case(maAudioSubmitBuffer) \
maIOCtl_maAudioGetPendingBufferCount_case(maAudioGetPendingBufferCount) \
maIOCtl_maAudioInstanceDestroy_case(maAudioInstanceDestroy) \
maIOCtl_maAudioGetLength_case(maAudioGetLength) \
maIOCtl_maAudioSetNumberOfLoops_case(maAudioSetNumberOfLoops) \
maIOCtl_maAudioPrepare_case(maAudioPrepare) \
maIOCtl_maAudioPlay_case(maAudioPlay) \
maIOCtl_maAudioSetPosition_case(maAudioSetPosition) \
maIOCtl_maAudioGetPosition_case(maAudioGetPosition) \
maIOCtl_maAudioSetVolume_case(maAudioSetVolume) \
maIOCtl_maAudioPause_case(maAudioPause) \
maIOCtl_maAudioStop_case(maAudioStop) \
maIOCtl_maSyscallPanicsEnable_case(maSyscallPanicsEnable) \
maIOCtl_maSyscallPanicsDisable_case(maSyscallPanicsDisable) \
maIOCtl_maAdsBannerCreate_case(maAdsBannerCreate) \
maIOCtl_maAdsBannerDestroy_case(maAdsBannerDestroy) \
maIOCtl_maAdsAddBannerToLayout_case(maAdsAddBannerToLayout) \
maIOCtl_maAdsRemoveBannerFromLayout_case(maAdsRemoveBannerFromLayout) \
maIOCtl_maAdsBannerSetProperty_case(maAdsBannerSetProperty) \
maIOCtl_maAdsBannerGetProperty_case(maAdsBannerGetProperty) \
maIOCtl_maNotificationLocalCreate_case(maNotificationLocalCreate) \
maIOCtl_maNotificationLocalDestroy_case(maNotificationLocalDestroy) \
maIOCtl_maNotificationLocalSetProperty_case(maNotificationLocalSetProperty) \
maIOCtl_maNotificationLocalGetProperty_case(maNotificationLocalGetProperty) \
maIOCtl_maNotificationLocalSchedule_case(maNotificationLocalSchedule) \
maIOCtl_maNotificationLocalUnschedule_case(maNotificationLocalUnschedule) \
maIOCtl_maNotificationPushRegister_case(maNotificationPushRegister) \
maIOCtl_maNotificationPushUnregister_case(maNotificationPushUnregister) \
maIOCtl_maNotificationPushGetRegistration_case(maNotificationPushGetRegistration) \
maIOCtl_maNotificationPushGetData_case(maNotificationPushGetData) \
maIOCtl_maNotificationPushDestroy_case(maNotificationPushDestroy) \
maIOCtl_maNotificationSetIconBadge_case(maNotificationSetIconBadge) \
maIOCtl_maNotificationGetIconBadge_case(maNotificationGetIconBadge) \
maIOCtl_maNotificationPushSetTickerText_case(maNotificationPushSetTickerText) \
maIOCtl_maNotificationPushSetMessageTitle_case(maNotificationPushSetMessageTitle) \
maIOCtl_maNotificationPushSetDisplayFlag_case(maNotificationPushSetDisplayFlag) \
maIOCtl_maCaptureSetProperty_case(maCaptureSetProperty) \
maIOCtl_maCaptureGetProperty_case(maCaptureGetProperty) \
maIOCtl_maCaptureAction_case(maCaptureAction) \
maIOCtl_maCaptureWriteImage_case(maCaptureWriteImage) \
maIOCtl_maCaptureGetImagePath_case(maCaptureGetImagePath) \
maIOCtl_maCaptureGetVideoPath_case(maCaptureGetVideoPath) \
maIOCtl_maCaptureDestroyData_case(maCaptureDestroyData) \
maIOCtl_maPurchaseSupported_case(maPurchaseSupported) \
maIOCtl_maPurchaseCreate_case(maPurchaseCreate) \
maIOCtl_maPurchaseSetPublicKey_case(maPurchaseSetPublicKey) \
maIOCtl_maPurchaseRequest_case(maPurchaseRequest) \
maIOCtl_maPurchaseVerifyReceipt_case(maPurchaseVerifyReceipt) \
maIOCtl_maPurchaseGetField_case(maPurchaseGetField) \
maIOCtl_maPurchaseSetStoreURL_case(maPurchaseSetStoreURL) \
maIOCtl_maPurchaseGetName_case(maPurchaseGetName) \
maIOCtl_maPurchaseRestoreTransactions_case(maPurchaseRestoreTransactions) \
maIOCtl_maPurchaseDestroy_case(maPurchaseDestroy) \

#define maIOCtl_MAAPI_syscall_caselist \
maIOCtl_syscall_case(maExtensionModuleLoad) \
maIOCtl_syscall_case(maExtensionFunctionLoad) \
maIOCtl_syscall_case(maFontLoadDefault) \
maIOCtl_syscall_case(maFontSetCurrent) \
maIOCtl_syscall_case(maFontGetCount) \
maIOCtl_syscall_case(maFontGetName) \
maIOCtl_syscall_case(maFontLoadWithName) \
maIOCtl_syscall_case(maFontDelete) \
maIOCtl_syscall_case(maReportCallStack) \
maIOCtl_syscall_case(maDumpCallStackEx) \
maIOCtl_syscall_case(maProtectMemory) \
maIOCtl_syscall_case(maUnprotectMemory) \
maIOCtl_syscall_case(maSetMemoryProtection) \
maIOCtl_syscall_case(maGetMemoryProtection) \
maIOCtl_syscall_case(maGetBatteryCharge) \
maIOCtl_syscall_case(maLockKeypad) \
maIOCtl_syscall_case(maUnlockKeypad) \
maIOCtl_syscall_case(maKeypadIsLocked) \
maIOCtl_syscall_case(maWriteLog) \
maIOCtl_syscall_case(maBtStartDeviceDiscovery) \
maIOCtl_syscall_case(maBtGetNewDevice) \
maIOCtl_syscall_case(maBtStartServiceDiscovery) \
maIOCtl_syscall_case(maBtGetNextServiceSize) \
maIOCtl_syscall_case(maBtGetNewService) \
maIOCtl_syscall_case(maBtCancelDiscovery) \
maIOCtl_syscall_case(maLocationStart) \
maIOCtl_syscall_case(maLocationStop) \
maIOCtl_syscall_case(maPlatformRequest) \
maIOCtl_syscall_case(maFileOpen) \
maIOCtl_syscall_case(maFileExists) \
maIOCtl_syscall_case(maFileClose) \
maIOCtl_syscall_case(maFileCreate) \
maIOCtl_syscall_case(maFileDelete) \
maIOCtl_syscall_case(maFileSize) \
maIOCtl_syscall_case(maFileAvailableSpace) \
maIOCtl_syscall_case(maFileTotalSpace) \
maIOCtl_syscall_case(maFileDate) \
maIOCtl_syscall_case(maFileRename) \
maIOCtl_syscall_case(maFileTruncate) \
maIOCtl_syscall_case(maFileWrite) \
maIOCtl_syscall_case(maFileWriteFromData) \
maIOCtl_syscall_case(maFileRead) \
maIOCtl_syscall_case(maFileReadToData) \
maIOCtl_syscall_case(maFileTell) \
maIOCtl_syscall_case(maFileSeek) \
maIOCtl_syscall_case(maFileListStart) \
maIOCtl_syscall_case(maFileListNext) \
maIOCtl_syscall_case(maFileListClose) \
maIOCtl_syscall_case(maSendTextSMS) \
maIOCtl_syscall_case(maFrameBufferGetInfo) \
maIOCtl_syscall_case(maFrameBufferInit) \
maIOCtl_syscall_case(maFrameBufferClose) \
maIOCtl_syscall_case(maAccept) \
maIOCtl_syscall_case(maSendToBackground) \
maIOCtl_syscall_case(maBringToForeground) \
maIOCtl_syscall_case(maGetSystemProperty) \
maIOCtl_syscall_case(maIapSave) \
maIOCtl_syscall_case(maIapReset) \
maIOCtl_syscall_case(maIapShutdown) \
maIOCtl_syscall_case(maNetworkStatus) \
maIOCtl_syscall_case(maIapSetMethod) \
maIOCtl_syscall_case(maIapSetFilter) \
maIOCtl_syscall_case(maCameraFormatNumber) \
maIOCtl_syscall_case(maCameraFormat) \
maIOCtl_syscall_case(maCameraStart) \
maIOCtl_syscall_case(maCameraStop) \
maIOCtl_syscall_case(maCameraSetPreview) \
maIOCtl_syscall_case(maCameraSelect) \
maIOCtl_syscall_case(maCameraNumber) \
maIOCtl_syscall_case(maCameraSnapshot) \
maIOCtl_syscall_case(maCameraRecord) \
maIOCtl_syscall_case(maCameraSetProperty) \
maIOCtl_syscall_case(maCameraGetProperty) \
maIOCtl_syscall_case(maShowVirtualKeyboard) \
maIOCtl_syscall_case(maTextBox) \
maIOCtl_syscall_case(maKeyCaptureStart) \
maIOCtl_syscall_case(maKeyCaptureStop) \
maIOCtl_syscall_case(maHomeScreenEventsOn) \
maIOCtl_syscall_case(maHomeScreenEventsOff) \
maIOCtl_syscall_case(maHomeScreenShortcutAdd) \
maIOCtl_syscall_case(maHomeScreenShortcutRemove) \
maIOCtl_syscall_case(maNotificationAdd) \
maIOCtl_syscall_case(maNotificationRemove) \
maIOCtl_syscall_case(maScreenSetOrientation) \
maIOCtl_syscall_case(maScreenSetFullscreen) \
maIOCtl_syscall_case(maAutostartOn) \
maIOCtl_syscall_case(maAutostartOff) \
maIOCtl_syscall_case(maScreenSetSupportedOrientations) \
maIOCtl_syscall_case(maScreenGetSupportedOrientations) \
maIOCtl_syscall_case(maScreenGetCurrentOrientation) \
maIOCtl_syscall_case(maScreenStateEventsOn) \
maIOCtl_syscall_case(maScreenStateEventsOff) \
maIOCtl_syscall_case(maWakeLock) \
maIOCtl_syscall_case(maReportResourceInformation) \
maIOCtl_syscall_case(maMessageBox) \
maIOCtl_syscall_case(maAlert) \
maIOCtl_syscall_case(maImagePickerOpen) \
maIOCtl_syscall_case(maOptionsBox) \
maIOCtl_syscall_case(maSensorStart) \
maIOCtl_syscall_case(maSensorStop) \
maIOCtl_syscall_case(maNFCStart) \
maIOCtl_syscall_case(maNFCStop) \
maIOCtl_syscall_case(maNFCReadTag) \
maIOCtl_syscall_case(maNFCDestroyTag) \
maIOCtl_syscall_case(maNFCConnectTag) \
maIOCtl_syscall_case(maNFCCloseTag) \
maIOCtl_syscall_case(maNFCIsType) \
maIOCtl_syscall_case(maNFCGetTypedTag) \
maIOCtl_syscall_case(maNFCBatchStart) \
maIOCtl_syscall_case(maNFCBatchCommit) \
maIOCtl_syscall_case(maNFCBatchRollback) \
maIOCtl_syscall_case(maNFCTransceive) \
maIOCtl_syscall_case(maNFCSetReadOnly) \
maIOCtl_syscall_case(maNFCIsReadOnly) \
maIOCtl_syscall_case(maNFCGetSize) \
maIOCtl_syscall_case(maNFCReadNDEFMessage) \
maIOCtl_syscall_case(maNFCWriteNDEFMessage) \
maIOCtl_syscall_case(maNFCCreateNDEFMessage) \
maIOCtl_syscall_case(maNFCGetNDEFMessage) \
maIOCtl_syscall_case(maNFCGetNDEFRecord) \
maIOCtl_syscall_case(maNFCGetNDEFRecordCount) \
maIOCtl_syscall_case(maNFCGetNDEFId) \
maIOCtl_syscall_case(maNFCGetNDEFPayload) \
maIOCtl_syscall_case(maNFCGetNDEFTnf) \
maIOCtl_syscall_case(maNFCGetNDEFType) \
maIOCtl_syscall_case(maNFCSetNDEFId) \
maIOCtl_syscall_case(maNFCSetNDEFPayload) \
maIOCtl_syscall_case(maNFCSetNDEFTnf) \
maIOCtl_syscall_case(maNFCSetNDEFType) \
maIOCtl_syscall_case(maNFCAuthenticateMifareSector) \
maIOCtl_syscall_case(maNFCGetMifareSectorCount) \
maIOCtl_syscall_case(maNFCGetMifareBlockCountInSector) \
maIOCtl_syscall_case(maNFCMifareSectorToBlock) \
maIOCtl_syscall_case(maNFCReadMifareBlocks) \
maIOCtl_syscall_case(maNFCWriteMifareBlocks) \
maIOCtl_syscall_case(maNFCReadMifarePages) \
maIOCtl_syscall_case(maNFCWriteMifarePages) \
maIOCtl_syscall_case(maDBOpen) \
maIOCtl_syscall_case(maDBClose) \
maIOCtl_syscall_case(maDBExecSQL) \
maIOCtl_syscall_case(maDBExecSQLParams) \
maIOCtl_syscall_case(maDBCursorDestroy) \
maIOCtl_syscall_case(maDBCursorNext) \
maIOCtl_syscall_case(maDBCursorGetColumnData) \
maIOCtl_syscall_case(maDBCursorGetColumnText) \
maIOCtl_syscall_case(maDBCursorGetColumnInt) \
maIOCtl_syscall_case(maDBCursorGetColumnDouble) \
maIOCtl_syscall_case(maAudioDataCreateFromResource) \
maIOCtl_syscall_case(maAudioDataCreateFromURL) \
maIOCtl_syscall_case(maAudioDataDestroy) \
maIOCtl_syscall_case(maAudioInstanceCreate) \
maIOCtl_syscall_case(maAudioInstanceCreateDynamic) \
maIOCtl_syscall_case(maAudioSubmitBuffer) \
maIOCtl_syscall_case(maAudioGetPendingBufferCount) \
maIOCtl_syscall_case(maAudioInstanceDestroy) \
maIOCtl_syscall_case(maAudioGetLength) \
maIOCtl_syscall_case(maAudioSetNumberOfLoops) \
maIOCtl_syscall_case(maAudioPrepare) \
maIOCtl_syscall_case(maAudioPlay) \
maIOCtl_syscall_case(maAudioSetPosition) \
maIOCtl_syscall_case(maAudioGetPosition) \
maIOCtl_syscall_case(maAudioSetVolume) \
maIOCtl_syscall_case(maAudioPause) \
maIOCtl_syscall_case(maAudioStop) \
maIOCtl_syscall_case(maSyscallPanicsEnable) \
maIOCtl_syscall_case(maSyscallPanicsDisable) \
maIOCtl_syscall_case(maAdsBannerCreate) \
maIOCtl_syscall_case(maAdsBannerDestroy) \
maIOCtl_syscall_case(maAdsAddBannerToLayout) \
maIOCtl_syscall_case(maAdsRemoveBannerFromLayout) \
maIOCtl_syscall_case(maAdsBannerSetProperty) \
maIOCtl_syscall_case(maAdsBannerGetProperty) \
maIOCtl_syscall_case(maNotificationLocalCreate) \
maIOCtl_syscall_case(maNotificationLocalDestroy) \
maIOCtl_syscall_case(maNotificationLocalSetProperty) \
maIOCtl_syscall_case(maNotificationLocalGetProperty) \
maIOCtl_syscall_case(maNotificationLocalSchedule) \
maIOCtl_syscall_case(maNotificationLocalUnschedule) \
maIOCtl_syscall_case(maNotificationPushRegister) \
maIOCtl_syscall_case(maNotificationPushUnregister) \
maIOCtl_syscall_case(maNotificationPushGetRegistration) \
maIOCtl_syscall_case(maNotificationPushGetData) \
maIOCtl_syscall_case(maNotificationPushDestroy) \
maIOCtl_syscall_case(maNotificationSetIconBadge) \
maIOCtl_syscall_case(maNotificationGetIconBadge) \
maIOCtl_syscall_case(maNotificationPushSetTickerText) \
maIOCtl_syscall_case(maNotificationPushSetMessageTitle) \
maIOCtl_syscall_case(maNotificationPushSetDisplayFlag) \
maIOCtl_syscall_case(maCaptureSetProperty) \
maIOCtl_syscall_case(maCaptureGetProperty) \
maIOCtl_syscall_case(maCaptureAction) \
maIOCtl_syscall_case(maCaptureWriteImage) \
maIOCtl_syscall_case(maCaptureGetImagePath) \
maIOCtl_syscall_case(maCaptureGetVideoPath) \
maIOCtl_syscall_case(maCaptureDestroyData) \
maIOCtl_syscall_case(maPurchaseSupported) \
maIOCtl_syscall_case(maPurchaseCreate) \
maIOCtl_syscall_case(maPurchaseSetPublicKey) \
maIOCtl_syscall_case(maPurchaseRequest) \
maIOCtl_syscall_case(maPurchaseVerifyReceipt) \
maIOCtl_syscall_case(maPurchaseGetField) \
maIOCtl_syscall_case(maPurchaseSetStoreURL) \
maIOCtl_syscall_case(maPurchaseGetName) \
maIOCtl_syscall_case(maPurchaseRestoreTransactions) \
maIOCtl_syscall_case(maPurchaseDestroy) \

#define maIOCtl_maExtensionModuleLoad 1
#define maIOCtl_maExtensionModuleLoad_case(func) \
case 1: \
{ \
const char* _id = GVS(a); \
int _hash = b; \
return func(_id, _hash); \
} \

#define maIOCtl_maExtensionFunctionLoad 2
#define maIOCtl_maExtensionFunctionLoad_case(func) \
case 2: \
{ \
MAExtensionModule _module = (MAExtensionModule)a; \
int _index = b; \
return func(_module, _index); \
} \

#define maIOCtl_maFontLoadDefault 3
#define maIOCtl_maFontLoadDefault_case(func) \
case 3: \
{ \
int _type = a; \
int _style = b; \
int _size = c; \
return func(_type, _style, _size); \
} \

#define maIOCtl_maFontSetCurrent 4
#define maIOCtl_maFontSetCurrent_case(func) \
case 4: \
{ \
MAHandle _font = (MAHandle)a; \
return func(_font); \
} \

#define maIOCtl_maFontGetCount 5
#define maIOCtl_maFontGetCount_case(func) \
case 5: \
{ \
return func(); \
} \

#define maIOCtl_maFontGetName 6
#define maIOCtl_maFontGetName_case(func) \
case 6: \
{ \
int _index = a; \
int _bufferLen = c; \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufferLen); \
return func(_index, _buffer, _bufferLen); \
} \

#define maIOCtl_maFontLoadWithName 7
#define maIOCtl_maFontLoadWithName_case(func) \
case 7: \
{ \
const char* _postScriptName = GVMR(a, char); \
int _size = b; \
return func(_postScriptName, _size); \
} \

#define maIOCtl_maFontDelete 8
#define maIOCtl_maFontDelete_case(func) \
case 8: \
{ \
MAHandle _font = (MAHandle)a; \
return func(_font); \
} \

#define maIOCtl_maReportCallStack 9
#define maIOCtl_maReportCallStack_case(func) \
case 9: \
{ \
return func(); \
} \

#define maIOCtl_maDumpCallStackEx 10
#define maIOCtl_maDumpCallStackEx_case(func) \
case 10: \
{ \
const char* _str = GVS(a); \
int _data = b; \
return func(_str, _data); \
} \

#define maIOCtl_maProtectMemory 11
#define maIOCtl_maProtectMemory_case(func) \
case 11: \
{ \
const void* _start = GVMR(a, MAAddress); \
int _length = b; \
func(_start, _length); \
return 0; \
} \

#define maIOCtl_maUnprotectMemory 12
#define maIOCtl_maUnprotectMemory_case(func) \
case 12: \
{ \
const void* _start = GVMR(a, MAAddress); \
int _length = b; \
func(_start, _length); \
return 0; \
} \

#define maIOCtl_maSetMemoryProtection 13
#define maIOCtl_maSetMemoryProtection_case(func) \
case 13: \
{ \
int _enable = a; \
func(_enable); \
return 0; \
} \

#define maIOCtl_maGetMemoryProtection 14
#define maIOCtl_maGetMemoryProtection_case(func) \
case 14: \
{ \
return func(); \
} \

#define maIOCtl_maGetBatteryCharge 15
#define maIOCtl_maGetBatteryCharge_case(func) \
case 15: \
{ \
return func(); \
} \

#define maIOCtl_maLockKeypad 25
#define maIOCtl_maLockKeypad_case(func) \
case 25: \
{ \
return func(); \
} \

#define maIOCtl_maUnlockKeypad 26
#define maIOCtl_maUnlockKeypad_case(func) \
case 26: \
{ \
return func(); \
} \

#define maIOCtl_maKeypadIsLocked 27
#define maIOCtl_maKeypadIsLocked_case(func) \
case 27: \
{ \
return func(); \
} \

#define maIOCtl_maWriteLog 28
#define maIOCtl_maWriteLog_case(func) \
case 28: \
{ \
const void* _src = GVMR(a, MAAddress); \
int _size = b; \
return func(_src, _size); \
} \

#define maIOCtl_maBtStartDeviceDiscovery 29
#define maIOCtl_maBtStartDeviceDiscovery_case(func) \
case 29: \
{ \
int _names = a; \
return func(_names); \
} \

#define maIOCtl_maBtGetNewDevice 30
#define maIOCtl_maBtGetNewDevice_case(func) \
case 30: \
{ \
MABtDevice* _d = GVMR(a, MABtDevice); \
return func(_d); \
} \

#define maIOCtl_maBtStartServiceDiscovery 31
#define maIOCtl_maBtStartServiceDiscovery_case(func) \
case 31: \
{ \
const MABtAddr* _address = GVMR(a, MABtAddr); \
const MAUUID* _uuid = GVMR(b, MAUUID); \
return func(_address, _uuid); \
} \

#define maIOCtl_maBtGetNextServiceSize 32
#define maIOCtl_maBtGetNextServiceSize_case(func) \
case 32: \
{ \
MABtServiceSize* _dst = GVMR(a, MABtServiceSize); \
return func(_dst); \
} \

#define maIOCtl_maBtGetNewService 33
#define maIOCtl_maBtGetNewService_case(func) \
case 33: \
{ \
MABtService* _dst = GVMR(a, MABtService); \
return func(_dst); \
} \

#define maIOCtl_maBtCancelDiscovery 34
#define maIOCtl_maBtCancelDiscovery_case(func) \
case 34: \
{ \
return func(); \
} \

#define maIOCtl_maLocationStart 37
#define maIOCtl_maLocationStart_case(func) \
case 37: \
{ \
return func(); \
} \

#define maIOCtl_maLocationStop 38
#define maIOCtl_maLocationStop_case(func) \
case 38: \
{ \
return func(); \
} \

#define maIOCtl_maPlatformRequest 39
#define maIOCtl_maPlatformRequest_case(func) \
case 39: \
{ \
const char* _url = GVS(a); \
return func(_url); \
} \

#define maIOCtl_maFileOpen 40
#define maIOCtl_maFileOpen_case(func) \
case 40: \
{ \
const char* _path = GVS(a); \
int _mode = b; \
return func(_path, _mode); \
} \

#define maIOCtl_maFileExists 41
#define maIOCtl_maFileExists_case(func) \
case 41: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileClose 42
#define maIOCtl_maFileClose_case(func) \
case 42: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileCreate 43
#define maIOCtl_maFileCreate_case(func) \
case 43: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileDelete 44
#define maIOCtl_maFileDelete_case(func) \
case 44: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileSize 45
#define maIOCtl_maFileSize_case(func) \
case 45: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileAvailableSpace 46
#define maIOCtl_maFileAvailableSpace_case(func) \
case 46: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileTotalSpace 47
#define maIOCtl_maFileTotalSpace_case(func) \
case 47: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileDate 48
#define maIOCtl_maFileDate_case(func) \
case 48: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileRename 49
#define maIOCtl_maFileRename_case(func) \
case 49: \
{ \
MAHandle _file = (MAHandle)a; \
const char* _newName = GVS(b); \
return func(_file, _newName); \
} \

#define maIOCtl_maFileTruncate 50
#define maIOCtl_maFileTruncate_case(func) \
case 50: \
{ \
MAHandle _file = (MAHandle)a; \
int _offset = b; \
return func(_file, _offset); \
} \

#define maIOCtl_maFileWrite 51
#define maIOCtl_maFileWrite_case(func) \
case 51: \
{ \
MAHandle _file = (MAHandle)a; \
const void* _src = GVMR(b, MAAddress); \
int _len = c; \
return func(_file, _src, _len); \
} \

#define maIOCtl_maFileWriteFromData 52
#define maIOCtl_maFileWriteFromData_case(func) \
case 52: \
{ \
MAHandle _file = (MAHandle)a; \
MAHandle _data = (MAHandle)b; \
int _offset = c; \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_file, _data, _offset, _len); \
} \

#define maIOCtl_maFileRead 53
#define maIOCtl_maFileRead_case(func) \
case 53: \
{ \
MAHandle _file = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_file, _dst, _len); \
} \

#define maIOCtl_maFileReadToData 54
#define maIOCtl_maFileReadToData_case(func) \
case 54: \
{ \
MAHandle _file = (MAHandle)a; \
MAHandle _data = (MAHandle)b; \
int _offset = c; \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_file, _data, _offset, _len); \
} \

#define maIOCtl_maFileTell 55
#define maIOCtl_maFileTell_case(func) \
case 55: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileSeek 56
#define maIOCtl_maFileSeek_case(func) \
case 56: \
{ \
MAHandle _file = (MAHandle)a; \
int _offset = b; \
int _whence = c; \
return func(_file, _offset, _whence); \
} \

#define maIOCtl_maFileListStart 57
#define maIOCtl_maFileListStart_case(func) \
case 57: \
{ \
const char* _path = GVS(a); \
const char* _filter = GVS(b); \
int _sorting = c; \
return func(_path, _filter, _sorting); \
} \

#define maIOCtl_maFileListNext 58
#define maIOCtl_maFileListNext_case(func) \
case 58: \
{ \
MAHandle _list = (MAHandle)a; \
int _bufSize = c; \
char* _nameBuf = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufSize); \
return func(_list, _nameBuf, _bufSize); \
} \

#define maIOCtl_maFileListClose 59
#define maIOCtl_maFileListClose_case(func) \
case 59: \
{ \
MAHandle _list = (MAHandle)a; \
return func(_list); \
} \

#define maIOCtl_maSendTextSMS 60
#define maIOCtl_maSendTextSMS_case(func) \
case 60: \
{ \
const char* _dst = GVS(a); \
const char* _msg = GVS(b); \
return func(_dst, _msg); \
} \

#define maIOCtl_maFrameBufferGetInfo 78
#define maIOCtl_maFrameBufferGetInfo_case(func) \
case 78: \
{ \
MAFrameBufferInfo* _info = GVMR(a, MAFrameBufferInfo); \
return func(_info); \
} \

#define maIOCtl_maFrameBufferInit 79
#define maIOCtl_maFrameBufferInit_case(func) \
case 79: \
{ \
const void* _data = GVMR(a, MAAddress); \
return func(_data); \
} \

#define maIOCtl_maFrameBufferClose 80
#define maIOCtl_maFrameBufferClose_case(func) \
case 80: \
{ \
return func(); \
} \

#define maIOCtl_maAccept 84
#define maIOCtl_maAccept_case(func) \
case 84: \
{ \
MAHandle _serv = (MAHandle)a; \
return func(_serv); \
} \

#define maIOCtl_maSendToBackground 85
#define maIOCtl_maSendToBackground_case(func) \
case 85: \
{ \
return func(); \
} \

#define maIOCtl_maBringToForeground 86
#define maIOCtl_maBringToForeground_case(func) \
case 86: \
{ \
return func(); \
} \

#define maIOCtl_maGetSystemProperty 88
#define maIOCtl_maGetSystemProperty_case(func) \
case 88: \
{ \
const char* _key = GVS(a); \
int _size = c; \
char* _buf = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _size); \
return func(_key, _buf, _size); \
} \

#define maIOCtl_maIapSave 89
#define maIOCtl_maIapSave_case(func) \
case 89: \
{ \
return func(); \
} \

#define maIOCtl_maIapReset 90
#define maIOCtl_maIapReset_case(func) \
case 90: \
{ \
return func(); \
} \

#define maIOCtl_maIapShutdown 91
#define maIOCtl_maIapShutdown_case(func) \
case 91: \
{ \
return func(); \
} \

#define maIOCtl_maNetworkStatus 92
#define maIOCtl_maNetworkStatus_case(func) \
case 92: \
{ \
return func(); \
} \

#define maIOCtl_maIapSetMethod 93
#define maIOCtl_maIapSetMethod_case(func) \
case 93: \
{ \
int _type = a; \
return func(_type); \
} \

#define maIOCtl_maIapSetFilter 94
#define maIOCtl_maIapSetFilter_case(func) \
case 94: \
{ \
int _filter = a; \
return func(_filter); \
} \

#define maIOCtl_maCameraFormatNumber 125
#define maIOCtl_maCameraFormatNumber_case(func) \
case 125: \
{ \
return func(); \
} \

#define maIOCtl_maCameraFormat 126
#define maIOCtl_maCameraFormat_case(func) \
case 126: \
{ \
int _index = a; \
MA_CAMERA_FORMAT* _fmt = GVMR(b, MA_CAMERA_FORMAT); \
return func(_index, _fmt); \
} \

#define maIOCtl_maCameraStart 127
#define maIOCtl_maCameraStart_case(func) \
case 127: \
{ \
return func(); \
} \

#define maIOCtl_maCameraStop 128
#define maIOCtl_maCameraStop_case(func) \
case 128: \
{ \
return func(); \
} \

#define maIOCtl_maCameraSetPreview 129
#define maIOCtl_maCameraSetPreview_case(func) \
case 129: \
{ \
MAHandle _widgetHandle = (MAHandle)a; \
return func(_widgetHandle); \
} \

#define maIOCtl_maCameraSelect 130
#define maIOCtl_maCameraSelect_case(func) \
case 130: \
{ \
int _cameraNumber = a; \
return func(_cameraNumber); \
} \

#define maIOCtl_maCameraNumber 131
#define maIOCtl_maCameraNumber_case(func) \
case 131: \
{ \
return func(); \
} \

#define maIOCtl_maCameraSnapshot 132
#define maIOCtl_maCameraSnapshot_case(func) \
case 132: \
{ \
int _formatIndex = a; \
MAHandle _placeholder = (MAHandle)b; \
return func(_formatIndex, _placeholder); \
} \

#define maIOCtl_maCameraRecord 133
#define maIOCtl_maCameraRecord_case(func) \
case 133: \
{ \
int _stopStartFlag = a; \
return func(_stopStartFlag); \
} \

#define maIOCtl_maCameraSetProperty 134
#define maIOCtl_maCameraSetProperty_case(func) \
case 134: \
{ \
const char* _property = GVS(a); \
const char* _value = GVS(b); \
return func(_property, _value); \
} \

#define maIOCtl_maCameraGetProperty 135
#define maIOCtl_maCameraGetProperty_case(func) \
case 135: \
{ \
const char* _property = GVS(a); \
int _bufSize = c; \
char* _value = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufSize); \
return func(_property, _value, _bufSize); \
} \

#define maIOCtl_maShowVirtualKeyboard 136
#define maIOCtl_maShowVirtualKeyboard_case(func) \
case 136: \
{ \
return func(); \
} \

#define maIOCtl_maTextBox 137
#define maIOCtl_maTextBox_case(func) \
case 137: \
{ \
const wchar* _title = GVWS(a); \
const wchar* _inText = GVWS(b); \
int _maxSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
int _constraints = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
wchar* _outText = (MAWString) SYSCALL_THIS->GetValidatedMemRange(c, _maxSize * sizeof(wchar)); \
return func(_title, _inText, _outText, _maxSize, _constraints); \
} \

#define maIOCtl_maKeyCaptureStart 138
#define maIOCtl_maKeyCaptureStart_case(func) \
case 138: \
{ \
int _keyCode = a; \
return func(_keyCode); \
} \

#define maIOCtl_maKeyCaptureStop 139
#define maIOCtl_maKeyCaptureStop_case(func) \
case 139: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenEventsOn 140
#define maIOCtl_maHomeScreenEventsOn_case(func) \
case 140: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenEventsOff 141
#define maIOCtl_maHomeScreenEventsOff_case(func) \
case 141: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenShortcutAdd 142
#define maIOCtl_maHomeScreenShortcutAdd_case(func) \
case 142: \
{ \
const char* _name = GVS(a); \
return func(_name); \
} \

#define maIOCtl_maHomeScreenShortcutRemove 143
#define maIOCtl_maHomeScreenShortcutRemove_case(func) \
case 143: \
{ \
const char* _name = GVS(a); \
return func(_name); \
} \

#define maIOCtl_maNotificationAdd 144
#define maIOCtl_maNotificationAdd_case(func) \
case 144: \
{ \
int _type = a; \
int _id = b; \
const char* _title = GVS(c); \
const char* _text = GVS(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE)); \
return func(_type, _id, _title, _text); \
} \

#define maIOCtl_maNotificationRemove 145
#define maIOCtl_maNotificationRemove_case(func) \
case 145: \
{ \
int _id = a; \
return func(_id); \
} \

#define maIOCtl_maScreenSetOrientation 146
#define maIOCtl_maScreenSetOrientation_case(func) \
case 146: \
{ \
int _orientation = a; \
return func(_orientation); \
} \

#define maIOCtl_maScreenSetFullscreen 147
#define maIOCtl_maScreenSetFullscreen_case(func) \
case 147: \
{ \
int _fullscreen = a; \
return func(_fullscreen); \
} \

#define maIOCtl_maAutostartOn 148
#define maIOCtl_maAutostartOn_case(func) \
case 148: \
{ \
return func(); \
} \

#define maIOCtl_maAutostartOff 149
#define maIOCtl_maAutostartOff_case(func) \
case 149: \
{ \
return func(); \
} \

#define maIOCtl_maScreenSetSupportedOrientations 150
#define maIOCtl_maScreenSetSupportedOrientations_case(func) \
case 150: \
{ \
int _orientations = a; \
return func(_orientations); \
} \

#define maIOCtl_maScreenGetSupportedOrientations 151
#define maIOCtl_maScreenGetSupportedOrientations_case(func) \
case 151: \
{ \
return func(); \
} \

#define maIOCtl_maScreenGetCurrentOrientation 152
#define maIOCtl_maScreenGetCurrentOrientation_case(func) \
case 152: \
{ \
return func(); \
} \

#define maIOCtl_maScreenStateEventsOn 153
#define maIOCtl_maScreenStateEventsOn_case(func) \
case 153: \
{ \
return func(); \
} \

#define maIOCtl_maScreenStateEventsOff 154
#define maIOCtl_maScreenStateEventsOff_case(func) \
case 154: \
{ \
return func(); \
} \

#define maIOCtl_maWakeLock 155
#define maIOCtl_maWakeLock_case(func) \
case 155: \
{ \
int _flag = a; \
return func(_flag); \
} \

#define maIOCtl_maReportResourceInformation 404
#define maIOCtl_maReportResourceInformation_case(func) \
case 404: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maMessageBox 405
#define maIOCtl_maMessageBox_case(func) \
case 405: \
{ \
const char* _title = GVS(a); \
const char* _message = GVS(b); \
func(_title, _message); \
return 0; \
} \

#define maIOCtl_maAlert 406
#define maIOCtl_maAlert_case(func) \
case 406: \
{ \
const char* _title = GVS(a); \
const char* _message = GVS(b); \
const char* _button1 = GVS(c); \
const char* _button2 = GVS(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE)); \
const char* _button3 = GVS(SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE)); \
func(_title, _message, _button1, _button2, _button3); \
return 0; \
} \

#define maIOCtl_maImagePickerOpen 407
#define maIOCtl_maImagePickerOpen_case(func) \
case 407: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maOptionsBox 408
#define maIOCtl_maOptionsBox_case(func) \
case 408: \
{ \
const wchar* _title = GVWS(a); \
const wchar* _destructiveButtonTitle = GVWS(b); \
const wchar* _cancelButtonTitle = GVWS(c); \
const void* _otherButtonTitles = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int _otherButtonTitlesSize = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
func(_title, _destructiveButtonTitle, _cancelButtonTitle, _otherButtonTitles, _otherButtonTitlesSize); \
return 0; \
} \

#define maIOCtl_maSensorStart 409
#define maIOCtl_maSensorStart_case(func) \
case 409: \
{ \
int _sensor = a; \
int _interval = b; \
return func(_sensor, _interval); \
} \

#define maIOCtl_maSensorStop 410
#define maIOCtl_maSensorStop_case(func) \
case 410: \
{ \
int _sensor = a; \
return func(_sensor); \
} \

#define maIOCtl_maNFCStart 411
#define maIOCtl_maNFCStart_case(func) \
case 411: \
{ \
return func(); \
} \

#define maIOCtl_maNFCStop 412
#define maIOCtl_maNFCStop_case(func) \
case 412: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maNFCReadTag 413
#define maIOCtl_maNFCReadTag_case(func) \
case 413: \
{ \
MAHandle _nfcContext = (MAHandle)a; \
return func(_nfcContext); \
} \

#define maIOCtl_maNFCDestroyTag 414
#define maIOCtl_maNFCDestroyTag_case(func) \
case 414: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCConnectTag 415
#define maIOCtl_maNFCConnectTag_case(func) \
case 415: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCCloseTag 416
#define maIOCtl_maNFCCloseTag_case(func) \
case 416: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCIsType 417
#define maIOCtl_maNFCIsType_case(func) \
case 417: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _type = b; \
return func(_tagHandle, _type); \
} \

#define maIOCtl_maNFCGetTypedTag 418
#define maIOCtl_maNFCGetTypedTag_case(func) \
case 418: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _type = b; \
return func(_tagHandle, _type); \
} \

#define maIOCtl_maNFCBatchStart 419
#define maIOCtl_maNFCBatchStart_case(func) \
case 419: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
return func(_tagHandle); \
} \

#define maIOCtl_maNFCBatchCommit 420
#define maIOCtl_maNFCBatchCommit_case(func) \
case 420: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCBatchRollback 421
#define maIOCtl_maNFCBatchRollback_case(func) \
case 421: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCTransceive 422
#define maIOCtl_maNFCTransceive_case(func) \
case 422: \
{ \
MAHandle _tag = (MAHandle)a; \
const void* _src = GVMR(b, MAAddress); \
int _srcLen = c; \
void* _dst = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int* _dstLen = GVMR(SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE), int); \
return func(_tag, _src, _srcLen, _dst, _dstLen); \
} \

#define maIOCtl_maNFCSetReadOnly 423
#define maIOCtl_maNFCSetReadOnly_case(func) \
case 423: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCIsReadOnly 424
#define maIOCtl_maNFCIsReadOnly_case(func) \
case 424: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCGetSize 425
#define maIOCtl_maNFCGetSize_case(func) \
case 425: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCReadNDEFMessage 426
#define maIOCtl_maNFCReadNDEFMessage_case(func) \
case 426: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCWriteNDEFMessage 427
#define maIOCtl_maNFCWriteNDEFMessage_case(func) \
case 427: \
{ \
MAHandle _tag = (MAHandle)a; \
MAHandle _ndefMessage = (MAHandle)b; \
return func(_tag, _ndefMessage); \
} \

#define maIOCtl_maNFCCreateNDEFMessage 428
#define maIOCtl_maNFCCreateNDEFMessage_case(func) \
case 428: \
{ \
int _recordCount = a; \
return func(_recordCount); \
} \

#define maIOCtl_maNFCGetNDEFMessage 429
#define maIOCtl_maNFCGetNDEFMessage_case(func) \
case 429: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCGetNDEFRecord 430
#define maIOCtl_maNFCGetNDEFRecord_case(func) \
case 430: \
{ \
MAHandle _ndefMessage = (MAHandle)a; \
int _ix = b; \
return func(_ndefMessage, _ix); \
} \

#define maIOCtl_maNFCGetNDEFRecordCount 431
#define maIOCtl_maNFCGetNDEFRecordCount_case(func) \
case 431: \
{ \
MAHandle _ndefMessage = (MAHandle)a; \
return func(_ndefMessage); \
} \

#define maIOCtl_maNFCGetNDEFId 432
#define maIOCtl_maNFCGetNDEFId_case(func) \
case 432: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCGetNDEFPayload 433
#define maIOCtl_maNFCGetNDEFPayload_case(func) \
case 433: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCGetNDEFTnf 434
#define maIOCtl_maNFCGetNDEFTnf_case(func) \
case 434: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
return func(_ndefRecord); \
} \

#define maIOCtl_maNFCGetNDEFType 435
#define maIOCtl_maNFCGetNDEFType_case(func) \
case 435: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFId 436
#define maIOCtl_maNFCSetNDEFId_case(func) \
case 436: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFPayload 437
#define maIOCtl_maNFCSetNDEFPayload_case(func) \
case 437: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFTnf 438
#define maIOCtl_maNFCSetNDEFTnf_case(func) \
case 438: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
int _tnf = b; \
return func(_ndefRecord, _tnf); \
} \

#define maIOCtl_maNFCSetNDEFType 439
#define maIOCtl_maNFCSetNDEFType_case(func) \
case 439: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCAuthenticateMifareSector 440
#define maIOCtl_maNFCAuthenticateMifareSector_case(func) \
case 440: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _keyType = b; \
int _sectorIndex = c; \
const void* _keySrc = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int _keyLen = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
return func(_tagHandle, _keyType, _sectorIndex, _keySrc, _keyLen); \
} \

#define maIOCtl_maNFCGetMifareSectorCount 441
#define maIOCtl_maNFCGetMifareSectorCount_case(func) \
case 441: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
return func(_tagHandle); \
} \

#define maIOCtl_maNFCGetMifareBlockCountInSector 442
#define maIOCtl_maNFCGetMifareBlockCountInSector_case(func) \
case 442: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _sector = b; \
return func(_tagHandle, _sector); \
} \

#define maIOCtl_maNFCMifareSectorToBlock 443
#define maIOCtl_maNFCMifareSectorToBlock_case(func) \
case 443: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _sector = b; \
return func(_tagHandle, _sector); \
} \

#define maIOCtl_maNFCReadMifareBlocks 444
#define maIOCtl_maNFCReadMifareBlocks_case(func) \
case 444: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstBlock = b; \
void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstBlock, _dst, _len); \
} \

#define maIOCtl_maNFCWriteMifareBlocks 445
#define maIOCtl_maNFCWriteMifareBlocks_case(func) \
case 445: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstBlock = b; \
const void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstBlock, _dst, _len); \
} \

#define maIOCtl_maNFCReadMifarePages 446
#define maIOCtl_maNFCReadMifarePages_case(func) \
case 446: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstPage = b; \
void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstPage, _dst, _len); \
} \

#define maIOCtl_maNFCWriteMifarePages 447
#define maIOCtl_maNFCWriteMifarePages_case(func) \
case 447: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstPage = b; \
const void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstPage, _dst, _len); \
} \

#define maIOCtl_maDBOpen 448
#define maIOCtl_maDBOpen_case(func) \
case 448: \
{ \
const char* _path = GVS(a); \
return func(_path); \
} \

#define maIOCtl_maDBClose 449
#define maIOCtl_maDBClose_case(func) \
case 449: \
{ \
MAHandle _databaseHandle = (MAHandle)a; \
return func(_databaseHandle); \
} \

#define maIOCtl_maDBExecSQL 450
#define maIOCtl_maDBExecSQL_case(func) \
case 450: \
{ \
MAHandle _databaseHandle = (MAHandle)a; \
const char* _sql = GVS(b); \
return func(_databaseHandle, _sql); \
} \

#define maIOCtl_maDBExecSQLParams 451
#define maIOCtl_maDBExecSQLParams_case(func) \
case 451: \
{ \
MAHandle _databaseHandle = (MAHandle)a; \
const char* _sql = GVS(b); \
const MADBValue* _params = GVMR(c, MADBValue); \
int _paramCount = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_databaseHandle, _sql, _params, _paramCount); \
} \

#define maIOCtl_maDBCursorDestroy 452
#define maIOCtl_maDBCursorDestroy_case(func) \
case 452: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
return func(_cursorHandle); \
} \

#define maIOCtl_maDBCursorNext 453
#define maIOCtl_maDBCursorNext_case(func) \
case 453: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
return func(_cursorHandle); \
} \

#define maIOCtl_maDBCursorGetColumnData 454
#define maIOCtl_maDBCursorGetColumnData_case(func) \
case 454: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
int _columnIndex = b; \
MAHandle _placeholder = (MAHandle)c; \
return func(_cursorHandle, _columnIndex, _placeholder); \
} \

#define maIOCtl_maDBCursorGetColumnText 455
#define maIOCtl_maDBCursorGetColumnText_case(func) \
case 455: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
int _columnIndex = b; \
void* _buffer = GVMR(c, MAAddress); \
int _bufferSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_cursorHandle, _columnIndex, _buffer, _bufferSize); \
} \

#define maIOCtl_maDBCursorGetColumnInt 456
#define maIOCtl_maDBCursorGetColumnInt_case(func) \
case 456: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
int _columnIndex = b; \
int* _value = GVMR(c, int); \
return func(_cursorHandle, _columnIndex, _value); \
} \

#define maIOCtl_maDBCursorGetColumnDouble 457
#define maIOCtl_maDBCursorGetColumnDouble_case(func) \
case 457: \
{ \
MAHandle _cursorHandle = (MAHandle)a; \
int _columnIndex = b; \
double* _value = GVMR(c, double); \
return func(_cursorHandle, _columnIndex, _value); \
} \

#define maIOCtl_maAudioDataCreateFromResource 458
#define maIOCtl_maAudioDataCreateFromResource_case(func) \
case 458: \
{ \
const char* _mime = GVS(a); \
MAHandle _data = (MAHandle)b; \
int _offset = c; \
int _length = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
int _flags = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
return func(_mime, _data, _offset, _length, _flags); \
} \

#define maIOCtl_maAudioDataCreateFromURL 459
#define maIOCtl_maAudioDataCreateFromURL_case(func) \
case 459: \
{ \
const char* _mime = GVS(a); \
const char* _url = GVS(b); \
int _flags = c; \
return func(_mime, _url, _flags); \
} \

#define maIOCtl_maAudioDataDestroy 460
#define maIOCtl_maAudioDataDestroy_case(func) \
case 460: \
{ \
MAAudioData _audioData = (MAAudioData)a; \
return func(_audioData); \
} \

#define maIOCtl_maAudioInstanceCreate 461
#define maIOCtl_maAudioInstanceCreate_case(func) \
case 461: \
{ \
MAAudioData _audioData = (MAAudioData)a; \
return func(_audioData); \
} \

#define maIOCtl_maAudioInstanceCreateDynamic 462
#define maIOCtl_maAudioInstanceCreateDynamic_case(func) \
case 462: \
{ \
int _sampleRate = a; \
int _numChannels = b; \
int _bufferSize = c; \
return func(_sampleRate, _numChannels, _bufferSize); \
} \

#define maIOCtl_maAudioSubmitBuffer 463
#define maIOCtl_maAudioSubmitBuffer_case(func) \
case 463: \
{ \
MAAudioInstance _instance = (MAAudioInstance)a; \
const void* _buffer = GVMR(b, MAAddress); \
int _numBytes = c; \
return func(_instance, _buffer, _numBytes); \
} \

#define maIOCtl_maAudioGetPendingBufferCount 464
#define maIOCtl_maAudioGetPendingBufferCount_case(func) \
case 464: \
{ \
MAAudioInstance _instance = (MAAudioInstance)a; \
return func(_instance); \
} \

#define maIOCtl_maAudioInstanceDestroy 465
#define maIOCtl_maAudioInstanceDestroy_case(func) \
case 465: \
{ \
MAAudioInstance _audioInstance = (MAAudioInstance)a; \
return func(_audioInstance); \
} \

#define maIOCtl_maAudioGetLength 466
#define maIOCtl_maAudioGetLength_case(func) \
case 466: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
return func(_audio); \
} \

#define maIOCtl_maAudioSetNumberOfLoops 467
#define maIOCtl_maAudioSetNumberOfLoops_case(func) \
case 467: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
int _loops = b; \
return func(_audio, _loops); \
} \

#define maIOCtl_maAudioPrepare 468
#define maIOCtl_maAudioPrepare_case(func) \
case 468: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
int _async = b; \
return func(_audio, _async); \
} \

#define maIOCtl_maAudioPlay 469
#define maIOCtl_maAudioPlay_case(func) \
case 469: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
return func(_audio); \
} \

#define maIOCtl_maAudioSetPosition 470
#define maIOCtl_maAudioSetPosition_case(func) \
case 470: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
int _milliseconds = b; \
return func(_audio, _milliseconds); \
} \

#define maIOCtl_maAudioGetPosition 471
#define maIOCtl_maAudioGetPosition_case(func) \
case 471: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
return func(_audio); \
} \

#define maIOCtl_maAudioSetVolume 472
#define maIOCtl_maAudioSetVolume_case(func) \
case 472: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
MA_FV _volume_dv; \
_volume_dv.i = b; \
float _volume = _volume_dv.f; \
return func(_audio, _volume); \
} \

#define maIOCtl_maAudioPause 473
#define maIOCtl_maAudioPause_case(func) \
case 473: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
return func(_audio); \
} \

#define maIOCtl_maAudioStop 474
#define maIOCtl_maAudioStop_case(func) \
case 474: \
{ \
MAAudioInstance _audio = (MAAudioInstance)a; \
return func(_audio); \
} \

#define maIOCtl_maSyscallPanicsEnable 475
#define maIOCtl_maSyscallPanicsEnable_case(func) \
case 475: \
{ \
return func(); \
} \

#define maIOCtl_maSyscallPanicsDisable 476
#define maIOCtl_maSyscallPanicsDisable_case(func) \
case 476: \
{ \
return func(); \
} \

#define maIOCtl_maAdsBannerCreate 477
#define maIOCtl_maAdsBannerCreate_case(func) \
case 477: \
{ \
int _bannerSize = a; \
const char* _publisherID = GVS(b); \
return func(_bannerSize, _publisherID); \
} \

#define maIOCtl_maAdsBannerDestroy 478
#define maIOCtl_maAdsBannerDestroy_case(func) \
case 478: \
{ \
MAHandle _bannerHandle = (MAHandle)a; \
return func(_bannerHandle); \
} \

#define maIOCtl_maAdsAddBannerToLayout 479
#define maIOCtl_maAdsAddBannerToLayout_case(func) \
case 479: \
{ \
MAHandle _bannerHandle = (MAHandle)a; \
MAHandle _layoutHandle = (MAHandle)b; \
return func(_bannerHandle, _layoutHandle); \
} \

#define maIOCtl_maAdsRemoveBannerFromLayout 480
#define maIOCtl_maAdsRemoveBannerFromLayout_case(func) \
case 480: \
{ \
MAHandle _bannerHandle = (MAHandle)a; \
MAHandle _layoutHandle = (MAHandle)b; \
return func(_bannerHandle, _layoutHandle); \
} \

#define maIOCtl_maAdsBannerSetProperty 481
#define maIOCtl_maAdsBannerSetProperty_case(func) \
case 481: \
{ \
MAHandle _bannerHandle = (MAHandle)a; \
const char* _property = GVS(b); \
const char* _value = GVS(c); \
return func(_bannerHandle, _property, _value); \
} \

#define maIOCtl_maAdsBannerGetProperty 482
#define maIOCtl_maAdsBannerGetProperty_case(func) \
case 482: \
{ \
MAHandle _bannerHandle = (MAHandle)a; \
const char* _property = GVS(b); \
int _bufSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
char* _value = (MAString) SYSCALL_THIS->GetValidatedMemRange(c, _bufSize); \
return func(_bannerHandle, _property, _value, _bufSize); \
} \

#define maIOCtl_maNotificationLocalCreate 483
#define maIOCtl_maNotificationLocalCreate_case(func) \
case 483: \
{ \
return func(); \
} \

#define maIOCtl_maNotificationLocalDestroy 484
#define maIOCtl_maNotificationLocalDestroy_case(func) \
case 484: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
return func(_notificationHandle); \
} \

#define maIOCtl_maNotificationLocalSetProperty 485
#define maIOCtl_maNotificationLocalSetProperty_case(func) \
case 485: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
const char* _property = GVS(b); \
const char* _value = GVS(c); \
return func(_notificationHandle, _property, _value); \
} \

#define maIOCtl_maNotificationLocalGetProperty 486
#define maIOCtl_maNotificationLocalGetProperty_case(func) \
case 486: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
const char* _property = GVS(b); \
int _bufSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
char* _value = (MAString) SYSCALL_THIS->GetValidatedMemRange(c, _bufSize); \
return func(_notificationHandle, _property, _value, _bufSize); \
} \

#define maIOCtl_maNotificationLocalSchedule 487
#define maIOCtl_maNotificationLocalSchedule_case(func) \
case 487: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
return func(_notificationHandle); \
} \

#define maIOCtl_maNotificationLocalUnschedule 488
#define maIOCtl_maNotificationLocalUnschedule_case(func) \
case 488: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
return func(_notificationHandle); \
} \

#define maIOCtl_maNotificationPushRegister 489
#define maIOCtl_maNotificationPushRegister_case(func) \
case 489: \
{ \
MAHandle _pushNotificationTypes = (MAHandle)a; \
const char* _senderId = GVS(b); \
return func(_pushNotificationTypes, _senderId); \
} \

#define maIOCtl_maNotificationPushUnregister 490
#define maIOCtl_maNotificationPushUnregister_case(func) \
case 490: \
{ \
return func(); \
} \

#define maIOCtl_maNotificationPushGetRegistration 491
#define maIOCtl_maNotificationPushGetRegistration_case(func) \
case 491: \
{ \
int _registrationMessageSize = b; \
char* _registrationMesssage = (MAString) SYSCALL_THIS->GetValidatedMemRange(a, _registrationMessageSize); \
return func(_registrationMesssage, _registrationMessageSize); \
} \

#define maIOCtl_maNotificationPushGetData 492
#define maIOCtl_maNotificationPushGetData_case(func) \
case 492: \
{ \
MAHandle _pushNotificationHandle = (MAHandle)a; \
MAPushNotificationData* _pushNotificationData = GVMR(b, MAPushNotificationData); \
return func(_pushNotificationHandle, _pushNotificationData); \
} \

#define maIOCtl_maNotificationPushDestroy 493
#define maIOCtl_maNotificationPushDestroy_case(func) \
case 493: \
{ \
MAHandle _notificationHandle = (MAHandle)a; \
return func(_notificationHandle); \
} \

#define maIOCtl_maNotificationSetIconBadge 494
#define maIOCtl_maNotificationSetIconBadge_case(func) \
case 494: \
{ \
int _applicationIconBadgeNumber = a; \
func(_applicationIconBadgeNumber); \
return 0; \
} \

#define maIOCtl_maNotificationGetIconBadge 495
#define maIOCtl_maNotificationGetIconBadge_case(func) \
case 495: \
{ \
return func(); \
} \

#define maIOCtl_maNotificationPushSetTickerText 496
#define maIOCtl_maNotificationPushSetTickerText_case(func) \
case 496: \
{ \
const char* _tickerText = GVS(a); \
return func(_tickerText); \
} \

#define maIOCtl_maNotificationPushSetMessageTitle 497
#define maIOCtl_maNotificationPushSetMessageTitle_case(func) \
case 497: \
{ \
const char* _messageTitle = GVS(a); \
return func(_messageTitle); \
} \

#define maIOCtl_maNotificationPushSetDisplayFlag 498
#define maIOCtl_maNotificationPushSetDisplayFlag_case(func) \
case 498: \
{ \
int _displayFlag = a; \
return func(_displayFlag); \
} \

#define maIOCtl_maCaptureSetProperty 499
#define maIOCtl_maCaptureSetProperty_case(func) \
case 499: \
{ \
const char* _property = GVS(a); \
const char* _value = GVS(b); \
return func(_property, _value); \
} \

#define maIOCtl_maCaptureGetProperty 500
#define maIOCtl_maCaptureGetProperty_case(func) \
case 500: \
{ \
const char* _property = GVS(a); \
int _bufSize = c; \
char* _value = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufSize); \
return func(_property, _value, _bufSize); \
} \

#define maIOCtl_maCaptureAction 501
#define maIOCtl_maCaptureAction_case(func) \
case 501: \
{ \
int _action = a; \
return func(_action); \
} \

#define maIOCtl_maCaptureWriteImage 502
#define maIOCtl_maCaptureWriteImage_case(func) \
case 502: \
{ \
MAHandle _handle = (MAHandle)a; \
const char* _fullPath = GVS(b); \
int _fullPathBufSize = c; \
return func(_handle, _fullPath, _fullPathBufSize); \
} \

#define maIOCtl_maCaptureGetImagePath 503
#define maIOCtl_maCaptureGetImagePath_case(func) \
case 503: \
{ \
MAHandle _handle = (MAHandle)a; \
int _bufferSize = c; \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufferSize); \
return func(_handle, _buffer, _bufferSize); \
} \

#define maIOCtl_maCaptureGetVideoPath 504
#define maIOCtl_maCaptureGetVideoPath_case(func) \
case 504: \
{ \
MAHandle _handle = (MAHandle)a; \
int _bufferSize = c; \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufferSize); \
return func(_handle, _buffer, _bufferSize); \
} \

#define maIOCtl_maCaptureDestroyData 505
#define maIOCtl_maCaptureDestroyData_case(func) \
case 505: \
{ \
MAHandle _handle = (MAHandle)a; \
return func(_handle); \
} \

#define maIOCtl_maPurchaseSupported 506
#define maIOCtl_maPurchaseSupported_case(func) \
case 506: \
{ \
return func(); \
} \

#define maIOCtl_maPurchaseCreate 507
#define maIOCtl_maPurchaseCreate_case(func) \
case 507: \
{ \
MAHandle _productHandle = (MAHandle)a; \
const char* _productID = GVS(b); \
func(_productHandle, _productID); \
return 0; \
} \

#define maIOCtl_maPurchaseSetPublicKey 508
#define maIOCtl_maPurchaseSetPublicKey_case(func) \
case 508: \
{ \
const char* _developerPublicKey = GVS(a); \
return func(_developerPublicKey); \
} \

#define maIOCtl_maPurchaseRequest 509
#define maIOCtl_maPurchaseRequest_case(func) \
case 509: \
{ \
MAHandle _productHandle = (MAHandle)a; \
int _quantity = b; \
func(_productHandle, _quantity); \
return 0; \
} \

#define maIOCtl_maPurchaseVerifyReceipt 510
#define maIOCtl_maPurchaseVerifyReceipt_case(func) \
case 510: \
{ \
MAHandle _productHandle = (MAHandle)a; \
func(_productHandle); \
return 0; \
} \

#define maIOCtl_maPurchaseGetField 511
#define maIOCtl_maPurchaseGetField_case(func) \
case 511: \
{ \
MAHandle _productHandle = (MAHandle)a; \
const char* _property = GVS(b); \
int _bufferSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(c, _bufferSize); \
return func(_productHandle, _property, _buffer, _bufferSize); \
} \

#define maIOCtl_maPurchaseSetStoreURL 512
#define maIOCtl_maPurchaseSetStoreURL_case(func) \
case 512: \
{ \
const char* _url = GVS(a); \
func(_url); \
return 0; \
} \

#define maIOCtl_maPurchaseGetName 513
#define maIOCtl_maPurchaseGetName_case(func) \
case 513: \
{ \
MAHandle _productHandle = (MAHandle)a; \
int _bufferSize = c; \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufferSize); \
return func(_productHandle, _buffer, _bufferSize); \
} \

#define maIOCtl_maPurchaseRestoreTransactions 514
#define maIOCtl_maPurchaseRestoreTransactions_case(func) \
case 514: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maPurchaseDestroy 515
#define maIOCtl_maPurchaseDestroy_case(func) \
case 515: \
{ \
MAHandle _productHandle = (MAHandle)a; \
return func(_productHandle); \
} \


#endif	//MAAPI_DEFS_H
