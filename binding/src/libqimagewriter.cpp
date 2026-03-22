#include <QByteArray>
#include <QIODevice>
#include <QImage>
#include <QImageWriter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qimagewriter.h>
#include "libqimagewriter.h"
#include "libqimagewriter.hxx"

QImageWriter* QImageWriter_new() {
	 return new QImageWriter();
}

QImageWriter* QImageWriter_new2(QIODevice* device, const libqt_string format) {
	 return new QImageWriter(device, QByteArray(format.data, format.len));
}

QImageWriter* QImageWriter_new3(const libqt_string fileName) {
	 return new QImageWriter(QString::fromUtf8(fileName.data, fileName.len));
}

QImageWriter* QImageWriter_new4(const libqt_string fileName, const libqt_string format) {
	 return new QImageWriter(QString::fromUtf8(fileName.data, fileName.len), QByteArray(format.data, format.len));
}

libqt_string QImageWriter_Tr(const char* sourceText) {
	QString _ret = QImageWriter::tr(sourceText);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageWriter_SetFormat(QImageWriter* self, const libqt_string format) {
	self->setFormat(QByteArray(format.data, format.len));
}

libqt_string QImageWriter_Format(const QImageWriter* self) {
	QByteArray _qb = self->format();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageWriter_Device(const QImageWriter* self) {
	return self->device();
}

void QImageWriter_SetFileName(QImageWriter* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QImageWriter_FileName(const QImageWriter* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageWriter_SetQuality(QImageWriter* self, int quality) {
	self->setQuality(quality);
}

int QImageWriter_Quality(const QImageWriter* self) {
	return self->quality();
}

void QImageWriter_SetCompression(QImageWriter* self, int compression) {
	self->setCompression(compression);
}

int QImageWriter_Compression(const QImageWriter* self) {
	return self->compression();
}

void QImageWriter_SetSubType(QImageWriter* self, const libqt_string typeVal) {
	self->setSubType(QByteArray(typeVal.data, typeVal.len));
}

libqt_string QImageWriter_SubType(const QImageWriter* self) {
	QByteArray _qb = self->subType();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QImageWriter_SupportedSubTypes(const QImageWriter* self) {
	return self->supportedSubTypes();
}

void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize) {
	self->setOptimizedWrite(optimize);
}

bool QImageWriter_OptimizedWrite(const QImageWriter* self) {
	return self->optimizedWrite();
}

void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive) {
	self->setProgressiveScanWrite(progressive);
}

bool QImageWriter_ProgressiveScanWrite(const QImageWriter* self) {
	return self->progressiveScanWrite();
}

int QImageWriter_Transformation(const QImageWriter* self) {
	return self->transformation();
}

void QImageWriter_SetTransformation(QImageWriter* self, int orientation) {
	self->setTransformation(static_cast<QFlags<QImageIOHandler::Transformation>>(orientation));
}

void QImageWriter_SetText(QImageWriter* self, const libqt_string key, const libqt_string text) {
	self->setText(QString::fromUtf8(key.data, key.len), QString::fromUtf8(text.data, text.len));
}

bool QImageWriter_CanWrite(const QImageWriter* self) {
	return self->canWrite();
}

bool QImageWriter_Write(QImageWriter* self, const QImage* image) {
	return self->write(*image);
}

int QImageWriter_Error(const QImageWriter* self) {
	return self->error();
}

libqt_string QImageWriter_ErrorString(const QImageWriter* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QImageWriter_SupportsOption(const QImageWriter* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

libqt_list QImageWriter_SupportedImageFormats() {
	return QImageWriter::supportedImageFormats();
}

libqt_list QImageWriter_SupportedMimeTypes() {
	return QImageWriter::supportedMimeTypes();
}

libqt_list QImageWriter_ImageFormatsForMimeType(const libqt_string mimeType) {
	return QImageWriter::imageFormatsForMimeType(QByteArray(mimeType.data, mimeType.len));
}

libqt_string QImageWriter_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QImageWriter_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageWriter::tr(sourceText, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QImageWriter_Delete(QImageWriter* self) {
    delete self;
}

