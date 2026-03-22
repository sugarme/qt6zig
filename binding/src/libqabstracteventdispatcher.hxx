#pragma once
#ifndef QABSTRACTEVENTDISPATCHER_H_C_LIBVIRTUAL
#define QABSTRACTEVENTDISPATCHER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractEventDispatcher so that we can call protected methods
class VirtualQAbstractEventDispatcher : public QAbstractEventDispatcher {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractEventDispatcher= true;

	// Virtual class public types (including callbacks)
	using QAbstractEventDispatcher_ProcessEvents_Callback = bool (*)(QAbstractEventDispatcher*, int);
	using QAbstractEventDispatcher_RegisterSocketNotifier_Callback = void (*)(QAbstractEventDispatcher*, QSocketNotifier*);
	using QAbstractEventDispatcher_UnregisterSocketNotifier_Callback = void (*)(QAbstractEventDispatcher*, QSocketNotifier*);
	using QAbstractEventDispatcher_RegisterTimer3_Callback = void (*)(QAbstractEventDispatcher*, int, long long, int, QObject*);
	using QAbstractEventDispatcher_UnregisterTimer_Callback = bool (*)(QAbstractEventDispatcher*, int);
	using QAbstractEventDispatcher_UnregisterTimers_Callback = bool (*)(QAbstractEventDispatcher*, QObject*);
	using QAbstractEventDispatcher_RegisteredTimers_Callback = libqt_list (*)(const QAbstractEventDispatcher*, QObject*);
	using QAbstractEventDispatcher_RemainingTime_Callback = int (*)(QAbstractEventDispatcher*, int);
	using QAbstractEventDispatcher_WakeUp_Callback = void (*)();
	using QAbstractEventDispatcher_Interrupt_Callback = void (*)();
	using QAbstractEventDispatcher_StartingUp_Callback = void (*)();
	using QAbstractEventDispatcher_ClosingDown_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QAbstractEventDispatcher_ProcessEvents_Callback qabstracteventdispatcher_processevents_callback = nullptr;
	mutable QAbstractEventDispatcher_RegisterSocketNotifier_Callback qabstracteventdispatcher_registersocketnotifier_callback = nullptr;
	mutable QAbstractEventDispatcher_UnregisterSocketNotifier_Callback qabstracteventdispatcher_unregistersocketnotifier_callback = nullptr;
	mutable QAbstractEventDispatcher_RegisterTimer3_Callback qabstracteventdispatcher_registertimer3_callback = nullptr;
	mutable QAbstractEventDispatcher_UnregisterTimer_Callback qabstracteventdispatcher_unregistertimer_callback = nullptr;
	mutable QAbstractEventDispatcher_UnregisterTimers_Callback qabstracteventdispatcher_unregistertimers_callback = nullptr;
	mutable QAbstractEventDispatcher_RegisteredTimers_Callback qabstracteventdispatcher_registeredtimers_callback = nullptr;
	mutable QAbstractEventDispatcher_RemainingTime_Callback qabstracteventdispatcher_remainingtime_callback = nullptr;
	mutable QAbstractEventDispatcher_WakeUp_Callback qabstracteventdispatcher_wakeup_callback = nullptr;
	mutable QAbstractEventDispatcher_Interrupt_Callback qabstracteventdispatcher_interrupt_callback = nullptr;
	mutable QAbstractEventDispatcher_StartingUp_Callback qabstracteventdispatcher_startingup_callback = nullptr;
	mutable QAbstractEventDispatcher_ClosingDown_Callback qabstracteventdispatcher_closingdown_callback = nullptr;

	// Instance base flags
    mutable bool qabstracteventdispatcher_processevents_isbase = false;
    mutable bool qabstracteventdispatcher_registersocketnotifier_isbase = false;
    mutable bool qabstracteventdispatcher_unregistersocketnotifier_isbase = false;
    mutable bool qabstracteventdispatcher_registertimer3_isbase = false;
    mutable bool qabstracteventdispatcher_unregistertimer_isbase = false;
    mutable bool qabstracteventdispatcher_unregistertimers_isbase = false;
    mutable bool qabstracteventdispatcher_registeredtimers_isbase = false;
    mutable bool qabstracteventdispatcher_remainingtime_isbase = false;
    mutable bool qabstracteventdispatcher_wakeup_isbase = false;
    mutable bool qabstracteventdispatcher_interrupt_isbase = false;
    mutable bool qabstracteventdispatcher_startingup_isbase = false;
    mutable bool qabstracteventdispatcher_closingdown_isbase = false;

public:
	VirtualQAbstractEventDispatcher(): QAbstractEventDispatcher() {};
	VirtualQAbstractEventDispatcher(QObject* parent): QAbstractEventDispatcher(parent) {};

