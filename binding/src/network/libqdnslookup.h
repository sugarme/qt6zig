#pragma once
#ifndef QDNSLOOKUP_H_C_LIB
#define QDNSLOOKUP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDnsDomainNameRecord QDnsDomainNameRecord;
typedef struct QDnsHostAddressRecord QDnsHostAddressRecord;
typedef struct QDnsLookup QDnsLookup;
typedef struct QDnsMailExchangeRecord QDnsMailExchangeRecord;
typedef struct QDnsServiceRecord QDnsServiceRecord;
typedef struct QDnsTextRecord QDnsTextRecord;
typedef struct QDnsTlsAssociationRecord QDnsTlsAssociationRecord;
typedef struct QHostAddress QHostAddress;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDnsDomainNameRecord* QDnsDomainNameRecord_new();
QDnsDomainNameRecord* QDnsDomainNameRecord_new2(const QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, const QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
libqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self);
unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self);
libqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self);
void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self);

QDnsHostAddressRecord* QDnsHostAddressRecord_new();
QDnsHostAddressRecord* QDnsHostAddressRecord_new2(const QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, const QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
libqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self);
unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self);
QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self);
void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self);

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new();
QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(const QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, const QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
libqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self);
libqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self);
uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self);
unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self);
void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self);

QDnsServiceRecord* QDnsServiceRecord_new();
QDnsServiceRecord* QDnsServiceRecord_new2(const QDnsServiceRecord* other);
void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, const QDnsServiceRecord* other);
void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other);
libqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self);
libqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self);
unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self);
void QDnsServiceRecord_Delete(QDnsServiceRecord* self);

QDnsTextRecord* QDnsTextRecord_new();
QDnsTextRecord* QDnsTextRecord_new2(const QDnsTextRecord* other);
void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, const QDnsTextRecord* other);
void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other);
libqt_string QDnsTextRecord_Name(const QDnsTextRecord* self);
unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self);
libqt_list QDnsTextRecord_Values(const QDnsTextRecord* self);
void QDnsTextRecord_Delete(QDnsTextRecord* self);

QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new();
QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new2(const QDnsTlsAssociationRecord* other);
void QDnsTlsAssociationRecord_OperatorAssign(QDnsTlsAssociationRecord* self, const QDnsTlsAssociationRecord* other);
void QDnsTlsAssociationRecord_Swap(QDnsTlsAssociationRecord* self, QDnsTlsAssociationRecord* other);
libqt_string QDnsTlsAssociationRecord_Name(const QDnsTlsAssociationRecord* self);
unsigned int QDnsTlsAssociationRecord_TimeToLive(const QDnsTlsAssociationRecord* self);
quint8 QDnsTlsAssociationRecord_Usage(const QDnsTlsAssociationRecord* self);
quint8 QDnsTlsAssociationRecord_Selector(const QDnsTlsAssociationRecord* self);
quint8 QDnsTlsAssociationRecord_MatchType(const QDnsTlsAssociationRecord* self);
libqt_string QDnsTlsAssociationRecord_Value(const QDnsTlsAssociationRecord* self);
void QDnsTlsAssociationRecord_Delete(QDnsTlsAssociationRecord* self);

