#include <QDoubleValidator>
#include <QIntValidator>
#include <QLocale>
#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QValidator>
#include <qvalidator.h>
#include "libqvalidator.h"
#include "libqvalidator.hxx"

QValidator* QValidator_new() {
	 return new VirtualQValidator();
}

QValidator* QValidator_new2(QObject* parent) {
	 return new VirtualQValidator(parent);
}

libqt_string QValidator_Tr(const char* s) {
	QString _ret = QValidator::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QValidator_SetLocale(QValidator* self, const QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_Locale(const QValidator* self) {
	return new QLocale(self->locale());
}

int QValidator_Validate(const QValidator* self, libqt_string param1, int* param2) {
	return self->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}

void QValidator_Fixup(const QValidator* self, libqt_string param1) {
	self->fixup(QString::fromUtf8(param1.data, param1.len));
}

void QValidator_Changed(QValidator* self) {
	self->changed();
}

void QValidator_Connect_Changed(QValidator* self, intptr_t slot) {
    void (*slotFunc)(QValidator*) = reinterpret_cast<void (*)(QValidator*)>(slot);
    QValidator::connect(self, &QValidator::changed, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QValidator_Tr2(const char* s, const char* c) {
	QString _ret = QValidator::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QValidator::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QValidator_QBaseValidate(const QValidator* self, libqt_string param1, int* param2) {
	auto* vqvalidator = dynamic_cast<const VirtualQValidator*>(self);
	if (vqvalidator && vqvalidator->isVirtualQValidator) {
vqvalidator->setQValidator_Validate_IsBase(true);
	return vqvalidator->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnValidate(const QValidator* self, intptr_t slot) {
	auto* vqvalidator = dynamic_cast<const VirtualQValidator*>(self);
	if (vqvalidator && vqvalidator->isVirtualQValidator) {
vqvalidator->setQValidator_Validate_Callback(reinterpret_cast<VirtualQValidator::QValidator_Validate_Callback>(slot));
}
}

// Base class handler implementation
void QValidator_QBaseFixup(const QValidator* self, libqt_string param1) {
	auto* vqvalidator = dynamic_cast<const VirtualQValidator*>(self);
	if (vqvalidator && vqvalidator->isVirtualQValidator) {
vqvalidator->setQValidator_Fixup_IsBase(true);
	vqvalidator->fixup(QString::fromUtf8(param1.data, param1.len));
}
}

// Auxiliary method to allow providing re-implementation
void QValidator_OnFixup(const QValidator* self, intptr_t slot) {
	auto* vqvalidator = dynamic_cast<const VirtualQValidator*>(self);
	if (vqvalidator && vqvalidator->isVirtualQValidator) {
vqvalidator->setQValidator_Fixup_Callback(reinterpret_cast<VirtualQValidator::QValidator_Fixup_Callback>(slot));
}
}

void QValidator_Delete(QValidator* self) {
    delete self;
}

QIntValidator* QIntValidator_new() {
	 return new VirtualQIntValidator();
}

QIntValidator* QIntValidator_new2(int bottom, int top) {
	 return new VirtualQIntValidator(bottom, top);
}

QIntValidator* QIntValidator_new3(QObject* parent) {
	 return new VirtualQIntValidator(parent);
}

QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent) {
	 return new VirtualQIntValidator(bottom, top, parent);
}

libqt_string QIntValidator_Tr(const char* s) {
	QString _ret = QIntValidator::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QIntValidator_Validate(const QIntValidator* self, libqt_string param1, int* param2) {
	return self->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}

void QIntValidator_Fixup(const QIntValidator* self, libqt_string input) {
	self->fixup(QString::fromUtf8(input.data, input.len));
}

void QIntValidator_SetBottom(QIntValidator* self, int bottom) {
	self->setBottom(bottom);
}

void QIntValidator_SetTop(QIntValidator* self, int top) {
	self->setTop(top);
}

void QIntValidator_SetRange(QIntValidator* self, int bottom, int top) {
	self->setRange(bottom, top);
}

int QIntValidator_Bottom(const QIntValidator* self) {
	return self->bottom();
}

int QIntValidator_Top(const QIntValidator* self) {
	return self->top();
}

void QIntValidator_BottomChanged(QIntValidator* self, int bottom) {
	self->bottomChanged(bottom);
}

void QIntValidator_Connect_BottomChanged(QIntValidator* self, intptr_t slot) {
    void (*slotFunc)(QIntValidator*, int) = reinterpret_cast<void (*)(QIntValidator*, int)>(slot);
    QIntValidator::connect(self, &QIntValidator::bottomChanged, [self, slotFunc](int bottom) {
	slotFunc(self, bottom);
    });
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
	self->topChanged(top);
}

void QIntValidator_Connect_TopChanged(QIntValidator* self, intptr_t slot) {
    void (*slotFunc)(QIntValidator*, int) = reinterpret_cast<void (*)(QIntValidator*, int)>(slot);
    QIntValidator::connect(self, &QIntValidator::topChanged, [self, slotFunc](int top) {
	slotFunc(self, top);
    });
}

libqt_string QIntValidator_Tr2(const char* s, const char* c) {
	QString _ret = QIntValidator::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIntValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QIntValidator_QBaseValidate(const QIntValidator* self, libqt_string param1, int* param2) {
	auto* vqintvalidator = dynamic_cast<const VirtualQIntValidator*>(self);
	if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
vqintvalidator->setQIntValidator_Validate_IsBase(true);
	return vqintvalidator->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnValidate(const QIntValidator* self, intptr_t slot) {
	auto* vqintvalidator = dynamic_cast<const VirtualQIntValidator*>(self);
	if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
vqintvalidator->setQIntValidator_Validate_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Validate_Callback>(slot));
}
}

// Base class handler implementation
void QIntValidator_QBaseFixup(const QIntValidator* self, libqt_string input) {
	auto* vqintvalidator = dynamic_cast<const VirtualQIntValidator*>(self);
	if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
vqintvalidator->setQIntValidator_Fixup_IsBase(true);
	vqintvalidator->fixup(QString::fromUtf8(input.data, input.len));
}
}

// Auxiliary method to allow providing re-implementation
void QIntValidator_OnFixup(const QIntValidator* self, intptr_t slot) {
	auto* vqintvalidator = dynamic_cast<const VirtualQIntValidator*>(self);
	if (vqintvalidator && vqintvalidator->isVirtualQIntValidator) {
vqintvalidator->setQIntValidator_Fixup_Callback(reinterpret_cast<VirtualQIntValidator::QIntValidator_Fixup_Callback>(slot));
}
}

void QIntValidator_Delete(QIntValidator* self) {
    delete self;
}

QDoubleValidator* QDoubleValidator_new() {
	 return new VirtualQDoubleValidator();
}

QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals) {
	 return new VirtualQDoubleValidator(bottom, top, decimals);
}

QDoubleValidator* QDoubleValidator_new3(QObject* parent) {
	 return new VirtualQDoubleValidator(parent);
}

QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent) {
	 return new VirtualQDoubleValidator(bottom, top, decimals, parent);
}

libqt_string QDoubleValidator_Tr(const char* s) {
	QString _ret = QDoubleValidator::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDoubleValidator_Validate(const QDoubleValidator* self, libqt_string param1, int* param2) {
	return self->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}

void QDoubleValidator_Fixup(const QDoubleValidator* self, libqt_string input) {
	self->fixup(QString::fromUtf8(input.data, input.len));
}

void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals) {
	self->setRange(bottom, top, decimals);
}

void QDoubleValidator_SetRange2(QDoubleValidator* self, double bottom, double top) {
	self->setRange(bottom, top);
}

void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom) {
	self->setBottom(bottom);
}

void QDoubleValidator_SetTop(QDoubleValidator* self, double top) {
	self->setTop(top);
}

void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals) {
	self->setDecimals(decimals);
}

void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation) {
	self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_Bottom(const QDoubleValidator* self) {
	return self->bottom();
}

double QDoubleValidator_Top(const QDoubleValidator* self) {
	return self->top();
}

int QDoubleValidator_Decimals(const QDoubleValidator* self) {
	return self->decimals();
}

int QDoubleValidator_Notation(const QDoubleValidator* self) {
	return self->notation();
}

void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom) {
	self->bottomChanged(bottom);
}

void QDoubleValidator_Connect_BottomChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, double) = reinterpret_cast<void (*)(QDoubleValidator*, double)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::bottomChanged, [self, slotFunc](double bottom) {
	slotFunc(self, bottom);
    });
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
	self->topChanged(top);
}

