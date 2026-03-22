#include <QByteArray>
#include <QByteArrayView>
#include <QHttpHeaders>
#include <QIODevice>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QVariant>
#include <qnetworkreply.h>
#include "libqnetworkreply.h"
#include "libqnetworkreply.hxx"

libqt_string QNetworkReply_Tr(const char* s) {
	QString _ret = QNetworkReply::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkReply_Close(QNetworkReply* self) {
	self->close();
}

bool QNetworkReply_IsSequential(const QNetworkReply* self) {
	return self->isSequential();
}

long long QNetworkReply_ReadBufferSize(const QNetworkReply* self) {
	return self->readBufferSize();
}

void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size) {
	self->setReadBufferSize(size);
}

QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self) {
	return self->manager();
}

int QNetworkReply_Operation(const QNetworkReply* self) {
	return self->operation();
}

QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self) {
	return new QNetworkRequest(self->request());
}

int QNetworkReply_Error(const QNetworkReply* self) {
	return self->error();
}

bool QNetworkReply_IsFinished(const QNetworkReply* self) {
	return self->isFinished();
}

bool QNetworkReply_IsRunning(const QNetworkReply* self) {
	return self->isRunning();
}

QUrl* QNetworkReply_Url(const QNetworkReply* self) {
	return new QUrl(self->url());
}

QVariant* QNetworkReply_Header(const QNetworkReply* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

libqt_list QNetworkReply_RawHeaderList(const QNetworkReply* self) {
	auto _ret = self->rawHeaderList();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QNetworkReply_RawHeaderPairs(const QNetworkReply* self) {
	auto _ret = self->rawHeaderPairs();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QHttpHeaders* QNetworkReply_Headers(const QNetworkReply* self) {
	return new QHttpHeaders(self->headers());
}

QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code)));
}

QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkReply_SetSslConfiguration(QNetworkReply* self, const QSslConfiguration* configuration) {
	self->setSslConfiguration(*configuration);
}

void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, const libqt_list errors) {
	self->ignoreSslErrors(QList<QSslError>());
}

void QNetworkReply_Abort(QNetworkReply* self) {
	self->abort();
}

void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self) {
	self->ignoreSslErrors();
}

void QNetworkReply_SocketStartedConnecting(QNetworkReply* self) {
	self->socketStartedConnecting();
}

void QNetworkReply_Connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::socketStartedConnecting, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_RequestSent(QNetworkReply* self) {
	self->requestSent();
}

void QNetworkReply_Connect_RequestSent(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::requestSent, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_MetaDataChanged(QNetworkReply* self) {
	self->metaDataChanged();
}

void QNetworkReply_Connect_MetaDataChanged(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::metaDataChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_Finished(QNetworkReply* self) {
	self->finished();
}

void QNetworkReply_Connect_Finished(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1) {
	self->errorOccurred(static_cast<QNetworkReply::NetworkError>(param1));
}

void QNetworkReply_Connect_ErrorOccurred(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, int) = reinterpret_cast<void (*)(QNetworkReply*, int)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::errorOccurred, [self, slotFunc](QNetworkReply::NetworkError param1) {
	slotFunc(self, param1);
    });
}

void QNetworkReply_Encrypted(QNetworkReply* self) {
	self->encrypted();
}

void QNetworkReply_Connect_Encrypted(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::encrypted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_SslErrors(QNetworkReply* self, const libqt_list errors) {
	self->sslErrors(QList<QSslError>());
}

void QNetworkReply_Connect_SslErrors(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, libqt_list) = reinterpret_cast<void (*)(QNetworkReply*, libqt_list)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
	slotFunc(self, errors);
    });
}

void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
	slotFunc(self, authenticator);
    });
}

void QNetworkReply_Redirected(QNetworkReply* self, const QUrl* url) {
	self->redirected(*url);
}

void QNetworkReply_Connect_Redirected(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, const QUrl*) = reinterpret_cast<void (*)(QNetworkReply*, const QUrl*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::redirected, [self, slotFunc](const QUrl& url) {
	slotFunc(self, url);
    });
}

void QNetworkReply_RedirectAllowed(QNetworkReply* self) {
	self->redirectAllowed();
}

void QNetworkReply_Connect_RedirectAllowed(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*) = reinterpret_cast<void (*)(QNetworkReply*)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::redirectAllowed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal) {
	self->uploadProgress(bytesSent, bytesTotal);
}

