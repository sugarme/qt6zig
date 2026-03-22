#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslinearlayout.h>
#include "libqgraphicslinearlayout.h"
#include "libqgraphicslinearlayout.hxx"

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
	 return new VirtualQGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation) {
	 return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self) {
	return self->orientation();
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
	self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
	self->insertItem(index, item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
	self->insertStretch(index);
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
	self->removeAt(index);
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
	self->setSpacing(spacing);
}

double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self) {
	return self->spacing();
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(index, spacing);
}

double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index) {
	return self->itemSpacing(index);
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, stretch);
}

int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->alignment(item);
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index) {
	return self->itemAt(index);
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self) {
	self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(stretch);
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(index, stretch);
}

void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent) {
	self->dump(indent);
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseRemoveAt(QGraphicsLinearLayout* self, int index) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_RemoveAt_IsBase(true);
	vqgraphicslinearlayout->removeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnRemoveAt(QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_RemoveAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseSetGeometry(QGraphicsLinearLayout* self, const QRectF* rect) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGeometry_IsBase(true);
	vqgraphicslinearlayout->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSetGeometry(QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsLinearLayout_QBaseCount(const QGraphicsLinearLayout* self) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_Count_IsBase(true);
	return vqgraphicslinearlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnCount(const QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLinearLayout_QBaseItemAt(const QGraphicsLinearLayout* self, int index) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_ItemAt_IsBase(true);
	return vqgraphicslinearlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnItemAt(const QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseInvalidate(QGraphicsLinearLayout* self) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_Invalidate_IsBase(true);
	vqgraphicslinearlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnInvalidate(QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
QSizeF* QGraphicsLinearLayout_QBaseSizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicslinearlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSizeHint(const QGraphicsLinearLayout* self, intptr_t slot) {
	auto* vqgraphicslinearlayout = dynamic_cast<const VirtualQGraphicsLinearLayout*>(self);
	if (vqgraphicslinearlayout && vqgraphicslinearlayout->isVirtualQGraphicsLinearLayout) {
vqgraphicslinearlayout->setQGraphicsLinearLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SizeHint_Callback>(slot));
}
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
    delete self;
}

