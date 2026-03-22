#pragma once
#ifndef QLOGVALUEAXIS_H_C_LIBVIRTUAL
#define QLOGVALUEAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QLogValueAxis so that we can call protected methods
class VirtualQLogValueAxis final : public QLogValueAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQLogValueAxis= true;

	// Virtual class public types (including callbacks)
	using QLogValueAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QLogValueAxis_Type_Callback qlogvalueaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qlogvalueaxis_type_isbase = false;

public:
	VirtualQLogValueAxis(): QLogValueAxis() {};
	VirtualQLogValueAxis(QObject* parent): QLogValueAxis(parent) {};

	~VirtualQLogValueAxis() {
		qlogvalueaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQLogValueAxis_Type_Callback(QLogValueAxis_Type_Callback cb) const { qlogvalueaxis_type_callback = cb; }

// Base flag setters
	inline void setQLogValueAxis_Type_IsBase(bool value) const { qlogvalueaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qlogvalueaxis_type_isbase) {
			qlogvalueaxis_type_isbase = false;
			return QLogValueAxis::type();
		} else if (qlogvalueaxis_type_callback != nullptr) {
			int callback_ret = qlogvalueaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QLogValueAxis::type();
		}
	}
};

#endif


