#pragma once
#ifndef QCOLORDIALOG_H_C_LIBVIRTUAL
#define QCOLORDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QColorDialog so that we can call protected methods
class VirtualQColorDialog final : public QColorDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQColorDialog= true;

	// Virtual class public types (including callbacks)
	using QColorDialog_SetVisible_Callback = void (*)(QColorDialog*, bool);
	using QColorDialog_ChangeEvent_Callback = void (*)(QColorDialog*, QEvent*);
	using QColorDialog_Done_Callback = void (*)(QColorDialog*, int);

protected:
	// Instance callback storage
	mutable QColorDialog_SetVisible_Callback qcolordialog_setvisible_callback = nullptr;
	mutable QColorDialog_ChangeEvent_Callback qcolordialog_changeevent_callback = nullptr;
	mutable QColorDialog_Done_Callback qcolordialog_done_callback = nullptr;

	// Instance base flags
    mutable bool qcolordialog_setvisible_isbase = false;
    mutable bool qcolordialog_changeevent_isbase = false;
    mutable bool qcolordialog_done_isbase = false;

public:
	VirtualQColorDialog(QWidget* parent): QColorDialog(parent) {};
	VirtualQColorDialog(): QColorDialog() {};
	VirtualQColorDialog(const QColor& initial): QColorDialog(initial) {};
	VirtualQColorDialog(const QColor& initial, QWidget* parent): QColorDialog(initial, parent) {};

	~VirtualQColorDialog() {
		qcolordialog_setvisible_callback = nullptr;
		qcolordialog_changeevent_callback = nullptr;
		qcolordialog_done_callback = nullptr;
	}

// Callback setters
	inline void setQColorDialog_SetVisible_Callback(QColorDialog_SetVisible_Callback cb) const { qcolordialog_setvisible_callback = cb; }
	inline void setQColorDialog_ChangeEvent_Callback(QColorDialog_ChangeEvent_Callback cb) const { qcolordialog_changeevent_callback = cb; }
	inline void setQColorDialog_Done_Callback(QColorDialog_Done_Callback cb) const { qcolordialog_done_callback = cb; }

// Base flag setters
	inline void setQColorDialog_SetVisible_IsBase(bool value) const { qcolordialog_setvisible_isbase = value; }
	inline void setQColorDialog_ChangeEvent_IsBase(bool value) const { qcolordialog_changeevent_isbase = value; }
	inline void setQColorDialog_Done_IsBase(bool value) const { qcolordialog_done_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qcolordialog_setvisible_isbase) {
			qcolordialog_setvisible_isbase = false;
			QColorDialog::setVisible(visible);
		} else if (qcolordialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qcolordialog_setvisible_callback(this, cbval1);
		} else {
			QColorDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qcolordialog_changeevent_isbase) {
			qcolordialog_changeevent_isbase = false;
			QColorDialog::changeEvent(event);
		} else if (qcolordialog_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qcolordialog_changeevent_callback(this, cbval1);
		} else {
			QColorDialog::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qcolordialog_done_isbase) {
			qcolordialog_done_isbase = false;
			QColorDialog::done(result);
		} else if (qcolordialog_done_callback != nullptr) {
			int cbval1 = result;
			qcolordialog_done_callback(this, cbval1);
		} else {
			QColorDialog::done(result);
		}
	}

	// Friend functions
	friend void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event);
	friend void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event);
	friend void QColorDialog_Done(QColorDialog* self, int result);
	friend void QColorDialog_QBaseDone(QColorDialog* self, int result);
};

#endif


