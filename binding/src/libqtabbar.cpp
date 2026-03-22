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
#include <type_traits>
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

void QTabBar_Delete(QTabBar* self) {
    delete self;
}

