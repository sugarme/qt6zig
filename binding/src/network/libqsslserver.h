#pragma once
#ifndef QSSLSERVER_H_C_LIB
#define QSSLSERVER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslServer QSslServer;
typedef struct QSslSocket QSslSocket;
typedef struct QTcpServer QTcpServer;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QSslServer* QSslServer_new();
QSslServer* QSslServer_new2(QObject* parent);
libqt_string QSslServer_Tr(const char* s);
void QSslServer_SetSslConfiguration(QSslServer* self, const QSslConfiguration* sslConfiguration);
QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self);
void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout);
int QSslServer_HandshakeTimeout(const QSslServer* self);
void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, const libqt_list errors);
void QSslServer_Connect_SslErrors(QSslServer* self, intptr_t slot);
void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal);
void QSslServer_Connect_PeerVerifyError(QSslServer* self, intptr_t slot);
void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int errorVal);
void QSslServer_Connect_ErrorOccurred(QSslServer* self, intptr_t slot);
void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator);
void QSslServer_Connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot);
void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description);
void QSslServer_Connect_AlertSent(QSslServer* self, intptr_t slot);
void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description);
void QSslServer_Connect_AlertReceived(QSslServer* self, intptr_t slot);
void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal);
void QSslServer_Connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot);
void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket);
void QSslServer_Connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot);
void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket);
libqt_string QSslServer_Tr2(const char* s, const char* c);
libqt_string QSslServer_Tr3(const char* s, const char* c, int n);
void QSslServer_OnIncomingConnection(QSslServer* self, intptr_t slot);
void QSslServer_QBaseIncomingConnection(QSslServer* self, intptr_t socket);
void QSslServer_Delete(QSslServer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
