#include <QByteArray>
#include <QByteArrayView>
#include <QColor>
#include <QColorSpace>
#include <QColorTransform>
#include <QIODevice>
#include <QImage>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPixelFormat>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTransform>
#include <QVariant>
#include <qimage.h>
#include "libqimage.h"
#include "libqimage.hxx"

QImage* QImage_new() {
	 return new VirtualQImage();
}

QImage* QImage_new2(const QSize* size, int format) {
	 return new VirtualQImage(*size, static_cast<QImage::Format>(format));
}

QImage* QImage_new3(int width, int height, int format) {
	 return new VirtualQImage(width, height, static_cast<QImage::Format>(format));
}

QImage* QImage_new4(unsigned char* data, int width, int height, int format) {
	 return new VirtualQImage(data, width, height, static_cast<QImage::Format>(format));
}

QImage* QImage_new5(const unsigned char* data, int width, int height, int format) {
	 return new VirtualQImage(data, width, height, static_cast<QImage::Format>(format));
}

QImage* QImage_new6(unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
	 return new VirtualQImage(data, width, height, bytesPerLine, static_cast<QImage::Format>(format));
}

QImage* QImage_new7(const unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
	 return new VirtualQImage(data, width, height, bytesPerLine, static_cast<QImage::Format>(format));
}

QImage* QImage_new8(const char** xpm) {
	 return new VirtualQImage(xpm);
}

QImage* QImage_new9(const libqt_string fileName) {
	 return new VirtualQImage(QString::fromUtf8(fileName.data, fileName.len));
}

QImage* QImage_new10(const QImage* param1) {
	 return new VirtualQImage(*param1);
}

QImage* QImage_new11(const libqt_string fileName, const char* format) {
	 return new VirtualQImage(QString::fromUtf8(fileName.data, fileName.len), format);
}

void QImage_OperatorAssign(QImage* self, const QImage* param1) {
	self->operator=(*param1);
}

void QImage_Swap(QImage* self, QImage* other) {
	self->swap(*other);
}

bool QImage_IsNull(const QImage* self) {
	return self->isNull();
}

int QImage_DevType(const QImage* self) {
	return self->devType();
}

bool QImage_OperatorEqual(const QImage* self, const QImage* param1) {
	return self->operator==(*param1);
}

bool QImage_OperatorNotEqual(const QImage* self, const QImage* param1) {
	return self->operator!=(*param1);
}

QVariant* QImage_OperatorQVariant(const QImage* self) {
	return new QVariant(self->operator QVariant());
}

void QImage_Detach(QImage* self) {
	self->detach();
}

bool QImage_IsDetached(const QImage* self) {
	return self->isDetached();
}

QImage* QImage_Copy(const QImage* self) {
	return new QImage(self->copy());
}

QImage* QImage_Copy2(const QImage* self, int x, int y, int w, int h) {
	return new QImage(self->copy(x, y, w, h));
}

int QImage_Format(const QImage* self) {
	return self->format();
}

QImage* QImage_ConvertToFormat(const QImage* self, int f) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f)));
}

QImage* QImage_ConvertToFormat2(const QImage* self, int f, const libqt_list colorTable) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), QList<unsigned int>()));
}

bool QImage_ReinterpretAsFormat(QImage* self, int f) {
	return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

QImage* QImage_ConvertedTo(const QImage* self, int f) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f)));
}

