#pragma once
#ifndef QOPENGLFUNCTIONS_4_0_COMPATIBILITY_H_C_LIBVIRTUAL
#define QOPENGLFUNCTIONS_4_0_COMPATIBILITY_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLFunctions_4_0_Compatibility so that we can call protected methods
class VirtualQOpenGLFunctions_4_0_Compatibility final : public QOpenGLFunctions_4_0_Compatibility {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLFunctions_4_0_Compatibility= true;

	// Virtual class public types (including callbacks)
	using QOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions_Callback qopenglfunctions_4_0_compatibility_initializeopenglfunctions_callback = nullptr;

	// Instance base flags
    mutable bool qopenglfunctions_4_0_compatibility_initializeopenglfunctions_isbase = false;

public:
	VirtualQOpenGLFunctions_4_0_Compatibility(): QOpenGLFunctions_4_0_Compatibility() {};

	~VirtualQOpenGLFunctions_4_0_Compatibility() {
		qopenglfunctions_4_0_compatibility_initializeopenglfunctions_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions_Callback cb) const { qopenglfunctions_4_0_compatibility_initializeopenglfunctions_callback = cb; }

// Base flag setters
	inline void setQOpenGLFunctions_4_0_Compatibility_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_4_0_compatibility_initializeopenglfunctions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qopenglfunctions_4_0_compatibility_initializeopenglfunctions_isbase) {
			qopenglfunctions_4_0_compatibility_initializeopenglfunctions_isbase = false;
			return QOpenGLFunctions_4_0_Compatibility::initializeOpenGLFunctions();
		} else if (qopenglfunctions_4_0_compatibility_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qopenglfunctions_4_0_compatibility_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QOpenGLFunctions_4_0_Compatibility::initializeOpenGLFunctions();
		}
	}
};

#endif


