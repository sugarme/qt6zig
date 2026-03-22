#pragma once
#ifndef QOPENGLCONTEXT_PLATFORM_H_C_LIBVIRTUAL
#define QOPENGLCONTEXT_PLATFORM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QNativeInterface::QWGLContext so that we can call protected methods
class VirtualQNativeInterfaceQWGLContext : public QNativeInterface::QWGLContext {

public:
	// Virtual class boolean flag
	bool isVirtualQNativeInterfaceQWGLContext= true;

	// Virtual class public types (including callbacks)
	using QNativeInterface__QWGLContext_NativeContext_Callback = struct HGLRC__* (*)();

protected:
	// Instance callback storage
	mutable QNativeInterface__QWGLContext_NativeContext_Callback qnativeinterface__qwglcontext_nativecontext_callback = nullptr;

	// Instance base flags
    mutable bool qnativeinterface__qwglcontext_nativecontext_isbase = false;

public:
	VirtualQNativeInterfaceQWGLContext(): QNativeInterface::QWGLContext() {};

	~VirtualQNativeInterfaceQWGLContext() {
		qnativeinterface__qwglcontext_nativecontext_callback = nullptr;
	}

// Callback setters
	inline void setQNativeInterface__QWGLContext_NativeContext_Callback(QNativeInterface__QWGLContext_NativeContext_Callback cb) const { qnativeinterface__qwglcontext_nativecontext_callback = cb; }

// Base flag setters
	inline void setQNativeInterface__QWGLContext_NativeContext_IsBase(bool value) const { qnativeinterface__qwglcontext_nativecontext_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual struct HGLRC__* nativeContext() const override {
		if (qnativeinterface__qwglcontext_nativecontext_callback != nullptr) {
			struct HGLRC__* callback_ret = qnativeinterface__qwglcontext_nativecontext_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


