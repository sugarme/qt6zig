#pragma once
#ifndef QBUFFER_H_C_LIBVIRTUAL
#define QBUFFER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QBuffer so that we can call protected methods
class VirtualQBuffer final : public QBuffer {

public:
	// Virtual class boolean flag
	bool isVirtualQBuffer= true;

	// Virtual class public types (including callbacks)
	using QBuffer_Open_Callback = bool (*)(QBuffer*, int);
	using QBuffer_Close_Callback = void (*)();
	using QBuffer_Size_Callback = long long (*)();
	using QBuffer_Pos_Callback = long long (*)();
	using QBuffer_Seek_Callback = bool (*)(QBuffer*, long long);
	using QBuffer_AtEnd_Callback = bool (*)();
	using QBuffer_CanReadLine_Callback = bool (*)();
	using QBuffer_ConnectNotify_Callback = void (*)(QBuffer*, const QMetaMethod*);
	using QBuffer_DisconnectNotify_Callback = void (*)(QBuffer*, const QMetaMethod*);
	using QBuffer_ReadData_Callback = long long (*)(QBuffer*, char*, long long);
	using QBuffer_WriteData_Callback = long long (*)(QBuffer*, const char*, long long);

protected:
	// Instance callback storage
	mutable QBuffer_Open_Callback qbuffer_open_callback = nullptr;
	mutable QBuffer_Close_Callback qbuffer_close_callback = nullptr;
	mutable QBuffer_Size_Callback qbuffer_size_callback = nullptr;
	mutable QBuffer_Pos_Callback qbuffer_pos_callback = nullptr;
	mutable QBuffer_Seek_Callback qbuffer_seek_callback = nullptr;
	mutable QBuffer_AtEnd_Callback qbuffer_atend_callback = nullptr;
	mutable QBuffer_CanReadLine_Callback qbuffer_canreadline_callback = nullptr;
	mutable QBuffer_ConnectNotify_Callback qbuffer_connectnotify_callback = nullptr;
	mutable QBuffer_DisconnectNotify_Callback qbuffer_disconnectnotify_callback = nullptr;
	mutable QBuffer_ReadData_Callback qbuffer_readdata_callback = nullptr;
	mutable QBuffer_WriteData_Callback qbuffer_writedata_callback = nullptr;

	// Instance base flags
    mutable bool qbuffer_open_isbase = false;
    mutable bool qbuffer_close_isbase = false;
    mutable bool qbuffer_size_isbase = false;
    mutable bool qbuffer_pos_isbase = false;
    mutable bool qbuffer_seek_isbase = false;
    mutable bool qbuffer_atend_isbase = false;
    mutable bool qbuffer_canreadline_isbase = false;
    mutable bool qbuffer_connectnotify_isbase = false;
    mutable bool qbuffer_disconnectnotify_isbase = false;
    mutable bool qbuffer_readdata_isbase = false;
    mutable bool qbuffer_writedata_isbase = false;

public:
	VirtualQBuffer(): QBuffer() {};
	VirtualQBuffer(QByteArray* buf): QBuffer(buf) {};
	VirtualQBuffer(QObject* parent): QBuffer(parent) {};
	VirtualQBuffer(QByteArray* buf, QObject* parent): QBuffer(buf, parent) {};

