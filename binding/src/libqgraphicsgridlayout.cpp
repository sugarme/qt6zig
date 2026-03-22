#include <QGraphicsGridLayout>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicsgridlayout.h>
#include "libqgraphicsgridlayout.h"
#include "libqgraphicsgridlayout.hxx"

QGraphicsGridLayout* QGraphicsGridLayout_new() {
	 return new VirtualQGraphicsGridLayout();
}

QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent) {
	 return new VirtualQGraphicsGridLayout(parent);
}

void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, row, column, rowSpan, columnSpan);
}

void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
	self->addItem(item, row, column);
}

void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setHorizontalSpacing(spacing);
}

double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self) {
	return self->horizontalSpacing();
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setVerticalSpacing(spacing);
}

double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self) {
	return self->verticalSpacing();
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setSpacing(spacing);
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
	self->setRowSpacing(row, spacing);
}

double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row) {
	return self->rowSpacing(row);
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
	self->setColumnSpacing(column, spacing);
}

double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column) {
	return self->columnSpacing(column);
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
	self->setRowStretchFactor(row, stretch);
}

int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row) {
	return self->rowStretchFactor(row);
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
	self->setColumnStretchFactor(column, stretch);
}

int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column) {
	return self->columnStretchFactor(column);
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMinimumHeight(row, height);
}

double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row) {
	return self->rowMinimumHeight(row);
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowPreferredHeight(row, height);
}

double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row) {
	return self->rowPreferredHeight(row);
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMaximumHeight(row, height);
}

double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row) {
	return self->rowMaximumHeight(row);
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowFixedHeight(row, height);
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMinimumWidth(column, width);
}

double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column) {
	return self->columnMinimumWidth(column);
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnPreferredWidth(column, width);
}

double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column) {
	return self->columnPreferredWidth(column);
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMaximumWidth(column, width);
}

double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column) {
	return self->columnMaximumWidth(column);
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnFixedWidth(column, width);
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
	self->setRowAlignment(row, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row) {
	return self->rowAlignment(row);
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
	self->setColumnAlignment(column, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column) {
	return self->columnAlignment(column);
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	return self->alignment(item);
}

int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self) {
	return self->rowCount();
}

int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self) {
	return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column) {
	return self->itemAt(row, column);
}

int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt2(const QGraphicsGridLayout* self, int index) {
	return self->itemAt(index);
}

void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
	self->removeAt(index);
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
	self->invalidate();
}

void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
	self->addItem(item, row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
	self->addItem(item, row, column, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

// Base class handler implementation
int QGraphicsGridLayout_QBaseCount(const QGraphicsGridLayout* self) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_Count_IsBase(true);
	return vqgraphicsgridlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnCount(const QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsGridLayout_QBaseItemAt2(const QGraphicsGridLayout* self, int index) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAt2_IsBase(true);
	return vqgraphicsgridlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnItemAt2(const QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAt2_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_ItemAt2_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseRemoveAt(QGraphicsGridLayout* self, int index) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_IsBase(true);
	vqgraphicsgridlayout->removeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnRemoveAt(QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_RemoveAt_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseInvalidate(QGraphicsGridLayout* self) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_IsBase(true);
	vqgraphicsgridlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnInvalidate(QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_IsBase(true);
	vqgraphicsgridlayout->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetGeometry(QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QSizeF* QGraphicsGridLayout_QBaseSizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicsgridlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSizeHint(const QGraphicsGridLayout* self, intptr_t slot) {
	auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
	if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SizeHint_Callback>(slot));
}
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
    delete self;
}

