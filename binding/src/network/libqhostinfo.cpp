#include <QHostInfo>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhostinfo.h>
#include "libqhostinfo.h"
#include "libqhostinfo.hxx"

QHostInfo* QHostInfo_new() {
	 return new QHostInfo();
}

QHostInfo* QHostInfo_new2(const QHostInfo* d) {
	 return new QHostInfo(*d);
}

QHostInfo* QHostInfo_new3(int lookupId) {
	 return new QHostInfo(lookupId);
}

void QHostInfo_OperatorAssign(QHostInfo* self, const QHostInfo* d) {
	self->operator=(*d);
}

void QHostInfo_Swap(QHostInfo* self, QHostInfo* other) {
	self->swap(*other);
}

libqt_string QHostInfo_HostName(const QHostInfo* self) {
	QString _ret = self->hostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHostInfo_SetHostName(QHostInfo* self, const libqt_string name) {
	self->setHostName(QString::fromUtf8(name.data, name.len));
}

libqt_list QHostInfo_Addresses(const QHostInfo* self) {
	return self->addresses();
}

void QHostInfo_SetAddresses(QHostInfo* self, const libqt_list addresses) {
	self->setAddresses(*addresses);
}

int QHostInfo_Error(const QHostInfo* self) {
	return self->error();
}

void QHostInfo_SetError(QHostInfo* self, int errorVal) {
	self->setError(static_cast<QHostInfo::HostInfoError>(errorVal));
}

libqt_string QHostInfo_ErrorString(const QHostInfo* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHostInfo_SetErrorString(QHostInfo* self, const libqt_string errorString) {
	self->setErrorString(QString::fromUtf8(errorString.data, errorString.len));
}

void QHostInfo_SetLookupId(QHostInfo* self, int id) {
	self->setLookupId(id);
}

int QHostInfo_LookupId(const QHostInfo* self) {
	return self->lookupId();
}

int QHostInfo_LookupHost(const libqt_string name, const QObject* receiver, const char* member) {
	return QHostInfo::lookupHost(QString::fromUtf8(name.data, name.len), receiver, member);
}

void QHostInfo_AbortHostLookup(int lookupId) {
	QHostInfo::abortHostLookup(lookupId);
}

QHostInfo* QHostInfo_FromName(const libqt_string name) {
	return new QHostInfo(QHostInfo::fromName(QString::fromUtf8(name.data, name.len)));
}

libqt_string QHostInfo_LocalHostName() {
	QString _ret = QHostInfo::localHostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHostInfo_LocalDomainName() {
	QString _ret = QHostInfo::localDomainName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHostInfo_Delete(QHostInfo* self) {
    delete self;
}

