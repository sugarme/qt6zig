#pragma once
#ifndef QFILE_H_C_LIBVIRTUAL
#define QFILE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFile so that we can call protected methods
class VirtualQFile final : public QFile {

public:
	// Virtual class boolean flag
	bool isVirtualQFile= true;

	// Virtual class public types (including callbacks)
	using QFile_FileName_Callback = const char* (*)();
	using QFile_Open_Callback = bool (*)(QFile*, int);
	using QFile_Size_Callback = long long (*)();
	using QFile_Resize_Callback = bool (*)(QFile*, long long);
	using QFile_Permissions_Callback = int (*)();
	using QFile_SetPermissions_Callback = bool (*)(QFile*, int);

protected:
	// Instance callback storage
	mutable QFile_FileName_Callback qfile_filename_callback = nullptr;
	mutable QFile_Open_Callback qfile_open_callback = nullptr;
	mutable QFile_Size_Callback qfile_size_callback = nullptr;
	mutable QFile_Resize_Callback qfile_resize_callback = nullptr;
	mutable QFile_Permissions_Callback qfile_permissions_callback = nullptr;
	mutable QFile_SetPermissions_Callback qfile_setpermissions_callback = nullptr;

	// Instance base flags
    mutable bool qfile_filename_isbase = false;
    mutable bool qfile_open_isbase = false;
    mutable bool qfile_size_isbase = false;
    mutable bool qfile_resize_isbase = false;
    mutable bool qfile_permissions_isbase = false;
    mutable bool qfile_setpermissions_isbase = false;

public:
	VirtualQFile(): QFile() {};
	VirtualQFile(const QString& name): QFile(name) {};
	VirtualQFile(QObject* parent): QFile(parent) {};
	VirtualQFile(const QString& name, QObject* parent): QFile(name, parent) {};

	~VirtualQFile() {
		qfile_filename_callback = nullptr;
		qfile_open_callback = nullptr;
		qfile_size_callback = nullptr;
		qfile_resize_callback = nullptr;
		qfile_permissions_callback = nullptr;
		qfile_setpermissions_callback = nullptr;
	}

// Callback setters
	inline void setQFile_FileName_Callback(QFile_FileName_Callback cb) const { qfile_filename_callback = cb; }
	inline void setQFile_Open_Callback(QFile_Open_Callback cb) const { qfile_open_callback = cb; }
	inline void setQFile_Size_Callback(QFile_Size_Callback cb) const { qfile_size_callback = cb; }
	inline void setQFile_Resize_Callback(QFile_Resize_Callback cb) const { qfile_resize_callback = cb; }
	inline void setQFile_Permissions_Callback(QFile_Permissions_Callback cb) const { qfile_permissions_callback = cb; }
	inline void setQFile_SetPermissions_Callback(QFile_SetPermissions_Callback cb) const { qfile_setpermissions_callback = cb; }

// Base flag setters
	inline void setQFile_FileName_IsBase(bool value) const { qfile_filename_isbase = value; }
	inline void setQFile_Open_IsBase(bool value) const { qfile_open_isbase = value; }
	inline void setQFile_Size_IsBase(bool value) const { qfile_size_isbase = value; }
	inline void setQFile_Resize_IsBase(bool value) const { qfile_resize_isbase = value; }
	inline void setQFile_Permissions_IsBase(bool value) const { qfile_permissions_isbase = value; }
	inline void setQFile_SetPermissions_IsBase(bool value) const { qfile_setpermissions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString fileName() const override {
		if (qfile_filename_isbase) {
			qfile_filename_isbase = false;
			return QFile::fileName();
		} else if (qfile_filename_callback != nullptr) {
			const char* callback_ret = qfile_filename_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QFile::fileName();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (qfile_open_isbase) {
			qfile_open_isbase = false;
			return QFile::open(flags);
		} else if (qfile_open_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			bool callback_ret = qfile_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFile::open(flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long size() const override {
		if (qfile_size_isbase) {
			qfile_size_isbase = false;
			return QFile::size();
		} else if (qfile_size_callback != nullptr) {
			long long callback_ret = qfile_size_callback();
			return callback_ret;
		} else {
			return QFile::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool resize(qint64 sz) override {
		if (qfile_resize_isbase) {
			qfile_resize_isbase = false;
			return QFile::resize(sz);
		} else if (qfile_resize_callback != nullptr) {
			long long cbval1 = sz;
			bool callback_ret = qfile_resize_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFile::resize(sz);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QFileDevice::Permission> permissions() const override {
		if (qfile_permissions_isbase) {
			qfile_permissions_isbase = false;
			return QFile::permissions();
		} else if (qfile_permissions_callback != nullptr) {
			int callback_ret = qfile_permissions_callback();
			return static_cast<QFlags<QFileDevice::Permission>>(callback_ret);
		} else {
			return QFile::permissions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setPermissions(QFlags<QFileDevice::Permission> permissionSpec) override {
		if (qfile_setpermissions_isbase) {
			qfile_setpermissions_isbase = false;
			return QFile::setPermissions(permissionSpec);
		} else if (qfile_setpermissions_callback != nullptr) {
			int cbval1 = static_cast<int>(permissionSpec);
			bool callback_ret = qfile_setpermissions_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFile::setPermissions(permissionSpec);
		}
	}
};

#endif


