#include <QAbstractSocket>
#include <QAuthenticator>
#include <QHostAddress>
#include <QIODevice>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qabstractsocket.h>
#include "libqabstractsocket.h"
#include "libqabstractsocket.hxx"

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
	 return new VirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

libqt_string QAbstractSocket_Tr(const char* s) {
	QString _ret = QAbstractSocket::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractSocket_Resume(QAbstractSocket* self) {
	self->resume();
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
	return self->pauseMode();
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QFlags<QAbstractSocket::PauseMode>>(pauseMode));
}

bool QAbstractSocket_Bind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
	return self->bind(*address, port, static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
	return self->bind();
}

void QAbstractSocket_ConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
	self->connectToHost(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, const QHostAddress* address, uint16_t port) {
	self->connectToHost(*address, port);
}

void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
	self->disconnectFromHost();
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
	return self->isValid();
}

long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
	return self->bytesAvailable();
}

long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
	return self->bytesToWrite();
}

uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self) {
	return self->localPort();
}

QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self) {
	return self->peerPort();
}

QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->peerAddress());
}

libqt_string QAbstractSocket_PeerName(const QAbstractSocket* self) {
	QString _ret = self->peerName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
	return self->readBufferSize();
}

void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
	self->setReadBufferSize(size);
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
	self->abort();
}

intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
	return self->socketDescriptor();
}

bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor(socketDescriptor, static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_SocketType(const QAbstractSocket* self) {
	return self->socketType();
}

int QAbstractSocket_State(const QAbstractSocket* self) {
	return self->state();
}

int QAbstractSocket_Error(const QAbstractSocket* self) {
	return self->error();
}

void QAbstractSocket_Close(QAbstractSocket* self) {
	self->close();
}

bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
	return self->isSequential();
}

bool QAbstractSocket_Flush(QAbstractSocket* self) {
	return self->flush();
}

bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs) {
	return self->waitForConnected(msecs);
}

bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs) {
	return self->waitForReadyRead(msecs);
}

bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs) {
	return self->waitForBytesWritten(msecs);
}

bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs) {
	return self->waitForDisconnected(msecs);
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, const QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
	return new QNetworkProxy(self->proxy());
}

libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
	QString _ret = self->protocolTag();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, const libqt_string tag) {
	self->setProtocolTag(QString::fromUtf8(tag.data, tag.len));
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
	self->hostFound();
}

void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::hostFound, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
	self->connected();
}

void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::connected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
	self->disconnected();
}

void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::disconnected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::stateChanged, [self, slotFunc](QAbstractSocket::SocketState param1) {
	slotFunc(self, param1);
    });
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
	self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::errorOccurred, [self, slotFunc](QAbstractSocket::SocketError param1) {
	slotFunc(self, param1);
    });
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, const QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, const QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QAbstractSocket*, const QNetworkProxy*, QAuthenticator*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
	slotFunc(self, proxy, authenticator);
    });
}

libqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSocket::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
	return self->bind(port);
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode) {
	return self->bind(port, static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
	self->connectToHost(*address, port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

// Base class handler implementation
void QAbstractSocket_QBaseResume(QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Resume_IsBase(true);
	vqabstractsocket->resume();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Resume_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Resume_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseBind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Bind_IsBase(true);
	return vqabstractsocket->bind(*address, port, static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Bind_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Bind_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSocket_QBaseConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_ConnectToHost_IsBase(true);
	vqabstractsocket->connectToHost(QString::fromUtf8(hostName.data, hostName.len), port, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectToHost_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSocket_QBaseDisconnectFromHost(QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_DisconnectFromHost_IsBase(true);
	vqabstractsocket->disconnectFromHost();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectFromHost_Callback>(slot));
}
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesAvailable(const QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_BytesAvailable_IsBase(true);
	return vqabstractsocket->bytesAvailable();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesAvailable(const QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesAvailable_Callback>(slot));
}
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesToWrite(const QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_BytesToWrite_IsBase(true);
	return vqabstractsocket->bytesToWrite();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesToWrite(const QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesToWrite_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSocket_QBaseSetReadBufferSize(QAbstractSocket* self, long long size) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetReadBufferSize_IsBase(true);
	vqabstractsocket->setReadBufferSize(size);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetReadBufferSize_Callback>(slot));
}
}

// Base class handler implementation
intptr_t QAbstractSocket_QBaseSocketDescriptor(const QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SocketDescriptor_IsBase(true);
	return vqabstractsocket->socketDescriptor();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketDescriptor(const QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketDescriptor_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_IsBase(true);
	return vqabstractsocket->setSocketDescriptor(socketDescriptor, static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketDescriptor_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetSocketOption_IsBase(true);
	vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketOption_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractSocket_QBaseSocketOption(QAbstractSocket* self, int option) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SocketOption_IsBase(true);
	return new QVariant(vqabstractsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_SocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketOption_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractSocket_QBaseClose(QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Close_IsBase(true);
	vqabstractsocket->close();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_Close_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseIsSequential(const QAbstractSocket* self) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_IsSequential_IsBase(true);
	return vqabstractsocket->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSequential(const QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<const VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_IsSequential_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForConnected(QAbstractSocket* self, int msecs) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForConnected_IsBase(true);
	return vqabstractsocket->waitForConnected(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForConnected_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForReadyRead(QAbstractSocket* self, int msecs) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForReadyRead_IsBase(true);
	return vqabstractsocket->waitForReadyRead(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForReadyRead_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForBytesWritten(QAbstractSocket* self, int msecs) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_IsBase(true);
	return vqabstractsocket->waitForBytesWritten(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForBytesWritten_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForDisconnected(QAbstractSocket* self, int msecs) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForDisconnected_IsBase(true);
	return vqabstractsocket->waitForDisconnected(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot) {
	auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
	if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
vqabstractsocket->setQAbstractSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForDisconnected_Callback>(slot));
}
}

void QAbstractSocket_Delete(QAbstractSocket* self) {
    delete self;
}

