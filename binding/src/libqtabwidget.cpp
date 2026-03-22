#include <QEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionTabWidgetFrame>
#include <QTabBar>
#include <QTabWidget>
#include <QWidget>
#include <qtabwidget.h>
#include "libqtabwidget.h"
#include "libqtabwidget.hxx"

QTabWidget* QTabWidget_new(QWidget* parent) {
	 return new VirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
	 return new VirtualQTabWidget();
}

libqt_string QTabWidget_Tr(const char* s) {
	QString _ret = QTabWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, const libqt_string param2) {
	return self->addTab(widget, QString::fromUtf8(param2.data, param2.len));
}

int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, const QIcon* icon, const libqt_string label) {
	return self->addTab(widget, *icon, QString::fromUtf8(label.data, label.len));
}

int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, const libqt_string param3) {
	return self->insertTab(index, widget, QString::fromUtf8(param3.data, param3.len));
}

int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, const QIcon* icon, const libqt_string label) {
	return self->insertTab(index, widget, *icon, QString::fromUtf8(label.data, label.len));
}

void QTabWidget_RemoveTab(QTabWidget* self, int index) {
	self->removeTab(index);
}

bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index) {
	return self->isTabEnabled(index);
}

void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled) {
	self->setTabEnabled(index, enabled);
}

bool QTabWidget_IsTabVisible(const QTabWidget* self, int index) {
	return self->isTabVisible(index);
}

void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible) {
	self->setTabVisible(index, visible);
}

libqt_string QTabWidget_TabText(const QTabWidget* self, int index) {
	QString _ret = self->tabText(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabWidget_SetTabText(QTabWidget* self, int index, const libqt_string text) {
	self->setTabText(index, QString::fromUtf8(text.data, text.len));
}

QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index) {
	return new QIcon(self->tabIcon(index));
}

void QTabWidget_SetTabIcon(QTabWidget* self, int index, const QIcon* icon) {
	self->setTabIcon(index, *icon);
}

void QTabWidget_SetTabToolTip(QTabWidget* self, int index, const libqt_string tip) {
	self->setTabToolTip(index, QString::fromUtf8(tip.data, tip.len));
}

libqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index) {
	QString _ret = self->tabToolTip(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, const libqt_string text) {
	self->setTabWhatsThis(index, QString::fromUtf8(text.data, text.len));
}

libqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index) {
	QString _ret = self->tabWhatsThis(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTabWidget_CurrentIndex(const QTabWidget* self) {
	return self->currentIndex();
}

QWidget* QTabWidget_CurrentWidget(const QTabWidget* self) {
	return self->currentWidget();
}

QWidget* QTabWidget_Widget(const QTabWidget* self, int index) {
	return self->widget(index);
}

int QTabWidget_IndexOf(const QTabWidget* self, const QWidget* widget) {
	return self->indexOf(widget);
}

int QTabWidget_Count(const QTabWidget* self) {
	return self->count();
}

int QTabWidget_TabPosition(const QTabWidget* self) {
	return self->tabPosition();
}

void QTabWidget_SetTabPosition(QTabWidget* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_TabsClosable(const QTabWidget* self) {
	return self->tabsClosable();
}

void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable) {
	self->setTabsClosable(closeable);
}

bool QTabWidget_IsMovable(const QTabWidget* self) {
	return self->isMovable();
}

void QTabWidget_SetMovable(QTabWidget* self, bool movable) {
	self->setMovable(movable);
}

int QTabWidget_TabShape(const QTabWidget* self) {
	return self->tabShape();
}

void QTabWidget_SetTabShape(QTabWidget* self, int s) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

QSize* QTabWidget_SizeHint(const QTabWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self) {
	return new QSize(self->minimumSizeHint());
}

int QTabWidget_HeightForWidth(const QTabWidget* self, int width) {
	return self->heightForWidth(width);
}

bool QTabWidget_HasHeightForWidth(const QTabWidget* self) {
	return self->hasHeightForWidth();
}

void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QTabWidget_CornerWidget(const QTabWidget* self) {
	return self->cornerWidget();
}

int QTabWidget_ElideMode(const QTabWidget* self) {
	return self->elideMode();
}

void QTabWidget_SetElideMode(QTabWidget* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_IconSize(const QTabWidget* self) {
	return new QSize(self->iconSize());
}

void QTabWidget_SetIconSize(QTabWidget* self, const QSize* size) {
	self->setIconSize(*size);
}

bool QTabWidget_UsesScrollButtons(const QTabWidget* self) {
	return self->usesScrollButtons();
}

void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_DocumentMode(const QTabWidget* self) {
	return self->documentMode();
}

void QTabWidget_SetDocumentMode(QTabWidget* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabWidget_TabBarAutoHide(const QTabWidget* self) {
	return self->tabBarAutoHide();
}

void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled) {
	self->setTabBarAutoHide(enabled);
}

void QTabWidget_Clear(QTabWidget* self) {
	self->clear();
}

QTabBar* QTabWidget_TabBar(const QTabWidget* self) {
	return self->tabBar();
}

void QTabWidget_SetCurrentIndex(QTabWidget* self, int index) {
	self->setCurrentIndex(index);
}

void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QTabWidget_CurrentChanged(QTabWidget* self, int index) {
	self->currentChanged(index);
}

void QTabWidget_Connect_CurrentChanged(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::currentChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabWidget_TabCloseRequested(QTabWidget* self, int index) {
	self->tabCloseRequested(index);
}

void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabCloseRequested, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabWidget_TabBarClicked(QTabWidget* self, int index) {
	self->tabBarClicked(index);
}

void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarClicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index) {
	self->tabBarDoubleClicked(index);
}

void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarDoubleClicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

libqt_string QTabWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTabWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTabWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Base class handler implementation
QSize* QTabWidget_QBaseSizeHint(const QTabWidget* self) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_SizeHint_IsBase(true);
	return new QSize(vqtabwidget->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSizeHint(const QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_SizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QTabWidget_QBaseMinimumSizeHint(const QTabWidget* self) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_MinimumSizeHint_IsBase(true);
	return new QSize(vqtabwidget->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMinimumSizeHint(const QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
int QTabWidget_QBaseHeightForWidth(const QTabWidget* self, int width) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_HeightForWidth_IsBase(true);
	return vqtabwidget->heightForWidth(width);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHeightForWidth(const QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
bool QTabWidget_QBaseHasHeightForWidth(const QTabWidget* self) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_HasHeightForWidth_IsBase(true);
	return vqtabwidget->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHasHeightForWidth(const QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HasHeightForWidth_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_TabInserted(QTabWidget* self, int index) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->tabInserted(index);
	} else {
	self->QTabWidget::tabInserted(index);
}
}

// Base class handler implementation
void QTabWidget_QBaseTabInserted(QTabWidget* self, int index) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_TabInserted_IsBase(true);
	vqtabwidget->tabInserted(index);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_TabInserted_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_TabRemoved(QTabWidget* self, int index) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->tabRemoved(index);
	} else {
	self->QTabWidget::tabRemoved(index);
}
}

// Base class handler implementation
void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_TabRemoved_IsBase(true);
	vqtabwidget->tabRemoved(index);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_TabRemoved_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->showEvent(param1);
	} else {
	self->QTabWidget::showEvent(param1);
}
}

// Base class handler implementation
void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ShowEvent_IsBase(true);
	vqtabwidget->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->resizeEvent(param1);
	} else {
	self->QTabWidget::resizeEvent(param1);
}
}

// Base class handler implementation
void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ResizeEvent_IsBase(true);
	vqtabwidget->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->keyPressEvent(param1);
	} else {
	self->QTabWidget::keyPressEvent(param1);
}
}

