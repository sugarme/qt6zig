#pragma once
#ifndef QLOCALSOCKET_H_C_LIBVIRTUAL
#define QLOCALSOCKET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLocalSocket so that we can call protected methods
class VirtualQLocalSocket final : public QLocalSocket {

public:
	// Virtual class boolean flag
	bool isVirtualQLocalSocket= true;

	// Virtual class public types (including callbacks)
	using QLocalSocket_IsSequential_Callback = bool (*)();
	using QLocalSocket_BytesAvailable_Callback = long long (*)();
	using QLocalSocket_BytesToWrite_Callback = long long (*)();
	using QLocalSocket_CanReadLine_Callback = bool (*)();
	using QLocalSocket_Open_Callback = bool (*)(QLocalSocket*, int);
	using QLocalSocket_Close_Callback = void (*)();
	using QLocalSocket_WaitForBytesWritten_Callback = bool (*)(QLocalSocket*, int);
	using QLocalSocket_WaitForReadyRead_Callback = bool (*)(QLocalSocket*, int);
	using QLocalSocket_ReadData_Callback = long long (*)(QLocalSocket*, char*, long long);
	using QLocalSocket_ReadLineData_Callback = long long (*)(QLocalSocket*, char*, long long);
	using QLocalSocket_SkipData_Callback = long long (*)(QLocalSocket*, long long);
	using QLocalSocket_WriteData_Callback = long long (*)(QLocalSocket*, const char*, long long);

protected:
	// Instance callback storage
	mutable QLocalSocket_IsSequential_Callback qlocalsocket_issequential_callback = nullptr;
	mutable QLocalSocket_BytesAvailable_Callback qlocalsocket_bytesavailable_callback = nullptr;
	mutable QLocalSocket_BytesToWrite_Callback qlocalsocket_bytestowrite_callback = nullptr;
	mutable QLocalSocket_CanReadLine_Callback qlocalsocket_canreadline_callback = nullptr;
	mutable QLocalSocket_Open_Callback qlocalsocket_open_callback = nullptr;
	mutable QLocalSocket_Close_Callback qlocalsocket_close_callback = nullptr;
	mutable QLocalSocket_WaitForBytesWritten_Callback qlocalsocket_waitforbyteswritten_callback = nullptr;
	mutable QLocalSocket_WaitForReadyRead_Callback qlocalsocket_waitforreadyread_callback = nullptr;
	mutable QLocalSocket_ReadData_Callback qlocalsocket_readdata_callback = nullptr;
	mutable QLocalSocket_ReadLineData_Callback qlocalsocket_readlinedata_callback = nullptr;
	mutable QLocalSocket_SkipData_Callback qlocalsocket_skipdata_callback = nullptr;
	mutable QLocalSocket_WriteData_Callback qlocalsocket_writedata_callback = nullptr;

	// Instance base flags
    mutable bool qlocalsocket_issequential_isbase = false;
    mutable bool qlocalsocket_bytesavailable_isbase = false;
    mutable bool qlocalsocket_bytestowrite_isbase = false;
    mutable bool qlocalsocket_canreadline_isbase = false;
    mutable bool qlocalsocket_open_isbase = false;
    mutable bool qlocalsocket_close_isbase = false;
    mutable bool qlocalsocket_waitforbyteswritten_isbase = false;
    mutable bool qlocalsocket_waitforreadyread_isbase = false;
    mutable bool qlocalsocket_readdata_isbase = false;
    mutable bool qlocalsocket_readlinedata_isbase = false;
    mutable bool qlocalsocket_skipdata_isbase = false;
    mutable bool qlocalsocket_writedata_isbase = false;

public:
	VirtualQLocalSocket(): QLocalSocket() {};
	VirtualQLocalSocket(QObject* parent): QLocalSocket(parent) {};

