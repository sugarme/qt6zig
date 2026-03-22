#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QObject>
#include <QPainter>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGraphicsItem>
#include <QVariant>
#include <QWidget>
#include <qgraphicsproxywidget.h>
#include "libqgraphicsproxywidget.h"
#include "libqgraphicsproxywidget.hxx"

QGraphicsProxyWidget* QGraphicsProxyWidget_new() {
	 return new VirtualQGraphicsProxyWidget();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsProxyWidget(parent);
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags) {
	 return new VirtualQGraphicsProxyWidget(parent, static_cast<QFlags<Qt::WindowType>>(wFlags));
}

libqt_string QGraphicsProxyWidget_Tr(const char* s) {
	QString _ret = QGraphicsProxyWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self) {
	return self->widget();
}

QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, const QWidget* widget) {
	return new QRectF(self->subWidgetRect(widget));
}

void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self) {
	return self->type();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
	return self->createProxyForChildWidget(child);
}

libqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsProxyWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsProxyWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseSetGeometry(QGraphicsProxyWidget* self, const QRectF* rect) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGeometry_IsBase(true);
	vqgraphicsproxywidget->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSetGeometry(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBasePaint(QGraphicsProxyWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Paint_IsBase(true);
	vqgraphicsproxywidget->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnPaint(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Paint_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Paint_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsProxyWidget_QBaseType(const QGraphicsProxyWidget* self) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Type_IsBase(true);
	return vqgraphicsproxywidget->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnType(const QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Type_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Type_Callback>(slot));
}
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
    delete self;
}

