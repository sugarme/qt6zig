#include <QByteArray>
#include <QHttpHeaders>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkProxyQuery>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkproxy.h>
#include "libqnetworkproxy.h"
#include "libqnetworkproxy.hxx"

QNetworkProxyQuery* QNetworkProxyQuery_new() {
	 return new QNetworkProxyQuery();
}

QNetworkProxyQuery* QNetworkProxyQuery_new2(const QUrl* requestUrl) {
	 return new QNetworkProxyQuery(*requestUrl);
}

QNetworkProxyQuery* QNetworkProxyQuery_new3(const libqt_string hostname, int port) {
	 return new QNetworkProxyQuery(QString::fromUtf8(hostname.data, hostname.len), port);
}

QNetworkProxyQuery* QNetworkProxyQuery_new4(uint16_t bindPort) {
	 return new QNetworkProxyQuery(bindPort);
}

QNetworkProxyQuery* QNetworkProxyQuery_new5(const QNetworkProxyQuery* other) {
	 return new QNetworkProxyQuery(*other);
}

QNetworkProxyQuery* QNetworkProxyQuery_new6(const QUrl* requestUrl, int queryType) {
	 return new QNetworkProxyQuery(*requestUrl, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new7(const libqt_string hostname, int port, const libqt_string protocolTag) {
	 return new QNetworkProxyQuery(QString::fromUtf8(hostname.data, hostname.len), port, QString::fromUtf8(protocolTag.data, protocolTag.len));
}

QNetworkProxyQuery* QNetworkProxyQuery_new8(const libqt_string hostname, int port, const libqt_string protocolTag, int queryType) {
	 return new QNetworkProxyQuery(QString::fromUtf8(hostname.data, hostname.len), port, QString::fromUtf8(protocolTag.data, protocolTag.len), static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new9(uint16_t bindPort, const libqt_string protocolTag) {
	 return new QNetworkProxyQuery(bindPort, QString::fromUtf8(protocolTag.data, protocolTag.len));
}

QNetworkProxyQuery* QNetworkProxyQuery_new10(uint16_t bindPort, const libqt_string protocolTag, int queryType) {
	 return new QNetworkProxyQuery(bindPort, QString::fromUtf8(protocolTag.data, protocolTag.len), static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

void QNetworkProxyQuery_OperatorAssign(QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
	self->operator=(*other);
}

void QNetworkProxyQuery_Swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
	self->swap(*other);
}

bool QNetworkProxyQuery_OperatorEqual(const QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
	return self->operator==(*other);
}

bool QNetworkProxyQuery_OperatorNotEqual(const QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
	return self->operator!=(*other);
}

int QNetworkProxyQuery_QueryType(const QNetworkProxyQuery* self) {
	return self->queryType();
}

void QNetworkProxyQuery_SetQueryType(QNetworkProxyQuery* self, int typeVal) {
	self->setQueryType(static_cast<QNetworkProxyQuery::QueryType>(typeVal));
}

int QNetworkProxyQuery_PeerPort(const QNetworkProxyQuery* self) {
	return self->peerPort();
}

void QNetworkProxyQuery_SetPeerPort(QNetworkProxyQuery* self, int port) {
	self->setPeerPort(port);
}

libqt_string QNetworkProxyQuery_PeerHostName(const QNetworkProxyQuery* self) {
	QString _ret = self->peerHostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxyQuery_SetPeerHostName(QNetworkProxyQuery* self, const libqt_string hostname) {
	self->setPeerHostName(QString::fromUtf8(hostname.data, hostname.len));
}

int QNetworkProxyQuery_LocalPort(const QNetworkProxyQuery* self) {
	return self->localPort();
}

void QNetworkProxyQuery_SetLocalPort(QNetworkProxyQuery* self, int port) {
	self->setLocalPort(port);
}

libqt_string QNetworkProxyQuery_ProtocolTag(const QNetworkProxyQuery* self) {
	QString _ret = self->protocolTag();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxyQuery_SetProtocolTag(QNetworkProxyQuery* self, const libqt_string protocolTag) {
	self->setProtocolTag(QString::fromUtf8(protocolTag.data, protocolTag.len));
}

QUrl* QNetworkProxyQuery_Url(const QNetworkProxyQuery* self) {
	return new QUrl(self->url());
}

void QNetworkProxyQuery_SetUrl(QNetworkProxyQuery* self, const QUrl* url) {
	self->setUrl(*url);
}

void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self) {
    delete self;
}

QNetworkProxy* QNetworkProxy_new() {
	 return new QNetworkProxy();
}

QNetworkProxy* QNetworkProxy_new2(int typeVal) {
	 return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

QNetworkProxy* QNetworkProxy_new3(const QNetworkProxy* other) {
	 return new QNetworkProxy(*other);
}

QNetworkProxy* QNetworkProxy_new4(int typeVal, const libqt_string hostName) {
	 return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), QString::fromUtf8(hostName.data, hostName.len));
}

QNetworkProxy* QNetworkProxy_new5(int typeVal, const libqt_string hostName, uint16_t port) {
	 return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), QString::fromUtf8(hostName.data, hostName.len), port);
}

QNetworkProxy* QNetworkProxy_new6(int typeVal, const libqt_string hostName, uint16_t port, const libqt_string user) {
	 return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), QString::fromUtf8(hostName.data, hostName.len), port, QString::fromUtf8(user.data, user.len));
}

QNetworkProxy* QNetworkProxy_new7(int typeVal, const libqt_string hostName, uint16_t port, const libqt_string user, const libqt_string password) {
	 return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), QString::fromUtf8(hostName.data, hostName.len), port, QString::fromUtf8(user.data, user.len), QString::fromUtf8(password.data, password.len));
}

