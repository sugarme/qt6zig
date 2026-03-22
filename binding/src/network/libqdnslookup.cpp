#include <QByteArray>
#include <QDnsDomainNameRecord>
#include <QDnsHostAddressRecord>
#include <QDnsLookup>
#include <QDnsMailExchangeRecord>
#include <QDnsServiceRecord>
#include <QDnsTextRecord>
#include <QDnsTlsAssociationRecord>
#include <QHostAddress>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdnslookup.h>
#include "libqdnslookup.h"
#include "libqdnslookup.hxx"

QDnsDomainNameRecord* QDnsDomainNameRecord_new() {
	 return new QDnsDomainNameRecord();
}

QDnsDomainNameRecord* QDnsDomainNameRecord_new2(const QDnsDomainNameRecord* other) {
	 return new QDnsDomainNameRecord(*other);
}

void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, const QDnsDomainNameRecord* other) {
	self->operator=(*other);
}

void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
	self->swap(*other);
}

libqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self) {
	return self->timeToLive();
}

libqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self) {
	QString _ret = self->value();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self) {
    delete self;
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new() {
	 return new QDnsHostAddressRecord();
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new2(const QDnsHostAddressRecord* other) {
	 return new QDnsHostAddressRecord(*other);
}

void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, const QDnsHostAddressRecord* other) {
	self->operator=(*other);
}

void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
	self->swap(*other);
}

libqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self) {
	return self->timeToLive();
}

QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self) {
	return new QHostAddress(self->value());
}

void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self) {
    delete self;
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new() {
	 return new QDnsMailExchangeRecord();
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(const QDnsMailExchangeRecord* other) {
	 return new QDnsMailExchangeRecord(*other);
}

void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, const QDnsMailExchangeRecord* other) {
	self->operator=(*other);
}

void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
	self->swap(*other);
}

libqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self) {
	QString _ret = self->exchange();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self) {
	return self->preference();
}

unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self) {
	return self->timeToLive();
}

void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self) {
    delete self;
}

QDnsServiceRecord* QDnsServiceRecord_new() {
	 return new QDnsServiceRecord();
}

QDnsServiceRecord* QDnsServiceRecord_new2(const QDnsServiceRecord* other) {
	 return new QDnsServiceRecord(*other);
}

void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, const QDnsServiceRecord* other) {
	self->operator=(*other);
}

void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other) {
	self->swap(*other);
}

libqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self) {
	return self->port();
}

uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self) {
	return self->priority();
}

libqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self) {
	QString _ret = self->target();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self) {
	return self->timeToLive();
}

uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self) {
	return self->weight();
}

void QDnsServiceRecord_Delete(QDnsServiceRecord* self) {
    delete self;
}

QDnsTextRecord* QDnsTextRecord_new() {
	 return new QDnsTextRecord();
}

QDnsTextRecord* QDnsTextRecord_new2(const QDnsTextRecord* other) {
	 return new QDnsTextRecord(*other);
}

void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, const QDnsTextRecord* other) {
	self->operator=(*other);
}

void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other) {
	self->swap(*other);
}

libqt_string QDnsTextRecord_Name(const QDnsTextRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self) {
	return self->timeToLive();
}

libqt_list QDnsTextRecord_Values(const QDnsTextRecord* self) {
	return self->values();
}

void QDnsTextRecord_Delete(QDnsTextRecord* self) {
    delete self;
}

QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new() {
	 return new QDnsTlsAssociationRecord();
}

QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new2(const QDnsTlsAssociationRecord* other) {
	 return new QDnsTlsAssociationRecord(*other);
}

void QDnsTlsAssociationRecord_OperatorAssign(QDnsTlsAssociationRecord* self, const QDnsTlsAssociationRecord* other) {
	self->operator=(*other);
}

void QDnsTlsAssociationRecord_Swap(QDnsTlsAssociationRecord* self, QDnsTlsAssociationRecord* other) {
	self->swap(*other);
}

libqt_string QDnsTlsAssociationRecord_Name(const QDnsTlsAssociationRecord* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

unsigned int QDnsTlsAssociationRecord_TimeToLive(const QDnsTlsAssociationRecord* self) {
	return self->timeToLive();
}

quint8 QDnsTlsAssociationRecord_Usage(const QDnsTlsAssociationRecord* self) {
	return self->usage();
}

quint8 QDnsTlsAssociationRecord_Selector(const QDnsTlsAssociationRecord* self) {
	return self->selector();
}

quint8 QDnsTlsAssociationRecord_MatchType(const QDnsTlsAssociationRecord* self) {
	return self->matchType();
}

libqt_string QDnsTlsAssociationRecord_Value(const QDnsTlsAssociationRecord* self) {
	QByteArray _qb = self->value();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDnsTlsAssociationRecord_Delete(QDnsTlsAssociationRecord* self) {
    delete self;
}

QDnsLookup* QDnsLookup_new() {
	 return new QDnsLookup();
}

QDnsLookup* QDnsLookup_new2(int typeVal, const libqt_string name) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len));
}

