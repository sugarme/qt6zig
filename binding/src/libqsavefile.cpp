#include <QFileDevice>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qsavefile.h>
#include "libqsavefile.h"
#include "libqsavefile.hxx"

QSaveFile* QSaveFile_new(const libqt_string name) {
	 return new VirtualQSaveFile(QString::fromUtf8(name.data, name.len));
}

QSaveFile* QSaveFile_new2() {
	 return new VirtualQSaveFile();
}

QSaveFile* QSaveFile_new3(const libqt_string name, QObject* parent) {
	 return new VirtualQSaveFile(QString::fromUtf8(name.data, name.len), parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
	 return new VirtualQSaveFile(parent);
}

libqt_string QSaveFile_Tr(const char* s) {
	QString _ret = QSaveFile::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSaveFile_FileName(const QSaveFile* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSaveFile_SetFileName(QSaveFile* self, const libqt_string name) {
	self->setFileName(QString::fromUtf8(name.data, name.len));
}

bool QSaveFile_Open(QSaveFile* self, int flags) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

bool QSaveFile_Commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(const QSaveFile* self) {
	return self->directWriteFallback();
}

libqt_string QSaveFile_Tr2(const char* s, const char* c) {
	QString _ret = QSaveFile::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSaveFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_string QSaveFile_QBaseFileName(const QSaveFile* self) {
	auto* vqsavefile = dynamic_cast<const VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_FileName_IsBase(true);
	QString _ret = vqsavefile->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnFileName(const QSaveFile* self, intptr_t slot) {
	auto* vqsavefile = dynamic_cast<const VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_FileName_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_FileName_Callback>(slot));
}
}

// Base class handler implementation
bool QSaveFile_QBaseOpen(QSaveFile* self, int flags) {
	auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_Open_IsBase(true);
	return vqsavefile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnOpen(QSaveFile* self, intptr_t slot) {
	auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_Open_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_Open_Callback>(slot));
}
}

// Derived class handler implementation
long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal) {
	auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
	return vqsavefile->writeData(data, lenVal);
	} else {
	return self->QSaveFile::writeData(data, lenVal);
}
}

// Base class handler implementation
long long QSaveFile_QBaseWriteData(QSaveFile* self, const char* data, long long lenVal) {
	auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_WriteData_IsBase(true);
	return vqsavefile->writeData(data, lenVal);
}
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWriteData(QSaveFile* self, intptr_t slot) {
	auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
	if (vqsavefile && vqsavefile->isVirtualQSaveFile) {
vqsavefile->setQSaveFile_WriteData_Callback(reinterpret_cast<VirtualQSaveFile::QSaveFile_WriteData_Callback>(slot));
}
}

void QSaveFile_Delete(QSaveFile* self) {
    delete self;
}