void QNetworkProxy_OperatorAssign(QNetworkProxy* self, const QNetworkProxy* other) {
	self->operator=(*other);
}

void QNetworkProxy_Swap(QNetworkProxy* self, QNetworkProxy* other) {
	self->swap(*other);
}

bool QNetworkProxy_OperatorEqual(const QNetworkProxy* self, const QNetworkProxy* other) {
	return self->operator==(*other);
}

bool QNetworkProxy_OperatorNotEqual(const QNetworkProxy* self, const QNetworkProxy* other) {
	return self->operator!=(*other);
}

void QNetworkProxy_SetType(QNetworkProxy* self, int typeVal) {
	self->setType(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

int QNetworkProxy_Type(const QNetworkProxy* self) {
	return self->type();
}

void QNetworkProxy_SetCapabilities(QNetworkProxy* self, int capab) {
	self->setCapabilities(static_cast<QFlags<QNetworkProxy::Capability>>(capab));
}

int QNetworkProxy_Capabilities(const QNetworkProxy* self) {
	return self->capabilities();
}

bool QNetworkProxy_IsCachingProxy(const QNetworkProxy* self) {
	return self->isCachingProxy();
}

bool QNetworkProxy_IsTransparentProxy(const QNetworkProxy* self) {
	return self->isTransparentProxy();
}

void QNetworkProxy_SetUser(QNetworkProxy* self, const libqt_string userName) {
	self->setUser(QString::fromUtf8(userName.data, userName.len));
}

libqt_string QNetworkProxy_User(const QNetworkProxy* self) {
	QString _ret = self->user();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxy_SetPassword(QNetworkProxy* self, const libqt_string password) {
	self->setPassword(QString::fromUtf8(password.data, password.len));
}

libqt_string QNetworkProxy_Password(const QNetworkProxy* self) {
	QString _ret = self->password();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxy_SetHostName(QNetworkProxy* self, const libqt_string hostName) {
	self->setHostName(QString::fromUtf8(hostName.data, hostName.len));
}

libqt_string QNetworkProxy_HostName(const QNetworkProxy* self) {
	QString _ret = self->hostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxy_SetPort(QNetworkProxy* self, uint16_t port) {
	self->setPort(port);
}

uint16_t QNetworkProxy_Port(const QNetworkProxy* self) {
	return self->port();
}

void QNetworkProxy_SetApplicationProxy(const QNetworkProxy* proxy) {
	QNetworkProxy::setApplicationProxy(*proxy);
}

QNetworkProxy* QNetworkProxy_ApplicationProxy() {
	return new QNetworkProxy(QNetworkProxy::applicationProxy());
}

QHttpHeaders* QNetworkProxy_Headers(const QNetworkProxy* self) {
	return new QHttpHeaders(self->headers());
}

void QNetworkProxy_SetHeaders(QNetworkProxy* self, const QHttpHeaders* newHeaders) {
	self->setHeaders(*newHeaders);
}

QVariant* QNetworkProxy_Header(const QNetworkProxy* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkProxy_SetHeader(QNetworkProxy* self, int header, const QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkProxy_HasRawHeader(const QNetworkProxy* self, const libqt_string headerName) {
	return self->hasRawHeader(QByteArray(headerName.data, headerName.len));
}

libqt_list QNetworkProxy_RawHeaderList(const QNetworkProxy* self) {
	return self->rawHeaderList();
}

libqt_string QNetworkProxy_RawHeader(const QNetworkProxy* self, const libqt_string headerName) {
	QByteArray _qb = self->rawHeader(QByteArray(headerName.data, headerName.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkProxy_SetRawHeader(QNetworkProxy* self, const libqt_string headerName, const libqt_string value) {
	self->setRawHeader(QByteArray(headerName.data, headerName.len), QByteArray(value.data, value.len));
}

void QNetworkProxy_Delete(QNetworkProxy* self) {
    delete self;
}

QNetworkProxyFactory* QNetworkProxyFactory_new() {
	 return new VirtualQNetworkProxyFactory();
}

QNetworkProxyFactory* QNetworkProxyFactory_new2(const QNetworkProxyFactory* param1) {
	 return new VirtualQNetworkProxyFactory(*param1);
}

libqt_list QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, const QNetworkProxyQuery* query) {
	return self->queryProxy(*query);
}

bool QNetworkProxyFactory_UsesSystemConfiguration() {
	return QNetworkProxyFactory::usesSystemConfiguration();
}

void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable) {
	QNetworkProxyFactory::setUseSystemConfiguration(enable);
}

void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory) {
	QNetworkProxyFactory::setApplicationProxyFactory(factory);
}

libqt_list QNetworkProxyFactory_ProxyForQuery(const QNetworkProxyQuery* query) {
	return QNetworkProxyFactory::proxyForQuery(*query);
}

libqt_list QNetworkProxyFactory_SystemProxyForQuery() {
	return QNetworkProxyFactory::systemProxyForQuery();
}

void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, const QNetworkProxyFactory* param1) {
	self->operator=(*param1);
}

libqt_list QNetworkProxyFactory_SystemProxyForQuery1(const QNetworkProxyQuery* query) {
	return QNetworkProxyFactory::systemProxyForQuery(*query);
}

// Base class handler implementation
libqt_list QNetworkProxyFactory_QBaseQueryProxy(QNetworkProxyFactory* self, const QNetworkProxyQuery* query) {
	auto* vqnetworkproxyfactory = dynamic_cast<VirtualQNetworkProxyFactory*>(self);
	if (vqnetworkproxyfactory && vqnetworkproxyfactory->isVirtualQNetworkProxyFactory) {
vqnetworkproxyfactory->setQNetworkProxyFactory_QueryProxy_IsBase(true);
	return vqnetworkproxyfactory->queryProxy(*query);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkProxyFactory_OnQueryProxy(QNetworkProxyFactory* self, intptr_t slot) {
	auto* vqnetworkproxyfactory = dynamic_cast<VirtualQNetworkProxyFactory*>(self);
	if (vqnetworkproxyfactory && vqnetworkproxyfactory->isVirtualQNetworkProxyFactory) {
vqnetworkproxyfactory->setQNetworkProxyFactory_QueryProxy_Callback(reinterpret_cast<VirtualQNetworkProxyFactory::QNetworkProxyFactory_QueryProxy_Callback>(slot));
}
}

void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self) {
    delete self;
}

