#pragma once
#ifndef QSPINBOX_H_C_LIBVIRTUAL
#define QSPINBOX_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSpinBox so that we can call protected methods
class VirtualQSpinBox final : public QSpinBox {

public:
	// Virtual class boolean flag
	bool isVirtualQSpinBox= true;

	// Virtual class public types (including callbacks)
	using QSpinBox_Event_Callback = bool (*)(QSpinBox*, QEvent*);
	using QSpinBox_Validate_Callback = int (*)(const QSpinBox*, libqt_string, int*);
	using QSpinBox_ValueFromText_Callback = int (*)(const QSpinBox*, libqt_string);
	using QSpinBox_TextFromValue_Callback = const char* (*)(const QSpinBox*, int);
	using QSpinBox_Fixup_Callback = void (*)(const QSpinBox*, libqt_string);

protected:
	// Instance callback storage
	mutable QSpinBox_Event_Callback qspinbox_event_callback = nullptr;
	mutable QSpinBox_Validate_Callback qspinbox_validate_callback = nullptr;
	mutable QSpinBox_ValueFromText_Callback qspinbox_valuefromtext_callback = nullptr;
	mutable QSpinBox_TextFromValue_Callback qspinbox_textfromvalue_callback = nullptr;
	mutable QSpinBox_Fixup_Callback qspinbox_fixup_callback = nullptr;

	// Instance base flags
    mutable bool qspinbox_event_isbase = false;
    mutable bool qspinbox_validate_isbase = false;
    mutable bool qspinbox_valuefromtext_isbase = false;
    mutable bool qspinbox_textfromvalue_isbase = false;
    mutable bool qspinbox_fixup_isbase = false;

public:
	VirtualQSpinBox(QWidget* parent): QSpinBox(parent) {};
	VirtualQSpinBox(): QSpinBox() {};

