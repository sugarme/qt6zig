#pragma once
#ifndef QRUNNABLE_H_C_LIBVIRTUAL
#define QRUNNABLE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QRunnable so that we can call protected methods
class VirtualQRunnable : public QRunnable {

public:
	// Virtual class boolean flag
	bool isVirtualQRunnable= true;

	// Virtual class public types (including callbacks)
	using QRunnable_Run_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QRunnable_Run_Callback qrunnable_run_callback = nullptr;

	// Instance base flags
    mutable bool qrunnable_run_isbase = false;

public:
	VirtualQRunnable(): QRunnable() {};

	~VirtualQRunnable() {
		qrunnable_run_callback = nullptr;
	}

// Callback setters
	inline void setQRunnable_Run_Callback(QRunnable_Run_Callback cb) const { qrunnable_run_callback = cb; }

// Base flag setters
	inline void setQRunnable_Run_IsBase(bool value) const { qrunnable_run_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void run() override {
		if (qrunnable_run_callback != nullptr) {
			qrunnable_run_callback();
		}
	}
};

// This class is a subclass of QGenericRunnable so that we can call protected methods
class VirtualQGenericRunnable final : public QGenericRunnable {

public:
	// Virtual class boolean flag
	bool isVirtualQGenericRunnable= true;

	// Virtual class public types (including callbacks)
	using QGenericRunnable_Run_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QGenericRunnable_Run_Callback qgenericrunnable_run_callback = nullptr;

	// Instance base flags
    mutable bool qgenericrunnable_run_isbase = false;

public:

	~VirtualQGenericRunnable() {
		qgenericrunnable_run_callback = nullptr;
	}

// Callback setters
	inline void setQGenericRunnable_Run_Callback(QGenericRunnable_Run_Callback cb) const { qgenericrunnable_run_callback = cb; }

// Base flag setters
	inline void setQGenericRunnable_Run_IsBase(bool value) const { qgenericrunnable_run_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void run() override {
		if (qgenericrunnable_run_isbase) {
			qgenericrunnable_run_isbase = false;
			QGenericRunnable::run();
		} else if (qgenericrunnable_run_callback != nullptr) {
			qgenericrunnable_run_callback();
		} else {
			QGenericRunnable::run();
		}
	}
};

#endif


