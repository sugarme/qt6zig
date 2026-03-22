#pragma once
#ifndef QFUTUREWATCHER_H_C_LIBVIRTUAL
#define QFUTUREWATCHER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFutureWatcherBase so that we can call protected methods
class VirtualQFutureWatcherBase : public QFutureWatcherBase {

public:
	// Virtual class boolean flag
	bool isVirtualQFutureWatcherBase= true;

	// Virtual class public types (including callbacks)
	using QFutureWatcherBase_Event_Callback = bool (*)(QFutureWatcherBase*, QEvent*);
	using QFutureWatcherBase_ConnectNotify_Callback = void (*)(QFutureWatcherBase*, const QMetaMethod*);
	using QFutureWatcherBase_DisconnectNotify_Callback = void (*)(QFutureWatcherBase*, const QMetaMethod*);
	using QFutureWatcherBase_ConnectOutputInterface_Callback = void (*)();
	using QFutureWatcherBase_DisconnectOutputInterface_Callback = void (*)();
	using QFutureWatcherBase_DisconnectOutputInterface1_Callback = void (*)(QFutureWatcherBase*, bool);

protected:
	// Instance callback storage
	mutable QFutureWatcherBase_Event_Callback qfuturewatcherbase_event_callback = nullptr;
	mutable QFutureWatcherBase_ConnectNotify_Callback qfuturewatcherbase_connectnotify_callback = nullptr;
	mutable QFutureWatcherBase_DisconnectNotify_Callback qfuturewatcherbase_disconnectnotify_callback = nullptr;
	mutable QFutureWatcherBase_ConnectOutputInterface_Callback qfuturewatcherbase_connectoutputinterface_callback = nullptr;
	mutable QFutureWatcherBase_DisconnectOutputInterface_Callback qfuturewatcherbase_disconnectoutputinterface_callback = nullptr;
	mutable QFutureWatcherBase_DisconnectOutputInterface1_Callback qfuturewatcherbase_disconnectoutputinterface1_callback = nullptr;

	// Instance base flags
    mutable bool qfuturewatcherbase_event_isbase = false;
    mutable bool qfuturewatcherbase_connectnotify_isbase = false;
    mutable bool qfuturewatcherbase_disconnectnotify_isbase = false;
    mutable bool qfuturewatcherbase_connectoutputinterface_isbase = false;
    mutable bool qfuturewatcherbase_disconnectoutputinterface_isbase = false;
    mutable bool qfuturewatcherbase_disconnectoutputinterface1_isbase = false;

public:

