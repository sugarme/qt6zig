#pragma once
#ifndef QPRINTPREVIEWDIALOG_H_C_LIBVIRTUAL
#define QPRINTPREVIEWDIALOG_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPrintPreviewDialog so that we can call protected methods
class VirtualQPrintPreviewDialog final : public QPrintPreviewDialog {

public:
	// Virtual class boolean flag
	bool isVirtualQPrintPreviewDialog= true;

	// Virtual class public types (including callbacks)
	using QPrintPreviewDialog_SetVisible_Callback = void (*)(QPrintPreviewDialog*, bool);
	using QPrintPreviewDialog_Done_Callback = void (*)(QPrintPreviewDialog*, int);

protected:
	// Instance callback storage
	mutable QPrintPreviewDialog_SetVisible_Callback qprintpreviewdialog_setvisible_callback = nullptr;
	mutable QPrintPreviewDialog_Done_Callback qprintpreviewdialog_done_callback = nullptr;

	// Instance base flags
    mutable bool qprintpreviewdialog_setvisible_isbase = false;
    mutable bool qprintpreviewdialog_done_isbase = false;

public:
	VirtualQPrintPreviewDialog(QWidget* parent): QPrintPreviewDialog(parent) {};
	VirtualQPrintPreviewDialog(): QPrintPreviewDialog() {};
	VirtualQPrintPreviewDialog(QPrinter* printer): QPrintPreviewDialog(printer) {};
	VirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(parent, flags) {};
	VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent): QPrintPreviewDialog(printer, parent) {};
	VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(printer, parent, flags) {};

	~VirtualQPrintPreviewDialog() {
		qprintpreviewdialog_setvisible_callback = nullptr;
		qprintpreviewdialog_done_callback = nullptr;
	}

// Callback setters
	inline void setQPrintPreviewDialog_SetVisible_Callback(QPrintPreviewDialog_SetVisible_Callback cb) const { qprintpreviewdialog_setvisible_callback = cb; }
	inline void setQPrintPreviewDialog_Done_Callback(QPrintPreviewDialog_Done_Callback cb) const { qprintpreviewdialog_done_callback = cb; }

// Base flag setters
	inline void setQPrintPreviewDialog_SetVisible_IsBase(bool value) const { qprintpreviewdialog_setvisible_isbase = value; }
	inline void setQPrintPreviewDialog_Done_IsBase(bool value) const { qprintpreviewdialog_done_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qprintpreviewdialog_setvisible_isbase) {
			qprintpreviewdialog_setvisible_isbase = false;
			QPrintPreviewDialog::setVisible(visible);
		} else if (qprintpreviewdialog_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qprintpreviewdialog_setvisible_callback(this, cbval1);
		} else {
			QPrintPreviewDialog::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qprintpreviewdialog_done_isbase) {
			qprintpreviewdialog_done_isbase = false;
			QPrintPreviewDialog::done(result);
		} else if (qprintpreviewdialog_done_callback != nullptr) {
			int cbval1 = result;
			qprintpreviewdialog_done_callback(this, cbval1);
		} else {
			QPrintPreviewDialog::done(result);
		}
	}
};

#endif


