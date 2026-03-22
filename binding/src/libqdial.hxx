#pragma once
#ifndef QDIAL_H_C_LIBVIRTUAL
#define QDIAL_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDial so that we can call protected methods
class VirtualQDial final : public QDial {

public:
	// Virtual class boolean flag
	bool isVirtualQDial= true;

	// Virtual class public types (including callbacks)
	using QDial_SizeHint_Callback = QSize* (*)();
	using QDial_MinimumSizeHint_Callback = QSize* (*)();
	using QDial_Event_Callback = bool (*)(QDial*, QEvent*);
	using QDial_ResizeEvent_Callback = void (*)(QDial*, QResizeEvent*);
	using QDial_PaintEvent_Callback = void (*)(QDial*, QPaintEvent*);
	using QDial_MousePressEvent_Callback = void (*)(QDial*, QMouseEvent*);
	using QDial_MouseReleaseEvent_Callback = void (*)(QDial*, QMouseEvent*);
	using QDial_MouseMoveEvent_Callback = void (*)(QDial*, QMouseEvent*);
	using QDial_SliderChange_Callback = void (*)(QDial*, int);
	using QDial_InitStyleOption_Callback = void (*)(const QDial*, QStyleOptionSlider*);

protected:
	// Instance callback storage
	mutable QDial_SizeHint_Callback qdial_sizehint_callback = nullptr;
	mutable QDial_MinimumSizeHint_Callback qdial_minimumsizehint_callback = nullptr;
	mutable QDial_Event_Callback qdial_event_callback = nullptr;
	mutable QDial_ResizeEvent_Callback qdial_resizeevent_callback = nullptr;
	mutable QDial_PaintEvent_Callback qdial_paintevent_callback = nullptr;
	mutable QDial_MousePressEvent_Callback qdial_mousepressevent_callback = nullptr;
	mutable QDial_MouseReleaseEvent_Callback qdial_mousereleaseevent_callback = nullptr;
	mutable QDial_MouseMoveEvent_Callback qdial_mousemoveevent_callback = nullptr;
	mutable QDial_SliderChange_Callback qdial_sliderchange_callback = nullptr;
	mutable QDial_InitStyleOption_Callback qdial_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qdial_sizehint_isbase = false;
    mutable bool qdial_minimumsizehint_isbase = false;
    mutable bool qdial_event_isbase = false;
    mutable bool qdial_resizeevent_isbase = false;
    mutable bool qdial_paintevent_isbase = false;
    mutable bool qdial_mousepressevent_isbase = false;
    mutable bool qdial_mousereleaseevent_isbase = false;
    mutable bool qdial_mousemoveevent_isbase = false;
    mutable bool qdial_sliderchange_isbase = false;
    mutable bool qdial_initstyleoption_isbase = false;

public:
	VirtualQDial(QWidget* parent): QDial(parent) {};
	VirtualQDial(): QDial() {};

