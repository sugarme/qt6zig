#pragma once
#ifndef QOPENGLFUNCTIONS_3_2_COMPATIBILITY_H_C_LIBVIRTUAL
#define QOPENGLFUNCTIONS_3_2_COMPATIBILITY_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLFunctions_3_2_Compatibility so that we can call protected methods
class VirtualQOpenGLFunctions_3_2_Compatibility final : public QOpenGLFunctions_3_2_Compatibility {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLFunctions_3_2_Compatibility= true;

	// Virtual class public types (including callbacks)
	using QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback = nullptr;

	// Instance base flags
    mutable bool qopenglfunctions_3_2_compatibility_initializeopenglfunctions_isbase = false;

public:
	VirtualQOpenGLFunctions_3_2_Compatibility(): QOpenGLFunctions_3_2_Compatibility() {};

	~VirtualQOpenGLFunctions_3_2_Compatibility() {
		qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback cb) const { qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback = cb; }

// Base flag setters
	inline void setQOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_3_2_compatibility_initializeopenglfunctions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qopenglfunctions_3_2_compatibility_initializeopenglfunctions_isbase) {
			qopenglfunctions_3_2_compatibility_initializeopenglfunctions_isbase = false;
			return QOpenGLFunctions_3_2_Compatibility::initializeOpenGLFunctions();
		} else if (qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qopenglfunctions_3_2_compatibility_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QOpenGLFunctions_3_2_Compatibility::initializeOpenGLFunctions();
		}
	}
};

#endif


