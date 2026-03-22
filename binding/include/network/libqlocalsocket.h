#pragma once
#ifndef QLOCALSOCKET_H_C_LIB
#define QLOCALSOCKET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QLocalSocket QLocalSocket;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
libqt_string QLocalSocket_Tr(const char* s);
void QLocalSocket_ConnectToServer(QLocalSocket* self);
void QLocalSocket_ConnectToServer2(QLocalSocket* self, const libqt_string name);
void QLocalSocket_DisconnectFromServer(QLocalSocket* self);
void QLocalSocket_SetServerName(QLocalSocket* self, const libqt_string name);
libqt_string QLocalSocket_ServerName(const QLocalSocket* self);
libqt_string QLocalSocket_FullServerName(const QLocalSocket* self);
void QLocalSocket_Abort(QLocalSocket* self);
bool QLocalSocket_IsSequential(const QLocalSocket* self);
long long QLocalSocket_BytesAvailable(const QLocalSocket* self);
long long QLocalSocket_BytesToWrite(const QLocalSocket* self);
bool QLocalSocket_CanReadLine(const QLocalSocket* self);
bool QLocalSocket_Open(QLocalSocket* self, int openMode);
void QLocalSocket_Close(QLocalSocket* self);
int QLocalSocket_Error(const QLocalSocket* self);
bool QLocalSocket_Flush(QLocalSocket* self);
bool QLocalSocket_IsValid(const QLocalSocket* self);
long long QLocalSocket_ReadBufferSize(const QLocalSocket* self);
void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size);
bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor);
intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self);
void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option);
int QLocalSocket_SocketOptions(const QLocalSocket* self);
QBindable<SocketOptions> QLocalSocket_BindableSocketOptions(QLocalSocket* self);
int QLocalSocket_State(const QLocalSocket* self);
bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForConnected(QLocalSocket* self);
bool QLocalSocket_WaitForDisconnected(QLocalSocket* self);
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_Connected(QLocalSocket* self);
void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_Disconnected(QLocalSocket* self);
void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_StateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize);
long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize);
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
libqt_string QLocalSocket_Tr2(const char* s, const char* c);
libqt_string QLocalSocket_Tr3(const char* s, const char* c, int n);
void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_ConnectToServer22(QLocalSocket* self, const libqt_string name, int openMode);
bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs);
void QLocalSocket_OnIsSequential(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseIsSequential(const QLocalSocket* self);
void QLocalSocket_OnBytesAvailable(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseBytesAvailable(const QLocalSocket* self);
void QLocalSocket_OnBytesToWrite(const QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseBytesToWrite(const QLocalSocket* self);
void QLocalSocket_OnCanReadLine(const QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseCanReadLine(const QLocalSocket* self);
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseOpen(QLocalSocket* self, int openMode);
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot);
void QLocalSocket_QBaseClose(QLocalSocket* self);
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseWaitForBytesWritten(QLocalSocket* self, int msecs);
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot);
bool QLocalSocket_QBaseWaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2);
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize);
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize);
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2);
void QLocalSocket_Delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
