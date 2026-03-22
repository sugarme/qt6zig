#include <QAbstractNetworkCache>
#include <QAuthenticator>
#include <QByteArray>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qnetworkaccessmanager.h>
#include "libqnetworkaccessmanager.h"
#include "libqnetworkaccessmanager.hxx"

QNetworkAccessManager* QNetworkAccessManager_new() {
	 return new VirtualQNetworkAccessManager();
}

QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent) {
	 return new VirtualQNetworkAccessManager(parent);
}

libqt_string QNetworkAccessManager_Tr(const char* s) {
	QString _ret = QNetworkAccessManager::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QNetworkAccessManager_SupportedSchemes(const QNetworkAccessManager* self) {
	auto _ret = self->supportedSchemes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QNetworkAccessManager_ClearAccessCache(QNetworkAccessManager* self) {
	self->clearAccessCache();
}

void QNetworkAccessManager_ClearConnectionCache(QNetworkAccessManager* self) {
	self->clearConnectionCache();
}

QNetworkProxy* QNetworkAccessManager_Proxy(const QNetworkAccessManager* self) {
	return new QNetworkProxy(self->proxy());
}

void QNetworkAccessManager_SetProxy(QNetworkAccessManager* self, const QNetworkProxy* proxy) {
	self->setProxy(*proxy);
}

QNetworkProxyFactory* QNetworkAccessManager_ProxyFactory(const QNetworkAccessManager* self) {
	return self->proxyFactory();
}

void QNetworkAccessManager_SetProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory) {
	self->setProxyFactory(factory);
}

QAbstractNetworkCache* QNetworkAccessManager_Cache(const QNetworkAccessManager* self) {
	return self->cache();
}

void QNetworkAccessManager_SetCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache) {
	self->setCache(cache);
}

QNetworkCookieJar* QNetworkAccessManager_CookieJar(const QNetworkAccessManager* self) {
	return self->cookieJar();
}

void QNetworkAccessManager_SetCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar) {
	self->setCookieJar(cookieJar);
}

void QNetworkAccessManager_SetStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled) {
	self->setStrictTransportSecurityEnabled(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityEnabled();
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled) {
	self->enableStrictTransportSecurityStore(enabled);
}

bool QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self) {
	return self->isStrictTransportSecurityStoreEnabled();
}

void QNetworkAccessManager_AddStrictTransportSecurityHosts(QNetworkAccessManager* self, const libqt_list knownHosts) {
	self->addStrictTransportSecurityHosts(QList<QHstsPolicy>());
}

libqt_list QNetworkAccessManager_StrictTransportSecurityHosts(const QNetworkAccessManager* self) {
	auto _ret = self->strictTransportSecurityHosts();
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

QNetworkReply* QNetworkAccessManager_Head(QNetworkAccessManager* self, const QNetworkRequest* request) {
	return self->head(*request);
}

QNetworkReply* QNetworkAccessManager_Get(QNetworkAccessManager* self, const QNetworkRequest* request) {
	return self->get(*request);
}

QNetworkReply* QNetworkAccessManager_Get2(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->get(*request, data);
}

QNetworkReply* QNetworkAccessManager_Get3(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->get(*request, QByteArray(data.data, data.len));
}

QNetworkReply* QNetworkAccessManager_Post(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->post(*request, data);
}

QNetworkReply* QNetworkAccessManager_Post2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->post(*request, QByteArray(data.data, data.len));
}

QNetworkReply* QNetworkAccessManager_Put(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
	return self->put(*request, data);
}

QNetworkReply* QNetworkAccessManager_Put2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
	return self->put(*request, QByteArray(data.data, data.len));
}

QNetworkReply* QNetworkAccessManager_DeleteResource(QNetworkAccessManager* self, const QNetworkRequest* request) {
	return self->deleteResource(*request);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb) {
	return self->sendCustomRequest(*request, QByteArray(verb.data, verb.len));
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, const libqt_string data) {
	return self->sendCustomRequest(*request, QByteArray(verb.data, verb.len), QByteArray(data.data, data.len));
}

QNetworkReply* QNetworkAccessManager_Post4(QNetworkAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->post(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_Put4(QNetworkAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* multiPart) {
	return self->put(*request, multiPart);
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest3(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, QHttpMultiPart* multiPart) {
	return self->sendCustomRequest(*request, QByteArray(verb.data, verb.len), multiPart);
}

void QNetworkAccessManager_ConnectToHostEncrypted(QNetworkAccessManager* self, const libqt_string hostName) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len));
}

void QNetworkAccessManager_ConnectToHostEncrypted2(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port, const QSslConfiguration* sslConfiguration, const libqt_string peerName) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, *sslConfiguration, QString::fromUtf8(peerName.data, peerName.len));
}

void QNetworkAccessManager_ConnectToHost(QNetworkAccessManager* self, const libqt_string hostName) {
	self->connectToHost(QString::fromUtf8(hostName.data, hostName.len));
}

void QNetworkAccessManager_SetRedirectPolicy(QNetworkAccessManager* self, int policy) {
	self->setRedirectPolicy(static_cast<QNetworkRequest::RedirectPolicy>(policy));
}

int QNetworkAccessManager_RedirectPolicy(const QNetworkAccessManager* self) {
	return self->redirectPolicy();
}

bool QNetworkAccessManager_AutoDeleteReplies(const QNetworkAccessManager* self) {
	return self->autoDeleteReplies();
}

void QNetworkAccessManager_SetAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete) {
	self->setAutoDeleteReplies(autoDelete);
}

