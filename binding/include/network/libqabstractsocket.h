#pragma once
#ifndef QABSTRACTSOCKET_H_C_LIB
#define QABSTRACTSOCKET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QAuthenticator QAuthenticator;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent);
libqt_string QAbstractSocket_Tr(const char* s);
void QAbstractSocket_Resume(QAbstractSocket* self);
int QAbstractSocket_PauseMode(const QAbstractSocket* self);
void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode);
bool QAbstractSocket_Bind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
bool QAbstractSocket_Bind2(QAbstractSocket* self);
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, const QHostAddress* address, uint16_t port);
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self);
bool QAbstractSocket_IsValid(const QAbstractSocket* self);
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self);
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self);
uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self);
uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self);
QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self);
libqt_string QAbstractSocket_PeerName(const QAbstractSocket* self);
long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self);
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_Abort(QAbstractSocket* self);
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self);
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, const QVariant* value);
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option);
int QAbstractSocket_SocketType(const QAbstractSocket* self);
int QAbstractSocket_State(const QAbstractSocket* self);
int QAbstractSocket_Error(const QAbstractSocket* self);
void QAbstractSocket_Close(QAbstractSocket* self);
bool QAbstractSocket_IsSequential(const QAbstractSocket* self);
bool QAbstractSocket_Flush(QAbstractSocket* self);
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs);
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_SetProxy(QAbstractSocket* self, const QNetworkProxy* networkProxy);
QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self);
libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self);
void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, const libqt_string tag);
void QAbstractSocket_HostFound(QAbstractSocket* self);
void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Connected(QAbstractSocket* self);
void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_Disconnected(QAbstractSocket* self);
void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1);
void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1);
void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, const QNetworkProxy* proxy, QAuthenticator* authenticator);
void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen);
long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize);
long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal);
libqt_string QAbstractSocket_Tr2(const char* s, const char* c);
libqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n);
bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port);
bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode);
void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseResume(QAbstractSocket* self);
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseBind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode);
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseDisconnectFromHost(QAbstractSocket* self);
void QAbstractSocket_OnBytesAvailable(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseBytesAvailable(const QAbstractSocket* self);
void QAbstractSocket_OnBytesToWrite(const QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseBytesToWrite(const QAbstractSocket* self);
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetReadBufferSize(QAbstractSocket* self, long long size);
void QAbstractSocket_OnSocketDescriptor(const QAbstractSocket* self, intptr_t slot);
intptr_t QAbstractSocket_QBaseSocketDescriptor(const QAbstractSocket* self);
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetSocketOption(QAbstractSocket* self, int option, const QVariant* value);
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot);
QVariant* QAbstractSocket_QBaseSocketOption(QAbstractSocket* self, int option);
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseClose(QAbstractSocket* self);
void QAbstractSocket_OnIsSequential(const QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseIsSequential(const QAbstractSocket* self);
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseWaitForConnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseWaitForReadyRead(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseWaitForBytesWritten(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot);
bool QAbstractSocket_QBaseWaitForDisconnected(QAbstractSocket* self, int msecs);
void QAbstractSocket_OnReadData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseReadData(QAbstractSocket* self, char* data, long long maxlen);
void QAbstractSocket_OnReadLineData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseReadLineData(QAbstractSocket* self, char* data, long long maxlen);
void QAbstractSocket_OnSkipData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseSkipData(QAbstractSocket* self, long long maxSize);
void QAbstractSocket_OnWriteData(QAbstractSocket* self, intptr_t slot);
long long QAbstractSocket_QBaseWriteData(QAbstractSocket* self, const char* data, long long lenVal);
void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state);
void QAbstractSocket_OnSetSocketState(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetSocketState(QAbstractSocket* self, int state);
void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError);
void QAbstractSocket_OnSetSocketError(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetSocketError(QAbstractSocket* self, int socketError);
void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_OnSetLocalPort(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetLocalPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_OnSetLocalAddress(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_OnSetPeerPort(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetPeerPort(QAbstractSocket* self, uint16_t port);
void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_OnSetPeerAddress(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name);
void QAbstractSocket_OnSetPeerName(QAbstractSocket* self, intptr_t slot);
void QAbstractSocket_QBaseSetPeerName(QAbstractSocket* self, const libqt_string name);
void QAbstractSocket_Delete(QAbstractSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
