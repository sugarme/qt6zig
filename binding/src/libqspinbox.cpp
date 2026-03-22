#include <QAbstractSpinBox>
#include <QDoubleSpinBox>
#include <QEvent>
#include <QSpinBox>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qspinbox.h>
#include "libqspinbox.h"
#include "libqspinbox.hxx"

QSpinBox* QSpinBox_new(QWidget* parent) {
	 return new VirtualQSpinBox(parent);
}

QSpinBox* QSpinBox_new2() {
	 return new VirtualQSpinBox();
}

libqt_string QSpinBox_Tr(const char* s) {
	QString _ret = QSpinBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSpinBox_Value(const QSpinBox* self) {
	return self->value();
}

libqt_string QSpinBox_Prefix(const QSpinBox* self) {
	QString _ret = self->prefix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSpinBox_SetPrefix(QSpinBox* self, const libqt_string prefix) {
	self->setPrefix(QString::fromUtf8(prefix.data, prefix.len));
}

libqt_string QSpinBox_Suffix(const QSpinBox* self) {
	QString _ret = self->suffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSpinBox_SetSuffix(QSpinBox* self, const libqt_string suffix) {
	self->setSuffix(QString::fromUtf8(suffix.data, suffix.len));
}

libqt_string QSpinBox_CleanText(const QSpinBox* self) {
	QString _ret = self->cleanText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSpinBox_SingleStep(const QSpinBox* self) {
	return self->singleStep();
}

void QSpinBox_SetSingleStep(QSpinBox* self, int val) {
	self->setSingleStep(val);
}

int QSpinBox_Minimum(const QSpinBox* self) {
	return self->minimum();
}

void QSpinBox_SetMinimum(QSpinBox* self, int min) {
	self->setMinimum(min);
}

int QSpinBox_Maximum(const QSpinBox* self) {
	return self->maximum();
}

void QSpinBox_SetMaximum(QSpinBox* self, int max) {
	self->setMaximum(max);
}

void QSpinBox_SetRange(QSpinBox* self, int min, int max) {
	self->setRange(min, max);
}

int QSpinBox_StepType(const QSpinBox* self) {
	return self->stepType();
}

void QSpinBox_SetStepType(QSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QSpinBox_DisplayIntegerBase(const QSpinBox* self) {
	return self->displayIntegerBase();
}

void QSpinBox_SetDisplayIntegerBase(QSpinBox* self, int base) {
	self->setDisplayIntegerBase(base);
}

void QSpinBox_SetValue(QSpinBox* self, int val) {
	self->setValue(val);
}

void QSpinBox_ValueChanged(QSpinBox* self, int param1) {
	self->valueChanged(param1);
}

void QSpinBox_Connect_ValueChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, int) = reinterpret_cast<void (*)(QSpinBox*, int)>(slot);
    QSpinBox::connect(self, &QSpinBox::valueChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QSpinBox_TextChanged(QSpinBox* self, const libqt_string param1) {
	self->textChanged(QString::fromUtf8(param1.data, param1.len));
}

void QSpinBox_Connect_TextChanged(QSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QSpinBox*, const char*) = reinterpret_cast<void (*)(QSpinBox*, const char*)>(slot);
    QSpinBox::connect(self, &QSpinBox::textChanged, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QSpinBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSpinBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSpinBox_Delete(QSpinBox* self) {
    delete self;
}

QDoubleSpinBox* QDoubleSpinBox_new(QWidget* parent) {
	 return new VirtualQDoubleSpinBox(parent);
}

QDoubleSpinBox* QDoubleSpinBox_new2() {
	 return new VirtualQDoubleSpinBox();
}

libqt_string QDoubleSpinBox_Tr(const char* s) {
	QString _ret = QDoubleSpinBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

double QDoubleSpinBox_Value(const QDoubleSpinBox* self) {
	return self->value();
}

libqt_string QDoubleSpinBox_Prefix(const QDoubleSpinBox* self) {
	QString _ret = self->prefix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDoubleSpinBox_SetPrefix(QDoubleSpinBox* self, const libqt_string prefix) {
	self->setPrefix(QString::fromUtf8(prefix.data, prefix.len));
}

libqt_string QDoubleSpinBox_Suffix(const QDoubleSpinBox* self) {
	QString _ret = self->suffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDoubleSpinBox_SetSuffix(QDoubleSpinBox* self, const libqt_string suffix) {
	self->setSuffix(QString::fromUtf8(suffix.data, suffix.len));
}

libqt_string QDoubleSpinBox_CleanText(const QDoubleSpinBox* self) {
	QString _ret = self->cleanText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

double QDoubleSpinBox_SingleStep(const QDoubleSpinBox* self) {
	return self->singleStep();
}

void QDoubleSpinBox_SetSingleStep(QDoubleSpinBox* self, double val) {
	self->setSingleStep(val);
}

double QDoubleSpinBox_Minimum(const QDoubleSpinBox* self) {
	return self->minimum();
}

void QDoubleSpinBox_SetMinimum(QDoubleSpinBox* self, double min) {
	self->setMinimum(min);
}

double QDoubleSpinBox_Maximum(const QDoubleSpinBox* self) {
	return self->maximum();
}

void QDoubleSpinBox_SetMaximum(QDoubleSpinBox* self, double max) {
	self->setMaximum(max);
}

void QDoubleSpinBox_SetRange(QDoubleSpinBox* self, double min, double max) {
	self->setRange(min, max);
}

int QDoubleSpinBox_StepType(const QDoubleSpinBox* self) {
	return self->stepType();
}

void QDoubleSpinBox_SetStepType(QDoubleSpinBox* self, int stepType) {
	self->setStepType(static_cast<QAbstractSpinBox::StepType>(stepType));
}

int QDoubleSpinBox_Decimals(const QDoubleSpinBox* self) {
	return self->decimals();
}

void QDoubleSpinBox_SetDecimals(QDoubleSpinBox* self, int prec) {
	self->setDecimals(prec);
}

int QDoubleSpinBox_Validate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
	return self->validate(QString::fromUtf8(input.data, input.len), *pos);
}

double QDoubleSpinBox_ValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
	return self->valueFromText(QString::fromUtf8(text.data, text.len));
}

libqt_string QDoubleSpinBox_TextFromValue(const QDoubleSpinBox* self, double val) {
	QString _ret = self->textFromValue(val);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDoubleSpinBox_Fixup(const QDoubleSpinBox* self, libqt_string str) {
	self->fixup(QString::fromUtf8(str.data, str.len));
}

void QDoubleSpinBox_SetValue(QDoubleSpinBox* self, double val) {
	self->setValue(val);
}

void QDoubleSpinBox_ValueChanged(QDoubleSpinBox* self, double param1) {
	self->valueChanged(param1);
}

void QDoubleSpinBox_Connect_ValueChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, double) = reinterpret_cast<void (*)(QDoubleSpinBox*, double)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::valueChanged, [self, slotFunc](double param1) {
	slotFunc(self, param1);
    });
}

void QDoubleSpinBox_TextChanged(QDoubleSpinBox* self, const libqt_string param1) {
	self->textChanged(QString::fromUtf8(param1.data, param1.len));
}

void QDoubleSpinBox_Connect_TextChanged(QDoubleSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QDoubleSpinBox*, const char*) = reinterpret_cast<void (*)(QDoubleSpinBox*, const char*)>(slot);
    QDoubleSpinBox::connect(self, &QDoubleSpinBox::textChanged, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QDoubleSpinBox_Tr2(const char* s, const char* c) {
	QString _ret = QDoubleSpinBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDoubleSpinBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleSpinBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QDoubleSpinBox_QBaseValidate(const QDoubleSpinBox* self, libqt_string input, int* pos) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_Validate_IsBase(true);
	return vqdoublespinbox->validate(QString::fromUtf8(input.data, input.len), *pos);
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValidate(const QDoubleSpinBox* self, intptr_t slot) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_Validate_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Validate_Callback>(slot));
}
}

// Base class handler implementation
double QDoubleSpinBox_QBaseValueFromText(const QDoubleSpinBox* self, const libqt_string text) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_ValueFromText_IsBase(true);
	return vqdoublespinbox->valueFromText(QString::fromUtf8(text.data, text.len));
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnValueFromText(const QDoubleSpinBox* self, intptr_t slot) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_ValueFromText_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_ValueFromText_Callback>(slot));
}
}

// Base class handler implementation
libqt_string QDoubleSpinBox_QBaseTextFromValue(const QDoubleSpinBox* self, double val) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_TextFromValue_IsBase(true);
	QString _ret = vqdoublespinbox->textFromValue(val);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnTextFromValue(const QDoubleSpinBox* self, intptr_t slot) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_TextFromValue_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_TextFromValue_Callback>(slot));
}
}

// Base class handler implementation
void QDoubleSpinBox_QBaseFixup(const QDoubleSpinBox* self, libqt_string str) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_Fixup_IsBase(true);
	vqdoublespinbox->fixup(QString::fromUtf8(str.data, str.len));
}
}

// Auxiliary method to allow providing re-implementation
void QDoubleSpinBox_OnFixup(const QDoubleSpinBox* self, intptr_t slot) {
	auto* vqdoublespinbox = dynamic_cast<const VirtualQDoubleSpinBox*>(self);
	if (vqdoublespinbox && vqdoublespinbox->isVirtualQDoubleSpinBox) {
vqdoublespinbox->setQDoubleSpinBox_Fixup_Callback(reinterpret_cast<VirtualQDoubleSpinBox::QDoubleSpinBox_Fixup_Callback>(slot));
}
}

void QDoubleSpinBox_Delete(QDoubleSpinBox* self) {
    delete self;
}

