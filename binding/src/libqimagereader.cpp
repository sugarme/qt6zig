#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimagereader.h>
#include "libqimagereader.h"
#include "libqimagereader.hxx"

QImageReader* QImageReader_new() {
	 return new QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
	 return new QImageReader(device);
}

QImageReader* QImageReader_new3(const libqt_string fileName) {
	 return new QImageReader(QString::fromUtf8(fileName.data, fileName.len));
}

QImageReader* QImageReader_new4(QIODevice* device, const libqt_string format) {
	 return new QImageReader(device, QByteArray(format.data, format.len));
}

QImageReader* QImageReader_new5(const libqt_string fileName, const libqt_string format) {
	 return new QImageReader(QString::fromUtf8(fileName.data, fileName.len), QByteArray(format.data, format.len));
}

libqt_string QImageReader_Tr(const char* sourceText) {
	QString _ret = QImageReader::tr(sourceText);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageReader_SetFormat(QImageReader* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

libqt_string QImageReader_Format(const QImageReader* self) {
	QByteArray _qb = self->format();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageReader_SetAutoDetectImageFormat(QImageReader* self, bool enabled) {
	self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_AutoDetectImageFormat(const QImageReader* self) {
	return self->autoDetectImageFormat();
}

void QImageReader_SetDecideFormatFromContent(QImageReader* self, bool ignored) {
	self->setDecideFormatFromContent(ignored);
}

bool QImageReader_DecideFormatFromContent(const QImageReader* self) {
	return self->decideFormatFromContent();
}

void QImageReader_SetDevice(QImageReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageReader_Device(const QImageReader* self) {
	return self->device();
}

void QImageReader_SetFileName(QImageReader* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QImageReader_FileName(const QImageReader* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QImageReader_Size(const QImageReader* self) {
	return new QSize(self->size());
}

int QImageReader_ImageFormat(const QImageReader* self) {
	return self->imageFormat();
}

libqt_list QImageReader_TextKeys(const QImageReader* self) {
	return self->textKeys();
}

libqt_string QImageReader_Text(const QImageReader* self, const libqt_string key) {
	QString _ret = self->text(QString::fromUtf8(key.data, key.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageReader_SetClipRect(QImageReader* self, const QRect* rect) {
	self->setClipRect(*rect);
}

QRect* QImageReader_ClipRect(const QImageReader* self) {
	return new QRect(self->clipRect());
}

void QImageReader_SetScaledSize(QImageReader* self, const QSize* size) {
	self->setScaledSize(*size);
}

QSize* QImageReader_ScaledSize(const QImageReader* self) {
	return new QSize(self->scaledSize());
}

void QImageReader_SetQuality(QImageReader* self, int quality) {
	self->setQuality(quality);
}

int QImageReader_Quality(const QImageReader* self) {
	return self->quality();
}

void QImageReader_SetScaledClipRect(QImageReader* self, const QRect* rect) {
	self->setScaledClipRect(*rect);
}

QRect* QImageReader_ScaledClipRect(const QImageReader* self) {
	return new QRect(self->scaledClipRect());
}

void QImageReader_SetBackgroundColor(QImageReader* self, const QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QImageReader_BackgroundColor(const QImageReader* self) {
	return new QColor(self->backgroundColor());
}

bool QImageReader_SupportsAnimation(const QImageReader* self) {
	return self->supportsAnimation();
}

int QImageReader_Transformation(const QImageReader* self) {
	return self->transformation();
}

void QImageReader_SetAutoTransform(QImageReader* self, bool enabled) {
	self->setAutoTransform(enabled);
}

bool QImageReader_AutoTransform(const QImageReader* self) {
	return self->autoTransform();
}

libqt_string QImageReader_SubType(const QImageReader* self) {
	QByteArray _qb = self->subType();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QImageReader_SupportedSubTypes(const QImageReader* self) {
	return self->supportedSubTypes();
}

bool QImageReader_CanRead(const QImageReader* self) {
	return self->canRead();
}

QImage* QImageReader_Read(QImageReader* self) {
	return new QImage(self->read());
}

bool QImageReader_Read2(QImageReader* self, QImage* image) {
	return self->read(image);
}

bool QImageReader_JumpToNextImage(QImageReader* self) {
	return self->jumpToNextImage();
}

bool QImageReader_JumpToImage(QImageReader* self, int imageNumber) {
	return self->jumpToImage(imageNumber);
}

int QImageReader_LoopCount(const QImageReader* self) {
	return self->loopCount();
}

int QImageReader_ImageCount(const QImageReader* self) {
	return self->imageCount();
}

int QImageReader_NextImageDelay(const QImageReader* self) {
	return self->nextImageDelay();
}

int QImageReader_CurrentImageNumber(const QImageReader* self) {
	return self->currentImageNumber();
}

QRect* QImageReader_CurrentImageRect(const QImageReader* self) {
	return new QRect(self->currentImageRect());
}

int QImageReader_Error(const QImageReader* self) {
	return self->error();
}

libqt_string QImageReader_ErrorString(const QImageReader* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QImageReader_SupportsOption(const QImageReader* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

libqt_string QImageReader_ImageFormat2(const libqt_string fileName) {
	QByteArray _qb = QImageReader::imageFormat(QString::fromUtf8(fileName.data, fileName.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageReader_ImageFormat3(QIODevice* device) {
	QByteArray _qb = QImageReader::imageFormat(device);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QImageReader_SupportedImageFormats() {
	return QImageReader::supportedImageFormats();
}

libqt_list QImageReader_SupportedMimeTypes() {
	return QImageReader::supportedMimeTypes();
}

libqt_list QImageReader_ImageFormatsForMimeType(const libqt_string mimeType) {
	return QImageReader::imageFormatsForMimeType(QByteArray(mimeType.data, mimeType.len));
}

int QImageReader_AllocationLimit() {
	return QImageReader::allocationLimit();
}

void QImageReader_SetAllocationLimit(int mbLimit) {
	QImageReader::setAllocationLimit(mbLimit);
}

libqt_string QImageReader_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageReader::tr(sourceText, disambiguation);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageReader_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageReader::tr(sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageReader_Delete(QImageReader* self) {
    delete self;
}

