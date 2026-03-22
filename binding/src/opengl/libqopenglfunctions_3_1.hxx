#pragma once
#ifndef QOPENGLFUNCTIONS_3_1_H_C_LIBVIRTUAL
#define QOPENGLFUNCTIONS_3_1_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLFunctions_3_1 so that we can call protected methods
class VirtualQOpenGLFunctions_3_1 final : public QOpenGLFunctions_3_1 {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLFunctions_3_1= true;

	// Virtual class public types (including callbacks)
	using QOpenGLFunctions_3_1_InitializeOpenGLFunctions_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLFunctions_3_1_InitializeOpenGLFunctions_Callback qopenglfunctions_3_1_initializeopenglfunctions_callback = nullptr;

	// Instance base flags
    mutable bool qopenglfunctions_3_1_initializeopenglfunctions_isbase = false;

public:
	VirtualQOpenGLFunctions_3_1(): QOpenGLFunctions_3_1() {};

	~VirtualQOpenGLFunctions_3_1() {
		qopenglfunctions_3_1_initializeopenglfunctions_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLFunctions_3_1_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_3_1_InitializeOpenGLFunctions_Callback cb) const { qopenglfunctions_3_1_initializeopenglfunctions_callback = cb; }

// Base flag setters
	inline void setQOpenGLFunctions_3_1_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_3_1_initializeopenglfunctions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qopenglfunctions_3_1_initializeopenglfunctions_isbase) {
			qopenglfunctions_3_1_initializeopenglfunctions_isbase = false;
			return QOpenGLFunctions_3_1::initializeOpenGLFunctions();
		} else if (qopenglfunctions_3_1_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qopenglfunctions_3_1_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QOpenGLFunctions_3_1::initializeOpenGLFunctions();
		}
	}
};

#endif


