#pragma once
#ifndef QNETWORKREPLY_H_C_LIB
#define QNETWORKREPLY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QIODevice QIODevice;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif







libqt_string QNetworkReply_Tr(const char* s);
void QNetworkReply_Close(QNetworkReply* self);
bool QNetworkReply_IsSequential(const QNetworkReply* self);
long long QNetworkReply_ReadBufferSize(const QNetworkReply* self);
void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size);
QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self);
int QNetworkReply_Operation(const QNetworkReply* self);
QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self);
int QNetworkReply_Error(const QNetworkReply* self);
bool QNetworkReply_IsFinished(const QNetworkReply* self);
bool QNetworkReply_IsRunning(const QNetworkReply* self);
QUrl* QNetworkReply_Url(const QNetworkReply* self);
QVariant* QNetworkReply_Header(const QNetworkReply* self, int header);
bool QNetworkReply_HasRawHeader(const QNetworkReply* self, libqt_string headerName);
libqt_list QNetworkReply_RawHeaderList(const QNetworkReply* self);
libqt_string QNetworkReply_RawHeader(const QNetworkReply* self, libqt_string headerName);
libqt_list QNetworkReply_RawHeaderPairs(const QNetworkReply* self);
QHttpHeaders* QNetworkReply_Headers(const QNetworkReply* self);
QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code);
QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self);
void QNetworkReply_SetSslConfiguration(QNetworkReply* self, const QSslConfiguration* configuration);
void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, const libqt_list errors);
void QNetworkReply_Abort(QNetworkReply* self);
void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self);
void QNetworkReply_SocketStartedConnecting(QNetworkReply* self);
void QNetworkReply_Connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RequestSent(QNetworkReply* self);
void QNetworkReply_Connect_RequestSent(QNetworkReply* self, intptr_t slot);
void QNetworkReply_MetaDataChanged(QNetworkReply* self);
void QNetworkReply_Connect_MetaDataChanged(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Finished(QNetworkReply* self);
void QNetworkReply_Connect_Finished(QNetworkReply* self, intptr_t slot);
void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1);
void QNetworkReply_Connect_ErrorOccurred(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Encrypted(QNetworkReply* self);
void QNetworkReply_Connect_Encrypted(QNetworkReply* self, intptr_t slot);
void QNetworkReply_SslErrors(QNetworkReply* self, const libqt_list errors);
void QNetworkReply_Connect_SslErrors(QNetworkReply* self, intptr_t slot);
void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Redirected(QNetworkReply* self, const QUrl* url);
void QNetworkReply_Connect_Redirected(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RedirectAllowed(QNetworkReply* self);
void QNetworkReply_Connect_RedirectAllowed(QNetworkReply* self, intptr_t slot);
void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal);
void QNetworkReply_Connect_UploadProgress(QNetworkReply* self, intptr_t slot);
void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal);
void QNetworkReply_Connect_DownloadProgress(QNetworkReply* self, intptr_t slot);
long long QNetworkReply_WriteData(QNetworkReply* self, const char* data, long long lenVal);
void QNetworkReply_SslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1);
void QNetworkReply_SetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation);
void QNetworkReply_IgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1);
libqt_string QNetworkReply_Tr2(const char* s, const char* c);
libqt_string QNetworkReply_Tr3(const char* s, const char* c, int n);
void QNetworkReply_OnClose(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseClose(QNetworkReply* self);
void QNetworkReply_OnIsSequential(const QNetworkReply* self, intptr_t slot);
bool QNetworkReply_QBaseIsSequential(const QNetworkReply* self);
void QNetworkReply_OnSetReadBufferSize(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetReadBufferSize(QNetworkReply* self, long long size);
void QNetworkReply_OnAbort(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseAbort(QNetworkReply* self);
void QNetworkReply_OnIgnoreSslErrors2(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseIgnoreSslErrors2(QNetworkReply* self);
void QNetworkReply_OnWriteData(QNetworkReply* self, intptr_t slot);
long long QNetworkReply_QBaseWriteData(QNetworkReply* self, const char* data, long long lenVal);
void QNetworkReply_OnSslConfigurationImplementation(const QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1);
void QNetworkReply_OnSetSslConfigurationImplementation(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation);
void QNetworkReply_OnIgnoreSslErrorsImplementation(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseIgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1);
void QNetworkReply_SetOperation(QNetworkReply* self, int operation);
void QNetworkReply_OnSetOperation(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetOperation(QNetworkReply* self, int operation);
void QNetworkReply_SetRequest(QNetworkReply* self, const QNetworkRequest* request);
void QNetworkReply_OnSetRequest(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetRequest(QNetworkReply* self, const QNetworkRequest* request);
void QNetworkReply_SetError(QNetworkReply* self, int errorCode, const libqt_string errorString);
void QNetworkReply_OnSetError(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetError(QNetworkReply* self, int errorCode, const libqt_string errorString);
void QNetworkReply_SetFinished(QNetworkReply* self, bool finished);
void QNetworkReply_OnSetFinished(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetFinished(QNetworkReply* self, bool finished);
void QNetworkReply_SetUrl(QNetworkReply* self, const QUrl* url);
void QNetworkReply_OnSetUrl(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetUrl(QNetworkReply* self, const QUrl* url);
void QNetworkReply_SetHeader(QNetworkReply* self, int header, const QVariant* value);
void QNetworkReply_OnSetHeader(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetHeader(QNetworkReply* self, int header, const QVariant* value);
void QNetworkReply_SetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value);
void QNetworkReply_OnSetRawHeader(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value);
void QNetworkReply_SetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders);
void QNetworkReply_OnSetHeaders(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders);
void QNetworkReply_SetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value);
void QNetworkReply_OnSetWellKnownHeader(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value);
void QNetworkReply_SetAttribute(QNetworkReply* self, int code, const QVariant* value);
void QNetworkReply_OnSetAttribute(QNetworkReply* self, intptr_t slot);
void QNetworkReply_QBaseSetAttribute(QNetworkReply* self, int code, const QVariant* value);
void QNetworkReply_Delete(QNetworkReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
