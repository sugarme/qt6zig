#pragma once
#ifndef QABSTRACTSPINBOX_H_C_LIBVIRTUAL
#define QABSTRACTSPINBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractSpinBox so that we can call protected methods
class VirtualQAbstractSpinBox final : public QAbstractSpinBox {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractSpinBox= true;

	// Virtual class public types (including callbacks)
	using QAbstractSpinBox_SizeHint_Callback = QSize* (*)();
	using QAbstractSpinBox_MinimumSizeHint_Callback = QSize* (*)();
	using QAbstractSpinBox_Event_Callback = bool (*)(QAbstractSpinBox*, QEvent*);
	using QAbstractSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSpinBox*, int);
	using QAbstractSpinBox_Validate_Callback = int (*)(const QAbstractSpinBox*, libqt_string, int*);
	using QAbstractSpinBox_Fixup_Callback = void (*)(const QAbstractSpinBox*, libqt_string);
	using QAbstractSpinBox_StepBy_Callback = void (*)(QAbstractSpinBox*, int);
	using QAbstractSpinBox_Clear_Callback = void (*)();
	using QAbstractSpinBox_ResizeEvent_Callback = void (*)(QAbstractSpinBox*, QResizeEvent*);
	using QAbstractSpinBox_KeyPressEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
	using QAbstractSpinBox_KeyReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
	using QAbstractSpinBox_WheelEvent_Callback = void (*)(QAbstractSpinBox*, QWheelEvent*);
	using QAbstractSpinBox_FocusInEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
	using QAbstractSpinBox_FocusOutEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
	using QAbstractSpinBox_ContextMenuEvent_Callback = void (*)(QAbstractSpinBox*, QContextMenuEvent*);
	using QAbstractSpinBox_ChangeEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
	using QAbstractSpinBox_CloseEvent_Callback = void (*)(QAbstractSpinBox*, QCloseEvent*);
	using QAbstractSpinBox_HideEvent_Callback = void (*)(QAbstractSpinBox*, QHideEvent*);
	using QAbstractSpinBox_MousePressEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
	using QAbstractSpinBox_MouseReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
	using QAbstractSpinBox_MouseMoveEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
	using QAbstractSpinBox_TimerEvent_Callback = void (*)(QAbstractSpinBox*, QTimerEvent*);
	using QAbstractSpinBox_PaintEvent_Callback = void (*)(QAbstractSpinBox*, QPaintEvent*);
	using QAbstractSpinBox_ShowEvent_Callback = void (*)(QAbstractSpinBox*, QShowEvent*);
	using QAbstractSpinBox_InitStyleOption_Callback = void (*)(const QAbstractSpinBox*, QStyleOptionSpinBox*);
	using QAbstractSpinBox_StepEnabled_Callback = int (*)();
	using QAbstractSpinBox_LineEdit_Callback = QLineEdit* (*)();
	using QAbstractSpinBox_SetLineEdit_Callback = void (*)(QAbstractSpinBox*, QLineEdit*);

