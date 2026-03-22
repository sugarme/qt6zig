#pragma once
#ifndef QFILEDIALOG_H_C_LIBVIRTUAL
#define QFILEDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QFileDialog so that we can call protected methods
class VirtualQFileDialog final : public QFileDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQFileDialog= true;

	// Virtual class public types (including callbacks)
	using QFileDialog_SetVisible_Callback = void (*)(QFileDialog*, bool);
	using QFileDialog_Done_Callback = void (*)(QFileDialog*, int);
	using QFileDialog_Accept_Callback = void (*)();
	using QFileDialog_ChangeEvent_Callback = void (*)(QFileDialog*, QEvent*);

protected:
	// Instance callback storage
	mutable QFileDialog_SetVisible_Callback qfiledialog_setvisible_callback = nullptr;
	mutable QFileDialog_Done_Callback qfiledialog_done_callback = nullptr;
	mutable QFileDialog_Accept_Callback qfiledialog_accept_callback = nullptr;
	mutable QFileDialog_ChangeEvent_Callback qfiledialog_changeevent_callback = nullptr;

	// Instance base flags
    mutable bool qfiledialog_setvisible_isbase = false;
    mutable bool qfiledialog_done_isbase = false;
    mutable bool qfiledialog_accept_isbase = false;
    mutable bool qfiledialog_changeevent_isbase = false;

public:
	VirtualQFileDialog(QWidget* parent): QFileDialog(parent) {};
	VirtualQFileDialog(QWidget* parent, Qt::WindowFlags f): QFileDialog(parent, f) {};
	VirtualQFileDialog(): QFileDialog() {};
	VirtualQFileDialog(QWidget* parent, const QString& caption): QFileDialog(parent, caption) {};
	VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory): QFileDialog(parent, caption, directory) {};
	VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory, const QString& filter): QFileDialog(parent, caption, directory, filter) {};

	~VirtualQFileDialog() {
		qfiledialog_setvisible_callback = nullptr;
		qfiledialog_done_callback = nullptr;
		qfiledialog_accept_callback = nullptr;
		qfiledialog_changeevent_callback = nullptr;
	}

// Callback setters
	inline void setQFileDialog_SetVisible_Callback(QFileDialog_SetVisible_Callback cb) const { qfiledialog_setvisible_callback = cb; }
	inline void setQFileDialog_Done_Callback(QFileDialog_Done_Callback cb) const { qfiledialog_done_callback = cb; }
	inline void setQFileDialog_Accept_Callback(QFileDialog_Accept_Callback cb) const { qfiledialog_accept_callback = cb; }
	inline void setQFileDialog_ChangeEvent_Callback(QFileDialog_ChangeEvent_Callback cb) const { qfiledialog_changeevent_callback = cb; }

// Base flag setters
	inline void setQFileDialog_SetVisible_IsBase(bool value) const { qfiledialog_setvisible_isbase = value; }
	inline void setQFileDialog_Done_IsBase(bool value) const { qfiledialog_done_isbase = value; }
	inline void setQFileDialog_Accept_IsBase(bool value) const { qfiledialog_accept_isbase = value; }
	inline void setQFileDialog_ChangeEvent_IsBase(bool value) const { qfiledialog_changeevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qfiledialog_setvisible_isbase) {
			qfiledialog_setvisible_isbase = false;
			QFileDialog::setVisible(visible);
		} else if (qfiledialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qfiledialog_setvisible_callback(this, cbval1);
		} else {
			QFileDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qfiledialog_done_isbase) {
			qfiledialog_done_isbase = false;
			QFileDialog::done(result);
		} else if (qfiledialog_done_callback != nullptr) {
			int cbval1 = result;
			qfiledialog_done_callback(this, cbval1);
		} else {
			QFileDialog::done(result);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void accept() override {
		if (qfiledialog_accept_isbase) {
			qfiledialog_accept_isbase = false;
			QFileDialog::accept();
		} else if (qfiledialog_accept_callback != nullptr) {
			qfiledialog_accept_callback();
		} else {
			QFileDialog::accept();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* e) override {
		if (qfiledialog_changeevent_isbase) {
			qfiledialog_changeevent_isbase = false;
			QFileDialog::changeEvent(e);
		} else if (qfiledialog_changeevent_callback != nullptr) {
			QEvent* cbval1 = e;
			qfiledialog_changeevent_callback(this, cbval1);
		} else {
			QFileDialog::changeEvent(e);
		}
	}

	// Friend functions
	friend void QFileDialog_Done(QFileDialog* self, int result);
	friend void QFileDialog_QBaseDone(QFileDialog* self, int result);
	friend void QFileDialog_Accept(QFileDialog* self);
	friend void QFileDialog_QBaseAccept(QFileDialog* self);
	friend void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e);
	friend void QFileDialog_QBaseChangeEvent(QFileDialog* self, QEvent* e);
};

#endif


