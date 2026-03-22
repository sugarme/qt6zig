#pragma once
#ifndef QVALUEAXIS_H_C_LIBVIRTUAL
#define QVALUEAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QValueAxis so that we can call protected methods
class VirtualQValueAxis final : public QValueAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQValueAxis= true;

	// Virtual class public types (including callbacks)
	using QValueAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QValueAxis_Type_Callback qvalueaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qvalueaxis_type_isbase = false;

public:
	VirtualQValueAxis(): QValueAxis() {};
	VirtualQValueAxis(QObject* parent): QValueAxis(parent) {};

	~VirtualQValueAxis() {
		qvalueaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQValueAxis_Type_Callback(QValueAxis_Type_Callback cb) const { qvalueaxis_type_callback = cb; }

// Base flag setters
	inline void setQValueAxis_Type_IsBase(bool value) const { qvalueaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qvalueaxis_type_isbase) {
			qvalueaxis_type_isbase = false;
			return QValueAxis::type();
		} else if (qvalueaxis_type_callback != nullptr) {
			int callback_ret = qvalueaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QValueAxis::type();
		}
	}
};

#endif


