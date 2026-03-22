#pragma once
#ifndef QTCPSERVER_H_C_LIB
#define QTCPSERVER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QTcpServer QTcpServer;
typedef struct QTcpSocket QTcpSocket;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTcpServer* QTcpServer_new();
QTcpServer* QTcpServer_new2(QObject* parent);
libqt_string QTcpServer_Tr(const char* s);
bool QTcpServer_Listen(QTcpServer* self);
void QTcpServer_Close(QTcpServer* self);
bool QTcpServer_IsListening(const QTcpServer* self);
void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections);
int QTcpServer_MaxPendingConnections(const QTcpServer* self);
void QTcpServer_SetListenBacklogSize(QTcpServer* self, int size);
int QTcpServer_ListenBacklogSize(const QTcpServer* self);
uint16_t QTcpServer_ServerPort(const QTcpServer* self);
QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self);
intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self);
bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor);
bool QTcpServer_WaitForNewConnection(QTcpServer* self);
bool QTcpServer_HasPendingConnections(const QTcpServer* self);
QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self);
int QTcpServer_ServerError(const QTcpServer* self);
libqt_string QTcpServer_ErrorString(const QTcpServer* self);
void QTcpServer_PauseAccepting(QTcpServer* self);
void QTcpServer_ResumeAccepting(QTcpServer* self);
void QTcpServer_SetProxy(QTcpServer* self, const QNetworkProxy* networkProxy);
QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self);
void QTcpServer_IncomingConnection(QTcpServer* self, intptr_t handle);
void QTcpServer_NewConnection(QTcpServer* self);
void QTcpServer_Connect_NewConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_AcceptError(QTcpServer* self, int socketError);
void QTcpServer_Connect_AcceptError(QTcpServer* self, intptr_t slot);
libqt_string QTcpServer_Tr2(const char* s, const char* c);
libqt_string QTcpServer_Tr3(const char* s, const char* c, int n);
bool QTcpServer_Listen1(QTcpServer* self, const QHostAddress* address);
bool QTcpServer_Listen2(QTcpServer* self, const QHostAddress* address, uint16_t port);
bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec);
bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut);
void QTcpServer_OnHasPendingConnections(const QTcpServer* self, intptr_t slot);
bool QTcpServer_QBaseHasPendingConnections(const QTcpServer* self);
void QTcpServer_OnNextPendingConnection(QTcpServer* self, intptr_t slot);
QTcpSocket* QTcpServer_QBaseNextPendingConnection(QTcpServer* self);
void QTcpServer_OnIncomingConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseIncomingConnection(QTcpServer* self, intptr_t handle);
void QTcpServer_AddPendingConnection(QTcpServer* self, QTcpSocket* socket);
void QTcpServer_OnAddPendingConnection(QTcpServer* self, intptr_t slot);
void QTcpServer_QBaseAddPendingConnection(QTcpServer* self, QTcpSocket* socket);
void QTcpServer_Connect_pendingConnectionAvailable(QTcpServer* self, intptr_t slot);
void QTcpServer_Delete(QTcpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