	~VirtualQDial() {
		qdial_sizehint_callback = nullptr;
		qdial_minimumsizehint_callback = nullptr;
		qdial_event_callback = nullptr;
		qdial_resizeevent_callback = nullptr;
		qdial_paintevent_callback = nullptr;
		qdial_mousepressevent_callback = nullptr;
		qdial_mousereleaseevent_callback = nullptr;
		qdial_mousemoveevent_callback = nullptr;
		qdial_sliderchange_callback = nullptr;
		qdial_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQDial_SizeHint_Callback(QDial_SizeHint_Callback cb) const { qdial_sizehint_callback = cb; }
	inline void setQDial_MinimumSizeHint_Callback(QDial_MinimumSizeHint_Callback cb) const { qdial_minimumsizehint_callback = cb; }
	inline void setQDial_Event_Callback(QDial_Event_Callback cb) const { qdial_event_callback = cb; }
	inline void setQDial_ResizeEvent_Callback(QDial_ResizeEvent_Callback cb) const { qdial_resizeevent_callback = cb; }
	inline void setQDial_PaintEvent_Callback(QDial_PaintEvent_Callback cb) const { qdial_paintevent_callback = cb; }
	inline void setQDial_MousePressEvent_Callback(QDial_MousePressEvent_Callback cb) const { qdial_mousepressevent_callback = cb; }
	inline void setQDial_MouseReleaseEvent_Callback(QDial_MouseReleaseEvent_Callback cb) const { qdial_mousereleaseevent_callback = cb; }
	inline void setQDial_MouseMoveEvent_Callback(QDial_MouseMoveEvent_Callback cb) const { qdial_mousemoveevent_callback = cb; }
	inline void setQDial_SliderChange_Callback(QDial_SliderChange_Callback cb) const { qdial_sliderchange_callback = cb; }
	inline void setQDial_InitStyleOption_Callback(QDial_InitStyleOption_Callback cb) const { qdial_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQDial_SizeHint_IsBase(bool value) const { qdial_sizehint_isbase = value; }
	inline void setQDial_MinimumSizeHint_IsBase(bool value) const { qdial_minimumsizehint_isbase = value; }
	inline void setQDial_Event_IsBase(bool value) const { qdial_event_isbase = value; }
	inline void setQDial_ResizeEvent_IsBase(bool value) const { qdial_resizeevent_isbase = value; }
	inline void setQDial_PaintEvent_IsBase(bool value) const { qdial_paintevent_isbase = value; }
	inline void setQDial_MousePressEvent_IsBase(bool value) const { qdial_mousepressevent_isbase = value; }
	inline void setQDial_MouseReleaseEvent_IsBase(bool value) const { qdial_mousereleaseevent_isbase = value; }
	inline void setQDial_MouseMoveEvent_IsBase(bool value) const { qdial_mousemoveevent_isbase = value; }
	inline void setQDial_SliderChange_IsBase(bool value) const { qdial_sliderchange_isbase = value; }
	inline void setQDial_InitStyleOption_IsBase(bool value) const { qdial_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qdial_sizehint_isbase) {
			qdial_sizehint_isbase = false;
			return QDial::sizeHint();
		} else if (qdial_sizehint_callback != nullptr) {
			QSize* callback_ret = qdial_sizehint_callback();
			return *callback_ret;
		} else {
			return QDial::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qdial_minimumsizehint_isbase) {
			qdial_minimumsizehint_isbase = false;
			return QDial::minimumSizeHint();
		} else if (qdial_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qdial_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QDial::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qdial_event_isbase) {
			qdial_event_isbase = false;
			return QDial::event(e);
		} else if (qdial_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qdial_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDial::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* re) override {
		if (qdial_resizeevent_isbase) {
			qdial_resizeevent_isbase = false;
			QDial::resizeEvent(re);
		} else if (qdial_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = re;
			qdial_resizeevent_callback(this, cbval1);
		} else {
			QDial::resizeEvent(re);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* pe) override {
		if (qdial_paintevent_isbase) {
			qdial_paintevent_isbase = false;
			QDial::paintEvent(pe);
		} else if (qdial_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = pe;
			qdial_paintevent_callback(this, cbval1);
		} else {
			QDial::paintEvent(pe);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* me) override {
		if (qdial_mousepressevent_isbase) {
			qdial_mousepressevent_isbase = false;
			QDial::mousePressEvent(me);
		} else if (qdial_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = me;
			qdial_mousepressevent_callback(this, cbval1);
		} else {
			QDial::mousePressEvent(me);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* me) override {
		if (qdial_mousereleaseevent_isbase) {
			qdial_mousereleaseevent_isbase = false;
			QDial::mouseReleaseEvent(me);
		} else if (qdial_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = me;
			qdial_mousereleaseevent_callback(this, cbval1);
		} else {
			QDial::mouseReleaseEvent(me);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* me) override {
		if (qdial_mousemoveevent_isbase) {
			qdial_mousemoveevent_isbase = false;
			QDial::mouseMoveEvent(me);
		} else if (qdial_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = me;
			qdial_mousemoveevent_callback(this, cbval1);
		} else {
			QDial::mouseMoveEvent(me);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sliderChange(SliderChange change) override {
		if (qdial_sliderchange_isbase) {
			qdial_sliderchange_isbase = false;
			QDial::sliderChange(change);
		} else if (qdial_sliderchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			qdial_sliderchange_callback(this, cbval1);
		} else {
			QDial::sliderChange(change);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (qdial_initstyleoption_isbase) {
			qdial_initstyleoption_isbase = false;
			QDial::initStyleOption(option);
		} else if (qdial_initstyleoption_callback != nullptr) {
			QStyleOptionSlider* cbval1 = option;
			qdial_initstyleoption_callback(this, cbval1);
		} else {
			QDial::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QDial_Event(QDial* self, QEvent* e);
	friend bool QDial_QBaseEvent(QDial* self, QEvent* e);
	friend void QDial_ResizeEvent(QDial* self, QResizeEvent* re);
	friend void QDial_QBaseResizeEvent(QDial* self, QResizeEvent* re);
	friend void QDial_PaintEvent(QDial* self, QPaintEvent* pe);
	friend void QDial_QBasePaintEvent(QDial* self, QPaintEvent* pe);
	friend void QDial_MousePressEvent(QDial* self, QMouseEvent* me);
	friend void QDial_QBaseMousePressEvent(QDial* self, QMouseEvent* me);
	friend void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me);
	friend void QDial_QBaseMouseReleaseEvent(QDial* self, QMouseEvent* me);
	friend void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me);
	friend void QDial_QBaseMouseMoveEvent(QDial* self, QMouseEvent* me);
	friend void QDial_SliderChange(QDial* self, int change);
	friend void QDial_QBaseSliderChange(QDial* self, int change);
	friend void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option);
	friend void QDial_QBaseInitStyleOption(const QDial* self, QStyleOptionSlider* option);
};

#endif


