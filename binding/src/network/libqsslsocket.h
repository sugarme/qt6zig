#pragma once
#ifndef QSSLSOCKET_H_C_LIB
#define QSSLSOCKET_H_C_LIB

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
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslSocket QSslSocket;
typedef struct QTcpSocket QTcpSocket;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QSslSocket* QSslSocket_new();
QSslSocket* QSslSocket_new2(QObject* parent);
libqt_string QSslSocket_Tr(const char* s);
void QSslSocket_Resume(QSslSocket* self);
void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, const libqt_string hostName, uint16_t port);
void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName);
bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_ConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_DisconnectFromHost(QSslSocket* self);
void QSslSocket_SetSocketOption(QSslSocket* self, int option, const QVariant* value);
QVariant* QSslSocket_SocketOption(QSslSocket* self, int option);
int QSslSocket_Mode(const QSslSocket* self);
bool QSslSocket_IsEncrypted(const QSslSocket* self);
int QSslSocket_Protocol(const QSslSocket* self);
void QSslSocket_SetProtocol(QSslSocket* self, int protocol);
int QSslSocket_PeerVerifyMode(const QSslSocket* self);
void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode);
int QSslSocket_PeerVerifyDepth(const QSslSocket* self);
void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth);
libqt_string QSslSocket_PeerVerifyName(const QSslSocket* self);
void QSslSocket_SetPeerVerifyName(QSslSocket* self, const libqt_string hostName);
long long QSslSocket_BytesAvailable(const QSslSocket* self);
long long QSslSocket_BytesToWrite(const QSslSocket* self);
bool QSslSocket_CanReadLine(const QSslSocket* self);
void QSslSocket_Close(QSslSocket* self);
bool QSslSocket_AtEnd(const QSslSocket* self);
void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size);
long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self);
long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self);
QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self);
void QSslSocket_SetSslConfiguration(QSslSocket* self, const QSslConfiguration* config);
void QSslSocket_SetLocalCertificateChain(QSslSocket* self, const libqt_list localChain);
libqt_list QSslSocket_LocalCertificateChain(const QSslSocket* self);
void QSslSocket_SetLocalCertificate(QSslSocket* self, const QSslCertificate* certificate);
void QSslSocket_SetLocalCertificate2(QSslSocket* self, const libqt_string fileName);
QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self);
QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self);
libqt_list QSslSocket_PeerCertificateChain(const QSslSocket* self);
QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self);
int QSslSocket_SessionProtocol(const QSslSocket* self);
libqt_list QSslSocket_OcspResponses(const QSslSocket* self);
void QSslSocket_SetPrivateKey(QSslSocket* self, const QSslKey* key);
void QSslSocket_SetPrivateKey2(QSslSocket* self, const libqt_string fileName);
QSslKey* QSslSocket_PrivateKey(const QSslSocket* self);
bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs);
bool QSslSocket_WaitForEncrypted(QSslSocket* self);
bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs);
bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs);
bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs);
libqt_list QSslSocket_SslHandshakeErrors(const QSslSocket* self);
bool QSslSocket_SupportsSsl();
long QSslSocket_SslLibraryVersionNumber();
libqt_string QSslSocket_SslLibraryVersionString();
long QSslSocket_SslLibraryBuildVersionNumber();
libqt_string QSslSocket_SslLibraryBuildVersionString();
libqt_list QSslSocket_AvailableBackends();
libqt_string QSslSocket_ActiveBackend();
bool QSslSocket_SetActiveBackend(const libqt_string backendName);
libqt_list QSslSocket_SupportedProtocols();
bool QSslSocket_IsProtocolSupported(int protocol);
libqt_list QSslSocket_ImplementedClasses();
bool QSslSocket_IsClassImplemented(int cl);
libqt_list QSslSocket_SupportedFeatures();
bool QSslSocket_IsFeatureSupported(int feat);
void QSslSocket_IgnoreSslErrors(QSslSocket* self, const libqt_list errors);
void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self);
void QSslSocket_StartClientEncryption(QSslSocket* self);
void QSslSocket_StartServerEncryption(QSslSocket* self);
void QSslSocket_IgnoreSslErrors2(QSslSocket* self);
void QSslSocket_Encrypted(QSslSocket* self);
void QSslSocket_Connect_Encrypted(QSslSocket* self, intptr_t slot);
void QSslSocket_PeerVerifyError(QSslSocket* self, const QSslError* errorVal);
void QSslSocket_Connect_PeerVerifyError(QSslSocket* self, intptr_t slot);
void QSslSocket_SslErrors(QSslSocket* self, const libqt_list errors);
void QSslSocket_Connect_SslErrors(QSslSocket* self, intptr_t slot);
void QSslSocket_ModeChanged(QSslSocket* self, int newMode);
void QSslSocket_Connect_ModeChanged(QSslSocket* self, intptr_t slot);
void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes);
void QSslSocket_Connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot);
void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QSslSocket_Connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot);
void QSslSocket_NewSessionTicketReceived(QSslSocket* self);
void QSslSocket_Connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, const libqt_string description);
void QSslSocket_Connect_AlertSent(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, const libqt_string description);
void QSslSocket_Connect_AlertReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, const QSslError* errorVal);
void QSslSocket_Connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot);
long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen);
long long QSslSocket_SkipData(QSslSocket* self, long long maxSize);
long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal);
libqt_string QSslSocket_Tr2(const char* s, const char* c);
libqt_string QSslSocket_Tr3(const char* s, const char* c, int n);
void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode);
void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol);
void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode);
void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode, int protocol);
void QSslSocket_SetLocalCertificate22(QSslSocket* self, const libqt_string fileName, int format);
void QSslSocket_SetPrivateKey22(QSslSocket* self, const libqt_string fileName, int algorithm);
void QSslSocket_SetPrivateKey3(QSslSocket* self, const libqt_string fileName, int algorithm, int format);
void QSslSocket_SetPrivateKey4(QSslSocket* self, const libqt_string fileName, int algorithm, int format, const libqt_string passPhrase);
bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs);
libqt_list QSslSocket_SupportedProtocols1(const libqt_string backendName);
bool QSslSocket_IsProtocolSupported2(int protocol, const libqt_string backendName);
libqt_list QSslSocket_ImplementedClasses1(const libqt_string backendName);
bool QSslSocket_IsClassImplemented2(int cl, const libqt_string backendName);
libqt_list QSslSocket_SupportedFeatures1(const libqt_string backendName);
bool QSslSocket_IsFeatureSupported2(int feat, const libqt_string backendName);
void QSslSocket_OnResume(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseResume(QSslSocket* self);
void QSslSocket_OnSetSocketDescriptor(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseSetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_OnConnectToHost(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_OnDisconnectFromHost(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseDisconnectFromHost(QSslSocket* self);
void QSslSocket_OnSetSocketOption(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetSocketOption(QSslSocket* self, int option, const QVariant* value);
void QSslSocket_OnSocketOption(QSslSocket* self, intptr_t slot);
QVariant* QSslSocket_QBaseSocketOption(QSslSocket* self, int option);
void QSslSocket_OnBytesAvailable(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseBytesAvailable(const QSslSocket* self);
void QSslSocket_OnBytesToWrite(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseBytesToWrite(const QSslSocket* self);
void QSslSocket_OnCanReadLine(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseCanReadLine(const QSslSocket* self);
void QSslSocket_OnClose(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseClose(QSslSocket* self);
void QSslSocket_OnAtEnd(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseAtEnd(const QSslSocket* self);
void QSslSocket_OnSetReadBufferSize(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetReadBufferSize(QSslSocket* self, long long size);
void QSslSocket_OnWaitForConnected(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForConnected(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForReadyRead(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForReadyRead(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForBytesWritten(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForBytesWritten(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForDisconnected(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForDisconnected(QSslSocket* self, int msecs);
void QSslSocket_OnReadData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseReadData(QSslSocket* self, char* data, long long maxlen);
void QSslSocket_OnSkipData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseSkipData(QSslSocket* self, long long maxSize);
void QSslSocket_OnWriteData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseWriteData(QSslSocket* self, const char* data, long long lenVal);
void QSslSocket_Delete(QSslSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