void QImage_ConvertTo(QImage* self, int f) {
	self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_Width(const QImage* self) {
	return self->width();
}

int QImage_Height(const QImage* self) {
	return self->height();
}

QSize* QImage_Size(const QImage* self) {
	return new QSize(self->size());
}

QRect* QImage_Rect(const QImage* self) {
	return new QRect(self->rect());
}

int QImage_Depth(const QImage* self) {
	return self->depth();
}

int QImage_ColorCount(const QImage* self) {
	return self->colorCount();
}

int QImage_BitPlaneCount(const QImage* self) {
	return self->bitPlaneCount();
}

unsigned int QImage_Color(const QImage* self, int i) {
	return self->color(i);
}

void QImage_SetColor(QImage* self, int i, unsigned int c) {
	self->setColor(i, c);
}

void QImage_SetColorCount(QImage* self, int colorCount) {
	self->setColorCount(colorCount);
}

bool QImage_AllGray(const QImage* self) {
	return self->allGray();
}

bool QImage_IsGrayscale(const QImage* self) {
	return self->isGrayscale();
}

unsigned char* QImage_Bits(QImage* self) {
	return self->bits();
}

const unsigned char* QImage_Bits2(const QImage* self) {
	return self->bits();
}

const unsigned char* QImage_ConstBits(const QImage* self) {
	return self->constBits();
}

ptrdiff_t QImage_SizeInBytes(const QImage* self) {
	return self->sizeInBytes();
}

unsigned char* QImage_ScanLine(QImage* self, int param1) {
	return self->scanLine(param1);
}

const unsigned char* QImage_ScanLine2(const QImage* self, int param1) {
	return self->scanLine(param1);
}

const unsigned char* QImage_ConstScanLine(const QImage* self, int param1) {
	return self->constScanLine(param1);
}

ptrdiff_t QImage_BytesPerLine(const QImage* self) {
	return self->bytesPerLine();
}

bool QImage_Valid(const QImage* self, int x, int y) {
	return self->valid(x, y);
}

bool QImage_Valid2(const QImage* self, const QPoint* pt) {
	return self->valid(*pt);
}

int QImage_PixelIndex(const QImage* self, int x, int y) {
	return self->pixelIndex(x, y);
}

int QImage_PixelIndex2(const QImage* self, const QPoint* pt) {
	return self->pixelIndex(*pt);
}

unsigned int QImage_Pixel(const QImage* self, int x, int y) {
	return self->pixel(x, y);
}

unsigned int QImage_Pixel2(const QImage* self, const QPoint* pt) {
	return self->pixel(*pt);
}

void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
	self->setPixel(x, y, index_or_rgb);
}

void QImage_SetPixel2(QImage* self, const QPoint* pt, unsigned int index_or_rgb) {
	self->setPixel(*pt, index_or_rgb);
}

QColor* QImage_PixelColor(const QImage* self, int x, int y) {
	return new QColor(self->pixelColor(x, y));
}

QColor* QImage_PixelColor2(const QImage* self, const QPoint* pt) {
	return new QColor(self->pixelColor(*pt));
}

void QImage_SetPixelColor(QImage* self, int x, int y, const QColor* c) {
	self->setPixelColor(x, y, *c);
}

void QImage_SetPixelColor2(QImage* self, const QPoint* pt, const QColor* c) {
	self->setPixelColor(*pt, *c);
}

libqt_list QImage_ColorTable(const QImage* self) {
	auto _ret = self->colorTable();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QImage_SetColorTable(QImage* self, const libqt_list colors) {
	self->setColorTable(QList<unsigned int>());
}

double QImage_DevicePixelRatio(const QImage* self) {
	return self->devicePixelRatio();
}

void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor) {
	self->setDevicePixelRatio(scaleFactor);
}

QSizeF* QImage_DeviceIndependentSize(const QImage* self) {
	return new QSizeF(self->deviceIndependentSize());
}

void QImage_Fill(QImage* self, unsigned int pixel) {
	self->fill(pixel);
}

void QImage_Fill2(QImage* self, const QColor* color) {
	self->fill(*color);
}

void QImage_Fill3(QImage* self, int color) {
	self->fill(static_cast<Qt::GlobalColor>(color));
}

bool QImage_HasAlphaChannel(const QImage* self) {
	return self->hasAlphaChannel();
}