	~VirtualQFutureWatcherBase() {
		qfuturewatcherbase_event_callback = nullptr;
		qfuturewatcherbase_connectnotify_callback = nullptr;
		qfuturewatcherbase_disconnectnotify_callback = nullptr;
		qfuturewatcherbase_connectoutputinterface_callback = nullptr;
		qfuturewatcherbase_disconnectoutputinterface_callback = nullptr;
		qfuturewatcherbase_disconnectoutputinterface1_callback = nullptr;
	}

// Callback setters
	inline void setQFutureWatcherBase_Event_Callback(QFutureWatcherBase_Event_Callback cb) const { qfuturewatcherbase_event_callback = cb; }
	inline void setQFutureWatcherBase_ConnectNotify_Callback(QFutureWatcherBase_ConnectNotify_Callback cb) const { qfuturewatcherbase_connectnotify_callback = cb; }
	inline void setQFutureWatcherBase_DisconnectNotify_Callback(QFutureWatcherBase_DisconnectNotify_Callback cb) const { qfuturewatcherbase_disconnectnotify_callback = cb; }
	inline void setQFutureWatcherBase_ConnectOutputInterface_Callback(QFutureWatcherBase_ConnectOutputInterface_Callback cb) const { qfuturewatcherbase_connectoutputinterface_callback = cb; }
	inline void setQFutureWatcherBase_DisconnectOutputInterface_Callback(QFutureWatcherBase_DisconnectOutputInterface_Callback cb) const { qfuturewatcherbase_disconnectoutputinterface_callback = cb; }
	inline void setQFutureWatcherBase_DisconnectOutputInterface1_Callback(QFutureWatcherBase_DisconnectOutputInterface1_Callback cb) const { qfuturewatcherbase_disconnectoutputinterface1_callback = cb; }

// Base flag setters
	inline void setQFutureWatcherBase_Event_IsBase(bool value) const { qfuturewatcherbase_event_isbase = value; }
	inline void setQFutureWatcherBase_ConnectNotify_IsBase(bool value) const { qfuturewatcherbase_connectnotify_isbase = value; }
	inline void setQFutureWatcherBase_DisconnectNotify_IsBase(bool value) const { qfuturewatcherbase_disconnectnotify_isbase = value; }
	inline void setQFutureWatcherBase_ConnectOutputInterface_IsBase(bool value) const { qfuturewatcherbase_connectoutputinterface_isbase = value; }
	inline void setQFutureWatcherBase_DisconnectOutputInterface_IsBase(bool value) const { qfuturewatcherbase_disconnectoutputinterface_isbase = value; }
	inline void setQFutureWatcherBase_DisconnectOutputInterface1_IsBase(bool value) const { qfuturewatcherbase_disconnectoutputinterface1_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qfuturewatcherbase_event_isbase) {
			qfuturewatcherbase_event_isbase = false;
			return QFutureWatcherBase::event(event);
		} else if (qfuturewatcherbase_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qfuturewatcherbase_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QFutureWatcherBase::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (qfuturewatcherbase_connectnotify_isbase) {
			qfuturewatcherbase_connectnotify_isbase = false;
			QFutureWatcherBase::connectNotify(signal);
		} else if (qfuturewatcherbase_connectnotify_callback != nullptr) {
			const QMetaMethod* cbval1 = (const QMetaMethod*)&signal;
			qfuturewatcherbase_connectnotify_callback(this, cbval1);
		} else {
			QFutureWatcherBase::connectNotify(signal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (qfuturewatcherbase_disconnectnotify_isbase) {
			qfuturewatcherbase_disconnectnotify_isbase = false;
			QFutureWatcherBase::disconnectNotify(signal);
		} else if (qfuturewatcherbase_disconnectnotify_callback != nullptr) {
			const QMetaMethod* cbval1 = (const QMetaMethod*)&signal;
			qfuturewatcherbase_disconnectnotify_callback(this, cbval1);
		} else {
			QFutureWatcherBase::disconnectNotify(signal);
		}
	}

	// Virtual method for C ABI access and custom callback
	void connectOutputInterface() {
		if (qfuturewatcherbase_connectoutputinterface_isbase) {
			qfuturewatcherbase_connectoutputinterface_isbase = false;
			QFutureWatcherBase::connectOutputInterface();
		} else if (qfuturewatcherbase_connectoutputinterface_callback != nullptr) {
			qfuturewatcherbase_connectoutputinterface_callback();
		} else {
			QFutureWatcherBase::connectOutputInterface();
		}
	}

	// Virtual method for C ABI access and custom callback
	void disconnectOutputInterface() {
		if (qfuturewatcherbase_disconnectoutputinterface_isbase) {
			qfuturewatcherbase_disconnectoutputinterface_isbase = false;
			QFutureWatcherBase::disconnectOutputInterface();
		} else if (qfuturewatcherbase_disconnectoutputinterface_callback != nullptr) {
			qfuturewatcherbase_disconnectoutputinterface_callback();
		} else {
			QFutureWatcherBase::disconnectOutputInterface();
		}
	}

	// Virtual method for C ABI access and custom callback
	void disconnectOutputInterface(bool pendingAssignment) {
		if (qfuturewatcherbase_disconnectoutputinterface1_isbase) {
			qfuturewatcherbase_disconnectoutputinterface1_isbase = false;
			QFutureWatcherBase::disconnectOutputInterface(pendingAssignment);
		} else if (qfuturewatcherbase_disconnectoutputinterface1_callback != nullptr) {
			bool cbval1 = pendingAssignment;
			qfuturewatcherbase_disconnectoutputinterface1_callback(this, cbval1);
		} else {
			QFutureWatcherBase::disconnectOutputInterface(pendingAssignment);
		}
	}

	// Friend functions
	friend void QFutureWatcherBase_ConnectNotify(QFutureWatcherBase* self, const QMetaMethod* signal);
	friend void QFutureWatcherBase_QBaseConnectNotify(QFutureWatcherBase* self, const QMetaMethod* signal);
	friend void QFutureWatcherBase_DisconnectNotify(QFutureWatcherBase* self, const QMetaMethod* signal);
	friend void QFutureWatcherBase_QBaseDisconnectNotify(QFutureWatcherBase* self, const QMetaMethod* signal);
	friend void QFutureWatcherBase_ConnectOutputInterface(QFutureWatcherBase* self);
	friend void QFutureWatcherBase_QBaseConnectOutputInterface(QFutureWatcherBase* self);
	friend void QFutureWatcherBase_DisconnectOutputInterface(QFutureWatcherBase* self);
	friend void QFutureWatcherBase_QBaseDisconnectOutputInterface(QFutureWatcherBase* self);
	friend void QFutureWatcherBase_DisconnectOutputInterface1(QFutureWatcherBase* self, bool pendingAssignment);
	friend void QFutureWatcherBase_QBaseDisconnectOutputInterface1(QFutureWatcherBase* self, bool pendingAssignment);
};

#endif


