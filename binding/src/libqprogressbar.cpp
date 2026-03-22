#include <QEvent>
#include <QPaintEvent>
#include <QProgressBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionProgressBar>
#include <QWidget>
#include <qprogressbar.h>
#include "libqprogressbar.h"
#include "libqprogressbar.hxx"

QProgressBar* QProgressBar_new(QWidget* parent) {
	 return new VirtualQProgressBar(parent);
}

QProgressBar* QProgressBar_new2() {
	 return new VirtualQProgressBar();
}

libqt_string QProgressBar_Tr(const char* s) {
	QString _ret = QProgressBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QProgressBar_Minimum(const QProgressBar* self) {
	return self->minimum();
}

int QProgressBar_Maximum(const QProgressBar* self) {
	return self->maximum();
}

int QProgressBar_Value(const QProgressBar* self) {
	return self->value();
}

libqt_string QProgressBar_Text(const QProgressBar* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProgressBar_SetTextVisible(QProgressBar* self, bool visible) {
	self->setTextVisible(visible);
}

bool QProgressBar_IsTextVisible(const QProgressBar* self) {
	return self->isTextVisible();
}

int QProgressBar_Alignment(const QProgressBar* self) {
	return self->alignment();
}

void QProgressBar_SetAlignment(QProgressBar* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QSize* QProgressBar_SizeHint(const QProgressBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QProgressBar_Orientation(const QProgressBar* self) {
	return self->orientation();
}

void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert) {
	self->setInvertedAppearance(invert);
}

bool QProgressBar_InvertedAppearance(const QProgressBar* self) {
	return self->invertedAppearance();
}

void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection) {
	self->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

int QProgressBar_TextDirection(const QProgressBar* self) {
	return self->textDirection();
}

void QProgressBar_SetFormat(QProgressBar* self, const libqt_string format) {
	self->setFormat(QString::fromUtf8(format.data, format.len));
}

void QProgressBar_ResetFormat(QProgressBar* self) {
	self->resetFormat();
}

libqt_string QProgressBar_Format(const QProgressBar* self) {
	QString _ret = self->format();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QProgressBar_Reset(QProgressBar* self) {
	self->reset();
}

void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum) {
	self->setRange(minimum, maximum);
}

void QProgressBar_SetMinimum(QProgressBar* self, int minimum) {
	self->setMinimum(minimum);
}

void QProgressBar_SetMaximum(QProgressBar* self, int maximum) {
	self->setMaximum(maximum);
}

void QProgressBar_SetValue(QProgressBar* self, int value) {
	self->setValue(value);
}

void QProgressBar_SetOrientation(QProgressBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QProgressBar_ValueChanged(QProgressBar* self, int value) {
	self->valueChanged(value);
}

void QProgressBar_Connect_ValueChanged(QProgressBar* self, intptr_t slot) {
    void (*slotFunc)(QProgressBar*, int) = reinterpret_cast<void (*)(QProgressBar*, int)>(slot);
    QProgressBar::connect(self, &QProgressBar::valueChanged, [self, slotFunc](int value) {
	slotFunc(self, value);
    });
}

libqt_string QProgressBar_Tr2(const char* s, const char* c) {
	QString _ret = QProgressBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QProgressBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
libqt_string QProgressBar_QBaseText(const QProgressBar* self) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_Text_IsBase(true);
	QString _ret = vqprogressbar->text();
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
void QProgressBar_OnText(const QProgressBar* self, intptr_t slot) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_Text_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Text_Callback>(slot));
}
}

// Base class handler implementation
QSize* QProgressBar_QBaseSizeHint(const QProgressBar* self) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_SizeHint_IsBase(true);
	return new QSize(vqprogressbar->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSizeHint(const QProgressBar* self, intptr_t slot) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_SizeHint_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QProgressBar_QBaseMinimumSizeHint(const QProgressBar* self) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_MinimumSizeHint_IsBase(true);
	return new QSize(vqprogressbar->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMinimumSizeHint(const QProgressBar* self, intptr_t slot) {
	auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
	if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
vqprogressbar->setQProgressBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MinimumSizeHint_Callback>(slot));
}
}

void QProgressBar_Delete(QProgressBar* self) {
    delete self;
}

