#pragma once
#ifndef QOPENGLFUNCTIONS_2_1_H_C_LIBVIRTUAL
#define QOPENGLFUNCTIONS_2_1_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLFunctions_2_1 so that we can call protected methods
class VirtualQOpenGLFunctions_2_1 final : public QOpenGLFunctions_2_1 {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLFunctions_2_1= true;

	// Virtual class public types (including callbacks)
	using QOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback qopenglfunctions_2_1_initializeopenglfunctions_callback = nullptr;

	// Instance base flags
    mutable bool qopenglfunctions_2_1_initializeopenglfunctions_isbase = false;

public:
	VirtualQOpenGLFunctions_2_1(): QOpenGLFunctions_2_1() {};

	~VirtualQOpenGLFunctions_2_1() {
		qopenglfunctions_2_1_initializeopenglfunctions_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback(QOpenGLFunctions_2_1_InitializeOpenGLFunctions_Callback cb) const { qopenglfunctions_2_1_initializeopenglfunctions_callback = cb; }

// Base flag setters
	inline void setQOpenGLFunctions_2_1_InitializeOpenGLFunctions_IsBase(bool value) const { qopenglfunctions_2_1_initializeopenglfunctions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool initializeOpenGLFunctions() override {
		if (qopenglfunctions_2_1_initializeopenglfunctions_isbase) {
			qopenglfunctions_2_1_initializeopenglfunctions_isbase = false;
			return QOpenGLFunctions_2_1::initializeOpenGLFunctions();
		} else if (qopenglfunctions_2_1_initializeopenglfunctions_callback != nullptr) {
			bool callback_ret = qopenglfunctions_2_1_initializeopenglfunctions_callback();
			return callback_ret;
		} else {
			return QOpenGLFunctions_2_1::initializeOpenGLFunctions();
		}
	}
};

#endif


