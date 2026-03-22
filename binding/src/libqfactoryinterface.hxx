#pragma once
#ifndef QFACTORYINTERFACE_H_C_LIBVIRTUAL
#define QFACTORYINTERFACE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFactoryInterface so that we can call protected methods
class VirtualQFactoryInterface : public QFactoryInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQFactoryInterface= true;

	// Virtual class public types (including callbacks)
	using QFactoryInterface_Keys_Callback = libqt_list (*)();

protected:
	// Instance callback storage
	mutable QFactoryInterface_Keys_Callback qfactoryinterface_keys_callback = nullptr;

	// Instance base flags
    mutable bool qfactoryinterface_keys_isbase = false;

public:
	VirtualQFactoryInterface(): QFactoryInterface() {};

	~VirtualQFactoryInterface() {
		qfactoryinterface_keys_callback = nullptr;
	}

// Callback setters
	inline void setQFactoryInterface_Keys_Callback(QFactoryInterface_Keys_Callback cb) const { qfactoryinterface_keys_callback = cb; }

// Base flag setters
	inline void setQFactoryInterface_Keys_IsBase(bool value) const { qfactoryinterface_keys_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QString> keys() const override {
		if (qfactoryinterface_keys_callback != nullptr) {
			libqt_list callback_ret = qfactoryinterface_keys_callback();
			return QList<QString>();
		} else {
			return {};
		}
	}
};

#endif


