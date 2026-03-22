#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslayoutitem.h>
#include "libqgraphicslayoutitem.h"
#include "libqgraphicslayoutitem.hxx"

QGraphicsLayoutItem* QGraphicsLayoutItem_new() {
	 return new VirtualQGraphicsLayoutItem();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsLayoutItem(parent);
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout) {
	 return new VirtualQGraphicsLayoutItem(parent, isLayout);
}

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, const QSizePolicy* policy) {
	self->setSizePolicy(*policy);
}

void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy));
}

QSizePolicy* QGraphicsLayoutItem_SizePolicy(const QGraphicsLayoutItem* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, const QSizeF* size) {
	self->setMinimumSize(*size);
}

void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMinimumSize(w, h);
}

QSizeF* QGraphicsLayoutItem_MinimumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->minimumSize());
}

void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMinimumWidth(width);
}

double QGraphicsLayoutItem_MinimumWidth(const QGraphicsLayoutItem* self) {
	return self->minimumWidth();
}

void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMinimumHeight(height);
}

double QGraphicsLayoutItem_MinimumHeight(const QGraphicsLayoutItem* self) {
	return self->minimumHeight();
}

void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, const QSizeF* size) {
	self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(w, h);
}

QSizeF* QGraphicsLayoutItem_PreferredSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->preferredSize());
}

void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width) {
	self->setPreferredWidth(width);
}

double QGraphicsLayoutItem_PreferredWidth(const QGraphicsLayoutItem* self) {
	return self->preferredWidth();
}

void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height) {
	self->setPreferredHeight(height);
}

double QGraphicsLayoutItem_PreferredHeight(const QGraphicsLayoutItem* self) {
	return self->preferredHeight();
}

void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, const QSizeF* size) {
	self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(w, h);
}

QSizeF* QGraphicsLayoutItem_MaximumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->maximumSize());
}

void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMaximumWidth(width);
}

double QGraphicsLayoutItem_MaximumWidth(const QGraphicsLayoutItem* self) {
	return self->maximumWidth();
}

void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMaximumHeight(height);
}

double QGraphicsLayoutItem_MaximumHeight(const QGraphicsLayoutItem* self) {
	return self->maximumHeight();
}

void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

QRectF* QGraphicsLayoutItem_Geometry(const QGraphicsLayoutItem* self) {
	return new QRectF(self->geometry());
}

void QGraphicsLayoutItem_GetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(left, top, right, bottom);
}

QRectF* QGraphicsLayoutItem_ContentsRect(const QGraphicsLayoutItem* self) {
	return new QRectF(self->contentsRect());
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(const QGraphicsLayoutItem* self, int which) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which)));
}

void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self) {
	self->updateGeometry();
}

bool QGraphicsLayoutItem_IsEmpty(const QGraphicsLayoutItem* self) {
	return self->isEmpty();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(const QGraphicsLayoutItem* self) {
	return self->parentLayoutItem();
}

void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
	self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_IsLayout(const QGraphicsLayoutItem* self) {
	return self->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(const QGraphicsLayoutItem* self) {
	return self->graphicsItem();
}

bool QGraphicsLayoutItem_OwnedByLayout(const QGraphicsLayoutItem* self) {
	return self->ownedByLayout();
}

void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy), static_cast<QSizePolicy::ControlType>(controlType));
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetGeometry(QGraphicsLayoutItem* self, const QRectF* rect) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGeometry_IsBase(true);
	vqgraphicslayoutitem->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetGeometry(QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseGetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_GetContentsMargins_IsBase(true);
	vqgraphicslayoutitem->getContentsMargins(left, top, right, bottom);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnGetContentsMargins(const QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_GetContentsMargins_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseUpdateGeometry(QGraphicsLayoutItem* self) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_UpdateGeometry_IsBase(true);
	vqgraphicslayoutitem->updateGeometry();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnUpdateGeometry(QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_UpdateGeometry_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsLayoutItem_QBaseIsEmpty(const QGraphicsLayoutItem* self) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_IsEmpty_IsBase(true);
	return vqgraphicslayoutitem->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnIsEmpty(const QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_IsEmpty_Callback>(slot));
}
}

// Derived class handler implementation
QSizeF* QGraphicsLayoutItem_SizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
	return new QSizeF(vqgraphicslayoutitem->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
	} else {
	return new QSizeF(self->QGraphicsLayoutItem::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Base class handler implementation
QSizeF* QGraphicsLayoutItem_QBaseSizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicslayoutitem->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSizeHint(const QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<const VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsLayoutItem_SetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
	vqgraphicslayoutitem->setGraphicsItem(item);
	} else {
	self->QGraphicsLayoutItem::setGraphicsItem(item);
}
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGraphicsItem_IsBase(true);
	vqgraphicslayoutitem->setGraphicsItem(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetGraphicsItem(QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetGraphicsItem_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsLayoutItem_SetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
	vqgraphicslayoutitem->setOwnedByLayout(ownedByLayout);
	} else {
	self->QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
}
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetOwnedByLayout_IsBase(true);
	vqgraphicslayoutitem->setOwnedByLayout(ownedByLayout);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetOwnedByLayout(QGraphicsLayoutItem* self, intptr_t slot) {
	auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
	if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
vqgraphicslayoutitem->setQGraphicsLayoutItem_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetOwnedByLayout_Callback>(slot));
}
}

void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self) {
    delete self;
}

