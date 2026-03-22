#pragma once
#ifndef QSAVEFILE_H_C_LIBVIRTUAL
#define QSAVEFILE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSaveFile so that we can call protected methods
class VirtualQSaveFile final : public QSaveFile {

public:
	// Virtual class boolean flag
	bool isVirtualQSaveFile= true;

	// Virtual class public types (including callbacks)
	using QSaveFile_FileName_Callback = const char* (*)();
	using QSaveFile_Open_Callback = bool (*)(QSaveFile*, int);
	using QSaveFile_WriteData_Callback = long long (*)(QSaveFile*, const char*, long long);

protected:
	// Instance callback storage
	mutable QSaveFile_FileName_Callback qsavefile_filename_callback = nullptr;
	mutable QSaveFile_Open_Callback qsavefile_open_callback = nullptr;
	mutable QSaveFile_WriteData_Callback qsavefile_writedata_callback = nullptr;

	// Instance base flags
    mutable bool qsavefile_filename_isbase = false;
    mutable bool qsavefile_open_isbase = false;
    mutable bool qsavefile_writedata_isbase = false;

public:
	VirtualQSaveFile(const QString& name): QSaveFile(name) {};
	VirtualQSaveFile(): QSaveFile() {};
	VirtualQSaveFile(const QString& name, QObject* parent): QSaveFile(name, parent) {};
	VirtualQSaveFile(QObject* parent): QSaveFile(parent) {};

	~VirtualQSaveFile() {
		qsavefile_filename_callback = nullptr;
		qsavefile_open_callback = nullptr;
		qsavefile_writedata_callback = nullptr;
	}

// Callback setters
	inline void setQSaveFile_FileName_Callback(QSaveFile_FileName_Callback cb) const { qsavefile_filename_callback = cb; }
	inline void setQSaveFile_Open_Callback(QSaveFile_Open_Callback cb) const { qsavefile_open_callback = cb; }
	inline void setQSaveFile_WriteData_Callback(QSaveFile_WriteData_Callback cb) const { qsavefile_writedata_callback = cb; }

// Base flag setters
	inline void setQSaveFile_FileName_IsBase(bool value) const { qsavefile_filename_isbase = value; }
	inline void setQSaveFile_Open_IsBase(bool value) const { qsavefile_open_isbase = value; }
	inline void setQSaveFile_WriteData_IsBase(bool value) const { qsavefile_writedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString fileName() const override {
		if (qsavefile_filename_isbase) {
			qsavefile_filename_isbase = false;
			return QSaveFile::fileName();
		} else if (qsavefile_filename_callback != nullptr) {
			const char* callback_ret = qsavefile_filename_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSaveFile::fileName();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (qsavefile_open_isbase) {
			qsavefile_open_isbase = false;
			return QSaveFile::open(flags);
		} else if (qsavefile_open_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			bool callback_ret = qsavefile_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSaveFile::open(flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qsavefile_writedata_isbase) {
			qsavefile_writedata_isbase = false;
			return QSaveFile::writeData(data, lenVal);
		} else if (qsavefile_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qsavefile_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSaveFile::writeData(data, lenVal);
		}
	}

	// Friend functions
	friend long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal);
	friend long long QSaveFile_QBaseWriteData(QSaveFile* self, const char* data, long long lenVal);
};

#endif


