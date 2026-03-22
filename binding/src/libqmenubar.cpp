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

void QMenuBar_Delete(QMenuBar* self) {
    delete self;
}

