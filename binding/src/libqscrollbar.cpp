#include <QAbstractSlider>
#include <QContextMenuEvent>
#include <QEvent>
#include <QHideEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionSlider>
#include <QWheelEvent>
#include <QWidget>
#include <qscrollbar.h>
#include "libqscrollbar.h"
#include "libqscrollbar.hxx"

QScrollBar* QScrollBar_new(QWidget* parent) {
	 return new VirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
	 return new VirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
	 return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
	 return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

libqt_string QScrollBar_Tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

libqt_string QScrollBar_Tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SizeHint_IsBase(true);
	return new QSize(vqscrollbar->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_Event_IsBase(true);
	return vqscrollbar->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_Event_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->wheelEvent(param1);
	} else {
	self->QScrollBar::wheelEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_WheelEvent_IsBase(true);
	vqscrollbar->wheelEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_WheelEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->paintEvent(param1);
	} else {
	self->QScrollBar::paintEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_PaintEvent_IsBase(true);
	vqscrollbar->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_PaintEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->mousePressEvent(param1);
	} else {
	self->QScrollBar::mousePressEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MousePressEvent_IsBase(true);
	vqscrollbar->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MousePressEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->mouseReleaseEvent(param1);
	} else {
	self->QScrollBar::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MouseReleaseEvent_IsBase(true);
	vqscrollbar->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->mouseMoveEvent(param1);
	} else {
	self->QScrollBar::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MouseMoveEvent_IsBase(true);
	vqscrollbar->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->hideEvent(param1);
	} else {
	self->QScrollBar::hideEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_HideEvent_IsBase(true);
	vqscrollbar->hideEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_HideEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_SliderChange(QScrollBar* self, int change) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
	} else {
	self->QScrollBar::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Base class handler implementation
void QScrollBar_QBaseSliderChange(QScrollBar* self, int change) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SliderChange_IsBase(true);
	vqscrollbar->sliderChange(static_cast<QAbstractSlider::SliderChange>(change));
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_SliderChange_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SliderChange_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->contextMenuEvent(param1);
	} else {
	self->QScrollBar::contextMenuEvent(param1);
}
}

// Base class handler implementation
void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_ContextMenuEvent_IsBase(true);
	vqscrollbar->contextMenuEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
	vqscrollbar->initStyleOption(option);
	} else {
	self->QScrollBar::initStyleOption(option);
}
}

// Base class handler implementation
void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_InitStyleOption_IsBase(true);
	vqscrollbar->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitStyleOption(const QScrollBar* self, intptr_t slot) {
	auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
	if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
vqscrollbar->setQScrollBar_InitStyleOption_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InitStyleOption_Callback>(slot));
}
}

void QScrollBar_Delete(QScrollBar* self) {
    delete self;
}

