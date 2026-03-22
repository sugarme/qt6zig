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
#include <type_traits>
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

void QToolButton_Delete(QToolButton* self) {
    delete self;
}