	~VirtualQSpinBox() {
		qspinbox_event_callback = nullptr;
		qspinbox_validate_callback = nullptr;
		qspinbox_valuefromtext_callback = nullptr;
		qspinbox_textfromvalue_callback = nullptr;
		qspinbox_fixup_callback = nullptr;
	}

// Callback setters
	inline void setQSpinBox_Event_Callback(QSpinBox_Event_Callback cb) const { qspinbox_event_callback = cb; }
	inline void setQSpinBox_Validate_Callback(QSpinBox_Validate_Callback cb) const { qspinbox_validate_callback = cb; }
	inline void setQSpinBox_ValueFromText_Callback(QSpinBox_ValueFromText_Callback cb) const { qspinbox_valuefromtext_callback = cb; }
	inline void setQSpinBox_TextFromValue_Callback(QSpinBox_TextFromValue_Callback cb) const { qspinbox_textfromvalue_callback = cb; }
	inline void setQSpinBox_Fixup_Callback(QSpinBox_Fixup_Callback cb) const { qspinbox_fixup_callback = cb; }

// Base flag setters
	inline void setQSpinBox_Event_IsBase(bool value) const { qspinbox_event_isbase = value; }
	inline void setQSpinBox_Validate_IsBase(bool value) const { qspinbox_validate_isbase = value; }
	inline void setQSpinBox_ValueFromText_IsBase(bool value) const { qspinbox_valuefromtext_isbase = value; }
	inline void setQSpinBox_TextFromValue_IsBase(bool value) const { qspinbox_textfromvalue_isbase = value; }
	inline void setQSpinBox_Fixup_IsBase(bool value) const { qspinbox_fixup_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qspinbox_event_isbase) {
			qspinbox_event_isbase = false;
			return QSpinBox::event(event);
		} else if (qspinbox_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qspinbox_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSpinBox::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (qspinbox_validate_isbase) {
			qspinbox_validate_isbase = false;
			return QSpinBox::validate(input, pos);
		} else if (qspinbox_validate_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			int* cbval2 = pos;
			int callback_ret = qspinbox_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QSpinBox::validate(input, pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int valueFromText(const QString& text) const override {
		if (qspinbox_valuefromtext_isbase) {
			qspinbox_valuefromtext_isbase = false;
			return QSpinBox::valueFromText(text);
		} else if (qspinbox_valuefromtext_callback != nullptr) {
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval1;
			cbval1.len = text_qb.length();
			cbval1.data = static_cast<const char*>(text_qb.constData());
			int callback_ret = qspinbox_valuefromtext_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSpinBox::valueFromText(text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textFromValue(int val) const override {
		if (qspinbox_textfromvalue_isbase) {
			qspinbox_textfromvalue_isbase = false;
			return QSpinBox::textFromValue(val);
		} else if (qspinbox_textfromvalue_callback != nullptr) {
			int cbval1 = val;
			const char* callback_ret = qspinbox_textfromvalue_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QSpinBox::textFromValue(val);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& str) const override {
		if (qspinbox_fixup_isbase) {
			qspinbox_fixup_isbase = false;
			QSpinBox::fixup(str);
		} else if (qspinbox_fixup_callback != nullptr) {
			QByteArray str_qb = str.toUtf8();
			libqt_string cbval1;
			cbval1.len = str_qb.length();
			cbval1.data = static_cast<const char*>(str_qb.constData());
			qspinbox_fixup_callback(this, cbval1);
		} else {
			QSpinBox::fixup(str);
		}
	}

	// Friend functions
	friend bool QSpinBox_Event(QSpinBox* self, QEvent* event);
	friend bool QSpinBox_QBaseEvent(QSpinBox* self, QEvent* event);
	friend int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos);
	friend int QSpinBox_QBaseValidate(const QSpinBox* self, libqt_string input, int* pos);
	friend int QSpinBox_ValueFromText(const QSpinBox* self, const libqt_string text);
	friend int QSpinBox_QBaseValueFromText(const QSpinBox* self, const libqt_string text);
	friend libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val);
	friend libqt_string QSpinBox_QBaseTextFromValue(const QSpinBox* self, int val);
	friend void QSpinBox_Fixup(const QSpinBox* self, libqt_string str);
	friend void QSpinBox_QBaseFixup(const QSpinBox* self, libqt_string str);
};

// This class is a subclass of QDoubleSpinBox so that we can call protected methods
class VirtualQDoubleSpinBox final : public QDoubleSpinBox {

public:
	// Virtual class boolean flag
	bool isVirtualQDoubleSpinBox= true;

	// Virtual class public types (including callbacks)
	using QDoubleSpinBox_Validate_Callback = int (*)(const QDoubleSpinBox*, libqt_string, int*);
	using QDoubleSpinBox_ValueFromText_Callback = double (*)(const QDoubleSpinBox*, libqt_string);
	using QDoubleSpinBox_TextFromValue_Callback = const char* (*)(const QDoubleSpinBox*, double);
	using QDoubleSpinBox_Fixup_Callback = void (*)(const QDoubleSpinBox*, libqt_string);

protected:
	// Instance callback storage
	mutable QDoubleSpinBox_Validate_Callback qdoublespinbox_validate_callback = nullptr;
	mutable QDoubleSpinBox_ValueFromText_Callback qdoublespinbox_valuefromtext_callback = nullptr;
	mutable QDoubleSpinBox_TextFromValue_Callback qdoublespinbox_textfromvalue_callback = nullptr;
	mutable QDoubleSpinBox_Fixup_Callback qdoublespinbox_fixup_callback = nullptr;

	// Instance base flags
    mutable bool qdoublespinbox_validate_isbase = false;
    mutable bool qdoublespinbox_valuefromtext_isbase = false;
    mutable bool qdoublespinbox_textfromvalue_isbase = false;
    mutable bool qdoublespinbox_fixup_isbase = false;

public:
	VirtualQDoubleSpinBox(QWidget* parent): QDoubleSpinBox(parent) {};
	VirtualQDoubleSpinBox(): QDoubleSpinBox() {};

	~VirtualQDoubleSpinBox() {
		qdoublespinbox_validate_callback = nullptr;
		qdoublespinbox_valuefromtext_callback = nullptr;
		qdoublespinbox_textfromvalue_callback = nullptr;
		qdoublespinbox_fixup_callback = nullptr;
	}

// Callback setters
	inline void setQDoubleSpinBox_Validate_Callback(QDoubleSpinBox_Validate_Callback cb) const { qdoublespinbox_validate_callback = cb; }
	inline void setQDoubleSpinBox_ValueFromText_Callback(QDoubleSpinBox_ValueFromText_Callback cb) const { qdoublespinbox_valuefromtext_callback = cb; }
	inline void setQDoubleSpinBox_TextFromValue_Callback(QDoubleSpinBox_TextFromValue_Callback cb) const { qdoublespinbox_textfromvalue_callback = cb; }
	inline void setQDoubleSpinBox_Fixup_Callback(QDoubleSpinBox_Fixup_Callback cb) const { qdoublespinbox_fixup_callback = cb; }

// Base flag setters
	inline void setQDoubleSpinBox_Validate_IsBase(bool value) const { qdoublespinbox_validate_isbase = value; }
	inline void setQDoubleSpinBox_ValueFromText_IsBase(bool value) const { qdoublespinbox_valuefromtext_isbase = value; }
	inline void setQDoubleSpinBox_TextFromValue_IsBase(bool value) const { qdoublespinbox_textfromvalue_isbase = value; }
	inline void setQDoubleSpinBox_Fixup_IsBase(bool value) const { qdoublespinbox_fixup_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (qdoublespinbox_validate_isbase) {
			qdoublespinbox_validate_isbase = false;
			return QDoubleSpinBox::validate(input, pos);
		} else if (qdoublespinbox_validate_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			int* cbval2 = pos;
			int callback_ret = qdoublespinbox_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QDoubleSpinBox::validate(input, pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual double valueFromText(const QString& text) const override {
		if (qdoublespinbox_valuefromtext_isbase) {
			qdoublespinbox_valuefromtext_isbase = false;
			return QDoubleSpinBox::valueFromText(text);
		} else if (qdoublespinbox_valuefromtext_callback != nullptr) {
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval1;
			cbval1.len = text_qb.length();
			cbval1.data = static_cast<const char*>(text_qb.constData());
			double callback_ret = qdoublespinbox_valuefromtext_callback(this, cbval1);
			return callback_ret;
		} else {
			return QDoubleSpinBox::valueFromText(text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString textFromValue(double val) const override {
		if (qdoublespinbox_textfromvalue_isbase) {
			qdoublespinbox_textfromvalue_isbase = false;
			return QDoubleSpinBox::textFromValue(val);
		} else if (qdoublespinbox_textfromvalue_callback != nullptr) {
			double cbval1 = val;
			const char* callback_ret = qdoublespinbox_textfromvalue_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QDoubleSpinBox::textFromValue(val);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& str) const override {
		if (qdoublespinbox_fixup_isbase) {
			qdoublespinbox_fixup_isbase = false;
			QDoubleSpinBox::fixup(str);
		} else if (qdoublespinbox_fixup_callback != nullptr) {
			QByteArray str_qb = str.toUtf8();
			libqt_string cbval1;
			cbval1.len = str_qb.length();
			cbval1.data = static_cast<const char*>(str_qb.constData());
			qdoublespinbox_fixup_callback(this, cbval1);
		} else {
			QDoubleSpinBox::fixup(str);
		}
	}
};

#endif


