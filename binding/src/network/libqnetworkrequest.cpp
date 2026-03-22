#include <QByteArray>
#include <QHttp1Configuration>
#include <QHttp2Configuration>
#include <QHttpHeaders>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QVariant>
#include <qnetworkrequest.h>
#include "libqnetworkrequest.h"
#include "libqnetworkrequest.hxx"

QNetworkRequest* QNetworkRequest_new() {
	 return new QNetworkRequest();
}

QNetworkRequest* QNetworkRequest_new2(const QUrl* url) {
	 return new QNetworkRequest(*url);
}

QNetworkRequest* QNetworkRequest_new3(const QNetworkRequest* other) {
	 return new QNetworkRequest(*other);
}

void QNetworkRequest_OperatorAssign(QNetworkRequest* self, const QNetworkRequest* other) {
	self->operator=(*other);
}

void QNetworkRequest_Swap(QNetworkRequest* self, QNetworkRequest* other) {
	self->swap(*other);
}

bool QNetworkRequest_OperatorEqual(const QNetworkRequest* self, const QNetworkRequest* other) {
	return self->operator==(*other);
}

bool QNetworkRequest_OperatorNotEqual(const QNetworkRequest* self, const QNetworkRequest* other) {
	return self->operator!=(*other);
}

QUrl* QNetworkRequest_Url(const QNetworkRequest* self) {
	return new QUrl(self->url());
}

void QNetworkRequest_SetUrl(QNetworkRequest* self, const QUrl* url) {
	self->setUrl(*url);
}

QHttpHeaders* QNetworkRequest_Headers(const QNetworkRequest* self) {
	return new QHttpHeaders(self->headers());
}

void QNetworkRequest_SetHeaders(QNetworkRequest* self, const QHttpHeaders* newHeaders) {
	self->setHeaders(*newHeaders);
}

QVariant* QNetworkRequest_Header(const QNetworkRequest* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkRequest_SetHeader(QNetworkRequest* self, int header, const QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

libqt_list QNetworkRequest_RawHeaderList(const QNetworkRequest* self) {
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

void QNetworkRequest_SetRawHeader(QNetworkRequest* self, const libqt_string headerName, const libqt_string value) {
	self->setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(value.data, value.len));
}

QVariant* QNetworkRequest_Attribute(const QNetworkRequest* self, QInputMethodEvent__Attribute* code) {
	return new QVariant(self->attribute(*code));
}

void QNetworkRequest_SetAttribute(QNetworkRequest* self, QInputMethodEvent__Attribute* code, const QVariant* value) {
	self->setAttribute(*code, *value);
}

QSslConfiguration* QNetworkRequest_SslConfiguration(const QNetworkRequest* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkRequest_SetSslConfiguration(QNetworkRequest* self, const QSslConfiguration* configuration) {
	self->setSslConfiguration(*configuration);
}

void QNetworkRequest_SetOriginatingObject(QNetworkRequest* self, QObject* object) {
	self->setOriginatingObject(object);
}

QObject* QNetworkRequest_OriginatingObject(const QNetworkRequest* self) {
	return self->originatingObject();
}

int QNetworkRequest_Priority(const QNetworkRequest* self) {
	return self->priority();
}

void QNetworkRequest_SetPriority(QNetworkRequest* self, int priority) {
	self->setPriority(static_cast<QNetworkRequest::Priority>(priority));
}

int QNetworkRequest_MaximumRedirectsAllowed(const QNetworkRequest* self) {
	return self->maximumRedirectsAllowed();
}

void QNetworkRequest_SetMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed) {
	self->setMaximumRedirectsAllowed(maximumRedirectsAllowed);
}

libqt_string QNetworkRequest_PeerVerifyName(const QNetworkRequest* self) {
	QString _ret = self->peerVerifyName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkRequest_SetPeerVerifyName(QNetworkRequest* self, const libqt_string peerName) {
	self->setPeerVerifyName(QString::fromUtf8(peerName.data, peerName.len));
}

QHttp1Configuration* QNetworkRequest_Http1Configuration(const QNetworkRequest* self) {
	return new QHttp1Configuration(self->http1Configuration());
}

void QNetworkRequest_SetHttp1Configuration(QNetworkRequest* self, const QHttp1Configuration* configuration) {
	self->setHttp1Configuration(*configuration);
}

QHttp2Configuration* QNetworkRequest_Http2Configuration(const QNetworkRequest* self) {
	return new QHttp2Configuration(self->http2Configuration());
}

void QNetworkRequest_SetHttp2Configuration(QNetworkRequest* self, const QHttp2Configuration* configuration) {
	self->setHttp2Configuration(*configuration);
}

long long QNetworkRequest_DecompressedSafetyCheckThreshold(const QNetworkRequest* self) {
	return self->decompressedSafetyCheckThreshold();
}

void QNetworkRequest_SetDecompressedSafetyCheckThreshold(QNetworkRequest* self, long long threshold) {
	self->setDecompressedSafetyCheckThreshold(threshold);
}

int QNetworkRequest_TransferTimeout(const QNetworkRequest* self) {
	return self->transferTimeout();
}

void QNetworkRequest_SetTransferTimeout(QNetworkRequest* self, int timeout) {
	self->setTransferTimeout(timeout);
}

void QNetworkRequest_SetTransferTimeout2(QNetworkRequest* self) {
	self->setTransferTimeout();
}

QVariant* QNetworkRequest_Attribute2(const QNetworkRequest* self, QInputMethodEvent__Attribute* code, const QVariant* defaultValue) {
	return new QVariant(self->attribute(*code, *defaultValue));
}

void QNetworkRequest_Delete(QNetworkRequest* self) {
    delete self;
}

