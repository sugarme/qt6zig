#pragma once
#ifndef QOPENGLFUNCTIONS_1_4_H_C_LIBVIRTUAL
#define QOPENGLFUNCTIONS_1_4_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLFunctions_1_4 so that we can call protected methods
class VirtualQOpenGLFunctions_1_4 final : public QOpenGLFunctions_1_4 {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLFunctions_1_4= true;

	// Virtual class public types (including callbacks)
	using QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback qopenglfunctions_1_4_initializeopenglfunctions_callback = nullptr;

	// Instance base flags
    mutable bool qopenglfunctions_1_4_initializeopenglfunctions_isbase = false;

public:
	VirtualQOpenGLFunctions_1_4(): QOpenGLFunctions_1_4() {};

	~VirtualQOpenGLFunctions_1_4() {
		qopenglfunctions_1_4_initializeopenglfunctions_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback cb) const { qopenglfunctions_1_4_initializeopenglfunctions_callback = cb; }

// Base flag setters
	inline void setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_1_4_initializeopenglfunctions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qopenglfunctions_1_4_initializeopenglfunctions_isbase) {
			qopenglfunctions_1_4_initializeopenglfunctions_isbase = false;
			return QOpenGLFunctions_1_4::initializeOpenGLFunctions();
		} else if (qopenglfunctions_1_4_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qopenglfunctions_1_4_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QOpenGLFunctions_1_4::initializeOpenGLFunctions();
		}
	}
};

#endif


