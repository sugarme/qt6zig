#pragma once
#ifndef QGROUPBOX_H_C_LIBVIRTUAL
#define QGROUPBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGroupBox so that we can call protected methods
class VirtualQGroupBox final : public QGroupBox {

public:
	// Virtual class boolean flag
	bool isVirtualQGroupBox= true;

	// Virtual class public types (including callbacks)
	using QGroupBox_MinimumSizeHint_Callback = QSize* (*)();
	using QGroupBox_Event_Callback = bool (*)(QGroupBox*, QEvent*);
	using QGroupBox_ChildEvent_Callback = void (*)(QGroupBox*, QChildEvent*);
	using QGroupBox_ResizeEvent_Callback = void (*)(QGroupBox*, QResizeEvent*);
	using QGroupBox_PaintEvent_Callback = void (*)(QGroupBox*, QPaintEvent*);
	using QGroupBox_FocusInEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
	using QGroupBox_ChangeEvent_Callback = void (*)(QGroupBox*, QEvent*);
	using QGroupBox_MousePressEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
	using QGroupBox_MouseMoveEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
	using QGroupBox_MouseReleaseEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
	using QGroupBox_InitStyleOption_Callback = void (*)(const QGroupBox*, QStyleOptionGroupBox*);

protected:
	// Instance callback storage
	mutable QGroupBox_MinimumSizeHint_Callback qgroupbox_minimumsizehint_callback = nullptr;
	mutable QGroupBox_Event_Callback qgroupbox_event_callback = nullptr;
	mutable QGroupBox_ChildEvent_Callback qgroupbox_childevent_callback = nullptr;
	mutable QGroupBox_ResizeEvent_Callback qgroupbox_resizeevent_callback = nullptr;
	mutable QGroupBox_PaintEvent_Callback qgroupbox_paintevent_callback = nullptr;
	mutable QGroupBox_FocusInEvent_Callback qgroupbox_focusinevent_callback = nullptr;
	mutable QGroupBox_ChangeEvent_Callback qgroupbox_changeevent_callback = nullptr;
	mutable QGroupBox_MousePressEvent_Callback qgroupbox_mousepressevent_callback = nullptr;
	mutable QGroupBox_MouseMoveEvent_Callback qgroupbox_mousemoveevent_callback = nullptr;
	mutable QGroupBox_MouseReleaseEvent_Callback qgroupbox_mousereleaseevent_callback = nullptr;
	mutable QGroupBox_InitStyleOption_Callback qgroupbox_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qgroupbox_minimumsizehint_isbase = false;
    mutable bool qgroupbox_event_isbase = false;
    mutable bool qgroupbox_childevent_isbase = false;
    mutable bool qgroupbox_resizeevent_isbase = false;
    mutable bool qgroupbox_paintevent_isbase = false;
    mutable bool qgroupbox_focusinevent_isbase = false;
    mutable bool qgroupbox_changeevent_isbase = false;
    mutable bool qgroupbox_mousepressevent_isbase = false;
    mutable bool qgroupbox_mousemoveevent_isbase = false;
    mutable bool qgroupbox_mousereleaseevent_isbase = false;
    mutable bool qgroupbox_initstyleoption_isbase = false;

public:
	VirtualQGroupBox(QWidget* parent): QGroupBox(parent) {};
	VirtualQGroupBox(): QGroupBox() {};
	VirtualQGroupBox(const QString& title): QGroupBox(title) {};
	VirtualQGroupBox(const QString& title, QWidget* parent): QGroupBox(title, parent) {};

