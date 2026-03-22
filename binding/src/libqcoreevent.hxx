#pragma once
#ifndef QCOREEVENT_H_C_LIBVIRTUAL
#define QCOREEVENT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QEvent so that we can call protected methods
class VirtualQEvent final : public QEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQEvent= true;

	// Virtual class public types (including callbacks)
	using QEvent_SetAccepted_Callback = void (*)(QEvent*, bool);
	using QEvent_OperatorAssign_Callback = void (*)(QEvent*, const QEvent*);

protected:
	// Instance callback storage
	mutable QEvent_SetAccepted_Callback qevent_setaccepted_callback = nullptr;
	mutable QEvent_OperatorAssign_Callback qevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qevent_setaccepted_isbase = false;
    mutable bool qevent_operatorassign_isbase = false;

public:
	VirtualQEvent(QMetaType::Type typeVal): QEvent(typeVal) {};

	~VirtualQEvent() {
		qevent_setaccepted_callback = nullptr;
		qevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQEvent_SetAccepted_Callback(QEvent_SetAccepted_Callback cb) const { qevent_setaccepted_callback = cb; }
	inline void setQEvent_OperatorAssign_Callback(QEvent_OperatorAssign_Callback cb) const { qevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQEvent_SetAccepted_IsBase(bool value) const { qevent_setaccepted_isbase = value; }
	inline void setQEvent_OperatorAssign_IsBase(bool value) const { qevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setAccepted(bool accepted) override {
		if (qevent_setaccepted_isbase) {
			qevent_setaccepted_isbase = false;
			QEvent::setAccepted(accepted);
		} else if (qevent_setaccepted_callback != nullptr) {
			bool cbval1 = accepted;
			qevent_setaccepted_callback(this, cbval1);
		} else {
			QEvent::setAccepted(accepted);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QEvent& other) {
		if (qevent_operatorassign_isbase) {
			qevent_operatorassign_isbase = false;
			QEvent::operator=(other);
		} else if (qevent_operatorassign_callback != nullptr) {
			const QEvent* cbval1 = (const QEvent*)&other;
			qevent_operatorassign_callback(this, cbval1);
		} else {
			QEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QEvent_OperatorAssign(QEvent* self, const QEvent* other);
	friend void QEvent_QBaseOperatorAssign(QEvent* self, const QEvent* other);
};

#endif