// Base class handler implementation
void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_KeyPressEvent_IsBase(true);
	vqtabwidget->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->paintEvent(param1);
	} else {
	self->QTabWidget::paintEvent(param1);
}
}

// Base class handler implementation
void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_PaintEvent_IsBase(true);
	vqtabwidget->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->changeEvent(param1);
	} else {
	self->QTabWidget::changeEvent(param1);
}
}

// Base class handler implementation
void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ChangeEvent_IsBase(true);
	vqtabwidget->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QTabWidget_Event(QTabWidget* self, QEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	return vqtabwidget->event(param1);
	} else {
	return self->QTabWidget::event(param1);
}
}

// Base class handler implementation
bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_Event_IsBase(true);
	return vqtabwidget->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_Event_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->initStyleOption(option);
	} else {
	self->QTabWidget::initStyleOption(option);
}
}

// Base class handler implementation
void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_InitStyleOption_IsBase(true);
	vqtabwidget->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitStyleOption(const QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
	vqtabwidget->setTabBar(tabBar);
	} else {
	self->QTabWidget::setTabBar(tabBar);
}
}

// Base class handler implementation
void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_SetTabBar_IsBase(true);
	vqtabwidget->setTabBar(tabBar);
}
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetTabBar(QTabWidget* self, intptr_t slot) {
	auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
	if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
vqtabwidget->setQTabWidget_SetTabBar_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SetTabBar_Callback>(slot));
}
}

void QTabWidget_Delete(QTabWidget* self) {
    delete self;
}

