#pragma once
#ifndef QVALIDATOR_H_C_LIBVIRTUAL
#define QVALIDATOR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QValidator so that we can call protected methods
class VirtualQValidator : public QValidator {

public:
	// Virtual class boolean flag
	bool isVirtualQValidator= true;

	// Virtual class public types (including callbacks)
	using QValidator_Validate_Callback = int (*)(const QValidator*, libqt_string, int*);
	using QValidator_Fixup_Callback = void (*)(const QValidator*, libqt_string);

protected:
	// Instance callback storage
	mutable QValidator_Validate_Callback qvalidator_validate_callback = nullptr;
	mutable QValidator_Fixup_Callback qvalidator_fixup_callback = nullptr;

	// Instance base flags
    mutable bool qvalidator_validate_isbase = false;
    mutable bool qvalidator_fixup_isbase = false;

public:
	VirtualQValidator(): QValidator() {};
	VirtualQValidator(QObject* parent): QValidator(parent) {};

	~VirtualQValidator() {
		qvalidator_validate_callback = nullptr;
		qvalidator_fixup_callback = nullptr;
	}

// Callback setters
	inline void setQValidator_Validate_Callback(QValidator_Validate_Callback cb) const { qvalidator_validate_callback = cb; }
	inline void setQValidator_Fixup_Callback(QValidator_Fixup_Callback cb) const { qvalidator_fixup_callback = cb; }

// Base flag setters
	inline void setQValidator_Validate_IsBase(bool value) const { qvalidator_validate_isbase = value; }
	inline void setQValidator_Fixup_IsBase(bool value) const { qvalidator_fixup_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QFlags<QStyle::StateFlag> validate(QString& param1, int& param2) const override {
		if (qvalidator_validate_callback != nullptr) {
			QByteArray param1_qb = param1.toUtf8();
			libqt_string cbval1;
			cbval1.len = param1_qb.length();
			cbval1.data = static_cast<const char*>(param1_qb.constData());
			int* cbval2 = param2;
			int callback_ret = qvalidator_validate_callback(this, cbval1, cbval2);
			return static_cast<QFlags<QStyle::StateFlag>>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& param1) const override {
		if (qvalidator_fixup_isbase) {
			qvalidator_fixup_isbase = false;
			QValidator::fixup(param1);
		} else if (qvalidator_fixup_callback != nullptr) {
			QByteArray param1_qb = param1.toUtf8();
			libqt_string cbval1;
			cbval1.len = param1_qb.length();
			cbval1.data = static_cast<const char*>(param1_qb.constData());
			qvalidator_fixup_callback(this, cbval1);
		} else {
			QValidator::fixup(param1);
		}
	}
};

// This class is a subclass of QIntValidator so that we can call protected methods
class VirtualQIntValidator final : public QIntValidator {

public:
	// Virtual class boolean flag
	bool isVirtualQIntValidator= true;

	// Virtual class public types (including callbacks)
	using QIntValidator_Validate_Callback = int (*)(const QIntValidator*, libqt_string, int*);
	using QIntValidator_Fixup_Callback = void (*)(const QIntValidator*, libqt_string);

protected:
	// Instance callback storage
	mutable QIntValidator_Validate_Callback qintvalidator_validate_callback = nullptr;
	mutable QIntValidator_Fixup_Callback qintvalidator_fixup_callback = nullptr;

	// Instance base flags
    mutable bool qintvalidator_validate_isbase = false;
    mutable bool qintvalidator_fixup_isbase = false;

public:
	VirtualQIntValidator(): QIntValidator() {};
	VirtualQIntValidator(int bottom, int top): QIntValidator(bottom, top) {};
	VirtualQIntValidator(QObject* parent): QIntValidator(parent) {};
	VirtualQIntValidator(int bottom, int top, QObject* parent): QIntValidator(bottom, top, parent) {};

	~VirtualQIntValidator() {
		qintvalidator_validate_callback = nullptr;
		qintvalidator_fixup_callback = nullptr;
	}

// Callback setters
	inline void setQIntValidator_Validate_Callback(QIntValidator_Validate_Callback cb) const { qintvalidator_validate_callback = cb; }
	inline void setQIntValidator_Fixup_Callback(QIntValidator_Fixup_Callback cb) const { qintvalidator_fixup_callback = cb; }

// Base flag setters
	inline void setQIntValidator_Validate_IsBase(bool value) const { qintvalidator_validate_isbase = value; }
	inline void setQIntValidator_Fixup_IsBase(bool value) const { qintvalidator_fixup_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (qintvalidator_validate_isbase) {
			qintvalidator_validate_isbase = false;
			return QIntValidator::validate(param1, param2);
		} else if (qintvalidator_validate_callback != nullptr) {
			QByteArray param1_qb = param1.toUtf8();
			libqt_string cbval1;
			cbval1.len = param1_qb.length();
			cbval1.data = static_cast<const char*>(param1_qb.constData());
			int* cbval2 = param2;
			int callback_ret = qintvalidator_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QIntValidator::validate(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& input) const override {
		if (qintvalidator_fixup_isbase) {
			qintvalidator_fixup_isbase = false;
			QIntValidator::fixup(input);
		} else if (qintvalidator_fixup_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			qintvalidator_fixup_callback(this, cbval1);
		} else {
			QIntValidator::fixup(input);
		}
	}
};

// This class is a subclass of QDoubleValidator so that we can call protected methods
class VirtualQDoubleValidator final : public QDoubleValidator {

public:
	// Virtual class boolean flag
	bool isVirtualQDoubleValidator= true;

	// Virtual class public types (including callbacks)
	using QDoubleValidator_Validate_Callback = int (*)(const QDoubleValidator*, libqt_string, int*);
	using QDoubleValidator_Fixup_Callback = void (*)(const QDoubleValidator*, libqt_string);

protected:
	// Instance callback storage
	mutable QDoubleValidator_Validate_Callback qdoublevalidator_validate_callback = nullptr;
	mutable QDoubleValidator_Fixup_Callback qdoublevalidator_fixup_callback = nullptr;

	// Instance base flags
    mutable bool qdoublevalidator_validate_isbase = false;
    mutable bool qdoublevalidator_fixup_isbase = false;

public:
	VirtualQDoubleValidator(): QDoubleValidator() {};
	VirtualQDoubleValidator(double bottom, double top, int decimals): QDoubleValidator(bottom, top, decimals) {};
	VirtualQDoubleValidator(QObject* parent): QDoubleValidator(parent) {};
	VirtualQDoubleValidator(double bottom, double top, int decimals, QObject* parent): QDoubleValidator(bottom, top, decimals, parent) {};

	~VirtualQDoubleValidator() {
		qdoublevalidator_validate_callback = nullptr;
		qdoublevalidator_fixup_callback = nullptr;
	}

// Callback setters
	inline void setQDoubleValidator_Validate_Callback(QDoubleValidator_Validate_Callback cb) const { qdoublevalidator_validate_callback = cb; }
	inline void setQDoubleValidator_Fixup_Callback(QDoubleValidator_Fixup_Callback cb) const { qdoublevalidator_fixup_callback = cb; }

// Base flag setters
	inline void setQDoubleValidator_Validate_IsBase(bool value) const { qdoublevalidator_validate_isbase = value; }
	inline void setQDoubleValidator_Fixup_IsBase(bool value) const { qdoublevalidator_fixup_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (qdoublevalidator_validate_isbase) {
			qdoublevalidator_validate_isbase = false;
			return QDoubleValidator::validate(param1, param2);
		} else if (qdoublevalidator_validate_callback != nullptr) {
			QByteArray param1_qb = param1.toUtf8();
			libqt_string cbval1;
			cbval1.len = param1_qb.length();
			cbval1.data = static_cast<const char*>(param1_qb.constData());
			int* cbval2 = param2;
			int callback_ret = qdoublevalidator_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QDoubleValidator::validate(param1, param2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void fixup(QString& input) const override {
		if (qdoublevalidator_fixup_isbase) {
			qdoublevalidator_fixup_isbase = false;
			QDoubleValidator::fixup(input);
		} else if (qdoublevalidator_fixup_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			qdoublevalidator_fixup_callback(this, cbval1);
		} else {
			QDoubleValidator::fixup(input);
		}
	}
};

// This class is a subclass of QRegularExpressionValidator so that we can call protected methods
class VirtualQRegularExpressionValidator final : public QRegularExpressionValidator {

public:
	// Virtual class boolean flag
	bool isVirtualQRegularExpressionValidator= true;

	// Virtual class public types (including callbacks)
	using QRegularExpressionValidator_Validate_Callback = int (*)(const QRegularExpressionValidator*, libqt_string, int*);

protected:
	// Instance callback storage
	mutable QRegularExpressionValidator_Validate_Callback qregularexpressionvalidator_validate_callback = nullptr;

	// Instance base flags
    mutable bool qregularexpressionvalidator_validate_isbase = false;

public:
	VirtualQRegularExpressionValidator(): QRegularExpressionValidator() {};
	VirtualQRegularExpressionValidator(const QRegularExpression& re): QRegularExpressionValidator(re) {};
	VirtualQRegularExpressionValidator(QObject* parent): QRegularExpressionValidator(parent) {};
	VirtualQRegularExpressionValidator(const QRegularExpression& re, QObject* parent): QRegularExpressionValidator(re, parent) {};

	~VirtualQRegularExpressionValidator() {
		qregularexpressionvalidator_validate_callback = nullptr;
	}

// Callback setters
	inline void setQRegularExpressionValidator_Validate_Callback(QRegularExpressionValidator_Validate_Callback cb) const { qregularexpressionvalidator_validate_callback = cb; }

// Base flag setters
	inline void setQRegularExpressionValidator_Validate_IsBase(bool value) const { qregularexpressionvalidator_validate_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (qregularexpressionvalidator_validate_isbase) {
			qregularexpressionvalidator_validate_isbase = false;
			return QRegularExpressionValidator::validate(input, pos);
		} else if (qregularexpressionvalidator_validate_callback != nullptr) {
			QByteArray input_qb = input.toUtf8();
			libqt_string cbval1;
			cbval1.len = input_qb.length();
			cbval1.data = static_cast<const char*>(input_qb.constData());
			int* cbval2 = pos;
			int callback_ret = qregularexpressionvalidator_validate_callback(this, cbval1, cbval2);
			return static_cast<QValidator::State>(callback_ret);
		} else {
			return QRegularExpressionValidator::validate(input, pos);
		}
	}
};

#endif


