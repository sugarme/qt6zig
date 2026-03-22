#pragma once
#ifndef QDATETIMEAXIS_H_C_LIBVIRTUAL
#define QDATETIMEAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QDateTimeAxis so that we can call protected methods
class VirtualQDateTimeAxis final : public QDateTimeAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQDateTimeAxis= true;

	// Virtual class public types (including callbacks)
	using QDateTimeAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QDateTimeAxis_Type_Callback qdatetimeaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qdatetimeaxis_type_isbase = false;

public:
	VirtualQDateTimeAxis(): QDateTimeAxis() {};
	VirtualQDateTimeAxis(QObject* parent): QDateTimeAxis(parent) {};

	~VirtualQDateTimeAxis() {
		qdatetimeaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQDateTimeAxis_Type_Callback(QDateTimeAxis_Type_Callback cb) const { qdatetimeaxis_type_callback = cb; }

// Base flag setters
	inline void setQDateTimeAxis_Type_IsBase(bool value) const { qdatetimeaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qdatetimeaxis_type_isbase) {
			qdatetimeaxis_type_isbase = false;
			return QDateTimeAxis::type();
		} else if (qdatetimeaxis_type_callback != nullptr) {
			int callback_ret = qdatetimeaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QDateTimeAxis::type();
		}
	}
};

#endif


