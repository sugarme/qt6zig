#include <QDateTime>
#include <QFileDevice>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qfiledevice.h>
#include "libqfiledevice.h"
#include "libqfiledevice.hxx"

libqt_string QFileDevice_Tr(const char* s) {
	QString _ret = QFileDevice::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QFileDevice_Error(const QFileDevice* self) {
	return self->error();
}

void QFileDevice_UnsetError(QFileDevice* self) {
	self->unsetError();
}

void QFileDevice_Close(QFileDevice* self) {
	self->close();
}

bool QFileDevice_IsSequential(const QFileDevice* self) {
	return self->isSequential();
}

int QFileDevice_Handle(const QFileDevice* self) {
	return self->handle();
}

libqt_string QFileDevice_FileName(const QFileDevice* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QFileDevice_Pos(const QFileDevice* self) {
	return self->pos();
}

bool QFileDevice_Seek(QFileDevice* self, long long offset) {
	return self->seek(offset);
}

bool QFileDevice_AtEnd(const QFileDevice* self) {
	return self->atEnd();
}

bool QFileDevice_Flush(QFileDevice* self) {
	return self->flush();
}

long long QFileDevice_Size(const QFileDevice* self) {
	return self->size();
}

bool QFileDevice_Resize(QFileDevice* self, long long sz) {
	return self->resize(sz);
}

int QFileDevice_Permissions(const QFileDevice* self) {
	return self->permissions();
}

bool QFileDevice_SetPermissions(QFileDevice* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFlags<QFileDevice::Permission>>(permissionSpec));
}

unsigned char* QFileDevice_Map(QFileDevice* self, long long offset, long long size) {
	return self->map(offset, size);
}

bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address) {
	return self->unmap(address);
}

QDateTime* QFileDevice_FileTime(const QFileDevice* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

bool QFileDevice_SetFileTime(QFileDevice* self, const QDateTime* newDate, int fileTime) {
	return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

libqt_string QFileDevice_Tr2(const char* s, const char* c) {
	QString _ret = QFileDevice::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDevice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDevice::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned char* QFileDevice_Map3(QFileDevice* self, long long offset, long long size, int flags) {
	return self->map(offset, size, static_cast<QFlags<QFileDevice::MemoryMapFlag>>(flags));
}

// Base class handler implementation
void QFileDevice_QBaseClose(QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Close_IsBase(true);
	vqfiledevice->close();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnClose(QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Close_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QFileDevice_QBaseIsSequential(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_IsSequential_IsBase(true);
	return vqfiledevice->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnIsSequential(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_IsSequential_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QFileDevice_QBaseFileName(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_FileName_IsBase(true);
	QString _ret = vqfiledevice->fileName();
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
void QFileDevice_OnFileName(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_FileName_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_FileName_Callback>(slot));
}
}

// Base class handler implementation
long long QFileDevice_QBasePos(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Pos_IsBase(true);
	return vqfiledevice->pos();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnPos(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Pos_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Pos_Callback>(slot));
}
}

// Base class handler implementation
bool QFileDevice_QBaseSeek(QFileDevice* self, long long offset) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Seek_IsBase(true);
	return vqfiledevice->seek(offset);
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnSeek(QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Seek_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Seek_Callback>(slot));
}
}

// Base class handler implementation
bool QFileDevice_QBaseAtEnd(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_AtEnd_IsBase(true);
	return vqfiledevice->atEnd();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnAtEnd(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_AtEnd_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_AtEnd_Callback>(slot));
}
}

// Base class handler implementation
long long QFileDevice_QBaseSize(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Size_IsBase(true);
	return vqfiledevice->size();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnSize(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Size_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Size_Callback>(slot));
}
}

// Base class handler implementation
bool QFileDevice_QBaseResize(QFileDevice* self, long long sz) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Resize_IsBase(true);
	return vqfiledevice->resize(sz);
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnResize(QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Resize_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Resize_Callback>(slot));
}
}

// Base class handler implementation
int QFileDevice_QBasePermissions(const QFileDevice* self) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Permissions_IsBase(true);
	return vqfiledevice->permissions();
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnPermissions(const QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<const VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_Permissions_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_Permissions_Callback>(slot));
}
}

// Base class handler implementation
bool QFileDevice_QBaseSetPermissions(QFileDevice* self, int permissionSpec) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_SetPermissions_IsBase(true);
	return vqfiledevice->setPermissions(static_cast<QFlags<QFileDevice::Permission>>(permissionSpec));
}
}

// Auxiliary method to allow providing re-implementation
void QFileDevice_OnSetPermissions(QFileDevice* self, intptr_t slot) {
	auto* vqfiledevice = dynamic_cast<VirtualQFileDevice*>(self);
	if (vqfiledevice && vqfiledevice->isVirtualQFileDevice) {
vqfiledevice->setQFileDevice_SetPermissions_Callback(reinterpret_cast<VirtualQFileDevice::QFileDevice_SetPermissions_Callback>(slot));
}
}

void QFileDevice_Delete(QFileDevice* self) {
    delete self;
}

