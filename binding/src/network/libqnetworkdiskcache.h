#pragma once
#ifndef QNETWORKDISKCACHE_H_C_LIB
#define QNETWORKDISKCACHE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QIODevice QIODevice;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QNetworkDiskCache QNetworkDiskCache;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QNetworkDiskCache* QNetworkDiskCache_new();
QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent);
libqt_string QNetworkDiskCache_Tr(const char* s);
libqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, const libqt_string cacheDir);
long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size);
long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self);
QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, const QUrl* url);
bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, const QUrl* url);
QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device);
QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, const libqt_string fileName);
void QNetworkDiskCache_Clear(QNetworkDiskCache* self);
long long QNetworkDiskCache_Expire(QNetworkDiskCache* self);
libqt_string QNetworkDiskCache_Tr2(const char* s, const char* c);
libqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n);
void QNetworkDiskCache_OnCacheSize(const QNetworkDiskCache* self, intptr_t slot);
long long QNetworkDiskCache_QBaseCacheSize(const QNetworkDiskCache* self);
void QNetworkDiskCache_OnMetaData(QNetworkDiskCache* self, intptr_t slot);
QNetworkCacheMetaData* QNetworkDiskCache_QBaseMetaData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnUpdateMetaData(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_QBaseUpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_OnData(QNetworkDiskCache* self, intptr_t slot);
QIODevice* QNetworkDiskCache_QBaseData(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnRemove(QNetworkDiskCache* self, intptr_t slot);
bool QNetworkDiskCache_QBaseRemove(QNetworkDiskCache* self, const QUrl* url);
void QNetworkDiskCache_OnPrepare(QNetworkDiskCache* self, intptr_t slot);
QIODevice* QNetworkDiskCache_QBasePrepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData);
void QNetworkDiskCache_OnInsert(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_QBaseInsert(QNetworkDiskCache* self, QIODevice* device);
void QNetworkDiskCache_OnClear(QNetworkDiskCache* self, intptr_t slot);
void QNetworkDiskCache_QBaseClear(QNetworkDiskCache* self);
void QNetworkDiskCache_OnExpire(QNetworkDiskCache* self, intptr_t slot);
long long QNetworkDiskCache_QBaseExpire(QNetworkDiskCache* self);
void QNetworkDiskCache_Delete(QNetworkDiskCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
