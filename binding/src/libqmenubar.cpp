#include <QAction>
#include <QActionEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionMenuItem>
#include <QTimerEvent>
#include <QWidget>
#include <qmenubar.h>
#include "libqmenubar.h"
#include "libqmenubar.hxx"

QMenuBar* QMenuBar_new(QWidget* parent) {
	 return new VirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
	 return new VirtualQMenuBar();
}

libqt_string QMenuBar_Tr(const char* s) {
	QString _ret = QMenuBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, const libqt_string title) {
	return self->addMenu(QString::fromUtf8(title.data, title.len));
}

QMenu* QMenuBar_AddMenu3(QMenuBar* self, const QIcon* icon, const libqt_string title) {
	return self->addMenu(*icon, QString::fromUtf8(title.data, title.len));
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
	return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
	return self->isDefaultUp();
}

QSize* QMenuBar_SizeHint(const QMenuBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
	return self->heightForWidth(param1);
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, const QPoint* param1) {
	return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
	return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
	return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_Connect_Triggered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self, &QMenuBar::triggered, [self, slotFunc](QAction* action) {
	slotFunc(self, action);
    });
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_Connect_Hovered(QMenuBar* self, intptr_t slot) {
    void (*slotFunc)(QMenuBar*, QAction*) = reinterpret_cast<void (*)(QMenuBar*, QAction*)>(slot);
    QMenuBar::connect(self, &QMenuBar::hovered, [self, slotFunc](QAction* action) {
	slotFunc(self, action);
    });
}

libqt_string QMenuBar_Tr2(const char* s, const char* c) {
	QString _ret = QMenuBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Base class handler implementation
QSize* QMenuBar_QBaseSizeHint(const QMenuBar* self) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_SizeHint_IsBase(true);
	return new QSize(vqmenubar->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSizeHint(const QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_SizeHint_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QMenuBar_QBaseMinimumSizeHint(const QMenuBar* self) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MinimumSizeHint_IsBase(true);
	return new QSize(vqmenubar->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMinimumSizeHint(const QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
int QMenuBar_QBaseHeightForWidth(const QMenuBar* self, int param1) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_HeightForWidth_IsBase(true);
	return vqmenubar->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnHeightForWidth(const QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_HeightForWidth_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
void QMenuBar_QBaseSetVisible(QMenuBar* self, bool visible) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_SetVisible_IsBase(true);
	vqmenubar->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnSetVisible(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_SetVisible_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_SetVisible_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->changeEvent(param1);
	} else {
	self->QMenuBar::changeEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ChangeEvent_IsBase(true);
	vqmenubar->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnChangeEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ChangeEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->keyPressEvent(param1);
	} else {
	self->QMenuBar::keyPressEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_KeyPressEvent_IsBase(true);
	vqmenubar->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnKeyPressEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->mouseReleaseEvent(param1);
	} else {
	self->QMenuBar::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MouseReleaseEvent_IsBase(true);
	vqmenubar->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseReleaseEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->mousePressEvent(param1);
	} else {
	self->QMenuBar::mousePressEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MousePressEvent_IsBase(true);
	vqmenubar->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMousePressEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MousePressEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->mouseMoveEvent(param1);
	} else {
	self->QMenuBar::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MouseMoveEvent_IsBase(true);
	vqmenubar->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnMouseMoveEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->leaveEvent(param1);
	} else {
	self->QMenuBar::leaveEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_LeaveEvent_IsBase(true);
	vqmenubar->leaveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnLeaveEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_LeaveEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_LeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->paintEvent(param1);
	} else {
	self->QMenuBar::paintEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_PaintEvent_IsBase(true);
	vqmenubar->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnPaintEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_PaintEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->resizeEvent(param1);
	} else {
	self->QMenuBar::resizeEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ResizeEvent_IsBase(true);
	vqmenubar->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnResizeEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ResizeEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->actionEvent(param1);
	} else {
	self->QMenuBar::actionEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ActionEvent_IsBase(true);
	vqmenubar->actionEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnActionEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_ActionEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_ActionEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->focusOutEvent(param1);
	} else {
	self->QMenuBar::focusOutEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_FocusOutEvent_IsBase(true);
	vqmenubar->focusOutEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusOutEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->focusInEvent(param1);
	} else {
	self->QMenuBar::focusInEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_FocusInEvent_IsBase(true);
	vqmenubar->focusInEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnFocusInEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_FocusInEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->timerEvent(param1);
	} else {
	self->QMenuBar::timerEvent(param1);
}
}

// Base class handler implementation
void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_TimerEvent_IsBase(true);
	vqmenubar->timerEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnTimerEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_TimerEvent_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	return vqmenubar->eventFilter(param1, param2);
	} else {
	return self->QMenuBar::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_EventFilter_IsBase(true);
	return vqmenubar->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEventFilter(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_EventFilter_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QMenuBar_Event(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	return vqmenubar->event(param1);
	} else {
	return self->QMenuBar::event(param1);
}
}

// Base class handler implementation
bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_Event_IsBase(true);
	return vqmenubar->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnEvent(QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_Event_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
	vqmenubar->initStyleOption(option, action);
	} else {
	self->QMenuBar::initStyleOption(option, action);
}
}

// Base class handler implementation
void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_InitStyleOption_IsBase(true);
	vqmenubar->initStyleOption(option, action);
}
}

// Auxiliary method to allow providing re-implementation
void QMenuBar_OnInitStyleOption(const QMenuBar* self, intptr_t slot) {
	auto* vqmenubar = dynamic_cast<const VirtualQMenuBar*>(self);
	if (vqmenubar && vqmenubar->isVirtualQMenuBar) {
vqmenubar->setQMenuBar_InitStyleOption_Callback(reinterpret_cast<VirtualQMenuBar::QMenuBar_InitStyleOption_Callback>(slot));
}
}

void QMenuBar_Delete(QMenuBar* self) {
    delete self;
}