	~VirtualQGroupBox() {
		qgroupbox_minimumsizehint_callback = nullptr;
		qgroupbox_event_callback = nullptr;
		qgroupbox_childevent_callback = nullptr;
		qgroupbox_resizeevent_callback = nullptr;
		qgroupbox_paintevent_callback = nullptr;
		qgroupbox_focusinevent_callback = nullptr;
		qgroupbox_changeevent_callback = nullptr;
		qgroupbox_mousepressevent_callback = nullptr;
		qgroupbox_mousemoveevent_callback = nullptr;
		qgroupbox_mousereleaseevent_callback = nullptr;
		qgroupbox_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQGroupBox_MinimumSizeHint_Callback(QGroupBox_MinimumSizeHint_Callback cb) const { qgroupbox_minimumsizehint_callback = cb; }
	inline void setQGroupBox_Event_Callback(QGroupBox_Event_Callback cb) const { qgroupbox_event_callback = cb; }
	inline void setQGroupBox_ChildEvent_Callback(QGroupBox_ChildEvent_Callback cb) const { qgroupbox_childevent_callback = cb; }
	inline void setQGroupBox_ResizeEvent_Callback(QGroupBox_ResizeEvent_Callback cb) const { qgroupbox_resizeevent_callback = cb; }
	inline void setQGroupBox_PaintEvent_Callback(QGroupBox_PaintEvent_Callback cb) const { qgroupbox_paintevent_callback = cb; }
	inline void setQGroupBox_FocusInEvent_Callback(QGroupBox_FocusInEvent_Callback cb) const { qgroupbox_focusinevent_callback = cb; }
	inline void setQGroupBox_ChangeEvent_Callback(QGroupBox_ChangeEvent_Callback cb) const { qgroupbox_changeevent_callback = cb; }
	inline void setQGroupBox_MousePressEvent_Callback(QGroupBox_MousePressEvent_Callback cb) const { qgroupbox_mousepressevent_callback = cb; }
	inline void setQGroupBox_MouseMoveEvent_Callback(QGroupBox_MouseMoveEvent_Callback cb) const { qgroupbox_mousemoveevent_callback = cb; }
	inline void setQGroupBox_MouseReleaseEvent_Callback(QGroupBox_MouseReleaseEvent_Callback cb) const { qgroupbox_mousereleaseevent_callback = cb; }
	inline void setQGroupBox_InitStyleOption_Callback(QGroupBox_InitStyleOption_Callback cb) const { qgroupbox_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQGroupBox_MinimumSizeHint_IsBase(bool value) const { qgroupbox_minimumsizehint_isbase = value; }
	inline void setQGroupBox_Event_IsBase(bool value) const { qgroupbox_event_isbase = value; }
	inline void setQGroupBox_ChildEvent_IsBase(bool value) const { qgroupbox_childevent_isbase = value; }
	inline void setQGroupBox_ResizeEvent_IsBase(bool value) const { qgroupbox_resizeevent_isbase = value; }
	inline void setQGroupBox_PaintEvent_IsBase(bool value) const { qgroupbox_paintevent_isbase = value; }
	inline void setQGroupBox_FocusInEvent_IsBase(bool value) const { qgroupbox_focusinevent_isbase = value; }
	inline void setQGroupBox_ChangeEvent_IsBase(bool value) const { qgroupbox_changeevent_isbase = value; }
	inline void setQGroupBox_MousePressEvent_IsBase(bool value) const { qgroupbox_mousepressevent_isbase = value; }
	inline void setQGroupBox_MouseMoveEvent_IsBase(bool value) const { qgroupbox_mousemoveevent_isbase = value; }
	inline void setQGroupBox_MouseReleaseEvent_IsBase(bool value) const { qgroupbox_mousereleaseevent_isbase = value; }
	inline void setQGroupBox_InitStyleOption_IsBase(bool value) const { qgroupbox_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qgroupbox_minimumsizehint_isbase) {
			qgroupbox_minimumsizehint_isbase = false;
			return QGroupBox::minimumSizeHint();
		} else if (qgroupbox_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qgroupbox_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QGroupBox::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qgroupbox_event_isbase) {
			qgroupbox_event_isbase = false;
			return QGroupBox::event(event);
		} else if (qgroupbox_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgroupbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGroupBox::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void childEvent(QChildEvent* event) override {
		if (qgroupbox_childevent_isbase) {
			qgroupbox_childevent_isbase = false;
			QGroupBox::childEvent(event);
		} else if (qgroupbox_childevent_callback != nullptr) {
			QChildEvent* cbval1 = event;
			qgroupbox_childevent_callback(this, cbval1);
		} else {
			QGroupBox::childEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qgroupbox_resizeevent_isbase) {
			qgroupbox_resizeevent_isbase = false;
			QGroupBox::resizeEvent(event);
		} else if (qgroupbox_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qgroupbox_resizeevent_callback(this, cbval1);
		} else {
			QGroupBox::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qgroupbox_paintevent_isbase) {
			qgroupbox_paintevent_isbase = false;
			QGroupBox::paintEvent(event);
		} else if (qgroupbox_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qgroupbox_paintevent_callback(this, cbval1);
		} else {
			QGroupBox::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgroupbox_focusinevent_isbase) {
			qgroupbox_focusinevent_isbase = false;
			QGroupBox::focusInEvent(event);
		} else if (qgroupbox_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgroupbox_focusinevent_callback(this, cbval1);
		} else {
			QGroupBox::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qgroupbox_changeevent_isbase) {
			qgroupbox_changeevent_isbase = false;
			QGroupBox::changeEvent(event);
		} else if (qgroupbox_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qgroupbox_changeevent_callback(this, cbval1);
		} else {
			QGroupBox::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qgroupbox_mousepressevent_isbase) {
			qgroupbox_mousepressevent_isbase = false;
			QGroupBox::mousePressEvent(event);
		} else if (qgroupbox_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgroupbox_mousepressevent_callback(this, cbval1);
		} else {
			QGroupBox::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qgroupbox_mousemoveevent_isbase) {
			qgroupbox_mousemoveevent_isbase = false;
			QGroupBox::mouseMoveEvent(event);
		} else if (qgroupbox_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgroupbox_mousemoveevent_callback(this, cbval1);
		} else {
			QGroupBox::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qgroupbox_mousereleaseevent_isbase) {
			qgroupbox_mousereleaseevent_isbase = false;
			QGroupBox::mouseReleaseEvent(event);
		} else if (qgroupbox_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qgroupbox_mousereleaseevent_callback(this, cbval1);
		} else {
			QGroupBox::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionGroupBox* option) const override {
		if (qgroupbox_initstyleoption_isbase) {
			qgroupbox_initstyleoption_isbase = false;
			QGroupBox::initStyleOption(option);
		} else if (qgroupbox_initstyleoption_callback != nullptr) {
			QStyleOptionGroupBox* cbval1 = option;
			qgroupbox_initstyleoption_callback(this, cbval1);
		} else {
			QGroupBox::initStyleOption(option);
		}
	}

	// Friend functions
	friend bool QGroupBox_Event(QGroupBox* self, QEvent* event);
	friend bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event);
	friend void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event);
	friend void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event);
	friend void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event);
	friend void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event);
	friend void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event);
	friend void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event);
	friend void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event);
	friend void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event);
	friend void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event);
	friend void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event);
	friend void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
	friend void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
	friend void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
};

#endif


