#pragma once
#ifndef QSQLDRIVERPLUGIN_H_C_LIBVIRTUAL
#define QSQLDRIVERPLUGIN_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSqlDriverPlugin so that we can call protected methods
class VirtualQSqlDriverPlugin : public QSqlDriverPlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQSqlDriverPlugin= true;

	// Virtual class public types (including callbacks)
	using QSqlDriverPlugin_Create_Callback = QSqlDriver* (*)(QSqlDriverPlugin*, libqt_string);

protected:
	// Instance callback storage
	mutable QSqlDriverPlugin_Create_Callback qsqldriverplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qsqldriverplugin_create_isbase = false;

public:
	VirtualQSqlDriverPlugin(): QSqlDriverPlugin() {};
	VirtualQSqlDriverPlugin(QObject* parent): QSqlDriverPlugin(parent) {};

	~VirtualQSqlDriverPlugin() {
		qsqldriverplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQSqlDriverPlugin_Create_Callback(QSqlDriverPlugin_Create_Callback cb) const { qsqldriverplugin_create_callback = cb; }

// Base flag setters
	inline void setQSqlDriverPlugin_Create_IsBase(bool value) const { qsqldriverplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSqlDriver* create(const QString& key) override {
		if (qsqldriverplugin_create_callback != nullptr) {
			QByteArray key_qb = key.toUtf8();
			libqt_string cbval1;
			cbval1.len = key_qb.length();
			cbval1.data = static_cast<const char*>(key_qb.constData());
			QSqlDriver* callback_ret = qsqldriverplugin_create_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


