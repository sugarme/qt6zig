#pragma once
#ifndef QEXCEPTION_H_C_LIBVIRTUAL
#define QEXCEPTION_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QException so that we can call protected methods
class VirtualQException final : public QException {

public:
	// Virtual class boolean flag
	bool isVirtualQException= true;

	// Virtual class public types (including callbacks)
	using QException_Raise_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QException_Raise_Callback qexception_raise_callback = nullptr;

	// Instance base flags
    mutable bool qexception_raise_isbase = false;

public:
	VirtualQException(): QException() {};
	VirtualQException(const QException& param1): QException(param1) {};

	~VirtualQException() {
		qexception_raise_callback = nullptr;
	}

// Callback setters
	inline void setQException_Raise_Callback(QException_Raise_Callback cb) const { qexception_raise_callback = cb; }

// Base flag setters
	inline void setQException_Raise_IsBase(bool value) const { qexception_raise_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void raise() const override {
		if (qexception_raise_isbase) {
			qexception_raise_isbase = false;
			QException::raise();
		} else if (qexception_raise_callback != nullptr) {
			qexception_raise_callback();
		} else {
			QException::raise();
		}
	}
};

// This class is a subclass of QUnhandledException so that we can call protected methods
class VirtualQUnhandledException final : public QUnhandledException {

public:
	// Virtual class boolean flag
	bool isVirtualQUnhandledException= true;

	// Virtual class public types (including callbacks)
	using QUnhandledException_Raise_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QUnhandledException_Raise_Callback qunhandledexception_raise_callback = nullptr;

	// Instance base flags
    mutable bool qunhandledexception_raise_isbase = false;

public:
	VirtualQUnhandledException(): QUnhandledException() {};
	VirtualQUnhandledException(const QUnhandledException& other): QUnhandledException(other) {};
	VirtualQUnhandledException(std::exception_ptr exception): QUnhandledException(exception) {};

	~VirtualQUnhandledException() {
		qunhandledexception_raise_callback = nullptr;
	}

// Callback setters
	inline void setQUnhandledException_Raise_Callback(QUnhandledException_Raise_Callback cb) const { qunhandledexception_raise_callback = cb; }

// Base flag setters
	inline void setQUnhandledException_Raise_IsBase(bool value) const { qunhandledexception_raise_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void raise() const override {
		if (qunhandledexception_raise_isbase) {
			qunhandledexception_raise_isbase = false;
			QUnhandledException::raise();
		} else if (qunhandledexception_raise_callback != nullptr) {
			qunhandledexception_raise_callback();
		} else {
			QUnhandledException::raise();
		}
	}
};

#endif


