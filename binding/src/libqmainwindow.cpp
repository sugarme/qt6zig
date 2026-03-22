#include <QByteArray>
#include <QContextMenuEvent>
#include <QDockWidget>
#include <QEvent>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPoint>
#include <QSize>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolBar>
#include <QWidget>
#include <qmainwindow.h>
#include "libqmainwindow.h"
#include "libqmainwindow.hxx"

QMainWindow* QMainWindow_new(QWidget* parent) {
	 return new VirtualQMainWindow(parent);
}

QMainWindow* QMainWindow_new2() {
	 return new VirtualQMainWindow();
}

QMainWindow* QMainWindow_new3(QWidget* parent, int flags) {
	 return new VirtualQMainWindow(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QMainWindow_Tr(const char* s) {
	QString _ret = QMainWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QMainWindow_IconSize(const QMainWindow* self) {
	return new QSize(self->iconSize());
}

void QMainWindow_SetIconSize(QMainWindow* self, const QSize* iconSize) {
	self->setIconSize(*iconSize);
}

int QMainWindow_ToolButtonStyle(const QMainWindow* self) {
	return self->toolButtonStyle();
}

void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

bool QMainWindow_IsAnimated(const QMainWindow* self) {
	return self->isAnimated();
}

bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self) {
	return self->isDockNestingEnabled();
}

bool QMainWindow_DocumentMode(const QMainWindow* self) {
	return self->documentMode();
}

void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled) {
	self->setDocumentMode(enabled);
}

int QMainWindow_TabShape(const QMainWindow* self) {
	return self->tabShape();
}

void QMainWindow_SetTabShape(QMainWindow* self, int tabShape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(tabShape));
}

int QMainWindow_TabPosition(const QMainWindow* self, int area) {
	return self->tabPosition(static_cast<Qt::DockWidgetArea>(area));
}

void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition) {
	self->setTabPosition(static_cast<QFlags<Qt::DockWidgetArea>>(areas), static_cast<QTabWidget::TabPosition>(tabPosition));
}

void QMainWindow_SetDockOptions(QMainWindow* self, int options) {
	self->setDockOptions(static_cast<QFlags<QMainWindow::DockOption>>(options));
}

int QMainWindow_DockOptions(const QMainWindow* self) {
	return self->dockOptions();
}

bool QMainWindow_IsSeparator(const QMainWindow* self, const QPoint* pos) {
	return self->isSeparator(*pos);
}

QMenuBar* QMainWindow_MenuBar(const QMainWindow* self) {
	return self->menuBar();
}

void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar) {
	self->setMenuBar(menubar);
}

QWidget* QMainWindow_MenuWidget(const QMainWindow* self) {
	return self->menuWidget();
}

void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar) {
	self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_StatusBar(const QMainWindow* self) {
	return self->statusBar();
}

void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar) {
	self->setStatusBar(statusbar);
}

QWidget* QMainWindow_CentralWidget(const QMainWindow* self) {
	return self->centralWidget();
}

void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget) {
	self->setCentralWidget(widget);
}

QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self) {
	return self->takeCentralWidget();
}

void QMainWindow_SetCorner(QMainWindow* self, int corner, int area) {
	self->setCorner(static_cast<Qt::Corner>(corner), static_cast<Qt::DockWidgetArea>(area));
}

int QMainWindow_Corner(const QMainWindow* self, int corner) {
	return self->corner(static_cast<Qt::Corner>(corner));
}

void QMainWindow_AddToolBarBreak(QMainWindow* self) {
	self->addToolBarBreak();
}

void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->insertToolBarBreak(before);
}

void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar) {
	self->addToolBar(static_cast<Qt::ToolBarArea>(area), toolbar);
}

void QMainWindow_AddToolBar2(QMainWindow* self, QToolBar* toolbar) {
	self->addToolBar(toolbar);
}

QToolBar* QMainWindow_AddToolBar3(QMainWindow* self, const libqt_string title) {
	return self->addToolBar(QString::fromUtf8(title.data, title.len));
}

void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar) {
	self->insertToolBar(before, toolbar);
}

void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar) {
	self->removeToolBar(toolbar);
}

void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->removeToolBarBreak(before);
}

bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self) {
	return self->unifiedTitleAndToolBarOnMac();
}

int QMainWindow_ToolBarArea(const QMainWindow* self, const QToolBar* toolbar) {
	return self->toolBarArea(toolbar);
}

bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar) {
	return self->toolBarBreak(toolbar);
}

void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget);
}

