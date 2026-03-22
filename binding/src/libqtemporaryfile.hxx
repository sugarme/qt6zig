#pragma once
#ifndef QTEMPORARYFILE_H_C_LIBVIRTUAL
#define QTEMPORARYFILE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTemporaryFile so that we can call protected methods
class VirtualQTemporaryFile final : public QTemporaryFile {

public:
	// Virtual class boolean flag
	bool isVirtualQTemporaryFile= true;

	// Virtual class public types (including callbacks)
	using QTemporaryFile_FileName_Callback = const char* (*)();
	using QTemporaryFile_Open2_Callback = bool (*)(QTemporaryFile*, int);

protected:
	// Instance callback storage
	mutable QTemporaryFile_FileName_Callback qtemporaryfile_filename_callback = nullptr;
	mutable QTemporaryFile_Open2_Callback qtemporaryfile_open2_callback = nullptr;

	// Instance base flags
    mutable bool qtemporaryfile_filename_isbase = false;
    mutable bool qtemporaryfile_open2_isbase = false;

public:
	VirtualQTemporaryFile(): QTemporaryFile() {};
	VirtualQTemporaryFile(const QString& templateName): QTemporaryFile(templateName) {};
	VirtualQTemporaryFile(QObject* parent): QTemporaryFile(parent) {};
	VirtualQTemporaryFile(const QString& templateName, QObject* parent): QTemporaryFile(templateName, parent) {};

	~VirtualQTemporaryFile() {
		qtemporaryfile_filename_callback = nullptr;
		qtemporaryfile_open2_callback = nullptr;
	}

// Callback setters
	inline void setQTemporaryFile_FileName_Callback(QTemporaryFile_FileName_Callback cb) const { qtemporaryfile_filename_callback = cb; }
	inline void setQTemporaryFile_Open2_Callback(QTemporaryFile_Open2_Callback cb) const { qtemporaryfile_open2_callback = cb; }

// Base flag setters
	inline void setQTemporaryFile_FileName_IsBase(bool value) const { qtemporaryfile_filename_isbase = value; }
	inline void setQTemporaryFile_Open2_IsBase(bool value) const { qtemporaryfile_open2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString fileName() const override {
		if (qtemporaryfile_filename_isbase) {
			qtemporaryfile_filename_isbase = false;
			return QTemporaryFile::fileName();
		} else if (qtemporaryfile_filename_callback != nullptr) {
			const char* callback_ret = qtemporaryfile_filename_callback();
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QTemporaryFile::fileName();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (qtemporaryfile_open2_isbase) {
			qtemporaryfile_open2_isbase = false;
			return QTemporaryFile::open(flags);
		} else if (qtemporaryfile_open2_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			bool callback_ret = qtemporaryfile_open2_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTemporaryFile::open(flags);
		}
	}

	// Friend functions
	friend bool QTemporaryFile_Open2(QTemporaryFile* self, int flags);
	friend bool QTemporaryFile_QBaseOpen2(QTemporaryFile* self, int flags);
};

#endif


