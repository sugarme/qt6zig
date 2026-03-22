#pragma once
#ifndef QSSLSOCKET_H_C_LIBVIRTUAL
#define QSSLSOCKET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSslSocket so that we can call protected methods
class VirtualQSslSocket final : public QSslSocket {

public:
	// Virtual class boolean flag
	bool isVirtualQSslSocket= true;

	// Virtual class public types (including callbacks)
	using QSslSocket_Resume_Callback = void (*)();
	using QSslSocket_SetSocketDescriptor_Callback = bool (*)(QSslSocket*, intptr_t, int, int);
	using QSslSocket_ConnectToHost_Callback = void (*)(QSslSocket*, libqt_string, uint16_t, int, int);
	using QSslSocket_DisconnectFromHost_Callback = void (*)();
	using QSslSocket_SetSocketOption_Callback = void (*)(QSslSocket*, int, const QVariant*);
	using QSslSocket_SocketOption_Callback = QVariant* (*)(QSslSocket*, int);
	using QSslSocket_BytesAvailable_Callback = long long (*)();
	using QSslSocket_BytesToWrite_Callback = long long (*)();
	using QSslSocket_CanReadLine_Callback = bool (*)();
	using QSslSocket_Close_Callback = void (*)();
	using QSslSocket_AtEnd_Callback = bool (*)();
	using QSslSocket_SetReadBufferSize_Callback = void (*)(QSslSocket*, long long);
	using QSslSocket_WaitForConnected_Callback = bool (*)(QSslSocket*, int);
	using QSslSocket_WaitForReadyRead_Callback = bool (*)(QSslSocket*, int);
	using QSslSocket_WaitForBytesWritten_Callback = bool (*)(QSslSocket*, int);
	using QSslSocket_WaitForDisconnected_Callback = bool (*)(QSslSocket*, int);
	using QSslSocket_ReadData_Callback = long long (*)(QSslSocket*, char*, long long);
	using QSslSocket_SkipData_Callback = long long (*)(QSslSocket*, long long);
	using QSslSocket_WriteData_Callback = long long (*)(QSslSocket*, const char*, long long);

protected:
	// Instance callback storage
	mutable QSslSocket_Resume_Callback qsslsocket_resume_callback = nullptr;
	mutable QSslSocket_SetSocketDescriptor_Callback qsslsocket_setsocketdescriptor_callback = nullptr;
	mutable QSslSocket_ConnectToHost_Callback qsslsocket_connecttohost_callback = nullptr;
	mutable QSslSocket_DisconnectFromHost_Callback qsslsocket_disconnectfromhost_callback = nullptr;
	mutable QSslSocket_SetSocketOption_Callback qsslsocket_setsocketoption_callback = nullptr;
	mutable QSslSocket_SocketOption_Callback qsslsocket_socketoption_callback = nullptr;
	mutable QSslSocket_BytesAvailable_Callback qsslsocket_bytesavailable_callback = nullptr;
	mutable QSslSocket_BytesToWrite_Callback qsslsocket_bytestowrite_callback = nullptr;
	mutable QSslSocket_CanReadLine_Callback qsslsocket_canreadline_callback = nullptr;
	mutable QSslSocket_Close_Callback qsslsocket_close_callback = nullptr;
	mutable QSslSocket_AtEnd_Callback qsslsocket_atend_callback = nullptr;
	mutable QSslSocket_SetReadBufferSize_Callback qsslsocket_setreadbuffersize_callback = nullptr;
	mutable QSslSocket_WaitForConnected_Callback qsslsocket_waitforconnected_callback = nullptr;
	mutable QSslSocket_WaitForReadyRead_Callback qsslsocket_waitforreadyread_callback = nullptr;
	mutable QSslSocket_WaitForBytesWritten_Callback qsslsocket_waitforbyteswritten_callback = nullptr;
	mutable QSslSocket_WaitForDisconnected_Callback qsslsocket_waitfordisconnected_callback = nullptr;
	mutable QSslSocket_ReadData_Callback qsslsocket_readdata_callback = nullptr;
	mutable QSslSocket_SkipData_Callback qsslsocket_skipdata_callback = nullptr;
	mutable QSslSocket_WriteData_Callback qsslsocket_writedata_callback = nullptr;

