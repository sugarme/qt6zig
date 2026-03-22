#pragma once
#ifndef QABSTRACTSOCKET_H_C_LIBVIRTUAL
#define QABSTRACTSOCKET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractSocket so that we can call protected methods
class VirtualQAbstractSocket final : public QAbstractSocket {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractSocket= true;

	// Virtual class public types (including callbacks)
	using QAbstractSocket_Resume_Callback = void (*)();
	using QAbstractSocket_Bind_Callback = bool (*)(QAbstractSocket*, const QHostAddress*, uint16_t, int);
	using QAbstractSocket_ConnectToHost_Callback = void (*)(QAbstractSocket*, libqt_string, uint16_t, int, int);
	using QAbstractSocket_DisconnectFromHost_Callback = void (*)();
	using QAbstractSocket_BytesAvailable_Callback = long long (*)();
	using QAbstractSocket_BytesToWrite_Callback = long long (*)();
	using QAbstractSocket_SetReadBufferSize_Callback = void (*)(QAbstractSocket*, long long);
	using QAbstractSocket_SocketDescriptor_Callback = intptr_t (*)();
	using QAbstractSocket_SetSocketDescriptor_Callback = bool (*)(QAbstractSocket*, intptr_t, int, int);
	using QAbstractSocket_SetSocketOption_Callback = void (*)(QAbstractSocket*, int, const QVariant*);
	using QAbstractSocket_SocketOption_Callback = QVariant* (*)(QAbstractSocket*, int);
	using QAbstractSocket_Close_Callback = void (*)();
	using QAbstractSocket_IsSequential_Callback = bool (*)();
	using QAbstractSocket_WaitForConnected_Callback = bool (*)(QAbstractSocket*, int);
	using QAbstractSocket_WaitForReadyRead_Callback = bool (*)(QAbstractSocket*, int);
	using QAbstractSocket_WaitForBytesWritten_Callback = bool (*)(QAbstractSocket*, int);
	using QAbstractSocket_WaitForDisconnected_Callback = bool (*)(QAbstractSocket*, int);
	using QAbstractSocket_ReadData_Callback = long long (*)(QAbstractSocket*, char*, long long);
	using QAbstractSocket_ReadLineData_Callback = long long (*)(QAbstractSocket*, char*, long long);
	using QAbstractSocket_SkipData_Callback = long long (*)(QAbstractSocket*, long long);
	using QAbstractSocket_WriteData_Callback = long long (*)(QAbstractSocket*, const char*, long long);
	using QAbstractSocket_SetSocketState_Callback = void (*)(QAbstractSocket*, int);
	using QAbstractSocket_SetSocketError_Callback = void (*)(QAbstractSocket*, int);
	using QAbstractSocket_SetLocalPort_Callback = void (*)(QAbstractSocket*, uint16_t);
	using QAbstractSocket_SetLocalAddress_Callback = void (*)(QAbstractSocket*, const QHostAddress*);
	using QAbstractSocket_SetPeerPort_Callback = void (*)(QAbstractSocket*, uint16_t);
	using QAbstractSocket_SetPeerAddress_Callback = void (*)(QAbstractSocket*, const QHostAddress*);
	using QAbstractSocket_SetPeerName_Callback = void (*)(QAbstractSocket*, libqt_string);

protected:
	// Instance callback storage
	mutable QAbstractSocket_Resume_Callback qabstractsocket_resume_callback = nullptr;
	mutable QAbstractSocket_Bind_Callback qabstractsocket_bind_callback = nullptr;
	mutable QAbstractSocket_ConnectToHost_Callback qabstractsocket_connecttohost_callback = nullptr;
	mutable QAbstractSocket_DisconnectFromHost_Callback qabstractsocket_disconnectfromhost_callback = nullptr;
	mutable QAbstractSocket_BytesAvailable_Callback qabstractsocket_bytesavailable_callback = nullptr;
	mutable QAbstractSocket_BytesToWrite_Callback qabstractsocket_bytestowrite_callback = nullptr;
	mutable QAbstractSocket_SetReadBufferSize_Callback qabstractsocket_setreadbuffersize_callback = nullptr;
	mutable QAbstractSocket_SocketDescriptor_Callback qabstractsocket_socketdescriptor_callback = nullptr;
	mutable QAbstractSocket_SetSocketDescriptor_Callback qabstractsocket_setsocketdescriptor_callback = nullptr;
	mutable QAbstractSocket_SetSocketOption_Callback qabstractsocket_setsocketoption_callback = nullptr;
	mutable QAbstractSocket_SocketOption_Callback qabstractsocket_socketoption_callback = nullptr;
	mutable QAbstractSocket_Close_Callback qabstractsocket_close_callback = nullptr;
	mutable QAbstractSocket_IsSequential_Callback qabstractsocket_issequential_callback = nullptr;
	mutable QAbstractSocket_WaitForConnected_Callback qabstractsocket_waitforconnected_callback = nullptr;
	mutable QAbstractSocket_WaitForReadyRead_Callback qabstractsocket_waitforreadyread_callback = nullptr;
	mutable QAbstractSocket_WaitForBytesWritten_Callback qabstractsocket_waitforbyteswritten_callback = nullptr;
	mutable QAbstractSocket_WaitForDisconnected_Callback qabstractsocket_waitfordisconnected_callback = nullptr;
	mutable QAbstractSocket_ReadData_Callback qabstractsocket_readdata_callback = nullptr;
	mutable QAbstractSocket_ReadLineData_Callback qabstractsocket_readlinedata_callback = nullptr;
	mutable QAbstractSocket_SkipData_Callback qabstractsocket_skipdata_callback = nullptr;
	mutable QAbstractSocket_WriteData_Callback qabstractsocket_writedata_callback = nullptr;
	mutable QAbstractSocket_SetSocketState_Callback qabstractsocket_setsocketstate_callback = nullptr;
	mutable QAbstractSocket_SetSocketError_Callback qabstractsocket_setsocketerror_callback = nullptr;
	mutable QAbstractSocket_SetLocalPort_Callback qabstractsocket_setlocalport_callback = nullptr;
	mutable QAbstractSocket_SetLocalAddress_Callback qabstractsocket_setlocaladdress_callback = nullptr;
	mutable QAbstractSocket_SetPeerPort_Callback qabstractsocket_setpeerport_callback = nullptr;
	mutable QAbstractSocket_SetPeerAddress_Callback qabstractsocket_setpeeraddress_callback = nullptr;
	mutable QAbstractSocket_SetPeerName_Callback qabstractsocket_setpeername_callback = nullptr;