	~VirtualQLocalSocket() {
		qlocalsocket_issequential_callback = nullptr;
		qlocalsocket_bytesavailable_callback = nullptr;
		qlocalsocket_bytestowrite_callback = nullptr;
		qlocalsocket_canreadline_callback = nullptr;
		qlocalsocket_open_callback = nullptr;
		qlocalsocket_close_callback = nullptr;
		qlocalsocket_waitforbyteswritten_callback = nullptr;
		qlocalsocket_waitforreadyread_callback = nullptr;
		qlocalsocket_readdata_callback = nullptr;
		qlocalsocket_readlinedata_callback = nullptr;
		qlocalsocket_skipdata_callback = nullptr;
		qlocalsocket_writedata_callback = nullptr;
	}

// Callback setters
	inline void setQLocalSocket_IsSequential_Callback(QLocalSocket_IsSequential_Callback cb) const { qlocalsocket_issequential_callback = cb; }
	inline void setQLocalSocket_BytesAvailable_Callback(QLocalSocket_BytesAvailable_Callback cb) const { qlocalsocket_bytesavailable_callback = cb; }
	inline void setQLocalSocket_BytesToWrite_Callback(QLocalSocket_BytesToWrite_Callback cb) const { qlocalsocket_bytestowrite_callback = cb; }
	inline void setQLocalSocket_CanReadLine_Callback(QLocalSocket_CanReadLine_Callback cb) const { qlocalsocket_canreadline_callback = cb; }
	inline void setQLocalSocket_Open_Callback(QLocalSocket_Open_Callback cb) const { qlocalsocket_open_callback = cb; }
	inline void setQLocalSocket_Close_Callback(QLocalSocket_Close_Callback cb) const { qlocalsocket_close_callback = cb; }
	inline void setQLocalSocket_WaitForBytesWritten_Callback(QLocalSocket_WaitForBytesWritten_Callback cb) const { qlocalsocket_waitforbyteswritten_callback = cb; }
	inline void setQLocalSocket_WaitForReadyRead_Callback(QLocalSocket_WaitForReadyRead_Callback cb) const { qlocalsocket_waitforreadyread_callback = cb; }
	inline void setQLocalSocket_ReadData_Callback(QLocalSocket_ReadData_Callback cb) const { qlocalsocket_readdata_callback = cb; }
	inline void setQLocalSocket_ReadLineData_Callback(QLocalSocket_ReadLineData_Callback cb) const { qlocalsocket_readlinedata_callback = cb; }
	inline void setQLocalSocket_SkipData_Callback(QLocalSocket_SkipData_Callback cb) const { qlocalsocket_skipdata_callback = cb; }
	inline void setQLocalSocket_WriteData_Callback(QLocalSocket_WriteData_Callback cb) const { qlocalsocket_writedata_callback = cb; }

// Base flag setters
	inline void setQLocalSocket_IsSequential_IsBase(bool value) const { qlocalsocket_issequential_isbase = value; }
	inline void setQLocalSocket_BytesAvailable_IsBase(bool value) const { qlocalsocket_bytesavailable_isbase = value; }
	inline void setQLocalSocket_BytesToWrite_IsBase(bool value) const { qlocalsocket_bytestowrite_isbase = value; }
	inline void setQLocalSocket_CanReadLine_IsBase(bool value) const { qlocalsocket_canreadline_isbase = value; }
	inline void setQLocalSocket_Open_IsBase(bool value) const { qlocalsocket_open_isbase = value; }
	inline void setQLocalSocket_Close_IsBase(bool value) const { qlocalsocket_close_isbase = value; }
	inline void setQLocalSocket_WaitForBytesWritten_IsBase(bool value) const { qlocalsocket_waitforbyteswritten_isbase = value; }
	inline void setQLocalSocket_WaitForReadyRead_IsBase(bool value) const { qlocalsocket_waitforreadyread_isbase = value; }
	inline void setQLocalSocket_ReadData_IsBase(bool value) const { qlocalsocket_readdata_isbase = value; }
	inline void setQLocalSocket_ReadLineData_IsBase(bool value) const { qlocalsocket_readlinedata_isbase = value; }
	inline void setQLocalSocket_SkipData_IsBase(bool value) const { qlocalsocket_skipdata_isbase = value; }
	inline void setQLocalSocket_WriteData_IsBase(bool value) const { qlocalsocket_writedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qlocalsocket_issequential_isbase) {
			qlocalsocket_issequential_isbase = false;
			return QLocalSocket::isSequential();
		} else if (qlocalsocket_issequential_callback != nullptr) {
			bool callback_ret = qlocalsocket_issequential_callback();
			return callback_ret;
		} else {
			return QLocalSocket::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesAvailable() const override {
		if (qlocalsocket_bytesavailable_isbase) {
			qlocalsocket_bytesavailable_isbase = false;
			return QLocalSocket::bytesAvailable();
		} else if (qlocalsocket_bytesavailable_callback != nullptr) {
			long long callback_ret = qlocalsocket_bytesavailable_callback();
			return callback_ret;
		} else {
			return QLocalSocket::bytesAvailable();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesToWrite() const override {
		if (qlocalsocket_bytestowrite_isbase) {
			qlocalsocket_bytestowrite_isbase = false;
			return QLocalSocket::bytesToWrite();
		} else if (qlocalsocket_bytestowrite_callback != nullptr) {
			long long callback_ret = qlocalsocket_bytestowrite_callback();
			return callback_ret;
		} else {
			return QLocalSocket::bytesToWrite();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canReadLine() const override {
		if (qlocalsocket_canreadline_isbase) {
			qlocalsocket_canreadline_isbase = false;
			return QLocalSocket::canReadLine();
		} else if (qlocalsocket_canreadline_callback != nullptr) {
			bool callback_ret = qlocalsocket_canreadline_callback();
			return callback_ret;
		} else {
			return QLocalSocket::canReadLine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode openMode) override {
		if (qlocalsocket_open_isbase) {
			qlocalsocket_open_isbase = false;
			return QLocalSocket::open(openMode);
		} else if (qlocalsocket_open_callback != nullptr) {
			int cbval1 = static_cast<int>(openMode);
			bool callback_ret = qlocalsocket_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLocalSocket::open(openMode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qlocalsocket_close_isbase) {
			qlocalsocket_close_isbase = false;
			QLocalSocket::close();
		} else if (qlocalsocket_close_callback != nullptr) {
			qlocalsocket_close_callback();
		} else {
			QLocalSocket::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForBytesWritten(int msecs) override {
		if (qlocalsocket_waitforbyteswritten_isbase) {
			qlocalsocket_waitforbyteswritten_isbase = false;
			return QLocalSocket::waitForBytesWritten(msecs);
		} else if (qlocalsocket_waitforbyteswritten_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qlocalsocket_waitforbyteswritten_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLocalSocket::waitForBytesWritten(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForReadyRead(int msecs) override {
		if (qlocalsocket_waitforreadyread_isbase) {
			qlocalsocket_waitforreadyread_isbase = false;
			return QLocalSocket::waitForReadyRead(msecs);
		} else if (qlocalsocket_waitforreadyread_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qlocalsocket_waitforreadyread_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLocalSocket::waitForReadyRead(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* param1, long long param2) override {
		if (qlocalsocket_readdata_isbase) {
			qlocalsocket_readdata_isbase = false;
			return QLocalSocket::readData(param1, param2);
		} else if (qlocalsocket_readdata_callback != nullptr) {
			char* cbval1 = param1;
			long long cbval2 = param2;
			long long callback_ret = qlocalsocket_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QLocalSocket::readData(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readLineData(char* data, qint64 maxSize) override {
		if (qlocalsocket_readlinedata_isbase) {
			qlocalsocket_readlinedata_isbase = false;
			return QLocalSocket::readLineData(data, maxSize);
		} else if (qlocalsocket_readlinedata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxSize;
			long long callback_ret = qlocalsocket_readlinedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QLocalSocket::readLineData(data, maxSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long skipData(qint64 maxSize) override {
		if (qlocalsocket_skipdata_isbase) {
			qlocalsocket_skipdata_isbase = false;
			return QLocalSocket::skipData(maxSize);
		} else if (qlocalsocket_skipdata_callback != nullptr) {
			long long cbval1 = maxSize;
			long long callback_ret = qlocalsocket_skipdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLocalSocket::skipData(maxSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* param1, long long param2) override {
		if (qlocalsocket_writedata_isbase) {
			qlocalsocket_writedata_isbase = false;
			return QLocalSocket::writeData(param1, param2);
		} else if (qlocalsocket_writedata_callback != nullptr) {
			const char* cbval1 = param1;
			long long cbval2 = param2;
			long long callback_ret = qlocalsocket_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QLocalSocket::writeData(param1, param2);
		}
	}

	// Friend functions
	friend long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
	friend long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2);
	friend long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize);
	friend long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize);
	friend long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize);
	friend long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize);
	friend long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
	friend long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2);
};

#endif


