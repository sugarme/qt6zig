#pragma once
#ifndef QFILEDEVICE_H_C_LIBVIRTUAL
#define QFILEDEVICE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFileDevice so that we can call protected methods
class VirtualQFileDevice final : public QFileDevice {

public:
	// Virtual class boolean flag
	bool isVirtualQFileDevice= true;

	// Virtual class public types (including callbacks)
	using QFileDevice_Close_Callback = void (*)();
	using QFileDevice_IsSequential_Callback = bool (*)();
	using QFileDevice_FileName_Callback = const char* (*)();
	using QFileDevice_Pos_Callback = long long (*)();
	using QFileDevice_Seek_Callback = bool (*)(QFileDevice*, long long);
	using QFileDevice_AtEnd_Callback = bool (*)();
	using QFileDevice_Size_Callback = long long (*)();
	using QFileDevice_Resize_Callback = bool (*)(QFileDevice*, long long);
	using QFileDevice_Permissions_Callback = int (*)();
	using QFileDevice_SetPermissions_Callback = bool (*)(QFileDevice*, int);
	using QFileDevice_ReadData_Callback = long long (*)(QFileDevice*, char*, long long);
	using QFileDevice_WriteData_Callback = long long (*)(QFileDevice*, const char*, long long);
	using QFileDevice_ReadLineData_Callback = long long (*)(QFileDevice*, char*, long long);

protected:
	// Instance callback storage
	mutable QFileDevice_Close_Callback qfiledevice_close_callback = nullptr;
	mutable QFileDevice_IsSequential_Callback qfiledevice_issequential_callback = nullptr;
	mutable QFileDevice_FileName_Callback qfiledevice_filename_callback = nullptr;
	mutable QFileDevice_Pos_Callback qfiledevice_pos_callback = nullptr;
	mutable QFileDevice_Seek_Callback qfiledevice_seek_callback = nullptr;
	mutable QFileDevice_AtEnd_Callback qfiledevice_atend_callback = nullptr;
	mutable QFileDevice_Size_Callback qfiledevice_size_callback = nullptr;
	mutable QFileDevice_Resize_Callback qfiledevice_resize_callback = nullptr;
	mutable QFileDevice_Permissions_Callback qfiledevice_permissions_callback = nullptr;
	mutable QFileDevice_SetPermissions_Callback qfiledevice_setpermissions_callback = nullptr;
	mutable QFileDevice_ReadData_Callback qfiledevice_readdata_callback = nullptr;
	mutable QFileDevice_WriteData_Callback qfiledevice_writedata_callback = nullptr;
	mutable QFileDevice_ReadLineData_Callback qfiledevice_readlinedata_callback = nullptr;

	// Instance base flags
    mutable bool qfiledevice_close_isbase = false;
    mutable bool qfiledevice_issequential_isbase = false;
    mutable bool qfiledevice_filename_isbase = false;
    mutable bool qfiledevice_pos_isbase = false;
    mutable bool qfiledevice_seek_isbase = false;
    mutable bool qfiledevice_atend_isbase = false;
    mutable bool qfiledevice_size_isbase = false;
    mutable bool qfiledevice_resize_isbase = false;
    mutable bool qfiledevice_permissions_isbase = false;
    mutable bool qfiledevice_setpermissions_isbase = false;
    mutable bool qfiledevice_readdata_isbase = false;
    mutable bool qfiledevice_writedata_isbase = false;
    mutable bool qfiledevice_readlinedata_isbase = false;

public:

