#include <QIODevice>
#include <QLocalSocket>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qlocalsocket.h>
#include "libqlocalsocket.h"
#include "libqlocalsocket.hxx"

QLocalSocket* QLocalSocket_new() {
	 return new VirtualQLocalSocket();
}

QLocalSocket* QLocalSocket_new2(QObject* parent) {
	 return new VirtualQLocalSocket(parent);
}

libqt_string QLocalSocket_Tr(const char* s) {
	QString _ret = QLocalSocket::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocalSocket_ConnectToServer(QLocalSocket* self) {
	self->connectToServer();
}

void QLocalSocket_ConnectToServer2(QLocalSocket* self, const libqt_string name) {
	self->connectToServer(QString::fromUtf8(name.data, name.len));
}

void QLocalSocket_DisconnectFromServer(QLocalSocket* self) {
	self->disconnectFromServer();
}

void QLocalSocket_SetServerName(QLocalSocket* self, const libqt_string name) {
	self->setServerName(QString::fromUtf8(name.data, name.len));
}

libqt_string QLocalSocket_ServerName(const QLocalSocket* self) {
	QString _ret = self->serverName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocalSocket_FullServerName(const QLocalSocket* self) {
	QString _ret = self->fullServerName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocalSocket_Abort(QLocalSocket* self) {
	self->abort();
}

bool QLocalSocket_IsSequential(const QLocalSocket* self) {
	return self->isSequential();
}

long long QLocalSocket_BytesAvailable(const QLocalSocket* self) {
	return self->bytesAvailable();
}

long long QLocalSocket_BytesToWrite(const QLocalSocket* self) {
	return self->bytesToWrite();
}

bool QLocalSocket_CanReadLine(const QLocalSocket* self) {
	return self->canReadLine();
}

bool QLocalSocket_Open(QLocalSocket* self, int openMode) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QLocalSocket_Close(QLocalSocket* self) {
	self->close();
}

int QLocalSocket_Error(const QLocalSocket* self) {
	return self->error();
}

bool QLocalSocket_Flush(QLocalSocket* self) {
	return self->flush();
}

bool QLocalSocket_IsValid(const QLocalSocket* self) {
	return self->isValid();
}

long long QLocalSocket_ReadBufferSize(const QLocalSocket* self) {
	return self->readBufferSize();
}

void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size) {
	self->setReadBufferSize(size);
}

bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor(socketDescriptor);
}

intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self) {
	return self->socketDescriptor();
}

void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option) {
	self->setSocketOptions(static_cast<QFlags<QLocalSocket::SocketOption>>(option));
}

int QLocalSocket_SocketOptions(const QLocalSocket* self) {
	return self->socketOptions();
}

int QLocalSocket_State(const QLocalSocket* self) {
	return self->state();
}

bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs) {
	return self->waitForBytesWritten(msecs);
}

bool QLocalSocket_WaitForConnected(QLocalSocket* self) {
	return self->waitForConnected();
}

bool QLocalSocket_WaitForDisconnected(QLocalSocket* self) {
	return self->waitForDisconnected();
}

bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs) {
	return self->waitForReadyRead(msecs);
}

void QLocalSocket_Connected(QLocalSocket* self) {
	self->connected();
}

void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::connected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLocalSocket_Disconnected(QLocalSocket* self) {
	self->disconnected();
}

void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::disconnected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError) {
	self->errorOccurred(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::errorOccurred, [self, slotFunc](QLocalSocket::LocalSocketError socketError) {
	slotFunc(self, socketError);
    });
}

void QLocalSocket_StateChanged(QLocalSocket* self, int socketState) {
	self->stateChanged(static_cast<QLocalSocket::LocalSocketState>(socketState));
}

void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::stateChanged, [self, slotFunc](QLocalSocket::LocalSocketState socketState) {
	slotFunc(self, socketState);
    });
}

