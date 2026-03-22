#include <QHostAddress>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTcpServer>
#include <QTcpSocket>
#include <qtcpserver.h>
#include "libqtcpserver.h"
#include "libqtcpserver.hxx"

QTcpServer* QTcpServer_new() {
	 return new VirtualQTcpServer();
}

QTcpServer* QTcpServer_new2(QObject* parent) {
	 return new VirtualQTcpServer(parent);
}

libqt_string QTcpServer_Tr(const char* s) {
	QString _ret = QTcpServer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTcpServer_Listen(QTcpServer* self) {
	return self->listen();
}

void QTcpServer_Close(QTcpServer* self) {
	self->close();
}

bool QTcpServer_IsListening(const QTcpServer* self) {
	return self->isListening();
}

void QTcpServer_SetMaxPendingConnections(QTcpServer* self, int numConnections) {
	self->setMaxPendingConnections(numConnections);
}

int QTcpServer_MaxPendingConnections(const QTcpServer* self) {
	return self->maxPendingConnections();
}

void QTcpServer_SetListenBacklogSize(QTcpServer* self, int size) {
	self->setListenBacklogSize(size);
}

int QTcpServer_ListenBacklogSize(const QTcpServer* self) {
	return self->listenBacklogSize();
}

uint16_t QTcpServer_ServerPort(const QTcpServer* self) {
	return self->serverPort();
}

QHostAddress* QTcpServer_ServerAddress(const QTcpServer* self) {
	return new QHostAddress(self->serverAddress());
}

intptr_t QTcpServer_SocketDescriptor(const QTcpServer* self) {
	return self->socketDescriptor();
}

bool QTcpServer_SetSocketDescriptor(QTcpServer* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor(socketDescriptor);
}

bool QTcpServer_WaitForNewConnection(QTcpServer* self) {
	return self->waitForNewConnection();
}

bool QTcpServer_HasPendingConnections(const QTcpServer* self) {
	return self->hasPendingConnections();
}

QTcpSocket* QTcpServer_NextPendingConnection(QTcpServer* self) {
	return self->nextPendingConnection();
}

int QTcpServer_ServerError(const QTcpServer* self) {
	return self->serverError();
}

libqt_string QTcpServer_ErrorString(const QTcpServer* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTcpServer_PauseAccepting(QTcpServer* self) {
	self->pauseAccepting();
}

void QTcpServer_ResumeAccepting(QTcpServer* self) {
	self->resumeAccepting();
}

void QTcpServer_SetProxy(QTcpServer* self, const QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QTcpServer_Proxy(const QTcpServer* self) {
	return new QNetworkProxy(self->proxy());
}

void QTcpServer_NewConnection(QTcpServer* self) {
	self->newConnection();
}

void QTcpServer_Connect_NewConnection(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*) = reinterpret_cast<void (*)(QTcpServer*)>(slot);
    QTcpServer::connect(self, &QTcpServer::newConnection, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTcpServer_AcceptError(QTcpServer* self, int socketError) {
	self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_Connect_AcceptError(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*, int) = reinterpret_cast<void (*)(QTcpServer*, int)>(slot);
    QTcpServer::connect(self, &QTcpServer::acceptError, [self, slotFunc](QAbstractSocket::SocketError socketError) {
	slotFunc(self, socketError);
    });
}

libqt_string QTcpServer_Tr2(const char* s, const char* c) {
	QString _ret = QTcpServer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTcpServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTcpServer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTcpServer_Listen1(QTcpServer* self, const QHostAddress* address) {
	return self->listen(*address);
}

bool QTcpServer_Listen2(QTcpServer* self, const QHostAddress* address, uint16_t port) {
	return self->listen(*address, port);
}

bool QTcpServer_WaitForNewConnection1(QTcpServer* self, int msec) {
	return self->waitForNewConnection(msec);
}

bool QTcpServer_WaitForNewConnection2(QTcpServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(msec, timedOut);
}

// Base class handler implementation
bool QTcpServer_QBaseHasPendingConnections(const QTcpServer* self) {
	auto* vqtcpserver = dynamic_cast<const VirtualQTcpServer*>(self);
	if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
vqtcpserver->setQTcpServer_HasPendingConnections_IsBase(true);
	return vqtcpserver->hasPendingConnections();
}
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnHasPendingConnections(const QTcpServer* self, intptr_t slot) {
	auto* vqtcpserver = dynamic_cast<const VirtualQTcpServer*>(self);
	if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
vqtcpserver->setQTcpServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_HasPendingConnections_Callback>(slot));
}
}

// Base class handler implementation
QTcpSocket* QTcpServer_QBaseNextPendingConnection(QTcpServer* self) {
	auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
	if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
vqtcpserver->setQTcpServer_NextPendingConnection_IsBase(true);
	return vqtcpserver->nextPendingConnection();
}
}

// Auxiliary method to allow providing re-implementation
void QTcpServer_OnNextPendingConnection(QTcpServer* self, intptr_t slot) {
	auto* vqtcpserver = dynamic_cast<VirtualQTcpServer*>(self);
	if (vqtcpserver && vqtcpserver->isVirtualQTcpServer) {
vqtcpserver->setQTcpServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQTcpServer::QTcpServer_NextPendingConnection_Callback>(slot));
}
}

void QTcpServer_Connect_pendingConnectionAvailable(QTcpServer* self, intptr_t slot) {
    void (*slotFunc)(QTcpServer*) = reinterpret_cast<void (*)(QTcpServer*)>(slot);
    QTcpServer::connect(self, &QTcpServer::pendingConnectionAvailable, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTcpServer_Delete(QTcpServer* self) {
    delete self;
}

