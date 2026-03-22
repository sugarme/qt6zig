#pragma once
#ifndef QPROCESS_H_C_LIBVIRTUAL
#define QPROCESS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QProcess so that we can call protected methods
class VirtualQProcess final : public QProcess {

public:
	// Virtual class boolean flag
	bool isVirtualQProcess= true;

	// Virtual class public types (including callbacks)
	using QProcess_Open_Callback = bool (*)(QProcess*, int);
	using QProcess_WaitForReadyRead_Callback = bool (*)(QProcess*, int);
	using QProcess_WaitForBytesWritten_Callback = bool (*)(QProcess*, int);
	using QProcess_BytesToWrite_Callback = long long (*)();
	using QProcess_IsSequential_Callback = bool (*)();
	using QProcess_Close_Callback = void (*)();
	using QProcess_ReadData_Callback = long long (*)(QProcess*, char*, long long);
	using QProcess_WriteData_Callback = long long (*)(QProcess*, const char*, long long);
	using QProcess_SetProcessState_Callback = void (*)(QProcess*, int);

protected:
	// Instance callback storage
	mutable QProcess_Open_Callback qprocess_open_callback = nullptr;
	mutable QProcess_WaitForReadyRead_Callback qprocess_waitforreadyread_callback = nullptr;
	mutable QProcess_WaitForBytesWritten_Callback qprocess_waitforbyteswritten_callback = nullptr;
	mutable QProcess_BytesToWrite_Callback qprocess_bytestowrite_callback = nullptr;
	mutable QProcess_IsSequential_Callback qprocess_issequential_callback = nullptr;
	mutable QProcess_Close_Callback qprocess_close_callback = nullptr;
	mutable QProcess_ReadData_Callback qprocess_readdata_callback = nullptr;
	mutable QProcess_WriteData_Callback qprocess_writedata_callback = nullptr;
	mutable QProcess_SetProcessState_Callback qprocess_setprocessstate_callback = nullptr;

	// Instance base flags
    mutable bool qprocess_open_isbase = false;
    mutable bool qprocess_waitforreadyread_isbase = false;
    mutable bool qprocess_waitforbyteswritten_isbase = false;
    mutable bool qprocess_bytestowrite_isbase = false;
    mutable bool qprocess_issequential_isbase = false;
    mutable bool qprocess_close_isbase = false;
    mutable bool qprocess_readdata_isbase = false;
    mutable bool qprocess_writedata_isbase = false;
    mutable bool qprocess_setprocessstate_isbase = false;

public:
	VirtualQProcess(): QProcess() {};
	VirtualQProcess(QObject* parent): QProcess(parent) {};

