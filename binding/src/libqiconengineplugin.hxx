#pragma once
#ifndef QICONENGINEPLUGIN_H_C_LIBVIRTUAL
#define QICONENGINEPLUGIN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QIconEnginePlugin so that we can call protected methods
class VirtualQIconEnginePlugin : public QIconEnginePlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQIconEnginePlugin= true;

	// Virtual class public types (including callbacks)
	using QIconEnginePlugin_Create_Callback = QIconEngine* (*)(QIconEnginePlugin*, libqt_string);

protected:
	// Instance callback storage
	mutable QIconEnginePlugin_Create_Callback qiconengineplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qiconengineplugin_create_isbase = false;

public:
	VirtualQIconEnginePlugin(): QIconEnginePlugin() {};
	VirtualQIconEnginePlugin(QObject* parent): QIconEnginePlugin(parent) {};

	~VirtualQIconEnginePlugin() {
		qiconengineplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQIconEnginePlugin_Create_Callback(QIconEnginePlugin_Create_Callback cb) const { qiconengineplugin_create_callback = cb; }

// Base flag setters
	inline void setQIconEnginePlugin_Create_IsBase(bool value) const { qiconengineplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QIconEngine* create(const QString& filename) override {
		if (qiconengineplugin_create_callback != nullptr) {
			QByteArray filename_qb = filename.toUtf8();
			libqt_string cbval1;
			cbval1.len = filename_qb.length();
			cbval1.data = static_cast<const char*>(filename_qb.constData());
			QIconEngine* callback_ret = qiconengineplugin_create_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


