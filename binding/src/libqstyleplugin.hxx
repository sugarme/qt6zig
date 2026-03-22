#pragma once
#ifndef QSTYLEPLUGIN_H_C_LIBVIRTUAL
#define QSTYLEPLUGIN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStylePlugin so that we can call protected methods
class VirtualQStylePlugin : public QStylePlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQStylePlugin= true;

	// Virtual class public types (including callbacks)
	using QStylePlugin_Create_Callback = QStyle* (*)(QStylePlugin*, libqt_string);

protected:
	// Instance callback storage
	mutable QStylePlugin_Create_Callback qstyleplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qstyleplugin_create_isbase = false;

public:
	VirtualQStylePlugin(): QStylePlugin() {};
	VirtualQStylePlugin(QObject* parent): QStylePlugin(parent) {};

	~VirtualQStylePlugin() {
		qstyleplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQStylePlugin_Create_Callback(QStylePlugin_Create_Callback cb) const { qstyleplugin_create_callback = cb; }

// Base flag setters
	inline void setQStylePlugin_Create_IsBase(bool value) const { qstyleplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QStyle* create(const QString& key) override {
		if (qstyleplugin_create_callback != nullptr) {
			QByteArray key_qb = key.toUtf8();
			libqt_string cbval1;
			cbval1.len = key_qb.length();
			cbval1.data = static_cast<const char*>(key_qb.constData());
			QStyle* callback_ret = qstyleplugin_create_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


