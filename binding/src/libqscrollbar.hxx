#pragma once
#ifndef QSCROLLBAR_H_C_LIBVIRTUAL
#define QSCROLLBAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QScrollBar so that we can call protected methods
class VirtualQScrollBar final : public QScrollBar {

public:
	// Virtual class boolean flag
	bool isVirtualQScrollBar= true;

	// Virtual class public types (including callbacks)
	using QScrollBar_SizeHint_Callback = QSize* (*)();
	using QScrollBar_Event_Callback = bool (*)(QScrollBar*, QEvent*);
	using QScrollBar_WheelEvent_Callback = void (*)(QScrollBar*, QWheelEvent*);
	using QScrollBar_PaintEvent_Callback = void (*)(QScrollBar*, QPaintEvent*);
	using QScrollBar_MousePressEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
	using QScrollBar_MouseReleaseEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
	using QScrollBar_MouseMoveEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
	using QScrollBar_HideEvent_Callback = void (*)(QScrollBar*, QHideEvent*);
	using QScrollBar_SliderChange_Callback = void (*)(QScrollBar*, int);
	using QScrollBar_ContextMenuEvent_Callback = void (*)(QScrollBar*, QContextMenuEvent*);
	using QScrollBar_InitStyleOption_Callback = void (*)(const QScrollBar*, QStyleOptionSlider*);

protected:
	// Instance callback storage
	mutable QScrollBar_SizeHint_Callback qscrollbar_sizehint_callback = nullptr;
	mutable QScrollBar_Event_Callback qscrollbar_event_callback = nullptr;
	mutable QScrollBar_WheelEvent_Callback qscrollbar_wheelevent_callback = nullptr;
	mutable QScrollBar_PaintEvent_Callback qscrollbar_paintevent_callback = nullptr;
	mutable QScrollBar_MousePressEvent_Callback qscrollbar_mousepressevent_callback = nullptr;
	mutable QScrollBar_MouseReleaseEvent_Callback qscrollbar_mousereleaseevent_callback = nullptr;
	mutable QScrollBar_MouseMoveEvent_Callback qscrollbar_mousemoveevent_callback = nullptr;
	mutable QScrollBar_HideEvent_Callback qscrollbar_hideevent_callback = nullptr;
	mutable QScrollBar_SliderChange_Callback qscrollbar_sliderchange_callback = nullptr;
	mutable QScrollBar_ContextMenuEvent_Callback qscrollbar_contextmenuevent_callback = nullptr;
	mutable QScrollBar_InitStyleOption_Callback qscrollbar_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qscrollbar_sizehint_isbase = false;
    mutable bool qscrollbar_event_isbase = false;
    mutable bool qscrollbar_wheelevent_isbase = false;
    mutable bool qscrollbar_paintevent_isbase = false;
    mutable bool qscrollbar_mousepressevent_isbase = false;
    mutable bool qscrollbar_mousereleaseevent_isbase = false;
    mutable bool qscrollbar_mousemoveevent_isbase = false;
    mutable bool qscrollbar_hideevent_isbase = false;
    mutable bool qscrollbar_sliderchange_isbase = false;
    mutable bool qscrollbar_contextmenuevent_isbase = false;
    mutable bool qscrollbar_initstyleoption_isbase = false;

public:
	VirtualQScrollBar(QWidget* parent): QScrollBar(parent) {};
	VirtualQScrollBar(): QScrollBar() {};
	VirtualQScrollBar(Qt::Orientation param1): QScrollBar(param1) {};
	VirtualQScrollBar(Qt::Orientation param1, QWidget* parent): QScrollBar(param1, parent) {};