QDnsLookup* QDnsLookup_new3(int typeVal, const libqt_string name, const QHostAddress* nameserver) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), *nameserver);
}

QDnsLookup* QDnsLookup_new4(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), *nameserver, port);
}

QDnsLookup* QDnsLookup_new5(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), static_cast<QDnsLookup::Protocol>(protocol), *nameserver);
}

QDnsLookup* QDnsLookup_new6(QObject* parent) {
	 return new QDnsLookup(parent);
}

QDnsLookup* QDnsLookup_new7(int typeVal, const libqt_string name, QObject* parent) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), parent);
}

QDnsLookup* QDnsLookup_new8(int typeVal, const libqt_string name, const QHostAddress* nameserver, QObject* parent) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), *nameserver, parent);
}

QDnsLookup* QDnsLookup_new9(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port, QObject* parent) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), *nameserver, port, parent);
}

QDnsLookup* QDnsLookup_new10(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver, uint16_t port) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), static_cast<QDnsLookup::Protocol>(protocol), *nameserver, port);
}

QDnsLookup* QDnsLookup_new11(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver, uint16_t port, QObject* parent) {
	 return new QDnsLookup(static_cast<QMetaType::Type>(typeVal), QString::fromUtf8(name.data, name.len), static_cast<QDnsLookup::Protocol>(protocol), *nameserver, port, parent);
}

