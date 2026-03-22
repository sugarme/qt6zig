#include <QAbstractNetworkCache>
#include <QDateTime>
#include <QHttpHeaders>
#include <QIODevice>
#include <QNetworkCacheMetaData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qabstractnetworkcache.h>
#include "libqabstractnetworkcache.h"
#include "libqabstractnetworkcache.hxx"

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
	 return new QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(const QNetworkCacheMetaData* other) {
	 return new QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
	self->operator=(*other);
}

void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->swap(*other);
}

bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
	return self->operator==(*other);
}

bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other) {
	return self->operator!=(*other);
}

bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self) {
	return self->isValid();
}

QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self) {
	return new QUrl(self->url());
}

void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, const QUrl* url) {
	self->setUrl(*url);
}

libqt_list QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self) {
	return self->rawHeaders();
}

void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, const libqt_list headers) {
	self->setRawHeaders(*headers);
}

QHttpHeaders* QNetworkCacheMetaData_Headers(const QNetworkCacheMetaData* self) {
	return new QHttpHeaders(self->headers());
}

void QNetworkCacheMetaData_SetHeaders(QNetworkCacheMetaData* self, const QHttpHeaders* headers) {
	self->setHeaders(*headers);
}

QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, const QDateTime* dateTime) {
	self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, const QDateTime* dateTime) {
	self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self) {
	return self->saveToDisk();
}

void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
	self->setSaveToDisk(allow);
}

libqt_map QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self) {
	return self->attributes();
}

void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, const libqt_map attributes) {
	self->setAttributes(*attributes);
}

void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self) {
    delete self;
}

libqt_string QAbstractNetworkCache_Tr(const char* s) {
	QString _ret = QAbstractNetworkCache::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, const QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, const QUrl* url) {
	return self->data(*url);
}

bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, const QUrl* url) {
	return self->remove(*url);
}

long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self) {
	return self->cacheSize();
}

QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device) {
	self->insert(device);
}

void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self) {
	self->clear();
}

libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractNetworkCache::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractNetworkCache::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QNetworkCacheMetaData* QAbstractNetworkCache_QBaseMetaData(QAbstractNetworkCache* self, const QUrl* url) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_MetaData_IsBase(true);
	return new QNetworkCacheMetaData(vqabstractnetworkcache->metaData(*url));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnMetaData(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_MetaData_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_MetaData_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractNetworkCache_QBaseUpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_UpdateMetaData_IsBase(true);
	vqabstractnetworkcache->updateMetaData(*metaData);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnUpdateMetaData(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_UpdateMetaData_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_UpdateMetaData_Callback>(slot));
}
}

// Base class handler implementation
QIODevice* QAbstractNetworkCache_QBaseData(QAbstractNetworkCache* self, const QUrl* url) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Data_IsBase(true);
	return vqabstractnetworkcache->data(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnData(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Data_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractNetworkCache_QBaseRemove(QAbstractNetworkCache* self, const QUrl* url) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Remove_IsBase(true);
	return vqabstractnetworkcache->remove(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnRemove(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Remove_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_Remove_Callback>(slot));
}
}

// Base class handler implementation
long long QAbstractNetworkCache_QBaseCacheSize(const QAbstractNetworkCache* self) {
	auto* vqabstractnetworkcache = dynamic_cast<const VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_CacheSize_IsBase(true);
	return vqabstractnetworkcache->cacheSize();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnCacheSize(const QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<const VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_CacheSize_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_CacheSize_Callback>(slot));
}
}

// Base class handler implementation
QIODevice* QAbstractNetworkCache_QBasePrepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Prepare_IsBase(true);
	return vqabstractnetworkcache->prepare(*metaData);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnPrepare(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Prepare_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_Prepare_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractNetworkCache_QBaseInsert(QAbstractNetworkCache* self, QIODevice* device) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Insert_IsBase(true);
	vqabstractnetworkcache->insert(device);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnInsert(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Insert_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_Insert_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractNetworkCache_QBaseClear(QAbstractNetworkCache* self) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Clear_IsBase(true);
	vqabstractnetworkcache->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractNetworkCache_OnClear(QAbstractNetworkCache* self, intptr_t slot) {
	auto* vqabstractnetworkcache = dynamic_cast<VirtualQAbstractNetworkCache*>(self);
	if (vqabstractnetworkcache && vqabstractnetworkcache->isVirtualQAbstractNetworkCache) {
vqabstractnetworkcache->setQAbstractNetworkCache_Clear_Callback(reinterpret_cast<VirtualQAbstractNetworkCache::QAbstractNetworkCache_Clear_Callback>(slot));
}
}

void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self) {
    delete self;
}

