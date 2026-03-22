#pragma once
#ifndef QDATETIMEEDIT_H_C_LIBVIRTUAL
#define QDATETIMEEDIT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QDateTimeEdit so that we can call protected methods
class VirtualQDateTimeEdit final : public QDateTimeEdit {

public:
	// Virtual class boolean flag
	bool isVirtualQDateTimeEdit= true;

	// Virtual class public types (including callbacks)
	using QDateTimeEdit_SizeHint_Callback = QSize* (*)();
	using QDateTimeEdit_Clear_Callback = void (*)();
	using QDateTimeEdit_StepBy_Callback = void (*)(QDateTimeEdit*, int);
	using QDateTimeEdit_Event_Callback = bool (*)(QDateTimeEdit*, QEvent*);
	using QDateTimeEdit_KeyPressEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
	using QDateTimeEdit_WheelEvent_Callback = void (*)(QDateTimeEdit*, QWheelEvent*);
	using QDateTimeEdit_FocusInEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
	using QDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(QDateTimeEdit*, bool);
	using QDateTimeEdit_Validate_Callback = int (*)(const QDateTimeEdit*, libqt_string, int*);
	using QDateTimeEdit_Fixup_Callback = void (*)(const QDateTimeEdit*, libqt_string);
	using QDateTimeEdit_DateTimeFromText_Callback = QDateTime* (*)(const QDateTimeEdit*, libqt_string);
	using QDateTimeEdit_TextFromDateTime_Callback = const char* (*)(const QDateTimeEdit*, const QDateTime*);
	using QDateTimeEdit_StepEnabled_Callback = int (*)();
	using QDateTimeEdit_MousePressEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
	using QDateTimeEdit_PaintEvent_Callback = void (*)(QDateTimeEdit*, QPaintEvent*);
	using QDateTimeEdit_InitStyleOption_Callback = void (*)(const QDateTimeEdit*, QStyleOptionSpinBox*);

protected:
	// Instance callback storage
	mutable QDateTimeEdit_SizeHint_Callback qdatetimeedit_sizehint_callback = nullptr;
	mutable QDateTimeEdit_Clear_Callback qdatetimeedit_clear_callback = nullptr;
	mutable QDateTimeEdit_StepBy_Callback qdatetimeedit_stepby_callback = nullptr;
	mutable QDateTimeEdit_Event_Callback qdatetimeedit_event_callback = nullptr;
	mutable QDateTimeEdit_KeyPressEvent_Callback qdatetimeedit_keypressevent_callback = nullptr;
	mutable QDateTimeEdit_WheelEvent_Callback qdatetimeedit_wheelevent_callback = nullptr;
	mutable QDateTimeEdit_FocusInEvent_Callback qdatetimeedit_focusinevent_callback = nullptr;
	mutable QDateTimeEdit_FocusNextPrevChild_Callback qdatetimeedit_focusnextprevchild_callback = nullptr;
	mutable QDateTimeEdit_Validate_Callback qdatetimeedit_validate_callback = nullptr;
	mutable QDateTimeEdit_Fixup_Callback qdatetimeedit_fixup_callback = nullptr;
	mutable QDateTimeEdit_DateTimeFromText_Callback qdatetimeedit_datetimefromtext_callback = nullptr;
	mutable QDateTimeEdit_TextFromDateTime_Callback qdatetimeedit_textfromdatetime_callback = nullptr;
	mutable QDateTimeEdit_StepEnabled_Callback qdatetimeedit_stepenabled_callback = nullptr;
	mutable QDateTimeEdit_MousePressEvent_Callback qdatetimeedit_mousepressevent_callback = nullptr;
	mutable QDateTimeEdit_PaintEvent_Callback qdatetimeedit_paintevent_callback = nullptr;
	mutable QDateTimeEdit_InitStyleOption_Callback qdatetimeedit_initstyleoption_callback = nullptr;

