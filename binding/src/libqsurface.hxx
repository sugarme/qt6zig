#pragma once
#ifndef QSURFACE_H_C_LIBVIRTUAL
#define QSURFACE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSurface so that we can call protected methods
class VirtualQSurface : public QSurface {

public:
	// Virtual class boolean flag
	bool isVirtualQSurface= true;

	// Virtual class public types (including callbacks)
	using QSurface_Format_Callback = QSurfaceFormat* (*)();
	using QSurface_SurfaceHandle_Callback = QPlatformSurface* (*)();
	using QSurface_SurfaceType_Callback = int (*)();
	using QSurface_Size_Callback = QSize* (*)();
	using QSurface_OperatorAssign_Callback = void (*)(QSurface*, const QSurface*);

protected:
	// Instance callback storage
	mutable QSurface_Format_Callback qsurface_format_callback = nullptr;
	mutable QSurface_SurfaceHandle_Callback qsurface_surfacehandle_callback = nullptr;
	mutable QSurface_SurfaceType_Callback qsurface_surfacetype_callback = nullptr;
	mutable QSurface_Size_Callback qsurface_size_callback = nullptr;
	mutable QSurface_OperatorAssign_Callback qsurface_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qsurface_format_isbase = false;
    mutable bool qsurface_surfacehandle_isbase = false;
    mutable bool qsurface_surfacetype_isbase = false;
    mutable bool qsurface_size_isbase = false;
    mutable bool qsurface_operatorassign_isbase = false;

public:
	VirtualQSurface(const QSurface& param1): QSurface(param1) {};

	~VirtualQSurface() {
		qsurface_format_callback = nullptr;
		qsurface_surfacehandle_callback = nullptr;
		qsurface_surfacetype_callback = nullptr;
		qsurface_size_callback = nullptr;
		qsurface_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQSurface_Format_Callback(QSurface_Format_Callback cb) const { qsurface_format_callback = cb; }
	inline void setQSurface_SurfaceHandle_Callback(QSurface_SurfaceHandle_Callback cb) const { qsurface_surfacehandle_callback = cb; }
	inline void setQSurface_SurfaceType_Callback(QSurface_SurfaceType_Callback cb) const { qsurface_surfacetype_callback = cb; }
	inline void setQSurface_Size_Callback(QSurface_Size_Callback cb) const { qsurface_size_callback = cb; }
	inline void setQSurface_OperatorAssign_Callback(QSurface_OperatorAssign_Callback cb) const { qsurface_operatorassign_callback = cb; }

// Base flag setters
	inline void setQSurface_Format_IsBase(bool value) const { qsurface_format_isbase = value; }
	inline void setQSurface_SurfaceHandle_IsBase(bool value) const { qsurface_surfacehandle_isbase = value; }
	inline void setQSurface_SurfaceType_IsBase(bool value) const { qsurface_surfacetype_isbase = value; }
	inline void setQSurface_Size_IsBase(bool value) const { qsurface_size_isbase = value; }
	inline void setQSurface_OperatorAssign_IsBase(bool value) const { qsurface_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSurfaceFormat format() const override {
		if (qsurface_format_callback != nullptr) {
			QSurfaceFormat* callback_ret = qsurface_format_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPlatformSurface* surfaceHandle() const override {
		if (qsurface_surfacehandle_callback != nullptr) {
			QPlatformSurface* callback_ret = qsurface_surfacehandle_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual SurfaceType surfaceType() const override {
		if (qsurface_surfacetype_callback != nullptr) {
			int callback_ret = qsurface_surfacetype_callback();
			return static_cast<QSurface::SurfaceType>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize size() const override {
		if (qsurface_size_callback != nullptr) {
			QSize* callback_ret = qsurface_size_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QSurface& param1) {
		if (qsurface_operatorassign_isbase) {
			qsurface_operatorassign_isbase = false;
			QSurface::operator=(param1);
		} else if (qsurface_operatorassign_callback != nullptr) {
			const QSurface* cbval1 = (const QSurface*)&param1;
			qsurface_operatorassign_callback(this, cbval1);
		} else {
			QSurface::operator=(param1);
		}
	}

	// Friend functions
	friend void QSurface_OperatorAssign(QSurface* self, const QSurface* param1);
	friend void QSurface_QBaseOperatorAssign(QSurface* self, const QSurface* param1);
};

#endif