	~VirtualQProcess() {
		qprocess_open_callback = nullptr;
		qprocess_waitforreadyread_callback = nullptr;
		qprocess_waitforbyteswritten_callback = nullptr;
		qprocess_bytestowrite_callback = nullptr;
		qprocess_issequential_callback = nullptr;
		qprocess_close_callback = nullptr;
		qprocess_readdata_callback = nullptr;
		qprocess_writedata_callback = nullptr;
		qprocess_setprocessstate_callback = nullptr;
	}

// Callback setters
	inline void setQProcess_Open_Callback(QProcess_Open_Callback cb) const { qprocess_open_callback = cb; }
	inline void setQProcess_WaitForReadyRead_Callback(QProcess_WaitForReadyRead_Callback cb) const { qprocess_waitforreadyread_callback = cb; }
	inline void setQProcess_WaitForBytesWritten_Callback(QProcess_WaitForBytesWritten_Callback cb) const { qprocess_waitforbyteswritten_callback = cb; }
	inline void setQProcess_BytesToWrite_Callback(QProcess_BytesToWrite_Callback cb) const { qprocess_bytestowrite_callback = cb; }
	inline void setQProcess_IsSequential_Callback(QProcess_IsSequential_Callback cb) const { qprocess_issequential_callback = cb; }
	inline void setQProcess_Close_Callback(QProcess_Close_Callback cb) const { qprocess_close_callback = cb; }
	inline void setQProcess_ReadData_Callback(QProcess_ReadData_Callback cb) const { qprocess_readdata_callback = cb; }
	inline void setQProcess_WriteData_Callback(QProcess_WriteData_Callback cb) const { qprocess_writedata_callback = cb; }
	inline void setQProcess_SetProcessState_Callback(QProcess_SetProcessState_Callback cb) const { qprocess_setprocessstate_callback = cb; }

// Base flag setters
	inline void setQProcess_Open_IsBase(bool value) const { qprocess_open_isbase = value; }
	inline void setQProcess_WaitForReadyRead_IsBase(bool value) const { qprocess_waitforreadyread_isbase = value; }
	inline void setQProcess_WaitForBytesWritten_IsBase(bool value) const { qprocess_waitforbyteswritten_isbase = value; }
	inline void setQProcess_BytesToWrite_IsBase(bool value) const { qprocess_bytestowrite_isbase = value; }
	inline void setQProcess_IsSequential_IsBase(bool value) const { qprocess_issequential_isbase = value; }
	inline void setQProcess_Close_IsBase(bool value) const { qprocess_close_isbase = value; }
	inline void setQProcess_ReadData_IsBase(bool value) const { qprocess_readdata_isbase = value; }
	inline void setQProcess_WriteData_IsBase(bool value) const { qprocess_writedata_isbase = value; }
	inline void setQProcess_SetProcessState_IsBase(bool value) const { qprocess_setprocessstate_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (qprocess_open_isbase) {
			qprocess_open_isbase = false;
			return QProcess::open(mode);
		} else if (qprocess_open_callback != nullptr) {
			int cbval1 = static_cast<int>(mode);
			bool callback_ret = qprocess_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QProcess::open(mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForReadyRead(int msecs) override {
		if (qprocess_waitforreadyread_isbase) {
			qprocess_waitforreadyread_isbase = false;
			return QProcess::waitForReadyRead(msecs);
		} else if (qprocess_waitforreadyread_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qprocess_waitforreadyread_callback(this, cbval1);
			return callback_ret;
		} else {
			return QProcess::waitForReadyRead(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForBytesWritten(int msecs) override {
		if (qprocess_waitforbyteswritten_isbase) {
			qprocess_waitforbyteswritten_isbase = false;
			return QProcess::waitForBytesWritten(msecs);
		} else if (qprocess_waitforbyteswritten_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qprocess_waitforbyteswritten_callback(this, cbval1);
			return callback_ret;
		} else {
			return QProcess::waitForBytesWritten(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesToWrite() const override {
		if (qprocess_bytestowrite_isbase) {
			qprocess_bytestowrite_isbase = false;
			return QProcess::bytesToWrite();
		} else if (qprocess_bytestowrite_callback != nullptr) {
			long long callback_ret = qprocess_bytestowrite_callback();
			return callback_ret;
		} else {
			return QProcess::bytesToWrite();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qprocess_issequential_isbase) {
			qprocess_issequential_isbase = false;
			return QProcess::isSequential();
		} else if (qprocess_issequential_callback != nullptr) {
			bool callback_ret = qprocess_issequential_callback();
			return callback_ret;
		} else {
			return QProcess::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qprocess_close_isbase) {
			qprocess_close_isbase = false;
			QProcess::close();
		} else if (qprocess_close_callback != nullptr) {
			qprocess_close_callback();
		} else {
			QProcess::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qprocess_readdata_isbase) {
			qprocess_readdata_isbase = false;
			return QProcess::readData(data, maxlen);
		} else if (qprocess_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qprocess_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QProcess::readData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qprocess_writedata_isbase) {
			qprocess_writedata_isbase = false;
			return QProcess::writeData(data, lenVal);
		} else if (qprocess_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qprocess_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QProcess::writeData(data, lenVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setProcessState(ProcessState state) {
		if (qprocess_setprocessstate_isbase) {
			qprocess_setprocessstate_isbase = false;
			QProcess::setProcessState(state);
		} else if (qprocess_setprocessstate_callback != nullptr) {
			int cbval1 = static_cast<int>(state);
			qprocess_setprocessstate_callback(this, cbval1);
		} else {
			QProcess::setProcessState(state);
		}
	}

	// Friend functions
	friend long long QProcess_ReadData(QProcess* self, char* data, long long maxlen);
	friend long long QProcess_QBaseReadData(QProcess* self, char* data, long long maxlen);
	friend long long QProcess_WriteData(QProcess* self, const char* data, long long lenVal);
	friend long long QProcess_QBaseWriteData(QProcess* self, const char* data, long long lenVal);
	friend void QProcess_SetProcessState(QProcess* self, int state);
	friend void QProcess_QBaseSetProcessState(QProcess* self, int state);
};

#endif