	// Instance base flags
    mutable bool qabstractsocket_resume_isbase = false;
    mutable bool qabstractsocket_bind_isbase = false;
    mutable bool qabstractsocket_connecttohost_isbase = false;
    mutable bool qabstractsocket_disconnectfromhost_isbase = false;
    mutable bool qabstractsocket_bytesavailable_isbase = false;
    mutable bool qabstractsocket_bytestowrite_isbase = false;
    mutable bool qabstractsocket_setreadbuffersize_isbase = false;
    mutable bool qabstractsocket_socketdescriptor_isbase = false;
    mutable bool qabstractsocket_setsocketdescriptor_isbase = false;
    mutable bool qabstractsocket_setsocketoption_isbase = false;
    mutable bool qabstractsocket_socketoption_isbase = false;
    mutable bool qabstractsocket_close_isbase = false;
    mutable bool qabstractsocket_issequential_isbase = false;
    mutable bool qabstractsocket_waitforconnected_isbase = false;
    mutable bool qabstractsocket_waitforreadyread_isbase = false;
    mutable bool qabstractsocket_waitforbyteswritten_isbase = false;
    mutable bool qabstractsocket_waitfordisconnected_isbase = false;
    mutable bool qabstractsocket_readdata_isbase = false;
    mutable bool qabstractsocket_readlinedata_isbase = false;
    mutable bool qabstractsocket_skipdata_isbase = false;
    mutable bool qabstractsocket_writedata_isbase = false;
    mutable bool qabstractsocket_setsocketstate_isbase = false;
    mutable bool qabstractsocket_setsocketerror_isbase = false;
    mutable bool qabstractsocket_setlocalport_isbase = false;
    mutable bool qabstractsocket_setlocaladdress_isbase = false;
    mutable bool qabstractsocket_setpeerport_isbase = false;
    mutable bool qabstractsocket_setpeeraddress_isbase = false;
    mutable bool qabstractsocket_setpeername_isbase = false;

public:
	VirtualQAbstractSocket(SocketType socketType, QObject* parent): QAbstractSocket(socketType, parent) {};

