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

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return new QVariant(vqgraphicsproxywidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
	} else {
	return new QVariant(self->QGraphicsProxyWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBaseItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ItemChange_IsBase(true);
	return new QVariant(vqgraphicsproxywidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnItemChange(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ItemChange_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return vqgraphicsproxywidget->event(event);
	} else {
	return self->QGraphicsProxyWidget::event(event);
}
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseEvent(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Event_IsBase(true);
	return vqgraphicsproxywidget->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_Event_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return vqgraphicsproxywidget->eventFilter(object, event);
	} else {
	return self->QGraphicsProxyWidget::eventFilter(object, event);
}
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_EventFilter_IsBase(true);
	return vqgraphicsproxywidget->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnEventFilter(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->showEvent(event);
	} else {
	self->QGraphicsProxyWidget::showEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseShowEvent(QGraphicsProxyWidget* self, QShowEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ShowEvent_IsBase(true);
	vqgraphicsproxywidget->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnShowEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->hideEvent(event);
	} else {
	self->QGraphicsProxyWidget::hideEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHideEvent(QGraphicsProxyWidget* self, QHideEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HideEvent_IsBase(true);
	vqgraphicsproxywidget->hideEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHideEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->contextMenuEvent(event);
	} else {
	self->QGraphicsProxyWidget::contextMenuEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ContextMenuEvent_IsBase(true);
	vqgraphicsproxywidget->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnContextMenuEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->dragEnterEvent(event);
	} else {
	self->QGraphicsProxyWidget::dragEnterEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragEnterEvent_IsBase(true);
	vqgraphicsproxywidget->dragEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->dragLeaveEvent(event);
	} else {
	self->QGraphicsProxyWidget::dragLeaveEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragLeaveEvent_IsBase(true);
	vqgraphicsproxywidget->dragLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->dragMoveEvent(event);
	} else {
	self->QGraphicsProxyWidget::dragMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragMoveEvent_IsBase(true);
	vqgraphicsproxywidget->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDragMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->dropEvent(event);
	} else {
	self->QGraphicsProxyWidget::dropEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DropEvent_IsBase(true);
	vqgraphicsproxywidget->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnDropEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->hoverEnterEvent(event);
	} else {
	self->QGraphicsProxyWidget::hoverEnterEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverEnterEvent_IsBase(true);
	vqgraphicsproxywidget->hoverEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverEnterEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->hoverLeaveEvent(event);
	} else {
	self->QGraphicsProxyWidget::hoverLeaveEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverLeaveEvent_IsBase(true);
	vqgraphicsproxywidget->hoverLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverLeaveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->hoverMoveEvent(event);
	} else {
	self->QGraphicsProxyWidget::hoverMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverMoveEvent_IsBase(true);
	vqgraphicsproxywidget->hoverMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnHoverMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_HoverMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->grabMouseEvent(event);
	} else {
	self->QGraphicsProxyWidget::grabMouseEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabMouseEvent_IsBase(true);
	vqgraphicsproxywidget->grabMouseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnGrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_GrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_GrabMouseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->ungrabMouseEvent(event);
	} else {
	self->QGraphicsProxyWidget::ungrabMouseEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabMouseEvent_IsBase(true);
	vqgraphicsproxywidget->ungrabMouseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnUngrabMouseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_UngrabMouseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->mouseMoveEvent(event);
	} else {
	self->QGraphicsProxyWidget::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseMoveEvent_IsBase(true);
	vqgraphicsproxywidget->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseMoveEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->mousePressEvent(event);
	} else {
	self->QGraphicsProxyWidget::mousePressEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MousePressEvent_IsBase(true);
	vqgraphicsproxywidget->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMousePressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->mouseReleaseEvent(event);
	} else {
	self->QGraphicsProxyWidget::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseReleaseEvent_IsBase(true);
	vqgraphicsproxywidget->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->mouseDoubleClickEvent(event);
	} else {
	self->QGraphicsProxyWidget::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseDoubleClickEvent_IsBase(true);
	vqgraphicsproxywidget->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnMouseDoubleClickEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->wheelEvent(event);
	} else {
	self->QGraphicsProxyWidget::wheelEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_WheelEvent_IsBase(true);
	vqgraphicsproxywidget->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnWheelEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->keyPressEvent(event);
	} else {
	self->QGraphicsProxyWidget::keyPressEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyPressEvent_IsBase(true);
	vqgraphicsproxywidget->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyPressEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->keyReleaseEvent(event);
	} else {
	self->QGraphicsProxyWidget::keyReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyReleaseEvent_IsBase(true);
	vqgraphicsproxywidget->keyReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnKeyReleaseEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->focusInEvent(event);
	} else {
	self->QGraphicsProxyWidget::focusInEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusInEvent_IsBase(true);
	vqgraphicsproxywidget->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusInEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->focusOutEvent(event);
	} else {
	self->QGraphicsProxyWidget::focusOutEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusOutEvent_IsBase(true);
	vqgraphicsproxywidget->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusOutEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return vqgraphicsproxywidget->focusNextPrevChild(next);
	} else {
	return self->QGraphicsProxyWidget::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QGraphicsProxyWidget_QBaseFocusNextPrevChild(QGraphicsProxyWidget* self, bool next) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusNextPrevChild_IsBase(true);
	return vqgraphicsproxywidget->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnFocusNextPrevChild(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return new QVariant(vqgraphicsproxywidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
	} else {
	return new QVariant(self->QGraphicsProxyWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}
}

// Base class handler implementation
QVariant* QGraphicsProxyWidget_QBaseInputMethodQuery(const QGraphicsProxyWidget* self, int query) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodQuery_IsBase(true);
	return new QVariant(vqgraphicsproxywidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodQuery(const QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->inputMethodEvent(event);
	} else {
	self->QGraphicsProxyWidget::inputMethodEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodEvent_IsBase(true);
	vqgraphicsproxywidget->inputMethodEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnInputMethodEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return new QSizeF(vqgraphicsproxywidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
	} else {
	return new QSizeF(self->QGraphicsProxyWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Base class handler implementation
QSizeF* QGraphicsProxyWidget_QBaseSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicsproxywidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnSizeHint(const QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<const VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	vqgraphicsproxywidget->resizeEvent(event);
	} else {
	self->QGraphicsProxyWidget::resizeEvent(event);
}
}

// Base class handler implementation
void QGraphicsProxyWidget_QBaseResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ResizeEvent_IsBase(true);
	vqgraphicsproxywidget->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnResizeEvent(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
	return vqgraphicsproxywidget->newProxyWidget(param1);
	} else {
	return self->QGraphicsProxyWidget::newProxyWidget(param1);
}
}

// Base class handler implementation
QGraphicsProxyWidget* QGraphicsProxyWidget_QBaseNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_NewProxyWidget_IsBase(true);
	return vqgraphicsproxywidget->newProxyWidget(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsProxyWidget_OnNewProxyWidget(QGraphicsProxyWidget* self, intptr_t slot) {
	auto* vqgraphicsproxywidget = dynamic_cast<VirtualQGraphicsProxyWidget*>(self);
	if (vqgraphicsproxywidget && vqgraphicsproxywidget->isVirtualQGraphicsProxyWidget) {
vqgraphicsproxywidget->setQGraphicsProxyWidget_NewProxyWidget_Callback(reinterpret_cast<VirtualQGraphicsProxyWidget::QGraphicsProxyWidget_NewProxyWidget_Callback>(slot));
}
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
    delete self;
}

