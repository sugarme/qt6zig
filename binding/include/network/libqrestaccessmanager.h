#pragma once
#ifndef QRESTACCESSMANAGER_H_C_LIB
#define QRESTACCESSMANAGER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDebug QDebug;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QIODevice QIODevice;
typedef struct QJsonDocument QJsonDocument;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QRestAccessManager QRestAccessManager;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager);
QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent);
libqt_string QRestAccessManager_Tr(const char* s);
QNetworkAccessManager* QRestAccessManager_NetworkAccessManager(const QRestAccessManager* self);
QNetworkReply* QRestAccessManager_DeleteResource(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Connect_DeleteResource(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Head(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Connect_Head(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Get(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Connect_Get(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Get2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Connect_Get2(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Get3(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Connect_Get3(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Get4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Connect_Get4(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Post(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Connect_Post(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Post2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data);
QNetworkReply* QRestAccessManager_Connect_Post2(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Post3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Connect_Post3(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Post4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_Connect_Post4(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Post5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Connect_Post5(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Put(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Connect_Put(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Put2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data);
QNetworkReply* QRestAccessManager_Connect_Put2(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Put3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Connect_Put3(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Put4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_Connect_Put4(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Put5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Connect_Put5(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Patch(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Connect_Patch(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Patch2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map data);
QNetworkReply* QRestAccessManager_Connect_Patch2(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Patch3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Connect_Patch3(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_Patch4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Connect_Patch4(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_SendCustomRequest(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, const libqt_string data);
QNetworkReply* QRestAccessManager_Connect_SendCustomRequest(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_SendCustomRequest2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QIODevice* data);
QNetworkReply* QRestAccessManager_Connect_SendCustomRequest2(QRestAccessManager* self, intptr_t slot);
QNetworkReply* QRestAccessManager_SendCustomRequest3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_Connect_SendCustomRequest3(QRestAccessManager* self, intptr_t slot);
libqt_string QRestAccessManager_Tr2(const char* s, const char* c);
libqt_string QRestAccessManager_Tr3(const char* s, const char* c, int n);
void QRestAccessManager_Delete(QRestAccessManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