libqt_string QLocalSocket_Tr2(const char* s, const char* c) {
	QString _ret = QLocalSocket::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLocalSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalSocket::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode) {
	self->connectToServer(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QLocalSocket_ConnectToServer22(QLocalSocket* self, const libqt_string name, int openMode) {
	self->connectToServer(QString::fromUtf8(name.data, name.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
	return self->setSocketDescriptor(socketDescriptor, static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
	return self->setSocketDescriptor(socketDescriptor, static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs) {
	return self->waitForConnected(msecs);
}

bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs) {
	return self->waitForDisconnected(msecs);
}

// Base class handler implementation
bool QLocalSocket_QBaseIsSequential(const QLocalSocket* self) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_IsSequential_IsBase(true);
	return vqlocalsocket->isSequential();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnIsSequential(const QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_IsSequential_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_IsSequential_Callback>(slot));
}
}

// Base class handler implementation
long long QLocalSocket_QBaseBytesAvailable(const QLocalSocket* self) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_BytesAvailable_IsBase(true);
	return vqlocalsocket->bytesAvailable();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesAvailable(const QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesAvailable_Callback>(slot));
}
}

// Base class handler implementation
long long QLocalSocket_QBaseBytesToWrite(const QLocalSocket* self) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_BytesToWrite_IsBase(true);
	return vqlocalsocket->bytesToWrite();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesToWrite(const QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesToWrite_Callback>(slot));
}
}

// Base class handler implementation
bool QLocalSocket_QBaseCanReadLine(const QLocalSocket* self) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_CanReadLine_IsBase(true);
	return vqlocalsocket->canReadLine();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnCanReadLine(const QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<const VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_CanReadLine_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_CanReadLine_Callback>(slot));
}
}

// Base class handler implementation
bool QLocalSocket_QBaseOpen(QLocalSocket* self, int openMode) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_Open_IsBase(true);
	return vqlocalsocket->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_Open_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Open_Callback>(slot));
}
}

// Base class handler implementation
void QLocalSocket_QBaseClose(QLocalSocket* self) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_Close_IsBase(true);
	vqlocalsocket->close();
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_Close_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Close_Callback>(slot));
}
}

// Base class handler implementation
bool QLocalSocket_QBaseWaitForBytesWritten(QLocalSocket* self, int msecs) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WaitForBytesWritten_IsBase(true);
	return vqlocalsocket->waitForBytesWritten(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForBytesWritten_Callback>(slot));
}
}

// Base class handler implementation
bool QLocalSocket_QBaseWaitForReadyRead(QLocalSocket* self, int msecs) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WaitForReadyRead_IsBase(true);
	return vqlocalsocket->waitForReadyRead(msecs);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForReadyRead_Callback>(slot));
}
}

// Derived class handler implementation
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
	return vqlocalsocket->readData(param1, param2);
	} else {
	return self->QLocalSocket::readData(param1, param2);
}
}

// Base class handler implementation
long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_ReadData_IsBase(true);
	return vqlocalsocket->readData(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_ReadData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadData_Callback>(slot));
}
}

// Derived class handler implementation
long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
	return vqlocalsocket->readLineData(data, maxSize);
	} else {
	return self->QLocalSocket::readLineData(data, maxSize);
}
}

// Base class handler implementation
long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_ReadLineData_IsBase(true);
	return vqlocalsocket->readLineData(data, maxSize);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_ReadLineData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadLineData_Callback>(slot));
}
}

// Derived class handler implementation
long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
	return vqlocalsocket->skipData(maxSize);
	} else {
	return self->QLocalSocket::skipData(maxSize);
}
}

// Base class handler implementation
long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_SkipData_IsBase(true);
	return vqlocalsocket->skipData(maxSize);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_SkipData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SkipData_Callback>(slot));
}
}

// Derived class handler implementation
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
	return vqlocalsocket->writeData(param1, param2);
	} else {
	return self->QLocalSocket::writeData(param1, param2);
}
}

// Base class handler implementation
long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WriteData_IsBase(true);
	return vqlocalsocket->writeData(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot) {
	auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
	if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
vqlocalsocket->setQLocalSocket_WriteData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WriteData_Callback>(slot));
}
}

void QLocalSocket_Delete(QLocalSocket* self) {
    delete self;
}