protected:
	// Instance callback storage
	mutable QAbstractSpinBox_SizeHint_Callback qabstractspinbox_sizehint_callback = nullptr;
	mutable QAbstractSpinBox_MinimumSizeHint_Callback qabstractspinbox_minimumsizehint_callback = nullptr;
	mutable QAbstractSpinBox_Event_Callback qabstractspinbox_event_callback = nullptr;
	mutable QAbstractSpinBox_InputMethodQuery_Callback qabstractspinbox_inputmethodquery_callback = nullptr;
	mutable QAbstractSpinBox_Validate_Callback qabstractspinbox_validate_callback = nullptr;
	mutable QAbstractSpinBox_Fixup_Callback qabstractspinbox_fixup_callback = nullptr;
	mutable QAbstractSpinBox_StepBy_Callback qabstractspinbox_stepby_callback = nullptr;
	mutable QAbstractSpinBox_Clear_Callback qabstractspinbox_clear_callback = nullptr;
	mutable QAbstractSpinBox_ResizeEvent_Callback qabstractspinbox_resizeevent_callback = nullptr;
	mutable QAbstractSpinBox_KeyPressEvent_Callback qabstractspinbox_keypressevent_callback = nullptr;
	mutable QAbstractSpinBox_KeyReleaseEvent_Callback qabstractspinbox_keyreleaseevent_callback = nullptr;
	mutable QAbstractSpinBox_WheelEvent_Callback qabstractspinbox_wheelevent_callback = nullptr;
	mutable QAbstractSpinBox_FocusInEvent_Callback qabstractspinbox_focusinevent_callback = nullptr;
	mutable QAbstractSpinBox_FocusOutEvent_Callback qabstractspinbox_focusoutevent_callback = nullptr;
	mutable QAbstractSpinBox_ContextMenuEvent_Callback qabstractspinbox_contextmenuevent_callback = nullptr;
	mutable QAbstractSpinBox_ChangeEvent_Callback qabstractspinbox_changeevent_callback = nullptr;
	mutable QAbstractSpinBox_CloseEvent_Callback qabstractspinbox_closeevent_callback = nullptr;
	mutable QAbstractSpinBox_HideEvent_Callback qabstractspinbox_hideevent_callback = nullptr;
	mutable QAbstractSpinBox_MousePressEvent_Callback qabstractspinbox_mousepressevent_callback = nullptr;
	mutable QAbstractSpinBox_MouseReleaseEvent_Callback qabstractspinbox_mousereleaseevent_callback = nullptr;
	mutable QAbstractSpinBox_MouseMoveEvent_Callback qabstractspinbox_mousemoveevent_callback = nullptr;
	mutable QAbstractSpinBox_TimerEvent_Callback qabstractspinbox_timerevent_callback = nullptr;
	mutable QAbstractSpinBox_PaintEvent_Callback qabstractspinbox_paintevent_callback = nullptr;
	mutable QAbstractSpinBox_ShowEvent_Callback qabstractspinbox_showevent_callback = nullptr;
	mutable QAbstractSpinBox_InitStyleOption_Callback qabstractspinbox_initstyleoption_callback = nullptr;
	mutable QAbstractSpinBox_StepEnabled_Callback qabstractspinbox_stepenabled_callback = nullptr;
	mutable QAbstractSpinBox_LineEdit_Callback qabstractspinbox_lineedit_callback = nullptr;
	mutable QAbstractSpinBox_SetLineEdit_Callback qabstractspinbox_setlineedit_callback = nullptr;

	// Instance base flags
    mutable bool qabstractspinbox_sizehint_isbase = false;
    mutable bool qabstractspinbox_minimumsizehint_isbase = false;
    mutable bool qabstractspinbox_event_isbase = false;
    mutable bool qabstractspinbox_inputmethodquery_isbase = false;
    mutable bool qabstractspinbox_validate_isbase = false;
    mutable bool qabstractspinbox_fixup_isbase = false;
    mutable bool qabstractspinbox_stepby_isbase = false;
    mutable bool qabstractspinbox_clear_isbase = false;
    mutable bool qabstractspinbox_resizeevent_isbase = false;
    mutable bool qabstractspinbox_keypressevent_isbase = false;
    mutable bool qabstractspinbox_keyreleaseevent_isbase = false;
    mutable bool qabstractspinbox_wheelevent_isbase = false;
    mutable bool qabstractspinbox_focusinevent_isbase = false;
    mutable bool qabstractspinbox_focusoutevent_isbase = false;
    mutable bool qabstractspinbox_contextmenuevent_isbase = false;
    mutable bool qabstractspinbox_changeevent_isbase = false;
    mutable bool qabstractspinbox_closeevent_isbase = false;
    mutable bool qabstractspinbox_hideevent_isbase = false;
    mutable bool qabstractspinbox_mousepressevent_isbase = false;
    mutable bool qabstractspinbox_mousereleaseevent_isbase = false;
    mutable bool qabstractspinbox_mousemoveevent_isbase = false;
    mutable bool qabstractspinbox_timerevent_isbase = false;
    mutable bool qabstractspinbox_paintevent_isbase = false;
    mutable bool qabstractspinbox_showevent_isbase = false;
    mutable bool qabstractspinbox_initstyleoption_isbase = false;
    mutable bool qabstractspinbox_stepenabled_isbase = false;
    mutable bool qabstractspinbox_lineedit_isbase = false;
    mutable bool qabstractspinbox_setlineedit_isbase = false;

