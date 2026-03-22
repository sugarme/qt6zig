#include <QAbstractSlider>
#include <QDial>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionSlider>
#include <QWidget>
#include <qdial.h>
#include "libqdial.h"
#include "libqdial.hxx"

QDial* QDial_new(QWidget* parent) {
	 return new VirtualQDial(parent);
}

QDial* QDial_new2() {
	 return new VirtualQDial();
}

libqt_string QDial_Tr(const char* s) {
	QString _ret = QDial::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QDial_Wrapping(const QDial* self) {
	return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
	return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
	self->setNotchTarget(target);
}

double QDial_NotchTarget(const QDial* self) {
	return self->notchTarget();
}

bool QDial_NotchesVisible(const QDial* self) {
	return self->notchesVisible();
}

QSize* QDial_SizeHint(const QDial* self) {
	return new QSize(self->sizeHint());
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
	return new QSize(self->minimumSizeHint());
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
	self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
	self->setWrapping(on);
}

libqt_string QDial_Tr2(const char* s, const char* c) {
	QString _ret = QDial::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDial_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDial::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QDial_QBaseSizeHint(const QDial* self) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_SizeHint_IsBase(true);
	return new QSize(vqdial->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSizeHint(const QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_SizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QDial_QBaseMinimumSizeHint(const QDial* self) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MinimumSizeHint_IsBase(true);
	return new QSize(vqdial->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMinimumSizeHint(const QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_MinimumSizeHint_Callback>(slot));
}
}

void QDial_Delete(QDial* self) {
    delete self;
}

