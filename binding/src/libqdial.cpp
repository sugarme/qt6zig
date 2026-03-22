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

// Derived class handler implementation
bool QDial_Event(QDial* self, QEvent* e) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	return vqdial->event(e);
	} else {
	return self->QDial::event(e);
}
}

// Base class handler implementation
bool QDial_QBaseEvent(QDial* self, QEvent* e) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_Event_IsBase(true);
	return vqdial->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_Event_Callback(reinterpret_cast<VirtualQDial::QDial_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_ResizeEvent(QDial* self, QResizeEvent* re) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->resizeEvent(re);
	} else {
	self->QDial::resizeEvent(re);
}
}

// Base class handler implementation
void QDial_QBaseResizeEvent(QDial* self, QResizeEvent* re) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_ResizeEvent_IsBase(true);
	vqdial->resizeEvent(re);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnResizeEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_ResizeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_PaintEvent(QDial* self, QPaintEvent* pe) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->paintEvent(pe);
	} else {
	self->QDial::paintEvent(pe);
}
}

// Base class handler implementation
void QDial_QBasePaintEvent(QDial* self, QPaintEvent* pe) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_PaintEvent_IsBase(true);
	vqdial->paintEvent(pe);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_PaintEvent_Callback(reinterpret_cast<VirtualQDial::QDial_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_MousePressEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->mousePressEvent(me);
	} else {
	self->QDial::mousePressEvent(me);
}
}

// Base class handler implementation
void QDial_QBaseMousePressEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MousePressEvent_IsBase(true);
	vqdial->mousePressEvent(me);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMousePressEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MousePressEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->mouseReleaseEvent(me);
	} else {
	self->QDial::mouseReleaseEvent(me);
}
}

// Base class handler implementation
void QDial_QBaseMouseReleaseEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MouseReleaseEvent_IsBase(true);
	vqdial->mouseReleaseEvent(me);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseReleaseEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->mouseMoveEvent(me);
	} else {
	self->QDial::mouseMoveEvent(me);
}
}

// Base class handler implementation
void QDial_QBaseMouseMoveEvent(QDial* self, QMouseEvent* me) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MouseMoveEvent_IsBase(true);
	vqdial->mouseMoveEvent(me);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseMoveEvent(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_SliderChange(QDial* self, int change) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
	} else {
	self->QDial::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Base class handler implementation
void QDial_QBaseSliderChange(QDial* self, int change) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_SliderChange_IsBase(true);
	vqdial->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSliderChange(QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_SliderChange_Callback(reinterpret_cast<VirtualQDial::QDial_SliderChange_Callback>(slot));
}
}

// Derived class handler implementation
void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
	vqdial->initStyleOption(option);
	} else {
	self->QDial::initStyleOption(option);
}
}

// Base class handler implementation
void QDial_QBaseInitStyleOption(const QDial* self, QStyleOptionSlider* option) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_InitStyleOption_IsBase(true);
	vqdial->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitStyleOption(const QDial* self, intptr_t slot) {
	auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
	if (vqdial && vqdial->isVirtualQDial) {
vqdial->setQDial_InitStyleOption_Callback(reinterpret_cast<VirtualQDial::QDial_InitStyleOption_Callback>(slot));
}
}

void QDial_Delete(QDial* self) {
    delete self;
}

