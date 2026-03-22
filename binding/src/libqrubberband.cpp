#include <QEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QRubberBand>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionRubberBand>
#include <QWidget>
#include <qrubberband.h>
#include "libqrubberband.h"
#include "libqrubberband.hxx"

QRubberBand* QRubberBand_new(int param1) {
	 return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
	 return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

libqt_string QRubberBand_Tr(const char* s) {
	QString _ret = QRubberBand::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRubberBand_Shape(const QRubberBand* self) {
	return self->shape();
}

void QRubberBand_SetGeometry(QRubberBand* self, const QRect* r) {
	self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
	self->setGeometry(x, y, w, h);
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
	self->move(x, y);
}

void QRubberBand_Move2(QRubberBand* self, const QPoint* p) {
	self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
	self->resize(w, h);
}

void QRubberBand_Resize2(QRubberBand* self, const QSize* s) {
	self->resize(*s);
}

libqt_string QRubberBand_Tr2(const char* s, const char* c) {
	QString _ret = QRubberBand::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRubberBand_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QRubberBand_Event(QRubberBand* self, QEvent* e) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	return vqrubberband->event(e);
	} else {
	return self->QRubberBand::event(e);
}
}

// Base class handler implementation
bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_Event_IsBase(true);
	return vqrubberband->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_Event_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->paintEvent(param1);
	} else {
	self->QRubberBand::paintEvent(param1);
}
}

// Base class handler implementation
void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_PaintEvent_IsBase(true);
	vqrubberband->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_PaintEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->changeEvent(param1);
	} else {
	self->QRubberBand::changeEvent(param1);
}
}

// Base class handler implementation
void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ChangeEvent_IsBase(true);
	vqrubberband->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ChangeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->showEvent(param1);
	} else {
	self->QRubberBand::showEvent(param1);
}
}

// Base class handler implementation
void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ShowEvent_IsBase(true);
	vqrubberband->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ShowEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->resizeEvent(param1);
	} else {
	self->QRubberBand::resizeEvent(param1);
}
}

// Base class handler implementation
void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ResizeEvent_IsBase(true);
	vqrubberband->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_ResizeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->moveEvent(param1);
	} else {
	self->QRubberBand::moveEvent(param1);
}
}

// Base class handler implementation
void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_MoveEvent_IsBase(true);
	vqrubberband->moveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_MoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
	auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
	vqrubberband->initStyleOption(option);
	} else {
	self->QRubberBand::initStyleOption(option);
}
}

// Base class handler implementation
void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
	auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_InitStyleOption_IsBase(true);
	vqrubberband->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitStyleOption(const QRubberBand* self, intptr_t slot) {
	auto* vqrubberband = dynamic_cast<const VirtualQRubberBand*>(self);
	if (vqrubberband && vqrubberband->isVirtualQRubberBand) {
vqrubberband->setQRubberBand_InitStyleOption_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InitStyleOption_Callback>(slot));
}
}

void QRubberBand_Delete(QRubberBand* self) {
    delete self;
}