	// Instance base flags
    mutable bool qdatetimeedit_sizehint_isbase = false;
    mutable bool qdatetimeedit_clear_isbase = false;
    mutable bool qdatetimeedit_stepby_isbase = false;
    mutable bool qdatetimeedit_event_isbase = false;
    mutable bool qdatetimeedit_keypressevent_isbase = false;
    mutable bool qdatetimeedit_wheelevent_isbase = false;
    mutable bool qdatetimeedit_focusinevent_isbase = false;
    mutable bool qdatetimeedit_focusnextprevchild_isbase = false;
    mutable bool qdatetimeedit_validate_isbase = false;
    mutable bool qdatetimeedit_fixup_isbase = false;
    mutable bool qdatetimeedit_datetimefromtext_isbase = false;
    mutable bool qdatetimeedit_textfromdatetime_isbase = false;
    mutable bool qdatetimeedit_stepenabled_isbase = false;
    mutable bool qdatetimeedit_mousepressevent_isbase = false;
    mutable bool qdatetimeedit_paintevent_isbase = false;
    mutable bool qdatetimeedit_initstyleoption_isbase = false;

public:
	VirtualQDateTimeEdit(QWidget* parent): QDateTimeEdit(parent) {};
	VirtualQDateTimeEdit(): QDateTimeEdit() {};
	VirtualQDateTimeEdit(const QDateTime& dt): QDateTimeEdit(dt) {};
	VirtualQDateTimeEdit(QDate d): QDateTimeEdit(d) {};
	VirtualQDateTimeEdit(QTime t): QDateTimeEdit(t) {};
	VirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent): QDateTimeEdit(dt, parent) {};
	VirtualQDateTimeEdit(QDate d, QWidget* parent): QDateTimeEdit(d, parent) {};
	VirtualQDateTimeEdit(QTime t, QWidget* parent): QDateTimeEdit(t, parent) {};

	~VirtualQDateTimeEdit() {
		qdatetimeedit_sizehint_callback = nullptr;
		qdatetimeedit_clear_callback = nullptr;
		qdatetimeedit_stepby_callback = nullptr;
		qdatetimeedit_event_callback = nullptr;
		qdatetimeedit_keypressevent_callback = nullptr;
		qdatetimeedit_wheelevent_callback = nullptr;
		qdatetimeedit_focusinevent_callback = nullptr;
		qdatetimeedit_focusnextprevchild_callback = nullptr;
		qdatetimeedit_validate_callback = nullptr;
		qdatetimeedit_fixup_callback = nullptr;
		qdatetimeedit_datetimefromtext_callback = nullptr;
		qdatetimeedit_textfromdatetime_callback = nullptr;
		qdatetimeedit_stepenabled_callback = nullptr;
		qdatetimeedit_mousepressevent_callback = nullptr;
		qdatetimeedit_paintevent_callback = nullptr;
		qdatetimeedit_initstyleoption_callback = nullptr;
	}

