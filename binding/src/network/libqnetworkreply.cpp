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

void QNetworkReply_Delete(QNetworkReply* self) {
    delete self;
}