void QDoubleValidator_Connect_TopChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, double) = reinterpret_cast<void (*)(QDoubleValidator*, double)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::topChanged, [self, slotFunc](double top) {
	slotFunc(self, top);
    });
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
	self->decimalsChanged(decimals);
}

void QDoubleValidator_Connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::decimalsChanged, [self, slotFunc](int decimals) {
	slotFunc(self, decimals);
    });
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation) {
	self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_Connect_NotationChanged(QDoubleValidator* self, intptr_t slot) {
    void (*slotFunc)(QDoubleValidator*, int) = reinterpret_cast<void (*)(QDoubleValidator*, int)>(slot);
    QDoubleValidator::connect(self, &QDoubleValidator::notationChanged, [self, slotFunc](QDoubleValidator::Notation notation) {
	slotFunc(self, notation);
    });
}

libqt_string QDoubleValidator_Tr2(const char* s, const char* c) {
	QString _ret = QDoubleValidator::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QDoubleValidator_QBaseValidate(const QDoubleValidator* self, libqt_string param1, int* param2) {
	auto* vqdoublevalidator = dynamic_cast<const VirtualQDoubleValidator*>(self);
	if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
vqdoublevalidator->setQDoubleValidator_Validate_IsBase(true);
	return vqdoublevalidator->validate(QString::fromUtf8(param1.data, param1.len), *param2);
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnValidate(const QDoubleValidator* self, intptr_t slot) {
	auto* vqdoublevalidator = dynamic_cast<const VirtualQDoubleValidator*>(self);
	if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
vqdoublevalidator->setQDoubleValidator_Validate_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Validate_Callback>(slot));
}
}

// Base class handler implementation
void QDoubleValidator_QBaseFixup(const QDoubleValidator* self, libqt_string input) {
	auto* vqdoublevalidator = dynamic_cast<const VirtualQDoubleValidator*>(self);
	if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
vqdoublevalidator->setQDoubleValidator_Fixup_IsBase(true);
	vqdoublevalidator->fixup(QString::fromUtf8(input.data, input.len));
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleValidator_OnFixup(const QDoubleValidator* self, intptr_t slot) {
	auto* vqdoublevalidator = dynamic_cast<const VirtualQDoubleValidator*>(self);
	if (vqdoublevalidator && vqdoublevalidator->isVirtualQDoubleValidator) {
vqdoublevalidator->setQDoubleValidator_Fixup_Callback(reinterpret_cast<VirtualQDoubleValidator::QDoubleValidator_Fixup_Callback>(slot));
}
}

void QDoubleValidator_Delete(QDoubleValidator* self) {
    delete self;
}

QRegularExpressionValidator* QRegularExpressionValidator_new() {
	 return new VirtualQRegularExpressionValidator();
}

QRegularExpressionValidator* QRegularExpressionValidator_new2(const QRegularExpression* re) {
	 return new VirtualQRegularExpressionValidator(*re);
}

QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent) {
	 return new VirtualQRegularExpressionValidator(parent);
}

QRegularExpressionValidator* QRegularExpressionValidator_new4(const QRegularExpression* re, QObject* parent) {
	 return new VirtualQRegularExpressionValidator(*re, parent);
}

libqt_string QRegularExpressionValidator_Tr(const char* s) {
	QString _ret = QRegularExpressionValidator::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
	return self->validate(QString::fromUtf8(input.data, input.len), *pos);
}

QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self) {
	return new QRegularExpression(self->regularExpression());
}

