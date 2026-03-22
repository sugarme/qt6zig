#pragma once
#ifndef QTCONCURRENTTHREADENGINE_H_C_LIBVIRTUAL
#define QTCONCURRENTTHREADENGINE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QtConcurrent::ThreadEngineBase so that we can call protected methods
class VirtualQtConcurrentThreadEngineBase : public QtConcurrent::ThreadEngineBase {

public:
	// Virtual class boolean flag
	bool isVirtualQtConcurrentThreadEngineBase= true;

	// Virtual class public types (including callbacks)
	using QtConcurrent__ThreadEngineBase_Start_Callback = void (*)();
	using QtConcurrent__ThreadEngineBase_Finish_Callback = void (*)();
	using QtConcurrent__ThreadEngineBase_ThreadFunction_Callback = int (*)();
	using QtConcurrent__ThreadEngineBase_ShouldStartThread_Callback = bool (*)();
	using QtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QtConcurrent__ThreadEngineBase_Start_Callback qtconcurrent__threadenginebase_start_callback = nullptr;
	mutable QtConcurrent__ThreadEngineBase_Finish_Callback qtconcurrent__threadenginebase_finish_callback = nullptr;
	mutable QtConcurrent__ThreadEngineBase_ThreadFunction_Callback qtconcurrent__threadenginebase_threadfunction_callback = nullptr;
	mutable QtConcurrent__ThreadEngineBase_ShouldStartThread_Callback qtconcurrent__threadenginebase_shouldstartthread_callback = nullptr;
	mutable QtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback qtconcurrent__threadenginebase_shouldthrottlethread_callback = nullptr;

	// Instance base flags
    mutable bool qtconcurrent__threadenginebase_start_isbase = false;
    mutable bool qtconcurrent__threadenginebase_finish_isbase = false;
    mutable bool qtconcurrent__threadenginebase_threadfunction_isbase = false;
    mutable bool qtconcurrent__threadenginebase_shouldstartthread_isbase = false;
    mutable bool qtconcurrent__threadenginebase_shouldthrottlethread_isbase = false;

public:
	VirtualQtConcurrentThreadEngineBase(QThreadPool* pool): QtConcurrent::ThreadEngineBase(pool) {};

