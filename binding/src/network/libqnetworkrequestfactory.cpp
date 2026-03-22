#include <QByteArray>
#include <QDebug>
#include <QHttpHeaders>
#include <QNetworkRequest>
#include <QNetworkRequestFactory>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QUrlQuery>
#include <QVariant>
#include <qnetworkrequestfactory.h>
#include "libqnetworkrequestfactory.h"
#include "libqnetworkrequestfactory.hxx"

QNetworkRequestFactory* QNetworkRequestFactory_new() {
	 return new QNetworkRequestFactory();
}

QNetworkRequestFactory* QNetworkRequestFactory_new2(const QUrl* baseUrl) {
	 return new QNetworkRequestFactory(*baseUrl);
}

QNetworkRequestFactory* QNetworkRequestFactory_new3(const QNetworkRequestFactory* other) {
	 return new QNetworkRequestFactory(*other);
}

void QNetworkRequestFactory_OperatorAssign(QNetworkRequestFactory* self, const QNetworkRequestFactory* other) {
	self->operator=(*other);
}

void QNetworkRequestFactory_Swap(QNetworkRequestFactory* self, QNetworkRequestFactory* other) {
	self->swap(*other);
}

QUrl* QNetworkRequestFactory_BaseUrl(const QNetworkRequestFactory* self) {
	return new QUrl(self->baseUrl());
}

void QNetworkRequestFactory_SetBaseUrl(QNetworkRequestFactory* self, const QUrl* url) {
	self->setBaseUrl(*url);
}

QSslConfiguration* QNetworkRequestFactory_SslConfiguration(const QNetworkRequestFactory* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkRequestFactory_SetSslConfiguration(QNetworkRequestFactory* self, const QSslConfiguration* configuration) {
	self->setSslConfiguration(*configuration);
}

QNetworkRequest* QNetworkRequestFactory_CreateRequest(const QNetworkRequestFactory* self) {
	return new QNetworkRequest(self->createRequest());
}

QNetworkRequest* QNetworkRequestFactory_CreateRequest2(const QNetworkRequestFactory* self, const QUrlQuery* query) {
	return new QNetworkRequest(self->createRequest(*query));
}

QNetworkRequest* QNetworkRequestFactory_CreateRequest3(const QNetworkRequestFactory* self, const libqt_string path) {
	return new QNetworkRequest(self->createRequest(QString::fromUtf8(path.data, path.len)));
}

QNetworkRequest* QNetworkRequestFactory_CreateRequest4(const QNetworkRequestFactory* self, const libqt_string path, const QUrlQuery* query) {
	return new QNetworkRequest(self->createRequest(QString::fromUtf8(path.data, path.len), *query));
}

void QNetworkRequestFactory_SetCommonHeaders(QNetworkRequestFactory* self, const QHttpHeaders* headers) {
	self->setCommonHeaders(*headers);
}

QHttpHeaders* QNetworkRequestFactory_CommonHeaders(const QNetworkRequestFactory* self) {
	return new QHttpHeaders(self->commonHeaders());
}

void QNetworkRequestFactory_ClearCommonHeaders(QNetworkRequestFactory* self) {
	self->clearCommonHeaders();
}

libqt_string QNetworkRequestFactory_BearerToken(const QNetworkRequestFactory* self) {
	QByteArray _qb = self->bearerToken();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkRequestFactory_SetBearerToken(QNetworkRequestFactory* self, const libqt_string token) {
	self->setBearerToken(QByteArray(token.data, token.len));
}

void QNetworkRequestFactory_ClearBearerToken(QNetworkRequestFactory* self) {
	self->clearBearerToken();
}

libqt_string QNetworkRequestFactory_UserName(const QNetworkRequestFactory* self) {
	QString _ret = self->userName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkRequestFactory_SetUserName(QNetworkRequestFactory* self, const libqt_string userName) {
	self->setUserName(QString::fromUtf8(userName.data, userName.len));
}

void QNetworkRequestFactory_ClearUserName(QNetworkRequestFactory* self) {
	self->clearUserName();
}

libqt_string QNetworkRequestFactory_Password(const QNetworkRequestFactory* self) {
	QString _ret = self->password();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkRequestFactory_SetPassword(QNetworkRequestFactory* self, const libqt_string password) {
	self->setPassword(QString::fromUtf8(password.data, password.len));
}

void QNetworkRequestFactory_ClearPassword(QNetworkRequestFactory* self) {
	self->clearPassword();
}

QUrlQuery* QNetworkRequestFactory_QueryParameters(const QNetworkRequestFactory* self) {
	return new QUrlQuery(self->queryParameters());
}

void QNetworkRequestFactory_SetQueryParameters(QNetworkRequestFactory* self, const QUrlQuery* query) {
	self->setQueryParameters(*query);
}

void QNetworkRequestFactory_ClearQueryParameters(QNetworkRequestFactory* self) {
	self->clearQueryParameters();
}

void QNetworkRequestFactory_SetPriority(QNetworkRequestFactory* self, int priority) {
	self->setPriority(static_cast<QNetworkRequest::Priority>(priority));
}

int QNetworkRequestFactory_Priority(const QNetworkRequestFactory* self) {
	return self->priority();
}

QVariant* QNetworkRequestFactory_Attribute(const QNetworkRequestFactory* self, int attribute) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(attribute)));
}

QVariant* QNetworkRequestFactory_Attribute2(const QNetworkRequestFactory* self, int attribute, const QVariant* defaultValue) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(attribute), *defaultValue));
}

void QNetworkRequestFactory_SetAttribute(QNetworkRequestFactory* self, int attribute, const QVariant* value) {
	self->setAttribute(static_cast<QNetworkRequest::Attribute>(attribute), *value);
}

void QNetworkRequestFactory_ClearAttribute(QNetworkRequestFactory* self, int attribute) {
	self->clearAttribute(static_cast<QNetworkRequest::Attribute>(attribute));
}

void QNetworkRequestFactory_ClearAttributes(QNetworkRequestFactory* self) {
	self->clearAttributes();
}

void QNetworkRequestFactory_Delete(QNetworkRequestFactory* self) {
    delete self;
}

