#include <QBitmap>
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPixmap>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qpixmap.h>
#include "libqpixmap.h"
#include "libqpixmap.hxx"

QPixmap* QPixmap_new() {
	 return new VirtualQPixmap();
}

QPixmap* QPixmap_new2(QPlatformPixmap* data) {
	 return new VirtualQPixmap(data);
}

QPixmap* QPixmap_new3(int w, int h) {
	 return new VirtualQPixmap(w, h);
}

QPixmap* QPixmap_new4(const QSize* param1) {
	 return new VirtualQPixmap(*param1);
}

QPixmap* QPixmap_new5(const libqt_string fileName) {
	 return new VirtualQPixmap(QString::fromUtf8(fileName.data, fileName.len));
}

QPixmap* QPixmap_new6(const char** xpm) {
	 return new VirtualQPixmap(xpm);
}

QPixmap* QPixmap_new7(const QPixmap* param1) {
	 return new VirtualQPixmap(*param1);
}

QPixmap* QPixmap_new8(const libqt_string fileName, const char* format) {
	 return new VirtualQPixmap(QString::fromUtf8(fileName.data, fileName.len), format);
}

QPixmap* QPixmap_new9(const libqt_string fileName, const char* format, int flags) {
	 return new VirtualQPixmap(QString::fromUtf8(fileName.data, fileName.len), format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPixmap_OperatorAssign(QPixmap* self, const QPixmap* param1) {
	self->operator=(*param1);
}

void QPixmap_Swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

QVariant* QPixmap_OperatorQVariant(const QPixmap* self) {
	return new QVariant(self->operator QVariant());
}

bool QPixmap_IsNull(const QPixmap* self) {
	return self->isNull();
}

int QPixmap_DevType(const QPixmap* self) {
	return self->devType();
}

int QPixmap_Width(const QPixmap* self) {
	return self->width();
}

int QPixmap_Height(const QPixmap* self) {
	return self->height();
}

QSize* QPixmap_Size(const QPixmap* self) {
	return new QSize(self->size());
}

QRect* QPixmap_Rect(const QPixmap* self) {
	return new QRect(self->rect());
}

int QPixmap_Depth(const QPixmap* self) {
	return self->depth();
}

int QPixmap_DefaultDepth() {
	return QPixmap::defaultDepth();
}

void QPixmap_Fill(QPixmap* self) {
	self->fill();
}

QBitmap* QPixmap_Mask(const QPixmap* self) {
	return new QBitmap(self->mask());
}

void QPixmap_SetMask(QPixmap* self, const QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_DevicePixelRatio(const QPixmap* self) {
	return self->devicePixelRatio();
}

void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor) {
	self->setDevicePixelRatio(scaleFactor);
}

QSizeF* QPixmap_DeviceIndependentSize(const QPixmap* self) {
	return new QSizeF(self->deviceIndependentSize());
}

bool QPixmap_HasAlpha(const QPixmap* self) {
	return self->hasAlpha();
}

bool QPixmap_HasAlphaChannel(const QPixmap* self) {
	return self->hasAlphaChannel();
}

QBitmap* QPixmap_CreateHeuristicMask(const QPixmap* self) {
	return new QBitmap(self->createHeuristicMask());
}

QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, const QColor* maskColor) {
	return new QBitmap(self->createMaskFromColor(*maskColor));
}

QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h) {
	return new QPixmap(self->scaled(w, h));
}

QPixmap* QPixmap_Scaled2(const QPixmap* self, const QSize* s) {
	return new QPixmap(self->scaled(*s));
}

QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w) {
	return new QPixmap(self->scaledToWidth(w));
}

QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h) {
	return new QPixmap(self->scaledToHeight(h));
}

QPixmap* QPixmap_Transformed(const QPixmap* self, const QTransform* param1) {
	return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_TrueMatrix(const QTransform* m, int w, int h) {
	return new QTransform(QPixmap::trueMatrix(*m, w, h));
}

QImage* QPixmap_ToImage(const QPixmap* self) {
	return new QImage(self->toImage());
}

QPixmap* QPixmap_FromImage(const QImage* image) {
	return new QPixmap(QPixmap::fromImage(*image));
}

QPixmap* QPixmap_FromImageReader(QImageReader* imageReader) {
	return new QPixmap(QPixmap::fromImageReader(imageReader));
}

bool QPixmap_Load(QPixmap* self, const libqt_string fileName) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len));
}

bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal) {
	return self->loadFromData(buf, lenVal);
}

bool QPixmap_LoadFromData2(QPixmap* self, const libqt_string data) {
	return self->loadFromData(QByteArray(data.data, data.len));
}

bool QPixmap_Save(const QPixmap* self, const libqt_string fileName) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len));
}

bool QPixmap_Save2(const QPixmap* self, QIODevice* device) {
	return self->save(device);
}

bool QPixmap_ConvertFromImage(QPixmap* self, const QImage* img) {
	return self->convertFromImage(*img);
}

QPixmap* QPixmap_Copy(const QPixmap* self, int x, int y, int width, int height) {
	return new QPixmap(self->copy(x, y, width, height));
}

QPixmap* QPixmap_Copy2(const QPixmap* self) {
	return new QPixmap(self->copy());
}

void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(dx, dy, x, y, width, height);
}

void QPixmap_Scroll2(QPixmap* self, int dx, int dy, const QRect* rect) {
	self->scroll(dx, dy, *rect);
}

long long QPixmap_CacheKey(const QPixmap* self) {
	return self->cacheKey();
}

bool QPixmap_IsDetached(const QPixmap* self) {
	return self->isDetached();
}

void QPixmap_Detach(QPixmap* self) {
	self->detach();
}

bool QPixmap_IsQBitmap(const QPixmap* self) {
	return self->isQBitmap();
}