public:
	VirtualQAbstractSpinBox(QWidget* parent): QAbstractSpinBox(parent) {};
	VirtualQAbstractSpinBox(): QAbstractSpinBox() {};

	~VirtualQAbstractSpinBox() {
		qabstractspinbox_sizehint_callback = nullptr;
		qabstractspinbox_minimumsizehint_callback = nullptr;
		qabstractspinbox_event_callback = nullptr;
		qabstractspinbox_inputmethodquery_callback = nullptr;
		qabstractspinbox_validate_callback = nullptr;
		qabstractspinbox_fixup_callback = nullptr;
		qabstractspinbox_stepby_callback = nullptr;
		qabstractspinbox_clear_callback = nullptr;
		qabstractspinbox_resizeevent_callback = nullptr;
		qabstractspinbox_keypressevent_callback = nullptr;
		qabstractspinbox_keyreleaseevent_callback = nullptr;
		qabstractspinbox_wheelevent_callback = nullptr;
		qabstractspinbox_focusinevent_callback = nullptr;
		qabstractspinbox_focusoutevent_callback = nullptr;
		qabstractspinbox_contextmenuevent_callback = nullptr;
		qabstractspinbox_changeevent_callback = nullptr;
		qabstractspinbox_closeevent_callback = nullptr;
		qabstractspinbox_hideevent_callback = nullptr;
		qabstractspinbox_mousepressevent_callback = nullptr;
		qabstractspinbox_mousereleaseevent_callback = nullptr;
		qabstractspinbox_mousemoveevent_callback = nullptr;
		qabstractspinbox_timerevent_callback = nullptr;
		qabstractspinbox_paintevent_callback = nullptr;
		qabstractspinbox_showevent_callback = nullptr;
		qabstractspinbox_initstyleoption_callback = nullptr;
		qabstractspinbox_stepenabled_callback = nullptr;
		qabstractspinbox_lineedit_callback = nullptr;
		qabstractspinbox_setlineedit_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractSpinBox_SizeHint_Callback(QAbstractSpinBox_SizeHint_Callback cb) const { qabstractspinbox_sizehint_callback = cb; }
	inline void setQAbstractSpinBox_MinimumSizeHint_Callback(QAbstractSpinBox_MinimumSizeHint_Callback cb) const { qabstractspinbox_minimumsizehint_callback = cb; }
	inline void setQAbstractSpinBox_Event_Callback(QAbstractSpinBox_Event_Callback cb) const { qabstractspinbox_event_callback = cb; }
	inline void setQAbstractSpinBox_InputMethodQuery_Callback(QAbstractSpinBox_InputMethodQuery_Callback cb) const { qabstractspinbox_inputmethodquery_callback = cb; }
	inline void setQAbstractSpinBox_Validate_Callback(QAbstractSpinBox_Validate_Callback cb) const { qabstractspinbox_validate_callback = cb; }
	inline void setQAbstractSpinBox_Fixup_Callback(QAbstractSpinBox_Fixup_Callback cb) const { qabstractspinbox_fixup_callback = cb; }
	inline void setQAbstractSpinBox_StepBy_Callback(QAbstractSpinBox_StepBy_Callback cb) const { qabstractspinbox_stepby_callback = cb; }
	inline void setQAbstractSpinBox_Clear_Callback(QAbstractSpinBox_Clear_Callback cb) const { qabstractspinbox_clear_callback = cb; }
	inline void setQAbstractSpinBox_ResizeEvent_Callback(QAbstractSpinBox_ResizeEvent_Callback cb) const { qabstractspinbox_resizeevent_callback = cb; }
	inline void setQAbstractSpinBox_KeyPressEvent_Callback(QAbstractSpinBox_KeyPressEvent_Callback cb) const { qabstractspinbox_keypressevent_callback = cb; }
	inline void setQAbstractSpinBox_KeyReleaseEvent_Callback(QAbstractSpinBox_KeyReleaseEvent_Callback cb) const { qabstractspinbox_keyreleaseevent_callback = cb; }
	inline void setQAbstractSpinBox_WheelEvent_Callback(QAbstractSpinBox_WheelEvent_Callback cb) const { qabstractspinbox_wheelevent_callback = cb; }
	inline void setQAbstractSpinBox_FocusInEvent_Callback(QAbstractSpinBox_FocusInEvent_Callback cb) const { qabstractspinbox_focusinevent_callback = cb; }
	inline void setQAbstractSpinBox_FocusOutEvent_Callback(QAbstractSpinBox_FocusOutEvent_Callback cb) const { qabstractspinbox_focusoutevent_callback = cb; }
	inline void setQAbstractSpinBox_ContextMenuEvent_Callback(QAbstractSpinBox_ContextMenuEvent_Callback cb) const { qabstractspinbox_contextmenuevent_callback = cb; }
	inline void setQAbstractSpinBox_ChangeEvent_Callback(QAbstractSpinBox_ChangeEvent_Callback cb) const { qabstractspinbox_changeevent_callback = cb; }
	inline void setQAbstractSpinBox_CloseEvent_Callback(QAbstractSpinBox_CloseEvent_Callback cb) const { qabstractspinbox_closeevent_callback = cb; }
	inline void setQAbstractSpinBox_HideEvent_Callback(QAbstractSpinBox_HideEvent_Callback cb) const { qabstractspinbox_hideevent_callback = cb; }
	inline void setQAbstractSpinBox_MousePressEvent_Callback(QAbstractSpinBox_MousePressEvent_Callback cb) const { qabstractspinbox_mousepressevent_callback = cb; }
	inline void setQAbstractSpinBox_MouseReleaseEvent_Callback(QAbstractSpinBox_MouseReleaseEvent_Callback cb) const { qabstractspinbox_mousereleaseevent_callback = cb; }
	inline void setQAbstractSpinBox_MouseMoveEvent_Callback(QAbstractSpinBox_MouseMoveEvent_Callback cb) const { qabstractspinbox_mousemoveevent_callback = cb; }
	inline void setQAbstractSpinBox_TimerEvent_Callback(QAbstractSpinBox_TimerEvent_Callback cb) const { qabstractspinbox_timerevent_callback = cb; }
	inline void setQAbstractSpinBox_PaintEvent_Callback(QAbstractSpinBox_PaintEvent_Callback cb) const { qabstractspinbox_paintevent_callback = cb; }
	inline void setQAbstractSpinBox_ShowEvent_Callback(QAbstractSpinBox_ShowEvent_Callback cb) const { qabstractspinbox_showevent_callback = cb; }
	inline void setQAbstractSpinBox_InitStyleOption_Callback(QAbstractSpinBox_InitStyleOption_Callback cb) const { qabstractspinbox_initstyleoption_callback = cb; }
	inline void setQAbstractSpinBox_StepEnabled_Callback(QAbstractSpinBox_StepEnabled_Callback cb) const { qabstractspinbox_stepenabled_callback = cb; }
	inline void setQAbstractSpinBox_LineEdit_Callback(QAbstractSpinBox_LineEdit_Callback cb) const { qabstractspinbox_lineedit_callback = cb; }
	inline void setQAbstractSpinBox_SetLineEdit_Callback(QAbstractSpinBox_SetLineEdit_Callback cb) const { qabstractspinbox_setlineedit_callback = cb; }

// Base flag setters
	inline void setQAbstractSpinBox_SizeHint_IsBase(bool value) const { qabstractspinbox_sizehint_isbase = value; }
	inline void setQAbstractSpinBox_MinimumSizeHint_IsBase(bool value) const { qabstractspinbox_minimumsizehint_isbase = value; }
	inline void setQAbstractSpinBox_Event_IsBase(bool value) const { qabstractspinbox_event_isbase = value; }
	inline void setQAbstractSpinBox_InputMethodQuery_IsBase(bool value) const { qabstractspinbox_inputmethodquery_isbase = value; }
	inline void setQAbstractSpinBox_Validate_IsBase(bool value) const { qabstractspinbox_validate_isbase = value; }
	inline void setQAbstractSpinBox_Fixup_IsBase(bool value) const { qabstractspinbox_fixup_isbase = value; }
	inline void setQAbstractSpinBox_StepBy_IsBase(bool value) const { qabstractspinbox_stepby_isbase = value; }
	inline void setQAbstractSpinBox_Clear_IsBase(bool value) const { qabstractspinbox_clear_isbase = value; }
	inline void setQAbstractSpinBox_ResizeEvent_IsBase(bool value) const { qabstractspinbox_resizeevent_isbase = value; }
	inline void setQAbstractSpinBox_KeyPressEvent_IsBase(bool value) const { qabstractspinbox_keypressevent_isbase = value; }
	inline void setQAbstractSpinBox_KeyReleaseEvent_IsBase(bool value) const { qabstractspinbox_keyreleaseevent_isbase = value; }
	inline void setQAbstractSpinBox_WheelEvent_IsBase(bool value) const { qabstractspinbox_wheelevent_isbase = value; }
	inline void setQAbstractSpinBox_FocusInEvent_IsBase(bool value) const { qabstractspinbox_focusinevent_isbase = value; }
	inline void setQAbstractSpinBox_FocusOutEvent_IsBase(bool value) const { qabstractspinbox_focusoutevent_isbase = value; }
	inline void setQAbstractSpinBox_ContextMenuEvent_IsBase(bool value) const { qabstractspinbox_contextmenuevent_isbase = value; }
	inline void setQAbstractSpinBox_ChangeEvent_IsBase(bool value) const { qabstractspinbox_changeevent_isbase = value; }
	inline void setQAbstractSpinBox_CloseEvent_IsBase(bool value) const { qabstractspinbox_closeevent_isbase = value; }
	inline void setQAbstractSpinBox_HideEvent_IsBase(bool value) const { qabstractspinbox_hideevent_isbase = value; }
	inline void setQAbstractSpinBox_MousePressEvent_IsBase(bool value) const { qabstractspinbox_mousepressevent_isbase = value; }
	inline void setQAbstractSpinBox_MouseReleaseEvent_IsBase(bool value) const { qabstractspinbox_mousereleaseevent_isbase = value; }
	inline void setQAbstractSpinBox_MouseMoveEvent_IsBase(bool value) const { qabstractspinbox_mousemoveevent_isbase = value; }
	inline void setQAbstractSpinBox_TimerEvent_IsBase(bool value) const { qabstractspinbox_timerevent_isbase = value; }
	inline void setQAbstractSpinBox_PaintEvent_IsBase(bool value) const { qabstractspinbox_paintevent_isbase = value; }
	inline void setQAbstractSpinBox_ShowEvent_IsBase(bool value) const { qabstractspinbox_showevent_isbase = value; }
	inline void setQAbstractSpinBox_InitStyleOption_IsBase(bool value) const { qabstractspinbox_initstyleoption_isbase = value; }
	inline void setQAbstractSpinBox_StepEnabled_IsBase(bool value) const { qabstractspinbox_stepenabled_isbase = value; }
	inline void setQAbstractSpinBox_LineEdit_IsBase(bool value) const { qabstractspinbox_lineedit_isbase = value; }
	inline void setQAbstractSpinBox_SetLineEdit_IsBase(bool value) const { qabstractspinbox_setlineedit_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qabstractspinbox_sizehint_isbase) {
			qabstractspinbox_sizehint_isbase = false;
			return QAbstractSpinBox::sizeHint();
		} else if (qabstractspinbox_sizehint_callback != nullptr) {
			QSize* callback_ret = qabstractspinbox_sizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractSpinBox::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qabstractspinbox_minimumsizehint_isbase) {
			qabstractspinbox_minimumsizehint_isbase = false;
			return QAbstractSpinBox::minimumSizeHint();
		} else if (qabstractspinbox_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qabstractspinbox_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QAbstractSpinBox::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qabstractspinbox_event_isbase) {
			qabstractspinbox_event_isbase = false;
			return QAbstractSpinBox::event(event);
		} else if (qabstractspinbox_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qabstractspinbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractSpinBox::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (qabstractspinbox_inputmethodquery_isbase) {
			qabstractspinbox_inputmethodquery_isbase = false;
			return QAbstractSpinBox::inputMethodQuery(param1);
		} else if (qabstractspinbox_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(param1);
			QVariant* callback_ret = qabstractspinbox_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractSpinBox::inputMethodQuery(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (qabstractspinbox_validate_isbase) {
			qabstractspinbox_validate_isbase = false;
			return QAbstractSpinBox::validate(input, pos);
		} else if (qabstractspinbox_validate_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			int* cbval2 = pos;
			int callback_ret = qabstractspinbox_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QAbstractSpinBox::validate(input, pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& input) const override {
		if (qabstractspinbox_fixup_isbase) {
			qabstractspinbox_fixup_isbase = false;
			QAbstractSpinBox::fixup(input);
		} else if (qabstractspinbox_fixup_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			qabstractspinbox_fixup_callback(this, cbval1);
		} else {
			QAbstractSpinBox::fixup(input);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void stepBy(int steps) override {
		if (qabstractspinbox_stepby_isbase) {
			qabstractspinbox_stepby_isbase = false;
			QAbstractSpinBox::stepBy(steps);
		} else if (qabstractspinbox_stepby_callback != nullptr) {
			int cbval1 = steps;
			qabstractspinbox_stepby_callback(this, cbval1);
		} else {
			QAbstractSpinBox::stepBy(steps);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qabstractspinbox_clear_isbase) {
			qabstractspinbox_clear_isbase = false;
			QAbstractSpinBox::clear();
		} else if (qabstractspinbox_clear_callback != nullptr) {
			qabstractspinbox_clear_callback();
		} else {
			QAbstractSpinBox::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qabstractspinbox_resizeevent_isbase) {
			qabstractspinbox_resizeevent_isbase = false;
			QAbstractSpinBox::resizeEvent(event);
		} else if (qabstractspinbox_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qabstractspinbox_resizeevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qabstractspinbox_keypressevent_isbase) {
			qabstractspinbox_keypressevent_isbase = false;
			QAbstractSpinBox::keyPressEvent(event);
		} else if (qabstractspinbox_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qabstractspinbox_keypressevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (qabstractspinbox_keyreleaseevent_isbase) {
			qabstractspinbox_keyreleaseevent_isbase = false;
			QAbstractSpinBox::keyReleaseEvent(event);
		} else if (qabstractspinbox_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qabstractspinbox_keyreleaseevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::keyReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* event) override {
		if (qabstractspinbox_wheelevent_isbase) {
			qabstractspinbox_wheelevent_isbase = false;
			QAbstractSpinBox::wheelEvent(event);
		} else if (qabstractspinbox_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = event;
			qabstractspinbox_wheelevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qabstractspinbox_focusinevent_isbase) {
			qabstractspinbox_focusinevent_isbase = false;
			QAbstractSpinBox::focusInEvent(event);
		} else if (qabstractspinbox_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qabstractspinbox_focusinevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qabstractspinbox_focusoutevent_isbase) {
			qabstractspinbox_focusoutevent_isbase = false;
			QAbstractSpinBox::focusOutEvent(event);
		} else if (qabstractspinbox_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qabstractspinbox_focusoutevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (qabstractspinbox_contextmenuevent_isbase) {
			qabstractspinbox_contextmenuevent_isbase = false;
			QAbstractSpinBox::contextMenuEvent(event);
		} else if (qabstractspinbox_contextmenuevent_callback != nullptr) {
			QContextMenuEvent* cbval1 = event;
			qabstractspinbox_contextmenuevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* event) override {
		if (qabstractspinbox_changeevent_isbase) {
			qabstractspinbox_changeevent_isbase = false;
			QAbstractSpinBox::changeEvent(event);
		} else if (qabstractspinbox_changeevent_callback != nullptr) {
			QEvent* cbval1 = event;
			qabstractspinbox_changeevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::changeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void closeEvent(QCloseEvent* event) override {
		if (qabstractspinbox_closeevent_isbase) {
			qabstractspinbox_closeevent_isbase = false;
			QAbstractSpinBox::closeEvent(event);
		} else if (qabstractspinbox_closeevent_callback != nullptr) {
			QCloseEvent* cbval1 = event;
			qabstractspinbox_closeevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::closeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hideEvent(QHideEvent* event) override {
		if (qabstractspinbox_hideevent_isbase) {
			qabstractspinbox_hideevent_isbase = false;
			QAbstractSpinBox::hideEvent(event);
		} else if (qabstractspinbox_hideevent_callback != nullptr) {
			QHideEvent* cbval1 = event;
			qabstractspinbox_hideevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::hideEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qabstractspinbox_mousepressevent_isbase) {
			qabstractspinbox_mousepressevent_isbase = false;
			QAbstractSpinBox::mousePressEvent(event);
		} else if (qabstractspinbox_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractspinbox_mousepressevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (qabstractspinbox_mousereleaseevent_isbase) {
			qabstractspinbox_mousereleaseevent_isbase = false;
			QAbstractSpinBox::mouseReleaseEvent(event);
		} else if (qabstractspinbox_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractspinbox_mousereleaseevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (qabstractspinbox_mousemoveevent_isbase) {
			qabstractspinbox_mousemoveevent_isbase = false;
			QAbstractSpinBox::mouseMoveEvent(event);
		} else if (qabstractspinbox_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qabstractspinbox_mousemoveevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void timerEvent(QTimerEvent* event) override {
		if (qabstractspinbox_timerevent_isbase) {
			qabstractspinbox_timerevent_isbase = false;
			QAbstractSpinBox::timerEvent(event);
		} else if (qabstractspinbox_timerevent_callback != nullptr) {
			QTimerEvent* cbval1 = event;
			qabstractspinbox_timerevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::timerEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qabstractspinbox_paintevent_isbase) {
			qabstractspinbox_paintevent_isbase = false;
			QAbstractSpinBox::paintEvent(event);
		} else if (qabstractspinbox_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qabstractspinbox_paintevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void showEvent(QShowEvent* event) override {
		if (qabstractspinbox_showevent_isbase) {
			qabstractspinbox_showevent_isbase = false;
			QAbstractSpinBox::showEvent(event);
		} else if (qabstractspinbox_showevent_callback != nullptr) {
			QShowEvent* cbval1 = event;
			qabstractspinbox_showevent_callback(this, cbval1);
		} else {
			QAbstractSpinBox::showEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (qabstractspinbox_initstyleoption_isbase) {
			qabstractspinbox_initstyleoption_isbase = false;
			QAbstractSpinBox::initStyleOption(option);
		} else if (qabstractspinbox_initstyleoption_callback != nullptr) {
			QStyleOptionSpinBox* cbval1 = option;
			qabstractspinbox_initstyleoption_callback(this, cbval1);
		} else {
			QAbstractSpinBox::initStyleOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QAbstractSpinBox::StepEnabledFlag> stepEnabled() const override {
		if (qabstractspinbox_stepenabled_isbase) {
			qabstractspinbox_stepenabled_isbase = false;
			return QAbstractSpinBox::stepEnabled();
		} else if (qabstractspinbox_stepenabled_callback != nullptr) {
			int callback_ret = qabstractspinbox_stepenabled_callback();
			return static_cast<QFlags<QAbstractSpinBox::StepEnabledFlag>>(callback_ret);
		} else {
			return QAbstractSpinBox::stepEnabled();
		}
	}

	// Virtual method for C ABI access and custom callback
	QLineEdit* lineEdit() const {
		if (qabstractspinbox_lineedit_isbase) {
			qabstractspinbox_lineedit_isbase = false;
			return QAbstractSpinBox::lineEdit();
		} else if (qabstractspinbox_lineedit_callback != nullptr) {
			QLineEdit* callback_ret = qabstractspinbox_lineedit_callback();
			return callback_ret;
		} else {
			return QAbstractSpinBox::lineEdit();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setLineEdit(QLineEdit* edit) {
		if (qabstractspinbox_setlineedit_isbase) {
			qabstractspinbox_setlineedit_isbase = false;
			QAbstractSpinBox::setLineEdit(edit);
		} else if (qabstractspinbox_setlineedit_callback != nullptr) {
			QLineEdit* cbval1 = edit;
			qabstractspinbox_setlineedit_callback(this, cbval1);
		} else {
			QAbstractSpinBox::setLineEdit(edit);
		}
	}

	// Friend functions
	friend void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
	friend void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
	friend void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
	friend void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
	friend void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
	friend void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
	friend void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
	friend void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
	friend void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
	friend void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
	friend void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
	friend void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
	friend void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
	friend void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
	friend void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
	friend void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event);
	friend void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
	friend void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
	friend void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
	friend void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event);
	friend void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
	friend void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
	friend void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
	friend void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
	friend void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
	friend void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
	friend void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event);
	friend void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
	friend void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
	friend int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
	friend int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self);
	friend QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self);
	friend QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self);
	friend void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
	friend void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
};

#endif


