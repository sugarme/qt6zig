#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkcookiejar.h>
#include "libqnetworkcookiejar.h"
#include "libqnetworkcookiejar.hxx"

QNetworkCookieJar* QNetworkCookieJar_new() {
	 return new VirtualQNetworkCookieJar();
}

QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent) {
	 return new VirtualQNetworkCookieJar(parent);
}

libqt_string QNetworkCookieJar_Tr(const char* s) {
	QString _ret = QNetworkCookieJar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, const QUrl* url) {
	return self->cookiesForUrl(*url);
}

bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list cookieList, const QUrl* url) {
	return self->setCookiesFromUrl(*cookieList, *url);
}

bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	return self->insertCookie(*cookie);
}

bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	return self->updateCookie(*cookie);
}

bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	return self->deleteCookie(*cookie);
}

libqt_string QNetworkCookieJar_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_list QNetworkCookieJar_QBaseCookiesForUrl(const QNetworkCookieJar* self, const QUrl* url) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_CookiesForUrl_IsBase(true);
	return vqnetworkcookiejar->cookiesForUrl(*url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnCookiesForUrl(const QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_CookiesForUrl_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_CookiesForUrl_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseSetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list cookieList, const QUrl* url) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_SetCookiesFromUrl_IsBase(true);
	return vqnetworkcookiejar->setCookiesFromUrl(*cookieList, *url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSetCookiesFromUrl(QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_SetCookiesFromUrl_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SetCookiesFromUrl_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseInsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_InsertCookie_IsBase(true);
	return vqnetworkcookiejar->insertCookie(*cookie);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnInsertCookie(QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_InsertCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_InsertCookie_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseUpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_UpdateCookie_IsBase(true);
	return vqnetworkcookiejar->updateCookie(*cookie);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnUpdateCookie(QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_UpdateCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_UpdateCookie_Callback>(slot));
}
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseDeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_DeleteCookie_IsBase(true);
	return vqnetworkcookiejar->deleteCookie(*cookie);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnDeleteCookie(QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_DeleteCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_DeleteCookie_Callback>(slot));
}
}

// Derived class handler implementation
bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
	return vqnetworkcookiejar->validateCookie(*cookie, *url);
	} else {
	return self->QNetworkCookieJar::validateCookie(*cookie, *url);
}
}

// Base class handler implementation
bool QNetworkCookieJar_QBaseValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_ValidateCookie_IsBase(true);
	return vqnetworkcookiejar->validateCookie(*cookie, *url);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnValidateCookie(const QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_ValidateCookie_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_ValidateCookie_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
	return vqnetworkcookiejar->allCookies();
	} else {
	return self->QNetworkCookieJar::allCookies();
}
}

// Base class handler implementation
libqt_list QNetworkCookieJar_QBaseAllCookies(const QNetworkCookieJar* self) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_AllCookies_IsBase(true);
	return vqnetworkcookiejar->allCookies();
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnAllCookies(const QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<const VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_AllCookies_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_AllCookies_Callback>(slot));
}
}

// Derived class handler implementation
void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
	vqnetworkcookiejar->setAllCookies(*cookieList);
	} else {
	self->QNetworkCookieJar::setAllCookies(*cookieList);
}
}

// Base class handler implementation
void QNetworkCookieJar_QBaseSetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_SetAllCookies_IsBase(true);
	vqnetworkcookiejar->setAllCookies(*cookieList);
}
}

// Auxiliary method to allow providing re-implementation
void QNetworkCookieJar_OnSetAllCookies(QNetworkCookieJar* self, intptr_t slot) {
	auto* vqnetworkcookiejar = dynamic_cast<VirtualQNetworkCookieJar*>(self);
	if (vqnetworkcookiejar && vqnetworkcookiejar->isVirtualQNetworkCookieJar) {
vqnetworkcookiejar->setQNetworkCookieJar_SetAllCookies_Callback(reinterpret_cast<VirtualQNetworkCookieJar::QNetworkCookieJar_SetAllCookies_Callback>(slot));
}
}

void QNetworkCookieJar_Delete(QNetworkCookieJar* self) {
    delete self;
}

