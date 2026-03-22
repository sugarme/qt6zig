#pragma once
#ifndef QLOCALSERVER_H_C_LIB
#define QLOCALSERVER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLocalServer QLocalServer;
typedef struct QLocalSocket QLocalSocket;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLocalServer* QLocalServer_new();
QLocalServer* QLocalServer_new2(QObject* parent);
libqt_string QLocalServer_Tr(const char* s);
void QLocalServer_NewConnection(QLocalServer* self);
void QLocalServer_Connect_NewConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_Close(QLocalServer* self);
libqt_string QLocalServer_ErrorString(const QLocalServer* self);
bool QLocalServer_HasPendingConnections(const QLocalServer* self);
bool QLocalServer_IsListening(const QLocalServer* self);
bool QLocalServer_Listen(QLocalServer* self, const libqt_string name);
bool QLocalServer_Listen2(QLocalServer* self, intptr_t socketDescriptor);
int QLocalServer_MaxPendingConnections(const QLocalServer* self);
QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self);
libqt_string QLocalServer_ServerName(const QLocalServer* self);
libqt_string QLocalServer_FullServerName(const QLocalServer* self);
bool QLocalServer_RemoveServer(const libqt_string name);
int QLocalServer_ServerError(const QLocalServer* self);
void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections);
bool QLocalServer_WaitForNewConnection(QLocalServer* self);
void QLocalServer_SetListenBacklogSize(QLocalServer* self, int size);
int QLocalServer_ListenBacklogSize(const QLocalServer* self);
void QLocalServer_SetSocketOptions(QLocalServer* self, int options);
int QLocalServer_SocketOptions(const QLocalServer* self);
intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self);
void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
libqt_string QLocalServer_Tr2(const char* s, const char* c);
libqt_string QLocalServer_Tr3(const char* s, const char* c, int n);
bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec);
bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut);
void QLocalServer_OnHasPendingConnections(const QLocalServer* self, intptr_t slot);
bool QLocalServer_QBaseHasPendingConnections(const QLocalServer* self);
void QLocalServer_OnNextPendingConnection(QLocalServer* self, intptr_t slot);
QLocalSocket* QLocalServer_QBaseNextPendingConnection(QLocalServer* self);
void QLocalServer_OnIncomingConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor);
void QLocalServer_AddPendingConnection(QLocalServer* self, QLocalSocket* socket);
void QLocalServer_OnAddPendingConnection(QLocalServer* self, intptr_t slot);
void QLocalServer_QBaseAddPendingConnection(QLocalServer* self, QLocalSocket* socket);
void QLocalServer_Delete(QLocalServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
