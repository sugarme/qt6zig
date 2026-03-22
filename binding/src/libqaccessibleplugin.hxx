#pragma once
#ifndef QACCESSIBLEPLUGIN_H_C_LIBVIRTUAL
#define QACCESSIBLEPLUGIN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAccessiblePlugin so that we can call protected methods
class VirtualQAccessiblePlugin : public QAccessiblePlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessiblePlugin= true;

	// Virtual class public types (including callbacks)
	using QAccessiblePlugin_Create_Callback = QAccessibleInterface* (*)(QAccessiblePlugin*, libqt_string, QObject*);

protected:
	// Instance callback storage
	mutable QAccessiblePlugin_Create_Callback qaccessibleplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qaccessibleplugin_create_isbase = false;

public:
	VirtualQAccessiblePlugin(): QAccessiblePlugin() {};
	VirtualQAccessiblePlugin(QObject* parent): QAccessiblePlugin(parent) {};

	~VirtualQAccessiblePlugin() {
		qaccessibleplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQAccessiblePlugin_Create_Callback(QAccessiblePlugin_Create_Callback cb) const { qaccessibleplugin_create_callback = cb; }

// Base flag setters
	inline void setQAccessiblePlugin_Create_IsBase(bool value) const { qaccessibleplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
		if (qaccessibleplugin_create_callback != nullptr) {
			QByteArray key_qb = key.toUtf8();
			libqt_string cbval1;
			cbval1.len = key_qb.length();
			cbval1.data = static_cast<const char*>(key_qb.constData());
			QObject* cbval2 = object;
			QAccessibleInterface* callback_ret = qaccessibleplugin_create_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


