#pragma once
#ifndef QSCREEN_PLATFORM_H_C_LIBVIRTUAL
#define QSCREEN_PLATFORM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QNativeInterface::QWindowsScreen so that we can call protected methods
class VirtualQNativeInterfaceQWindowsScreen : public QNativeInterface::QWindowsScreen {

public:
	// Virtual class boolean flag
	bool isVirtualQNativeInterfaceQWindowsScreen= true;

	// Virtual class public types (including callbacks)
	using QNativeInterface__QWindowsScreen_Handle_Callback = struct HMONITOR__* (*)();

protected:
	// Instance callback storage
	mutable QNativeInterface__QWindowsScreen_Handle_Callback qnativeinterface__qwindowsscreen_handle_callback = nullptr;

	// Instance base flags
    mutable bool qnativeinterface__qwindowsscreen_handle_isbase = false;

public:
	VirtualQNativeInterfaceQWindowsScreen(): QNativeInterface::QWindowsScreen() {};

	~VirtualQNativeInterfaceQWindowsScreen() {
		qnativeinterface__qwindowsscreen_handle_callback = nullptr;
	}

// Callback setters
	inline void setQNativeInterface__QWindowsScreen_Handle_Callback(QNativeInterface__QWindowsScreen_Handle_Callback cb) const { qnativeinterface__qwindowsscreen_handle_callback = cb; }

// Base flag setters
	inline void setQNativeInterface__QWindowsScreen_Handle_IsBase(bool value) const { qnativeinterface__qwindowsscreen_handle_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual struct HMONITOR__* handle() const override {
		if (qnativeinterface__qwindowsscreen_handle_callback != nullptr) {
			struct HMONITOR__* callback_ret = qnativeinterface__qwindowsscreen_handle_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


