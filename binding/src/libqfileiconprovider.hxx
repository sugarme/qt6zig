#pragma once
#ifndef QFILEICONPROVIDER_H_C_LIBVIRTUAL
#define QFILEICONPROVIDER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFileIconProvider so that we can call protected methods
class VirtualQFileIconProvider final : public QFileIconProvider {

public:
	// Virtual class boolean flag
	bool isVirtualQFileIconProvider= true;

	// Virtual class public types (including callbacks)
	using QFileIconProvider_Icon_Callback = QIcon* (*)(const QFileIconProvider*, int);
	using QFileIconProvider_Icon2_Callback = QIcon* (*)(const QFileIconProvider*, const QFileInfo*);

protected:
	// Instance callback storage
	mutable QFileIconProvider_Icon_Callback qfileiconprovider_icon_callback = nullptr;
	mutable QFileIconProvider_Icon2_Callback qfileiconprovider_icon2_callback = nullptr;

	// Instance base flags
    mutable bool qfileiconprovider_icon_isbase = false;
    mutable bool qfileiconprovider_icon2_isbase = false;

public:
	VirtualQFileIconProvider(): QFileIconProvider() {};

	~VirtualQFileIconProvider() {
		qfileiconprovider_icon_callback = nullptr;
		qfileiconprovider_icon2_callback = nullptr;
	}

// Callback setters
	inline void setQFileIconProvider_Icon_Callback(QFileIconProvider_Icon_Callback cb) const { qfileiconprovider_icon_callback = cb; }
	inline void setQFileIconProvider_Icon2_Callback(QFileIconProvider_Icon2_Callback cb) const { qfileiconprovider_icon2_callback = cb; }

// Base flag setters
	inline void setQFileIconProvider_Icon_IsBase(bool value) const { qfileiconprovider_icon_isbase = value; }
	inline void setQFileIconProvider_Icon2_IsBase(bool value) const { qfileiconprovider_icon2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QIcon icon(IconType typeVal) const override {
		if (qfileiconprovider_icon_isbase) {
			qfileiconprovider_icon_isbase = false;
			return QFileIconProvider::icon(typeVal);
		} else if (qfileiconprovider_icon_callback != nullptr) {
			int cbval1 = static_cast<int>(typeVal);
			QIcon* callback_ret = qfileiconprovider_icon_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QFileIconProvider::icon(typeVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIcon icon(const QFileInfo& info) const override {
		if (qfileiconprovider_icon2_isbase) {
			qfileiconprovider_icon2_isbase = false;
			return QFileIconProvider::icon(info);
		} else if (qfileiconprovider_icon2_callback != nullptr) {
			const QFileInfo* cbval1 = (const QFileInfo*)&info;
			QIcon* callback_ret = qfileiconprovider_icon2_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QFileIconProvider::icon(info);
		}
	}
};

#endif


