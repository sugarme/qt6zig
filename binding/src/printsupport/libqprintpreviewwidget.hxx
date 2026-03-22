#pragma once
#ifndef QPRINTPREVIEWWIDGET_H_C_LIBVIRTUAL
#define QPRINTPREVIEWWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QPrintPreviewWidget so that we can call protected methods
class VirtualQPrintPreviewWidget final : public QPrintPreviewWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQPrintPreviewWidget= true;

	// Virtual class public types (including callbacks)
	using QPrintPreviewWidget_SetVisible_Callback = void (*)(QPrintPreviewWidget*, bool);

protected:
	// Instance callback storage
	mutable QPrintPreviewWidget_SetVisible_Callback qprintpreviewwidget_setvisible_callback = nullptr;

	// Instance base flags
    mutable bool qprintpreviewwidget_setvisible_isbase = false;

public:
	VirtualQPrintPreviewWidget(QWidget* parent): QPrintPreviewWidget(parent) {};
	VirtualQPrintPreviewWidget(QPrinter* printer): QPrintPreviewWidget(printer) {};
	VirtualQPrintPreviewWidget(): QPrintPreviewWidget() {};
	VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent): QPrintPreviewWidget(printer, parent) {};
	VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(printer, parent, flags) {};
	VirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(parent, flags) {};

	~VirtualQPrintPreviewWidget() {
		qprintpreviewwidget_setvisible_callback = nullptr;
	}

// Callback setters
	inline void setQPrintPreviewWidget_SetVisible_Callback(QPrintPreviewWidget_SetVisible_Callback cb) const { qprintpreviewwidget_setvisible_callback = cb; }

// Base flag setters
	inline void setQPrintPreviewWidget_SetVisible_IsBase(bool value) const { qprintpreviewwidget_setvisible_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qprintpreviewwidget_setvisible_isbase) {
			qprintpreviewwidget_setvisible_isbase = false;
			QPrintPreviewWidget::setVisible(visible);
		} else if (qprintpreviewwidget_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qprintpreviewwidget_setvisible_callback(this, cbval1);
		} else {
			QPrintPreviewWidget::setVisible(visible);
		}
	}
};

#endif


