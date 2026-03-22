#pragma once
#ifndef QABSTRACTAXIS_H_C_LIBVIRTUAL
#define QABSTRACTAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractAxis so that we can call protected methods
class VirtualQAbstractAxis : public QAbstractAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractAxis= true;

	// Virtual class public types (including callbacks)
	using QAbstractAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QAbstractAxis_Type_Callback qabstractaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qabstractaxis_type_isbase = false;

public:

	~VirtualQAbstractAxis() {
		qabstractaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractAxis_Type_Callback(QAbstractAxis_Type_Callback cb) const { qabstractaxis_type_callback = cb; }

// Base flag setters
	inline void setQAbstractAxis_Type_IsBase(bool value) const { qabstractaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qabstractaxis_type_callback != nullptr) {
			int callback_ret = qabstractaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return {};
		}
	}
};

#endif


