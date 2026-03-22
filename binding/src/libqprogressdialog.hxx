#pragma once
#ifndef QPROGRESSDIALOG_H_C_LIBVIRTUAL
#define QPROGRESSDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QProgressDialog so that we can call protected methods
class VirtualQProgressDialog final : public QProgressDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQProgressDialog= true;

	// Virtual class public types (including callbacks)
	using QProgressDialog_SizeHint_Callback = QSize* (*)();
	using QProgressDialog_ResizeEvent_Callback = void (*)(QProgressDialog*, QResizeEvent*);
	using QProgressDialog_CloseEvent_Callback = void (*)(QProgressDialog*, QCloseEvent*);
	using QProgressDialog_ChangeEvent_Callback = void (*)(QProgressDialog*, QEvent*);
	using QProgressDialog_ShowEvent_Callback = void (*)(QProgressDialog*, QShowEvent*);
	using QProgressDialog_ForceShow_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QProgressDialog_SizeHint_Callback qprogressdialog_sizehint_callback = nullptr;
	mutable QProgressDialog_ResizeEvent_Callback qprogressdialog_resizeevent_callback = nullptr;
	mutable QProgressDialog_CloseEvent_Callback qprogressdialog_closeevent_callback = nullptr;
	mutable QProgressDialog_ChangeEvent_Callback qprogressdialog_changeevent_callback = nullptr;
	mutable QProgressDialog_ShowEvent_Callback qprogressdialog_showevent_callback = nullptr;
	mutable QProgressDialog_ForceShow_Callback qprogressdialog_forceshow_callback = nullptr;

	// Instance base flags
    mutable bool qprogressdialog_sizehint_isbase = false;
    mutable bool qprogressdialog_resizeevent_isbase = false;
    mutable bool qprogressdialog_closeevent_isbase = false;
    mutable bool qprogressdialog_changeevent_isbase = false;
    mutable bool qprogressdialog_showevent_isbase = false;
    mutable bool qprogressdialog_forceshow_isbase = false;

public:
	VirtualQProgressDialog(QWidget* parent): QProgressDialog(parent) {};
	VirtualQProgressDialog(): QProgressDialog() {};
	VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum): QProgressDialog(labelText, cancelButtonText, minimum, maximum) {};
	VirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags): QProgressDialog(parent, flags) {};
	VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent) {};
	VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {};

	~VirtualQProgressDialog() {
		qprogressdialog_sizehint_callback = nullptr;
		qprogressdialog_resizeevent_callback = nullptr;
		qprogressdialog_closeevent_callback = nullptr;
		qprogressdialog_changeevent_callback = nullptr;
		qprogressdialog_showevent_callback = nullptr;
		qprogressdialog_forceshow_callback = nullptr;
	}

// Callback setters
	inline void setQProgressDialog_SizeHint_Callback(QProgressDialog_SizeHint_Callback cb) const { qprogressdialog_sizehint_callback = cb; }
	inline void setQProgressDialog_ResizeEvent_Callback(QProgressDialog_ResizeEvent_Callback cb) const { qprogressdialog_resizeevent_callback = cb; }
	inline void setQProgressDialog_CloseEvent_Callback(QProgressDialog_CloseEvent_Callback cb) const { qprogressdialog_closeevent_callback = cb; }
	inline void setQProgressDialog_ChangeEvent_Callback(QProgressDialog_ChangeEvent_Callback cb) const { qprogressdialog_changeevent_callback = cb; }
	inline void setQProgressDialog_ShowEvent_Callback(QProgressDialog_ShowEvent_Callback cb) const { qprogressdialog_showevent_callback = cb; }
	inline void setQProgressDialog_ForceShow_Callback(QProgressDialog_ForceShow_Callback cb) const { qprogressdialog_forceshow_callback = cb; }

// Base flag setters
	inline void setQProgressDialog_SizeHint_IsBase(bool value) const { qprogressdialog_sizehint_isbase = value; }
	inline void setQProgressDialog_ResizeEvent_IsBase(bool value) const { qprogressdialog_resizeevent_isbase = value; }
	inline void setQProgressDialog_CloseEvent_IsBase(bool value) const { qprogressdialog_closeevent_isbase = value; }
	inline void setQProgressDialog_ChangeEvent_IsBase(bool value) const { qprogressdialog_changeevent_isbase = value; }
	inline void setQProgressDialog_ShowEvent_IsBase(bool value) const { qprogressdialog_showevent_isbase = value; }
	inline void setQProgressDialog_ForceShow_IsBase(bool value) const { qprogressdialog_forceshow_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qprogressdialog_sizehint_isbase) {
			qprogressdialog_sizehint_isbase = false;
			return QProgressDialog::sizeHint();
		} else if (qprogressdialog_sizehint_callback != nullptr) {
			QSize* callback_ret = qprogressdialog_sizehint_callback();
			return *callback_ret;
		} else {
			return QProgressDialog::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qprogressdialog_resizeevent_isbase) {
			qprogressdialog_resizeevent_isbase = false;
			QProgressDialog::resizeEvent(event);
		} else if (qprogressdialog_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qprogressdialog_resizeevent_callback(this, cbval1);
		} else {
			QProgressDialog::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* event) override {
		if (qprogressdialog_closeevent_isbase) {
			qprogressdialog_closeevent_isbase = false;
			QProgressDialog::closeEvent(event);
		} else if (qprogressdialog_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = event;
			qprogressdialog_closeevent_callback(this, cbval1);
		} else {
			QProgressDialog::closeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qprogressdialog_changeevent_isbase) {
			qprogressdialog_changeevent_isbase = false;
			QProgressDialog::changeEvent(event);
		} else if (qprogressdialog_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qprogressdialog_changeevent_callback(this, cbval1);
		} else {
			QProgressDialog::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qprogressdialog_showevent_isbase) {
			qprogressdialog_showevent_isbase = false;
			QProgressDialog::showEvent(event);
		} else if (qprogressdialog_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qprogressdialog_showevent_callback(this, cbval1);
		} else {
			QProgressDialog::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	void forceShow() {
		if (qprogressdialog_forceshow_isbase) {
			qprogressdialog_forceshow_isbase = false;
			QProgressDialog::forceShow();
		} else if (qprogressdialog_forceshow_callback != nullptr) {
			qprogressdialog_forceshow_callback();
		} else {
			QProgressDialog::forceShow();
		}
	}

	// Friend functions
	friend void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event);
	friend void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event);
	friend void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event);
	friend void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event);
	friend void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event);
	friend void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event);
	friend void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event);
	friend void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event);
	friend void QProgressDialog_ForceShow(QProgressDialog* self);
	friend void QProgressDialog_QBaseForceShow(QProgressDialog* self);
};

#endif


