#include <QAbstractNetworkCache>
#include <QIODevice>
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkdiskcache.h>
#include "libqnetworkdiskcache.h"
#include "libqnetworkdiskcache.hxx"

QNetworkDiskCache* QNetworkDiskCache_new() {
	 return new VirtualQNetworkDiskCache();
}

QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent) {
	 return new VirtualQNetworkDiskCache(parent);
}

libqt_string QNetworkDiskCache_Tr(const char* s) {
	QString _ret = QNetworkDiskCache::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self) {
	QString _ret = self->cacheDirectory();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, const libqt_string cacheDir) {
	self->setCacheDirectory(QString::fromUtf8(cacheDir.data, cacheDir.len));
}

long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self) {
	return self->maximumCacheSize();
}

void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size) {
	self->setMaximumCacheSize(size);
}

long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self) {
	return self->cacheSize();
}

QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, const QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, const QUrl* url) {
	return self->data(*url);
}

bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, const QUrl* url) {
	return self->remove(*url);
}

QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device) {
	self->insert(device);
}

QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, const libqt_string fileName) {
	return new QNetworkCacheMetaData(self->fileMetaData(QString::fromUtf8(fileName.data, fileName.len)));
}

void QNetworkDiskCache_Clear(QNetworkDiskCache* self) {
	self->clear();
}

libqt_string QNetworkDiskCache_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
long long QNetworkDiskCache_QBaseCacheSize(const QNetworkDiskCache* self) {
	auto* vqnetworkdiskcache = dynamic_cast<const VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_CacheSize_IsBase(true);
	return vqnetworkdiskcache->cacheSize();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnCacheSize(const QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<const VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_CacheSize_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_CacheSize_Callback>(slot));
}
}

// Base class handler implementation
QNetworkCacheMetaData* QNetworkDiskCache_QBaseMetaData(QNetworkDiskCache* self, const QUrl* url) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_MetaData_IsBase(true);
	return new QNetworkCacheMetaData(vqnetworkdiskcache->metaData(*url));
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetaData(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_MetaData_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_MetaData_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkDiskCache_QBaseUpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_UpdateMetaData_IsBase(true);
	vqnetworkdiskcache->updateMetaData(*metaData);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnUpdateMetaData(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_UpdateMetaData_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_UpdateMetaData_Callback>(slot));
}
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_QBaseData(QNetworkDiskCache* self, const QUrl* url) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Data_IsBase(true);
	return vqnetworkdiskcache->data(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnData(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Data_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkDiskCache_QBaseRemove(QNetworkDiskCache* self, const QUrl* url) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Remove_IsBase(true);
	return vqnetworkdiskcache->remove(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnRemove(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Remove_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Remove_Callback>(slot));
}
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_QBasePrepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Prepare_IsBase(true);
	return vqnetworkdiskcache->prepare(*metaData);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnPrepare(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Prepare_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Prepare_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkDiskCache_QBaseInsert(QNetworkDiskCache* self, QIODevice* device) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Insert_IsBase(true);
	vqnetworkdiskcache->insert(device);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnInsert(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Insert_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Insert_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkDiskCache_QBaseClear(QNetworkDiskCache* self) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Clear_IsBase(true);
	vqnetworkdiskcache->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnClear(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Clear_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Clear_Callback>(slot));
}
}

// Derived class handler implementation
long long QNetworkDiskCache_Expire(QNetworkDiskCache* self) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
	return vqnetworkdiskcache->expire();
	} else {
	return self->QNetworkDiskCache::expire();
}
}

// Base class handler implementation
long long QNetworkDiskCache_QBaseExpire(QNetworkDiskCache* self) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Expire_IsBase(true);
	return vqnetworkdiskcache->expire();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnExpire(QNetworkDiskCache* self, intptr_t slot) {
	auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
	if (vqnetworkdiskcache && vqnetworkdiskcache->isVirtualQNetworkDiskCache) {
vqnetworkdiskcache->setQNetworkDiskCache_Expire_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Expire_Callback>(slot));
}
}

void QNetworkDiskCache_Delete(QNetworkDiskCache* self) {
    delete self;
}

