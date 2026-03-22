#pragma once
#ifndef QACCESSIBLEBRIDGE_H_C_LIBVIRTUAL
#define QACCESSIBLEBRIDGE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAccessibleBridge so that we can call protected methods
class VirtualQAccessibleBridge : public QAccessibleBridge {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleBridge= true;

	// Virtual class public types (including callbacks)
	using QAccessibleBridge_SetRootObject_Callback = void (*)(QAccessibleBridge*, QAccessibleInterface*);
	using QAccessibleBridge_NotifyAccessibilityUpdate_Callback = void (*)(QAccessibleBridge*, QAccessibleEvent*);

protected:
	// Instance callback storage
	mutable QAccessibleBridge_SetRootObject_Callback qaccessiblebridge_setrootobject_callback = nullptr;
	mutable QAccessibleBridge_NotifyAccessibilityUpdate_Callback qaccessiblebridge_notifyaccessibilityupdate_callback = nullptr;

	// Instance base flags
    mutable bool qaccessiblebridge_setrootobject_isbase = false;
    mutable bool qaccessiblebridge_notifyaccessibilityupdate_isbase = false;

public:
	VirtualQAccessibleBridge(): QAccessibleBridge() {};
	VirtualQAccessibleBridge(const QAccessibleBridge& param1): QAccessibleBridge(param1) {};

	~VirtualQAccessibleBridge() {
		qaccessiblebridge_setrootobject_callback = nullptr;
		qaccessiblebridge_notifyaccessibilityupdate_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleBridge_SetRootObject_Callback(QAccessibleBridge_SetRootObject_Callback cb) const { qaccessiblebridge_setrootobject_callback = cb; }
	inline void setQAccessibleBridge_NotifyAccessibilityUpdate_Callback(QAccessibleBridge_NotifyAccessibilityUpdate_Callback cb) const { qaccessiblebridge_notifyaccessibilityupdate_callback = cb; }

// Base flag setters
	inline void setQAccessibleBridge_SetRootObject_IsBase(bool value) const { qaccessiblebridge_setrootobject_isbase = value; }
	inline void setQAccessibleBridge_NotifyAccessibilityUpdate_IsBase(bool value) const { qaccessiblebridge_notifyaccessibilityupdate_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setRootObject(QAccessibleInterface* rootObject) override {
		if (qaccessiblebridge_setrootobject_callback != nullptr) {
			QAccessibleInterface* cbval1 = rootObject;
			qaccessiblebridge_setrootobject_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void notifyAccessibilityUpdate(QAccessibleEvent* event) override {
		if (qaccessiblebridge_notifyaccessibilityupdate_callback != nullptr) {
			QAccessibleEvent* cbval1 = event;
			qaccessiblebridge_notifyaccessibilityupdate_callback(this, cbval1);
		}
	}
};

// This class is a subclass of QAccessibleBridgePlugin so that we can call protected methods
class VirtualQAccessibleBridgePlugin : public QAccessibleBridgePlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleBridgePlugin= true;

	// Virtual class public types (including callbacks)
	using QAccessibleBridgePlugin_Create_Callback = QAccessibleBridge* (*)(QAccessibleBridgePlugin*, libqt_string);

protected:
	// Instance callback storage
	mutable QAccessibleBridgePlugin_Create_Callback qaccessiblebridgeplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qaccessiblebridgeplugin_create_isbase = false;

public:
	VirtualQAccessibleBridgePlugin(): QAccessibleBridgePlugin() {};
	VirtualQAccessibleBridgePlugin(QObject* parent): QAccessibleBridgePlugin(parent) {};

	~VirtualQAccessibleBridgePlugin() {
		qaccessiblebridgeplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQAccessibleBridgePlugin_Create_Callback(QAccessibleBridgePlugin_Create_Callback cb) const { qaccessiblebridgeplugin_create_callback = cb; }

// Base flag setters
	inline void setQAccessibleBridgePlugin_Create_IsBase(bool value) const { qaccessiblebridgeplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QAccessibleBridge* create(const QString& key) override {
		if (qaccessiblebridgeplugin_create_callback != nullptr) {
			QByteArray key_qb = key.toUtf8();
			libqt_string cbval1;
			cbval1.len = key_qb.length();
			cbval1.data = static_cast<const char*>(key_qb.constData());
			QAccessibleBridge* callback_ret = qaccessiblebridgeplugin_create_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


