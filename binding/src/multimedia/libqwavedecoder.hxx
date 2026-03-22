#pragma once
#ifndef QWAVEDECODER_H_C_LIBVIRTUAL
#define QWAVEDECODER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QWaveDecoder so that we can call protected methods
class VirtualQWaveDecoder final : public QWaveDecoder {

public:
	// Virtual class boolean flag
	bool isVirtualQWaveDecoder= true;

	// Virtual class public types (including callbacks)
	using QWaveDecoder_Open_Callback = bool (*)(QWaveDecoder*, QIODevice::OpenMode);
	using QWaveDecoder_Close_Callback = void (*)();
	using QWaveDecoder_Seek_Callback = bool (*)(QWaveDecoder*, long long);
	using QWaveDecoder_Pos_Callback = long long (*)();
	using QWaveDecoder_Size_Callback = long long (*)();
	using QWaveDecoder_IsSequential_Callback = bool (*)();
	using QWaveDecoder_BytesAvailable_Callback = long long (*)();

protected:
	// Instance callback storage
	mutable QWaveDecoder_Open_Callback qwavedecoder_open_callback = nullptr;
	mutable QWaveDecoder_Close_Callback qwavedecoder_close_callback = nullptr;
	mutable QWaveDecoder_Seek_Callback qwavedecoder_seek_callback = nullptr;
	mutable QWaveDecoder_Pos_Callback qwavedecoder_pos_callback = nullptr;
	mutable QWaveDecoder_Size_Callback qwavedecoder_size_callback = nullptr;
	mutable QWaveDecoder_IsSequential_Callback qwavedecoder_issequential_callback = nullptr;
	mutable QWaveDecoder_BytesAvailable_Callback qwavedecoder_bytesavailable_callback = nullptr;

	// Instance base flags
    mutable bool qwavedecoder_open_isbase = false;
    mutable bool qwavedecoder_close_isbase = false;
    mutable bool qwavedecoder_seek_isbase = false;
    mutable bool qwavedecoder_pos_isbase = false;
    mutable bool qwavedecoder_size_isbase = false;
    mutable bool qwavedecoder_issequential_isbase = false;
    mutable bool qwavedecoder_bytesavailable_isbase = false;

public:
	VirtualQWaveDecoder(QIODevice* device): QWaveDecoder(device) {};
	VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format): QWaveDecoder(device, format) {};
	VirtualQWaveDecoder(QIODevice* device, QObject* parent): QWaveDecoder(device, parent) {};
	VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent): QWaveDecoder(device, format, parent) {};

	~VirtualQWaveDecoder() {
		qwavedecoder_open_callback = nullptr;
		qwavedecoder_close_callback = nullptr;
		qwavedecoder_seek_callback = nullptr;
		qwavedecoder_pos_callback = nullptr;
		qwavedecoder_size_callback = nullptr;
		qwavedecoder_issequential_callback = nullptr;
		qwavedecoder_bytesavailable_callback = nullptr;
	}

// Callback setters
	inline void setQWaveDecoder_Open_Callback(QWaveDecoder_Open_Callback cb) const { qwavedecoder_open_callback = cb; }
	inline void setQWaveDecoder_Close_Callback(QWaveDecoder_Close_Callback cb) const { qwavedecoder_close_callback = cb; }
	inline void setQWaveDecoder_Seek_Callback(QWaveDecoder_Seek_Callback cb) const { qwavedecoder_seek_callback = cb; }
	inline void setQWaveDecoder_Pos_Callback(QWaveDecoder_Pos_Callback cb) const { qwavedecoder_pos_callback = cb; }
	inline void setQWaveDecoder_Size_Callback(QWaveDecoder_Size_Callback cb) const { qwavedecoder_size_callback = cb; }
	inline void setQWaveDecoder_IsSequential_Callback(QWaveDecoder_IsSequential_Callback cb) const { qwavedecoder_issequential_callback = cb; }
	inline void setQWaveDecoder_BytesAvailable_Callback(QWaveDecoder_BytesAvailable_Callback cb) const { qwavedecoder_bytesavailable_callback = cb; }

// Base flag setters
	inline void setQWaveDecoder_Open_IsBase(bool value) const { qwavedecoder_open_isbase = value; }
	inline void setQWaveDecoder_Close_IsBase(bool value) const { qwavedecoder_close_isbase = value; }
	inline void setQWaveDecoder_Seek_IsBase(bool value) const { qwavedecoder_seek_isbase = value; }
	inline void setQWaveDecoder_Pos_IsBase(bool value) const { qwavedecoder_pos_isbase = value; }
	inline void setQWaveDecoder_Size_IsBase(bool value) const { qwavedecoder_size_isbase = value; }
	inline void setQWaveDecoder_IsSequential_IsBase(bool value) const { qwavedecoder_issequential_isbase = value; }
	inline void setQWaveDecoder_BytesAvailable_IsBase(bool value) const { qwavedecoder_bytesavailable_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODevice::OpenMode mode) override {
		if (qwavedecoder_open_isbase) {
			qwavedecoder_open_isbase = false;
			return QWaveDecoder::open(mode);
		} else if (qwavedecoder_open_callback != nullptr) {
			QIODevice::OpenMode cbval1 = mode;
			bool callback_ret = qwavedecoder_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWaveDecoder::open(mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qwavedecoder_close_isbase) {
			qwavedecoder_close_isbase = false;
			QWaveDecoder::close();
		} else if (qwavedecoder_close_callback != nullptr) {
			qwavedecoder_close_callback();
		} else {
			QWaveDecoder::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool seek(qint64 pos) override {
		if (qwavedecoder_seek_isbase) {
			qwavedecoder_seek_isbase = false;
			return QWaveDecoder::seek(pos);
		} else if (qwavedecoder_seek_callback != nullptr) {
			long long cbval1 = pos;
			bool callback_ret = qwavedecoder_seek_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWaveDecoder::seek(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long pos() const override {
		if (qwavedecoder_pos_isbase) {
			qwavedecoder_pos_isbase = false;
			return QWaveDecoder::pos();
		} else if (qwavedecoder_pos_callback != nullptr) {
			long long callback_ret = qwavedecoder_pos_callback();
			return callback_ret;
		} else {
			return QWaveDecoder::pos();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long size() const override {
		if (qwavedecoder_size_isbase) {
			qwavedecoder_size_isbase = false;
			return QWaveDecoder::size();
		} else if (qwavedecoder_size_callback != nullptr) {
			long long callback_ret = qwavedecoder_size_callback();
			return callback_ret;
		} else {
			return QWaveDecoder::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qwavedecoder_issequential_isbase) {
			qwavedecoder_issequential_isbase = false;
			return QWaveDecoder::isSequential();
		} else if (qwavedecoder_issequential_callback != nullptr) {
			bool callback_ret = qwavedecoder_issequential_callback();
			return callback_ret;
		} else {
			return QWaveDecoder::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long bytesAvailable() const override {
		if (qwavedecoder_bytesavailable_isbase) {
			qwavedecoder_bytesavailable_isbase = false;
			return QWaveDecoder::bytesAvailable();
		} else if (qwavedecoder_bytesavailable_callback != nullptr) {
			long long callback_ret = qwavedecoder_bytesavailable_callback();
			return callback_ret;
		} else {
			return QWaveDecoder::bytesAvailable();
		}
	}
};

#endif


