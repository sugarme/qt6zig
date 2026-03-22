#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qmdisubwindow.h>
#include "libqmdisubwindow.h"
#include "libqmdisubwindow.hxx"

QMdiSubWindow* QMdiSubWindow_new(QWidget* parent) {
	 return new VirtualQMdiSubWindow(parent);
}

QMdiSubWindow* QMdiSubWindow_new2() {
	 return new VirtualQMdiSubWindow();
}

QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags) {
	 return new VirtualQMdiSubWindow(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QMdiSubWindow_Tr(const char* s) {
	QString _ret = QMdiSubWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
	return new QSize(self->minimumSizeHint());
}

void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self) {
	return self->widget();
}

QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self) {
	return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self) {
	return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self) {
	return self->isShaded();
}

void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1) {
	return self->testOption(static_cast<QMdiSubWindow::SubWindowOption>(param1));
}

void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step) {
	self->setKeyboardSingleStep(step);
}

int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self) {
	return self->keyboardSingleStep();
}

void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step) {
	self->setKeyboardPageStep(step);
}

int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self) {
	return self->keyboardPageStep();
}

void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
	self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self) {
	return self->systemMenu();
}

QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self) {
	return self->mdiArea();
}

void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState) {
	self->windowStateChanged(static_cast<QFlags<Qt::WindowState>>(oldState), static_cast<QFlags<Qt::WindowState>>(newState));
}

void QMdiSubWindow_Connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot) {
    void (*slotFunc)(QMdiSubWindow*, int, int) = reinterpret_cast<void (*)(QMdiSubWindow*, int, int)>(slot);
    QMdiSubWindow::connect(self, &QMdiSubWindow::windowStateChanged, [self, slotFunc](Qt::WindowStates oldState, Qt::WindowStates newState) {
	slotFunc(self, oldState, newState);
    });
}

void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self) {
	self->aboutToActivate();
}