	~VirtualQAbstractSocket() {
		qabstractsocket_resume_callback = nullptr;
		qabstractsocket_bind_callback = nullptr;
		qabstractsocket_connecttohost_callback = nullptr;
		qabstractsocket_disconnectfromhost_callback = nullptr;
		qabstractsocket_bytesavailable_callback = nullptr;
		qabstractsocket_bytestowrite_callback = nullptr;
		qabstractsocket_setreadbuffersize_callback = nullptr;
		qabstractsocket_socketdescriptor_callback = nullptr;
		qabstractsocket_setsocketdescriptor_callback = nullptr;
		qabstractsocket_setsocketoption_callback = nullptr;
		qabstractsocket_socketoption_callback = nullptr;
		qabstractsocket_close_callback = nullptr;
		qabstractsocket_issequential_callback = nullptr;
		qabstractsocket_waitforconnected_callback = nullptr;
		qabstractsocket_waitforreadyread_callback = nullptr;
		qabstractsocket_waitforbyteswritten_callback = nullptr;
		qabstractsocket_waitfordisconnected_callback = nullptr;
		qabstractsocket_readdata_callback = nullptr;
		qabstractsocket_readlinedata_callback = nullptr;
		qabstractsocket_skipdata_callback = nullptr;
		qabstractsocket_writedata_callback = nullptr;
		qabstractsocket_setsocketstate_callback = nullptr;
		qabstractsocket_setsocketerror_callback = nullptr;
		qabstractsocket_setlocalport_callback = nullptr;
		qabstractsocket_setlocaladdress_callback = nullptr;
		qabstractsocket_setpeerport_callback = nullptr;
		qabstractsocket_setpeeraddress_callback = nullptr;
		qabstractsocket_setpeername_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractSocket_Resume_Callback(QAbstractSocket_Resume_Callback cb) const { qabstractsocket_resume_callback = cb; }
	inline void setQAbstractSocket_Bind_Callback(QAbstractSocket_Bind_Callback cb) const { qabstractsocket_bind_callback = cb; }
	inline void setQAbstractSocket_ConnectToHost_Callback(QAbstractSocket_ConnectToHost_Callback cb) const { qabstractsocket_connecttohost_callback = cb; }
	inline void setQAbstractSocket_DisconnectFromHost_Callback(QAbstractSocket_DisconnectFromHost_Callback cb) const { qabstractsocket_disconnectfromhost_callback = cb; }
	inline void setQAbstractSocket_BytesAvailable_Callback(QAbstractSocket_BytesAvailable_Callback cb) const { qabstractsocket_bytesavailable_callback = cb; }
	inline void setQAbstractSocket_BytesToWrite_Callback(QAbstractSocket_BytesToWrite_Callback cb) const { qabstractsocket_bytestowrite_callback = cb; }
	inline void setQAbstractSocket_SetReadBufferSize_Callback(QAbstractSocket_SetReadBufferSize_Callback cb) const { qabstractsocket_setreadbuffersize_callback = cb; }
	inline void setQAbstractSocket_SocketDescriptor_Callback(QAbstractSocket_SocketDescriptor_Callback cb) const { qabstractsocket_socketdescriptor_callback = cb; }
	inline void setQAbstractSocket_SetSocketDescriptor_Callback(QAbstractSocket_SetSocketDescriptor_Callback cb) const { qabstractsocket_setsocketdescriptor_callback = cb; }
	inline void setQAbstractSocket_SetSocketOption_Callback(QAbstractSocket_SetSocketOption_Callback cb) const { qabstractsocket_setsocketoption_callback = cb; }
	inline void setQAbstractSocket_SocketOption_Callback(QAbstractSocket_SocketOption_Callback cb) const { qabstractsocket_socketoption_callback = cb; }
	inline void setQAbstractSocket_Close_Callback(QAbstractSocket_Close_Callback cb) const { qabstractsocket_close_callback = cb; }
	inline void setQAbstractSocket_IsSequential_Callback(QAbstractSocket_IsSequential_Callback cb) const { qabstractsocket_issequential_callback = cb; }
	inline void setQAbstractSocket_WaitForConnected_Callback(QAbstractSocket_WaitForConnected_Callback cb) const { qabstractsocket_waitforconnected_callback = cb; }
	inline void setQAbstractSocket_WaitForReadyRead_Callback(QAbstractSocket_WaitForReadyRead_Callback cb) const { qabstractsocket_waitforreadyread_callback = cb; }
	inline void setQAbstractSocket_WaitForBytesWritten_Callback(QAbstractSocket_WaitForBytesWritten_Callback cb) const { qabstractsocket_waitforbyteswritten_callback = cb; }
	inline void setQAbstractSocket_WaitForDisconnected_Callback(QAbstractSocket_WaitForDisconnected_Callback cb) const { qabstractsocket_waitfordisconnected_callback = cb; }
	inline void setQAbstractSocket_ReadData_Callback(QAbstractSocket_ReadData_Callback cb) const { qabstractsocket_readdata_callback = cb; }
	inline void setQAbstractSocket_ReadLineData_Callback(QAbstractSocket_ReadLineData_Callback cb) const { qabstractsocket_readlinedata_callback = cb; }
	inline void setQAbstractSocket_SkipData_Callback(QAbstractSocket_SkipData_Callback cb) const { qabstractsocket_skipdata_callback = cb; }
	inline void setQAbstractSocket_WriteData_Callback(QAbstractSocket_WriteData_Callback cb) const { qabstractsocket_writedata_callback = cb; }
	inline void setQAbstractSocket_SetSocketState_Callback(QAbstractSocket_SetSocketState_Callback cb) const { qabstractsocket_setsocketstate_callback = cb; }
	inline void setQAbstractSocket_SetSocketError_Callback(QAbstractSocket_SetSocketError_Callback cb) const { qabstractsocket_setsocketerror_callback = cb; }
	inline void setQAbstractSocket_SetLocalPort_Callback(QAbstractSocket_SetLocalPort_Callback cb) const { qabstractsocket_setlocalport_callback = cb; }
	inline void setQAbstractSocket_SetLocalAddress_Callback(QAbstractSocket_SetLocalAddress_Callback cb) const { qabstractsocket_setlocaladdress_callback = cb; }
	inline void setQAbstractSocket_SetPeerPort_Callback(QAbstractSocket_SetPeerPort_Callback cb) const { qabstractsocket_setpeerport_callback = cb; }
	inline void setQAbstractSocket_SetPeerAddress_Callback(QAbstractSocket_SetPeerAddress_Callback cb) const { qabstractsocket_setpeeraddress_callback = cb; }
	inline void setQAbstractSocket_SetPeerName_Callback(QAbstractSocket_SetPeerName_Callback cb) const { qabstractsocket_setpeername_callback = cb; }

// Base flag setters
	inline void setQAbstractSocket_Resume_IsBase(bool value) const { qabstractsocket_resume_isbase = value; }
	inline void setQAbstractSocket_Bind_IsBase(bool value) const { qabstractsocket_bind_isbase = value; }
	inline void setQAbstractSocket_ConnectToHost_IsBase(bool value) const { qabstractsocket_connecttohost_isbase = value; }
	inline void setQAbstractSocket_DisconnectFromHost_IsBase(bool value) const { qabstractsocket_disconnectfromhost_isbase = value; }
	inline void setQAbstractSocket_BytesAvailable_IsBase(bool value) const { qabstractsocket_bytesavailable_isbase = value; }
	inline void setQAbstractSocket_BytesToWrite_IsBase(bool value) const { qabstractsocket_bytestowrite_isbase = value; }
	inline void setQAbstractSocket_SetReadBufferSize_IsBase(bool value) const { qabstractsocket_setreadbuffersize_isbase = value; }
	inline void setQAbstractSocket_SocketDescriptor_IsBase(bool value) const { qabstractsocket_socketdescriptor_isbase = value; }
	inline void setQAbstractSocket_SetSocketDescriptor_IsBase(bool value) const { qabstractsocket_setsocketdescriptor_isbase = value; }
	inline void setQAbstractSocket_SetSocketOption_IsBase(bool value) const { qabstractsocket_setsocketoption_isbase = value; }
	inline void setQAbstractSocket_SocketOption_IsBase(bool value) const { qabstractsocket_socketoption_isbase = value; }
	inline void setQAbstractSocket_Close_IsBase(bool value) const { qabstractsocket_close_isbase = value; }
	inline void setQAbstractSocket_IsSequential_IsBase(bool value) const { qabstractsocket_issequential_isbase = value; }
	inline void setQAbstractSocket_WaitForConnected_IsBase(bool value) const { qabstractsocket_waitforconnected_isbase = value; }
	inline void setQAbstractSocket_WaitForReadyRead_IsBase(bool value) const { qabstractsocket_waitforreadyread_isbase = value; }
	inline void setQAbstractSocket_WaitForBytesWritten_IsBase(bool value) const { qabstractsocket_waitforbyteswritten_isbase = value; }
	inline void setQAbstractSocket_WaitForDisconnected_IsBase(bool value) const { qabstractsocket_waitfordisconnected_isbase = value; }
	inline void setQAbstractSocket_ReadData_IsBase(bool value) const { qabstractsocket_readdata_isbase = value; }
	inline void setQAbstractSocket_ReadLineData_IsBase(bool value) const { qabstractsocket_readlinedata_isbase = value; }
	inline void setQAbstractSocket_SkipData_IsBase(bool value) const { qabstractsocket_skipdata_isbase = value; }
	inline void setQAbstractSocket_WriteData_IsBase(bool value) const { qabstractsocket_writedata_isbase = value; }
	inline void setQAbstractSocket_SetSocketState_IsBase(bool value) const { qabstractsocket_setsocketstate_isbase = value; }
	inline void setQAbstractSocket_SetSocketError_IsBase(bool value) const { qabstractsocket_setsocketerror_isbase = value; }
	inline void setQAbstractSocket_SetLocalPort_IsBase(bool value) const { qabstractsocket_setlocalport_isbase = value; }
	inline void setQAbstractSocket_SetLocalAddress_IsBase(bool value) const { qabstractsocket_setlocaladdress_isbase = value; }
	inline void setQAbstractSocket_SetPeerPort_IsBase(bool value) const { qabstractsocket_setpeerport_isbase = value; }
	inline void setQAbstractSocket_SetPeerAddress_IsBase(bool value) const { qabstractsocket_setpeeraddress_isbase = value; }
	inline void setQAbstractSocket_SetPeerName_IsBase(bool value) const { qabstractsocket_setpeername_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void resume() override {
		if (qabstractsocket_resume_isbase) {
			qabstractsocket_resume_isbase = false;
			QAbstractSocket::resume();
		} else if (qabstractsocket_resume_callback != nullptr) {
			qabstractsocket_resume_callback();
		} else {
			QAbstractSocket::resume();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
		if (qabstractsocket_bind_isbase) {
			qabstractsocket_bind_isbase = false;
			return QAbstractSocket::bind(address, port, mode);
		} else if (qabstractsocket_bind_callback != nullptr) {
			const QHostAddress* cbval1 = (const QHostAddress*)&address;
			uint16_t cbval2 = port;
			int cbval3 = static_cast<int>(mode);
			bool callback_ret = qabstractsocket_bind_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractSocket::bind(address, port, mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (qabstractsocket_connecttohost_isbase) {
			qabstractsocket_connecttohost_isbase = false;
			QAbstractSocket::connectToHost(hostName, port, mode, protocol);
		} else if (qabstractsocket_connecttohost_callback != nullptr) {
			QByteArray hostName_qb = hostName.toUtf8();
			libqt_string cbval1;
			cbval1.len = hostName_qb.length();
			cbval1.data = static_cast<const char*>(hostName_qb.constData());
			uint16_t cbval2 = port;
			int cbval3 = static_cast<int>(mode);
			int cbval4 = static_cast<int>(protocol);
			qabstractsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QAbstractSocket::connectToHost(hostName, port, mode, protocol);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void disconnectFromHost() override {
		if (qabstractsocket_disconnectfromhost_isbase) {
			qabstractsocket_disconnectfromhost_isbase = false;
			QAbstractSocket::disconnectFromHost();
		} else if (qabstractsocket_disconnectfromhost_callback != nullptr) {
			qabstractsocket_disconnectfromhost_callback();
		} else {
			QAbstractSocket::disconnectFromHost();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesAvailable() const override {
		if (qabstractsocket_bytesavailable_isbase) {
			qabstractsocket_bytesavailable_isbase = false;
			return QAbstractSocket::bytesAvailable();
		} else if (qabstractsocket_bytesavailable_callback != nullptr) {
			long long callback_ret = qabstractsocket_bytesavailable_callback();
			return callback_ret;
		} else {
			return QAbstractSocket::bytesAvailable();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesToWrite() const override {
		if (qabstractsocket_bytestowrite_isbase) {
			qabstractsocket_bytestowrite_isbase = false;
			return QAbstractSocket::bytesToWrite();
		} else if (qabstractsocket_bytestowrite_callback != nullptr) {
			long long callback_ret = qabstractsocket_bytestowrite_callback();
			return callback_ret;
		} else {
			return QAbstractSocket::bytesToWrite();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setReadBufferSize(qint64 size) override {
		if (qabstractsocket_setreadbuffersize_isbase) {
			qabstractsocket_setreadbuffersize_isbase = false;
			QAbstractSocket::setReadBufferSize(size);
		} else if (qabstractsocket_setreadbuffersize_callback != nullptr) {
			long long cbval1 = size;
			qabstractsocket_setreadbuffersize_callback(this, cbval1);
		} else {
			QAbstractSocket::setReadBufferSize(size);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIntegerForSizeof<void *>::Signed socketDescriptor() const override {
		if (qabstractsocket_socketdescriptor_isbase) {
			qabstractsocket_socketdescriptor_isbase = false;
			return QAbstractSocket::socketDescriptor();
		} else if (qabstractsocket_socketdescriptor_callback != nullptr) {
			intptr_t callback_ret = qabstractsocket_socketdescriptor_callback();
			return callback_ret;
		} else {
			return QAbstractSocket::socketDescriptor();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setSocketDescriptor(qintptr socketDescriptor, SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (qabstractsocket_setsocketdescriptor_isbase) {
			qabstractsocket_setsocketdescriptor_isbase = false;
			return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		} else if (qabstractsocket_setsocketdescriptor_callback != nullptr) {
			intptr_t cbval1 = socketDescriptor;
			int cbval2 = static_cast<int>(state);
			int cbval3 = static_cast<int>(openMode);
			bool callback_ret = qabstractsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (qabstractsocket_setsocketoption_isbase) {
			qabstractsocket_setsocketoption_isbase = false;
			QAbstractSocket::setSocketOption(option, value);
		} else if (qabstractsocket_setsocketoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			const QVariant* cbval2 = (const QVariant*)&value;
			qabstractsocket_setsocketoption_callback(this, cbval1, cbval2);
		} else {
			QAbstractSocket::setSocketOption(option, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (qabstractsocket_socketoption_isbase) {
			qabstractsocket_socketoption_isbase = false;
			return QAbstractSocket::socketOption(option);
		} else if (qabstractsocket_socketoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			QVariant* callback_ret = qabstractsocket_socketoption_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractSocket::socketOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qabstractsocket_close_isbase) {
			qabstractsocket_close_isbase = false;
			QAbstractSocket::close();
		} else if (qabstractsocket_close_callback != nullptr) {
			qabstractsocket_close_callback();
		} else {
			QAbstractSocket::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qabstractsocket_issequential_isbase) {
			qabstractsocket_issequential_isbase = false;
			return QAbstractSocket::isSequential();
		} else if (qabstractsocket_issequential_callback != nullptr) {
			bool callback_ret = qabstractsocket_issequential_callback();
			return callback_ret;
		} else {
			return QAbstractSocket::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForConnected(int msecs) override {
		if (qabstractsocket_waitforconnected_isbase) {
			qabstractsocket_waitforconnected_isbase = false;
			return QAbstractSocket::waitForConnected(msecs);
		} else if (qabstractsocket_waitforconnected_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qabstractsocket_waitforconnected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSocket::waitForConnected(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForReadyRead(int msecs) override {
		if (qabstractsocket_waitforreadyread_isbase) {
			qabstractsocket_waitforreadyread_isbase = false;
			return QAbstractSocket::waitForReadyRead(msecs);
		} else if (qabstractsocket_waitforreadyread_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qabstractsocket_waitforreadyread_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSocket::waitForReadyRead(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForBytesWritten(int msecs) override {
		if (qabstractsocket_waitforbyteswritten_isbase) {
			qabstractsocket_waitforbyteswritten_isbase = false;
			return QAbstractSocket::waitForBytesWritten(msecs);
		} else if (qabstractsocket_waitforbyteswritten_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qabstractsocket_waitforbyteswritten_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSocket::waitForBytesWritten(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForDisconnected(int msecs) override {
		if (qabstractsocket_waitfordisconnected_isbase) {
			qabstractsocket_waitfordisconnected_isbase = false;
			return QAbstractSocket::waitForDisconnected(msecs);
		} else if (qabstractsocket_waitfordisconnected_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qabstractsocket_waitfordisconnected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSocket::waitForDisconnected(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qabstractsocket_readdata_isbase) {
			qabstractsocket_readdata_isbase = false;
			return QAbstractSocket::readData(data, maxlen);
		} else if (qabstractsocket_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qabstractsocket_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractSocket::readData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readLineData(char* data, qint64 maxlen) override {
		if (qabstractsocket_readlinedata_isbase) {
			qabstractsocket_readlinedata_isbase = false;
			return QAbstractSocket::readLineData(data, maxlen);
		} else if (qabstractsocket_readlinedata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qabstractsocket_readlinedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractSocket::readLineData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long skipData(qint64 maxSize) override {
		if (qabstractsocket_skipdata_isbase) {
			qabstractsocket_skipdata_isbase = false;
			return QAbstractSocket::skipData(maxSize);
		} else if (qabstractsocket_skipdata_callback != nullptr) {
			long long cbval1 = maxSize;
			long long callback_ret = qabstractsocket_skipdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSocket::skipData(maxSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qabstractsocket_writedata_isbase) {
			qabstractsocket_writedata_isbase = false;
			return QAbstractSocket::writeData(data, lenVal);
		} else if (qabstractsocket_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qabstractsocket_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractSocket::writeData(data, lenVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setSocketState(SocketState state) {
		if (qabstractsocket_setsocketstate_isbase) {
			qabstractsocket_setsocketstate_isbase = false;
			QAbstractSocket::setSocketState(state);
		} else if (qabstractsocket_setsocketstate_callback != nullptr) {
			int cbval1 = static_cast<int>(state);
			qabstractsocket_setsocketstate_callback(this, cbval1);
		} else {
			QAbstractSocket::setSocketState(state);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setSocketError(SocketError socketError) {
		if (qabstractsocket_setsocketerror_isbase) {
			qabstractsocket_setsocketerror_isbase = false;
			QAbstractSocket::setSocketError(socketError);
		} else if (qabstractsocket_setsocketerror_callback != nullptr) {
			int cbval1 = static_cast<int>(socketError);
			qabstractsocket_setsocketerror_callback(this, cbval1);
		} else {
			QAbstractSocket::setSocketError(socketError);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLocalPort(quint16 port) {
		if (qabstractsocket_setlocalport_isbase) {
			qabstractsocket_setlocalport_isbase = false;
			QAbstractSocket::setLocalPort(port);
		} else if (qabstractsocket_setlocalport_callback != nullptr) {
			uint16_t cbval1 = port;
			qabstractsocket_setlocalport_callback(this, cbval1);
		} else {
			QAbstractSocket::setLocalPort(port);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLocalAddress(const QHostAddress& address) {
		if (qabstractsocket_setlocaladdress_isbase) {
			qabstractsocket_setlocaladdress_isbase = false;
			QAbstractSocket::setLocalAddress(address);
		} else if (qabstractsocket_setlocaladdress_callback != nullptr) {
			const QHostAddress* cbval1 = (const QHostAddress*)&address;
			qabstractsocket_setlocaladdress_callback(this, cbval1);
		} else {
			QAbstractSocket::setLocalAddress(address);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPeerPort(quint16 port) {
		if (qabstractsocket_setpeerport_isbase) {
			qabstractsocket_setpeerport_isbase = false;
			QAbstractSocket::setPeerPort(port);
		} else if (qabstractsocket_setpeerport_callback != nullptr) {
			uint16_t cbval1 = port;
			qabstractsocket_setpeerport_callback(this, cbval1);
		} else {
			QAbstractSocket::setPeerPort(port);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPeerAddress(const QHostAddress& address) {
		if (qabstractsocket_setpeeraddress_isbase) {
			qabstractsocket_setpeeraddress_isbase = false;
			QAbstractSocket::setPeerAddress(address);
		} else if (qabstractsocket_setpeeraddress_callback != nullptr) {
			const QHostAddress* cbval1 = (const QHostAddress*)&address;
			qabstractsocket_setpeeraddress_callback(this, cbval1);
		} else {
			QAbstractSocket::setPeerAddress(address);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setPeerName(const QString& name) {
		if (qabstractsocket_setpeername_isbase) {
			qabstractsocket_setpeername_isbase = false;
			QAbstractSocket::setPeerName(name);
		} else if (qabstractsocket_setpeername_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			qabstractsocket_setpeername_callback(this, cbval1);
		} else {
			QAbstractSocket::setPeerName(name);
		}
	}

	// Friend functions
	friend long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen);
	friend long long QAbstractSocket_QBaseReadData(QAbstractSocket* self, char* data, long long maxlen);
	friend long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen);
	friend long long QAbstractSocket_QBaseReadLineData(QAbstractSocket* self, char* data, long long maxlen);
	friend long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize);
	friend long long QAbstractSocket_QBaseSkipData(QAbstractSocket* self, long long maxSize);
	friend long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal);
	friend long long QAbstractSocket_QBaseWriteData(QAbstractSocket* self, const char* data, long long lenVal);
	friend void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state);
	friend void QAbstractSocket_QBaseSetSocketState(QAbstractSocket* self, int state);
	friend void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError);
	friend void QAbstractSocket_QBaseSetSocketError(QAbstractSocket* self, int socketError);
	friend void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port);
	friend void QAbstractSocket_QBaseSetLocalPort(QAbstractSocket* self, uint16_t port);
	friend void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
	friend void QAbstractSocket_QBaseSetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
	friend void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port);
	friend void QAbstractSocket_QBaseSetPeerPort(QAbstractSocket* self, uint16_t port);
	friend void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
	friend void QAbstractSocket_QBaseSetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
	friend void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name);
	friend void QAbstractSocket_QBaseSetPeerName(QAbstractSocket* self, const libqt_string name);
};

#endif


