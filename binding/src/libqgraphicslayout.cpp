#include <QEvent>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <qgraphicslayout.h>
#include "libqgraphicslayout.h"
#include "libqgraphicslayout.hxx"

QGraphicsLayout* QGraphicsLayout_new() {
	 return new VirtualQGraphicsLayout();
}

QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsLayout(parent);
}

void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(left, top, right, bottom);
}

void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(left, top, right, bottom);
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
	self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
	return self->isActivated();
}

void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
	self->invalidate();
}

void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
	self->updateGeometry();
}

void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
	self->widgetEvent(e);
}

int QGraphicsLayout_Count(const QGraphicsLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
	return self->itemAt(i);
}

void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
	self->removeAt(index);
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
	QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
	return QGraphicsLayout::instantInvalidatePropagation();
}

// Base class handler implementation
void QGraphicsLayout_QBaseGetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_IsBase(true);
	vqgraphicslayout->getContentsMargins(left, top, right, bottom);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnGetContentsMargins(const QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_GetContentsMargins_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayout_QBaseInvalidate(QGraphicsLayout* self) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_Invalidate_IsBase(true);
	vqgraphicslayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnInvalidate(QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayout_QBaseUpdateGeometry(QGraphicsLayout* self) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_IsBase(true);
	vqgraphicslayout->updateGeometry();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnUpdateGeometry(QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_UpdateGeometry_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayout_QBaseWidgetEvent(QGraphicsLayout* self, QEvent* e) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_WidgetEvent_IsBase(true);
	vqgraphicslayout->widgetEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnWidgetEvent(QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_WidgetEvent_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsLayout_QBaseCount(const QGraphicsLayout* self) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_Count_IsBase(true);
	return vqgraphicslayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnCount(const QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLayout_QBaseItemAt(const QGraphicsLayout* self, int i) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_ItemAt_IsBase(true);
	return vqgraphicslayout->itemAt(i);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnItemAt(const QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayout_QBaseRemoveAt(QGraphicsLayout* self, int index) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_RemoveAt_IsBase(true);
	vqgraphicslayout->removeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnRemoveAt(QGraphicsLayout* self, intptr_t slot) {
	auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
	if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
vqgraphicslayout->setQGraphicsLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_RemoveAt_Callback>(slot));
}
}

void QGraphicsLayout_Delete(QGraphicsLayout* self) {
    delete self;
}

