#pragma once
#ifndef QBARCATEGORYAXIS_H_C_LIBVIRTUAL
#define QBARCATEGORYAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QBarCategoryAxis so that we can call protected methods
class VirtualQBarCategoryAxis final : public QBarCategoryAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQBarCategoryAxis= true;

	// Virtual class public types (including callbacks)
	using QBarCategoryAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QBarCategoryAxis_Type_Callback qbarcategoryaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qbarcategoryaxis_type_isbase = false;

public:
	VirtualQBarCategoryAxis(): QBarCategoryAxis() {};
	VirtualQBarCategoryAxis(QObject* parent): QBarCategoryAxis(parent) {};

	~VirtualQBarCategoryAxis() {
		qbarcategoryaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQBarCategoryAxis_Type_Callback(QBarCategoryAxis_Type_Callback cb) const { qbarcategoryaxis_type_callback = cb; }

// Base flag setters
	inline void setQBarCategoryAxis_Type_IsBase(bool value) const { qbarcategoryaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qbarcategoryaxis_type_isbase) {
			qbarcategoryaxis_type_isbase = false;
			return QBarCategoryAxis::type();
		} else if (qbarcategoryaxis_type_callback != nullptr) {
			int callback_ret = qbarcategoryaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QBarCategoryAxis::type();
		}
	}
};

#endif


