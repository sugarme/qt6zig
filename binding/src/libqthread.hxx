#pragma once
#ifndef QTHREAD_H_C_LIBVIRTUAL
#define QTHREAD_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QThread so that we can call protected methods
class VirtualQThread final : public QThread {

public:
	// Virtual class boolean flag
	bool isVirtualQThread= true;

	// Virtual class public types (including callbacks)
	using QThread_Event_Callback = bool (*)(QThread*, QEvent*);
	using QThread_Run_Callback = void (*)();
	using QThread_Exec_Callback = int (*)();
	using QThread_SetTerminationEnabled_Callback = void (*)();
	using QThread_SetTerminationEnabled1_Callback = void (*)(QThread*, bool);

protected:
	// Instance callback storage
	mutable QThread_Event_Callback qthread_event_callback = nullptr;
	mutable QThread_Run_Callback qthread_run_callback = nullptr;
	mutable QThread_Exec_Callback qthread_exec_callback = nullptr;
	mutable QThread_SetTerminationEnabled_Callback qthread_setterminationenabled_callback = nullptr;
	mutable QThread_SetTerminationEnabled1_Callback qthread_setterminationenabled1_callback = nullptr;

	// Instance base flags
    mutable bool qthread_event_isbase = false;
    mutable bool qthread_run_isbase = false;
    mutable bool qthread_exec_isbase = false;
    mutable bool qthread_setterminationenabled_isbase = false;
    mutable bool qthread_setterminationenabled1_isbase = false;

public:
	VirtualQThread(): QThread() {};
	VirtualQThread(QObject* parent): QThread(parent) {};

	~VirtualQThread() {
		qthread_event_callback = nullptr;
		qthread_run_callback = nullptr;
		qthread_exec_callback = nullptr;
		qthread_setterminationenabled_callback = nullptr;
		qthread_setterminationenabled1_callback = nullptr;
	}

// Callback setters
	inline void setQThread_Event_Callback(QThread_Event_Callback cb) const { qthread_event_callback = cb; }
	inline void setQThread_Run_Callback(QThread_Run_Callback cb) const { qthread_run_callback = cb; }
	inline void setQThread_Exec_Callback(QThread_Exec_Callback cb) const { qthread_exec_callback = cb; }
	inline void setQThread_SetTerminationEnabled_Callback(QThread_SetTerminationEnabled_Callback cb) const { qthread_setterminationenabled_callback = cb; }
	inline void setQThread_SetTerminationEnabled1_Callback(QThread_SetTerminationEnabled1_Callback cb) const { qthread_setterminationenabled1_callback = cb; }

// Base flag setters
	inline void setQThread_Event_IsBase(bool value) const { qthread_event_isbase = value; }
	inline void setQThread_Run_IsBase(bool value) const { qthread_run_isbase = value; }
	inline void setQThread_Exec_IsBase(bool value) const { qthread_exec_isbase = value; }
	inline void setQThread_SetTerminationEnabled_IsBase(bool value) const { qthread_setterminationenabled_isbase = value; }
	inline void setQThread_SetTerminationEnabled1_IsBase(bool value) const { qthread_setterminationenabled1_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qthread_event_isbase) {
			qthread_event_isbase = false;
			return QThread::event(event);
		} else if (qthread_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qthread_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QThread::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void run() override {
		if (qthread_run_isbase) {
			qthread_run_isbase = false;
			QThread::run();
		} else if (qthread_run_callback != nullptr) {
			qthread_run_callback();
		} else {
			QThread::run();
		}
	}

	// Virtual method for C ABI access and custom callback
	int exec() {
		if (qthread_exec_isbase) {
			qthread_exec_isbase = false;
			return QThread::exec();
		} else if (qthread_exec_callback != nullptr) {
			int callback_ret = qthread_exec_callback();
			return callback_ret;
		} else {
			return QThread::exec();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setTerminationEnabled() {
		if (qthread_setterminationenabled_isbase) {
			qthread_setterminationenabled_isbase = false;
			QThread::setTerminationEnabled();
		} else if (qthread_setterminationenabled_callback != nullptr) {
			qthread_setterminationenabled_callback();
		} else {
			QThread::setTerminationEnabled();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setTerminationEnabled(bool enabled) {
		if (qthread_setterminationenabled1_isbase) {
			qthread_setterminationenabled1_isbase = false;
			QThread::setTerminationEnabled(enabled);
		} else if (qthread_setterminationenabled1_callback != nullptr) {
			bool cbval1 = enabled;
			qthread_setterminationenabled1_callback(this, cbval1);
		} else {
			QThread::setTerminationEnabled(enabled);
		}
	}

	// Friend functions
	friend void QThread_Run(QThread* self);
	friend void QThread_QBaseRun(QThread* self);
	friend int QThread_Exec(QThread* self);
	friend int QThread_QBaseExec(QThread* self);
	friend void QThread_SetTerminationEnabled(QThread* self);
	friend void QThread_QBaseSetTerminationEnabled(QThread* self);
	friend void QThread_SetTerminationEnabled1(QThread* self, bool enabled);
	friend void QThread_QBaseSetTerminationEnabled1(QThread* self, bool enabled);
};

#endif