	~VirtualQFileDevice() {
		qfiledevice_close_callback = nullptr;
		qfiledevice_issequential_callback = nullptr;
		qfiledevice_filename_callback = nullptr;
		qfiledevice_pos_callback = nullptr;
		qfiledevice_seek_callback = nullptr;
		qfiledevice_atend_callback = nullptr;
		qfiledevice_size_callback = nullptr;
		qfiledevice_resize_callback = nullptr;
		qfiledevice_permissions_callback = nullptr;
		qfiledevice_setpermissions_callback = nullptr;
		qfiledevice_readdata_callback = nullptr;
		qfiledevice_writedata_callback = nullptr;
		qfiledevice_readlinedata_callback = nullptr;
	}

// Callback setters
	inline void setQFileDevice_Close_Callback(QFileDevice_Close_Callback cb) const { qfiledevice_close_callback = cb; }
	inline void setQFileDevice_IsSequential_Callback(QFileDevice_IsSequential_Callback cb) const { qfiledevice_issequential_callback = cb; }
	inline void setQFileDevice_FileName_Callback(QFileDevice_FileName_Callback cb) const { qfiledevice_filename_callback = cb; }
	inline void setQFileDevice_Pos_Callback(QFileDevice_Pos_Callback cb) const { qfiledevice_pos_callback = cb; }
	inline void setQFileDevice_Seek_Callback(QFileDevice_Seek_Callback cb) const { qfiledevice_seek_callback = cb; }
	inline void setQFileDevice_AtEnd_Callback(QFileDevice_AtEnd_Callback cb) const { qfiledevice_atend_callback = cb; }
	inline void setQFileDevice_Size_Callback(QFileDevice_Size_Callback cb) const { qfiledevice_size_callback = cb; }
	inline void setQFileDevice_Resize_Callback(QFileDevice_Resize_Callback cb) const { qfiledevice_resize_callback = cb; }
	inline void setQFileDevice_Permissions_Callback(QFileDevice_Permissions_Callback cb) const { qfiledevice_permissions_callback = cb; }
	inline void setQFileDevice_SetPermissions_Callback(QFileDevice_SetPermissions_Callback cb) const { qfiledevice_setpermissions_callback = cb; }
	inline void setQFileDevice_ReadData_Callback(QFileDevice_ReadData_Callback cb) const { qfiledevice_readdata_callback = cb; }
	inline void setQFileDevice_WriteData_Callback(QFileDevice_WriteData_Callback cb) const { qfiledevice_writedata_callback = cb; }
	inline void setQFileDevice_ReadLineData_Callback(QFileDevice_ReadLineData_Callback cb) const { qfiledevice_readlinedata_callback = cb; }

// Base flag setters
	inline void setQFileDevice_Close_IsBase(bool value) const { qfiledevice_close_isbase = value; }
	inline void setQFileDevice_IsSequential_IsBase(bool value) const { qfiledevice_issequential_isbase = value; }
	inline void setQFileDevice_FileName_IsBase(bool value) const { qfiledevice_filename_isbase = value; }
	inline void setQFileDevice_Pos_IsBase(bool value) const { qfiledevice_pos_isbase = value; }
	inline void setQFileDevice_Seek_IsBase(bool value) const { qfiledevice_seek_isbase = value; }
	inline void setQFileDevice_AtEnd_IsBase(bool value) const { qfiledevice_atend_isbase = value; }
	inline void setQFileDevice_Size_IsBase(bool value) const { qfiledevice_size_isbase = value; }
	inline void setQFileDevice_Resize_IsBase(bool value) const { qfiledevice_resize_isbase = value; }
	inline void setQFileDevice_Permissions_IsBase(bool value) const { qfiledevice_permissions_isbase = value; }
	inline void setQFileDevice_SetPermissions_IsBase(bool value) const { qfiledevice_setpermissions_isbase = value; }
	inline void setQFileDevice_ReadData_IsBase(bool value) const { qfiledevice_readdata_isbase = value; }
	inline void setQFileDevice_WriteData_IsBase(bool value) const { qfiledevice_writedata_isbase = value; }
	inline void setQFileDevice_ReadLineData_IsBase(bool value) const { qfiledevice_readlinedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qfiledevice_close_isbase) {
			qfiledevice_close_isbase = false;
			QFileDevice::close();
		} else if (qfiledevice_close_callback != nullptr) {
			qfiledevice_close_callback();
		} else {
			QFileDevice::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qfiledevice_issequential_isbase) {
			qfiledevice_issequential_isbase = false;
			return QFileDevice::isSequential();
		} else if (qfiledevice_issequential_callback != nullptr) {
			bool callback_ret = qfiledevice_issequential_callback();
			return callback_ret;
		} else {
			return QFileDevice::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString fileName() const override {
		if (qfiledevice_filename_isbase) {
			qfiledevice_filename_isbase = false;
			return QFileDevice::fileName();
		} else if (qfiledevice_filename_callback != nullptr) {
			const char* callback_ret = qfiledevice_filename_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QFileDevice::fileName();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long pos() const override {
		if (qfiledevice_pos_isbase) {
			qfiledevice_pos_isbase = false;
			return QFileDevice::pos();
		} else if (qfiledevice_pos_callback != nullptr) {
			long long callback_ret = qfiledevice_pos_callback();
			return callback_ret;
		} else {
			return QFileDevice::pos();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool seek(qint64 offset) override {
		if (qfiledevice_seek_isbase) {
			qfiledevice_seek_isbase = false;
			return QFileDevice::seek(offset);
		} else if (qfiledevice_seek_callback != nullptr) {
			long long cbval1 = offset;
			bool callback_ret = qfiledevice_seek_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileDevice::seek(offset);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool atEnd() const override {
		if (qfiledevice_atend_isbase) {
			qfiledevice_atend_isbase = false;
			return QFileDevice::atEnd();
		} else if (qfiledevice_atend_callback != nullptr) {
			bool callback_ret = qfiledevice_atend_callback();
			return callback_ret;
		} else {
			return QFileDevice::atEnd();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long size() const override {
		if (qfiledevice_size_isbase) {
			qfiledevice_size_isbase = false;
			return QFileDevice::size();
		} else if (qfiledevice_size_callback != nullptr) {
			long long callback_ret = qfiledevice_size_callback();
			return callback_ret;
		} else {
			return QFileDevice::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool resize(qint64 sz) override {
		if (qfiledevice_resize_isbase) {
			qfiledevice_resize_isbase = false;
			return QFileDevice::resize(sz);
		} else if (qfiledevice_resize_callback != nullptr) {
			long long cbval1 = sz;
			bool callback_ret = qfiledevice_resize_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileDevice::resize(sz);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QFileDevice::Permission> permissions() const override {
		if (qfiledevice_permissions_isbase) {
			qfiledevice_permissions_isbase = false;
			return QFileDevice::permissions();
		} else if (qfiledevice_permissions_callback != nullptr) {
			int callback_ret = qfiledevice_permissions_callback();
			return static_cast<QFlags<QFileDevice::Permission>>(callback_ret);
		} else {
			return QFileDevice::permissions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPermissions(QFlags<QFileDevice::Permission> permissionSpec) override {
		if (qfiledevice_setpermissions_isbase) {
			qfiledevice_setpermissions_isbase = false;
			return QFileDevice::setPermissions(permissionSpec);
		} else if (qfiledevice_setpermissions_callback != nullptr) {
			int cbval1 = static_cast<int>(permissionSpec);
			bool callback_ret = qfiledevice_setpermissions_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFileDevice::setPermissions(permissionSpec);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qfiledevice_readdata_isbase) {
			qfiledevice_readdata_isbase = false;
			return QFileDevice::readData(data, maxlen);
		} else if (qfiledevice_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qfiledevice_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QFileDevice::readData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qfiledevice_writedata_isbase) {
			qfiledevice_writedata_isbase = false;
			return QFileDevice::writeData(data, lenVal);
		} else if (qfiledevice_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qfiledevice_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QFileDevice::writeData(data, lenVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readLineData(char* data, qint64 maxlen) override {
		if (qfiledevice_readlinedata_isbase) {
			qfiledevice_readlinedata_isbase = false;
			return QFileDevice::readLineData(data, maxlen);
		} else if (qfiledevice_readlinedata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qfiledevice_readlinedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QFileDevice::readLineData(data, maxlen);
		}
	}

	// Friend functions
	friend long long QFileDevice_ReadData(QFileDevice* self, char* data, long long maxlen);
	friend long long QFileDevice_QBaseReadData(QFileDevice* self, char* data, long long maxlen);
	friend long long QFileDevice_WriteData(QFileDevice* self, const char* data, long long lenVal);
	friend long long QFileDevice_QBaseWriteData(QFileDevice* self, const char* data, long long lenVal);
	friend long long QFileDevice_ReadLineData(QFileDevice* self, char* data, long long maxlen);
	friend long long QFileDevice_QBaseReadLineData(QFileDevice* self, char* data, long long maxlen);
};

#endif


