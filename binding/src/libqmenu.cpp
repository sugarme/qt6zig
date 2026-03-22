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
#include <type_traits>
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
	return QMenu::exec(QList<QAction *>(), *pos);
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
	return QMenu::exec(QList<QAction *>(), *pos, at);
}

QAction* QMenu_Exec4(const libqt_list actions, const QPoint* pos, QAction* at, QWidget* parent) {
	return QMenu::exec(QList<QAction *>(), *pos, at, parent);
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

void QMenu_Delete(QMenu* self) {
    delete self;
}