	// Instance base flags
    mutable bool qsslsocket_resume_isbase = false;
    mutable bool qsslsocket_setsocketdescriptor_isbase = false;
    mutable bool qsslsocket_connecttohost_isbase = false;
    mutable bool qsslsocket_disconnectfromhost_isbase = false;
    mutable bool qsslsocket_setsocketoption_isbase = false;
    mutable bool qsslsocket_socketoption_isbase = false;
    mutable bool qsslsocket_bytesavailable_isbase = false;
    mutable bool qsslsocket_bytestowrite_isbase = false;
    mutable bool qsslsocket_canreadline_isbase = false;
    mutable bool qsslsocket_close_isbase = false;
    mutable bool qsslsocket_atend_isbase = false;
    mutable bool qsslsocket_setreadbuffersize_isbase = false;
    mutable bool qsslsocket_waitforconnected_isbase = false;
    mutable bool qsslsocket_waitforreadyread_isbase = false;
    mutable bool qsslsocket_waitforbyteswritten_isbase = false;
    mutable bool qsslsocket_waitfordisconnected_isbase = false;
    mutable bool qsslsocket_readdata_isbase = false;
    mutable bool qsslsocket_skipdata_isbase = false;
    mutable bool qsslsocket_writedata_isbase = false;

public:
	VirtualQSslSocket(): QSslSocket() {};
	VirtualQSslSocket(QObject* parent): QSslSocket(parent) {};

