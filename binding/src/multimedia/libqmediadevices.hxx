#pragma once
#ifndef QMEDIADEVICES_H_C_LIBVIRTUAL
#define QMEDIADEVICES_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QMediaDevices so that we can call protected methods
class VirtualQMediaDevices final : public QMediaDevices {

public:
	// Virtual class boolean flag
	bool isVirtualQMediaDevices= true;

	// Virtual class public types (including callbacks)
	using QMediaDevices_ConnectNotify_Callback = void (*)(QMediaDevices*, const QMetaMethod*);

protected:
	// Instance callback storage
	mutable QMediaDevices_ConnectNotify_Callback qmediadevices_connectnotify_callback = nullptr;

	// Instance base flags
    mutable bool qmediadevices_connectnotify_isbase = false;

public:
	VirtualQMediaDevices(): QMediaDevices() {};
	VirtualQMediaDevices(QObject* parent): QMediaDevices(parent) {};

	~VirtualQMediaDevices() {
		qmediadevices_connectnotify_callback = nullptr;
	}

// Callback setters
	inline void setQMediaDevices_ConnectNotify_Callback(QMediaDevices_ConnectNotify_Callback cb) const { qmediadevices_connectnotify_callback = cb; }

// Base flag setters
	inline void setQMediaDevices_ConnectNotify_IsBase(bool value) const { qmediadevices_connectnotify_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (qmediadevices_connectnotify_isbase) {
			qmediadevices_connectnotify_isbase = false;
			QMediaDevices::connectNotify(signal);
		} else if (qmediadevices_connectnotify_callback != nullptr) {
			const QMetaMethod* cbval1 = (const QMetaMethod*)&signal;
			qmediadevices_connectnotify_callback(this, cbval1);
		} else {
			QMediaDevices::connectNotify(signal);
		}
	}

	// Friend functions
	friend void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
	friend void QMediaDevices_QBaseConnectNotify(QMediaDevices* self, const QMetaMethod* signal);
};

#endif


