#include <QDateTime>
#include <QHstsPolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qhstspolicy.h>
#include "libqhstspolicy.h"
#include "libqhstspolicy.hxx"

QHstsPolicy* QHstsPolicy_new() {
	 return new QHstsPolicy();
}

QHstsPolicy* QHstsPolicy_new2(const QDateTime* expiry, int flags, const libqt_string host) {
	 return new QHstsPolicy(*expiry, static_cast<QFlags<QHstsPolicy::PolicyFlag>>(flags), QString::fromUtf8(host.data, host.len));
}

QHstsPolicy* QHstsPolicy_new3(const QHstsPolicy* rhs) {
	 return new QHstsPolicy(*rhs);
}

QHstsPolicy* QHstsPolicy_new4(const QDateTime* expiry, int flags, const libqt_string host, int mode) {
	 return new QHstsPolicy(*expiry, static_cast<QFlags<QHstsPolicy::PolicyFlag>>(flags), QString::fromUtf8(host.data, host.len), static_cast<QUrl::ParsingMode>(mode));
}

void QHstsPolicy_OperatorAssign(QHstsPolicy* self, const QHstsPolicy* rhs) {
	self->operator=(*rhs);
}

void QHstsPolicy_Swap(QHstsPolicy* self, QHstsPolicy* other) {
	self->swap(*other);
}

void QHstsPolicy_SetHost(QHstsPolicy* self, const libqt_string host) {
	self->setHost(QString::fromUtf8(host.data, host.len));
}

libqt_string QHstsPolicy_Host(const QHstsPolicy* self) {
	QString _ret = self->host();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHstsPolicy_SetExpiry(QHstsPolicy* self, const QDateTime* expiry) {
	self->setExpiry(*expiry);
}

QDateTime* QHstsPolicy_Expiry(const QHstsPolicy* self) {
	return new QDateTime(self->expiry());
}

void QHstsPolicy_SetIncludesSubDomains(QHstsPolicy* self, bool include) {
	self->setIncludesSubDomains(include);
}

bool QHstsPolicy_IncludesSubDomains(const QHstsPolicy* self) {
	return self->includesSubDomains();
}

bool QHstsPolicy_IsExpired(const QHstsPolicy* self) {
	return self->isExpired();
}

void QHstsPolicy_SetHost2(QHstsPolicy* self, const libqt_string host, int mode) {
	self->setHost(QString::fromUtf8(host.data, host.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QHstsPolicy_Host1(const QHstsPolicy* self, unsigned int options) {
	QString _ret = self->host(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHstsPolicy_Delete(QHstsPolicy* self) {
    delete self;
}

