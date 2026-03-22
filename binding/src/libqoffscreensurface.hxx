#pragma once
#ifndef QOFFSCREENSURFACE_H_C_LIBVIRTUAL
#define QOFFSCREENSURFACE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QOffscreenSurface so that we can call protected methods
class VirtualQOffscreenSurface final : public QOffscreenSurface {

public:
	// Virtual class boolean flag
	bool isVirtualQOffscreenSurface= true;

	// Virtual class public types (including callbacks)
	using QOffscreenSurface_SurfaceType_Callback = int (*)();
	using QOffscreenSurface_Format_Callback = QSurfaceFormat* (*)();
	using QOffscreenSurface_Size_Callback = QSize* (*)();
	using QOffscreenSurface_ResolveInterface_Callback = void* (*)(const QOffscreenSurface*, const char*, int);

protected:
	// Instance callback storage
	mutable QOffscreenSurface_SurfaceType_Callback qoffscreensurface_surfacetype_callback = nullptr;
	mutable QOffscreenSurface_Format_Callback qoffscreensurface_format_callback = nullptr;
	mutable QOffscreenSurface_Size_Callback qoffscreensurface_size_callback = nullptr;
	mutable QOffscreenSurface_ResolveInterface_Callback qoffscreensurface_resolveinterface_callback = nullptr;

	// Instance base flags
    mutable bool qoffscreensurface_surfacetype_isbase = false;
    mutable bool qoffscreensurface_format_isbase = false;
    mutable bool qoffscreensurface_size_isbase = false;
    mutable bool qoffscreensurface_resolveinterface_isbase = false;

public:
	VirtualQOffscreenSurface(): QOffscreenSurface() {};
	VirtualQOffscreenSurface(QScreen* screen): QOffscreenSurface(screen) {};
	VirtualQOffscreenSurface(QScreen* screen, QObject* parent): QOffscreenSurface(screen, parent) {};

	~VirtualQOffscreenSurface() {
		qoffscreensurface_surfacetype_callback = nullptr;
		qoffscreensurface_format_callback = nullptr;
		qoffscreensurface_size_callback = nullptr;
		qoffscreensurface_resolveinterface_callback = nullptr;
	}

// Callback setters
	inline void setQOffscreenSurface_SurfaceType_Callback(QOffscreenSurface_SurfaceType_Callback cb) const { qoffscreensurface_surfacetype_callback = cb; }
	inline void setQOffscreenSurface_Format_Callback(QOffscreenSurface_Format_Callback cb) const { qoffscreensurface_format_callback = cb; }
	inline void setQOffscreenSurface_Size_Callback(QOffscreenSurface_Size_Callback cb) const { qoffscreensurface_size_callback = cb; }
	inline void setQOffscreenSurface_ResolveInterface_Callback(QOffscreenSurface_ResolveInterface_Callback cb) const { qoffscreensurface_resolveinterface_callback = cb; }

// Base flag setters
	inline void setQOffscreenSurface_SurfaceType_IsBase(bool value) const { qoffscreensurface_surfacetype_isbase = value; }
	inline void setQOffscreenSurface_Format_IsBase(bool value) const { qoffscreensurface_format_isbase = value; }
	inline void setQOffscreenSurface_Size_IsBase(bool value) const { qoffscreensurface_size_isbase = value; }
	inline void setQOffscreenSurface_ResolveInterface_IsBase(bool value) const { qoffscreensurface_resolveinterface_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual SurfaceType surfaceType() const override {
		if (qoffscreensurface_surfacetype_isbase) {
			qoffscreensurface_surfacetype_isbase = false;
			return QOffscreenSurface::surfaceType();
		} else if (qoffscreensurface_surfacetype_callback != nullptr) {
			int callback_ret = qoffscreensurface_surfacetype_callback();
			return static_cast<QSurface::SurfaceType>(callback_ret);
		} else {
			return QOffscreenSurface::surfaceType();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSurfaceFormat format() const override {
		if (qoffscreensurface_format_isbase) {
			qoffscreensurface_format_isbase = false;
			return QOffscreenSurface::format();
		} else if (qoffscreensurface_format_callback != nullptr) {
			QSurfaceFormat* callback_ret = qoffscreensurface_format_callback();
			return *callback_ret;
		} else {
			return QOffscreenSurface::format();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize size() const override {
		if (qoffscreensurface_size_isbase) {
			qoffscreensurface_size_isbase = false;
			return QOffscreenSurface::size();
		} else if (qoffscreensurface_size_callback != nullptr) {
			QSize* callback_ret = qoffscreensurface_size_callback();
			return *callback_ret;
		} else {
			return QOffscreenSurface::size();
		}
	}

	// Virtual method for C ABI access and custom callback
	void* resolveInterface(const char* name, int revision) const {
		if (qoffscreensurface_resolveinterface_isbase) {
			qoffscreensurface_resolveinterface_isbase = false;
			return QOffscreenSurface::resolveInterface(name, revision);
		} else if (qoffscreensurface_resolveinterface_callback != nullptr) {
			const char* cbval1 = name;
			int cbval2 = revision;
			void* callback_ret = qoffscreensurface_resolveinterface_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QOffscreenSurface::resolveInterface(name, revision);
		}
	}

	// Friend functions
	friend void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
	friend void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision);
};

#endif


