#include <QByteArray>
#include <QDateTime>
#include <QLocale>
#include <QResource>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qresource.h>
#include "libqresource.h"
#include "libqresource.hxx"

QResource* QResource_new() {
	 return new QResource();
}

QResource* QResource_new2(const libqt_string file) {
	 return new QResource(QString::fromUtf8(file.data, file.len));
}

QResource* QResource_new3(const libqt_string file, const QLocale* locale) {
	 return new QResource(QString::fromUtf8(file.data, file.len), *locale);
}

void QResource_SetFileName(QResource* self, const libqt_string file) {
	self->setFileName(QString::fromUtf8(file.data, file.len));
}

libqt_string QResource_FileName(const QResource* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QResource_AbsoluteFilePath(const QResource* self) {
	QString _ret = self->absoluteFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QResource_SetLocale(QResource* self, const QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QResource_Locale(const QResource* self) {
	return new QLocale(self->locale());
}

bool QResource_IsValid(const QResource* self) {
	return self->isValid();
}

int QResource_CompressionAlgorithm(const QResource* self) {
	return self->compressionAlgorithm();
}

long long QResource_Size(const QResource* self) {
	return self->size();
}

const unsigned char* QResource_Data(const QResource* self) {
	return self->data();
}

long long QResource_UncompressedSize(const QResource* self) {
	return self->uncompressedSize();
}

libqt_string QResource_UncompressedData(const QResource* self) {
	QByteArray _qb = self->uncompressedData();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QDateTime* QResource_LastModified(const QResource* self) {
	return new QDateTime(self->lastModified());
}

bool QResource_RegisterResource(const libqt_string rccFilename) {
	return QResource::registerResource(QString::fromUtf8(rccFilename.data, rccFilename.len));
}

bool QResource_UnregisterResource(const libqt_string rccFilename) {
	return QResource::unregisterResource(QString::fromUtf8(rccFilename.data, rccFilename.len));
}

bool QResource_RegisterResource2(const unsigned char* rccData) {
	return QResource::registerResource(rccData);
}

bool QResource_UnregisterResource2(const unsigned char* rccData) {
	return QResource::unregisterResource(rccData);
}

bool QResource_RegisterResource22(const libqt_string rccFilename, const libqt_string resourceRoot) {
	return QResource::registerResource(QString::fromUtf8(rccFilename.data, rccFilename.len), QString::fromUtf8(resourceRoot.data, resourceRoot.len));
}

bool QResource_UnregisterResource22(const libqt_string rccFilename, const libqt_string resourceRoot) {
	return QResource::unregisterResource(QString::fromUtf8(rccFilename.data, rccFilename.len), QString::fromUtf8(resourceRoot.data, resourceRoot.len));
}

bool QResource_RegisterResource23(const unsigned char* rccData, const libqt_string resourceRoot) {
	return QResource::registerResource(rccData, QString::fromUtf8(resourceRoot.data, resourceRoot.len));
}

bool QResource_UnregisterResource23(const unsigned char* rccData, const libqt_string resourceRoot) {
	return QResource::unregisterResource(rccData, QString::fromUtf8(resourceRoot.data, resourceRoot.len));
}

void QResource_Delete(QResource* self) {
    delete self;
}

