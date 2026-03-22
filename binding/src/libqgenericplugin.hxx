#pragma once
#ifndef QGENERICPLUGIN_H_C_LIBVIRTUAL
#define QGENERICPLUGIN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGenericPlugin so that we can call protected methods
class VirtualQGenericPlugin : public QGenericPlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQGenericPlugin= true;

	// Virtual class public types (including callbacks)
	using QGenericPlugin_Create_Callback = QObject* (*)(QGenericPlugin*, libqt_string, libqt_string);

protected:
	// Instance callback storage
	mutable QGenericPlugin_Create_Callback qgenericplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qgenericplugin_create_isbase = false;

public:
	VirtualQGenericPlugin(): QGenericPlugin() {};
	VirtualQGenericPlugin(QObject* parent): QGenericPlugin(parent) {};

	~VirtualQGenericPlugin() {
		qgenericplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQGenericPlugin_Create_Callback(QGenericPlugin_Create_Callback cb) const { qgenericplugin_create_callback = cb; }

// Base flag setters
	inline void setQGenericPlugin_Create_IsBase(bool value) const { qgenericplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QObject* create(const QString& name, const QString& spec) override {
		if (qgenericplugin_create_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			QByteArray spec_qb = spec.toUtf8();
			libqt_string cbval2;
			cbval2.len = spec_qb.length();
			cbval2.data = static_cast<const char*>(spec_qb.constData());
			QObject* callback_ret = qgenericplugin_create_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