void QNetworkReply_Connect_UploadProgress(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, long long, long long) = reinterpret_cast<void (*)(QNetworkReply*, long long, long long)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::uploadProgress, [self, slotFunc](qint64 bytesSent, qint64 bytesTotal) {
	slotFunc(self, bytesSent, bytesTotal);
    });
}

void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal) {
	self->downloadProgress(bytesReceived, bytesTotal);
}

void QNetworkReply_Connect_DownloadProgress(QNetworkReply* self, intptr_t slot) {
    void (*slotFunc)(QNetworkReply*, long long, long long) = reinterpret_cast<void (*)(QNetworkReply*, long long, long long)>(slot);
    QNetworkReply::connect(self, &QNetworkReply::downloadProgress, [self, slotFunc](qint64 bytesReceived, qint64 bytesTotal) {
	slotFunc(self, bytesReceived, bytesTotal);
    });
}

libqt_string QNetworkReply_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkReply::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkReply_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkReply::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QNetworkReply_QBaseClose(QNetworkReply* self) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_Close_IsBase(true);
	vqnetworkreply->close();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnClose(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_Close_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkReply_QBaseIsSequential(const QNetworkReply* self) {
	auto* vqnetworkreply = dynamic_cast<const VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IsSequential_IsBase(true);
	return vqnetworkreply->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnIsSequential(const QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<const VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IsSequential_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetReadBufferSize(QNetworkReply* self, long long size) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetReadBufferSize_IsBase(true);
	vqnetworkreply->setReadBufferSize(size);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetReadBufferSize(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetReadBufferSize_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetReadBufferSize_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkReply_QBaseAbort(QNetworkReply* self) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_Abort_IsBase(true);
	vqnetworkreply->abort();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnAbort(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_Abort_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_Abort_Callback>(slot));
}
}

// Base class handler implementation
void QNetworkReply_QBaseIgnoreSslErrors2(QNetworkReply* self) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IgnoreSslErrors2_IsBase(true);
	vqnetworkreply->ignoreSslErrors();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnIgnoreSslErrors2(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IgnoreSslErrors2_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_IgnoreSslErrors2_Callback>(slot));
}
}

// Derived class handler implementation
long long QNetworkReply_WriteData(QNetworkReply* self, const char* data, long long lenVal) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	return vqnetworkreply->writeData(data, lenVal);
	} else {
	return self->QNetworkReply::writeData(data, lenVal);
}
}

