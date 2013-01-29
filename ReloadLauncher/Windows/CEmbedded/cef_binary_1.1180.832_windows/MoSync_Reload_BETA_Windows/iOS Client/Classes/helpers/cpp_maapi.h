#ifndef CPP_MAAPI_H
#define CPP_MAAPI_H

#if defined(__cplusplus) && !defined(__SYMBIAN32__)
extern "C" {
#endif

#include "maapi_defs.h"

/**
* Compares the runtime's interface version with yours,
* using a hash of the interface's contents.
*
* If the versions do not match, a MoSync Panic is generated.
*
* This function returns the runtime's hash. However, if there is
* a version mismatch, syscall and IOCTL numbers may differ between the runtime and
* your version of the header files, causing a different function than this to be called.
*
* The hash appears as a 32-bit random number, so it is very unlikely that the return
* value from any other function is the same as the runtime's hash.
*
* Therefore, you should always compare the return value from this function to your hash
* and exit your program, preferably using maPanic(), if they don't match.
*
* \param hash Your hash. Pass #MAIDL_HASH.
* \returns The runtime's hash.
*/
SYSCALL(int,  maCheckInterfaceVersion(int hash));

/**
* Shuts down the system. This function does not return.
* \param result Passed to the operating system, where applicable. Ignored otherwise.
*/
SYSCALL(void,  ATTRIBUTE(noreturn, maExit(int result)));

/**
* Displays a message to the user, then shuts down the system.
* This function does not return.
* \param result Passed to the operating system, where applicable. Ignored otherwise.
* \param message The message should be short, not more than 40 characters,
* to ensure its visibility on all screen sizes.
* \see MAPanicReport
*/
SYSCALL(void,  ATTRIBUTE(noreturn, maPanic(int result, const char* message)));

/**
* Sets \a size bytes, starting at \a dst, to the specified value, interpreted as an unsigned char.
* \returns \a dst.
*/
SYSCALL(void*,  memset(void* dst, int val, ulong size));

/**
* Copies the values of \a size bytes from the location pointed by \a src directly to the memory
* block pointed by \a dst.
*
* The underlying type of the objects pointed by both the source and destination pointers are
* irrelevant for this function; The result is a binary copy of the data.
*
* The function does not check for any terminating null character in source - it always copies
* exactly \a size bytes.
*
* To avoid overflows, the size of the arrays pointed by both the destination and source
* parameters, shall be at least \a size bytes, and should not overlap (for overlapping memory
* blocks, memmove() is a safe approach).
* \returns \a dst.
*/
SYSCALL(void*,  memcpy(void* dst, const void* src, ulong size));

/**
* Compares the C string \a str1 to the C string \a str2.
*
* This function starts comparing the first character of each string.
* If they are equal to each other, it continues with the following pairs until the
* characters differ or until a terminanting null-character is reached.
*
* \returns An integral value indicating the relationship between the strings:
* A zero value indicates that both strings are equal.
* A value greater than zero indicates that the first character that does not match
* has a greater value in \a str1 than in \a str2. A value less than zero indicates the opposite.
*/
SYSCALL(int,  strcmp(const char* str1, const char* str2));

/**
* Copies the C string pointed by \a src into the array pointed by \a dst,
* including the terminating null character.
*
* To avoid overflows, the size of the array pointed by \a dst shall be long
* enough to contain the same C string as \a src (including the terminating null
* character), and should not overlap in memory with \a src.
* \returns \a dst.
*/
SYSCALL(char*,  strcpy(char* dst, const char* src));

/**
* Returns \a a + \a b.
*/
SYSCALL(double,  __adddf3(double a, double b));

/**
* Returns \a a - \a b.
*/
SYSCALL(double,  __subdf3(double a, double b));

/**
* Returns \a a * \a b.
*/
SYSCALL(double,  __muldf3(double a, double b));

/**
* Returns \a a / \a b.
* If \a b == 0, a <a href="../panics.html">MoSync Panic</a> is thrown.
*/
SYSCALL(double,  __divdf3(double a, double b));

/**
* Returns -\a a.
*/
SYSCALL(double,  __negdf2(double a));

/**
* Returns the integer part of \a a.
*/
SYSCALL(int,  __fixdfsi(double a));

/**
* Returns the unsigned integer part of \a a. Negative values become zero.
*/
SYSCALL(uint,  __fixunsdfsi(double a));

/**
* Returns the double representation of \a a.
*/
SYSCALL(double,  __floatsidf(int a));

/**
* Returns the double representation of \a a.
*/
SYSCALL(double,  __extendsfdf2(float a));

/**
* Returns \>0 if \a a \> \a b, 0 if \a a == \a b and \<0 if \a a \< \a b.
* If either argument is Not a Number, the result is undefined.
*/
SYSCALL(int,  dcmp(double a, double b));

/**
* Returns \a a + \a b.
*/
SYSCALL(float,  __addsf3(float a, float b));

/**
* Returns \a a - \a b.
*/
SYSCALL(float,  __subsf3(float a, float b));

/**
* Returns \a a * \a b.
*/
SYSCALL(float,  __mulsf3(float a, float b));

/**
* Returns \a a / \a b.
* If \a b == 0, a <a href="../panics.html">MoSync Panic</a> is thrown.
*/
SYSCALL(float,  __divsf3(float a, float b));

/**
* Returns -\a a.
*/
SYSCALL(float,  __negsf2(float a));

/**
* Returns the integer part of \a a.
*/
SYSCALL(int,  __fixsfsi(float a));

/**
* Returns the unsigned integer part of \a a. Negative values become zero.
*/
SYSCALL(uint,  __fixunssfsi(float a));

/**
* Returns the float representation of \a a.
*/
SYSCALL(float,  __floatsisf(int a));

/**
* Returns the float representation of \a a.
*/
SYSCALL(float,  __truncdfsf2(double a));

/**
* Returns \>0 if \a a \> \a b, 0 if \a a == \a b and \<0 if \a a \< \a b.
* If either argument is Not a Number, the result is undefined.
*/
SYSCALL(int,  fcmp(float a, float b));

/**
* Returns the sine of \a x.
* \param x An angle in radians.
*/
SYSCALL(double,  sin(double x));

/**
* Returns the cosine of \a x.
* \param x An angle in radians.
*/
SYSCALL(double,  cos(double x));

/**
* Returns the tangent of \a x.
* \param x An angle in radians.
*/
SYSCALL(double,  tan(double x));

/**
* Returns the square root of \a x.
*/
SYSCALL(double,  sqrt(double x));

/**
* Sets the color used by drawing functions. Returns previous color. Initial color is 0 (black).
* \param rgb A color in RGB8 format (0xRRGGBB). The top byte is ignored.
*/
SYSCALL(int,  maSetColor(int rgb));

/**
* Sets the clipping rectangle for the current draw target.
* The screen and every drawable image each maintains a clipping rectangle.
* Drawing operations have no effect outside the clipping rectangle.
* The default clipping rectangle covers the entire draw target, so that
* clipping occurs at the draw target's edges.
*/
SYSCALL(void,  maSetClipRect(int left, int top, int width, int height));

/**
* Returns the clipping rectangle for the current draw target.
*/
SYSCALL(void,  maGetClipRect(MARect* out));

/**
* Draws a single pixel using the current color.
* \see maSetColor()
*/
SYSCALL(void,  maPlot(int posX, int posY));

/**
* Draws a line using the current color.
* \see maSetColor()
*/
SYSCALL(void,  maLine(int startX, int startY, int endX, int endY));

/**
* Draws a filled rectangle using the current color.
* Width and height must be greater than zero.
* \see maSetColor()
*/
SYSCALL(void,  maFillRect(int left, int top, int width, int height));

/**
* Draws a filled triangle strip using the current color.
* \param points A pointer to an array of \a count MAPoint2d:s representing the
* vertices of the strip.
* \param count The count of vertices in the strip. Must be at least 3.
* \see maSetColor()
*/
SYSCALL(void,  maFillTriangleStrip(const MAPoint2d* points, int count));

/**
* Draws a filled triangle fan using the current color.
* \param points A pointer to an array of \a count MAPoint2d:s representing the
* vertices of the fan.
* \param count The count of vertices in the fan. Must be at least 3.
* \see maSetColor()
*/
SYSCALL(void,  maFillTriangleFan(const MAPoint2d* points, int count));

/**
* Returns the size in pixels of Latin-1 text as it would appear on-screen.
*/
SYSCALL(MAExtent,  maGetTextSize(const char* str));

/**
* Returns the size in pixels of Unicode text as it would appear on-screen.
*/
SYSCALL(MAExtent,  maGetTextSizeW(const wchar* str));

/**
* Draws Latin-1 text using the current color.
* The coordinates are the top-left corner of the text's bounding box.
* \see maSetColor()
*/
SYSCALL(void,  maDrawText(int left, int top, const char* str));

/**
* Draws Unicode text using the current color.
* The coordinates are the top-left corner of the text's bounding box.
* \see maSetColor()
*/
SYSCALL(void,  maDrawTextW(int left, int top, const wchar* str));

/**
* Copies the back buffer to the physical screen.
*/
SYSCALL(void,  maUpdateScreen(void));

/**
* Normally, a phone's backlight turns itself off after
* a few seconds of the user not pressing any keys.
* To avoid this behaviour, call this function periodically.
* As the timeout period is different for every device, and sometimes even user-configurable,
* it's recommended that you call this function at least once every 500 milliseconds
* to ensure that the light stays on at all times.
*/
SYSCALL(void,  maResetBacklight(void));

/**
* Returns the screen size.
* Returns the screen size.
*/
SYSCALL(MAExtent,  maGetScrSize(void));

/**
* Draws an image.
* It it placed on the draw target with the top left corner according to the parameters.
*/
SYSCALL(void,  maDrawImage(MAHandle image, int left, int top));

/**
* Draws an image.
* The source is an array of ints that represent pixels in ARGB format.
* \param dstPoint The top-left point on the draw target.
* \param src The address to the source image.
* \param srcRect The portion of the source image to be drawn.
* \param scanlength The width, in pixels, of the image represented by the source array.
*/
SYSCALL(void,  maDrawRGB(const MAPoint2d* dstPoint, const void* src, const MARect* srcRect, int scanlength));

/**
* Draws a portion of an image using a transformation.
* \param image The source image.
* \param srcRect The portion of the source image to be drawn.
* Must not exceed the bounds of the source image.
* \param dstPoint The top-left point on the draw target.
* \param transformMode One of the \link #TRANS_NONE TRANS \endlink constants.
* \see maDrawImage
*/
SYSCALL(void,  maDrawImageRegion(MAHandle image, const MARect* srcRect, const MAPoint2d* dstPoint, int transformMode));

/**
* Returns the size of an image.
*/
SYSCALL(MAExtent,  maGetImageSize(MAHandle image));

/**
* Copies an image into an array of ints that represent pixels in ARGB format.
* The destination rectangle is defined as { 0,0, \a srcRect.width, \a srcRect.height }.
* Parts of the destination array that are outside the destination rectangle are not modified.
* If \a srcRect is outside the bounds of the source image,
* or if \a srcRect.width is greater than \a scanlength, a MoSync Panic is thrown.
* \param image The handle to the source image.
* \param dst The address of the destination array.
* \param scanlength The width of the image, in pixels, represented by the destination array.
* \param srcRect The portion of the source image to be copied.
*/
SYSCALL(void,  maGetImageData(MAHandle image, void* dst, const MARect* srcRect, int scanlength));

/**
* Sets the current draw target.
* The handle must be a drawable image or #HANDLE_SCREEN, which represents the back buffer.
* The initial draw target is the back buffer.
* If an image is set as draw target, its object handle goes into flux, which prevents
* its destruction or use as a source in maDrawImage. When a different draw target is set,
* the image's handle is restored. Returns the the previously set draw target.
* \see maCreateDrawableImage()
*/
SYSCALL(MAHandle,  maSetDrawTarget(MAHandle image));

/**
 * Finds the label resource with the specified \a name and returns its index.
 * If it is not found, -1 is returned.
 */
SYSCALL(int,  maFindLabel(const char* name));

/**
* Creates an image object using encoded data from a data object.
* All platforms support the PNG format. Some platforms may also support JPEG and/or GIF.
* \param placeholder The placeholder for the image object that is to be created.
* \param data The data object that holds the encoded data.
* \param offset The offset in the data object where the encoded data begins.
* \param size The size in bytes of the encoded data.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY or #RES_BAD_INPUT if failed.
*/
SYSCALL(int,  maCreateImageFromData(MAHandle placeholder, MAHandle data, int offset, int size));

/**
* Creates an image object using raw ARGB data.
* \param placeholder The placeholder for the image object that is to be created.
* \param src Address of the raw data. 4 bytes per pixel, format 0xAARRGGBB.
* \param size The size in pixels of the image, constructed using the EXTENT() macro.
* \param alpha Non-zero if the resulting image should have an alpha channel, zero otherwise.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
SYSCALL(int,  maCreateImageRaw(MAHandle placeholder, const void* src, MAExtent size, int alpha));

/**
* Creates a drawable image of the specified size. A drawable image has no alpha channel,
* which is to say, no transparency.
* Its initial contents are undefined, so you should draw onto the entire surface to
* be sure what will happen when you draw this image onto something else.
* \param placeholder The resource handle of the new image.
* \param width Width, in pixels, of the new image. Must be \> 0.
* \param height Height, in pixels, of the new image. Must be \> 0.
* \see maSetDrawTarget()
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
SYSCALL(int,  maCreateDrawableImage(MAHandle placeholder, int width, int height));

/**
* Creates a data object of the specified \a size, in bytes. Its initial contents are undefined.
* \returns #RES_OK if succeded and #RES_OUT_OF_MEMORY if failed.
*/
SYSCALL(int,  maCreateData(MAHandle placeholder, int size));

/**
*	Creates a new placeholder and returns the handle to it.
*/
SYSCALL(MAHandle,  maCreatePlaceholder(void));

/**
* Releases a handle returned by maCreatePlaceholder().
* If the handle refers to an object, such as an image or a data object,
* that object is destroyed, as if maDestroyObject() had been called.
*
* The released handle may be reused by the system
* and returned by future calls to maCreatePlaceholder(),
* or by other system functions that allocate resources dynamically.
*
* This function is preferred to maDestroyObject(), unless you need
* to reuse the handle.
*
* Attempting to destroy a handle that has already been released,
* or was not returned by maCreatePlaceholder(), will cause a MoSync Panic.
*
* @param handle The handle to be released.
*/
SYSCALL(void,  maDestroyPlaceholder(MAHandle handle));

/**
* Destroys an object of any type. The handle becomes a placeholder.
*/
SYSCALL(void,  maDestroyObject(MAHandle handle));

/**
* Returns the size, in bytes, of a data object.
*/
SYSCALL(int,  maGetDataSize(MAHandle data));

/**
* Reads \a size bytes from a data object, starting at \a offset,
* into memory pointed to by \a dst.
* \warning Do not attempt to read zero bytes or out of bounds;
* it is not supported and will result in a MoSync Panic.
*/
SYSCALL(void,  maReadData(MAHandle data, void* dst, int offset, int size));

/**
* Writes \a size bytes to a data object, starting at \a offset,
* from memory pointed to by \a src.
*/
SYSCALL(void,  maWriteData(MAHandle data, const void* src, int offset, int size));

/**
* Copies \a size bytes from data object \a src to \a dst, at the specified offsets.
*/
SYSCALL(void,  maCopyData(const MACopyData* params));

/**
* Opens a permanent data store, optionally creates one if it doesn't exist already.
*
* Returns a Store MAHandle on success.
* Returns #STERR_NONEXISTENT if !(flags & #MAS_CREATE_IF_NECESSARY) and the store does not exist.
* Returns another \link #STERR_GENERIC STERR \endlink code if the store could not be opened
* for another reason.
*
* \param name The name of the store. A store name must have from 1 to 32 characters,
* and must not contain any of the following characters: "/\\:;?*'
* \param flags A combination of \link #MAS_CREATE_IF_NECESSARY MAS \endlink flags, or zero.
*/
SYSCALL(MAHandle,  maOpenStore(const char* name, int flags));

/**
* Writes the contents of a data object to a store. Destroys any data previously in the store.
* Returns \> 0 on success, #STERR_FULL if the storage system is full,
* or another \link #STERR_GENERIC STERR \endlink code if the write failed for another reason.
* \param store The store to write to.
* \param data The data object to read from.
*/
SYSCALL(int,  maWriteStore(MAHandle store, MAHandle data));

/**
* Creates a data object and copies the contents of a store to it.
* Use maGetDataSize to get the size of the data.
* \param store The store to read from.
* \param placeholder The placeholder handle where a data object will be created.
* \returns RES_OK if succeded and RES_OUT_OF_MEMORY if failed.
*/
SYSCALL(int,  maReadStore(MAHandle store, MAHandle placeholder));

/**
* Closes a store. Also deletes that store if \a _delete is non-zero.
*/
SYSCALL(void,  maCloseStore(MAHandle store, int _delete));

/**
* Asynchronously opens a connection using the specified URL.
* A URL takes the following form:
* <tt>\<protocol\>://\<address\>[:\<port\>]\<parameters\></tt>\n
* The following protocols are supported:
*
* <tt>socket</tt>, which is TCP. It has no parameters.
*
* <tt>ssl</tt>, which is an encrypted TCP connection. It has no parameters.
*
* <tt>http</tt>, which is HTTP/1.0 GET. When using HTTP, you need not specify the port;
* it defaults to port 80.
*
* Its parameters is the document path (for example, "/index.html").
* You must specify a path, or this function will fail with #CONNERR_URL.
* The minimal path ("/") is acceptable.
*
* Writing to a http connection is not allowed.
*
* <tt>https</tt>, which is an encrypted HTTP GET. It has the same parameters as <tt>http</tt>.
*
* <tt>btspp</tt>, which is Bluetooth Serial Port. It has no parameters.
*\n
*\n
* For the <tt>socket</tt> and <tt>http</tt> protocols, \a \<address\> can be either a decimal,
* dot-delimited (.) IPv4 address or a standard Domain Name,
* while \a \<port\> is a decimal number from 1 to 65535.
*
* In the <tt>socket</tt> protocol, certain ports are protected on certain platforms and
* cannot be used, most notably port 80 on Java ME. In this case, use http instead.
*
* On a few devices, using ports numbered below 1024 may cause system crashes.
* Therefore, it is advisable to use ports above 1024 if you can choose.
*
* On some J2ME devices, connections to port 443 (except from https) is not
* allowed and might cause a system exception.
*
* For the <tt>btspp</tt> protocol, \a \<address\> is 12 hexadecimal digits and
* \<port\> is a decimal number from 1 to 30.
*
* Example TCP url: <tt>socket://www.example.com:23</tt>
*
* Example SSL url: <tt>ssl://www.example.com:22</tt>
*
* Example HTTP url: <tt>http://www.example.com/directory/document.html</tt>
*
* Example HTTPS url: <tt>https://www.google.com</tt>
*
* Example Bluetooth url: <tt>btspp://001dbe15e455:9</tt>
*
* You can also use MAUtil::BluetoothConnection to connect via Bluetooth service uuid.
*
* To find useful Bluetooth addresses, use the Bluetooth discovery API.
* See maBtStartDeviceDiscovery().
*
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_CONNECT.
*
* The success value is \> 0. For the <tt>http</tt> protocol,
* the success value is the HTTP response code.
*
*
* When you're done with the connection, maConnClose() must be called to free
* the resources associated with the handle. This must be done even if
* the connect operation failed.
*
* There is a limit of #CONN_MAX open connection handles at any time, so if you keep
* opening connections without closing them, you'll eventually receive the
* #CONNERR_MAX error code instead of new connection handles.
*
* Alternatively, this function can be called with one of these url types to
* create a Server Connection:\n
* <tt>socket://[:\<port\>]</tt>, for TCP.\n
* <tt>btspp://localhost:\<uuid\>[;name=\<YourServiceName\>]</tt>, for Bluetooth.\n
* \<uuid\> is a 32-digit hexadecimal number. It will be used to create the
* service record. Its MAUUID representation can be used by clients to search for
* this service.
*
* Example Bluetooth server url:
* <tt>btspp://localhost:0000110100001000800000805F9B34FB;name=Serial Port</tt>
*
* Server connections are created synchronously; no CONN event is generated,
* and as soon as this function returns, it's done.
*
* A server connection can not be read from or written to, but it can be closed.
* You can also use it in calls to maAccept() and maConnGetAddr().
*
* \returns The connecting handle \>0, or one of the \link #CONNERR_GENERIC CONNERR \endlink values.
* \see maGetEvent()
* \see \ref connApiOverview
*/
SYSCALL(MAHandle,  maConnect(const char* url));

/**
* Closes a connection, freeing any resources associated with the handle.
*
* Cancels any active operations on the connection.
* Such operations will finish with #CONNERR_CANCELED.
*/
SYSCALL(void,  maConnClose(MAHandle conn));

/**
* Asynchronously reads at least one and at most \a size bytes from a connection to memory.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_READ.
* The success value is the number of bytes read.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
SYSCALL(void,  maConnRead(MAHandle conn, void* dst, int size));

/**
* Asynchronously writes \a size bytes to a connection from memory.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_WRITE.
* The success value is \> 0.
*
* \warning The source data must remain available until the operation is complete,
* so if it was dynamically allocated, don't free it too early.
* \see maGetEvent
* \see \ref connApiOverview
*/
SYSCALL(void,  maConnWrite(MAHandle conn, const void* src, int size));

/**
* Asynchronously reads at least one and at most \a size bytes from a connection to
* a data object, starting at the specified offset.
* During the read, the data object being written to will be in flux.
* Any attempt to access it will result in a Panic.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_READ.
* The success value is is the number of bytes read.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
SYSCALL(void,  maConnReadToData(MAHandle conn, MAHandle data, int offset, int size));

/**
* Asynchronously writes \a size bytes to a connection from a data object,
* starting at the specified offset.
* During the write, the data object being read from will be in flux.
* Any attempt to access it will result in a Panic.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_WRITE.
* The success value is \> 0.
*
* \see maGetEvent
* \see \ref connApiOverview
*/
SYSCALL(void,  maConnWriteFromData(MAHandle conn, MAHandle data, int offset, int size));

/**
* Retrieves the address of a connection. On server connections,
* you'll get the local address. On normal connections, you'll get the remote address.
*
* You can pass #HANDLE_LOCAL to retrieve the local address.
* In that case, you must set MAConnAddr::family before calling this function,
* to tell it which address to retrieve. Also, the port member is not set.
*
* \returns \< 0 on error.
*/
SYSCALL(int,  maConnGetAddr(MAHandle conn, MAConnAddr* addr));

/**
* Creates an unfinished HTTP/1.0 connection. You cannot read from this connection
* until it's been Finished. Before then, you can set request headers. After,
* you can get response headers.

* POST connections are special; they let you write to the connection before
* it's Finished. The first write causes the underlying TCP connection to be
* established and request headers transmitted. After the first write has
* begun, you may no longer set request headers.

* \param url An HTTP or HTTPS URL. See maConnect() for the exact form.
* \param method #HTTP_GET, #HTTP_POST, #HTTP_HEAD, #HTTP_PUT or #HTTP_DELETE.
* \returns An unfinished HTTP connection handle \>0, or a
* \link #CONNERR_GENERIC CONNERR \endlink value.
* \see maHttpFinish
*/
SYSCALL(MAHandle,  maHttpCreate(const char* url, int method));

/**
* Sets a request header of an HTTP connection.
*
* Overwrites any existing header with the same key. The keys is case-insensitive.
*
* If the connection's method is #HTTP_POST, it must not have been written to.
* \param conn An unfinished HTTP connection handle.
* \param key The name of the header.
* \param value The new value of the header.
*/
SYSCALL(void,  maHttpSetRequestHeader(MAHandle conn, const char* key, const char* value));

/**
* Stores an HTTP response header in the specified buffer.
*
* The buffer may be too small to contain the header and the terminating zero;
* in that case, the buffer will not be filled
* and you should create a bigger buffer and call this function again.
* Use the return value to determine how long the buffer needs to be.
*
* \param conn A finished HTTP connection handle.
* \param key The name of the header. Case-insensitive.
* \param buffer A string buffer.
* \param bufSize The size of the buffer, in bytes.
* \returns The length of the header value, excluding the terminating zero, or
* #CONNERR_NOHEADER if the header doesn't exist.
*/
SYSCALL(int,  maHttpGetResponseHeader(MAHandle conn, const char* key, char* buffer, int bufSize));

/**
* Asynchronously finishes an HTTP connection. This entails making the
* underlying TCP connection and sending request headers, unless that has
* already been done by a #HTTP_POST write, and receiving the response headers.
*
* The result of the operation will be delivered in a CONN event, with
* MAConnEventData::opType set to #CONNOP_FINISH.
* The success value is the HTTP response code.
*
* \param conn An unfinished HTTP connection handle.
* \see maGetEvent
* \see \ref connApiOverview
*/
SYSCALL(void,  maHttpFinish(MAHandle conn));

/**
* Loads a new object array from the a data object. The old object array is overwritten,
* except where the new array has SKIP objects. In those cases, the old objects are saved.
* Returns zero on error, \>0 on success. On error, the old object array remains unchanged.
* \param data The data object containing new resources, in the format of a MoSync
* compiled resource file.
* \note There must not be any UBIN objects in the new array,
* except those of the old array that were SKIP'd.
*/
SYSCALL(int,  maLoadResources(MAHandle data));

/**
* Loads a specific resource in the given placeholder.
* \param handle The handle of the resource that needs to be loaded
* \param placeholder The placeholder where to load the resource from handle.
* \param flag One of the MA_RESOURCE_OPEN, MA_RESOURCE_CLOSE,
* MA_RESOURCE_OPEN|MA_RESOURCE_CLOSE to control the resource binary.
*/
SYSCALL(int,  maLoadResource(MAHandle handle, MAHandle placeholder, int flag));

SYSCALL(int,  maCountResources(void));

/**
* Loads a new program from the a data object, closes the running program, and starts the new one.
* The format of the data object is a MoSync program file concatenated with a resource file.
* If this function returns, there was an error.
*
* \param data The data object containing the new program.
* \param reload If non-zero, the original program will be reloaded after the new program has
* exited. If zero, MoSync will exit when the loaded program exists, unless that program,
* or one of its sub-programs, calls this function with \a reload set to non-zero.
*
* \note A program that was loaded with this function cannot be reloaded; instead, it will
* always be the very first program in the chain that is reloaded.
* \note The stored reload flag is or'd with the one provided to each call to this function.
* It is also reset when the reload occurs.
* \note Thus, if one program loads another with reload on, and the loaded program loads another
* with reload off, the original program will still be reloaded when the last one exits.
* Should the original program decide to exit after being reloaded, it will not be reloaded again.
*
* \note The \link #EVENT_TYPE_CLOSE close event \endlink will disable the reload mechanism.
*/
SYSCALL(void,  maLoadProgram(MAHandle data, int reload));

/**
* Returns a bitmask consisting of \link #MAKB_LEFT MAKB \endlink flags describing the current
* key state.
*/
SYSCALL(int,  maGetKeys(void));

/**
* There is a FIFO buffer that contains up to #EVENT_BUFFER_SIZE events.
* Each event has a type. Some types have additional data.
*
* This function retrieves the next event, unless the queue is empty.
* Use maWait() to wait until more events are available.
* \param event Pointer to an MAEvent struct that will be filled with the next event.
*
* When the \link #EVENT_TYPE_CLOSE Close event \endlink is posted,
* you must call maExit as soon as possible, or
* your program will be forcibly terminated. The timeout is device-dependent, but
* never longer than #EVENT_CLOSE_TIMEOUT milliseconds.
*
* After the Close event has been posted, most syscalls will stop working,
* returning default values and doing nothing.
* Only the following groups of functions are guaranteed to remain operational:
* Memory management, math, Resource management, Store, time, logging, maExit() and maPanic().
*
* \note Not all platforms have the capability to generate a Close event.
* You must always provide another way for the user to exit your application.
*
* \returns \> 0 on success, or zero if the buffer is empty.
*/
SYSCALL(int,  maGetEvent(MAEvent* event));

/**
* Suspends execution until there is an event in the buffer,
* or \a timeout milliseconds have passed. A timeout <= 0 is considered infinite.
* Timer accuracy is platform-specific, but should be better than 20 ms.
*
* Use this function rather than idle loops to save CPU/battery power.
* \see maGetEvent()
*/
SYSCALL(void,  maWait(int timeout));

/**
* Returns the number of seconds that have passed since
* 00:00:00, Jan 1st, 1970, UTC, according to the device clock.
*/
SYSCALL(int,  maTime(void));

/**
* Returns the number of seconds that have passed since
* 00:00:00, Jan 1st, 1970, local time, according to the device clock.
*/
SYSCALL(int,  maLocalTime(void));

/**
* Returns the number of milliseconds that has passed since some unknown point in time.
* Accuracy is platform-specific, but should be better than 20 ms.
*/
SYSCALL(int,  maGetMilliSecondCount(void));

/**
* Returns an approximation to the amount of memory currently available for
* allocating new objects, measured in bytes.
*
* There may be more memory available than reported by this function. Conversely,
* in the time between calling this function and allocating an object, another program
* may have allocated an object of its own, decreasing the available memory.
*
* The amount of memory required to allocate any specific object is device-dependent.
*
* When using this function to determine whether or not to allocate an object, always
* leave some memory alone for use by the system,
* preferably about 10% of the device's total memory, as reported by maTotalObjectMemory().
*/
SYSCALL(int,  maFreeObjectMemory(void));

/**
* Returns the total amount of memory available to MoSync, measured in bytes.
* May change over time, even as the program is running.
*/
SYSCALL(int,  maTotalObjectMemory(void));

/**
* Switches on the vibrator for the requested number of milliseconds,
* or switches it off if the requested duration is zero.
* A call to this function will override the previous call.
* Returns non-zero if the operation was allowed, zero if it wasn't.\n
* \n
* On devices which has no vibrator, this function will always return zero.
* The user may turn vibration off in phone settings. In that case, calling this function
* with a duration of zero may return non-zero, but a non-zero duration will return zero.
* In any case, the only way to conclusively determine if vibration is currently supported
* or not is to call this function with a duration of at least 1(one) ms.
* On iPhone the argument won't be taken into account.
*/
SYSCALL(int,  maVibrate(int ms));

/**
* Starts playing a sound.
*
* If a sound was already playing, it is stopped.
*
* The sound data is formatted as follows: \<mime type\>\<null terminator byte\>\<encoded data\>.
*
* The .media directive in the MoSync resource compiler creates this formatting.
*
* If you download or generate sound clips dynamically, you'll have to take care
* of the formatting yourself, or use a library that does it for you,
* for example MAUtil::AudioDownloader.
*
* To play .media resources, use offset 0 and maGetDataSize().
*
* Do not touch the resource while it's playing, or there will be... trouble.
*
* \returns \>= 0 on success and \< 0 on failure.
*
* \param sound_res The data object in which the sound is stored.
* \param offset The offset in the data object where the mime type and sound data is stored.
* \param size The size of mime type string and sound data.
*/
SYSCALL(int,  maSoundPlay(MAHandle sound_res, int offset, int size));

/**
* Stops the sound and rewinds it.
*/
SYSCALL(void,  maSoundStop(void));

/**
* Returns \> 0 if sound is playing, zero if it's not.
*/
SYSCALL(int,  maSoundIsPlaying(void));

/**
* Returns the volume, in the range 0-100, used by the sound engine.
* The initial volume is 100.
*/
SYSCALL(int,  maSoundGetVolume(void));

/**
* Sets the volume, which is a value in the range 0-100. All other values will be clamped
* to the allowed range.
*/
SYSCALL(void,  maSoundSetVolume(int vol));

/**
* Invokes an extension function. Normally you don't call this function directly.
*/
SYSCALL(longlong,  maExtensionFunctionInvoke(int function, int a, int b, int c MA_IOCTL_ELLIPSIS));

/**
* These functions are available only on certain platforms.
* Returns -1 if the function is not available.
*/
SYSCALL(longlong,  maIOCtl(int function, int a, int b, int c MA_IOCTL_ELLIPSIS));


#if defined(__cplusplus) && !defined(__SYMBIAN32__)
}
#endif

#endif	//CPP_MAAPI_H