void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, const QRegularExpression* re) {
	self->setRegularExpression(*re);
}

void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, const QRegularExpression* re) {
	self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_Connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot) {
    void (*slotFunc)(QRegularExpressionValidator*, const QRegularExpression*) = reinterpret_cast<void (*)(QRegularExpressionValidator*, const QRegularExpression*)>(slot);
    QRegularExpressionValidator::connect(self, &QRegularExpressionValidator::regularExpressionChanged, [self, slotFunc](const QRegularExpression& re) {
	slotFunc(self, re);
    });
}

libqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QRegularExpressionValidator_QBaseValidate(const QRegularExpressionValidator* self, libqt_string input, int* pos) {
	auto* vqregularexpressionvalidator = dynamic_cast<const VirtualQRegularExpressionValidator*>(self);
	if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
vqregularexpressionvalidator->setQRegularExpressionValidator_Validate_IsBase(true);
	return vqregularexpressionvalidator->validate(QString::fromUtf8(input.data, input.len), *pos);
}
}

// Auxiliary method to allow providing re-implementation
void QRegularExpressionValidator_OnValidate(const QRegularExpressionValidator* self, intptr_t slot) {
	auto* vqregularexpressionvalidator = dynamic_cast<const VirtualQRegularExpressionValidator*>(self);
	if (vqregularexpressionvalidator && vqregularexpressionvalidator->isVirtualQRegularExpressionValidator) {
vqregularexpressionvalidator->setQRegularExpressionValidator_Validate_Callback(reinterpret_cast<VirtualQRegularExpressionValidator::QRegularExpressionValidator_Validate_Callback>(slot));
}
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
    delete self;
}

