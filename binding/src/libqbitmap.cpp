#include <QBitmap>
#include <QImage>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTransform>
#include <QVariant>
#include <qbitmap.h>
#include "libqbitmap.h"
#include "libqbitmap.hxx"

QBitmap* QBitmap_new() {
	 return new QBitmap();
}

QBitmap* QBitmap_new2(const QPixmap* param1) {
	 return new QBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
	 return new QBitmap(w, h);
}

QBitmap* QBitmap_new4(const QSize* param1) {
	 return new QBitmap(*param1);
}

QBitmap* QBitmap_new5(const libqt_string fileName) {
	 return new QBitmap(QString::fromUtf8(fileName.data, fileName.len));
}

QBitmap* QBitmap_new6(const libqt_string fileName, const char* format) {
	 return new QBitmap(QString::fromUtf8(fileName.data, fileName.len), format);
}

void QBitmap_OperatorAssign(QBitmap* self, const QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

QVariant* QBitmap_OperatorQVariant(const QBitmap* self) {
	return new QVariant(self->operator QVariant());
}

void QBitmap_Clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_FromImage(const QImage* image) {
	return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_FromData(const QSize* size, const unsigned char* bits) {
	return new QBitmap(QBitmap::fromData(*size, bits));
}

QBitmap* QBitmap_FromPixmap(const QPixmap* pixmap) {
	return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, const QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

void QBitmap_OperatorAssign2(QBitmap* self, const QBitmap* param1) {
	self->operator=(*param1);
}

QBitmap* QBitmap_FromImage2(const QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QBitmap* QBitmap_FromData3(const QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, bits, static_cast<QImage::Format>(monoFormat)));
}

void QBitmap_Delete(QBitmap* self) {
    delete self;
}