// Callback setters
	inline void setQDateTimeEdit_SizeHint_Callback(QDateTimeEdit_SizeHint_Callback cb) const { qdatetimeedit_sizehint_callback = cb; }
	inline void setQDateTimeEdit_Clear_Callback(QDateTimeEdit_Clear_Callback cb) const { qdatetimeedit_clear_callback = cb; }
	inline void setQDateTimeEdit_StepBy_Callback(QDateTimeEdit_StepBy_Callback cb) const { qdatetimeedit_stepby_callback = cb; }
	inline void setQDateTimeEdit_Event_Callback(QDateTimeEdit_Event_Callback cb) const { qdatetimeedit_event_callback = cb; }
	inline void setQDateTimeEdit_KeyPressEvent_Callback(QDateTimeEdit_KeyPressEvent_Callback cb) const { qdatetimeedit_keypressevent_callback = cb; }
	inline void setQDateTimeEdit_WheelEvent_Callback(QDateTimeEdit_WheelEvent_Callback cb) const { qdatetimeedit_wheelevent_callback = cb; }
	inline void setQDateTimeEdit_FocusInEvent_Callback(QDateTimeEdit_FocusInEvent_Callback cb) const { qdatetimeedit_focusinevent_callback = cb; }
	inline void setQDateTimeEdit_FocusNextPrevChild_Callback(QDateTimeEdit_FocusNextPrevChild_Callback cb) const { qdatetimeedit_focusnextprevchild_callback = cb; }
	inline void setQDateTimeEdit_Validate_Callback(QDateTimeEdit_Validate_Callback cb) const { qdatetimeedit_validate_callback = cb; }
	inline void setQDateTimeEdit_Fixup_Callback(QDateTimeEdit_Fixup_Callback cb) const { qdatetimeedit_fixup_callback = cb; }
	inline void setQDateTimeEdit_DateTimeFromText_Callback(QDateTimeEdit_DateTimeFromText_Callback cb) const { qdatetimeedit_datetimefromtext_callback = cb; }
	inline void setQDateTimeEdit_TextFromDateTime_Callback(QDateTimeEdit_TextFromDateTime_Callback cb) const { qdatetimeedit_textfromdatetime_callback = cb; }
	inline void setQDateTimeEdit_StepEnabled_Callback(QDateTimeEdit_StepEnabled_Callback cb) const { qdatetimeedit_stepenabled_callback = cb; }
	inline void setQDateTimeEdit_MousePressEvent_Callback(QDateTimeEdit_MousePressEvent_Callback cb) const { qdatetimeedit_mousepressevent_callback = cb; }
	inline void setQDateTimeEdit_PaintEvent_Callback(QDateTimeEdit_PaintEvent_Callback cb) const { qdatetimeedit_paintevent_callback = cb; }
	inline void setQDateTimeEdit_InitStyleOption_Callback(QDateTimeEdit_InitStyleOption_Callback cb) const { qdatetimeedit_initstyleoption_callback = cb; }

