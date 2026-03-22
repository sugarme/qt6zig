#include <QAbstractButton>
#include <QAction>
#include <QActionEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QMenu>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTimerEvent>
#include <QToolButton>
#include <QWidget>
#include <qtoolbutton.h>
#include "libqtoolbutton.h"
#include "libqtoolbutton.hxx"

QToolButton* QToolButton_new(QWidget* parent) {
	 return new VirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
	 return new VirtualQToolButton();
}

libqt_string QToolButton_Tr(const char* s) {
	QString _ret = QToolButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QToolButton_SizeHint(const QToolButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QToolButton_MinimumSizeHint(const QToolButton* self) {
	return new QSize(self->minimumSizeHint());
}

int QToolButton_ToolButtonStyle(const QToolButton* self) {
	return self->toolButtonStyle();
}

int QToolButton_ArrowType(const QToolButton* self) {
	return self->arrowType();
}

void QToolButton_SetArrowType(QToolButton* self, int typeVal) {
	self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QToolButton_Menu(const QToolButton* self) {
	return self->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, int mode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_PopupMode(const QToolButton* self) {
	return self->popupMode();
}

QAction* QToolButton_DefaultAction(const QToolButton* self) {
	return self->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
	self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(const QToolButton* self) {
	return self->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
	self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, int style) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
	self->triggered(param1);
}

void QToolButton_Connect_Triggered(QToolButton* self, intptr_t slot) {
    void (*slotFunc)(QToolButton*, QAction*) = reinterpret_cast<void (*)(QToolButton*, QAction*)>(slot);
    QToolButton::connect(self, &QToolButton::triggered, [self, slotFunc](QAction* param1) {
	slotFunc(self, param1);
    });
}

libqt_string QToolButton_Tr2(const char* s, const char* c) {
	QString _ret = QToolButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QToolButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QToolButton_QBaseSizeHint(const QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_SizeHint_IsBase(true);
	return new QSize(vqtoolbutton->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSizeHint(const QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_SizeHint_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QToolButton_QBaseMinimumSizeHint(const QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MinimumSizeHint_IsBase(true);
	return new QSize(vqtoolbutton->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMinimumSizeHint(const QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QToolButton_Event(QToolButton* self, QEvent* e) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	return vqtoolbutton->event(e);
	} else {
	return self->QToolButton::event(e);
}
}

// Base class handler implementation
bool QToolButton_QBaseEvent(QToolButton* self, QEvent* e) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_Event_IsBase(true);
	return vqtoolbutton->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_Event_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->mousePressEvent(param1);
	} else {
	self->QToolButton::mousePressEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseMousePressEvent(QToolButton* self, QMouseEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MousePressEvent_IsBase(true);
	vqtoolbutton->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMousePressEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MousePressEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->mouseReleaseEvent(param1);
	} else {
	self->QToolButton::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseMouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MouseReleaseEvent_IsBase(true);
	vqtoolbutton->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseReleaseEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->paintEvent(param1);
	} else {
	self->QToolButton::paintEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBasePaintEvent(QToolButton* self, QPaintEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_PaintEvent_IsBase(true);
	vqtoolbutton->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnPaintEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_PaintEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->actionEvent(param1);
	} else {
	self->QToolButton::actionEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseActionEvent(QToolButton* self, QActionEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_ActionEvent_IsBase(true);
	vqtoolbutton->actionEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnActionEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_ActionEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ActionEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->enterEvent(param1);
	} else {
	self->QToolButton::enterEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseEnterEvent(QToolButton* self, QEnterEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_EnterEvent_IsBase(true);
	vqtoolbutton->enterEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEnterEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_EnterEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_EnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->leaveEvent(param1);
	} else {
	self->QToolButton::leaveEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseLeaveEvent(QToolButton* self, QEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_LeaveEvent_IsBase(true);
	vqtoolbutton->leaveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnLeaveEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_LeaveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_LeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->timerEvent(param1);
	} else {
	self->QToolButton::timerEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseTimerEvent(QToolButton* self, QTimerEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_TimerEvent_IsBase(true);
	vqtoolbutton->timerEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnTimerEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_TimerEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->changeEvent(param1);
	} else {
	self->QToolButton::changeEvent(param1);
}
}

// Base class handler implementation
void QToolButton_QBaseChangeEvent(QToolButton* self, QEvent* param1) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_ChangeEvent_IsBase(true);
	vqtoolbutton->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnChangeEvent(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_ChangeEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QToolButton_HitButton(const QToolButton* self, const QPoint* pos) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	return vqtoolbutton->hitButton(*pos);
	} else {
	return self->QToolButton::hitButton(*pos);
}
}

// Base class handler implementation
bool QToolButton_QBaseHitButton(const QToolButton* self, const QPoint* pos) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_HitButton_IsBase(true);
	return vqtoolbutton->hitButton(*pos);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHitButton(const QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_HitButton_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_HitButton_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_CheckStateSet(QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->checkStateSet();
	} else {
	self->QToolButton::checkStateSet();
}
}

// Base class handler implementation
void QToolButton_QBaseCheckStateSet(QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_CheckStateSet_IsBase(true);
	vqtoolbutton->checkStateSet();
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCheckStateSet(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_CheckStateSet_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_CheckStateSet_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_NextCheckState(QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->nextCheckState();
	} else {
	self->QToolButton::nextCheckState();
}
}

// Base class handler implementation
void QToolButton_QBaseNextCheckState(QToolButton* self) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_NextCheckState_IsBase(true);
	vqtoolbutton->nextCheckState();
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnNextCheckState(QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_NextCheckState_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_NextCheckState_Callback>(slot));
}
}

// Derived class handler implementation
void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
	vqtoolbutton->initStyleOption(option);
	} else {
	self->QToolButton::initStyleOption(option);
}
}

// Base class handler implementation
void QToolButton_QBaseInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_InitStyleOption_IsBase(true);
	vqtoolbutton->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInitStyleOption(const QToolButton* self, intptr_t slot) {
	auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
	if (vqtoolbutton && vqtoolbutton->isVirtualQToolButton) {
vqtoolbutton->setQToolButton_InitStyleOption_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_InitStyleOption_Callback>(slot));
}
}

void QToolButton_Delete(QToolButton* self) {
    delete self;
}

