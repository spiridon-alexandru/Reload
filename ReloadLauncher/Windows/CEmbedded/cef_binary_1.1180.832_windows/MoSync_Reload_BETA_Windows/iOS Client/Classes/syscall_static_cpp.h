#include <helpers/maapi_defs.h>
#include "converters.h"

inline int SYSCALL(maCheckInterfaceVersion) (int hash) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCheckInterfaceVersion)(convertSingleArg<int>(hash)));
	return ret;
}
inline void SYSCALL(maExit) (int result) {
	SYSCALL_IMPL(maExit)(convertSingleArg<int>(result));
}
inline void SYSCALL(maPanic) (int result, int message) {
	SYSCALL_IMPL(maPanic)(convertSingleArg<int>(result), convertPointerArg<char*>(message));
}
inline int SYSCALL(memset) (int dst, int val, int size) {
	int ret;
	convertRet<void*>(ret, __dbl_high, (void*) SYSCALL_IMPL(memset)(convertPointerArg<void*>(dst), convertSingleArg<int>(val), convertSingleArg<ulong>(size)));
	return ret;
}
inline int SYSCALL(memcpy) (int dst, int src, int size) {
	int ret;
	convertRet<void*>(ret, __dbl_high, (void*) SYSCALL_IMPL(memcpy)(convertPointerArg<void*>(dst), convertPointerArg<void*>(src), convertSingleArg<ulong>(size)));
	return ret;
}
inline int SYSCALL(strcmp) (int str1, int str2) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(strcmp)(convertPointerArg<char*>(str1), convertPointerArg<char*>(str2)));
	return ret;
}
inline int SYSCALL(strcpy) (int dst, int src) {
	int ret;
	convertRet<void*>(ret, __dbl_high, (void*) SYSCALL_IMPL(strcpy)(convertPointerArg<char*>(dst), convertPointerArg<char*>(src)));
	return ret;
}
inline int SYSCALL(__adddf3) (int a1, int a2, int b1, int b2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__adddf3)(convertDoubleArg(a1, a2), convertDoubleArg(b1, b2)));
	return ret;
}
inline int SYSCALL(__subdf3) (int a1, int a2, int b1, int b2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__subdf3)(convertDoubleArg(a1, a2), convertDoubleArg(b1, b2)));
	return ret;
}
inline int SYSCALL(__muldf3) (int a1, int a2, int b1, int b2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__muldf3)(convertDoubleArg(a1, a2), convertDoubleArg(b1, b2)));
	return ret;
}
inline int SYSCALL(__divdf3) (int a1, int a2, int b1, int b2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__divdf3)(convertDoubleArg(a1, a2), convertDoubleArg(b1, b2)));
	return ret;
}
inline int SYSCALL(__negdf2) (int a1, int a2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__negdf2)(convertDoubleArg(a1, a2)));
	return ret;
}
inline int SYSCALL(__fixdfsi) (int a1, int a2) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(__fixdfsi)(convertDoubleArg(a1, a2)));
	return ret;
}
inline int SYSCALL(__fixunsdfsi) (int a1, int a2) {
	int ret;
	convertRet<uint>(ret, __dbl_high, (uint) SYSCALL_IMPL(__fixunsdfsi)(convertDoubleArg(a1, a2)));
	return ret;
}
inline int SYSCALL(__floatsidf) (int a) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__floatsidf)(convertSingleArg<int>(a)));
	return ret;
}
inline int SYSCALL(__extendsfdf2) (int a) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(__extendsfdf2)(convertSingleArg<float>(a)));
	return ret;
}
inline int SYSCALL(dcmp) (int a1, int a2, int b1, int b2) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(dcmp)(convertDoubleArg(a1, a2), convertDoubleArg(b1, b2)));
	return ret;
}
inline int SYSCALL(__addsf3) (int a, int b) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__addsf3)(convertSingleArg<float>(a), convertSingleArg<float>(b)));
	return ret;
}
inline int SYSCALL(__subsf3) (int a, int b) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__subsf3)(convertSingleArg<float>(a), convertSingleArg<float>(b)));
	return ret;
}
inline int SYSCALL(__mulsf3) (int a, int b) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__mulsf3)(convertSingleArg<float>(a), convertSingleArg<float>(b)));
	return ret;
}
inline int SYSCALL(__divsf3) (int a, int b) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__divsf3)(convertSingleArg<float>(a), convertSingleArg<float>(b)));
	return ret;
}
inline int SYSCALL(__negsf2) (int a) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__negsf2)(convertSingleArg<float>(a)));
	return ret;
}
inline int SYSCALL(__fixsfsi) (int a) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(__fixsfsi)(convertSingleArg<float>(a)));
	return ret;
}
inline int SYSCALL(__fixunssfsi) (int a) {
	int ret;
	convertRet<uint>(ret, __dbl_high, (uint) SYSCALL_IMPL(__fixunssfsi)(convertSingleArg<float>(a)));
	return ret;
}
inline int SYSCALL(__floatsisf) (int a) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__floatsisf)(convertSingleArg<int>(a)));
	return ret;
}
inline int SYSCALL(__truncdfsf2) (int a1, int a2) {
	int ret;
	convertRet<float>(ret, __dbl_high, (float) SYSCALL_IMPL(__truncdfsf2)(convertDoubleArg(a1, a2)));
	return ret;
}
inline int SYSCALL(fcmp) (int a, int b) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(fcmp)(convertSingleArg<float>(a), convertSingleArg<float>(b)));
	return ret;
}
inline int SYSCALL(sin) (int x1, int x2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(sin)(convertDoubleArg(x1, x2)));
	return ret;
}
inline int SYSCALL(cos) (int x1, int x2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(cos)(convertDoubleArg(x1, x2)));
	return ret;
}
inline int SYSCALL(tan) (int x1, int x2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(tan)(convertDoubleArg(x1, x2)));
	return ret;
}
inline int SYSCALL(sqrt) (int x1, int x2) {
	int ret;
	convertRet<double>(ret, __dbl_high, (double) SYSCALL_IMPL(sqrt)(convertDoubleArg(x1, x2)));
	return ret;
}
inline int SYSCALL(maSetColor) (int rgb) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maSetColor)(convertSingleArg<int>(rgb)));
	return ret;
}
inline void SYSCALL(maSetClipRect) (int left, int top, int width, int height) {
	SYSCALL_IMPL(maSetClipRect)(convertSingleArg<int>(left), convertSingleArg<int>(top), convertSingleArg<int>(width), convertSingleArg<int>(height));
}
inline void SYSCALL(maGetClipRect) (int out) {
	SYSCALL_IMPL(maGetClipRect)(convertPointerArg<MARect*>(out));
}
inline void SYSCALL(maPlot) (int posX, int posY) {
	SYSCALL_IMPL(maPlot)(convertSingleArg<int>(posX), convertSingleArg<int>(posY));
}
inline void SYSCALL(maLine) (int startX, int startY, int endX, int endY) {
	SYSCALL_IMPL(maLine)(convertSingleArg<int>(startX), convertSingleArg<int>(startY), convertSingleArg<int>(endX), convertSingleArg<int>(endY));
}
inline void SYSCALL(maFillRect) (int left, int top, int width, int height) {
	SYSCALL_IMPL(maFillRect)(convertSingleArg<int>(left), convertSingleArg<int>(top), convertSingleArg<int>(width), convertSingleArg<int>(height));
}
inline void SYSCALL(maFillTriangleStrip) (int points, int count) {
	SYSCALL_IMPL(maFillTriangleStrip)(convertPointerArg<MAPoint2d*>(points), convertSingleArg<int>(count));
}
inline void SYSCALL(maFillTriangleFan) (int points, int count) {
	SYSCALL_IMPL(maFillTriangleFan)(convertPointerArg<MAPoint2d*>(points), convertSingleArg<int>(count));
}
inline int SYSCALL(maGetTextSize) (int str) {
	int ret;
	convertRet<MAExtent>(ret, __dbl_high, (MAExtent) SYSCALL_IMPL(maGetTextSize)(convertPointerArg<char*>(str)));
	return ret;
}
inline int SYSCALL(maGetTextSizeW) (int str) {
	int ret;
	convertRet<MAExtent>(ret, __dbl_high, (MAExtent) SYSCALL_IMPL(maGetTextSizeW)(convertPointerArg<wchar*>(str)));
	return ret;
}
inline void SYSCALL(maDrawText) (int left, int top, int str) {
	SYSCALL_IMPL(maDrawText)(convertSingleArg<int>(left), convertSingleArg<int>(top), convertPointerArg<char*>(str));
}
inline void SYSCALL(maDrawTextW) (int left, int top, int str) {
	SYSCALL_IMPL(maDrawTextW)(convertSingleArg<int>(left), convertSingleArg<int>(top), convertPointerArg<wchar*>(str));
}
inline void SYSCALL(maUpdateScreen) () {
	SYSCALL_IMPL(maUpdateScreen)();
}
inline void SYSCALL(maResetBacklight) () {
	SYSCALL_IMPL(maResetBacklight)();
}
inline int SYSCALL(maGetScrSize) () {
	int ret;
	convertRet<MAExtent>(ret, __dbl_high, (MAExtent) SYSCALL_IMPL(maGetScrSize)());
	return ret;
}
inline void SYSCALL(maDrawImage) (int image, int left, int top) {
	SYSCALL_IMPL(maDrawImage)(convertSingleArg<MAHandle>(image), convertSingleArg<int>(left), convertSingleArg<int>(top));
}
inline void SYSCALL(maDrawRGB) (int dstPoint, int src, int srcRect, int scanlength) {
	SYSCALL_IMPL(maDrawRGB)(convertPointerArg<MAPoint2d*>(dstPoint), convertPointerArg<void*>(src), convertPointerArg<MARect*>(srcRect), convertSingleArg<int>(scanlength));
}
inline void SYSCALL(maDrawImageRegion) (int image, int srcRect, int dstPoint, int transformMode) {
	SYSCALL_IMPL(maDrawImageRegion)(convertSingleArg<MAHandle>(image), convertPointerArg<MARect*>(srcRect), convertPointerArg<MAPoint2d*>(dstPoint), convertSingleArg<int>(transformMode));
}
inline int SYSCALL(maGetImageSize) (int image) {
	int ret;
	convertRet<MAExtent>(ret, __dbl_high, (MAExtent) SYSCALL_IMPL(maGetImageSize)(convertSingleArg<MAHandle>(image)));
	return ret;
}
inline void SYSCALL(maGetImageData) (int image, int dst, int srcRect, int scanlength) {
	SYSCALL_IMPL(maGetImageData)(convertSingleArg<MAHandle>(image), convertPointerArg<void*>(dst), convertPointerArg<MARect*>(srcRect), convertSingleArg<int>(scanlength));
}
inline int SYSCALL(maSetDrawTarget) (int image) {
	int ret;
	convertRet<MAHandle>(ret, __dbl_high, (MAHandle) SYSCALL_IMPL(maSetDrawTarget)(convertSingleArg<MAHandle>(image)));
	return ret;
}
inline int SYSCALL(maFindLabel) (int name) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maFindLabel)(convertPointerArg<char*>(name)));
	return ret;
}
inline int SYSCALL(maCreateImageFromData) (int placeholder, int data, int offset, int size) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCreateImageFromData)(convertSingleArg<MAHandle>(placeholder), convertSingleArg<MAHandle>(data), convertSingleArg<int>(offset), convertSingleArg<int>(size)));
	return ret;
}
inline int SYSCALL(maCreateImageRaw) (int placeholder, int src, int size, int alpha) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCreateImageRaw)(convertSingleArg<MAHandle>(placeholder), convertPointerArg<void*>(src), convertSingleArg<MAExtent>(size), convertSingleArg<int>(alpha)));
	return ret;
}
inline int SYSCALL(maCreateDrawableImage) (int placeholder, int width, int height) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCreateDrawableImage)(convertSingleArg<MAHandle>(placeholder), convertSingleArg<int>(width), convertSingleArg<int>(height)));
	return ret;
}
inline int SYSCALL(maCreateData) (int placeholder, int size) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCreateData)(convertSingleArg<MAHandle>(placeholder), convertSingleArg<int>(size)));
	return ret;
}
inline int SYSCALL(maCreatePlaceholder) () {
	int ret;
	convertRet<MAHandle>(ret, __dbl_high, (MAHandle) SYSCALL_IMPL(maCreatePlaceholder)());
	return ret;
}
inline void SYSCALL(maDestroyPlaceholder) (int handle) {
	SYSCALL_IMPL(maDestroyPlaceholder)(convertSingleArg<MAHandle>(handle));
}
inline void SYSCALL(maDestroyObject) (int handle) {
	SYSCALL_IMPL(maDestroyObject)(convertSingleArg<MAHandle>(handle));
}
inline int SYSCALL(maGetDataSize) (int data) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maGetDataSize)(convertSingleArg<MAHandle>(data)));
	return ret;
}
inline void SYSCALL(maReadData) (int data, int dst, int offset, int size) {
	SYSCALL_IMPL(maReadData)(convertSingleArg<MAHandle>(data), convertPointerArg<void*>(dst), convertSingleArg<int>(offset), convertSingleArg<int>(size));
}
inline void SYSCALL(maWriteData) (int data, int src, int offset, int size) {
	SYSCALL_IMPL(maWriteData)(convertSingleArg<MAHandle>(data), convertPointerArg<void*>(src), convertSingleArg<int>(offset), convertSingleArg<int>(size));
}
inline void SYSCALL(maCopyData) (int params) {
	SYSCALL_IMPL(maCopyData)(convertPointerArg<MACopyData*>(params));
}
inline int SYSCALL(maOpenStore) (int name, int flags) {
	int ret;
	convertRet<MAHandle>(ret, __dbl_high, (MAHandle) SYSCALL_IMPL(maOpenStore)(convertPointerArg<char*>(name), convertSingleArg<int>(flags)));
	return ret;
}
inline int SYSCALL(maWriteStore) (int store, int data) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maWriteStore)(convertSingleArg<MAHandle>(store), convertSingleArg<MAHandle>(data)));
	return ret;
}
inline int SYSCALL(maReadStore) (int store, int placeholder) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maReadStore)(convertSingleArg<MAHandle>(store), convertSingleArg<MAHandle>(placeholder)));
	return ret;
}
inline void SYSCALL(maCloseStore) (int store, int _delete) {
	SYSCALL_IMPL(maCloseStore)(convertSingleArg<MAHandle>(store), convertSingleArg<int>(_delete));
}
inline int SYSCALL(maConnect) (int url) {
	int ret;
	convertRet<MAHandle>(ret, __dbl_high, (MAHandle) SYSCALL_IMPL(maConnect)(convertPointerArg<char*>(url)));
	return ret;
}
inline void SYSCALL(maConnClose) (int conn) {
	SYSCALL_IMPL(maConnClose)(convertSingleArg<MAHandle>(conn));
}
inline void SYSCALL(maConnRead) (int conn, int dst, int size) {
	SYSCALL_IMPL(maConnRead)(convertSingleArg<MAHandle>(conn), convertPointerArg<void*>(dst), convertSingleArg<int>(size));
}
inline void SYSCALL(maConnWrite) (int conn, int src, int size) {
	SYSCALL_IMPL(maConnWrite)(convertSingleArg<MAHandle>(conn), convertPointerArg<void*>(src), convertSingleArg<int>(size));
}
inline void SYSCALL(maConnReadToData) (int conn, int data, int offset, int size) {
	SYSCALL_IMPL(maConnReadToData)(convertSingleArg<MAHandle>(conn), convertSingleArg<MAHandle>(data), convertSingleArg<int>(offset), convertSingleArg<int>(size));
}
inline void SYSCALL(maConnWriteFromData) (int conn, int data, int offset, int size) {
	SYSCALL_IMPL(maConnWriteFromData)(convertSingleArg<MAHandle>(conn), convertSingleArg<MAHandle>(data), convertSingleArg<int>(offset), convertSingleArg<int>(size));
}
inline int SYSCALL(maConnGetAddr) (int conn, int addr) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maConnGetAddr)(convertSingleArg<MAHandle>(conn), convertPointerArg<MAConnAddr*>(addr)));
	return ret;
}
inline int SYSCALL(maHttpCreate) (int url, int method) {
	int ret;
	convertRet<MAHandle>(ret, __dbl_high, (MAHandle) SYSCALL_IMPL(maHttpCreate)(convertPointerArg<char*>(url), convertSingleArg<int>(method)));
	return ret;
}
inline void SYSCALL(maHttpSetRequestHeader) (int conn, int key, int value) {
	SYSCALL_IMPL(maHttpSetRequestHeader)(convertSingleArg<MAHandle>(conn), convertPointerArg<char*>(key), convertPointerArg<char*>(value));
}
inline int SYSCALL(maHttpGetResponseHeader) (int conn, int key, int buffer, int bufSize) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maHttpGetResponseHeader)(convertSingleArg<MAHandle>(conn), convertPointerArg<char*>(key), convertPointerArg<char*>(buffer), convertSingleArg<int>(bufSize)));
	return ret;
}
inline void SYSCALL(maHttpFinish) (int conn) {
	SYSCALL_IMPL(maHttpFinish)(convertSingleArg<MAHandle>(conn));
}
inline int SYSCALL(maLoadResources) (int data) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maLoadResources)(convertSingleArg<MAHandle>(data)));
	return ret;
}
inline int SYSCALL(maLoadResource) (int handle, int placeholder, int flag) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maLoadResource)(convertSingleArg<MAHandle>(handle), convertSingleArg<MAHandle>(placeholder), convertSingleArg<int>(flag)));
	return ret;
}
inline int SYSCALL(maCountResources) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maCountResources)());
	return ret;
}
inline void SYSCALL(maLoadProgram) (int data, int reload) {
	SYSCALL_IMPL(maLoadProgram)(convertSingleArg<MAHandle>(data), convertSingleArg<int>(reload));
}
inline int SYSCALL(maGetKeys) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maGetKeys)());
	return ret;
}
inline int SYSCALL(maGetEvent) (int event) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maGetEvent)(convertPointerArg<MAEvent*>(event)));
	return ret;
}
inline void SYSCALL(maWait) (int timeout) {
	SYSCALL_IMPL(maWait)(convertSingleArg<int>(timeout));
}
inline int SYSCALL(maTime) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maTime)());
	return ret;
}
inline int SYSCALL(maLocalTime) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maLocalTime)());
	return ret;
}
inline int SYSCALL(maGetMilliSecondCount) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maGetMilliSecondCount)());
	return ret;
}
inline int SYSCALL(maFreeObjectMemory) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maFreeObjectMemory)());
	return ret;
}
inline int SYSCALL(maTotalObjectMemory) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maTotalObjectMemory)());
	return ret;
}
inline int SYSCALL(maVibrate) (int ms) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maVibrate)(convertSingleArg<int>(ms)));
	return ret;
}
inline int SYSCALL(maSoundPlay) (int sound_res, int offset, int size) {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maSoundPlay)(convertSingleArg<MAHandle>(sound_res), convertSingleArg<int>(offset), convertSingleArg<int>(size)));
	return ret;
}
inline void SYSCALL(maSoundStop) () {
	SYSCALL_IMPL(maSoundStop)();
}
inline int SYSCALL(maSoundIsPlaying) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maSoundIsPlaying)());
	return ret;
}
inline int SYSCALL(maSoundGetVolume) () {
	int ret;
	convertRet<int>(ret, __dbl_high, (int) SYSCALL_IMPL(maSoundGetVolume)());
	return ret;
}
inline void SYSCALL(maSoundSetVolume) (int vol) {
	SYSCALL_IMPL(maSoundSetVolume)(convertSingleArg<int>(vol));
}
inline long long SYSCALL(maExtensionFunctionInvoke) (int function, int a, int b, int c) {
	int ret;
	convertRet<longlong>(ret, __dbl_high, (longlong) SYSCALL_IMPL(maExtensionFunctionInvoke)(convertSingleArg<int>(function), convertSingleArg<int>(a), convertSingleArg<int>(b), convertSingleArg<int>(c)));
	return ret;
}
inline long long SYSCALL(maIOCtl) (int function, int a, int b, int c) {
	int ret;
	convertRet<longlong>(ret, __dbl_high, (longlong) SYSCALL_IMPL(maIOCtl)(convertSingleArg<int>(function), convertSingleArg<int>(a), convertSingleArg<int>(b), convertSingleArg<int>(c)));
	return ret;
}