QDnsLookup* QDnsLookup_new();
QDnsLookup* QDnsLookup_new2(int typeVal, const libqt_string name);
QDnsLookup* QDnsLookup_new3(int typeVal, const libqt_string name, const QHostAddress* nameserver);
QDnsLookup* QDnsLookup_new4(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port);
QDnsLookup* QDnsLookup_new5(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver);
QDnsLookup* QDnsLookup_new6(QObject* parent);
QDnsLookup* QDnsLookup_new7(int typeVal, const libqt_string name, QObject* parent);
QDnsLookup* QDnsLookup_new8(int typeVal, const libqt_string name, const QHostAddress* nameserver, QObject* parent);
QDnsLookup* QDnsLookup_new9(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port, QObject* parent);
QDnsLookup* QDnsLookup_new10(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver, uint16_t port);
QDnsLookup* QDnsLookup_new11(int typeVal, const libqt_string name, quint8 protocol, const QHostAddress* nameserver, uint16_t port, QObject* parent);
libqt_string QDnsLookup_Tr(const char* s);
bool QDnsLookup_IsAuthenticData(const QDnsLookup* self);
int QDnsLookup_Error(const QDnsLookup* self);
libqt_string QDnsLookup_ErrorString(const QDnsLookup* self);
bool QDnsLookup_IsFinished(const QDnsLookup* self);
libqt_string QDnsLookup_Name(const QDnsLookup* self);
void QDnsLookup_SetName(QDnsLookup* self, const libqt_string name);
QBindable<QString> QDnsLookup_BindableName(QDnsLookup* self);
int QDnsLookup_Type(const QDnsLookup* self);
void QDnsLookup_SetType(QDnsLookup* self, int typeVal);
QBindable<Type> QDnsLookup_BindableType(QDnsLookup* self);
QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self);
void QDnsLookup_SetNameserver(QDnsLookup* self, const QHostAddress* nameserver);
QBindable<QHostAddress> QDnsLookup_BindableNameserver(QDnsLookup* self);
uint16_t QDnsLookup_NameserverPort(const QDnsLookup* self);
void QDnsLookup_SetNameserverPort(QDnsLookup* self, uint16_t port);
QBindable<quint16> QDnsLookup_BindableNameserverPort(QDnsLookup* self);
quint8 QDnsLookup_NameserverProtocol(const QDnsLookup* self);
void QDnsLookup_SetNameserverProtocol(QDnsLookup* self, quint8 protocol);
QBindable<Protocol> QDnsLookup_BindableNameserverProtocol(QDnsLookup* self);
void QDnsLookup_SetNameserver2(QDnsLookup* self, quint8 protocol, const QHostAddress* nameserver);
void QDnsLookup_SetNameserver3(QDnsLookup* self, const QHostAddress* nameserver, uint16_t port);
libqt_list QDnsLookup_CanonicalNameRecords(const QDnsLookup* self);
libqt_list QDnsLookup_HostAddressRecords(const QDnsLookup* self);
libqt_list QDnsLookup_MailExchangeRecords(const QDnsLookup* self);
libqt_list QDnsLookup_NameServerRecords(const QDnsLookup* self);
libqt_list QDnsLookup_PointerRecords(const QDnsLookup* self);
libqt_list QDnsLookup_ServiceRecords(const QDnsLookup* self);
libqt_list QDnsLookup_TextRecords(const QDnsLookup* self);
libqt_list QDnsLookup_TlsAssociationRecords(const QDnsLookup* self);
void QDnsLookup_SetSslConfiguration(QDnsLookup* self, const QSslConfiguration* sslConfiguration);
QSslConfiguration* QDnsLookup_SslConfiguration(const QDnsLookup* self);
bool QDnsLookup_IsProtocolSupported(quint8 protocol);
uint16_t QDnsLookup_DefaultPortForProtocol(quint8 protocol);
void QDnsLookup_Abort(QDnsLookup* self);
void QDnsLookup_Lookup(QDnsLookup* self);
void QDnsLookup_Finished(QDnsLookup* self);
void QDnsLookup_Connect_Finished(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameChanged(QDnsLookup* self, const libqt_string name);
void QDnsLookup_Connect_NameChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal);
void QDnsLookup_Connect_TypeChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameserverChanged(QDnsLookup* self, const QHostAddress* nameserver);
void QDnsLookup_Connect_NameserverChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameserverPortChanged(QDnsLookup* self, uint16_t port);
void QDnsLookup_Connect_NameserverPortChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameserverProtocolChanged(QDnsLookup* self, quint8 protocol);
void QDnsLookup_Connect_NameserverProtocolChanged(QDnsLookup* self, intptr_t slot);
libqt_string QDnsLookup_Tr2(const char* s, const char* c);
libqt_string QDnsLookup_Tr3(const char* s, const char* c, int n);
void QDnsLookup_SetNameserver32(QDnsLookup* self, quint8 protocol, const QHostAddress* nameserver, uint16_t port);
void QDnsLookup_Delete(QDnsLookup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
