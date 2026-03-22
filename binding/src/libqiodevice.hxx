#pragma once
#ifndef QIODEVICE_H_C_LIBVIRTUAL
#define QIODEVICE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QIODevice so that we can call protected methods
class VirtualQIODevice : public QIODevice {

public:
	// Virtual class boolean flag
	bool isVirtualQIODevice= true;

	// Virtual class public types (including callbacks)
	using QIODevice_IsSequential_Callback = bool (*)();
	using QIODevice_Open_Callback = bool (*)(QIODevice*, int);
	using QIODevice_Close_Callback = void (*)();
	using QIODevice_Pos_Callback = long long (*)();
	using QIODevice_Size_Callback = long long (*)();
	using QIODevice_Seek_Callback = bool (*)(QIODevice*, long long);
	using QIODevice_AtEnd_Callback = bool (*)();
	using QIODevice_Reset_Callback = bool (*)();
	using QIODevice_BytesAvailable_Callback = long long (*)();
	using QIODevice_BytesToWrite_Callback = long long (*)();
	using QIODevice_CanReadLine_Callback = bool (*)();
	using QIODevice_WaitForReadyRead_Callback = bool (*)(QIODevice*, int);
	using QIODevice_WaitForBytesWritten_Callback = bool (*)(QIODevice*, int);
	using QIODevice_ReadData_Callback = long long (*)(QIODevice*, char*, long long);
	using QIODevice_ReadLineData_Callback = long long (*)(QIODevice*, char*, long long);
	using QIODevice_SkipData_Callback = long long (*)(QIODevice*, long long);
	using QIODevice_WriteData_Callback = long long (*)(QIODevice*, const char*, long long);
	using QIODevice_SetOpenMode_Callback = void (*)(QIODevice*, int);
	using QIODevice_SetErrorString_Callback = void (*)(QIODevice*, libqt_string);

protected:
	// Instance callback storage
	mutable QIODevice_IsSequential_Callback qiodevice_issequential_callback = nullptr;
	mutable QIODevice_Open_Callback qiodevice_open_callback = nullptr;
	mutable QIODevice_Close_Callback qiodevice_close_callback = nullptr;
	mutable QIODevice_Pos_Callback qiodevice_pos_callback = nullptr;
	mutable QIODevice_Size_Callback qiodevice_size_callback = nullptr;
	mutable QIODevice_Seek_Callback qiodevice_seek_callback = nullptr;
	mutable QIODevice_AtEnd_Callback qiodevice_atend_callback = nullptr;
	mutable QIODevice_Reset_Callback qiodevice_reset_callback = nullptr;
	mutable QIODevice_BytesAvailable_Callback qiodevice_bytesavailable_callback = nullptr;
	mutable QIODevice_BytesToWrite_Callback qiodevice_bytestowrite_callback = nullptr;
	mutable QIODevice_CanReadLine_Callback qiodevice_canreadline_callback = nullptr;
	mutable QIODevice_WaitForReadyRead_Callback qiodevice_waitforreadyread_callback = nullptr;
	mutable QIODevice_WaitForBytesWritten_Callback qiodevice_waitforbyteswritten_callback = nullptr;
	mutable QIODevice_ReadData_Callback qiodevice_readdata_callback = nullptr;
	mutable QIODevice_ReadLineData_Callback qiodevice_readlinedata_callback = nullptr;
	mutable QIODevice_SkipData_Callback qiodevice_skipdata_callback = nullptr;
	mutable QIODevice_WriteData_Callback qiodevice_writedata_callback = nullptr;
	mutable QIODevice_SetOpenMode_Callback qiodevice_setopenmode_callback = nullptr;
	mutable QIODevice_SetErrorString_Callback qiodevice_seterrorstring_callback = nullptr;

	// Instance base flags
    mutable bool qiodevice_issequential_isbase = false;
    mutable bool qiodevice_open_isbase = false;
    mutable bool qiodevice_close_isbase = false;
    mutable bool qiodevice_pos_isbase = false;
    mutable bool qiodevice_size_isbase = false;
    mutable bool qiodevice_seek_isbase = false;
    mutable bool qiodevice_atend_isbase = false;
    mutable bool qiodevice_reset_isbase = false;
    mutable bool qiodevice_bytesavailable_isbase = false;
    mutable bool qiodevice_bytestowrite_isbase = false;
    mutable bool qiodevice_canreadline_isbase = false;
    mutable bool qiodevice_waitforreadyread_isbase = false;
    mutable bool qiodevice_waitforbyteswritten_isbase = false;
    mutable bool qiodevice_readdata_isbase = false;
    mutable bool qiodevice_readlinedata_isbase = false;
    mutable bool qiodevice_skipdata_isbase = false;
    mutable bool qiodevice_writedata_isbase = false;
    mutable bool qiodevice_setopenmode_isbase = false;
    mutable bool qiodevice_seterrorstring_isbase = false;

public:
	VirtualQIODevice(): QIODevice() {};
	VirtualQIODevice(QObject* parent): QIODevice(parent) {};

