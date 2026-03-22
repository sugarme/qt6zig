#include <QAction>
#include <QActionEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QKeySequence>
#include <QMenu>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionMenuItem>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qmenu.h>
#include "libqmenu.h"
#include "libqmenu.hxx"

QMenu* QMenu_new(QWidget* parent) {
	 return new VirtualQMenu(parent);
}

QMenu* QMenu_new2() {
	 return new VirtualQMenu();
}

QMenu* QMenu_new3(const libqt_string title) {
	 return new VirtualQMenu(QString::fromUtf8(title.data, title.len));
}

QMenu* QMenu_new4(const libqt_string title, QWidget* parent) {
	 return new VirtualQMenu(QString::fromUtf8(title.data, title.len), parent);
}

libqt_string QMenu_Tr(const char* s) {
	QString _ret = QMenu::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QMenu_AddAction(QMenu* self, const libqt_string text, const QObject* receiver, const char* member, const QKeySequence* shortcut) {
	return self->addAction(QString::fromUtf8(text.data, text.len), receiver, member, *shortcut);
}

QAction* QMenu_AddAction2(QMenu* self, const QIcon* icon, const libqt_string text, const QObject* receiver, const char* member, const QKeySequence* shortcut) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), receiver, member, *shortcut);
}

QAction* QMenu_AddMenu(QMenu* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenu_AddMenu2(QMenu* self, const libqt_string title) {
	return self->addMenu(QString::fromUtf8(title.data, title.len));
}

QMenu* QMenu_AddMenu3(QMenu* self, const QIcon* icon, const libqt_string title) {
	return self->addMenu(*icon, QString::fromUtf8(title.data, title.len));
}

QAction* QMenu_AddSeparator(QMenu* self) {
	return self->addSeparator();
}

QAction* QMenu_AddSection(QMenu* self, const libqt_string text) {
	return self->addSection(QString::fromUtf8(text.data, text.len));
}

QAction* QMenu_AddSection2(QMenu* self, const QIcon* icon, const libqt_string text) {
	return self->addSection(*icon, QString::fromUtf8(text.data, text.len));
}

QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

QAction* QMenu_InsertSeparator(QMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenu_InsertSection(QMenu* self, QAction* before, const libqt_string text) {
	return self->insertSection(before, QString::fromUtf8(text.data, text.len));
}

QAction* QMenu_InsertSection2(QMenu* self, QAction* before, const QIcon* icon, const libqt_string text) {
	return self->insertSection(before, *icon, QString::fromUtf8(text.data, text.len));
}

bool QMenu_IsEmpty(const QMenu* self) {
	return self->isEmpty();
}

void QMenu_Clear(QMenu* self) {
	self->clear();
}

void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled) {
	self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_IsTearOffEnabled(const QMenu* self) {
	return self->isTearOffEnabled();
}

bool QMenu_IsTearOffMenuVisible(const QMenu* self) {
	return self->isTearOffMenuVisible();
}

void QMenu_ShowTearOffMenu(QMenu* self) {
	self->showTearOffMenu();
}

void QMenu_ShowTearOffMenu2(QMenu* self, const QPoint* pos) {
	self->showTearOffMenu(*pos);
}

void QMenu_HideTearOffMenu(QMenu* self) {
	self->hideTearOffMenu();
}

void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

QAction* QMenu_DefaultAction(const QMenu* self) {
	return self->defaultAction();
}

void QMenu_SetActiveAction(QMenu* self, QAction* act) {
	self->setActiveAction(act);
}

QAction* QMenu_ActiveAction(const QMenu* self) {
	return self->activeAction();
}

void QMenu_Popup(QMenu* self, const QPoint* pos) {
	self->popup(*pos);
}

QAction* QMenu_Exec(QMenu* self) {
	return self->exec();
}

QAction* QMenu_Exec2(QMenu* self, const QPoint* pos) {
	return self->exec(*pos);
}

QAction* QMenu_Exec3(const libqt_list actions, const QPoint* pos) {
	return QMenu::exec(*actions, *pos);
}

QSize* QMenu_SizeHint(const QMenu* self) {
	return new QSize(self->sizeHint());
}

QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenu_ActionAt(const QMenu* self, const QPoint* param1) {
	return self->actionAt(*param1);
}

QAction* QMenu_MenuAction(const QMenu* self) {
	return self->menuAction();
}

QMenu* QMenu_MenuInAction(const QAction* action) {
	return QMenu::menuInAction(action);
}

libqt_string QMenu_Title(const QMenu* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMenu_SetTitle(QMenu* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

QIcon* QMenu_Icon(const QMenu* self) {
	return new QIcon(self->icon());
}

void QMenu_SetIcon(QMenu* self, const QIcon* icon) {
	self->setIcon(*icon);
}

void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget) {
	self->setNoReplayFor(widget);
}

QPlatformMenu* QMenu_PlatformMenu(QMenu* self) {
	return self->platformMenu();
}

void QMenu_SetPlatformMenu(QMenu* self, QPlatformMenu* platformMenu) {
	self->setPlatformMenu(platformMenu);
}

bool QMenu_SeparatorsCollapsible(const QMenu* self) {
	return self->separatorsCollapsible();
}

void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse) {
	self->setSeparatorsCollapsible(collapse);
}

bool QMenu_ToolTipsVisible(const QMenu* self) {
	return self->toolTipsVisible();
}

void QMenu_SetToolTipsVisible(QMenu* self, bool visible) {
	self->setToolTipsVisible(visible);
}

void QMenu_AboutToShow(QMenu* self) {
	self->aboutToShow();
}

void QMenu_Connect_AboutToShow(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*) = reinterpret_cast<void (*)(QMenu*)>(slot);
    QMenu::connect(self, &QMenu::aboutToShow, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMenu_AboutToHide(QMenu* self) {
	self->aboutToHide();
}

void QMenu_Connect_AboutToHide(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*) = reinterpret_cast<void (*)(QMenu*)>(slot);
    QMenu::connect(self, &QMenu::aboutToHide, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMenu_Triggered(QMenu* self, QAction* action) {
	self->triggered(action);
}

void QMenu_Connect_Triggered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self, &QMenu::triggered, [self, slotFunc](QAction* action) {
	slotFunc(self, action);
    });
}

void QMenu_Hovered(QMenu* self, QAction* action) {
	self->hovered(action);
}

void QMenu_Connect_Hovered(QMenu* self, intptr_t slot) {
    void (*slotFunc)(QMenu*, QAction*) = reinterpret_cast<void (*)(QMenu*, QAction*)>(slot);
    QMenu::connect(self, &QMenu::hovered, [self, slotFunc](QAction* action) {
	slotFunc(self, action);
    });
}

libqt_string QMenu_Tr2(const char* s, const char* c) {
	QString _ret = QMenu::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMenu_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenu::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMenu_Popup2(QMenu* self, const QPoint* pos, QAction* at) {
	self->popup(*pos, at);
}

QAction* QMenu_Exec22(QMenu* self, const QPoint* pos, QAction* at) {
	return self->exec(*pos, at);
}

QAction* QMenu_Exec32(const libqt_list actions, const QPoint* pos, QAction* at) {
	return QMenu::exec(*actions, *pos, at);
}

QAction* QMenu_Exec4(const libqt_list actions, const QPoint* pos, QAction* at, QWidget* parent) {
	return QMenu::exec(*actions, *pos, at, parent);
}

// Base class handler implementation
QSize* QMenu_QBaseSizeHint(const QMenu* self) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_SizeHint_IsBase(true);
	return new QSize(vqmenu->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnSizeHint(const QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_SizeHint_Callback(reinterpret_cast<VirtualQMenu::QMenu_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_ChangeEvent(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->changeEvent(param1);
	} else {
	self->QMenu::changeEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseChangeEvent(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ChangeEvent_IsBase(true);
	vqmenu->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnChangeEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ChangeEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_KeyPressEvent(QMenu* self, QKeyEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->keyPressEvent(param1);
	} else {
	self->QMenu::keyPressEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseKeyPressEvent(QMenu* self, QKeyEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_KeyPressEvent_IsBase(true);
	vqmenu->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnKeyPressEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_KeyPressEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_MouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->mouseReleaseEvent(param1);
	} else {
	self->QMenu::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseMouseReleaseEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MouseReleaseEvent_IsBase(true);
	vqmenu->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseReleaseEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_MousePressEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->mousePressEvent(param1);
	} else {
	self->QMenu::mousePressEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseMousePressEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MousePressEvent_IsBase(true);
	vqmenu->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMousePressEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MousePressEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_MouseMoveEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->mouseMoveEvent(param1);
	} else {
	self->QMenu::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseMouseMoveEvent(QMenu* self, QMouseEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MouseMoveEvent_IsBase(true);
	vqmenu->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnMouseMoveEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_WheelEvent(QMenu* self, QWheelEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->wheelEvent(param1);
	} else {
	self->QMenu::wheelEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseWheelEvent(QMenu* self, QWheelEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_WheelEvent_IsBase(true);
	vqmenu->wheelEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnWheelEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_WheelEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_EnterEvent(QMenu* self, QEnterEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->enterEvent(param1);
	} else {
	self->QMenu::enterEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseEnterEvent(QMenu* self, QEnterEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_EnterEvent_IsBase(true);
	vqmenu->enterEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEnterEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_EnterEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_EnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_LeaveEvent(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->leaveEvent(param1);
	} else {
	self->QMenu::leaveEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseLeaveEvent(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_LeaveEvent_IsBase(true);
	vqmenu->leaveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnLeaveEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_LeaveEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_LeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_HideEvent(QMenu* self, QHideEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->hideEvent(param1);
	} else {
	self->QMenu::hideEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseHideEvent(QMenu* self, QHideEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_HideEvent_IsBase(true);
	vqmenu->hideEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnHideEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_HideEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_PaintEvent(QMenu* self, QPaintEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->paintEvent(param1);
	} else {
	self->QMenu::paintEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBasePaintEvent(QMenu* self, QPaintEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_PaintEvent_IsBase(true);
	vqmenu->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnPaintEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_PaintEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_ActionEvent(QMenu* self, QActionEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->actionEvent(param1);
	} else {
	self->QMenu::actionEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseActionEvent(QMenu* self, QActionEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ActionEvent_IsBase(true);
	vqmenu->actionEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnActionEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ActionEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_ActionEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_TimerEvent(QMenu* self, QTimerEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->timerEvent(param1);
	} else {
	self->QMenu::timerEvent(param1);
}
}

// Base class handler implementation
void QMenu_QBaseTimerEvent(QMenu* self, QTimerEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_TimerEvent_IsBase(true);
	vqmenu->timerEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnTimerEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_TimerEvent_Callback(reinterpret_cast<VirtualQMenu::QMenu_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QMenu_Event(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	return vqmenu->event(param1);
	} else {
	return self->QMenu::event(param1);
}
}

// Base class handler implementation
bool QMenu_QBaseEvent(QMenu* self, QEvent* param1) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_Event_IsBase(true);
	return vqmenu->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnEvent(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_Event_Callback(reinterpret_cast<VirtualQMenu::QMenu_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QMenu_FocusNextPrevChild(QMenu* self, bool next) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	return vqmenu->focusNextPrevChild(next);
	} else {
	return self->QMenu::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QMenu_QBaseFocusNextPrevChild(QMenu* self, bool next) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_FocusNextPrevChild_IsBase(true);
	return vqmenu->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnFocusNextPrevChild(QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMenu::QMenu_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QMenu_InitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	vqmenu->initStyleOption(option, action);
	} else {
	self->QMenu::initStyleOption(option, action);
}
}

// Base class handler implementation
void QMenu_QBaseInitStyleOption(const QMenu* self, QStyleOptionMenuItem* option, const QAction* action) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_InitStyleOption_IsBase(true);
	vqmenu->initStyleOption(option, action);
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnInitStyleOption(const QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_InitStyleOption_Callback(reinterpret_cast<VirtualQMenu::QMenu_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
int QMenu_ColumnCount(const QMenu* self) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
	return vqmenu->columnCount();
	} else {
	return self->QMenu::columnCount();
}
}

// Base class handler implementation
int QMenu_QBaseColumnCount(const QMenu* self) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ColumnCount_IsBase(true);
	return vqmenu->columnCount();
}
}

// Auxiliary method to allow providing re-implementation
void QMenu_OnColumnCount(const QMenu* self, intptr_t slot) {
	auto* vqmenu = dynamic_cast<const VirtualQMenu*>(self);
	if (vqmenu && vqmenu->isVirtualQMenu) {
vqmenu->setQMenu_ColumnCount_Callback(reinterpret_cast<VirtualQMenu::QMenu_ColumnCount_Callback>(slot));
}
}

void QMenu_Delete(QMenu* self) {
    delete self;
}

