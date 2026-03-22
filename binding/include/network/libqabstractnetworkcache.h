#pragma once
#ifndef QABSTRACTNETWORKCACHE_H_C_LIB
#define QABSTRACTNETWORKCACHE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QDateTime QDateTime;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QIODevice QIODevice;
typedef struct QNetworkCacheMetaData QNetworkCacheMetaData;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QNetworkCacheMetaData* QNetworkCacheMetaData_new();
QNetworkCacheMetaData* QNetworkCacheMetaData_new2(const QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, const QNetworkCacheMetaData* other);
bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self);
QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, const QUrl* url);
libqt_list QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, const libqt_list headers);
QHttpHeaders* QNetworkCacheMetaData_Headers(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetHeaders(QNetworkCacheMetaData* self, const QHttpHeaders* headers);
QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, const QDateTime* dateTime);
QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, const QDateTime* dateTime);
bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow);
libqt_map QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self);
void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, const libqt_map attributes);
void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self);

libqt_string QAbstractNetworkCache_Tr(const char* s);
QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, const QUrl* url);
void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, const QUrl* url);
bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, const QUrl* url);
long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self);
QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self);
libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c);
libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n);
void QAbstractNetworkCache_OnMetaData(QAbstractNetworkCache* self, intptr_t slot);
QNetworkCacheMetaData* QAbstractNetworkCache_QBaseMetaData(QAbstractNetworkCache* self, const QUrl* url);
void QAbstractNetworkCache_OnUpdateMetaData(QAbstractNetworkCache* self, intptr_t slot);
void QAbstractNetworkCache_QBaseUpdateMetaData(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_OnData(QAbstractNetworkCache* self, intptr_t slot);
QIODevice* QAbstractNetworkCache_QBaseData(QAbstractNetworkCache* self, const QUrl* url);
void QAbstractNetworkCache_OnRemove(QAbstractNetworkCache* self, intptr_t slot);
bool QAbstractNetworkCache_QBaseRemove(QAbstractNetworkCache* self, const QUrl* url);
void QAbstractNetworkCache_OnCacheSize(const QAbstractNetworkCache* self, intptr_t slot);
long long QAbstractNetworkCache_QBaseCacheSize(const QAbstractNetworkCache* self);
void QAbstractNetworkCache_OnPrepare(QAbstractNetworkCache* self, intptr_t slot);
QIODevice* QAbstractNetworkCache_QBasePrepare(QAbstractNetworkCache* self, const QNetworkCacheMetaData* metaData);
void QAbstractNetworkCache_OnInsert(QAbstractNetworkCache* self, intptr_t slot);
void QAbstractNetworkCache_QBaseInsert(QAbstractNetworkCache* self, QIODevice* device);
void QAbstractNetworkCache_OnClear(QAbstractNetworkCache* self, intptr_t slot);
void QAbstractNetworkCache_QBaseClear(QAbstractNetworkCache* self);
void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