	~VirtualQIODevice() {
		qiodevice_issequential_callback = nullptr;
		qiodevice_open_callback = nullptr;
		qiodevice_close_callback = nullptr;
		qiodevice_pos_callback = nullptr;
		qiodevice_size_callback = nullptr;
		qiodevice_seek_callback = nullptr;
		qiodevice_atend_callback = nullptr;
		qiodevice_reset_callback = nullptr;
		qiodevice_bytesavailable_callback = nullptr;
		qiodevice_bytestowrite_callback = nullptr;
		qiodevice_canreadline_callback = nullptr;
		qiodevice_waitforreadyread_callback = nullptr;
		qiodevice_waitforbyteswritten_callback = nullptr;
		qiodevice_readdata_callback = nullptr;
		qiodevice_readlinedata_callback = nullptr;
		qiodevice_skipdata_callback = nullptr;
		qiodevice_writedata_callback = nullptr;
		qiodevice_setopenmode_callback = nullptr;
		qiodevice_seterrorstring_callback = nullptr;
	}

// Callback setters
	inline void setQIODevice_IsSequential_Callback(QIODevice_IsSequential_Callback cb) const { qiodevice_issequential_callback = cb; }
	inline void setQIODevice_Open_Callback(QIODevice_Open_Callback cb) const { qiodevice_open_callback = cb; }
	inline void setQIODevice_Close_Callback(QIODevice_Close_Callback cb) const { qiodevice_close_callback = cb; }
	inline void setQIODevice_Pos_Callback(QIODevice_Pos_Callback cb) const { qiodevice_pos_callback = cb; }
	inline void setQIODevice_Size_Callback(QIODevice_Size_Callback cb) const { qiodevice_size_callback = cb; }
	inline void setQIODevice_Seek_Callback(QIODevice_Seek_Callback cb) const { qiodevice_seek_callback = cb; }
	inline void setQIODevice_AtEnd_Callback(QIODevice_AtEnd_Callback cb) const { qiodevice_atend_callback = cb; }
	inline void setQIODevice_Reset_Callback(QIODevice_Reset_Callback cb) const { qiodevice_reset_callback = cb; }
	inline void setQIODevice_BytesAvailable_Callback(QIODevice_BytesAvailable_Callback cb) const { qiodevice_bytesavailable_callback = cb; }
	inline void setQIODevice_BytesToWrite_Callback(QIODevice_BytesToWrite_Callback cb) const { qiodevice_bytestowrite_callback = cb; }
	inline void setQIODevice_CanReadLine_Callback(QIODevice_CanReadLine_Callback cb) const { qiodevice_canreadline_callback = cb; }
	inline void setQIODevice_WaitForReadyRead_Callback(QIODevice_WaitForReadyRead_Callback cb) const { qiodevice_waitforreadyread_callback = cb; }
	inline void setQIODevice_WaitForBytesWritten_Callback(QIODevice_WaitForBytesWritten_Callback cb) const { qiodevice_waitforbyteswritten_callback = cb; }
	inline void setQIODevice_ReadData_Callback(QIODevice_ReadData_Callback cb) const { qiodevice_readdata_callback = cb; }
	inline void setQIODevice_ReadLineData_Callback(QIODevice_ReadLineData_Callback cb) const { qiodevice_readlinedata_callback = cb; }
	inline void setQIODevice_SkipData_Callback(QIODevice_SkipData_Callback cb) const { qiodevice_skipdata_callback = cb; }
	inline void setQIODevice_WriteData_Callback(QIODevice_WriteData_Callback cb) const { qiodevice_writedata_callback = cb; }
	inline void setQIODevice_SetOpenMode_Callback(QIODevice_SetOpenMode_Callback cb) const { qiodevice_setopenmode_callback = cb; }
	inline void setQIODevice_SetErrorString_Callback(QIODevice_SetErrorString_Callback cb) const { qiodevice_seterrorstring_callback = cb; }

// Base flag setters
	inline void setQIODevice_IsSequential_IsBase(bool value) const { qiodevice_issequential_isbase = value; }
	inline void setQIODevice_Open_IsBase(bool value) const { qiodevice_open_isbase = value; }
	inline void setQIODevice_Close_IsBase(bool value) const { qiodevice_close_isbase = value; }
	inline void setQIODevice_Pos_IsBase(bool value) const { qiodevice_pos_isbase = value; }
	inline void setQIODevice_Size_IsBase(bool value) const { qiodevice_size_isbase = value; }
	inline void setQIODevice_Seek_IsBase(bool value) const { qiodevice_seek_isbase = value; }
	inline void setQIODevice_AtEnd_IsBase(bool value) const { qiodevice_atend_isbase = value; }
	inline void setQIODevice_Reset_IsBase(bool value) const { qiodevice_reset_isbase = value; }
	inline void setQIODevice_BytesAvailable_IsBase(bool value) const { qiodevice_bytesavailable_isbase = value; }
	inline void setQIODevice_BytesToWrite_IsBase(bool value) const { qiodevice_bytestowrite_isbase = value; }
	inline void setQIODevice_CanReadLine_IsBase(bool value) const { qiodevice_canreadline_isbase = value; }
	inline void setQIODevice_WaitForReadyRead_IsBase(bool value) const { qiodevice_waitforreadyread_isbase = value; }
	inline void setQIODevice_WaitForBytesWritten_IsBase(bool value) const { qiodevice_waitforbyteswritten_isbase = value; }
	inline void setQIODevice_ReadData_IsBase(bool value) const { qiodevice_readdata_isbase = value; }
	inline void setQIODevice_ReadLineData_IsBase(bool value) const { qiodevice_readlinedata_isbase = value; }
	inline void setQIODevice_SkipData_IsBase(bool value) const { qiodevice_skipdata_isbase = value; }
	inline void setQIODevice_WriteData_IsBase(bool value) const { qiodevice_writedata_isbase = value; }
	inline void setQIODevice_SetOpenMode_IsBase(bool value) const { qiodevice_setopenmode_isbase = value; }
	inline void setQIODevice_SetErrorString_IsBase(bool value) const { qiodevice_seterrorstring_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qiodevice_issequential_isbase) {
			qiodevice_issequential_isbase = false;
			return QIODevice::isSequential();
		} else if (qiodevice_issequential_callback != nullptr) {
			bool callback_ret = qiodevice_issequential_callback();
			return callback_ret;
		} else {
			return QIODevice::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (qiodevice_open_isbase) {
			qiodevice_open_isbase = false;
			return QIODevice::open(mode);
		} else if (qiodevice_open_callback != nullptr) {
			int cbval1 = static_cast<int>(mode);
			bool callback_ret = qiodevice_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIODevice::open(mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qiodevice_close_isbase) {
			qiodevice_close_isbase = false;
			QIODevice::close();
		} else if (qiodevice_close_callback != nullptr) {
			qiodevice_close_callback();
		} else {
			QIODevice::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long pos() const override {
		if (qiodevice_pos_isbase) {
			qiodevice_pos_isbase = false;
			return QIODevice::pos();
		} else if (qiodevice_pos_callback != nullptr) {
			long long callback_ret = qiodevice_pos_callback();
			return callback_ret;
		} else {
			return QIODevice::pos();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long size() const override {
		if (qiodevice_size_isbase) {
			qiodevice_size_isbase = false;
			return QIODevice::size();
		} else if (qiodevice_size_callback != nullptr) {
			long long callback_ret = qiodevice_size_callback();
			return callback_ret;
		} else {
			return QIODevice::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool seek(qint64 pos) override {
		if (qiodevice_seek_isbase) {
			qiodevice_seek_isbase = false;
			return QIODevice::seek(pos);
		} else if (qiodevice_seek_callback != nullptr) {
			long long cbval1 = pos;
			bool callback_ret = qiodevice_seek_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIODevice::seek(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool atEnd() const override {
		if (qiodevice_atend_isbase) {
			qiodevice_atend_isbase = false;
			return QIODevice::atEnd();
		} else if (qiodevice_atend_callback != nullptr) {
			bool callback_ret = qiodevice_atend_callback();
			return callback_ret;
		} else {
			return QIODevice::atEnd();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool reset() override {
		if (qiodevice_reset_isbase) {
			qiodevice_reset_isbase = false;
			return QIODevice::reset();
		} else if (qiodevice_reset_callback != nullptr) {
			bool callback_ret = qiodevice_reset_callback();
			return callback_ret;
		} else {
			return QIODevice::reset();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesAvailable() const override {
		if (qiodevice_bytesavailable_isbase) {
			qiodevice_bytesavailable_isbase = false;
			return QIODevice::bytesAvailable();
		} else if (qiodevice_bytesavailable_callback != nullptr) {
			long long callback_ret = qiodevice_bytesavailable_callback();
			return callback_ret;
		} else {
			return QIODevice::bytesAvailable();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesToWrite() const override {
		if (qiodevice_bytestowrite_isbase) {
			qiodevice_bytestowrite_isbase = false;
			return QIODevice::bytesToWrite();
		} else if (qiodevice_bytestowrite_callback != nullptr) {
			long long callback_ret = qiodevice_bytestowrite_callback();
			return callback_ret;
		} else {
			return QIODevice::bytesToWrite();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canReadLine() const override {
		if (qiodevice_canreadline_isbase) {
			qiodevice_canreadline_isbase = false;
			return QIODevice::canReadLine();
		} else if (qiodevice_canreadline_callback != nullptr) {
			bool callback_ret = qiodevice_canreadline_callback();
			return callback_ret;
		} else {
			return QIODevice::canReadLine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForReadyRead(int msecs) override {
		if (qiodevice_waitforreadyread_isbase) {
			qiodevice_waitforreadyread_isbase = false;
			return QIODevice::waitForReadyRead(msecs);
		} else if (qiodevice_waitforreadyread_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qiodevice_waitforreadyread_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIODevice::waitForReadyRead(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool waitForBytesWritten(int msecs) override {
		if (qiodevice_waitforbyteswritten_isbase) {
			qiodevice_waitforbyteswritten_isbase = false;
			return QIODevice::waitForBytesWritten(msecs);
		} else if (qiodevice_waitforbyteswritten_callback != nullptr) {
			int cbval1 = msecs;
			bool callback_ret = qiodevice_waitforbyteswritten_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIODevice::waitForBytesWritten(msecs);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qiodevice_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qiodevice_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readLineData(char* data, qint64 maxlen) override {
		if (qiodevice_readlinedata_isbase) {
			qiodevice_readlinedata_isbase = false;
			return QIODevice::readLineData(data, maxlen);
		} else if (qiodevice_readlinedata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qiodevice_readlinedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QIODevice::readLineData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long skipData(qint64 maxSize) override {
		if (qiodevice_skipdata_isbase) {
			qiodevice_skipdata_isbase = false;
			return QIODevice::skipData(maxSize);
		} else if (qiodevice_skipdata_callback != nullptr) {
			long long cbval1 = maxSize;
			long long callback_ret = qiodevice_skipdata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QIODevice::skipData(maxSize);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qiodevice_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qiodevice_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	void setOpenMode(QIODeviceBase::OpenMode openMode) {
		if (qiodevice_setopenmode_isbase) {
			qiodevice_setopenmode_isbase = false;
			QIODevice::setOpenMode(openMode);
		} else if (qiodevice_setopenmode_callback != nullptr) {
			int cbval1 = static_cast<int>(openMode);
			qiodevice_setopenmode_callback(this, cbval1);
		} else {
			QIODevice::setOpenMode(openMode);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setErrorString(const QString& errorString) {
		if (qiodevice_seterrorstring_isbase) {
			qiodevice_seterrorstring_isbase = false;
			QIODevice::setErrorString(errorString);
		} else if (qiodevice_seterrorstring_callback != nullptr) {
			QByteArray errorString_qb = errorString.toUtf8();
			libqt_string cbval1;
			cbval1.len = errorString_qb.length();
			cbval1.data = static_cast<const char*>(errorString_qb.constData());
			qiodevice_seterrorstring_callback(this, cbval1);
		} else {
			QIODevice::setErrorString(errorString);
		}
	}

	// Friend functions
	friend long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen);
	friend long long QIODevice_QBaseReadData(QIODevice* self, char* data, long long maxlen);
	friend long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen);
	friend long long QIODevice_QBaseReadLineData(QIODevice* self, char* data, long long maxlen);
	friend long long QIODevice_SkipData(QIODevice* self, long long maxSize);
	friend long long QIODevice_QBaseSkipData(QIODevice* self, long long maxSize);
	friend long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal);
	friend long long QIODevice_QBaseWriteData(QIODevice* self, const char* data, long long lenVal);
	friend void QIODevice_SetOpenMode(QIODevice* self, int openMode);
	friend void QIODevice_QBaseSetOpenMode(QIODevice* self, int openMode);
	friend void QIODevice_SetErrorString(QIODevice* self, const libqt_string errorString);
	friend void QIODevice_QBaseSetErrorString(QIODevice* self, const libqt_string errorString);
};

#endif


