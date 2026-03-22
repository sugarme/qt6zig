#include <QLibrary>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qlibrary.h>
#include "libqlibrary.h"
#include "libqlibrary.hxx"

QLibrary* QLibrary_new() {
	 return new QLibrary();
}

QLibrary* QLibrary_new2(const libqt_string fileName) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len));
}

QLibrary* QLibrary_new3(const libqt_string fileName, int verNum) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len), verNum);
}

QLibrary* QLibrary_new4(const libqt_string fileName, const libqt_string version) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(version.data, version.len));
}

QLibrary* QLibrary_new5(QObject* parent) {
	 return new QLibrary(parent);
}

QLibrary* QLibrary_new6(const libqt_string fileName, QObject* parent) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len), parent);
}

QLibrary* QLibrary_new7(const libqt_string fileName, int verNum, QObject* parent) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len), verNum, parent);
}

QLibrary* QLibrary_new8(const libqt_string fileName, const libqt_string version, QObject* parent) {
	 return new QLibrary(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(version.data, version.len), parent);
}

libqt_string QLibrary_Tr(const char* s) {
	QString _ret = QLibrary::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLibrary_Load(QLibrary* self) {
	return self->load();
}

bool QLibrary_Unload(QLibrary* self) {
	return self->unload();
}

bool QLibrary_IsLoaded(const QLibrary* self) {
	return self->isLoaded();
}

bool QLibrary_IsLibrary(const libqt_string fileName) {
	return QLibrary::isLibrary(QString::fromUtf8(fileName.data, fileName.len));
}

void QLibrary_SetFileName(QLibrary* self, const libqt_string fileName) {
	self->setFileName(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QLibrary_FileName(const QLibrary* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLibrary_SetFileNameAndVersion(QLibrary* self, const libqt_string fileName, int verNum) {
	self->setFileNameAndVersion(QString::fromUtf8(fileName.data, fileName.len), verNum);
}

void QLibrary_SetFileNameAndVersion2(QLibrary* self, const libqt_string fileName, const libqt_string version) {
	self->setFileNameAndVersion(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(version.data, version.len));
}

libqt_string QLibrary_ErrorString(const QLibrary* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLibrary_SetLoadHints(QLibrary* self, int hints) {
	self->setLoadHints(static_cast<QFlags<QLibrary::LoadHint>>(hints));
}

int QLibrary_LoadHints(const QLibrary* self) {
	return self->loadHints();
}

libqt_string QLibrary_Tr2(const char* s, const char* c) {
	QString _ret = QLibrary::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLibrary_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLibrary::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLibrary_Delete(QLibrary* self) {
    delete self;
}