void QImage_SetAlphaChannel(QImage* self, const QImage* alphaChannel) {
	self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_CreateAlphaMask(const QImage* self) {
	return new QImage(self->createAlphaMask());
}

QImage* QImage_CreateHeuristicMask(const QImage* self) {
	return new QImage(self->createHeuristicMask());
}

QImage* QImage_CreateMaskFromColor(const QImage* self, unsigned int color) {
	return new QImage(self->createMaskFromColor(color));
}

QImage* QImage_Scaled(const QImage* self, int w, int h) {
	return new QImage(self->scaled(w, h));
}

QImage* QImage_Scaled2(const QImage* self, const QSize* s) {
	return new QImage(self->scaled(*s));
}

QImage* QImage_ScaledToWidth(const QImage* self, int w) {
	return new QImage(self->scaledToWidth(w));
}

QImage* QImage_ScaledToHeight(const QImage* self, int h) {
	return new QImage(self->scaledToHeight(h));
}

QImage* QImage_Transformed(const QImage* self, const QTransform* matrix) {
	return new QImage(self->transformed(*matrix));
}

QTransform* QImage_TrueMatrix(const QTransform* param1, int w, int h) {
	return new QTransform(QImage::trueMatrix(*param1, w, h));
}

QImage* QImage_Mirrored(const QImage* self) {
	return new QImage(self->mirrored());
}

QImage* QImage_RgbSwapped(const QImage* self) {
	return new QImage(self->rgbSwapped());
}

void QImage_Mirror(QImage* self) {
	self->mirror();
}

void QImage_RgbSwap(QImage* self) {
	self->rgbSwap();
}

void QImage_InvertPixels(QImage* self) {
	self->invertPixels();
}

QColorSpace* QImage_ColorSpace(const QImage* self) {
	return new QColorSpace(self->colorSpace());
}

QImage* QImage_ConvertedToColorSpace(const QImage* self, const QColorSpace* colorSpace) {
	return new QImage(self->convertedToColorSpace(*colorSpace));
}

QImage* QImage_ConvertedToColorSpace2(const QImage* self, const QColorSpace* colorSpace, int format) {
	return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format)));
}

void QImage_ConvertToColorSpace(QImage* self, const QColorSpace* colorSpace) {
	self->convertToColorSpace(*colorSpace);
}

void QImage_ConvertToColorSpace2(QImage* self, const QColorSpace* colorSpace, int format) {
	self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format));
}

void QImage_SetColorSpace(QImage* self, const QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

QImage* QImage_ColorTransformed(const QImage* self, const QColorTransform* transform) {
	return new QImage(self->colorTransformed(*transform));
}

QImage* QImage_ColorTransformed2(const QImage* self, const QColorTransform* transform, int format) {
	return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format)));
}

void QImage_ApplyColorTransform(QImage* self, const QColorTransform* transform) {
	self->applyColorTransform(*transform);
}

void QImage_ApplyColorTransform2(QImage* self, const QColorTransform* transform, int format) {
	self->applyColorTransform(*transform, static_cast<QImage::Format>(format));
}

bool QImage_Load(QImage* self, QIODevice* device, const char* format) {
	return self->load(device, format);
}

bool QImage_Load2(QImage* self, const libqt_string fileName) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len));
}

bool QImage_LoadFromData(QImage* self, QByteArrayView* data) {
	return self->loadFromData(*data);
}

bool QImage_LoadFromData2(QImage* self, const unsigned char* buf, int lenVal) {
	return self->loadFromData(buf, lenVal);
}

bool QImage_LoadFromData3(QImage* self, const libqt_string data) {
	return self->loadFromData(QByteArray(data.data, data.len));
}

bool QImage_Save(const QImage* self, const libqt_string fileName) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len));
}

bool QImage_Save2(const QImage* self, QIODevice* device) {
	return self->save(device);
}

QImage* QImage_FromData(QByteArrayView* data) {
	return new QImage(QImage::fromData(*data));
}

QImage* QImage_FromData2(const unsigned char* data, int size) {
	return new QImage(QImage::fromData(data, size));
}

