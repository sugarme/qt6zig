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

void QTabWidget_Delete(QTabWidget* self) {
    delete self;
}