void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation) {
	self->splitDockWidget(after, dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
	self->tabifyDockWidget(first, second);
}

libqt_list QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget) {
	return self->tabifiedDockWidgets(dockwidget);
}

void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	self->removeDockWidget(dockwidget);
}

bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	return self->restoreDockWidget(dockwidget);
}

int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget) {
	return self->dockWidgetArea(dockwidget);
}

void QMainWindow_ResizeDocks(QMainWindow* self, const libqt_list docks, const libqt_list sizes, int orientation) {
	self->resizeDocks(*docks, *sizes, static_cast<Qt::Orientation>(orientation));
}

libqt_string QMainWindow_SaveState(const QMainWindow* self) {
	QByteArray _qb = self->saveState();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMainWindow_RestoreState(QMainWindow* self, const libqt_string state) {
	return self->restoreState(QByteArray(state.data, state.len));
}

QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self) {
	return self->createPopupMenu();
}

void QMainWindow_SetAnimated(QMainWindow* self, bool enabled) {
	self->setAnimated(enabled);
}

void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled) {
	self->setDockNestingEnabled(enabled);
}

void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set) {
	self->setUnifiedTitleAndToolBarOnMac(set);
}

void QMainWindow_IconSizeChanged(QMainWindow* self, const QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QMainWindow_Connect_IconSizeChanged(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, const QSize*) = reinterpret_cast<void (*)(QMainWindow*, const QSize*)>(slot);
    QMainWindow::connect(self, &QMainWindow::iconSizeChanged, [self, slotFunc](const QSize& iconSize) {
	slotFunc(self, iconSize);
    });
}

void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QMainWindow_Connect_ToolButtonStyleChanged(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, int) = reinterpret_cast<void (*)(QMainWindow*, int)>(slot);
    QMainWindow::connect(self, &QMainWindow::toolButtonStyleChanged, [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
	slotFunc(self, toolButtonStyle);
    });
}

void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
	self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_Connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot) {
    void (*slotFunc)(QMainWindow*, QDockWidget*) = reinterpret_cast<void (*)(QMainWindow*, QDockWidget*)>(slot);
    QMainWindow::connect(self, &QMainWindow::tabifiedDockWidgetActivated, [self, slotFunc](QDockWidget* dockWidget) {
	slotFunc(self, dockWidget);
    });
}

libqt_string QMainWindow_Tr2(const char* s, const char* c) {
	QString _ret = QMainWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMainWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMainWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area) {
	self->addToolBarBreak(static_cast<Qt::ToolBarArea>(area));
}

libqt_string QMainWindow_SaveState1(const QMainWindow* self, int version) {
	QByteArray _qb = self->saveState(version);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMainWindow_RestoreState2(QMainWindow* self, const libqt_string state, int version) {
	return self->restoreState(QByteArray(state.data, state.len), version);
}

// Base class handler implementation
QMenu* QMainWindow_QBaseCreatePopupMenu(QMainWindow* self) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_CreatePopupMenu_IsBase(true);
	return vqmainwindow->createPopupMenu();
}
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnCreatePopupMenu(QMainWindow* self, intptr_t slot) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_CreatePopupMenu_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_CreatePopupMenu_Callback>(slot));
}
}

// Derived class handler implementation
void QMainWindow_ContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
	vqmainwindow->contextMenuEvent(event);
	} else {
	self->QMainWindow::contextMenuEvent(event);
}
}

// Base class handler implementation
void QMainWindow_QBaseContextMenuEvent(QMainWindow* self, QContextMenuEvent* event) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_ContextMenuEvent_IsBase(true);
	vqmainwindow->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnContextMenuEvent(QMainWindow* self, intptr_t slot) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QMainWindow_Event(QMainWindow* self, QEvent* event) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
	return vqmainwindow->event(event);
	} else {
	return self->QMainWindow::event(event);
}
}

// Base class handler implementation
bool QMainWindow_QBaseEvent(QMainWindow* self, QEvent* event) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_Event_IsBase(true);
	return vqmainwindow->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMainWindow_OnEvent(QMainWindow* self, intptr_t slot) {
	auto* vqmainwindow = dynamic_cast<VirtualQMainWindow*>(self);
	if (vqmainwindow && vqmainwindow->isVirtualQMainWindow) {
vqmainwindow->setQMainWindow_Event_Callback(reinterpret_cast<VirtualQMainWindow::QMainWindow_Event_Callback>(slot));
}
}

void QMainWindow_Delete(QMainWindow* self) {
    delete self;
}

