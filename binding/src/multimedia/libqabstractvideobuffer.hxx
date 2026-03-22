#pragma once
#ifndef QABSTRACTVIDEOBUFFER_H_C_LIBVIRTUAL
#define QABSTRACTVIDEOBUFFER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractVideoBuffer so that we can call protected methods
class VirtualQAbstractVideoBuffer : public QAbstractVideoBuffer {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractVideoBuffer= true;

	// Virtual class public types (including callbacks)
	using QAbstractVideoBuffer_Map_Callback = QAbstractVideoBuffer__MapData* (*)(QAbstractVideoBuffer*, int);
	using QAbstractVideoBuffer_Unmap_Callback = void (*)();
	using QAbstractVideoBuffer_Format_Callback = QVideoFrameFormat* (*)();

protected:
	// Instance callback storage
	mutable QAbstractVideoBuffer_Map_Callback qabstractvideobuffer_map_callback = nullptr;
	mutable QAbstractVideoBuffer_Unmap_Callback qabstractvideobuffer_unmap_callback = nullptr;
	mutable QAbstractVideoBuffer_Format_Callback qabstractvideobuffer_format_callback = nullptr;

	// Instance base flags
    mutable bool qabstractvideobuffer_map_isbase = false;
    mutable bool qabstractvideobuffer_unmap_isbase = false;
    mutable bool qabstractvideobuffer_format_isbase = false;

public:
	VirtualQAbstractVideoBuffer(): QAbstractVideoBuffer() {};
	VirtualQAbstractVideoBuffer(const QAbstractVideoBuffer& param1): QAbstractVideoBuffer(param1) {};

	~VirtualQAbstractVideoBuffer() {
		qabstractvideobuffer_map_callback = nullptr;
		qabstractvideobuffer_unmap_callback = nullptr;
		qabstractvideobuffer_format_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractVideoBuffer_Map_Callback(QAbstractVideoBuffer_Map_Callback cb) const { qabstractvideobuffer_map_callback = cb; }
	inline void setQAbstractVideoBuffer_Unmap_Callback(QAbstractVideoBuffer_Unmap_Callback cb) const { qabstractvideobuffer_unmap_callback = cb; }
	inline void setQAbstractVideoBuffer_Format_Callback(QAbstractVideoBuffer_Format_Callback cb) const { qabstractvideobuffer_format_callback = cb; }

// Base flag setters
	inline void setQAbstractVideoBuffer_Map_IsBase(bool value) const { qabstractvideobuffer_map_isbase = value; }
	inline void setQAbstractVideoBuffer_Unmap_IsBase(bool value) const { qabstractvideobuffer_unmap_isbase = value; }
	inline void setQAbstractVideoBuffer_Format_IsBase(bool value) const { qabstractvideobuffer_format_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAbstractVideoBuffer::MapData map(QVideoFrame::MapMode mode) override {
		if (qabstractvideobuffer_map_callback != nullptr) {
			int cbval1 = static_cast<int>(mode);
			QAbstractVideoBuffer__MapData* callback_ret = qabstractvideobuffer_map_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unmap() override {
		if (qabstractvideobuffer_unmap_isbase) {
			qabstractvideobuffer_unmap_isbase = false;
			QAbstractVideoBuffer::unmap();
		} else if (qabstractvideobuffer_unmap_callback != nullptr) {
			qabstractvideobuffer_unmap_callback();
		} else {
			QAbstractVideoBuffer::unmap();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVideoFrameFormat format() const override {
		if (qabstractvideobuffer_format_callback != nullptr) {
			QVideoFrameFormat* callback_ret = qabstractvideobuffer_format_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}
};

#endif


