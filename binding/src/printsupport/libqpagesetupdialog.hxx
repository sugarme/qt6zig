#pragma once
#ifndef QPAGESETUPDIALOG_H_C_LIBVIRTUAL
#define QPAGESETUPDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPageSetupDialog so that we can call protected methods
class VirtualQPageSetupDialog final : public QPageSetupDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQPageSetupDialog= true;

	// Virtual class public types (including callbacks)
	using QPageSetupDialog_SetVisible_Callback = void (*)(QPageSetupDialog*, bool);
	using QPageSetupDialog_Exec_Callback = int (*)();
	using QPageSetupDialog_Done_Callback = void (*)(QPageSetupDialog*, int);

protected:
	// Instance callback storage
	mutable QPageSetupDialog_SetVisible_Callback qpagesetupdialog_setvisible_callback = nullptr;
	mutable QPageSetupDialog_Exec_Callback qpagesetupdialog_exec_callback = nullptr;
	mutable QPageSetupDialog_Done_Callback qpagesetupdialog_done_callback = nullptr;

	// Instance base flags
    mutable bool qpagesetupdialog_setvisible_isbase = false;
    mutable bool qpagesetupdialog_exec_isbase = false;
    mutable bool qpagesetupdialog_done_isbase = false;

public:
	VirtualQPageSetupDialog(QWidget* parent): QPageSetupDialog(parent) {};
	VirtualQPageSetupDialog(QPrinter* printer): QPageSetupDialog(printer) {};
	VirtualQPageSetupDialog(): QPageSetupDialog() {};
	VirtualQPageSetupDialog(QPrinter* printer, QWidget* parent): QPageSetupDialog(printer, parent) {};

	~VirtualQPageSetupDialog() {
		qpagesetupdialog_setvisible_callback = nullptr;
		qpagesetupdialog_exec_callback = nullptr;
		qpagesetupdialog_done_callback = nullptr;
	}

// Callback setters
	inline void setQPageSetupDialog_SetVisible_Callback(QPageSetupDialog_SetVisible_Callback cb) const { qpagesetupdialog_setvisible_callback = cb; }
	inline void setQPageSetupDialog_Exec_Callback(QPageSetupDialog_Exec_Callback cb) const { qpagesetupdialog_exec_callback = cb; }
	inline void setQPageSetupDialog_Done_Callback(QPageSetupDialog_Done_Callback cb) const { qpagesetupdialog_done_callback = cb; }

// Base flag setters
	inline void setQPageSetupDialog_SetVisible_IsBase(bool value) const { qpagesetupdialog_setvisible_isbase = value; }
	inline void setQPageSetupDialog_Exec_IsBase(bool value) const { qpagesetupdialog_exec_isbase = value; }
	inline void setQPageSetupDialog_Done_IsBase(bool value) const { qpagesetupdialog_done_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qpagesetupdialog_setvisible_isbase) {
			qpagesetupdialog_setvisible_isbase = false;
			QPageSetupDialog::setVisible(visible);
		} else if (qpagesetupdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qpagesetupdialog_setvisible_callback(this, cbval1);
		} else {
			QPageSetupDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int exec() override {
		if (qpagesetupdialog_exec_isbase) {
			qpagesetupdialog_exec_isbase = false;
			return QPageSetupDialog::exec();
		} else if (qpagesetupdialog_exec_callback != nullptr) {
			int callback_ret = qpagesetupdialog_exec_callback();
			return callback_ret;
		} else {
			return QPageSetupDialog::exec();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qpagesetupdialog_done_isbase) {
			qpagesetupdialog_done_isbase = false;
			QPageSetupDialog::done(result);
		} else if (qpagesetupdialog_done_callback != nullptr) {
			int cbval1 = result;
			qpagesetupdialog_done_callback(this, cbval1);
		} else {
			QPageSetupDialog::done(result);
		}
	}
};

#endif


