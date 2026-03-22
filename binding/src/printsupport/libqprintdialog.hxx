#pragma once
#ifndef QPRINTDIALOG_H_C_LIBVIRTUAL
#define QPRINTDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPrintDialog so that we can call protected methods
class VirtualQPrintDialog final : public QPrintDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQPrintDialog= true;

	// Virtual class public types (including callbacks)
	using QPrintDialog_Exec_Callback = int (*)();
	using QPrintDialog_Done_Callback = void (*)(QPrintDialog*, int);
	using QPrintDialog_SetVisible_Callback = void (*)(QPrintDialog*, bool);

protected:
	// Instance callback storage
	mutable QPrintDialog_Exec_Callback qprintdialog_exec_callback = nullptr;
	mutable QPrintDialog_Done_Callback qprintdialog_done_callback = nullptr;
	mutable QPrintDialog_SetVisible_Callback qprintdialog_setvisible_callback = nullptr;

	// Instance base flags
    mutable bool qprintdialog_exec_isbase = false;
    mutable bool qprintdialog_done_isbase = false;
    mutable bool qprintdialog_setvisible_isbase = false;

public:
	VirtualQPrintDialog(QWidget* parent): QPrintDialog(parent) {};
	VirtualQPrintDialog(QPrinter* printer): QPrintDialog(printer) {};
	VirtualQPrintDialog(): QPrintDialog() {};
	VirtualQPrintDialog(QPrinter* printer, QWidget* parent): QPrintDialog(printer, parent) {};

	~VirtualQPrintDialog() {
		qprintdialog_exec_callback = nullptr;
		qprintdialog_done_callback = nullptr;
		qprintdialog_setvisible_callback = nullptr;
	}

// Callback setters
	inline void setQPrintDialog_Exec_Callback(QPrintDialog_Exec_Callback cb) const { qprintdialog_exec_callback = cb; }
	inline void setQPrintDialog_Done_Callback(QPrintDialog_Done_Callback cb) const { qprintdialog_done_callback = cb; }
	inline void setQPrintDialog_SetVisible_Callback(QPrintDialog_SetVisible_Callback cb) const { qprintdialog_setvisible_callback = cb; }

// Base flag setters
	inline void setQPrintDialog_Exec_IsBase(bool value) const { qprintdialog_exec_isbase = value; }
	inline void setQPrintDialog_Done_IsBase(bool value) const { qprintdialog_done_isbase = value; }
	inline void setQPrintDialog_SetVisible_IsBase(bool value) const { qprintdialog_setvisible_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int exec() override {
		if (qprintdialog_exec_isbase) {
			qprintdialog_exec_isbase = false;
			return QPrintDialog::exec();
		} else if (qprintdialog_exec_callback != nullptr) {
			int callback_ret = qprintdialog_exec_callback();
			return callback_ret;
		} else {
			return QPrintDialog::exec();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qprintdialog_done_isbase) {
			qprintdialog_done_isbase = false;
			QPrintDialog::done(result);
		} else if (qprintdialog_done_callback != nullptr) {
			int cbval1 = result;
			qprintdialog_done_callback(this, cbval1);
		} else {
			QPrintDialog::done(result);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qprintdialog_setvisible_isbase) {
			qprintdialog_setvisible_isbase = false;
			QPrintDialog::setVisible(visible);
		} else if (qprintdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qprintdialog_setvisible_callback(this, cbval1);
		} else {
			QPrintDialog::setVisible(visible);
		}
	}
};

#endif


