#include <QAbstractButton>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMenu>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QWidget>
#include <qpushbutton.h>
#include "libqpushbutton.h"
#include "libqpushbutton.hxx"

QPushButton* QPushButton_new(QWidget* parent) {
	 return new VirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	 return new VirtualQPushButton();
}

QPushButton* QPushButton_new3(const libqt_string text) {
	 return new VirtualQPushButton(QString::fromUtf8(text.data, text.len));
}

QPushButton* QPushButton_new4(const QIcon* icon, const libqt_string text) {
	 return new VirtualQPushButton(*icon, QString::fromUtf8(text.data, text.len));
}

QPushButton* QPushButton_new5(const libqt_string text, QWidget* parent) {
	 return new VirtualQPushButton(QString::fromUtf8(text.data, text.len), parent);
}

QPushButton* QPushButton_new6(const QIcon* icon, const libqt_string text, QWidget* parent) {
	 return new VirtualQPushButton(*icon, QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QPushButton_Tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

libqt_string QPushButton_Tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QPushButton_QBaseSizeHint(const QPushButton* self) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_SizeHint_IsBase(true);
	return new QSize(vqpushbutton->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_SizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MinimumSizeHint_IsBase(true);
	return new QSize(vqpushbutton->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QPushButton_Event(QPushButton* self, QEvent* e) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	return vqpushbutton->event(e);
	} else {
	return self->QPushButton::event(e);
}
}

// Base class handler implementation
bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_Event_IsBase(true);
	return vqpushbutton->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_Event_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->paintEvent(param1);
	} else {
	self->QPushButton::paintEvent(param1);
}
}

// Base class handler implementation
void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_PaintEvent_IsBase(true);
	vqpushbutton->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_PaintEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->keyPressEvent(param1);
	} else {
	self->QPushButton::keyPressEvent(param1);
}
}

// Base class handler implementation
void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_KeyPressEvent_IsBase(true);
	vqpushbutton->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->focusInEvent(param1);
	} else {
	self->QPushButton::focusInEvent(param1);
}
}

// Base class handler implementation
void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_FocusInEvent_IsBase(true);
	vqpushbutton->focusInEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_FocusInEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->focusOutEvent(param1);
	} else {
	self->QPushButton::focusOutEvent(param1);
}
}

// Base class handler implementation
void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_FocusOutEvent_IsBase(true);
	vqpushbutton->focusOutEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->mouseMoveEvent(param1);
	} else {
	self->QPushButton::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MouseMoveEvent_IsBase(true);
	vqpushbutton->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	vqpushbutton->initStyleOption(option);
	} else {
	self->QPushButton::initStyleOption(option);
}
}

// Base class handler implementation
void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_InitStyleOption_IsBase(true);
	vqpushbutton->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitStyleOption(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_InitStyleOption_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
	return vqpushbutton->hitButton(*pos);
	} else {
	return self->QPushButton::hitButton(*pos);
}
}

// Base class handler implementation
bool QPushButton_QBaseHitButton(const QPushButton* self, const QPoint* pos) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_HitButton_IsBase(true);
	return vqpushbutton->hitButton(*pos);
}
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHitButton(const QPushButton* self, intptr_t slot) {
	auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
	if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
vqpushbutton->setQPushButton_HitButton_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HitButton_Callback>(slot));
}
}

void QPushButton_Delete(QPushButton* self) {
    delete self;
}