void QMdiSubWindow_Connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot) {
    void (*slotFunc)(QMdiSubWindow*) = reinterpret_cast<void (*)(QMdiSubWindow*)>(slot);
    QMdiSubWindow::connect(self, &QMdiSubWindow::aboutToActivate, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
	self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
	self->showShaded();
}

libqt_string QMdiSubWindow_Tr2(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

// Base class handler implementation
QSize* QMdiSubWindow_QBaseSizeHint(const QMdiSubWindow* self) {
	auto* vqmdisubwindow = dynamic_cast<const VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_SizeHint_IsBase(true);
	return new QSize(vqmdisubwindow->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnSizeHint(const QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<const VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_SizeHint_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QMdiSubWindow_QBaseMinimumSizeHint(const QMdiSubWindow* self) {
	auto* vqmdisubwindow = dynamic_cast<const VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MinimumSizeHint_IsBase(true);
	return new QSize(vqmdisubwindow->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMinimumSizeHint(const QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<const VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	return vqmdisubwindow->eventFilter(object, event);
	} else {
	return self->QMdiSubWindow::eventFilter(object, event);
}
}

// Base class handler implementation
bool QMdiSubWindow_QBaseEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_EventFilter_IsBase(true);
	return vqmdisubwindow->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEventFilter(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_EventFilter_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	return vqmdisubwindow->event(event);
	} else {
	return self->QMdiSubWindow::event(event);
}
}

// Base class handler implementation
bool QMdiSubWindow_QBaseEvent(QMdiSubWindow* self, QEvent* event) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_Event_IsBase(true);
	return vqmdisubwindow->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_Event_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->showEvent(showEvent);
	} else {
	self->QMdiSubWindow::showEvent(showEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseShowEvent(QMdiSubWindow* self, QShowEvent* showEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ShowEvent_IsBase(true);
	vqmdisubwindow->showEvent(showEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnShowEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ShowEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->hideEvent(hideEvent);
	} else {
	self->QMdiSubWindow::hideEvent(hideEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_HideEvent_IsBase(true);
	vqmdisubwindow->hideEvent(hideEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnHideEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_HideEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->changeEvent(changeEvent);
	} else {
	self->QMdiSubWindow::changeEvent(changeEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseChangeEvent(QMdiSubWindow* self, QEvent* changeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ChangeEvent_IsBase(true);
	vqmdisubwindow->changeEvent(changeEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChangeEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ChangeEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->closeEvent(closeEvent);
	} else {
	self->QMdiSubWindow::closeEvent(closeEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_CloseEvent_IsBase(true);
	vqmdisubwindow->closeEvent(closeEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnCloseEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_CloseEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->leaveEvent(leaveEvent);
	} else {
	self->QMdiSubWindow::leaveEvent(leaveEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_LeaveEvent_IsBase(true);
	vqmdisubwindow->leaveEvent(leaveEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnLeaveEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_LeaveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_LeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->resizeEvent(resizeEvent);
	} else {
	self->QMdiSubWindow::resizeEvent(resizeEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ResizeEvent_IsBase(true);
	vqmdisubwindow->resizeEvent(resizeEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnResizeEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->timerEvent(timerEvent);
	} else {
	self->QMdiSubWindow::timerEvent(timerEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_TimerEvent_IsBase(true);
	vqmdisubwindow->timerEvent(timerEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnTimerEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_TimerEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->moveEvent(moveEvent);
	} else {
	self->QMdiSubWindow::moveEvent(moveEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MoveEvent_IsBase(true);
	vqmdisubwindow->moveEvent(moveEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMoveEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MoveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->paintEvent(paintEvent);
	} else {
	self->QMdiSubWindow::paintEvent(paintEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBasePaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_PaintEvent_IsBase(true);
	vqmdisubwindow->paintEvent(paintEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnPaintEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_PaintEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->mousePressEvent(mouseEvent);
	} else {
	self->QMdiSubWindow::mousePressEvent(mouseEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MousePressEvent_IsBase(true);
	vqmdisubwindow->mousePressEvent(mouseEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMousePressEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->mouseDoubleClickEvent(mouseEvent);
	} else {
	self->QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseDoubleClickEvent_IsBase(true);
	vqmdisubwindow->mouseDoubleClickEvent(mouseEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseDoubleClickEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->mouseReleaseEvent(mouseEvent);
	} else {
	self->QMdiSubWindow::mouseReleaseEvent(mouseEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseReleaseEvent_IsBase(true);
	vqmdisubwindow->mouseReleaseEvent(mouseEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseReleaseEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->mouseMoveEvent(mouseEvent);
	} else {
	self->QMdiSubWindow::mouseMoveEvent(mouseEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseMoveEvent_IsBase(true);
	vqmdisubwindow->mouseMoveEvent(mouseEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnMouseMoveEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->keyPressEvent(keyEvent);
	} else {
	self->QMdiSubWindow::keyPressEvent(keyEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_KeyPressEvent_IsBase(true);
	vqmdisubwindow->keyPressEvent(keyEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnKeyPressEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->contextMenuEvent(contextMenuEvent);
	} else {
	self->QMdiSubWindow::contextMenuEvent(contextMenuEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ContextMenuEvent_IsBase(true);
	vqmdisubwindow->contextMenuEvent(contextMenuEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnContextMenuEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->focusInEvent(focusInEvent);
	} else {
	self->QMdiSubWindow::focusInEvent(focusInEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_FocusInEvent_IsBase(true);
	vqmdisubwindow->focusInEvent(focusInEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusInEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->focusOutEvent(focusOutEvent);
	} else {
	self->QMdiSubWindow::focusOutEvent(focusOutEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_FocusOutEvent_IsBase(true);
	vqmdisubwindow->focusOutEvent(focusOutEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnFocusOutEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
	vqmdisubwindow->childEvent(childEvent);
	} else {
	self->QMdiSubWindow::childEvent(childEvent);
}
}

// Base class handler implementation
void QMdiSubWindow_QBaseChildEvent(QMdiSubWindow* self, QChildEvent* childEvent) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ChildEvent_IsBase(true);
	vqmdisubwindow->childEvent(childEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiSubWindow_OnChildEvent(QMdiSubWindow* self, intptr_t slot) {
	auto* vqmdisubwindow = dynamic_cast<VirtualQMdiSubWindow*>(self);
	if (vqmdisubwindow && vqmdisubwindow->isVirtualQMdiSubWindow) {
vqmdisubwindow->setQMdiSubWindow_ChildEvent_Callback(reinterpret_cast<VirtualQMdiSubWindow::QMdiSubWindow_ChildEvent_Callback>(slot));
}
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
    delete self;
}

