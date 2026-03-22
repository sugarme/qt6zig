#pragma once
#ifndef QDTLS_H_C_LIB
#define QDTLS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters)
typedef QDtlsClientVerifier::GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
#endif
#else
typedef struct QDtls QDtls;
typedef struct QDtlsClientVerifier QDtlsClientVerifier;
typedef struct QDtlsClientVerifier__GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
typedef struct QHostAddress QHostAddress;
typedef struct QObject QObject;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QUdpSocket QUdpSocket;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif






QDtlsClientVerifier* QDtlsClientVerifier_new();
QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent);
libqt_string QDtlsClientVerifier_Tr(const char* s);
bool QDtlsClientVerifier_SetCookieGeneratorParameters(QDtlsClientVerifier* self, const QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_CookieGeneratorParameters(const QDtlsClientVerifier* self);
bool QDtlsClientVerifier_VerifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, const libqt_string dgram, const QHostAddress* address, uint16_t port);
libqt_string QDtlsClientVerifier_VerifiedHello(const QDtlsClientVerifier* self);
unsigned char QDtlsClientVerifier_DtlsError(const QDtlsClientVerifier* self);
libqt_string QDtlsClientVerifier_DtlsErrorString(const QDtlsClientVerifier* self);
libqt_string QDtlsClientVerifier_Tr2(const char* s, const char* c);
libqt_string QDtlsClientVerifier_Tr3(const char* s, const char* c, int n);
void QDtlsClientVerifier_Delete(QDtlsClientVerifier* self);


QDtls* QDtls_new(int mode);
QDtls* QDtls_new2(int mode, QObject* parent);
libqt_string QDtls_Tr(const char* s);
bool QDtls_SetPeer(QDtls* self, const QHostAddress* address, uint16_t port);
bool QDtls_SetPeerVerificationName(QDtls* self, const libqt_string name);
QHostAddress* QDtls_PeerAddress(const QDtls* self);
uint16_t QDtls_PeerPort(const QDtls* self);
libqt_string QDtls_PeerVerificationName(const QDtls* self);
int QDtls_SslMode(const QDtls* self);
void QDtls_SetMtuHint(QDtls* self, uint16_t mtuHint);
uint16_t QDtls_MtuHint(const QDtls* self);
bool QDtls_SetCookieGeneratorParameters(QDtls* self, const QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtls_CookieGeneratorParameters(const QDtls* self);
bool QDtls_SetDtlsConfiguration(QDtls* self, const QSslConfiguration* configuration);
QSslConfiguration* QDtls_DtlsConfiguration(const QDtls* self);
int QDtls_HandshakeState(const QDtls* self);
bool QDtls_DoHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_HandleTimeout(QDtls* self, QUdpSocket* socket);
bool QDtls_ResumeHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_AbortHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_Shutdown(QDtls* self, QUdpSocket* socket);
bool QDtls_IsConnectionEncrypted(const QDtls* self);
QSslCipher* QDtls_SessionCipher(const QDtls* self);
int QDtls_SessionProtocol(const QDtls* self);
long long QDtls_WriteDatagramEncrypted(QDtls* self, QUdpSocket* socket, const libqt_string dgram);
libqt_string QDtls_DecryptDatagram(QDtls* self, QUdpSocket* socket, const libqt_string dgram);
unsigned char QDtls_DtlsError(const QDtls* self);
libqt_string QDtls_DtlsErrorString(const QDtls* self);
libqt_list QDtls_PeerVerificationErrors(const QDtls* self);
void QDtls_IgnoreVerificationErrors(QDtls* self, const libqt_list errorsToIgnore);
void QDtls_PskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator);
void QDtls_Connect_PskRequired(QDtls* self, intptr_t slot);
void QDtls_HandshakeTimeout(QDtls* self);
void QDtls_Connect_HandshakeTimeout(QDtls* self, intptr_t slot);
libqt_string QDtls_Tr2(const char* s, const char* c);
libqt_string QDtls_Tr3(const char* s, const char* c, int n);
bool QDtls_SetPeer3(QDtls* self, const QHostAddress* address, uint16_t port, const libqt_string verificationName);
bool QDtls_DoHandshake2(QDtls* self, QUdpSocket* socket, const libqt_string dgram);
void QDtls_Delete(QDtls* self);

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new();
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, const libqt_string s);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(const QDtlsClientVerifier__GeneratorParameters* param1);
int QDtlsClientVerifier__GeneratorParameters_Hash(const QDtlsClientVerifier__GeneratorParameters* self);
void QDtlsClientVerifier__GeneratorParameters_SetHash(QDtlsClientVerifier__GeneratorParameters* self, int hash);
libqt_string QDtlsClientVerifier__GeneratorParameters_Secret(const QDtlsClientVerifier__GeneratorParameters* self);
void QDtlsClientVerifier__GeneratorParameters_SetSecret(QDtlsClientVerifier__GeneratorParameters* self, libqt_string secret);
void QDtlsClientVerifier__GeneratorParameters_OperatorAssign(QDtlsClientVerifier__GeneratorParameters* self, const QDtlsClientVerifier__GeneratorParameters* param1);
void QDtlsClientVerifier__GeneratorParameters_Delete(QDtlsClientVerifier__GeneratorParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
