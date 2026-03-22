#include <QNativeIpcKey>
#include <QObject>
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsharedmemory.h>
#include "libqsharedmemory.h"
#include "libqsharedmemory.hxx"

QSharedMemory* QSharedMemory_new() {
	 return new QSharedMemory();
}

QSharedMemory* QSharedMemory_new2(const QNativeIpcKey* key) {
	 return new QSharedMemory(*key);
}

QSharedMemory* QSharedMemory_new3(const libqt_string key) {
	 return new QSharedMemory(QString::fromUtf8(key.data, key.len));
}

QSharedMemory* QSharedMemory_new4(QObject* parent) {
	 return new QSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new5(const QNativeIpcKey* key, QObject* parent) {
	 return new QSharedMemory(*key, parent);
}

QSharedMemory* QSharedMemory_new6(const libqt_string key, QObject* parent) {
	 return new QSharedMemory(QString::fromUtf8(key.data, key.len), parent);
}

libqt_string QSharedMemory_Tr(const char* s) {
	QString _ret = QSharedMemory::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSharedMemory_SetKey(QSharedMemory* self, const libqt_string key) {
	self->setKey(QString::fromUtf8(key.data, key.len));
}

libqt_string QSharedMemory_Key(const QSharedMemory* self) {
	QString _ret = self->key();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, const QNativeIpcKey* key) {
	self->setNativeKey(*key);
}

void QSharedMemory_SetNativeKey2(QSharedMemory* self, const libqt_string key) {
	self->setNativeKey(QString::fromUtf8(key.data, key.len));
}

libqt_string QSharedMemory_NativeKey(const QSharedMemory* self) {
	QString _ret = self->nativeKey();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QNativeIpcKey* QSharedMemory_NativeIpcKey(const QSharedMemory* self) {
	return new QNativeIpcKey(self->nativeIpcKey());
}

bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size) {
	return self->create(size);
}

ptrdiff_t QSharedMemory_Size(const QSharedMemory* self) {
	return self->size();
}

bool QSharedMemory_Attach(QSharedMemory* self) {
	return self->attach();
}

bool QSharedMemory_IsAttached(const QSharedMemory* self) {
	return self->isAttached();
}

bool QSharedMemory_Detach(QSharedMemory* self) {
	return self->detach();
}

void* QSharedMemory_Data(QSharedMemory* self) {
	return self->data();
}

const void* QSharedMemory_ConstData(const QSharedMemory* self) {
	return self->constData();
}

const void* QSharedMemory_Data2(const QSharedMemory* self) {
	return self->data();
}

bool QSharedMemory_Lock(QSharedMemory* self) {
	return self->lock();
}

bool QSharedMemory_Unlock(QSharedMemory* self) {
	return self->unlock();
}

int QSharedMemory_Error(const QSharedMemory* self) {
	return self->error();
}

libqt_string QSharedMemory_ErrorString(const QSharedMemory* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSharedMemory_IsKeyTypeSupported(quint16 typeVal) {
	return QSharedMemory::isKeyTypeSupported(static_cast<QNativeIpcKey::Type>(typeVal));
}

QNativeIpcKey* QSharedMemory_PlatformSafeKey(const libqt_string key) {
	return new QNativeIpcKey(QSharedMemory::platformSafeKey(QString::fromUtf8(key.data, key.len)));
}

QNativeIpcKey* QSharedMemory_LegacyNativeKey(const libqt_string key) {
	return new QNativeIpcKey(QSharedMemory::legacyNativeKey(QString::fromUtf8(key.data, key.len)));
}

libqt_string QSharedMemory_Tr2(const char* s, const char* c) {
	QString _ret = QSharedMemory::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSharedMemory_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSharedMemory_SetNativeKey22(QSharedMemory* self, const libqt_string key, quint16 typeVal) {
	self->setNativeKey(QString::fromUtf8(key.data, key.len), static_cast<QNativeIpcKey::Type>(typeVal));
}

bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode) {
	return self->create(size, static_cast<QSystemSemaphore::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, int mode) {
	return self->attach(static_cast<QSystemSemaphore::AccessMode>(mode));
}

QNativeIpcKey* QSharedMemory_PlatformSafeKey2(const libqt_string key, quint16 typeVal) {
	return new QNativeIpcKey(QSharedMemory::platformSafeKey(QString::fromUtf8(key.data, key.len), static_cast<QNativeIpcKey::Type>(typeVal)));
}

QNativeIpcKey* QSharedMemory_LegacyNativeKey2(const libqt_string key, quint16 typeVal) {
	return new QNativeIpcKey(QSharedMemory::legacyNativeKey(QString::fromUtf8(key.data, key.len), static_cast<QNativeIpcKey::Type>(typeVal)));
}

void QSharedMemory_Delete(QSharedMemory* self) {
    delete self;
}

