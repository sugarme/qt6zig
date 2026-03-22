#include <QColor>
#include <QEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionTab>
#include <QTabBar>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabbar.h>
#include "libqtabbar.h"
#include "libqtabbar.hxx"

QTabBar* QTabBar_new(QWidget* parent) {
	 return new VirtualQTabBar(parent);
}

QTabBar* QTabBar_new2() {
	 return new VirtualQTabBar();
}

libqt_string QTabBar_Tr(const char* s) {
	QString _ret = QTabBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTabBar_Shape(const QTabBar* self) {
	return self->shape();
}

void QTabBar_SetShape(QTabBar* self, int shape) {
	self->setShape(static_cast<QTabBar::Shape>(shape));
}

int QTabBar_AddTab(QTabBar* self, const libqt_string text) {
	return self->addTab(QString::fromUtf8(text.data, text.len));
}

int QTabBar_AddTab2(QTabBar* self, const QIcon* icon, const libqt_string text) {
	return self->addTab(*icon, QString::fromUtf8(text.data, text.len));
}

int QTabBar_InsertTab(QTabBar* self, int index, const libqt_string text) {
	return self->insertTab(index, QString::fromUtf8(text.data, text.len));
}

int QTabBar_InsertTab2(QTabBar* self, int index, const QIcon* icon, const libqt_string text) {
	return self->insertTab(index, *icon, QString::fromUtf8(text.data, text.len));
}

void QTabBar_RemoveTab(QTabBar* self, int index) {
	self->removeTab(index);
}

void QTabBar_MoveTab(QTabBar* self, int from, int to) {
	self->moveTab(from, to);
}

bool QTabBar_IsTabEnabled(const QTabBar* self, int index) {
	return self->isTabEnabled(index);
}

void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled) {
	self->setTabEnabled(index, enabled);
}

bool QTabBar_IsTabVisible(const QTabBar* self, int index) {
	return self->isTabVisible(index);
}

void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible) {
	self->setTabVisible(index, visible);
}

