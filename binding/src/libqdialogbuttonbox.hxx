#pragma once
#ifndef QDIALOGBUTTONBOX_H_C_LIBVIRTUAL
#define QDIALOGBUTTONBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDialogButtonBox so that we can call protected methods
class VirtualQDialogButtonBox final : public QDialogButtonBox {

public:
	// Virtual class boolean flag
	bool isVirtualQDialogButtonBox= true;

	// Virtual class public types (including callbacks)
	using QDialogButtonBox_ChangeEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
	using QDialogButtonBox_Event_Callback = bool (*)(QDialogButtonBox*, QEvent*);

protected:
	// Instance callback storage
	mutable QDialogButtonBox_ChangeEvent_Callback qdialogbuttonbox_changeevent_callback = nullptr;
	mutable QDialogButtonBox_Event_Callback qdialogbuttonbox_event_callback = nullptr;

	// Instance base flags
    mutable bool qdialogbuttonbox_changeevent_isbase = false;
    mutable bool qdialogbuttonbox_event_isbase = false;

public:
	VirtualQDialogButtonBox(QWidget* parent): QDialogButtonBox(parent) {};
	VirtualQDialogButtonBox(): QDialogButtonBox() {};
	VirtualQDialogButtonBox(Qt::Orientation orientation): QDialogButtonBox(orientation) {};
	VirtualQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons): QDialogButtonBox(buttons) {};
	VirtualQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation): QDialogButtonBox(buttons, orientation) {};
	VirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(orientation, parent) {};
	VirtualQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget* parent): QDialogButtonBox(buttons, parent) {};
	VirtualQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(buttons, orientation, parent) {};

	~VirtualQDialogButtonBox() {
		qdialogbuttonbox_changeevent_callback = nullptr;
		qdialogbuttonbox_event_callback = nullptr;
	}

// Callback setters
	inline void setQDialogButtonBox_ChangeEvent_Callback(QDialogButtonBox_ChangeEvent_Callback cb) const { qdialogbuttonbox_changeevent_callback = cb; }
	inline void setQDialogButtonBox_Event_Callback(QDialogButtonBox_Event_Callback cb) const { qdialogbuttonbox_event_callback = cb; }

// Base flag setters
	inline void setQDialogButtonBox_ChangeEvent_IsBase(bool value) const { qdialogbuttonbox_changeevent_isbase = value; }
	inline void setQDialogButtonBox_Event_IsBase(bool value) const { qdialogbuttonbox_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qdialogbuttonbox_changeevent_isbase) {
			qdialogbuttonbox_changeevent_isbase = false;
			QDialogButtonBox::changeEvent(event);
		} else if (qdialogbuttonbox_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qdialogbuttonbox_changeevent_callback(this, cbval1);
		} else {
			QDialogButtonBox::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qdialogbuttonbox_event_isbase) {
			qdialogbuttonbox_event_isbase = false;
			return QDialogButtonBox::event(event);
		} else if (qdialogbuttonbox_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qdialogbuttonbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDialogButtonBox::event(event);
		}
	}

	// Friend functions
	friend void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event);
	friend void QDialogButtonBox_QBaseChangeEvent(QDialogButtonBox* self, QEvent* event);
	friend bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event);
	friend bool QDialogButtonBox_QBaseEvent(QDialogButtonBox* self, QEvent* event);
};

#endif


