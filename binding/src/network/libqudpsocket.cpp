#include <QAbstractSocket>
#include <QByteArray>
#include <QHostAddress>
#include <QNetworkDatagram>
#include <QNetworkInterface>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUdpSocket>
#include <qudpsocket.h>
#include "libqudpsocket.h"
#include "libqudpsocket.hxx"

QUdpSocket* QUdpSocket_new() {
	 return new QUdpSocket();
}

QUdpSocket* QUdpSocket_new2(QObject* parent) {
	 return new QUdpSocket(parent);
}

libqt_string QUdpSocket_Tr(const char* s) {
	QString _ret = QUdpSocket::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUdpSocket_Bind(QUdpSocket* self, int addr) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr));
}

bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress) {
	return self->joinMulticastGroup(*groupAddress);
}

bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface) {
	return self->joinMulticastGroup(*groupAddress, *iface);
}

bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress) {
	return self->leaveMulticastGroup(*groupAddress);
}

bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface) {
	return self->leaveMulticastGroup(*groupAddress, *iface);
}

QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self) {
	return new QNetworkInterface(self->multicastInterface());
}

void QUdpSocket_SetMulticastInterface(QUdpSocket* self, const QNetworkInterface* iface) {
	self->setMulticastInterface(*iface);
}

bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self) {
	return self->hasPendingDatagrams();
}

long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self) {
	return self->pendingDatagramSize();
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self) {
	return new QNetworkDatagram(self->receiveDatagram());
}

long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen) {
	return self->readDatagram(data, maxlen);
}

long long QUdpSocket_WriteDatagram(QUdpSocket* self, const QNetworkDatagram* datagram) {
	return self->writeDatagram(*datagram);
}

long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, const QHostAddress* host, uint16_t port) {
	return self->writeDatagram(data, lenVal, *host, port);
}

long long QUdpSocket_WriteDatagram3(QUdpSocket* self, const libqt_string datagram, const QHostAddress* host, uint16_t port) {
	return self->writeDatagram(QByteArray(datagram.data, datagram.len), *host, port);
}

libqt_string QUdpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QUdpSocket::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUdpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUdpSocket::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), port);
}

bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode) {
	return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), port, static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize) {
	return new QNetworkDatagram(self->receiveDatagram(maxSize));
}

long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host) {
	return self->readDatagram(data, maxlen, host);
}

long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port) {
	return self->readDatagram(data, maxlen, host, port);
}

void QUdpSocket_Delete(QUdpSocket* self) {
    delete self;
}

