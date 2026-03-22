#include <QByteArray>
#include <QFile>
#include <QFileDevice>
#include <QNtfsPermissionCheckGuard>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qfile.h>
#include "libqfile.h"
#include "libqfile.hxx"

QNtfsPermissionCheckGuard* QNtfsPermissionCheckGuard_new() {
	 return new QNtfsPermissionCheckGuard();
}

void QNtfsPermissionCheckGuard_Delete(QNtfsPermissionCheckGuard* self) {
    delete self;
}

QFile* QFile_new() {
	 return new VirtualQFile();
}

QFile* QFile_new2(const libqt_string name) {
	 return new VirtualQFile(QString::fromUtf8(name.data, name.len));
}

QFile* QFile_new3(QObject* parent) {
	 return new VirtualQFile(parent);
}

QFile* QFile_new4(const libqt_string name, QObject* parent) {
	 return new VirtualQFile(QString::fromUtf8(name.data, name.len), parent);
}

libqt_string QFile_Tr(const char* s) {
	QString _ret = QFile::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFile_FileName(const QFile* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFile_SetFileName(QFile* self, const libqt_string name) {
	self->setFileName(QString::fromUtf8(name.data, name.len));
}

libqt_string QFile_EncodeName(const libqt_string fileName) {
	QByteArray _qb = QFile::encodeName(QString::fromUtf8(fileName.data, fileName.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFile_DecodeName(const libqt_string localFileName) {
	QString _ret = QFile::decodeName(QByteArray(localFileName.data, localFileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFile_DecodeName2(const char* localFileName) {
	QString _ret = QFile::decodeName(localFileName);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFile_Exists(const QFile* self) {
	return self->exists();
}

bool QFile_Exists2(const libqt_string fileName) {
	return QFile::exists(QString::fromUtf8(fileName.data, fileName.len));
}

libqt_string QFile_SymLinkTarget(const QFile* self) {
	QString _ret = self->symLinkTarget();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFile_SymLinkTarget2(const libqt_string fileName) {
	QString _ret = QFile::symLinkTarget(QString::fromUtf8(fileName.data, fileName.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFile_Remove(QFile* self) {
	return self->remove();
}

bool QFile_Remove2(const libqt_string fileName) {
	return QFile::remove(QString::fromUtf8(fileName.data, fileName.len));
}

bool QFile_MoveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_MoveToTrash2(const libqt_string fileName) {
	return QFile::moveToTrash(QString::fromUtf8(fileName.data, fileName.len));
}

bool QFile_Rename(QFile* self, const libqt_string newName) {
	return self->rename(QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Rename2(const libqt_string oldName, const libqt_string newName) {
	return QFile::rename(QString::fromUtf8(oldName.data, oldName.len), QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Link(QFile* self, const libqt_string newName) {
	return self->link(QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Link2(const libqt_string fileName, const libqt_string newName) {
	return QFile::link(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Copy(QFile* self, const libqt_string newName) {
	return self->copy(QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Copy2(const libqt_string fileName, const libqt_string newName) {
	return QFile::copy(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(newName.data, newName.len));
}

bool QFile_Open(QFile* self, int flags) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

bool QFile_Open2(QFile* self, int flags, int permissions) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags), static_cast<QFlags<QFileDevice::Permission>>(permissions));
}

bool QFile_Open4(QFile* self, int fd, int ioFlags) {
	return self->open(fd, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags));
}

long long QFile_Size(const QFile* self) {
	return self->size();
}

bool QFile_Resize(QFile* self, long long sz) {
	return self->resize(sz);
}

bool QFile_Resize2(const libqt_string filename, long long sz) {
	return QFile::resize(QString::fromUtf8(filename.data, filename.len), sz);
}

int QFile_Permissions(const QFile* self) {
	return self->permissions();
}

int QFile_Permissions2(const libqt_string filename) {
	return QFile::permissions(QString::fromUtf8(filename.data, filename.len));
}

bool QFile_SetPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFlags<QFileDevice::Permission>>(permissionSpec));
}

bool QFile_SetPermissions2(const libqt_string filename, int permissionSpec) {
	return QFile::setPermissions(QString::fromUtf8(filename.data, filename.len), static_cast<QFlags<QFileDevice::Permission>>(permissionSpec));
}

libqt_string QFile_Tr2(const char* s, const char* c) {
	QString _ret = QFile::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFile::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFile_MoveToTrash22(const libqt_string fileName, libqt_string pathInTrash) {
	return QFile::moveToTrash(QString::fromUtf8(fileName.data, fileName.len), QString::fromUtf8(pathInTrash.data, pathInTrash.len));
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(fd, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags), static_cast<QFlags<QFileDevice::FileHandleFlag>>(handleFlags));
}

// Base class handler implementation
libqt_string QFile_QBaseFileName(const QFile* self) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_FileName_IsBase(true);
	QString _ret = vqfile->fileName();
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
void QFile_OnFileName(const QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_FileName_Callback(reinterpret_cast<VirtualQFile::QFile_FileName_Callback>(slot));
}
}

// Base class handler implementation
bool QFile_QBaseOpen(QFile* self, int flags) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Open_IsBase(true);
	return vqfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}
}

// Auxiliary method to allow providing re-implementation
void QFile_OnOpen(QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Open_Callback(reinterpret_cast<VirtualQFile::QFile_Open_Callback>(slot));
}
}

// Base class handler implementation
long long QFile_QBaseSize(const QFile* self) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Size_IsBase(true);
	return vqfile->size();
}
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSize(const QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Size_Callback(reinterpret_cast<VirtualQFile::QFile_Size_Callback>(slot));
}
}

// Base class handler implementation
bool QFile_QBaseResize(QFile* self, long long sz) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Resize_IsBase(true);
	return vqfile->resize(sz);
}
}

// Auxiliary method to allow providing re-implementation
void QFile_OnResize(QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Resize_Callback(reinterpret_cast<VirtualQFile::QFile_Resize_Callback>(slot));
}
}

// Base class handler implementation
int QFile_QBasePermissions(const QFile* self) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Permissions_IsBase(true);
	return vqfile->permissions();
}
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPermissions(const QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<const VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_Permissions_Callback(reinterpret_cast<VirtualQFile::QFile_Permissions_Callback>(slot));
}
}

// Base class handler implementation
bool QFile_QBaseSetPermissions(QFile* self, int permissionSpec) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_SetPermissions_IsBase(true);
	return vqfile->setPermissions(static_cast<QFlags<QFileDevice::Permission>>(permissionSpec));
}
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetPermissions(QFile* self, intptr_t slot) {
	auto* vqfile = dynamic_cast<VirtualQFile*>(self);
	if (vqfile && vqfile->isVirtualQFile) {
vqfile->setQFile_SetPermissions_Callback(reinterpret_cast<VirtualQFile::QFile_SetPermissions_Callback>(slot));
}
}

void QFile_Delete(QFile* self) {
    delete self;
}

