#pragma once
#ifndef QFONTDIALOG_H_C_LIBVIRTUAL
#define QFONTDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFontDialog so that we can call protected methods
class VirtualQFontDialog final : public QFontDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQFontDialog= true;

	// Virtual class public types (including callbacks)
	using QFontDialog_SetVisible_Callback = void (*)(QFontDialog*, bool);
	using QFontDialog_ChangeEvent_Callback = void (*)(QFontDialog*, QEvent*);
	using QFontDialog_Done_Callback = void (*)(QFontDialog*, int);
	using QFontDialog_EventFilter_Callback = bool (*)(QFontDialog*, QObject*, QEvent*);

protected:
	// Instance callback storage
	mutable QFontDialog_SetVisible_Callback qfontdialog_setvisible_callback = nullptr;
	mutable QFontDialog_ChangeEvent_Callback qfontdialog_changeevent_callback = nullptr;
	mutable QFontDialog_Done_Callback qfontdialog_done_callback = nullptr;
	mutable QFontDialog_EventFilter_Callback qfontdialog_eventfilter_callback = nullptr;

	// Instance base flags
    mutable bool qfontdialog_setvisible_isbase = false;
    mutable bool qfontdialog_changeevent_isbase = false;
    mutable bool qfontdialog_done_isbase = false;
    mutable bool qfontdialog_eventfilter_isbase = false;

public:
	VirtualQFontDialog(QWidget* parent): QFontDialog(parent) {};
	VirtualQFontDialog(): QFontDialog() {};
	VirtualQFontDialog(const QFont& initial): QFontDialog(initial) {};
	VirtualQFontDialog(const QFont& initial, QWidget* parent): QFontDialog(initial, parent) {};

	~VirtualQFontDialog() {
		qfontdialog_setvisible_callback = nullptr;
		qfontdialog_changeevent_callback = nullptr;
		qfontdialog_done_callback = nullptr;
		qfontdialog_eventfilter_callback = nullptr;
	}

// Callback setters
	inline void setQFontDialog_SetVisible_Callback(QFontDialog_SetVisible_Callback cb) const { qfontdialog_setvisible_callback = cb; }
	inline void setQFontDialog_ChangeEvent_Callback(QFontDialog_ChangeEvent_Callback cb) const { qfontdialog_changeevent_callback = cb; }
	inline void setQFontDialog_Done_Callback(QFontDialog_Done_Callback cb) const { qfontdialog_done_callback = cb; }
	inline void setQFontDialog_EventFilter_Callback(QFontDialog_EventFilter_Callback cb) const { qfontdialog_eventfilter_callback = cb; }

// Base flag setters
	inline void setQFontDialog_SetVisible_IsBase(bool value) const { qfontdialog_setvisible_isbase = value; }
	inline void setQFontDialog_ChangeEvent_IsBase(bool value) const { qfontdialog_changeevent_isbase = value; }
	inline void setQFontDialog_Done_IsBase(bool value) const { qfontdialog_done_isbase = value; }
	inline void setQFontDialog_EventFilter_IsBase(bool value) const { qfontdialog_eventfilter_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qfontdialog_setvisible_isbase) {
			qfontdialog_setvisible_isbase = false;
			QFontDialog::setVisible(visible);
		} else if (qfontdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qfontdialog_setvisible_callback(this, cbval1);
		} else {
			QFontDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qfontdialog_changeevent_isbase) {
			qfontdialog_changeevent_isbase = false;
			QFontDialog::changeEvent(event);
		} else if (qfontdialog_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qfontdialog_changeevent_callback(this, cbval1);
		} else {
			QFontDialog::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qfontdialog_done_isbase) {
			qfontdialog_done_isbase = false;
			QFontDialog::done(result);
		} else if (qfontdialog_done_callback != nullptr) {
			int cbval1 = result;
			qfontdialog_done_callback(this, cbval1);
		} else {
			QFontDialog::done(result);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qfontdialog_eventfilter_isbase) {
			qfontdialog_eventfilter_isbase = false;
			return QFontDialog::eventFilter(object, event);
		} else if (qfontdialog_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qfontdialog_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QFontDialog::eventFilter(object, event);
		}
	}

	// Friend functions
	friend void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
	friend void QFontDialog_QBaseChangeEvent(QFontDialog* self, QEvent* event);
	friend void QFontDialog_Done(QFontDialog* self, int result);
	friend void QFontDialog_QBaseDone(QFontDialog* self, int result);
	friend bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
	friend bool QFontDialog_QBaseEventFilter(QFontDialog* self, QObject* object, QEvent* event);
};

#endif


