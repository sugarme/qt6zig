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
#include <type_traits>
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

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
    delete self;
}

