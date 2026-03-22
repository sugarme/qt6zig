#include <QDeadlineTimer>
#include <QHostAddress>
#include <QNetworkAddressEntry>
#include <QNetworkInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkinterface.h>
#include "libqnetworkinterface.h"
#include "libqnetworkinterface.hxx"

QNetworkAddressEntry* QNetworkAddressEntry_new() {
	 return new QNetworkAddressEntry();
}

QNetworkAddressEntry* QNetworkAddressEntry_new2(const QNetworkAddressEntry* other) {
	 return new QNetworkAddressEntry(*other);
}

void QNetworkAddressEntry_OperatorAssign(QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
	self->operator=(*other);
}

void QNetworkAddressEntry_Swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
	self->swap(*other);
}

bool QNetworkAddressEntry_OperatorEqual(const QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
	return self->operator==(*other);
}

bool QNetworkAddressEntry_OperatorNotEqual(const QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
	return self->operator!=(*other);
}

qint8 QNetworkAddressEntry_DnsEligibility(const QNetworkAddressEntry* self) {
	return self->dnsEligibility();
}

void QNetworkAddressEntry_SetDnsEligibility(QNetworkAddressEntry* self, qint8 status) {
	self->setDnsEligibility(static_cast<QNetworkAddressEntry::DnsEligibilityStatus>(status));
}

QHostAddress* QNetworkAddressEntry_Ip(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->ip());
}

void QNetworkAddressEntry_SetIp(QNetworkAddressEntry* self, const QHostAddress* newIp) {
	self->setIp(*newIp);
}

QHostAddress* QNetworkAddressEntry_Netmask(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->netmask());
}

void QNetworkAddressEntry_SetNetmask(QNetworkAddressEntry* self, const QHostAddress* newNetmask) {
	self->setNetmask(*newNetmask);
}

int QNetworkAddressEntry_PrefixLength(const QNetworkAddressEntry* self) {
	return self->prefixLength();
}

void QNetworkAddressEntry_SetPrefixLength(QNetworkAddressEntry* self, int length) {
	self->setPrefixLength(length);
}

QHostAddress* QNetworkAddressEntry_Broadcast(const QNetworkAddressEntry* self) {
	return new QHostAddress(self->broadcast());
}

void QNetworkAddressEntry_SetBroadcast(QNetworkAddressEntry* self, const QHostAddress* newBroadcast) {
	self->setBroadcast(*newBroadcast);
}

bool QNetworkAddressEntry_IsLifetimeKnown(const QNetworkAddressEntry* self) {
	return self->isLifetimeKnown();
}

QDeadlineTimer* QNetworkAddressEntry_PreferredLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->preferredLifetime());
}

QDeadlineTimer* QNetworkAddressEntry_ValidityLifetime(const QNetworkAddressEntry* self) {
	return new QDeadlineTimer(self->validityLifetime());
}

void QNetworkAddressEntry_SetAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity) {
	self->setAddressLifetime(*preferred, *validity);
}

void QNetworkAddressEntry_ClearAddressLifetime(QNetworkAddressEntry* self) {
	self->clearAddressLifetime();
}

bool QNetworkAddressEntry_IsPermanent(const QNetworkAddressEntry* self) {
	return self->isPermanent();
}

bool QNetworkAddressEntry_IsTemporary(const QNetworkAddressEntry* self) {
	return self->isTemporary();
}

void QNetworkAddressEntry_Delete(QNetworkAddressEntry* self) {
    delete self;
}

QNetworkInterface* QNetworkInterface_new() {
	 return new QNetworkInterface();
}

QNetworkInterface* QNetworkInterface_new2(const QNetworkInterface* other) {
	 return new QNetworkInterface(*other);
}

void QNetworkInterface_OperatorAssign(QNetworkInterface* self, const QNetworkInterface* other) {
	self->operator=(*other);
}

void QNetworkInterface_Swap(QNetworkInterface* self, QNetworkInterface* other) {
	self->swap(*other);
}

bool QNetworkInterface_IsValid(const QNetworkInterface* self) {
	return self->isValid();
}

int QNetworkInterface_Index(const QNetworkInterface* self) {
	return self->index();
}

int QNetworkInterface_MaximumTransmissionUnit(const QNetworkInterface* self) {
	return self->maximumTransmissionUnit();
}

libqt_string QNetworkInterface_Name(const QNetworkInterface* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QNetworkInterface_HumanReadableName(const QNetworkInterface* self) {
	QString _ret = self->humanReadableName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QNetworkInterface_Flags(const QNetworkInterface* self) {
	return self->flags();
}

int QNetworkInterface_Type(const QNetworkInterface* self) {
	return self->type();
}

libqt_string QNetworkInterface_HardwareAddress(const QNetworkInterface* self) {
	QString _ret = self->hardwareAddress();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QNetworkInterface_AddressEntries(const QNetworkInterface* self) {
	return self->addressEntries();
}

int QNetworkInterface_InterfaceIndexFromName(const libqt_string name) {
	return QNetworkInterface::interfaceIndexFromName(QString::fromUtf8(name.data, name.len));
}

QNetworkInterface* QNetworkInterface_InterfaceFromName(const libqt_string name) {
	return new QNetworkInterface(QNetworkInterface::interfaceFromName(QString::fromUtf8(name.data, name.len)));
}

QNetworkInterface* QNetworkInterface_InterfaceFromIndex(int index) {
	return new QNetworkInterface(QNetworkInterface::interfaceFromIndex(index));
}

libqt_string QNetworkInterface_InterfaceNameFromIndex(int index) {
	QString _ret = QNetworkInterface::interfaceNameFromIndex(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QNetworkInterface_AllInterfaces() {
	return QNetworkInterface::allInterfaces();
}

libqt_list QNetworkInterface_AllAddresses() {
	return QNetworkInterface::allAddresses();
}

void QNetworkInterface_Delete(QNetworkInterface* self) {
    delete self;
}

