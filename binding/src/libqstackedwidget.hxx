#pragma once
#ifndef QSTACKEDWIDGET_H_C_LIBVIRTUAL
#define QSTACKEDWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStackedWidget so that we can call protected methods
class VirtualQStackedWidget final : public QStackedWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQStackedWidget= true;

	// Virtual class public types (including callbacks)
	using QStackedWidget_Event_Callback = bool (*)(QStackedWidget*, QEvent*);

protected:
	// Instance callback storage
	mutable QStackedWidget_Event_Callback qstackedwidget_event_callback = nullptr;

	// Instance base flags
    mutable bool qstackedwidget_event_isbase = false;

public:
	VirtualQStackedWidget(QWidget* parent): QStackedWidget(parent) {};
	VirtualQStackedWidget(): QStackedWidget() {};

	~VirtualQStackedWidget() {
		qstackedwidget_event_callback = nullptr;
	}

// Callback setters
	inline void setQStackedWidget_Event_Callback(QStackedWidget_Event_Callback cb) const { qstackedwidget_event_callback = cb; }

// Base flag setters
	inline void setQStackedWidget_Event_IsBase(bool value) const { qstackedwidget_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qstackedwidget_event_isbase) {
			qstackedwidget_event_isbase = false;
			return QStackedWidget::event(e);
		} else if (qstackedwidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qstackedwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QStackedWidget::event(e);
		}
	}

	// Friend functions
	friend bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
	friend bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e);
};

#endif