	~VirtualQAbstractEventDispatcher() {
		qabstracteventdispatcher_processevents_callback = nullptr;
		qabstracteventdispatcher_registersocketnotifier_callback = nullptr;
		qabstracteventdispatcher_unregistersocketnotifier_callback = nullptr;
		qabstracteventdispatcher_registertimer3_callback = nullptr;
		qabstracteventdispatcher_unregistertimer_callback = nullptr;
		qabstracteventdispatcher_unregistertimers_callback = nullptr;
		qabstracteventdispatcher_registeredtimers_callback = nullptr;
		qabstracteventdispatcher_remainingtime_callback = nullptr;
		qabstracteventdispatcher_wakeup_callback = nullptr;
		qabstracteventdispatcher_interrupt_callback = nullptr;
		qabstracteventdispatcher_startingup_callback = nullptr;
		qabstracteventdispatcher_closingdown_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractEventDispatcher_ProcessEvents_Callback(QAbstractEventDispatcher_ProcessEvents_Callback cb) const { qabstracteventdispatcher_processevents_callback = cb; }
	inline void setQAbstractEventDispatcher_RegisterSocketNotifier_Callback(QAbstractEventDispatcher_RegisterSocketNotifier_Callback cb) const { qabstracteventdispatcher_registersocketnotifier_callback = cb; }
	inline void setQAbstractEventDispatcher_UnregisterSocketNotifier_Callback(QAbstractEventDispatcher_UnregisterSocketNotifier_Callback cb) const { qabstracteventdispatcher_unregistersocketnotifier_callback = cb; }
	inline void setQAbstractEventDispatcher_RegisterTimer3_Callback(QAbstractEventDispatcher_RegisterTimer3_Callback cb) const { qabstracteventdispatcher_registertimer3_callback = cb; }
	inline void setQAbstractEventDispatcher_UnregisterTimer_Callback(QAbstractEventDispatcher_UnregisterTimer_Callback cb) const { qabstracteventdispatcher_unregistertimer_callback = cb; }
	inline void setQAbstractEventDispatcher_UnregisterTimers_Callback(QAbstractEventDispatcher_UnregisterTimers_Callback cb) const { qabstracteventdispatcher_unregistertimers_callback = cb; }
	inline void setQAbstractEventDispatcher_RegisteredTimers_Callback(QAbstractEventDispatcher_RegisteredTimers_Callback cb) const { qabstracteventdispatcher_registeredtimers_callback = cb; }
	inline void setQAbstractEventDispatcher_RemainingTime_Callback(QAbstractEventDispatcher_RemainingTime_Callback cb) const { qabstracteventdispatcher_remainingtime_callback = cb; }
	inline void setQAbstractEventDispatcher_WakeUp_Callback(QAbstractEventDispatcher_WakeUp_Callback cb) const { qabstracteventdispatcher_wakeup_callback = cb; }
	inline void setQAbstractEventDispatcher_Interrupt_Callback(QAbstractEventDispatcher_Interrupt_Callback cb) const { qabstracteventdispatcher_interrupt_callback = cb; }
	inline void setQAbstractEventDispatcher_StartingUp_Callback(QAbstractEventDispatcher_StartingUp_Callback cb) const { qabstracteventdispatcher_startingup_callback = cb; }
	inline void setQAbstractEventDispatcher_ClosingDown_Callback(QAbstractEventDispatcher_ClosingDown_Callback cb) const { qabstracteventdispatcher_closingdown_callback = cb; }

// Base flag setters
	inline void setQAbstractEventDispatcher_ProcessEvents_IsBase(bool value) const { qabstracteventdispatcher_processevents_isbase = value; }
	inline void setQAbstractEventDispatcher_RegisterSocketNotifier_IsBase(bool value) const { qabstracteventdispatcher_registersocketnotifier_isbase = value; }
	inline void setQAbstractEventDispatcher_UnregisterSocketNotifier_IsBase(bool value) const { qabstracteventdispatcher_unregistersocketnotifier_isbase = value; }
	inline void setQAbstractEventDispatcher_RegisterTimer3_IsBase(bool value) const { qabstracteventdispatcher_registertimer3_isbase = value; }
	inline void setQAbstractEventDispatcher_UnregisterTimer_IsBase(bool value) const { qabstracteventdispatcher_unregistertimer_isbase = value; }
	inline void setQAbstractEventDispatcher_UnregisterTimers_IsBase(bool value) const { qabstracteventdispatcher_unregistertimers_isbase = value; }
	inline void setQAbstractEventDispatcher_RegisteredTimers_IsBase(bool value) const { qabstracteventdispatcher_registeredtimers_isbase = value; }
	inline void setQAbstractEventDispatcher_RemainingTime_IsBase(bool value) const { qabstracteventdispatcher_remainingtime_isbase = value; }
	inline void setQAbstractEventDispatcher_WakeUp_IsBase(bool value) const { qabstracteventdispatcher_wakeup_isbase = value; }
	inline void setQAbstractEventDispatcher_Interrupt_IsBase(bool value) const { qabstracteventdispatcher_interrupt_isbase = value; }
	inline void setQAbstractEventDispatcher_StartingUp_IsBase(bool value) const { qabstracteventdispatcher_startingup_isbase = value; }
	inline void setQAbstractEventDispatcher_ClosingDown_IsBase(bool value) const { qabstracteventdispatcher_closingdown_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool processEvents(QEventLoop::ProcessEventsFlags flags) override {
		if (qabstracteventdispatcher_processevents_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			bool callback_ret = qabstracteventdispatcher_processevents_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void registerSocketNotifier(QSocketNotifier* notifier) override {
		if (qabstracteventdispatcher_registersocketnotifier_callback != nullptr) {
			QSocketNotifier* cbval1 = notifier;
			qabstracteventdispatcher_registersocketnotifier_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unregisterSocketNotifier(QSocketNotifier* notifier) override {
		if (qabstracteventdispatcher_unregistersocketnotifier_callback != nullptr) {
			QSocketNotifier* cbval1 = notifier;
			qabstracteventdispatcher_unregistersocketnotifier_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void registerTimer(int timerId, qint64 interval, Qt::TimerType timerType, QObject* object) override {
		if (qabstracteventdispatcher_registertimer3_callback != nullptr) {
			int cbval1 = timerId;
			long long cbval2 = interval;
			int cbval3 = static_cast<int>(timerType);
			QObject* cbval4 = object;
			qabstracteventdispatcher_registertimer3_callback(this, cbval1, cbval2, cbval3, cbval4);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unregisterTimer(int timerId) override {
		if (qabstracteventdispatcher_unregistertimer_callback != nullptr) {
			int cbval1 = timerId;
			bool callback_ret = qabstracteventdispatcher_unregistertimer_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool unregisterTimers(QObject* object) override {
		if (qabstracteventdispatcher_unregistertimers_callback != nullptr) {
			QObject* cbval1 = object;
			bool callback_ret = qabstracteventdispatcher_unregistertimers_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject* object) const override {
		if (qabstracteventdispatcher_registeredtimers_callback != nullptr) {
			QObject* cbval1 = object;
			libqt_list callback_ret = qabstracteventdispatcher_registeredtimers_callback(this, cbval1);
			return QList<QAbstractEventDispatcher::TimerInfo>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int remainingTime(int timerId) override {
		if (qabstracteventdispatcher_remainingtime_callback != nullptr) {
			int cbval1 = timerId;
			int callback_ret = qabstracteventdispatcher_remainingtime_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wakeUp() override {
		if (qabstracteventdispatcher_wakeup_callback != nullptr) {
			qabstracteventdispatcher_wakeup_callback();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void interrupt() override {
		if (qabstracteventdispatcher_interrupt_callback != nullptr) {
			qabstracteventdispatcher_interrupt_callback();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void startingUp() override {
		if (qabstracteventdispatcher_startingup_isbase) {
			qabstracteventdispatcher_startingup_isbase = false;
			QAbstractEventDispatcher::startingUp();
		} else if (qabstracteventdispatcher_startingup_callback != nullptr) {
			qabstracteventdispatcher_startingup_callback();
		} else {
			QAbstractEventDispatcher::startingUp();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closingDown() override {
		if (qabstracteventdispatcher_closingdown_isbase) {
			qabstracteventdispatcher_closingdown_isbase = false;
			QAbstractEventDispatcher::closingDown();
		} else if (qabstracteventdispatcher_closingdown_callback != nullptr) {
			qabstracteventdispatcher_closingdown_callback();
		} else {
			QAbstractEventDispatcher::closingDown();
		}
	}
};

// This class is a subclass of QAbstractEventDispatcherV2 so that we can call protected methods
class VirtualQAbstractEventDispatcherV2 : public QAbstractEventDispatcherV2 {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractEventDispatcherV2= true;

	// Virtual class public types (including callbacks)
	using QAbstractEventDispatcherV2_TimersForObject_Callback = libqt_list (*)(const QAbstractEventDispatcherV2*, QObject*);
	using QAbstractEventDispatcherV2_ProcessEventsWithDeadline_Callback = bool (*)(QAbstractEventDispatcherV2*, int, QDeadlineTimer*);

protected:
	// Instance callback storage
	mutable QAbstractEventDispatcherV2_TimersForObject_Callback qabstracteventdispatcherv2_timersforobject_callback = nullptr;
	mutable QAbstractEventDispatcherV2_ProcessEventsWithDeadline_Callback qabstracteventdispatcherv2_processeventswithdeadline_callback = nullptr;

	// Instance base flags
    mutable bool qabstracteventdispatcherv2_timersforobject_isbase = false;
    mutable bool qabstracteventdispatcherv2_processeventswithdeadline_isbase = false;

public:
	VirtualQAbstractEventDispatcherV2(): QAbstractEventDispatcherV2() {};
	VirtualQAbstractEventDispatcherV2(QObject* parent): QAbstractEventDispatcherV2(parent) {};

	~VirtualQAbstractEventDispatcherV2() {
		qabstracteventdispatcherv2_timersforobject_callback = nullptr;
		qabstracteventdispatcherv2_processeventswithdeadline_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractEventDispatcherV2_TimersForObject_Callback(QAbstractEventDispatcherV2_TimersForObject_Callback cb) const { qabstracteventdispatcherv2_timersforobject_callback = cb; }
	inline void setQAbstractEventDispatcherV2_ProcessEventsWithDeadline_Callback(QAbstractEventDispatcherV2_ProcessEventsWithDeadline_Callback cb) const { qabstracteventdispatcherv2_processeventswithdeadline_callback = cb; }

// Base flag setters
	inline void setQAbstractEventDispatcherV2_TimersForObject_IsBase(bool value) const { qabstracteventdispatcherv2_timersforobject_isbase = value; }
	inline void setQAbstractEventDispatcherV2_ProcessEventsWithDeadline_IsBase(bool value) const { qabstracteventdispatcherv2_processeventswithdeadline_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QAbstractEventDispatcher::TimerInfoV2> timersForObject(QObject* object) const override {
		if (qabstracteventdispatcherv2_timersforobject_callback != nullptr) {
			QObject* cbval1 = object;
			libqt_list callback_ret = qabstracteventdispatcherv2_timersforobject_callback(this, cbval1);
			return QList<QAbstractEventDispatcher::TimerInfoV2>();
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool processEventsWithDeadline(QEventLoop::ProcessEventsFlags flags, QDeadlineTimer deadline) override {
		if (qabstracteventdispatcherv2_processeventswithdeadline_isbase) {
			qabstracteventdispatcherv2_processeventswithdeadline_isbase = false;
			return QAbstractEventDispatcherV2::processEventsWithDeadline(flags, deadline);
		} else if (qabstracteventdispatcherv2_processeventswithdeadline_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			QDeadlineTimer* cbval2 = &deadline;
			bool callback_ret = qabstracteventdispatcherv2_processeventswithdeadline_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QAbstractEventDispatcherV2::processEventsWithDeadline(flags, deadline);
		}
	}
};

#endif


