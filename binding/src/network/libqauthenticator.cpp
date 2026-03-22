#include <QAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qauthenticator.h>
#include "libqauthenticator.h"
#include "libqauthenticator.hxx"

QAuthenticator* QAuthenticator_new() {
	 return new QAuthenticator();
}

QAuthenticator* QAuthenticator_new2(const QAuthenticator* other) {
	 return new QAuthenticator(*other);
}

void QAuthenticator_OperatorAssign(QAuthenticator* self, const QAuthenticator* other) {
	self->operator=(*other);
}

bool QAuthenticator_OperatorEqual(const QAuthenticator* self, const QAuthenticator* other) {
	return self->operator==(*other);
}

bool QAuthenticator_OperatorNotEqual(const QAuthenticator* self, const QAuthenticator* other) {
	return self->operator!=(*other);
}

libqt_string QAuthenticator_User(const QAuthenticator* self) {
	QString _ret = self->user();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAuthenticator_SetUser(QAuthenticator* self, const libqt_string user) {
	self->setUser(QString::fromUtf8(user.data, user.len));
}

libqt_string QAuthenticator_Password(const QAuthenticator* self) {
	QString _ret = self->password();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAuthenticator_SetPassword(QAuthenticator* self, const libqt_string password) {
	self->setPassword(QString::fromUtf8(password.data, password.len));
}

libqt_string QAuthenticator_Realm(const QAuthenticator* self) {
	QString _ret = self->realm();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAuthenticator_SetRealm(QAuthenticator* self, const libqt_string realm) {
	self->setRealm(QString::fromUtf8(realm.data, realm.len));
}

QVariant* QAuthenticator_Option(const QAuthenticator* self, const libqt_string opt) {
	return new QVariant(self->option(QString::fromUtf8(opt.data, opt.len)));
}

libqt_map QAuthenticator_Options(const QAuthenticator* self) {
	return self->options();
}

void QAuthenticator_SetOption(QAuthenticator* self, const libqt_string opt, const QVariant* value) {
	self->setOption(QString::fromUtf8(opt.data, opt.len), *value);
}

bool QAuthenticator_IsNull(const QAuthenticator* self) {
	return self->isNull();
}

void QAuthenticator_Detach(QAuthenticator* self) {
	self->detach();
}

void QAuthenticator_Delete(QAuthenticator* self) {
    delete self;
}

