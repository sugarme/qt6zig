#pragma once
#ifndef QANIMATIONGROUP_H_C_LIBVIRTUAL
#define QANIMATIONGROUP_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAnimationGroup so that we can call protected methods
class VirtualQAnimationGroup : public QAnimationGroup {

public:
	// Virtual class boolean flag
	bool isVirtualQAnimationGroup= true;

	// Virtual class public types (including callbacks)
	using QAnimationGroup_Event_Callback = bool (*)(QAnimationGroup*, QEvent*);

protected:
	// Instance callback storage
	mutable QAnimationGroup_Event_Callback qanimationgroup_event_callback = nullptr;

	// Instance base flags
    mutable bool qanimationgroup_event_isbase = false;

public:
	VirtualQAnimationGroup(): QAnimationGroup() {};
	VirtualQAnimationGroup(QObject* parent): QAnimationGroup(parent) {};

	~VirtualQAnimationGroup() {
		qanimationgroup_event_callback = nullptr;
	}

// Callback setters
	inline void setQAnimationGroup_Event_Callback(QAnimationGroup_Event_Callback cb) const { qanimationgroup_event_callback = cb; }

// Base flag setters
	inline void setQAnimationGroup_Event_IsBase(bool value) const { qanimationgroup_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qanimationgroup_event_isbase) {
			qanimationgroup_event_isbase = false;
			return QAnimationGroup::event(event);
		} else if (qanimationgroup_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qanimationgroup_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAnimationGroup::event(event);
		}
	}

	// Friend functions
	friend bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event);
	friend bool QAnimationGroup_QBaseEvent(QAnimationGroup* self, QEvent* event);
};

#endif


