#pragma once
#ifndef QSQLDATABASE_H_C_LIBVIRTUAL
#define QSQLDATABASE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlDriverCreatorBase so that we can call protected methods
class VirtualQSqlDriverCreatorBase : public QSqlDriverCreatorBase {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlDriverCreatorBase= true;

	// Virtual class public types (including callbacks)
	using QSqlDriverCreatorBase_CreateObject_Callback = QSqlDriver* (*)();

protected:
	// Instance callback storage
	mutable QSqlDriverCreatorBase_CreateObject_Callback qsqldrivercreatorbase_createobject_callback = nullptr;

	// Instance base flags
    mutable bool qsqldrivercreatorbase_createobject_isbase = false;

public:
	VirtualQSqlDriverCreatorBase(): QSqlDriverCreatorBase() {};
	VirtualQSqlDriverCreatorBase(const QSqlDriverCreatorBase& param1): QSqlDriverCreatorBase(param1) {};

	~VirtualQSqlDriverCreatorBase() {
		qsqldrivercreatorbase_createobject_callback = nullptr;
	}

// Callback setters
	inline void setQSqlDriverCreatorBase_CreateObject_Callback(QSqlDriverCreatorBase_CreateObject_Callback cb) const { qsqldrivercreatorbase_createobject_callback = cb; }

// Base flag setters
	inline void setQSqlDriverCreatorBase_CreateObject_IsBase(bool value) const { qsqldrivercreatorbase_createobject_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSqlDriver* createObject() const override {
		if (qsqldrivercreatorbase_createobject_callback != nullptr) {
			QSqlDriver* callback_ret = qsqldrivercreatorbase_createobject_callback();
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