	~VirtualQSslSocket() {
		qsslsocket_resume_callback = nullptr;
		qsslsocket_setsocketdescriptor_callback = nullptr;
		qsslsocket_connecttohost_callback = nullptr;
		qsslsocket_disconnectfromhost_callback = nullptr;
		qsslsocket_setsocketoption_callback = nullptr;
		qsslsocket_socketoption_callback = nullptr;
		qsslsocket_bytesavailable_callback = nullptr;
		qsslsocket_bytestowrite_callback = nullptr;
		qsslsocket_canreadline_callback = nullptr;
		qsslsocket_close_callback = nullptr;
		qsslsocket_atend_callback = nullptr;
		qsslsocket_setreadbuffersize_callback = nullptr;
		qsslsocket_waitforconnected_callback = nullptr;
		qsslsocket_waitforreadyread_callback = nullptr;
		qsslsocket_waitforbyteswritten_callback = nullptr;
		qsslsocket_waitfordisconnected_callback = nullptr;
		qsslsocket_readdata_callback = nullptr;
		qsslsocket_skipdata_callback = nullptr;
		qsslsocket_writedata_callback = nullptr;
	}

// Callback setters
	inline void setQSslSocket_Resume_Callback(QSslSocket_Resume_Callback cb) const { qsslsocket_resume_callback = cb; }
	inline void setQSslSocket_SetSocketDescriptor_Callback(QSslSocket_SetSocketDescriptor_Callback cb) const { qsslsocket_setsocketdescriptor_callback = cb; }
	inline void setQSslSocket_ConnectToHost_Callback(QSslSocket_ConnectToHost_Callback cb) const { qsslsocket_connecttohost_callback = cb; }
	inline void setQSslSocket_DisconnectFromHost_Callback(QSslSocket_DisconnectFromHost_Callback cb) const { qsslsocket_disconnectfromhost_callback = cb; }
	inline void setQSslSocket_SetSocketOption_Callback(QSslSocket_SetSocketOption_Callback cb) const { qsslsocket_setsocketoption_callback = cb; }
	inline void setQSslSocket_SocketOption_Callback(QSslSocket_SocketOption_Callback cb) const { qsslsocket_socketoption_callback = cb; }
	inline void setQSslSocket_BytesAvailable_Callback(QSslSocket_BytesAvailable_Callback cb) const { qsslsocket_bytesavailable_callback = cb; }
	inline void setQSslSocket_BytesToWrite_Callback(QSslSocket_BytesToWrite_Callback cb) const { qsslsocket_bytestowrite_callback = cb; }
	inline void setQSslSocket_CanReadLine_Callback(QSslSocket_CanReadLine_Callback cb) const { qsslsocket_canreadline_callback = cb; }
	inline void setQSslSocket_Close_Callback(QSslSocket_Close_Callback cb) const { qsslsocket_close_callback = cb; }
	inline void setQSslSocket_AtEnd_Callback(QSslSocket_AtEnd_Callback cb) const { qsslsocket_atend_callback = cb; }
	inline void setQSslSocket_SetReadBufferSize_Callback(QSslSocket_SetReadBufferSize_Callback cb) const { qsslsocket_setreadbuffersize_callback = cb; }
	inline void setQSslSocket_WaitForConnected_Callback(QSslSocket_WaitForConnected_Callback cb) const { qsslsocket_waitforconnected_callback = cb; }
	inline void setQSslSocket_WaitForReadyRead_Callback(QSslSocket_WaitForReadyRead_Callback cb) const { qsslsocket_waitforreadyread_callback = cb; }
	inline void setQSslSocket_WaitForBytesWritten_Callback(QSslSocket_WaitForBytesWritten_Callback cb) const { qsslsocket_waitforbyteswritten_callback = cb; }
	inline void setQSslSocket_WaitForDisconnected_Callback(QSslSocket_WaitForDisconnected_Callback cb) const { qsslsocket_waitfordisconnected_callback = cb; }
	inline void setQSslSocket_ReadData_Callback(QSslSocket_ReadData_Callback cb) const { qsslsocket_readdata_callback = cb; }
	inline void setQSslSocket_SkipData_Callback(QSslSocket_SkipData_Callback cb) const { qsslsocket_skipdata_callback = cb; }
	inline void setQSslSocket_WriteData_Callback(QSslSocket_WriteData_Callback cb) const { qsslsocket_writedata_callback = cb; }

// Base flag setters
	inline void setQSslSocket_Resume_IsBase(bool value) const { qsslsocket_resume_isbase = value; }
	inline void setQSslSocket_SetSocketDescriptor_IsBase(bool value) const { qsslsocket_setsocketdescriptor_isbase = value; }
	inline void setQSslSocket_ConnectToHost_IsBase(bool value) const { qsslsocket_connecttohost_isbase = value; }
	inline void setQSslSocket_DisconnectFromHost_IsBase(bool value) const { qsslsocket_disconnectfromhost_isbase = value; }
	inline void setQSslSocket_SetSocketOption_IsBase(bool value) const { qsslsocket_setsocketoption_isbase = value; }
	inline void setQSslSocket_SocketOption_IsBase(bool value) const { qsslsocket_socketoption_isbase = value; }
	inline void setQSslSocket_BytesAvailable_IsBase(bool value) const { qsslsocket_bytesavailable_isbase = value; }
	inline void setQSslSocket_BytesToWrite_IsBase(bool value) const { qsslsocket_bytestowrite_isbase = value; }
	inline void setQSslSocket_CanReadLine_IsBase(bool value) const { qsslsocket_canreadline_isbase = value; }
	inline void setQSslSocket_Close_IsBase(bool value) const { qsslsocket_close_isbase = value; }
	inline void setQSslSocket_AtEnd_IsBase(bool value) const { qsslsocket_atend_isbase = value; }
	inline void setQSslSocket_SetReadBufferSize_IsBase(bool value) const { qsslsocket_setreadbuffersize_isbase = value; }
	inline void setQSslSocket_WaitForConnected_IsBase(bool value) const { qsslsocket_waitforconnected_isbase = value; }
	inline void setQSslSocket_WaitForReadyRead_IsBase(bool value) const { qsslsocket_waitforreadyread_isbase = value; }
	inline void setQSslSocket_WaitForBytesWritten_IsBase(bool value) const { qsslsocket_waitforbyteswritten_isbase = value; }
	inline void setQSslSocket_WaitForDisconnected_IsBase(bool value) const { qsslsocket_waitfordisconnected_isbase = value; }
	inline void setQSslSocket_ReadData_IsBase(bool value) const { qsslsocket_readdata_isbase = value; }
	inline void setQSslSocket_SkipData_IsBase(bool value) const { qsslsocket_skipdata_isbase = value; }
	inline void setQSslSocket_WriteData_IsBase(bool value) const { qsslsocket_writedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void resume() override {
		if (qsslsocket_resume_isbase) {
			qsslsocket_resume_isbase = false;
			QSslSocket::resume();
		} else if (qsslsocket_resume_callback != nullptr) {
			qsslsocket_resume_callback();
		} else {
			QSslSocket::resume();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setSocketDescriptor(qintptr socketDescriptor, SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (qsslsocket_setsocketdescriptor_isbase) {
			qsslsocket_setsocketdescriptor_isbase = false;
			return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		} else if (qsslsocket_setsocketdescriptor_callback != nullptr) {
			intptr_t cbval1 = socketDescriptor;
			int cbval2 = static_cast<int>(state);
			int cbval3 = static_cast<int>(openMode);
			bool callback_ret = qsslsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (qsslsocket_connecttohost_isbase) {
			qsslsocket_connecttohost_isbase = false;
			QSslSocket::connectToHost(hostName, port, openMode, protocol);
		} else if (qsslsocket_connecttohost_callback != nullptr) {
			QByteArray hostName_qb = hostName.toUtf8();
			libqt_string cbval1;
			cbval1.len = hostName_qb.length();
			cbval1.data = static_cast<const char*>(hostName_qb.constData());
			uint16_t cbval2 = port;
			int cbval3 = static_cast<int>(openMode);
			int cbval4 = static_cast<int>(protocol);
			qsslsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QSslSocket::connectToHost(hostName, port, openMode, protocol);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void disconnectFromHost() override {
		if (qsslsocket_disconnectfromhost_isbase) {
			qsslsocket_disconnectfromhost_isbase = false;
			QSslSocket::disconnectFromHost();
		} else if (qsslsocket_disconnectfromhost_callback != nullptr) {
			qsslsocket_disconnectfromhost_callback();
		} else {
			QSslSocket::disconnectFromHost();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (qsslsocket_setsocketoption_isbase) {
			qsslsocket_setsocketoption_isbase = false;
			QSslSocket::setSocketOption(option, value);
		} else if (qsslsocket_setsocketoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			const QVariant* cbval2 = (const QVariant*)&value;
			qsslsocket_setsocketoption_callback(this, cbval1, cbval2);
		} else {
			QSslSocket::setSocketOption(option, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (qsslsocket_socketoption_isbase) {
			qsslsocket_socketoption_isbase = false;
			return QSslSocket::socketOption(option);
		} else if (qsslsocket_socketoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			QVariant* callback_ret = qsslsocket_socketoption_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QSslSocket::socketOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesAvailable() const override {
		if (qsslsocket_bytesavailable_isbase) {
			qsslsocket_bytesavailable_isbase = false;
			return QSslSocket::bytesAvailable();
		} else if (qsslsocket_bytesavailable_callback != nullptr) {
			long long callback_ret = qsslsocket_bytesavailable_callback();
			return callback_ret;
		} else {
			return QSslSocket::bytesAvailable();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesToWrite() const override {
		if (qsslsocket_bytestowrite_isbase) {
			qsslsocket_bytestowrite_isbase = false;
			return QSslSocket::bytesToWrite();
		} else if (qsslsocket_bytestowrite_callback != nullptr) {
			long long callback_ret = qsslsocket_bytestowrite_callback();
			return callback_ret;
		} else {
			return QSslSocket::bytesToWrite();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canReadLine() const override {
		if (qsslsocket_canreadline_isbase) {
			qsslsocket_canreadline_isbase = false;
			return QSslSocket::canReadLine();
		} else if (qsslsocket_canreadline_callback != nullptr) {
			bool callback_ret = qsslsocket_canreadline_callback();
			return callback_ret;
		} else {
			return QSslSocket::canReadLine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qsslsocket_close_isbase) {
			qsslsocket_close_isbase = false;
			QSslSocket::close();
		} else if (qsslsocket_close_callback != nullptr) {
			qsslsocket_close_callback();
		} else {
			QSslSocket::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool atEnd() const override {
		if (qsslsocket_atend_isbase) {
			qsslsocket_atend_isbase = false;
			return QSslSocket::atEnd();
		} else if (qsslsocket_atend_callback != nullptr) {
			bool callback_ret = qsslsocket_atend_callback();
			return callback_ret;
		} else {
			return QSslSocket::atEnd();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setReadBufferSize(qint64 size) override {
		if (qsslsocket_setreadbuffersize_isbase) {
			qsslsocket_setreadbuffersize_isbase = false;
			QSslSocket::setReadBufferSize(size);
		} else if (qsslsocket_setreadbuffersize_callback != nullptr) {
			long long cbval1 = size;
			qsslsocket_setreadbuffersize_callback(this, cbval1);
		} else {
			QSslSocket::setReadBufferSize(size);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForConnected(int msecs) override {
		if (qsslsocket_waitforconnected_isbase) {
			qsslsocket_waitforconnected_isbase = false;
			return QSslSocket::waitForConnected(msecs);
		} else if (qsslsocket_waitforconnected_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qsslsocket_waitforconnected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSslSocket::waitForConnected(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForReadyRead(int msecs) override {
		if (qsslsocket_waitforreadyread_isbase) {
			qsslsocket_waitforreadyread_isbase = false;
			return QSslSocket::waitForReadyRead(msecs);
		} else if (qsslsocket_waitforreadyread_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qsslsocket_waitforreadyread_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSslSocket::waitForReadyRead(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForBytesWritten(int msecs) override {
		if (qsslsocket_waitforbyteswritten_isbase) {
			qsslsocket_waitforbyteswritten_isbase = false;
			return QSslSocket::waitForBytesWritten(msecs);
		} else if (qsslsocket_waitforbyteswritten_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qsslsocket_waitforbyteswritten_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSslSocket::waitForBytesWritten(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForDisconnected(int msecs) override {
		if (qsslsocket_waitfordisconnected_isbase) {
			qsslsocket_waitfordisconnected_isbase = false;
			return QSslSocket::waitForDisconnected(msecs);
		} else if (qsslsocket_waitfordisconnected_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qsslsocket_waitfordisconnected_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSslSocket::waitForDisconnected(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qsslsocket_readdata_isbase) {
			qsslsocket_readdata_isbase = false;
			return QSslSocket::readData(data, maxlen);
		} else if (qsslsocket_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qsslsocket_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSslSocket::readData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long skipData(qint64 maxSize) override {
		if (qsslsocket_skipdata_isbase) {
			qsslsocket_skipdata_isbase = false;
			return QSslSocket::skipData(maxSize);
		} else if (qsslsocket_skipdata_callback != nullptr) {
			long long cbval1 = maxSize;
			long long callback_ret = qsslsocket_skipdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSslSocket::skipData(maxSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qsslsocket_writedata_isbase) {
			qsslsocket_writedata_isbase = false;
			return QSslSocket::writeData(data, lenVal);
		} else if (qsslsocket_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qsslsocket_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSslSocket::writeData(data, lenVal);
		}
	}

	// Friend functions
	friend long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen);
	friend long long QSslSocket_QBaseReadData(QSslSocket* self, char* data, long long maxlen);
	friend long long QSslSocket_SkipData(QSslSocket* self, long long maxSize);
	friend long long QSslSocket_QBaseSkipData(QSslSocket* self, long long maxSize);
	friend long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal);
	friend long long QSslSocket_QBaseWriteData(QSslSocket* self, const char* data, long long lenVal);
};

#endif


