#include <QAction>
#include <QCloseEvent>
#include <QDockWidget>
#include <QEvent>
#include <QPaintEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionDockWidget>
#include <QWidget>
#include <qdockwidget.h>
#include "libqdockwidget.h"
#include "libqdockwidget.hxx"

QDockWidget* QDockWidget_new(QWidget* parent) {
	 return new VirtualQDockWidget(parent);
}

QDockWidget* QDockWidget_new2(const libqt_string title) {
	 return new VirtualQDockWidget(QString::fromUtf8(title.data, title.len));
}

QDockWidget* QDockWidget_new3() {
	 return new VirtualQDockWidget();
}

QDockWidget* QDockWidget_new4(const libqt_string title, QWidget* parent) {
	 return new VirtualQDockWidget(QString::fromUtf8(title.data, title.len), parent);
}

QDockWidget* QDockWidget_new5(const libqt_string title, QWidget* parent, int flags) {
	 return new VirtualQDockWidget(QString::fromUtf8(title.data, title.len), parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
	 return new VirtualQDockWidget(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QDockWidget_Tr(const char* s) {
	QString _ret = QDockWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QWidget* QDockWidget_Widget(const QDockWidget* self) {
	return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

void QDockWidget_SetFeatures(QDockWidget* self, int features) {
	self->setFeatures(static_cast<QFlags<QDockWidget::DockWidgetFeature>>(features));
}

int QDockWidget_Features(const QDockWidget* self) {
	return self->features();
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
	self->setFloating(floating);
}

bool QDockWidget_IsFloating(const QDockWidget* self) {
	return self->isFloating();
}

void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas) {
	self->setAllowedAreas(static_cast<QFlags<Qt::DockWidgetArea>>(areas));
}

int QDockWidget_AllowedAreas(const QDockWidget* self) {
	return self->allowedAreas();
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
	return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
	self->featuresChanged(static_cast<QFlags<QDockWidget::DockWidgetFeature>>(features));
}

void QDockWidget_Connect_FeaturesChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::featuresChanged, [self, slotFunc](QDockWidget::DockWidgetFeatures features) {
	slotFunc(self, features);
    });
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::topLevelChanged, [self, slotFunc](bool topLevel) {
	slotFunc(self, topLevel);
    });
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<QFlags<Qt::DockWidgetArea>>(allowedAreas));
}

void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::allowedAreasChanged, [self, slotFunc](Qt::DockWidgetAreas allowedAreas) {
	slotFunc(self, allowedAreas);
    });
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
	self->visibilityChanged(visible);
}

void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::visibilityChanged, [self, slotFunc](bool visible) {
	slotFunc(self, visible);
    });
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
	self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::dockLocationChanged, [self, slotFunc](Qt::DockWidgetArea area) {
	slotFunc(self, area);
    });
}

libqt_string QDockWidget_Tr2(const char* s, const char* c) {
	QString _ret = QDockWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDockWidget_Delete(QDockWidget* self) {
    delete self;
}