// Base class handler implementation
long long QNetworkReply_QBaseWriteData(QNetworkReply* self, const char* data, long long lenVal) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_WriteData_IsBase(true);
	return vqnetworkreply->writeData(data, lenVal);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnWriteData(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_WriteData_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_WriteData_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1) {
	auto* vqnetworkreply = dynamic_cast<const VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->sslConfigurationImplementation(*param1);
	} else {
	self->QNetworkReply::sslConfigurationImplementation(*param1);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1) {
	auto* vqnetworkreply = dynamic_cast<const VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SslConfigurationImplementation_IsBase(true);
	vqnetworkreply->sslConfigurationImplementation(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSslConfigurationImplementation(const QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<const VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SslConfigurationImplementation_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SslConfigurationImplementation_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setSslConfigurationImplementation(*sslConfigurationImplementation);
	} else {
	self->QNetworkReply::setSslConfigurationImplementation(*sslConfigurationImplementation);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetSslConfigurationImplementation_IsBase(true);
	vqnetworkreply->setSslConfigurationImplementation(*sslConfigurationImplementation);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetSslConfigurationImplementation(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetSslConfigurationImplementation_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetSslConfigurationImplementation_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_IgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->ignoreSslErrorsImplementation(QList<QSslError>());
	} else {
	self->QNetworkReply::ignoreSslErrorsImplementation(QList<QSslError>());
}
}

// Base class handler implementation
void QNetworkReply_QBaseIgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IgnoreSslErrorsImplementation_IsBase(true);
	vqnetworkreply->ignoreSslErrorsImplementation(QList<QSslError>());
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnIgnoreSslErrorsImplementation(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_IgnoreSslErrorsImplementation_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_IgnoreSslErrorsImplementation_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetOperation(QNetworkReply* self, int operation) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setOperation(static_cast<QNetworkAccessManager::Operation>(operation));
	} else {
	self->QNetworkReply::setOperation(static_cast<QNetworkAccessManager::Operation>(operation));
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetOperation(QNetworkReply* self, int operation) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetOperation_IsBase(true);
	vqnetworkreply->setOperation(static_cast<QNetworkAccessManager::Operation>(operation));
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetOperation(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetOperation_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetOperation_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetRequest(QNetworkReply* self, const QNetworkRequest* request) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setRequest(*request);
	} else {
	self->QNetworkReply::setRequest(*request);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetRequest(QNetworkReply* self, const QNetworkRequest* request) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetRequest_IsBase(true);
	vqnetworkreply->setRequest(*request);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetRequest(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetRequest_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetRequest_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetError(QNetworkReply* self, int errorCode, const libqt_string errorString) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setError(static_cast<QNetworkReply::NetworkError>(errorCode), QString::fromUtf8(errorString.data, errorString.len));
	} else {
	self->QNetworkReply::setError(static_cast<QNetworkReply::NetworkError>(errorCode), QString::fromUtf8(errorString.data, errorString.len));
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetError(QNetworkReply* self, int errorCode, const libqt_string errorString) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetError_IsBase(true);
	vqnetworkreply->setError(static_cast<QNetworkReply::NetworkError>(errorCode), QString::fromUtf8(errorString.data, errorString.len));
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetError(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetError_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetError_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetFinished(QNetworkReply* self, bool finished) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setFinished(finished);
	} else {
	self->QNetworkReply::setFinished(finished);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetFinished(QNetworkReply* self, bool finished) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetFinished_IsBase(true);
	vqnetworkreply->setFinished(finished);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetFinished(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetFinished_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetFinished_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetUrl(QNetworkReply* self, const QUrl* url) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setUrl(*url);
	} else {
	self->QNetworkReply::setUrl(*url);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetUrl(QNetworkReply* self, const QUrl* url) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetUrl_IsBase(true);
	vqnetworkreply->setUrl(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetUrl(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetUrl_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetUrl_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetHeader(QNetworkReply* self, int header, const QVariant* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
	} else {
	self->QNetworkReply::setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetHeader(QNetworkReply* self, int header, const QVariant* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetHeader_IsBase(true);
	vqnetworkreply->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetHeader(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetHeader_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetHeader_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(value.data, value.len));
	} else {
	self->QNetworkReply::setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(value.data, value.len));
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetRawHeader_IsBase(true);
	vqnetworkreply->setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(value.data, value.len));
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetRawHeader(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetRawHeader_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetRawHeader_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setHeaders(*newHeaders);
	} else {
	self->QNetworkReply::setHeaders(*newHeaders);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetHeaders_IsBase(true);
	vqnetworkreply->setHeaders(*newHeaders);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetHeaders(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetHeaders_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetHeaders_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setWellKnownHeader(static_cast<QHttpHeaders::WellKnownHeader>(name), *value);
	} else {
	self->QNetworkReply::setWellKnownHeader(static_cast<QHttpHeaders::WellKnownHeader>(name), *value);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetWellKnownHeader_IsBase(true);
	vqnetworkreply->setWellKnownHeader(static_cast<QHttpHeaders::WellKnownHeader>(name), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetWellKnownHeader(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetWellKnownHeader_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetWellKnownHeader_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkReply_SetAttribute(QNetworkReply* self, int code, const QVariant* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
	vqnetworkreply->setAttribute(static_cast<QNetworkRequest::Attribute>(code), *value);
	} else {
	self->QNetworkReply::setAttribute(static_cast<QNetworkRequest::Attribute>(code), *value);
}
}

// Base class handler implementation
void QNetworkReply_QBaseSetAttribute(QNetworkReply* self, int code, const QVariant* value) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetAttribute_IsBase(true);
	vqnetworkreply->setAttribute(static_cast<QNetworkRequest::Attribute>(code), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkReply_OnSetAttribute(QNetworkReply* self, intptr_t slot) {
	auto* vqnetworkreply = dynamic_cast<VirtualQNetworkReply*>(self);
	if (vqnetworkreply && vqnetworkreply->isVirtualQNetworkReply) {
vqnetworkreply->setQNetworkReply_SetAttribute_Callback(reinterpret_cast<VirtualQNetworkReply::QNetworkReply_SetAttribute_Callback>(slot));
}
}

void QNetworkReply_Delete(QNetworkReply* self) {
    delete self;
}

