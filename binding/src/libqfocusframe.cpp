#include <QEvent>
#include <QFocusFrame>
#include <QObject>
#include <QPaintEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QWidget>
#include <qfocusframe.h>
#include "libqfocusframe.h"
#include "libqfocusframe.hxx"

QFocusFrame* QFocusFrame_new(QWidget* parent) {
	 return new VirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
	 return new VirtualQFocusFrame();
}

libqt_string QFocusFrame_Tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
	return self->widget();
}

libqt_string QFocusFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QFocusFrame_Event(QFocusFrame* self, QEvent* e) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
	return vqfocusframe->event(e);
	} else {
	return self->QFocusFrame::event(e);
}
}

// Base class handler implementation
bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_Event_IsBase(true);
	return vqfocusframe->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_Event_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
	return vqfocusframe->eventFilter(param1, param2);
	} else {
	return self->QFocusFrame::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_EventFilter_IsBase(true);
	return vqfocusframe->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_EventFilter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
	vqfocusframe->paintEvent(param1);
	} else {
	self->QFocusFrame::paintEvent(param1);
}
}

// Base class handler implementation
void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_PaintEvent_IsBase(true);
	vqfocusframe->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot) {
	auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_PaintEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option) {
	auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
	vqfocusframe->initStyleOption(option);
	} else {
	self->QFocusFrame::initStyleOption(option);
}
}

// Base class handler implementation
void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option) {
	auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_InitStyleOption_IsBase(true);
	vqfocusframe->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitStyleOption(const QFocusFrame* self, intptr_t slot) {
	auto* vqfocusframe = dynamic_cast<const VirtualQFocusFrame*>(self);
	if (vqfocusframe && vqfocusframe->isVirtualQFocusFrame) {
vqfocusframe->setQFocusFrame_InitStyleOption_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitStyleOption_Callback>(slot));
}
}

void QFocusFrame_Delete(QFocusFrame* self) {
    delete self;
}

