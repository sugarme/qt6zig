#include <QEvent>
#include <QHideEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qsizegrip.h>
#include "libqsizegrip.h"
#include "libqsizegrip.hxx"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	 return new VirtualQSizeGrip(parent);
}

libqt_string QSizeGrip_Tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
	return new QSize(self->sizeHint());
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

libqt_string QSizeGrip_Tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QSizeGrip_QBaseSizeHint(const QSizeGrip* self) {
	auto* vqsizegrip = dynamic_cast<const VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SizeHint_IsBase(true);
	return new QSize(vqsizegrip->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<const VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QSizeGrip_QBaseSetVisible(QSizeGrip* self, bool visible) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SetVisible_IsBase(true);
	vqsizegrip->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SetVisible_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SetVisible_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->paintEvent(param1);
	} else {
	self->QSizeGrip::paintEvent(param1);
}
}

// Base class handler implementation
void QSizeGrip_QBasePaintEvent(QSizeGrip* self, QPaintEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_PaintEvent_IsBase(true);
	vqsizegrip->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_PaintEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->mousePressEvent(param1);
	} else {
	self->QSizeGrip::mousePressEvent(param1);
}
}

// Base class handler implementation
void QSizeGrip_QBaseMousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MousePressEvent_IsBase(true);
	vqsizegrip->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MousePressEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->mouseMoveEvent(param1);
	} else {
	self->QSizeGrip::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QSizeGrip_QBaseMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MouseMoveEvent_IsBase(true);
	vqsizegrip->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->mouseReleaseEvent(mouseEvent);
	} else {
	self->QSizeGrip::mouseReleaseEvent(mouseEvent);
}
}

// Base class handler implementation
void QSizeGrip_QBaseMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MouseReleaseEvent_IsBase(true);
	vqsizegrip->mouseReleaseEvent(mouseEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->moveEvent(moveEvent);
	} else {
	self->QSizeGrip::moveEvent(moveEvent);
}
}

// Base class handler implementation
void QSizeGrip_QBaseMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MoveEvent_IsBase(true);
	vqsizegrip->moveEvent(moveEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_MoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->showEvent(showEvent);
	} else {
	self->QSizeGrip::showEvent(showEvent);
}
}

// Base class handler implementation
void QSizeGrip_QBaseShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_ShowEvent_IsBase(true);
	vqsizegrip->showEvent(showEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_ShowEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	vqsizegrip->hideEvent(hideEvent);
	} else {
	self->QSizeGrip::hideEvent(hideEvent);
}
}

// Base class handler implementation
void QSizeGrip_QBaseHideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_HideEvent_IsBase(true);
	vqsizegrip->hideEvent(hideEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_HideEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	return vqsizegrip->eventFilter(param1, param2);
	} else {
	return self->QSizeGrip::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QSizeGrip_QBaseEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_EventFilter_IsBase(true);
	return vqsizegrip->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_EventFilter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
	return vqsizegrip->event(param1);
	} else {
	return self->QSizeGrip::event(param1);
}
}

// Base class handler implementation
bool QSizeGrip_QBaseEvent(QSizeGrip* self, QEvent* param1) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_Event_IsBase(true);
	return vqsizegrip->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_Event_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Event_Callback>(slot));
}
}

void QSizeGrip_Delete(QSizeGrip* self) {
    delete self;
}