	~VirtualQBuffer() {
		qbuffer_open_callback = nullptr;
		qbuffer_close_callback = nullptr;
		qbuffer_size_callback = nullptr;
		qbuffer_pos_callback = nullptr;
		qbuffer_seek_callback = nullptr;
		qbuffer_atend_callback = nullptr;
		qbuffer_canreadline_callback = nullptr;
		qbuffer_connectnotify_callback = nullptr;
		qbuffer_disconnectnotify_callback = nullptr;
		qbuffer_readdata_callback = nullptr;
		qbuffer_writedata_callback = nullptr;
	}

// Callback setters
	inline void setQBuffer_Open_Callback(QBuffer_Open_Callback cb) const { qbuffer_open_callback = cb; }
	inline void setQBuffer_Close_Callback(QBuffer_Close_Callback cb) const { qbuffer_close_callback = cb; }
	inline void setQBuffer_Size_Callback(QBuffer_Size_Callback cb) const { qbuffer_size_callback = cb; }
	inline void setQBuffer_Pos_Callback(QBuffer_Pos_Callback cb) const { qbuffer_pos_callback = cb; }
	inline void setQBuffer_Seek_Callback(QBuffer_Seek_Callback cb) const { qbuffer_seek_callback = cb; }
	inline void setQBuffer_AtEnd_Callback(QBuffer_AtEnd_Callback cb) const { qbuffer_atend_callback = cb; }
	inline void setQBuffer_CanReadLine_Callback(QBuffer_CanReadLine_Callback cb) const { qbuffer_canreadline_callback = cb; }
	inline void setQBuffer_ConnectNotify_Callback(QBuffer_ConnectNotify_Callback cb) const { qbuffer_connectnotify_callback = cb; }
	inline void setQBuffer_DisconnectNotify_Callback(QBuffer_DisconnectNotify_Callback cb) const { qbuffer_disconnectnotify_callback = cb; }
	inline void setQBuffer_ReadData_Callback(QBuffer_ReadData_Callback cb) const { qbuffer_readdata_callback = cb; }
	inline void setQBuffer_WriteData_Callback(QBuffer_WriteData_Callback cb) const { qbuffer_writedata_callback = cb; }

// Base flag setters
	inline void setQBuffer_Open_IsBase(bool value) const { qbuffer_open_isbase = value; }
	inline void setQBuffer_Close_IsBase(bool value) const { qbuffer_close_isbase = value; }
	inline void setQBuffer_Size_IsBase(bool value) const { qbuffer_size_isbase = value; }
	inline void setQBuffer_Pos_IsBase(bool value) const { qbuffer_pos_isbase = value; }
	inline void setQBuffer_Seek_IsBase(bool value) const { qbuffer_seek_isbase = value; }
	inline void setQBuffer_AtEnd_IsBase(bool value) const { qbuffer_atend_isbase = value; }
	inline void setQBuffer_CanReadLine_IsBase(bool value) const { qbuffer_canreadline_isbase = value; }
	inline void setQBuffer_ConnectNotify_IsBase(bool value) const { qbuffer_connectnotify_isbase = value; }
	inline void setQBuffer_DisconnectNotify_IsBase(bool value) const { qbuffer_disconnectnotify_isbase = value; }
	inline void setQBuffer_ReadData_IsBase(bool value) const { qbuffer_readdata_isbase = value; }
	inline void setQBuffer_WriteData_IsBase(bool value) const { qbuffer_writedata_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool open(QIODeviceBase::OpenMode openMode) override {
		if (qbuffer_open_isbase) {
			qbuffer_open_isbase = false;
			return QBuffer::open(openMode);
		} else if (qbuffer_open_callback != nullptr) {
			int cbval1 = static_cast<int>(openMode);
			bool callback_ret = qbuffer_open_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBuffer::open(openMode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qbuffer_close_isbase) {
			qbuffer_close_isbase = false;
			QBuffer::close();
		} else if (qbuffer_close_callback != nullptr) {
			qbuffer_close_callback();
		} else {
			QBuffer::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long size() const override {
		if (qbuffer_size_isbase) {
			qbuffer_size_isbase = false;
			return QBuffer::size();
		} else if (qbuffer_size_callback != nullptr) {
			long long callback_ret = qbuffer_size_callback();
			return callback_ret;
		} else {
			return QBuffer::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long pos() const override {
		if (qbuffer_pos_isbase) {
			qbuffer_pos_isbase = false;
			return QBuffer::pos();
		} else if (qbuffer_pos_callback != nullptr) {
			long long callback_ret = qbuffer_pos_callback();
			return callback_ret;
		} else {
			return QBuffer::pos();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool seek(qint64 off) override {
		if (qbuffer_seek_isbase) {
			qbuffer_seek_isbase = false;
			return QBuffer::seek(off);
		} else if (qbuffer_seek_callback != nullptr) {
			long long cbval1 = off;
			bool callback_ret = qbuffer_seek_callback(this, cbval1);
			return callback_ret;
		} else {
			return QBuffer::seek(off);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool atEnd() const override {
		if (qbuffer_atend_isbase) {
			qbuffer_atend_isbase = false;
			return QBuffer::atEnd();
		} else if (qbuffer_atend_callback != nullptr) {
			bool callback_ret = qbuffer_atend_callback();
			return callback_ret;
		} else {
			return QBuffer::atEnd();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool canReadLine() const override {
		if (qbuffer_canreadline_isbase) {
			qbuffer_canreadline_isbase = false;
			return QBuffer::canReadLine();
		} else if (qbuffer_canreadline_callback != nullptr) {
			bool callback_ret = qbuffer_canreadline_callback();
			return callback_ret;
		} else {
			return QBuffer::canReadLine();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void connectNotify(const QMetaMethod& param1) override {
		if (qbuffer_connectnotify_isbase) {
			qbuffer_connectnotify_isbase = false;
			QBuffer::connectNotify(param1);
		} else if (qbuffer_connectnotify_callback != nullptr) {
			const QMetaMethod* cbval1 = (const QMetaMethod*)&param1;
			qbuffer_connectnotify_callback(this, cbval1);
		} else {
			QBuffer::connectNotify(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void disconnectNotify(const QMetaMethod& param1) override {
		if (qbuffer_disconnectnotify_isbase) {
			qbuffer_disconnectnotify_isbase = false;
			QBuffer::disconnectNotify(param1);
		} else if (qbuffer_disconnectnotify_callback != nullptr) {
			const QMetaMethod* cbval1 = (const QMetaMethod*)&param1;
			qbuffer_disconnectnotify_callback(this, cbval1);
		} else {
			QBuffer::disconnectNotify(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long readData(char* data, qint64 maxlen) override {
		if (qbuffer_readdata_isbase) {
			qbuffer_readdata_isbase = false;
			return QBuffer::readData(data, maxlen);
		} else if (qbuffer_readdata_callback != nullptr) {
			char* cbval1 = data;
			long long cbval2 = maxlen;
			long long callback_ret = qbuffer_readdata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QBuffer::readData(data, maxlen);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qbuffer_writedata_isbase) {
			qbuffer_writedata_isbase = false;
			return QBuffer::writeData(data, lenVal);
		} else if (qbuffer_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qbuffer_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QBuffer::writeData(data, lenVal);
		}
	}

	// Friend functions
	friend void QBuffer_ConnectNotify(QBuffer* self, const QMetaMethod* param1);
	friend void QBuffer_QBaseConnectNotify(QBuffer* self, const QMetaMethod* param1);
	friend void QBuffer_DisconnectNotify(QBuffer* self, const QMetaMethod* param1);
	friend void QBuffer_QBaseDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
	friend long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen);
	friend long long QBuffer_QBaseReadData(QBuffer* self, char* data, long long maxlen);
	friend long long QBuffer_WriteData(QBuffer* self, const char* data, long long lenVal);
	friend long long QBuffer_QBaseWriteData(QBuffer* self, const char* data, long long lenVal);
};

#endif


