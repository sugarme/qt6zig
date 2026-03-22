#include <QByteArray>
#include <QByteArrayView>
#include <QDateTime>
#include <QNetworkCookie>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkcookie.h>
#include "libqnetworkcookie.h"
#include "libqnetworkcookie.hxx"

QNetworkCookie* QNetworkCookie_new() {
	 return new QNetworkCookie();
}

QNetworkCookie* QNetworkCookie_new2(const QNetworkCookie* other) {
	 return new QNetworkCookie(*other);
}

QNetworkCookie* QNetworkCookie_new3(const libqt_string name) {
	 return new QNetworkCookie(QByteArray(name.data, name.len));
}

QNetworkCookie* QNetworkCookie_new4(const libqt_string name, const libqt_string value) {
	 return new QNetworkCookie(QByteArray(name.data, name.len), QByteArray(value.data, value.len));
}

void QNetworkCookie_OperatorAssign(QNetworkCookie* self, const QNetworkCookie* other) {
	self->operator=(*other);
}

void QNetworkCookie_Swap(QNetworkCookie* self, QNetworkCookie* other) {
	self->swap(*other);
}

bool QNetworkCookie_OperatorEqual(const QNetworkCookie* self, const QNetworkCookie* other) {
	return self->operator==(*other);
}

bool QNetworkCookie_OperatorNotEqual(const QNetworkCookie* self, const QNetworkCookie* other) {
	return self->operator!=(*other);
}

bool QNetworkCookie_IsSecure(const QNetworkCookie* self) {
	return self->isSecure();
}

void QNetworkCookie_SetSecure(QNetworkCookie* self, bool enable) {
	self->setSecure(enable);
}

bool QNetworkCookie_IsHttpOnly(const QNetworkCookie* self) {
	return self->isHttpOnly();
}

void QNetworkCookie_SetHttpOnly(QNetworkCookie* self, bool enable) {
	self->setHttpOnly(enable);
}

int QNetworkCookie_SameSitePolicy(const QNetworkCookie* self) {
	return self->sameSitePolicy();
}

void QNetworkCookie_SetSameSitePolicy(QNetworkCookie* self, int sameSite) {
	self->setSameSitePolicy(static_cast<QNetworkCookie::SameSite>(sameSite));
}

bool QNetworkCookie_IsSessionCookie(const QNetworkCookie* self) {
	return self->isSessionCookie();
}

QDateTime* QNetworkCookie_ExpirationDate(const QNetworkCookie* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCookie_SetExpirationDate(QNetworkCookie* self, const QDateTime* date) {
	self->setExpirationDate(*date);
}

libqt_string QNetworkCookie_Domain(const QNetworkCookie* self) {
	QString _ret = self->domain();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkCookie_SetDomain(QNetworkCookie* self, const libqt_string domain) {
	self->setDomain(QString::fromUtf8(domain.data, domain.len));
}

libqt_string QNetworkCookie_Path(const QNetworkCookie* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkCookie_SetPath(QNetworkCookie* self, const libqt_string path) {
	self->setPath(QString::fromUtf8(path.data, path.len));
}

libqt_string QNetworkCookie_Name(const QNetworkCookie* self) {
	QByteArray _qb = self->name();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkCookie_SetName(QNetworkCookie* self, const libqt_string cookieName) {
	self->setName(QByteArray(cookieName.data, cookieName.len));
}

libqt_string QNetworkCookie_Value(const QNetworkCookie* self) {
	QByteArray _qb = self->value();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkCookie_SetValue(QNetworkCookie* self, const libqt_string value) {
	self->setValue(QByteArray(value.data, value.len));
}

libqt_string QNetworkCookie_ToRawForm(const QNetworkCookie* self) {
	QByteArray _qb = self->toRawForm();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QNetworkCookie_HasSameIdentifier(const QNetworkCookie* self, const QNetworkCookie* other) {
	return self->hasSameIdentifier(*other);
}

void QNetworkCookie_Normalize(QNetworkCookie* self, const QUrl* url) {
	self->normalize(*url);
}

libqt_list QNetworkCookie_ParseCookies(QByteArrayView* cookieString) {
	return QNetworkCookie::parseCookies(*cookieString);
}

libqt_string QNetworkCookie_ToRawForm1(const QNetworkCookie* self, int form) {
	QByteArray _qb = self->toRawForm(static_cast<QNetworkCookie::RawForm>(form));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNetworkCookie_Delete(QNetworkCookie* self) {
    delete self;
}