libqt_string QTabBar_TabText(const QTabBar* self, int index) {
	QString _ret = self->tabText(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabBar_SetTabText(QTabBar* self, int index, const libqt_string text) {
	self->setTabText(index, QString::fromUtf8(text.data, text.len));
}

QColor* QTabBar_TabTextColor(const QTabBar* self, int index) {
	return new QColor(self->tabTextColor(index));
}

void QTabBar_SetTabTextColor(QTabBar* self, int index, const QColor* color) {
	self->setTabTextColor(index, *color);
}

QIcon* QTabBar_TabIcon(const QTabBar* self, int index) {
	return new QIcon(self->tabIcon(index));
}

void QTabBar_SetTabIcon(QTabBar* self, int index, const QIcon* icon) {
	self->setTabIcon(index, *icon);
}

int QTabBar_ElideMode(const QTabBar* self) {
	return self->elideMode();
}

void QTabBar_SetElideMode(QTabBar* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

void QTabBar_SetTabToolTip(QTabBar* self, int index, const libqt_string tip) {
	self->setTabToolTip(index, QString::fromUtf8(tip.data, tip.len));
}

libqt_string QTabBar_TabToolTip(const QTabBar* self, int index) {
	QString _ret = self->tabToolTip(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const libqt_string text) {
	self->setTabWhatsThis(index, QString::fromUtf8(text.data, text.len));
}

libqt_string QTabBar_TabWhatsThis(const QTabBar* self, int index) {
	QString _ret = self->tabWhatsThis(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabBar_SetTabData(QTabBar* self, int index, const QVariant* data) {
	self->setTabData(index, *data);
}

QVariant* QTabBar_TabData(const QTabBar* self, int index) {
	return new QVariant(self->tabData(index));
}

QRect* QTabBar_TabRect(const QTabBar* self, int index) {
	return new QRect(self->tabRect(index));
}

int QTabBar_TabAt(const QTabBar* self, const QPoint* pos) {
	return self->tabAt(*pos);
}

int QTabBar_CurrentIndex(const QTabBar* self) {
	return self->currentIndex();
}

int QTabBar_Count(const QTabBar* self) {
	return self->count();
}

QSize* QTabBar_SizeHint(const QTabBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabBar_MinimumSizeHint(const QTabBar* self) {
	return new QSize(self->minimumSizeHint());
}

void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase) {
	self->setDrawBase(drawTheBase);
}

bool QTabBar_DrawBase(const QTabBar* self) {
	return self->drawBase();
}

QSize* QTabBar_IconSize(const QTabBar* self) {
	return new QSize(self->iconSize());
}

void QTabBar_SetIconSize(QTabBar* self, const QSize* size) {
	self->setIconSize(*size);
}

bool QTabBar_UsesScrollButtons(const QTabBar* self) {
	return self->usesScrollButtons();
}

void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabBar_TabsClosable(const QTabBar* self) {
	return self->tabsClosable();
}

void QTabBar_SetTabsClosable(QTabBar* self, bool closable) {
	self->setTabsClosable(closable);
}

void QTabBar_SetTabButton(QTabBar* self, int index, int position, QWidget* widget) {
	self->setTabButton(index, static_cast<QTabBar::ButtonPosition>(position), widget);
}

QWidget* QTabBar_TabButton(const QTabBar* self, int index, int position) {
	return self->tabButton(index, static_cast<QTabBar::ButtonPosition>(position));
}

int QTabBar_SelectionBehaviorOnRemove(const QTabBar* self) {
	return self->selectionBehaviorOnRemove();
}

void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, int behavior) {
	self->setSelectionBehaviorOnRemove(static_cast<QTabBar::SelectionBehavior>(behavior));
}

bool QTabBar_Expanding(const QTabBar* self) {
	return self->expanding();
}

void QTabBar_SetExpanding(QTabBar* self, bool enabled) {
	self->setExpanding(enabled);
}

bool QTabBar_IsMovable(const QTabBar* self) {
	return self->isMovable();
}

void QTabBar_SetMovable(QTabBar* self, bool movable) {
	self->setMovable(movable);
}

bool QTabBar_DocumentMode(const QTabBar* self) {
	return self->documentMode();
}

void QTabBar_SetDocumentMode(QTabBar* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabBar_AutoHide(const QTabBar* self) {
	return self->autoHide();
}

void QTabBar_SetAutoHide(QTabBar* self, bool hide) {
	self->setAutoHide(hide);
}

bool QTabBar_ChangeCurrentOnDrag(const QTabBar* self) {
	return self->changeCurrentOnDrag();
}

void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change) {
	self->setChangeCurrentOnDrag(change);
}

libqt_string QTabBar_AccessibleTabName(const QTabBar* self, int index) {
	QString _ret = self->accessibleTabName(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const libqt_string name) {
	self->setAccessibleTabName(index, QString::fromUtf8(name.data, name.len));
}

void QTabBar_SetCurrentIndex(QTabBar* self, int index) {
	self->setCurrentIndex(index);
}

void QTabBar_CurrentChanged(QTabBar* self, int index) {
	self->currentChanged(index);
}

void QTabBar_Connect_CurrentChanged(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::currentChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabBar_TabCloseRequested(QTabBar* self, int index) {
	self->tabCloseRequested(index);
}

void QTabBar_Connect_TabCloseRequested(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabCloseRequested, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabBar_TabMoved(QTabBar* self, int from, int to) {
	self->tabMoved(from, to);
}

void QTabBar_Connect_TabMoved(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int, int) = reinterpret_cast<void (*)(QTabBar*, int, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabMoved, [self, slotFunc](int from, int to) {
	slotFunc(self, from, to);
    });
}

void QTabBar_TabBarClicked(QTabBar* self, int index) {
	self->tabBarClicked(index);
}

void QTabBar_Connect_TabBarClicked(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabBarClicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QTabBar_TabBarDoubleClicked(QTabBar* self, int index) {
	self->tabBarDoubleClicked(index);
}

void QTabBar_Connect_TabBarDoubleClicked(QTabBar* self, intptr_t slot) {
    void (*slotFunc)(QTabBar*, int) = reinterpret_cast<void (*)(QTabBar*, int)>(slot);
    QTabBar::connect(self, &QTabBar::tabBarDoubleClicked, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

libqt_string QTabBar_Tr2(const char* s, const char* c) {
	QString _ret = QTabBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTabBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTabBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QTabBar_QBaseSizeHint(const QTabBar* self) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_SizeHint_IsBase(true);
	return new QSize(vqtabbar->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnSizeHint(const QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_SizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QTabBar_QBaseMinimumSizeHint(const QTabBar* self) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MinimumSizeHint_IsBase(true);
	return new QSize(vqtabbar->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMinimumSizeHint(const QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QTabBar_TabSizeHint(const QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	return new QSize(vqtabbar->tabSizeHint(index));
	} else {
	return new QSize(self->QTabBar::tabSizeHint(index));
}
}

// Base class handler implementation
QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabSizeHint_IsBase(true);
	return new QSize(vqtabbar->tabSizeHint(index));
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabSizeHint(const QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	return new QSize(vqtabbar->minimumTabSizeHint(index));
	} else {
	return new QSize(self->QTabBar::minimumTabSizeHint(index));
}
}

// Base class handler implementation
QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MinimumTabSizeHint_IsBase(true);
	return new QSize(vqtabbar->minimumTabSizeHint(index));
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMinimumTabSizeHint(const QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MinimumTabSizeHint_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MinimumTabSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_TabInserted(QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->tabInserted(index);
	} else {
	self->QTabBar::tabInserted(index);
}
}

// Base class handler implementation
void QTabBar_QBaseTabInserted(QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabInserted_IsBase(true);
	vqtabbar->tabInserted(index);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabInserted(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabInserted_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_TabRemoved(QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->tabRemoved(index);
	} else {
	self->QTabBar::tabRemoved(index);
}
}

// Base class handler implementation
void QTabBar_QBaseTabRemoved(QTabBar* self, int index) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabRemoved_IsBase(true);
	vqtabbar->tabRemoved(index);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabRemoved(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabRemoved_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_TabLayoutChange(QTabBar* self) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->tabLayoutChange();
	} else {
	self->QTabBar::tabLayoutChange();
}
}

// Base class handler implementation
void QTabBar_QBaseTabLayoutChange(QTabBar* self) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabLayoutChange_IsBase(true);
	vqtabbar->tabLayoutChange();
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTabLayoutChange(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TabLayoutChange_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TabLayoutChange_Callback>(slot));
}
}

// Derived class handler implementation
bool QTabBar_Event(QTabBar* self, QEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	return vqtabbar->event(param1);
	} else {
	return self->QTabBar::event(param1);
}
}

// Base class handler implementation
bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_Event_IsBase(true);
	return vqtabbar->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_Event_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->resizeEvent(param1);
	} else {
	self->QTabBar::resizeEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ResizeEvent_IsBase(true);
	vqtabbar->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnResizeEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ResizeEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->showEvent(param1);
	} else {
	self->QTabBar::showEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ShowEvent_IsBase(true);
	vqtabbar->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnShowEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ShowEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->hideEvent(param1);
	} else {
	self->QTabBar::hideEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_HideEvent_IsBase(true);
	vqtabbar->hideEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnHideEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_HideEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->paintEvent(param1);
	} else {
	self->QTabBar::paintEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_PaintEvent_IsBase(true);
	vqtabbar->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnPaintEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_PaintEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->mousePressEvent(param1);
	} else {
	self->QTabBar::mousePressEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MousePressEvent_IsBase(true);
	vqtabbar->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMousePressEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MousePressEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->mouseMoveEvent(param1);
	} else {
	self->QTabBar::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseMoveEvent_IsBase(true);
	vqtabbar->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseMoveEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->mouseReleaseEvent(param1);
	} else {
	self->QTabBar::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseReleaseEvent_IsBase(true);
	vqtabbar->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseReleaseEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->mouseDoubleClickEvent(param1);
	} else {
	self->QTabBar::mouseDoubleClickEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseDoubleClickEvent_IsBase(true);
	vqtabbar->mouseDoubleClickEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnMouseDoubleClickEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->wheelEvent(event);
	} else {
	self->QTabBar::wheelEvent(event);
}
}

// Base class handler implementation
void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_WheelEvent_IsBase(true);
	vqtabbar->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnWheelEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_WheelEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->keyPressEvent(param1);
	} else {
	self->QTabBar::keyPressEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_KeyPressEvent_IsBase(true);
	vqtabbar->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnKeyPressEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->changeEvent(param1);
	} else {
	self->QTabBar::changeEvent(param1);
}
}

// Base class handler implementation
void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ChangeEvent_IsBase(true);
	vqtabbar->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnChangeEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_ChangeEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->timerEvent(event);
	} else {
	self->QTabBar::timerEvent(event);
}
}

// Base class handler implementation
void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TimerEvent_IsBase(true);
	vqtabbar->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnTimerEvent(QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_TimerEvent_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
	vqtabbar->initStyleOption(option, tabIndex);
	} else {
	self->QTabBar::initStyleOption(option, tabIndex);
}
}

// Base class handler implementation
void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_InitStyleOption_IsBase(true);
	vqtabbar->initStyleOption(option, tabIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QTabBar_OnInitStyleOption(const QTabBar* self, intptr_t slot) {
	auto* vqtabbar = dynamic_cast<const VirtualQTabBar*>(self);
	if (vqtabbar && vqtabbar->isVirtualQTabBar) {
vqtabbar->setQTabBar_InitStyleOption_Callback(reinterpret_cast<VirtualQTabBar::QTabBar_InitStyleOption_Callback>(slot));
}
}

void QTabBar_Delete(QTabBar* self) {
    delete self;
}