QPaintEngine* QPixmap_PaintEngine(const QPixmap* self) {
	return self->paintEngine();
}

bool QPixmap_OperatorNot(const QPixmap* self) {
	return self->operator!();
}

QPlatformPixmap* QPixmap_Handle(const QPixmap* self) {
	return self->handle();
}

QExplicitlySharedDataPointer<QPlatformPixmap>* QPixmap_DataPtr(QPixmap* self) {
	return self->data_ptr();
}

void QPixmap_Fill1(QPixmap* self, const QColor* fillColor) {
	self->fill(*fillColor);
}

QBitmap* QPixmap_CreateHeuristicMask1(const QPixmap* self, bool clipTight) {
	return new QBitmap(self->createHeuristicMask(clipTight));
}

QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, const QColor* maskColor, int mode) {
	return new QBitmap(self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode)));
}

QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, int aspectMode) {
	return new QPixmap(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode) {
	return new QPixmap(self->scaled(w, h, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Scaled22(const QPixmap* self, const QSize* s, int aspectMode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled32(const QPixmap* self, const QSize* s, int aspectMode, int mode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, int mode) {
	return new QPixmap(self->scaledToWidth(w, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, int mode) {
	return new QPixmap(self->scaledToHeight(h, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Transformed2(const QPixmap* self, const QTransform* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_FromImage2(const QImage* image, int flags) {
	return new QPixmap(QPixmap::fromImage(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags) {
	return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

bool QPixmap_Load2(QPixmap* self, const libqt_string fileName, const char* format) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len), format);
}

bool QPixmap_Load3(QPixmap* self, const libqt_string fileName, const char* format, int flags) {
	return self->load(QString::fromUtf8(fileName.data, fileName.len), format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format) {
	return self->loadFromData(buf, lenVal, format);
}

bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags) {
	return self->loadFromData(buf, lenVal, format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_LoadFromData22(QPixmap* self, const libqt_string data, const char* format) {
	return self->loadFromData(QByteArray(data.data, data.len), format);
}

bool QPixmap_LoadFromData32(QPixmap* self, const libqt_string data, const char* format, int flags) {
	return self->loadFromData(QByteArray(data.data, data.len), format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_Save22(const QPixmap* self, const libqt_string fileName, const char* format) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len), format);
}

bool QPixmap_Save3(const QPixmap* self, const libqt_string fileName, const char* format, int quality) {
	return self->save(QString::fromUtf8(fileName.data, fileName.len), format, quality);
}

bool QPixmap_Save23(const QPixmap* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QPixmap_Save32(const QPixmap* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, quality);
}

bool QPixmap_ConvertFromImage2(QPixmap* self, const QImage* img, int flags) {
	return self->convertFromImage(*img, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QPixmap* QPixmap_Copy1(const QPixmap* self, const QRect* rect) {
	return new QPixmap(self->copy(*rect));
}

void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed) {
	self->scroll(dx, dy, x, y, width, height, exposed);
}

void QPixmap_Scroll4(QPixmap* self, int dx, int dy, const QRect* rect, QRegion* exposed) {
	self->scroll(dx, dy, *rect, exposed);
}

// Base class handler implementation
int QPixmap_QBaseDevType(const QPixmap* self) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_DevType_IsBase(true);
	return vqpixmap->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnDevType(const QPixmap* self, intptr_t slot) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_DevType_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_DevType_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QPixmap_QBasePaintEngine(const QPixmap* self) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_PaintEngine_IsBase(true);
	return vqpixmap->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnPaintEngine(const QPixmap* self, intptr_t slot) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_PaintEngine_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_PaintEngine_Callback>(slot));
}
}

// Derived class handler implementation
int QPixmap_Metric(const QPixmap* self, int param1) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
	return vqpixmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
	} else {
	return self->QPixmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Base class handler implementation
int QPixmap_QBaseMetric(const QPixmap* self, int param1) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_Metric_IsBase(true);
	return vqpixmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnMetric(const QPixmap* self, intptr_t slot) {
	auto* vqpixmap = dynamic_cast<const VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_Metric_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_Metric_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QPixmap_FromImageInPlace(QPixmap* self, QImage* image) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
	return new QPixmap(vqpixmap->fromImageInPlace(*image));
	} else {
	return new QPixmap(self->QPixmap::fromImageInPlace(*image));
}
}

// Base class handler implementation
QPixmap* QPixmap_QBaseFromImageInPlace(QPixmap* self, QImage* image) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_FromImageInPlace_IsBase(true);
	return new QPixmap(vqpixmap->fromImageInPlace(*image));
}
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnFromImageInPlace(QPixmap* self, intptr_t slot) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_FromImageInPlace_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_FromImageInPlace_Callback>(slot));
}
}

// Derived class handler implementation
QPixmap* QPixmap_FromImageInPlace2(QPixmap* self, QImage* image, int flags) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
	return new QPixmap(vqpixmap->fromImageInPlace(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
	} else {
	return new QPixmap(self->QPixmap::fromImageInPlace(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}
}

// Base class handler implementation
QPixmap* QPixmap_QBaseFromImageInPlace2(QPixmap* self, QImage* image, int flags) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_FromImageInPlace2_IsBase(true);
	return new QPixmap(vqpixmap->fromImageInPlace(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnFromImageInPlace2(QPixmap* self, intptr_t slot) {
	auto* vqpixmap = dynamic_cast<VirtualQPixmap*>(self);
	if (vqpixmap && vqpixmap->isVirtualQPixmap) {
vqpixmap->setQPixmap_FromImageInPlace2_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_FromImageInPlace2_Callback>(slot));
}
}

void QPixmap_Delete(QPixmap* self) {
    delete self;
}

