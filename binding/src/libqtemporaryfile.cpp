#include <QFile>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTemporaryFile>
#include <qtemporaryfile.h>
#include "libqtemporaryfile.h"
#include "libqtemporaryfile.hxx"

QTemporaryFile* QTemporaryFile_new() {
	 return new VirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(const libqt_string templateName) {
	 return new VirtualQTemporaryFile(QString::fromUtf8(templateName.data, templateName.len));
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
	 return new VirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(const libqt_string templateName, QObject* parent) {
	 return new VirtualQTemporaryFile(QString::fromUtf8(templateName.data, templateName.len), parent);
}

libqt_string QTemporaryFile_Tr(const char* s) {
	QString _ret = QTemporaryFile::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTemporaryFile_AutoRemove(const QTemporaryFile* self) {
	return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
	return self->open();
}

libqt_string QTemporaryFile_FileName(const QTemporaryFile* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self) {
	QString _ret = self->fileTemplate();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const libqt_string name) {
	self->setFileTemplate(QString::fromUtf8(name.data, name.len));
}

bool QTemporaryFile_Rename(QTemporaryFile* self, const libqt_string newName) {
	return self->rename(QString::fromUtf8(newName.data, newName.len));
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(const libqt_string fileName) {
	return QTemporaryFile::createNativeFile(QString::fromUtf8(fileName.data, fileName.len));
}

QTemporaryFile* QTemporaryFile_CreateNativeFile2(QFile* file) {
	return QTemporaryFile::createNativeFile(*file);
}

libqt_string QTemporaryFile_Tr2(const char* s, const char* c) {
	QString _ret = QTemporaryFile::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTemporaryFile::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_string QTemporaryFile_QBaseFileName(const QTemporaryFile* self) {
	auto* vqtemporaryfile = dynamic_cast<const VirtualQTemporaryFile*>(self);
	if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
vqtemporaryfile->setQTemporaryFile_FileName_IsBase(true);
	QString _ret = vqtemporaryfile->fileName();
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
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot) {
	auto* vqtemporaryfile = dynamic_cast<const VirtualQTemporaryFile*>(self);
	if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
vqtemporaryfile->setQTemporaryFile_FileName_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_FileName_Callback>(slot));
}
}

// Derived class handler implementation
bool QTemporaryFile_Open2(QTemporaryFile* self, int flags) {
	auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
	if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
	return vqtemporaryfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
	} else {
	return self->QTemporaryFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}
}

// Base class handler implementation
bool QTemporaryFile_QBaseOpen2(QTemporaryFile* self, int flags) {
	auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
	if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
vqtemporaryfile->setQTemporaryFile_Open2_IsBase(true);
	return vqtemporaryfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnOpen2(QTemporaryFile* self, intptr_t slot) {
	auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
	if (vqtemporaryfile && vqtemporaryfile->isVirtualQTemporaryFile) {
vqtemporaryfile->setQTemporaryFile_Open2_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Open2_Callback>(slot));
}
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
    delete self;
}

