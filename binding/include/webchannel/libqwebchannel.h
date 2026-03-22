#pragma once
#ifndef QWEBCHANNEL_H_C_LIB
#define QWEBCHANNEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QWebChannel QWebChannel;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWebChannel* QWebChannel_new();
QWebChannel* QWebChannel_new2(QObject* parent);
libqt_string QWebChannel_Tr(const char* s);
void QWebChannel_RegisterObjects(QWebChannel* self, const libqt_map objects);
libqt_map QWebChannel_RegisteredObjects(const QWebChannel* self);
void QWebChannel_RegisterObject(QWebChannel* self, const libqt_string id, QObject* object);
void QWebChannel_DeregisterObject(QWebChannel* self, QObject* object);
bool QWebChannel_BlockUpdates(const QWebChannel* self);
void QWebChannel_SetBlockUpdates(QWebChannel* self, bool block);
int QWebChannel_PropertyUpdateInterval(const QWebChannel* self);
void QWebChannel_SetPropertyUpdateInterval(QWebChannel* self, int ms);
void QWebChannel_BlockUpdatesChanged(QWebChannel* self, bool block);
void QWebChannel_Connect_BlockUpdatesChanged(QWebChannel* self, intptr_t slot);
void QWebChannel_ConnectTo(QWebChannel* self, QWebChannelAbstractTransport* transport);
void QWebChannel_DisconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport);
libqt_string QWebChannel_Tr2(const char* s, const char* c);
libqt_string QWebChannel_Tr3(const char* s, const char* c, int n);
void QWebChannel_Delete(QWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
