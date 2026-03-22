#pragma once
#ifndef QUDPSOCKET_H_C_LIB
#define QUDPSOCKET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkDatagram QNetworkDatagram;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QObject QObject;
typedef struct QUdpSocket QUdpSocket;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QUdpSocket* QUdpSocket_new();
QUdpSocket* QUdpSocket_new2(QObject* parent);
libqt_string QUdpSocket_Tr(const char* s);
bool QUdpSocket_Bind(QUdpSocket* self, int addr);
bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress);
bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface);
bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress);
bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface);
QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self);
void QUdpSocket_SetMulticastInterface(QUdpSocket* self, const QNetworkInterface* iface);
bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self);
long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self);
QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self);
long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen);
long long QUdpSocket_WriteDatagram(QUdpSocket* self, const QNetworkDatagram* datagram);
long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, const QHostAddress* host, uint16_t port);
long long QUdpSocket_WriteDatagram3(QUdpSocket* self, const libqt_string datagram, const QHostAddress* host, uint16_t port);
libqt_string QUdpSocket_Tr2(const char* s, const char* c);
libqt_string QUdpSocket_Tr3(const char* s, const char* c, int n);
bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port);
bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode);
QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize);
long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host);
long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port);
void QUdpSocket_Delete(QUdpSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
