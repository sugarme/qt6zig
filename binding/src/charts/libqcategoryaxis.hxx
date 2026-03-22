#pragma once
#ifndef QCATEGORYAXIS_H_C_LIBVIRTUAL
#define QCATEGORYAXIS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QCategoryAxis so that we can call protected methods
class VirtualQCategoryAxis final : public QCategoryAxis {

public:
	// Virtual class boolean flag
	bool isVirtualQCategoryAxis= true;

	// Virtual class public types (including callbacks)
	using QCategoryAxis_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QCategoryAxis_Type_Callback qcategoryaxis_type_callback = nullptr;

	// Instance base flags
    mutable bool qcategoryaxis_type_isbase = false;

public:
	VirtualQCategoryAxis(): QCategoryAxis() {};
	VirtualQCategoryAxis(QObject* parent): QCategoryAxis(parent) {};

	~VirtualQCategoryAxis() {
		qcategoryaxis_type_callback = nullptr;
	}

// Callback setters
	inline void setQCategoryAxis_Type_Callback(QCategoryAxis_Type_Callback cb) const { qcategoryaxis_type_callback = cb; }

// Base flag setters
	inline void setQCategoryAxis_Type_IsBase(bool value) const { qcategoryaxis_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual AxisType type() const override {
		if (qcategoryaxis_type_isbase) {
			qcategoryaxis_type_isbase = false;
			return QCategoryAxis::type();
		} else if (qcategoryaxis_type_callback != nullptr) {
			int callback_ret = qcategoryaxis_type_callback();
			return static_cast<QAbstractAxis::AxisType>(callback_ret);
		} else {
			return QCategoryAxis::type();
		}
	}
};

#endif