int QNetworkAccessManager_TransferTimeout(const QNetworkAccessManager* self) {
	return self->transferTimeout();
}

void QNetworkAccessManager_SetTransferTimeout(QNetworkAccessManager* self, int timeout) {
	self->setTransferTimeout(timeout);
}

void QNetworkAccessManager_SetTransferTimeout2(QNetworkAccessManager* self) {
	self->setTransferTimeout();
}

void QNetworkAccessManager_ProxyAuthenticationRequired(QNetworkAccessManager* self, const QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QNetworkAccessManager_Connect_ProxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, const QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, const QNetworkProxy*, QAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
	slotFunc(self, proxy, authenticator);
    });
}

void QNetworkAccessManager_AuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator) {
	self->authenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_Connect_AuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::authenticationRequired, [self, slotFunc](QNetworkReply* reply, QAuthenticator* authenticator) {
	slotFunc(self, reply, authenticator);
    });
}

void QNetworkAccessManager_Finished(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->finished(reply);
}

void QNetworkAccessManager_Connect_Finished(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::finished, [self, slotFunc](QNetworkReply* reply) {
	slotFunc(self, reply);
    });
}

void QNetworkAccessManager_Encrypted(QNetworkAccessManager* self, QNetworkReply* reply) {
	self->encrypted(reply);
}

void QNetworkAccessManager_Connect_Encrypted(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::encrypted, [self, slotFunc](QNetworkReply* reply) {
	slotFunc(self, reply);
    });
}

void QNetworkAccessManager_SslErrors(QNetworkAccessManager* self, QNetworkReply* reply, const libqt_list errors) {
	self->sslErrors(reply, QList<QSslError>());
}

void QNetworkAccessManager_Connect_SslErrors(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, libqt_list) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, libqt_list)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::sslErrors, [self, slotFunc](QNetworkReply* reply, const QList<QSslError>& errors) {
	slotFunc(self, reply, errors);
    });
}

void QNetworkAccessManager_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(reply, authenticator);
}

void QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot) {
    void (*slotFunc)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*)>(slot);
    QNetworkAccessManager::connect(self, &QNetworkAccessManager::preSharedKeyAuthenticationRequired, [self, slotFunc](QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator) {
	slotFunc(self, reply, authenticator);
    });
}

libqt_string QNetworkAccessManager_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkAccessManager::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkAccessManager_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkAccessManager::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkAccessManager_EnableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, const libqt_string storeDir) {
	self->enableStrictTransportSecurityStore(enabled, QString::fromUtf8(storeDir.data, storeDir.len));
}

QNetworkReply* QNetworkAccessManager_SendCustomRequest32(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, QIODevice* data) {
	return self->sendCustomRequest(*request, QByteArray(verb.data, verb.len), data);
}

void QNetworkAccessManager_ConnectToHostEncrypted22(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port);
}

void QNetworkAccessManager_ConnectToHostEncrypted3(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port, const QSslConfiguration* sslConfiguration) {
	self->connectToHostEncrypted(QString::fromUtf8(hostName.data, hostName.len), port, *sslConfiguration);
}

void QNetworkAccessManager_ConnectToHost2(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port) {
	self->connectToHost(QString::fromUtf8(hostName.data, hostName.len), port);
}

// Base class handler implementation
libqt_list QNetworkAccessManager_QBaseSupportedSchemes(const QNetworkAccessManager* self) {
	auto* vqnetworkaccessmanager = dynamic_cast<const VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemes_IsBase(true);
	auto _ret = vqnetworkaccessmanager->supportedSchemes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnSupportedSchemes(const QNetworkAccessManager* self, intptr_t slot) {
	auto* vqnetworkaccessmanager = dynamic_cast<const VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemes_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_SupportedSchemes_Callback>(slot));
}
}

// Derived class handler implementation
QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData) {
	auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
	return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
	} else {
	return self->QNetworkAccessManager::createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
}
}

// Base class handler implementation
QNetworkReply* QNetworkAccessManager_QBaseCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData) {
	auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_CreateRequest_IsBase(true);
	return vqnetworkaccessmanager->createRequest(static_cast<QNetworkAccessManager::Operation>(op), *request, outgoingData);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnCreateRequest(QNetworkAccessManager* self, intptr_t slot) {
	auto* vqnetworkaccessmanager = dynamic_cast<VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_CreateRequest_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_CreateRequest_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self) {
	auto* vqnetworkaccessmanager = dynamic_cast<const VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
	auto _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
	} else {
	auto _ret = self->QNetworkAccessManager::supportedSchemesImplementation();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Base class handler implementation
libqt_list QNetworkAccessManager_QBaseSupportedSchemesImplementation(const QNetworkAccessManager* self) {
	auto* vqnetworkaccessmanager = dynamic_cast<const VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemesImplementation_IsBase(true);
	auto _ret = vqnetworkaccessmanager->supportedSchemesImplementation();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkAccessManager_OnSupportedSchemesImplementation(const QNetworkAccessManager* self, intptr_t slot) {
	auto* vqnetworkaccessmanager = dynamic_cast<const VirtualQNetworkAccessManager*>(self);
	if (vqnetworkaccessmanager && vqnetworkaccessmanager->isVirtualQNetworkAccessManager) {
vqnetworkaccessmanager->setQNetworkAccessManager_SupportedSchemesImplementation_Callback(reinterpret_cast<VirtualQNetworkAccessManager::QNetworkAccessManager_SupportedSchemesImplementation_Callback>(slot));
}
}

void QNetworkAccessManager_Delete(QNetworkAccessManager* self) {
    delete self;
}

