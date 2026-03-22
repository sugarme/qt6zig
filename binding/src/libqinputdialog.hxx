#pragma once
#ifndef QINPUTDIALOG_H_C_LIBVIRTUAL
#define QINPUTDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QInputDialog so that we can call protected methods
class VirtualQInputDialog final : public QInputDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQInputDialog= true;

	// Virtual class public types (including callbacks)
	using QInputDialog_MinimumSizeHint_Callback = QSize* (*)();
	using QInputDialog_SizeHint_Callback = QSize* (*)();
	using QInputDialog_SetVisible_Callback = void (*)(QInputDialog*, bool);
	using QInputDialog_Done_Callback = void (*)(QInputDialog*, int);

protected:
	// Instance callback storage
	mutable QInputDialog_MinimumSizeHint_Callback qinputdialog_minimumsizehint_callback = nullptr;
	mutable QInputDialog_SizeHint_Callback qinputdialog_sizehint_callback = nullptr;
	mutable QInputDialog_SetVisible_Callback qinputdialog_setvisible_callback = nullptr;
	mutable QInputDialog_Done_Callback qinputdialog_done_callback = nullptr;

	// Instance base flags
    mutable bool qinputdialog_minimumsizehint_isbase = false;
    mutable bool qinputdialog_sizehint_isbase = false;
    mutable bool qinputdialog_setvisible_isbase = false;
    mutable bool qinputdialog_done_isbase = false;

public:
	VirtualQInputDialog(QWidget* parent): QInputDialog(parent) {};
	VirtualQInputDialog(): QInputDialog() {};
	VirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags): QInputDialog(parent, flags) {};

	~VirtualQInputDialog() {
		qinputdialog_minimumsizehint_callback = nullptr;
		qinputdialog_sizehint_callback = nullptr;
		qinputdialog_setvisible_callback = nullptr;
		qinputdialog_done_callback = nullptr;
	}

// Callback setters
	inline void setQInputDialog_MinimumSizeHint_Callback(QInputDialog_MinimumSizeHint_Callback cb) const { qinputdialog_minimumsizehint_callback = cb; }
	inline void setQInputDialog_SizeHint_Callback(QInputDialog_SizeHint_Callback cb) const { qinputdialog_sizehint_callback = cb; }
	inline void setQInputDialog_SetVisible_Callback(QInputDialog_SetVisible_Callback cb) const { qinputdialog_setvisible_callback = cb; }
	inline void setQInputDialog_Done_Callback(QInputDialog_Done_Callback cb) const { qinputdialog_done_callback = cb; }

// Base flag setters
	inline void setQInputDialog_MinimumSizeHint_IsBase(bool value) const { qinputdialog_minimumsizehint_isbase = value; }
	inline void setQInputDialog_SizeHint_IsBase(bool value) const { qinputdialog_sizehint_isbase = value; }
	inline void setQInputDialog_SetVisible_IsBase(bool value) const { qinputdialog_setvisible_isbase = value; }
	inline void setQInputDialog_Done_IsBase(bool value) const { qinputdialog_done_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qinputdialog_minimumsizehint_isbase) {
			qinputdialog_minimumsizehint_isbase = false;
			return QInputDialog::minimumSizeHint();
		} else if (qinputdialog_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qinputdialog_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QInputDialog::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qinputdialog_sizehint_isbase) {
			qinputdialog_sizehint_isbase = false;
			return QInputDialog::sizeHint();
		} else if (qinputdialog_sizehint_callback != nullptr) {
			QSize* callback_ret = qinputdialog_sizehint_callback();
			return *callback_ret;
		} else {
			return QInputDialog::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qinputdialog_setvisible_isbase) {
			qinputdialog_setvisible_isbase = false;
			QInputDialog::setVisible(visible);
		} else if (qinputdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qinputdialog_setvisible_callback(this, cbval1);
		} else {
			QInputDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qinputdialog_done_isbase) {
			qinputdialog_done_isbase = false;
			QInputDialog::done(result);
		} else if (qinputdialog_done_callback != nullptr) {
			int cbval1 = result;
			qinputdialog_done_callback(this, cbval1);
		} else {
			QInputDialog::done(result);
		}
	}
};

#endif


