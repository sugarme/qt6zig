#include <QAction>
#include <QActionEvent>
#include <QEvent>
#include <QIcon>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionToolBar>
#include <QToolBar>
#include <QWidget>
#include <qtoolbar.h>
#include "libqtoolbar.h"
#include "libqtoolbar.hxx"

QToolBar* QToolBar_new(QWidget* parent) {
	 return new VirtualQToolBar(parent);
}

QToolBar* QToolBar_new2(const libqt_string title) {
	 return new VirtualQToolBar(QString::fromUtf8(title.data, title.len));
}

QToolBar* QToolBar_new3() {
	 return new VirtualQToolBar();
}

QToolBar* QToolBar_new4(const libqt_string title, QWidget* parent) {
	 return new VirtualQToolBar(QString::fromUtf8(title.data, title.len), parent);
}

libqt_string QToolBar_Tr(const char* s) {
	QString _ret = QToolBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_IsMovable(const QToolBar* self) {
	return self->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
	self->setAllowedAreas(static_cast<QFlags<Qt::ToolBarArea>>(areas));
}

int QToolBar_AllowedAreas(const QToolBar* self) {
	return self->allowedAreas();
}

bool QToolBar_IsAreaAllowed(const QToolBar* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_Orientation(const QToolBar* self) {
	return self->orientation();
}

void QToolBar_Clear(QToolBar* self) {
	self->clear();
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
	return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
	return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
	return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action) {
	return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_ActionAt(const QToolBar* self, const QPoint* p) {
	return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y) {
	return self->actionAt(x, y);
}

QAction* QToolBar_ToggleViewAction(const QToolBar* self) {
	return self->toggleViewAction();
}

QSize* QToolBar_IconSize(const QToolBar* self) {
	return new QSize(self->iconSize());
}

int QToolBar_ToolButtonStyle(const QToolBar* self) {
	return self->toolButtonStyle();
}

QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action) {
	return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(const QToolBar* self) {
	return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_IsFloating(const QToolBar* self) {
	return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, const QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_Connect_ActionTriggered(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, QAction*) = reinterpret_cast<void (*)(QToolBar*, QAction*)>(slot);
    QToolBar::connect(self, &QToolBar::actionTriggered, [self, slotFunc](QAction* action) {
	slotFunc(self, action);
    });
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_Connect_MovableChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::movableChanged, [self, slotFunc](bool movable) {
	slotFunc(self, movable);
    });
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<QFlags<Qt::ToolBarArea>>(allowedAreas));
}

void QToolBar_Connect_AllowedAreasChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::allowedAreasChanged, [self, slotFunc](Qt::ToolBarAreas allowedAreas) {
	slotFunc(self, allowedAreas);
    });
}

void QToolBar_OrientationChanged(QToolBar* self, int orientation) {
	self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_Connect_OrientationChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::orientationChanged, [self, slotFunc](Qt::Orientation orientation) {
	slotFunc(self, orientation);
    });
}

void QToolBar_IconSizeChanged(QToolBar* self, const QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_Connect_IconSizeChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, const QSize*) = reinterpret_cast<void (*)(QToolBar*, const QSize*)>(slot);
    QToolBar::connect(self, &QToolBar::iconSizeChanged, [self, slotFunc](const QSize& iconSize) {
	slotFunc(self, iconSize);
    });
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_Connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::toolButtonStyleChanged, [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
	slotFunc(self, toolButtonStyle);
    });
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_Connect_TopLevelChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::topLevelChanged, [self, slotFunc](bool topLevel) {
	slotFunc(self, topLevel);
    });
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_Connect_VisibilityChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::visibilityChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

libqt_string QToolBar_Tr2(const char* s, const char* c) {
	QString _ret = QToolBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QToolBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QToolBar_Delete(QToolBar* self) {
    delete self;
}

