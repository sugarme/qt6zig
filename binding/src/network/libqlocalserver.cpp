#include <QLocalServer>
#include <QLocalSocket>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qlocalserver.h>
#include "libqlocalserver.h"
#include "libqlocalserver.hxx"

QLocalServer* QLocalServer_new() {
	 return new VirtualQLocalServer();
}

QLocalServer* QLocalServer_new2(QObject* parent) {
	 return new VirtualQLocalServer(parent);
}

libqt_string QLocalServer_Tr(const char* s) {
	QString _ret = QLocalServer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocalServer_NewConnection(QLocalServer* self) {
	self->newConnection();
}

void QLocalServer_Connect_NewConnection(QLocalServer* self, intptr_t slot) {
    void (*slotFunc)(QLocalServer*) = reinterpret_cast<void (*)(QLocalServer*)>(slot);
    QLocalServer::connect(self, &QLocalServer::newConnection, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLocalServer_Close(QLocalServer* self) {
	self->close();
}

libqt_string QLocalServer_ErrorString(const QLocalServer* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLocalServer_HasPendingConnections(const QLocalServer* self) {
	return self->hasPendingConnections();
}

bool QLocalServer_IsListening(const QLocalServer* self) {
	return self->isListening();
}

bool QLocalServer_Listen(QLocalServer* self, const libqt_string name) {
	return self->listen(QString::fromUtf8(name.data, name.len));
}

bool QLocalServer_Listen2(QLocalServer* self, intptr_t socketDescriptor) {
	return self->listen(socketDescriptor);
}

int QLocalServer_MaxPendingConnections(const QLocalServer* self) {
	return self->maxPendingConnections();
}

QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self) {
	return self->nextPendingConnection();
}

libqt_string QLocalServer_ServerName(const QLocalServer* self) {
	QString _ret = self->serverName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocalServer_FullServerName(const QLocalServer* self) {
	QString _ret = self->fullServerName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLocalServer_RemoveServer(const libqt_string name) {
	return QLocalServer::removeServer(QString::fromUtf8(name.data, name.len));
}

int QLocalServer_ServerError(const QLocalServer* self) {
	return self->serverError();
}

void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections) {
	self->setMaxPendingConnections(numConnections);
}

bool QLocalServer_WaitForNewConnection(QLocalServer* self) {
	return self->waitForNewConnection();
}

void QLocalServer_SetListenBacklogSize(QLocalServer* self, int size) {
	self->setListenBacklogSize(size);
}

int QLocalServer_ListenBacklogSize(const QLocalServer* self) {
	return self->listenBacklogSize();
}

void QLocalServer_SetSocketOptions(QLocalServer* self, int options) {
	self->setSocketOptions(static_cast<QFlags<QLocalServer::SocketOption>>(options));
}

int QLocalServer_SocketOptions(const QLocalServer* self) {
	return self->socketOptions();
}

intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self) {
	return self->socketDescriptor();
}

libqt_string QLocalServer_Tr2(const char* s, const char* c) {
	QString _ret = QLocalServer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocalServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalServer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec) {
	return self->waitForNewConnection(msec);
}

bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(msec, timedOut);
}

// Base class handler implementation
bool QLocalServer_QBaseHasPendingConnections(const QLocalServer* self) {
	auto* vqlocalserver = dynamic_cast<const VirtualQLocalServer*>(self);
	if (vqlocalserver && vqlocalserver->isVirtualQLocalServer) {
vqlocalserver->setQLocalServer_HasPendingConnections_IsBase(true);
	return vqlocalserver->hasPendingConnections();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnHasPendingConnections(const QLocalServer* self, intptr_t slot) {
	auto* vqlocalserver = dynamic_cast<const VirtualQLocalServer*>(self);
	if (vqlocalserver && vqlocalserver->isVirtualQLocalServer) {
vqlocalserver->setQLocalServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_HasPendingConnections_Callback>(slot));
}
}

// Base class handler implementation
QLocalSocket* QLocalServer_QBaseNextPendingConnection(QLocalServer* self) {
	auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
	if (vqlocalserver && vqlocalserver->isVirtualQLocalServer) {
vqlocalserver->setQLocalServer_NextPendingConnection_IsBase(true);
	return vqlocalserver->nextPendingConnection();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnNextPendingConnection(QLocalServer* self, intptr_t slot) {
	auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self);
	if (vqlocalserver && vqlocalserver->isVirtualQLocalServer) {
vqlocalserver->setQLocalServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_NextPendingConnection_Callback>(slot));
}
}

void QLocalServer_Delete(QLocalServer* self) {
    delete self;
}