QImage* QImage_FromData3(const libqt_string data) {
	return new QImage(QImage::fromData(QByteArray(data.data, data.len)));
}

long long QImage_CacheKey(const QImage* self) {
	return self->cacheKey();
}

QPaintEngine* QImage_PaintEngine(const QImage* self) {
	return self->paintEngine();
}

int QImage_DotsPerMeterX(const QImage* self) {
	return self->dotsPerMeterX();
}

int QImage_DotsPerMeterY(const QImage* self) {
	return self->dotsPerMeterY();
}

void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX) {
	self->setDotsPerMeterX(dotsPerMeterX);
}

void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY) {
	self->setDotsPerMeterY(dotsPerMeterY);
}

QPoint* QImage_Offset(const QImage* self) {
	return new QPoint(self->offset());
}

void QImage_SetOffset(QImage* self, const QPoint* offset) {
	self->setOffset(*offset);
}

libqt_list QImage_TextKeys(const QImage* self) {
	auto _ret = self->textKeys();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_string QImage_Text(const QImage* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImage_SetText(QImage* self, const libqt_string key, const libqt_string value) {
	self->setText(QString::fromUtf8(key.data, key.len), QString::fromUtf8(value.data, value.len));
}

QPixelFormat* QImage_PixelFormat(const QImage* self) {
	return new QPixelFormat(self->pixelFormat());
}

QPixelFormat* QImage_ToPixelFormat(int format) {
	return new QPixelFormat(QImage::toPixelFormat(static_cast<QImage::Format>(format)));
}

int QImage_ToImageFormat(QPixelFormat* format) {
	return QImage::toImageFormat(*format);
}

struct HBITMAP__* QImage_ToHBITMAP(const QImage* self) {
	return self->toHBITMAP();
}

struct HICON__* QImage_ToHICON(const QImage* self) {
	return self->toHICON();
}

QImage* QImage_FromHBITMAP(struct HBITMAP__* hbitmap) {
	return new QImage(QImage::fromHBITMAP(hbitmap));
}

QImage* QImage_FromHICON(struct HICON__* icon) {
	return new QImage(QImage::fromHICON(icon));
}

QImageData** QImage_DataPtr(QImage* self) {
	return self->data_ptr();
}

QImage* QImage_Copy1(const QImage* self, const QRect* rect) {
	return new QImage(self->copy(*rect));
}

QImage* QImage_ConvertToFormat22(const QImage* self, int f, int flags) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_ConvertToFormat3(const QImage* self, int f, const libqt_list colorTable, int flags) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), QList<unsigned int>(), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_ConvertedTo2(const QImage* self, int f, int flags) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_ConvertTo2(QImage* self, int f, int flags) {
	self->convertTo(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QImage* QImage_CreateAlphaMask1(const QImage* self, int flags) {
	return new QImage(self->createAlphaMask(static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_CreateHeuristicMask1(const QImage* self, bool clipTight) {
	return new QImage(self->createHeuristicMask(clipTight));
}

QImage* QImage_CreateMaskFromColor2(const QImage* self, unsigned int color, int mode) {
	return new QImage(self->createMaskFromColor(color, static_cast<Qt::MaskMode>(mode)));
}

QImage* QImage_Scaled3(const QImage* self, int w, int h, int aspectMode) {
	return new QImage(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled4(const QImage* self, int w, int h, int aspectMode, int mode) {
	return new QImage(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Scaled22(const QImage* self, const QSize* s, int aspectMode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled32(const QImage* self, const QSize* s, int aspectMode, int mode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToWidth2(const QImage* self, int w, int mode) {
	return new QImage(self->scaledToWidth(w, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToHeight2(const QImage* self, int h, int mode) {
	return new QImage(self->scaledToHeight(h, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Transformed2(const QImage* self, const QTransform* matrix, int mode) {
	return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Mirrored1(const QImage* self, bool horizontally) {
	return new QImage(self->mirrored(horizontally));
}

QImage* QImage_Mirrored2(const QImage* self, bool horizontally, bool vertically) {
	return new QImage(self->mirrored(horizontally, vertically));
}

void QImage_Mirror1(QImage* self, bool horizontally) {
	self->mirror(horizontally);
}

void QImage_Mirror2(QImage* self, bool horizontally, bool vertically) {
	self->mirror(horizontally, vertically);
}

void QImage_InvertPixels1(QImage* self, int param1) {
	self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

QImage* QImage_ConvertedToColorSpace3(const QImage* self, const QColorSpace* colorSpace, int format, int flags) {
	return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_ConvertToColorSpace3(QImage* self, const QColorSpace* colorSpace, int format, int flags) {
	self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QImage* QImage_ColorTransformed3(const QImage* self, const QColorTransform* transform, int format, int flags) {
	return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_ApplyColorTransform3(QImage* self, const QColorTransform* transform, int format, int flags) {
	self->applyColorTransform(*transform, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QImage_Load22(QImage* self, const libqt_string fileName, const char* format) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len), format);
}

bool QImage_LoadFromData22(QImage* self, QByteArrayView* data, const char* format) {
	return self->loadFromData(*data, format);
}

bool QImage_LoadFromData32(QImage* self, const unsigned char* buf, int lenVal, const char* format) {
	return self->loadFromData(buf, lenVal, format);
}

bool QImage_LoadFromData23(QImage* self, const libqt_string data, const char* format) {
	return self->loadFromData(QByteArray(data.data, data.len), format);
}

bool QImage_Save22(const QImage* self, const libqt_string fileName, const char* format) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len), format);
}

bool QImage_Save3(const QImage* self, const libqt_string fileName, const char* format, int quality) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len), format, quality);
}

bool QImage_Save23(const QImage* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QImage_Save32(const QImage* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, quality);
}

QImage* QImage_FromData22(QByteArrayView* data, const char* format) {
	return new QImage(QImage::fromData(*data, format));
}

QImage* QImage_FromData32(const unsigned char* data, int size, const char* format) {
	return new QImage(QImage::fromData(data, size, format));
}

QImage* QImage_FromData23(const libqt_string data, const char* format) {
	return new QImage(QImage::fromData(QByteArray(data.data, data.len), format));
}

libqt_string QImage_Text1(const QImage* self, const libqt_string key) {
	QString _ret = self->text(QString::fromUtf8(key.data, key.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

struct HICON__* QImage_ToHICON1(const QImage* self, const QImage* mask) {
	return self->toHICON(*mask);
}

// Base class handler implementation
int QImage_QBaseDevType(const QImage* self) {
	auto* vqimage = dynamic_cast<const VirtualQImage*>(self);
	if (vqimage && vqimage->isVirtualQImage) {
vqimage->setQImage_DevType_IsBase(true);
	return vqimage->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QImage_OnDevType(const QImage* self, intptr_t slot) {
	auto* vqimage = dynamic_cast<const VirtualQImage*>(self);
	if (vqimage && vqimage->isVirtualQImage) {
vqimage->setQImage_DevType_Callback(reinterpret_cast<VirtualQImage::QImage_DevType_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QImage_QBasePaintEngine(const QImage* self) {
	auto* vqimage = dynamic_cast<const VirtualQImage*>(self);
	if (vqimage && vqimage->isVirtualQImage) {
vqimage->setQImage_PaintEngine_IsBase(true);
	return vqimage->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QImage_OnPaintEngine(const QImage* self, intptr_t slot) {
	auto* vqimage = dynamic_cast<const VirtualQImage*>(self);
	if (vqimage && vqimage->isVirtualQImage) {
vqimage->setQImage_PaintEngine_Callback(reinterpret_cast<VirtualQImage::QImage_PaintEngine_Callback>(slot));
}
}

void QImage_Delete(QImage* self) {
    delete self;
}

