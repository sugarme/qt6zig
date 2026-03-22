#include <QEvent>
#include <QFrame>
#include <QPaintEvent>
#include <QPainter>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionFrame>
#include <QWidget>
#include <qframe.h>
#include "libqframe.h"
#include "libqframe.hxx"

QFrame* QFrame_new(QWidget* parent) {
	 return new VirtualQFrame(parent);
}

QFrame* QFrame_new2() {
	 return new VirtualQFrame();
}

QFrame* QFrame_new3(QWidget* parent, int f) {
	 return new VirtualQFrame(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QFrame_Tr(const char* s) {
	QString _ret = QFrame::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QFrame_FrameStyle(const QFrame* self) {
	return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(frameStyle);
}

int QFrame_FrameWidth(const QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_SizeHint(const QFrame* self) {
	return new QSize(self->sizeHint());
}

int QFrame_FrameShape(const QFrame* self) {
	return self->frameShape();
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
	self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
	return self->frameShadow();
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
	self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
	return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(lineWidth);
}

int QFrame_MidLineWidth(const QFrame* self) {
	return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(midLineWidth);
}

QRect* QFrame_FrameRect(const QFrame* self) {
	return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, const QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

libqt_string QFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFrame::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFrame::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QFrame_QBaseSizeHint(const QFrame* self) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_SizeHint_IsBase(true);
	return new QSize(vqframe->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSizeHint(const QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_SizeHint_Callback(reinterpret_cast<VirtualQFrame::QFrame_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QFrame_Event(QFrame* self, QEvent* e) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
	return vqframe->event(e);
	} else {
	return self->QFrame::event(e);
}
}

// Base class handler implementation
bool QFrame_QBaseEvent(QFrame* self, QEvent* e) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_Event_IsBase(true);
	return vqframe->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnEvent(QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_Event_Callback(reinterpret_cast<VirtualQFrame::QFrame_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
	vqframe->paintEvent(param1);
	} else {
	self->QFrame::paintEvent(param1);
}
}

// Base class handler implementation
void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_PaintEvent_IsBase(true);
	vqframe->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnPaintEvent(QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_PaintEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QFrame_ChangeEvent(QFrame* self, QEvent* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
	vqframe->changeEvent(param1);
	} else {
	self->QFrame::changeEvent(param1);
}
}

// Base class handler implementation
void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_ChangeEvent_IsBase(true);
	vqframe->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnChangeEvent(QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_ChangeEvent_Callback(reinterpret_cast<VirtualQFrame::QFrame_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
	vqframe->initStyleOption(option);
	} else {
	self->QFrame::initStyleOption(option);
}
}

// Base class handler implementation
void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_InitStyleOption_IsBase(true);
	vqframe->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnInitStyleOption(const QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_InitStyleOption_Callback(reinterpret_cast<VirtualQFrame::QFrame_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
void QFrame_DrawFrame(QFrame* self, QPainter* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
	vqframe->drawFrame(param1);
	} else {
	self->QFrame::drawFrame(param1);
}
}

// Base class handler implementation
void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_DrawFrame_IsBase(true);
	vqframe->drawFrame(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnDrawFrame(QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_DrawFrame_Callback(reinterpret_cast<VirtualQFrame::QFrame_DrawFrame_Callback>(slot));
}
}

void QFrame_Delete(QFrame* self) {
    delete self;
}

