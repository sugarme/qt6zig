#pragma once
#ifndef QCOLORAXIS_H_C_LIBVIRTUAL
#define QCOLORAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QColorAxis so that we can call protected methods
class VirtualQColorAxis final : public QColorAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQColorAxis= true;

	// Virtual class public types (including callbacks)
	using QColorAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QColorAxis_Type_Callback qcoloraxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qcoloraxis_type_isbase = false;

public:
	VirtualQColorAxis(): QColorAxis() {};
	VirtualQColorAxis(QObject* parent): QColorAxis(parent) {};

	~VirtualQColorAxis() {
		qcoloraxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQColorAxis_Type_Callback(QColorAxis_Type_Callback cb) const { qcoloraxis_type_callback = cb; }

// Base flag setters
	inline void setQColorAxis_Type_IsBase(bool value) const { qcoloraxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qcoloraxis_type_isbase) {
			qcoloraxis_type_isbase = false;
			return QColorAxis::type();
		} else if (qcoloraxis_type_callback != nullptr) {
			int callback_ret = qcoloraxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QColorAxis::type();
		}
	}
};

#endif


