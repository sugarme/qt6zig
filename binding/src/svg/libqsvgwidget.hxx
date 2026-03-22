#pragma once
#ifndef QSVGWIDGET_H_C_LIBVIRTUAL
#define QSVGWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QSvgWidget so that we can call protected methods
class VirtualQSvgWidget final : public QSvgWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQSvgWidget= true;

	// Virtual class public types (including callbacks)
	using QSvgWidget_SizeHint_Callback = QSize* (*)();
	using QSvgWidget_PaintEvent_Callback = void (*)(QSvgWidget*, QPaintEvent*);

protected:
	// Instance callback storage
	mutable QSvgWidget_SizeHint_Callback qsvgwidget_sizehint_callback = nullptr;
	mutable QSvgWidget_PaintEvent_Callback qsvgwidget_paintevent_callback = nullptr;

	// Instance base flags
    mutable bool qsvgwidget_sizehint_isbase = false;
    mutable bool qsvgwidget_paintevent_isbase = false;

public:
	VirtualQSvgWidget(QWidget* parent): QSvgWidget(parent) {};
	VirtualQSvgWidget(): QSvgWidget() {};
	VirtualQSvgWidget(const QString& file): QSvgWidget(file) {};
	VirtualQSvgWidget(const QString& file, QWidget* parent): QSvgWidget(file, parent) {};

	~VirtualQSvgWidget() {
		qsvgwidget_sizehint_callback = nullptr;
		qsvgwidget_paintevent_callback = nullptr;
	}

// Callback setters
	inline void setQSvgWidget_SizeHint_Callback(QSvgWidget_SizeHint_Callback cb) const { qsvgwidget_sizehint_callback = cb; }
	inline void setQSvgWidget_PaintEvent_Callback(QSvgWidget_PaintEvent_Callback cb) const { qsvgwidget_paintevent_callback = cb; }

// Base flag setters
	inline void setQSvgWidget_SizeHint_IsBase(bool value) const { qsvgwidget_sizehint_isbase = value; }
	inline void setQSvgWidget_PaintEvent_IsBase(bool value) const { qsvgwidget_paintevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qsvgwidget_sizehint_isbase) {
			qsvgwidget_sizehint_isbase = false;
			return QSvgWidget::sizeHint();
		} else if (qsvgwidget_sizehint_callback != nullptr) {
			QSize* callback_ret = qsvgwidget_sizehint_callback();
			return *callback_ret;
		} else {
			return QSvgWidget::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qsvgwidget_paintevent_isbase) {
			qsvgwidget_paintevent_isbase = false;
			QSvgWidget::paintEvent(event);
		} else if (qsvgwidget_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qsvgwidget_paintevent_callback(this, cbval1);
		} else {
			QSvgWidget::paintEvent(event);
		}
	}

	// Friend functions
	friend void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event);
	friend void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event);
};

#endif