	~VirtualQScrollBar() {
		qscrollbar_sizehint_callback = nullptr;
		qscrollbar_event_callback = nullptr;
		qscrollbar_wheelevent_callback = nullptr;
		qscrollbar_paintevent_callback = nullptr;
		qscrollbar_mousepressevent_callback = nullptr;
		qscrollbar_mousereleaseevent_callback = nullptr;
		qscrollbar_mousemoveevent_callback = nullptr;
		qscrollbar_hideevent_callback = nullptr;
		qscrollbar_sliderchange_callback = nullptr;
		qscrollbar_contextmenuevent_callback = nullptr;
		qscrollbar_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQScrollBar_SizeHint_Callback(QScrollBar_SizeHint_Callback cb) const { qscrollbar_sizehint_callback = cb; }
	inline void setQScrollBar_Event_Callback(QScrollBar_Event_Callback cb) const { qscrollbar_event_callback = cb; }
	inline void setQScrollBar_WheelEvent_Callback(QScrollBar_WheelEvent_Callback cb) const { qscrollbar_wheelevent_callback = cb; }
	inline void setQScrollBar_PaintEvent_Callback(QScrollBar_PaintEvent_Callback cb) const { qscrollbar_paintevent_callback = cb; }
	inline void setQScrollBar_MousePressEvent_Callback(QScrollBar_MousePressEvent_Callback cb) const { qscrollbar_mousepressevent_callback = cb; }
	inline void setQScrollBar_MouseReleaseEvent_Callback(QScrollBar_MouseReleaseEvent_Callback cb) const { qscrollbar_mousereleaseevent_callback = cb; }
	inline void setQScrollBar_MouseMoveEvent_Callback(QScrollBar_MouseMoveEvent_Callback cb) const { qscrollbar_mousemoveevent_callback = cb; }
	inline void setQScrollBar_HideEvent_Callback(QScrollBar_HideEvent_Callback cb) const { qscrollbar_hideevent_callback = cb; }
	inline void setQScrollBar_SliderChange_Callback(QScrollBar_SliderChange_Callback cb) const { qscrollbar_sliderchange_callback = cb; }
	inline void setQScrollBar_ContextMenuEvent_Callback(QScrollBar_ContextMenuEvent_Callback cb) const { qscrollbar_contextmenuevent_callback = cb; }
	inline void setQScrollBar_InitStyleOption_Callback(QScrollBar_InitStyleOption_Callback cb) const { qscrollbar_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQScrollBar_SizeHint_IsBase(bool value) const { qscrollbar_sizehint_isbase = value; }
	inline void setQScrollBar_Event_IsBase(bool value) const { qscrollbar_event_isbase = value; }
	inline void setQScrollBar_WheelEvent_IsBase(bool value) const { qscrollbar_wheelevent_isbase = value; }
	inline void setQScrollBar_PaintEvent_IsBase(bool value) const { qscrollbar_paintevent_isbase = value; }
	inline void setQScrollBar_MousePressEvent_IsBase(bool value) const { qscrollbar_mousepressevent_isbase = value; }
	inline void setQScrollBar_MouseReleaseEvent_IsBase(bool value) const { qscrollbar_mousereleaseevent_isbase = value; }
	inline void setQScrollBar_MouseMoveEvent_IsBase(bool value) const { qscrollbar_mousemoveevent_isbase = value; }
	inline void setQScrollBar_HideEvent_IsBase(bool value) const { qscrollbar_hideevent_isbase = value; }
	inline void setQScrollBar_SliderChange_IsBase(bool value) const { qscrollbar_sliderchange_isbase = value; }
	inline void setQScrollBar_ContextMenuEvent_IsBase(bool value) const { qscrollbar_contextmenuevent_isbase = value; }
	inline void setQScrollBar_InitStyleOption_IsBase(bool value) const { qscrollbar_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qscrollbar_sizehint_isbase) {
			qscrollbar_sizehint_isbase = false;
			return QScrollBar::sizeHint();
		} else if (qscrollbar_sizehint_callback != nullptr) {
			QSize* callback_ret = qscrollbar_sizehint_callback();
			return *callback_ret;
		} else {
			return QScrollBar::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qscrollbar_event_isbase) {
			qscrollbar_event_isbase = false;
			return QScrollBar::event(event);
		} else if (qscrollbar_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qscrollbar_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QScrollBar::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (qscrollbar_wheelevent_isbase) {
			qscrollbar_wheelevent_isbase = false;
			QScrollBar::wheelEvent(param1);
		} else if (qscrollbar_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = param1;
			qscrollbar_wheelevent_callback(this, cbval1);
		} else {
			QScrollBar::wheelEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qscrollbar_paintevent_isbase) {
			qscrollbar_paintevent_isbase = false;
			QScrollBar::paintEvent(param1);
		} else if (qscrollbar_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qscrollbar_paintevent_callback(this, cbval1);
		} else {
			QScrollBar::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qscrollbar_mousepressevent_isbase) {
			qscrollbar_mousepressevent_isbase = false;
			QScrollBar::mousePressEvent(param1);
		} else if (qscrollbar_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qscrollbar_mousepressevent_callback(this, cbval1);
		} else {
			QScrollBar::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qscrollbar_mousereleaseevent_isbase) {
			qscrollbar_mousereleaseevent_isbase = false;
			QScrollBar::mouseReleaseEvent(param1);
		} else if (qscrollbar_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qscrollbar_mousereleaseevent_callback(this, cbval1);
		} else {
			QScrollBar::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qscrollbar_mousemoveevent_isbase) {
			qscrollbar_mousemoveevent_isbase = false;
			QScrollBar::mouseMoveEvent(param1);
		} else if (qscrollbar_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qscrollbar_mousemoveevent_callback(this, cbval1);
		} else {
			QScrollBar::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* param1) override {
		if (qscrollbar_hideevent_isbase) {
			qscrollbar_hideevent_isbase = false;
			QScrollBar::hideEvent(param1);
		} else if (qscrollbar_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = param1;
			qscrollbar_hideevent_callback(this, cbval1);
		} else {
			QScrollBar::hideEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sliderChange(SliderChange change) override {
		if (qscrollbar_sliderchange_isbase) {
			qscrollbar_sliderchange_isbase = false;
			QScrollBar::sliderChange(change);
		} else if (qscrollbar_sliderchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			qscrollbar_sliderchange_callback(this, cbval1);
		} else {
			QScrollBar::sliderChange(change);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (qscrollbar_contextmenuevent_isbase) {
			qscrollbar_contextmenuevent_isbase = false;
			QScrollBar::contextMenuEvent(param1);
		} else if (qscrollbar_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = param1;
			qscrollbar_contextmenuevent_callback(this, cbval1);
		} else {
			QScrollBar::contextMenuEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (qscrollbar_initstyleoption_isbase) {
			qscrollbar_initstyleoption_isbase = false;
			QScrollBar::initStyleOption(option);
		} else if (qscrollbar_initstyleoption_callback != nullptr) {
			QStyleOptionSlider* cbval1 = option;
			qscrollbar_initstyleoption_callback(this, cbval1);
		} else {
			QScrollBar::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
	friend void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1);
	friend void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
	friend void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1);
	friend void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
	friend void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
	friend void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1);
	friend void QScrollBar_SliderChange(QScrollBar* self, int change);
	friend void QScrollBar_QBaseSliderChange(QScrollBar* self, int change);
	friend void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
	friend void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
	friend void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
	friend void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
};

#endif