// Base flag setters
	inline void setQDateTimeEdit_SizeHint_IsBase(bool value) const { qdatetimeedit_sizehint_isbase = value; }
	inline void setQDateTimeEdit_Clear_IsBase(bool value) const { qdatetimeedit_clear_isbase = value; }
	inline void setQDateTimeEdit_StepBy_IsBase(bool value) const { qdatetimeedit_stepby_isbase = value; }
	inline void setQDateTimeEdit_Event_IsBase(bool value) const { qdatetimeedit_event_isbase = value; }
	inline void setQDateTimeEdit_KeyPressEvent_IsBase(bool value) const { qdatetimeedit_keypressevent_isbase = value; }
	inline void setQDateTimeEdit_WheelEvent_IsBase(bool value) const { qdatetimeedit_wheelevent_isbase = value; }
	inline void setQDateTimeEdit_FocusInEvent_IsBase(bool value) const { qdatetimeedit_focusinevent_isbase = value; }
	inline void setQDateTimeEdit_FocusNextPrevChild_IsBase(bool value) const { qdatetimeedit_focusnextprevchild_isbase = value; }
	inline void setQDateTimeEdit_Validate_IsBase(bool value) const { qdatetimeedit_validate_isbase = value; }
	inline void setQDateTimeEdit_Fixup_IsBase(bool value) const { qdatetimeedit_fixup_isbase = value; }
	inline void setQDateTimeEdit_DateTimeFromText_IsBase(bool value) const { qdatetimeedit_datetimefromtext_isbase = value; }
	inline void setQDateTimeEdit_TextFromDateTime_IsBase(bool value) const { qdatetimeedit_textfromdatetime_isbase = value; }
	inline void setQDateTimeEdit_StepEnabled_IsBase(bool value) const { qdatetimeedit_stepenabled_isbase = value; }
	inline void setQDateTimeEdit_MousePressEvent_IsBase(bool value) const { qdatetimeedit_mousepressevent_isbase = value; }
	inline void setQDateTimeEdit_PaintEvent_IsBase(bool value) const { qdatetimeedit_paintevent_isbase = value; }
	inline void setQDateTimeEdit_InitStyleOption_IsBase(bool value) const { qdatetimeedit_initstyleoption_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qdatetimeedit_sizehint_isbase) {
			qdatetimeedit_sizehint_isbase = false;
			return QDateTimeEdit::sizeHint();
		} else if (qdatetimeedit_sizehint_callback != nullptr) {
			QSize* callback_ret = qdatetimeedit_sizehint_callback();
			return *callback_ret;
		} else {
			return QDateTimeEdit::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qdatetimeedit_clear_isbase) {
			qdatetimeedit_clear_isbase = false;
			QDateTimeEdit::clear();
		} else if (qdatetimeedit_clear_callback != nullptr) {
			qdatetimeedit_clear_callback();
		} else {
			QDateTimeEdit::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void stepBy(int steps) override {
		if (qdatetimeedit_stepby_isbase) {
			qdatetimeedit_stepby_isbase = false;
			QDateTimeEdit::stepBy(steps);
		} else if (qdatetimeedit_stepby_callback != nullptr) {
			int cbval1 = steps;
			qdatetimeedit_stepby_callback(this, cbval1);
		} else {
			QDateTimeEdit::stepBy(steps);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qdatetimeedit_event_isbase) {
			qdatetimeedit_event_isbase = false;
			return QDateTimeEdit::event(event);
		} else if (qdatetimeedit_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qdatetimeedit_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDateTimeEdit::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qdatetimeedit_keypressevent_isbase) {
			qdatetimeedit_keypressevent_isbase = false;
			QDateTimeEdit::keyPressEvent(event);
		} else if (qdatetimeedit_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qdatetimeedit_keypressevent_callback(this, cbval1);
		} else {
			QDateTimeEdit::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QWheelEvent* event) override {
		if (qdatetimeedit_wheelevent_isbase) {
			qdatetimeedit_wheelevent_isbase = false;
			QDateTimeEdit::wheelEvent(event);
		} else if (qdatetimeedit_wheelevent_callback != nullptr) {
			QWheelEvent* cbval1 = event;
			qdatetimeedit_wheelevent_callback(this, cbval1);
		} else {
			QDateTimeEdit::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qdatetimeedit_focusinevent_isbase) {
			qdatetimeedit_focusinevent_isbase = false;
			QDateTimeEdit::focusInEvent(event);
		} else if (qdatetimeedit_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qdatetimeedit_focusinevent_callback(this, cbval1);
		} else {
			QDateTimeEdit::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool focusNextPrevChild(bool next) override {
		if (qdatetimeedit_focusnextprevchild_isbase) {
			qdatetimeedit_focusnextprevchild_isbase = false;
			return QDateTimeEdit::focusNextPrevChild(next);
		} else if (qdatetimeedit_focusnextprevchild_callback != nullptr) {
			bool cbval1 = next;
			bool callback_ret = qdatetimeedit_focusnextprevchild_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDateTimeEdit::focusNextPrevChild(next);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (qdatetimeedit_validate_isbase) {
			qdatetimeedit_validate_isbase = false;
			return QDateTimeEdit::validate(input, pos);
		} else if (qdatetimeedit_validate_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			int* cbval2 = pos;
			int callback_ret = qdatetimeedit_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QDateTimeEdit::validate(input, pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& input) const override {
		if (qdatetimeedit_fixup_isbase) {
			qdatetimeedit_fixup_isbase = false;
			QDateTimeEdit::fixup(input);
		} else if (qdatetimeedit_fixup_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			qdatetimeedit_fixup_callback(this, cbval1);
		} else {
			QDateTimeEdit::fixup(input);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QDateTime dateTimeFromText(const QString& text) const override {
		if (qdatetimeedit_datetimefromtext_isbase) {
			qdatetimeedit_datetimefromtext_isbase = false;
			return QDateTimeEdit::dateTimeFromText(text);
		} else if (qdatetimeedit_datetimefromtext_callback != nullptr) {
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval1;
			cbval1.len = text_qb.length();
			cbval1.data = static_cast<const char*>(text_qb.constData());
			QDateTime* callback_ret = qdatetimeedit_datetimefromtext_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QDateTimeEdit::dateTimeFromText(text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textFromDateTime(const QDateTime& dt) const override {
		if (qdatetimeedit_textfromdatetime_isbase) {
			qdatetimeedit_textfromdatetime_isbase = false;
			return QDateTimeEdit::textFromDateTime(dt);
		} else if (qdatetimeedit_textfromdatetime_callback != nullptr) {
			const QDateTime* cbval1 = (const QDateTime*)&dt;
			const char* callback_ret = qdatetimeedit_textfromdatetime_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QDateTimeEdit::textFromDateTime(dt);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QAbstractSpinBox::StepEnabledFlag> stepEnabled() const override {
		if (qdatetimeedit_stepenabled_isbase) {
			qdatetimeedit_stepenabled_isbase = false;
			return QDateTimeEdit::stepEnabled();
		} else if (qdatetimeedit_stepenabled_callback != nullptr) {
			int callback_ret = qdatetimeedit_stepenabled_callback();
			return static_cast<QFlags<QAbstractSpinBox::StepEnabledFlag>>(callback_ret);
		} else {
			return QDateTimeEdit::stepEnabled();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (qdatetimeedit_mousepressevent_isbase) {
			qdatetimeedit_mousepressevent_isbase = false;
			QDateTimeEdit::mousePressEvent(event);
		} else if (qdatetimeedit_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = event;
			qdatetimeedit_mousepressevent_callback(this, cbval1);
		} else {
			QDateTimeEdit::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qdatetimeedit_paintevent_isbase) {
			qdatetimeedit_paintevent_isbase = false;
			QDateTimeEdit::paintEvent(event);
		} else if (qdatetimeedit_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qdatetimeedit_paintevent_callback(this, cbval1);
		} else {
			QDateTimeEdit::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
		if (qdatetimeedit_initstyleoption_isbase) {
			qdatetimeedit_initstyleoption_isbase = false;
			QDateTimeEdit::initStyleOption(option);
		} else if (qdatetimeedit_initstyleoption_callback != nullptr) {
			QStyleOptionSpinBox* cbval1 = option;
			qdatetimeedit_initstyleoption_callback(this, cbval1);
		} else {
			QDateTimeEdit::initStyleOption(option);
		}
	}

	// Friend functions
	friend void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
	friend void QDateTimeEdit_QBaseKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
	friend void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event);
	friend void QDateTimeEdit_QBaseWheelEvent(QDateTimeEdit* self, QWheelEvent* event);
	friend void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
	friend void QDateTimeEdit_QBaseFocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
	friend bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next);
	friend bool QDateTimeEdit_QBaseFocusNextPrevChild(QDateTimeEdit* self, bool next);
	friend int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos);
	friend int QDateTimeEdit_QBaseValidate(const QDateTimeEdit* self, libqt_string input, int* pos);
	friend void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input);
	friend void QDateTimeEdit_QBaseFixup(const QDateTimeEdit* self, libqt_string input);
	friend QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
	friend QDateTime* QDateTimeEdit_QBaseDateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
	friend libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
	friend libqt_string QDateTimeEdit_QBaseTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
	friend int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self);
	friend int QDateTimeEdit_QBaseStepEnabled(const QDateTimeEdit* self);
	friend void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
	friend void QDateTimeEdit_QBaseMousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
	friend void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event);
	friend void QDateTimeEdit_QBasePaintEvent(QDateTimeEdit* self, QPaintEvent* event);
	friend void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
	friend void QDateTimeEdit_QBaseInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
};

#endif