libqt_string QDnsLookup_Tr(const char* s) {
	QString _ret = QDnsLookup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDnsLookup_IsAuthenticData(const QDnsLookup* self) {
	return self->isAuthenticData();
}

int QDnsLookup_Error(const QDnsLookup* self) {
	return self->error();
}

libqt_string QDnsLookup_ErrorString(const QDnsLookup* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDnsLookup_IsFinished(const QDnsLookup* self) {
	return self->isFinished();
}

libqt_string QDnsLookup_Name(const QDnsLookup* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDnsLookup_SetName(QDnsLookup* self, const libqt_string name) {
	self->setName(QString::fromUtf8(name.data, name.len));
}

QBindable<QString> QDnsLookup_BindableName(QDnsLookup* self) {
	return self->bindableName();
}

int QDnsLookup_Type(const QDnsLookup* self) {
	return self->type();
}

void QDnsLookup_SetType(QDnsLookup* self, int typeVal) {
	self->setType(static_cast<QDnsLookup::Type>(typeVal));
}

QBindable<Type> QDnsLookup_BindableType(QDnsLookup* self) {
	return self->bindableType();
}

QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self) {
	return new QHostAddress(self->nameserver());
}

void QDnsLookup_SetNameserver(QDnsLookup* self, const QHostAddress* nameserver) {
	self->setNameserver(*nameserver);
}

QBindable<QHostAddress> QDnsLookup_BindableNameserver(QDnsLookup* self) {
	return self->bindableNameserver();
}

uint16_t QDnsLookup_NameserverPort(const QDnsLookup* self) {
	return self->nameserverPort();
}

void QDnsLookup_SetNameserverPort(QDnsLookup* self, uint16_t port) {
	self->setNameserverPort(port);
}

QBindable<quint16> QDnsLookup_BindableNameserverPort(QDnsLookup* self) {
	return self->bindableNameserverPort();
}

quint8 QDnsLookup_NameserverProtocol(const QDnsLookup* self) {
	return self->nameserverProtocol();
}

void QDnsLookup_SetNameserverProtocol(QDnsLookup* self, quint8 protocol) {
	self->setNameserverProtocol(static_cast<QDnsLookup::Protocol>(protocol));
}

QBindable<Protocol> QDnsLookup_BindableNameserverProtocol(QDnsLookup* self) {
	return self->bindableNameserverProtocol();
}

void QDnsLookup_SetNameserver2(QDnsLookup* self, quint8 protocol, const QHostAddress* nameserver) {
	self->setNameserver(static_cast<QDnsLookup::Protocol>(protocol), *nameserver);
}

void QDnsLookup_SetNameserver3(QDnsLookup* self, const QHostAddress* nameserver, uint16_t port) {
	self->setNameserver(*nameserver, port);
}

libqt_list QDnsLookup_CanonicalNameRecords(const QDnsLookup* self) {
	return self->canonicalNameRecords();
}

libqt_list QDnsLookup_HostAddressRecords(const QDnsLookup* self) {
	return self->hostAddressRecords();
}

libqt_list QDnsLookup_MailExchangeRecords(const QDnsLookup* self) {
	return self->mailExchangeRecords();
}

libqt_list QDnsLookup_NameServerRecords(const QDnsLookup* self) {
	return self->nameServerRecords();
}

libqt_list QDnsLookup_PointerRecords(const QDnsLookup* self) {
	return self->pointerRecords();
}

libqt_list QDnsLookup_ServiceRecords(const QDnsLookup* self) {
	return self->serviceRecords();
}

libqt_list QDnsLookup_TextRecords(const QDnsLookup* self) {
	return self->textRecords();
}

libqt_list QDnsLookup_TlsAssociationRecords(const QDnsLookup* self) {
	return self->tlsAssociationRecords();
}

void QDnsLookup_SetSslConfiguration(QDnsLookup* self, const QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QDnsLookup_SslConfiguration(const QDnsLookup* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

bool QDnsLookup_IsProtocolSupported(quint8 protocol) {
	return QDnsLookup::isProtocolSupported(static_cast<QDnsLookup::Protocol>(protocol));
}

uint16_t QDnsLookup_DefaultPortForProtocol(quint8 protocol) {
	return QDnsLookup::defaultPortForProtocol(static_cast<QDnsLookup::Protocol>(protocol));
}

void QDnsLookup_Abort(QDnsLookup* self) {
	self->abort();
}

void QDnsLookup_Lookup(QDnsLookup* self) {
	self->lookup();
}

void QDnsLookup_Finished(QDnsLookup* self) {
	self->finished();
}

void QDnsLookup_Connect_Finished(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*) = reinterpret_cast<void (*)(QDnsLookup*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::finished, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QDnsLookup_NameChanged(QDnsLookup* self, const libqt_string name) {
	self->nameChanged(QString::fromUtf8(name.data, name.len));
}

void QDnsLookup_Connect_NameChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, const char*) = reinterpret_cast<void (*)(QDnsLookup*, const char*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameChanged, [self, slotFunc](const QString& name) {
	slotFunc(self, name);
    });
}

void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal) {
	self->typeChanged(static_cast<QDnsLookup::Type>(typeVal));
}

void QDnsLookup_Connect_TypeChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, int) = reinterpret_cast<void (*)(QDnsLookup*, int)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::typeChanged, [self, slotFunc](QDnsLookup::Type typeVal) {
	slotFunc(self, typeVal);
    });
}

void QDnsLookup_NameserverChanged(QDnsLookup* self, const QHostAddress* nameserver) {
	self->nameserverChanged(*nameserver);
}

void QDnsLookup_Connect_NameserverChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, const QHostAddress*) = reinterpret_cast<void (*)(QDnsLookup*, const QHostAddress*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverChanged, [self, slotFunc](const QHostAddress& nameserver) {
	slotFunc(self, nameserver);
    });
}

void QDnsLookup_NameserverPortChanged(QDnsLookup* self, uint16_t port) {
	self->nameserverPortChanged(port);
}

void QDnsLookup_Connect_NameserverPortChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, uint16_t) = reinterpret_cast<void (*)(QDnsLookup*, uint16_t)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverPortChanged, [self, slotFunc](quint16 port) {
	slotFunc(self, port);
    });
}

void QDnsLookup_NameserverProtocolChanged(QDnsLookup* self, quint8 protocol) {
	self->nameserverProtocolChanged(static_cast<QDnsLookup::Protocol>(protocol));
}

void QDnsLookup_Connect_NameserverProtocolChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, quint8) = reinterpret_cast<void (*)(QDnsLookup*, quint8)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverProtocolChanged, [self, slotFunc](QDnsLookup::Protocol protocol) {
	slotFunc(self, protocol);
    });
}

libqt_string QDnsLookup_Tr2(const char* s, const char* c) {
	QString _ret = QDnsLookup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDnsLookup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDnsLookup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDnsLookup_SetNameserver32(QDnsLookup* self, quint8 protocol, const QHostAddress* nameserver, uint16_t port) {
	self->setNameserver(static_cast<QDnsLookup::Protocol>(protocol), *nameserver, port);
}

void QDnsLookup_Delete(QDnsLookup* self) {
    delete self;
}