	~VirtualQtConcurrentThreadEngineBase() {
		qtconcurrent__threadenginebase_start_callback = nullptr;
		qtconcurrent__threadenginebase_finish_callback = nullptr;
		qtconcurrent__threadenginebase_threadfunction_callback = nullptr;
		qtconcurrent__threadenginebase_shouldstartthread_callback = nullptr;
		qtconcurrent__threadenginebase_shouldthrottlethread_callback = nullptr;
	}

// Callback setters
	inline void setQtConcurrent__ThreadEngineBase_Start_Callback(QtConcurrent__ThreadEngineBase_Start_Callback cb) const { qtconcurrent__threadenginebase_start_callback = cb; }
	inline void setQtConcurrent__ThreadEngineBase_Finish_Callback(QtConcurrent__ThreadEngineBase_Finish_Callback cb) const { qtconcurrent__threadenginebase_finish_callback = cb; }
	inline void setQtConcurrent__ThreadEngineBase_ThreadFunction_Callback(QtConcurrent__ThreadEngineBase_ThreadFunction_Callback cb) const { qtconcurrent__threadenginebase_threadfunction_callback = cb; }
	inline void setQtConcurrent__ThreadEngineBase_ShouldStartThread_Callback(QtConcurrent__ThreadEngineBase_ShouldStartThread_Callback cb) const { qtconcurrent__threadenginebase_shouldstartthread_callback = cb; }
	inline void setQtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback(QtConcurrent__ThreadEngineBase_ShouldThrottleThread_Callback cb) const { qtconcurrent__threadenginebase_shouldthrottlethread_callback = cb; }

// Base flag setters
	inline void setQtConcurrent__ThreadEngineBase_Start_IsBase(bool value) const { qtconcurrent__threadenginebase_start_isbase = value; }
	inline void setQtConcurrent__ThreadEngineBase_Finish_IsBase(bool value) const { qtconcurrent__threadenginebase_finish_isbase = value; }
	inline void setQtConcurrent__ThreadEngineBase_ThreadFunction_IsBase(bool value) const { qtconcurrent__threadenginebase_threadfunction_isbase = value; }
	inline void setQtConcurrent__ThreadEngineBase_ShouldStartThread_IsBase(bool value) const { qtconcurrent__threadenginebase_shouldstartthread_isbase = value; }
	inline void setQtConcurrent__ThreadEngineBase_ShouldThrottleThread_IsBase(bool value) const { qtconcurrent__threadenginebase_shouldthrottlethread_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void start() override {
		if (qtconcurrent__threadenginebase_start_isbase) {
			qtconcurrent__threadenginebase_start_isbase = false;
			QtConcurrent__ThreadEngineBase::start();
		} else if (qtconcurrent__threadenginebase_start_callback != nullptr) {
			qtconcurrent__threadenginebase_start_callback();
		} else {
			QtConcurrent__ThreadEngineBase::start();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void finish() override {
		if (qtconcurrent__threadenginebase_finish_isbase) {
			qtconcurrent__threadenginebase_finish_isbase = false;
			QtConcurrent__ThreadEngineBase::finish();
		} else if (qtconcurrent__threadenginebase_finish_callback != nullptr) {
			qtconcurrent__threadenginebase_finish_callback();
		} else {
			QtConcurrent__ThreadEngineBase::finish();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual ThreadFunctionResult threadFunction() override {
		if (qtconcurrent__threadenginebase_threadfunction_isbase) {
			qtconcurrent__threadenginebase_threadfunction_isbase = false;
			return QtConcurrent__ThreadEngineBase::threadFunction();
		} else if (qtconcurrent__threadenginebase_threadfunction_callback != nullptr) {
			int callback_ret = qtconcurrent__threadenginebase_threadfunction_callback();
			return static_cast<QtConcurrent::ThreadFunctionResult>(callback_ret);
		} else {
			return QtConcurrent__ThreadEngineBase::threadFunction();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool shouldStartThread() override {
		if (qtconcurrent__threadenginebase_shouldstartthread_isbase) {
			qtconcurrent__threadenginebase_shouldstartthread_isbase = false;
			return QtConcurrent__ThreadEngineBase::shouldStartThread();
		} else if (qtconcurrent__threadenginebase_shouldstartthread_callback != nullptr) {
			bool callback_ret = qtconcurrent__threadenginebase_shouldstartthread_callback();
			return callback_ret;
		} else {
			return QtConcurrent__ThreadEngineBase::shouldStartThread();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool shouldThrottleThread() override {
		if (qtconcurrent__threadenginebase_shouldthrottlethread_isbase) {
			qtconcurrent__threadenginebase_shouldthrottlethread_isbase = false;
			return QtConcurrent__ThreadEngineBase::shouldThrottleThread();
		} else if (qtconcurrent__threadenginebase_shouldthrottlethread_callback != nullptr) {
			bool callback_ret = qtconcurrent__threadenginebase_shouldthrottlethread_callback();
			return callback_ret;
		} else {
			return QtConcurrent__ThreadEngineBase::shouldThrottleThread();
		}
	}

	// Friend functions
	friend void QtConcurrent__ThreadEngineBase_Start(QtConcurrent::ThreadEngineBase* self);
	friend void QtConcurrent__ThreadEngineBase_QBaseStart(QtConcurrent::ThreadEngineBase* self);
	friend void QtConcurrent__ThreadEngineBase_Finish(QtConcurrent::ThreadEngineBase* self);
	friend void QtConcurrent__ThreadEngineBase_QBaseFinish(QtConcurrent::ThreadEngineBase* self);
	friend int QtConcurrent__ThreadEngineBase_ThreadFunction(QtConcurrent::ThreadEngineBase* self);
	friend int QtConcurrent__ThreadEngineBase_QBaseThreadFunction(QtConcurrent::ThreadEngineBase* self);
	friend bool QtConcurrent__ThreadEngineBase_ShouldStartThread(QtConcurrent::ThreadEngineBase* self);
	friend bool QtConcurrent__ThreadEngineBase_QBaseShouldStartThread(QtConcurrent::ThreadEngineBase* self);
	friend bool QtConcurrent__ThreadEngineBase_ShouldThrottleThread(QtConcurrent::ThreadEngineBase* self);
	friend bool QtConcurrent__ThreadEngineBase_QBaseShouldThrottleThread(QtConcurrent::ThreadEngineBase* self);
};

#endif


