#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qgridlayout.h>
#include "libqgridlayout.h"
#include "libqgridlayout.hxx"

QGridLayout* QGridLayout_new(QWidget* parent) {
	 return new VirtualQGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
	 return new VirtualQGridLayout();
}

libqt_string QGridLayout_Tr(const char* s) {
	QString _ret = QGridLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QGridLayout_SizeHint(const QGridLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
	return new QSize(self->maximumSize());
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(spacing);
}

int QGridLayout_HorizontalSpacing(const QGridLayout* self) {
	return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(spacing);
}

int QGridLayout_VerticalSpacing(const QGridLayout* self) {
	return self->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(spacing);
}

int QGridLayout_Spacing(const QGridLayout* self) {
	return self->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(row, stretch);
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(column, stretch);
}

int QGridLayout_RowStretch(const QGridLayout* self, int row) {
	return self->rowStretch(row);
}

int QGridLayout_ColumnStretch(const QGridLayout* self, int column) {
	return self->columnStretch(column);
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(row, minSize);
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(column, minSize);
}

int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row) {
	return self->rowMinimumHeight(row);
}

int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column) {
	return self->columnMinimumWidth(column);
}

int QGridLayout_ColumnCount(const QGridLayout* self) {
	return self->columnCount();
}

int QGridLayout_RowCount(const QGridLayout* self) {
	return self->rowCount();
}

QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column) {
	return new QRect(self->cellRect(row, column));
}

bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
	return self->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
	return self->heightForWidth(param1);
}

int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
	return self->minimumHeightForWidth(param1);
}

int QGridLayout_ExpandingDirections(const QGridLayout* self) {
	return self->expandingDirections();
}

void QGridLayout_Invalidate(QGridLayout* self) {
	self->invalidate();
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
	self->addWidget(param1, row, column);
}

void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addWidget(param1, row, column, rowSpan, columnSpan);
}

void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column) {
	self->addLayout(param1, row, column);
}

void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addLayout(param1, row, column, rowSpan, columnSpan);
}

void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner) {
	self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_OriginCorner(const QGridLayout* self) {
	return self->originCorner();
}

QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
	return self->itemAt(index);
}

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
	return self->itemAtPosition(row, column);
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
	return self->takeAt(index);
}

int QGridLayout_Count(const QGridLayout* self) {
	return self->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
	self->addItem(item, row, column);
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient) {
	self->setDefaultPositioning(n, static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	self->getItemPosition(idx, row, column, rowSpan, columnSpan);
}

libqt_string QGridLayout_Tr2(const char* s, const char* c) {
	QString _ret = QGridLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGridLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
	self->addWidget(param1, row, column, static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addWidget(param1, row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
	self->addLayout(param1, row, column, static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addLayout(param1, row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
	self->addItem(item, row, column, rowSpan);
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, row, column, rowSpan, columnSpan);
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addItem(item, row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

// Base class handler implementation
QSize* QGridLayout_QBaseSizeHint(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SizeHint_IsBase(true);
	return new QSize(vqgridlayout->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSizeHint(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QGridLayout_QBaseMinimumSize(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MinimumSize_IsBase(true);
	return new QSize(vqgridlayout->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumSize(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MinimumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QGridLayout_QBaseMaximumSize(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MaximumSize_IsBase(true);
	return new QSize(vqgridlayout->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMaximumSize(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MaximumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
void QGridLayout_QBaseSetSpacing(QGridLayout* self, int spacing) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SetSpacing_IsBase(true);
	vqgridlayout->setSpacing(spacing);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SetSpacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetSpacing_Callback>(slot));
}
}

// Base class handler implementation
int QGridLayout_QBaseSpacing(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Spacing_IsBase(true);
	return vqgridlayout->spacing();
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacing(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Spacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Spacing_Callback>(slot));
}
}

// Base class handler implementation
bool QGridLayout_QBaseHasHeightForWidth(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_HasHeightForWidth_IsBase(true);
	return vqgridlayout->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHasHeightForWidth(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QGridLayout_QBaseHeightForWidth(const QGridLayout* self, int param1) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_HeightForWidth_IsBase(true);
	return vqgridlayout->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHeightForWidth(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QGridLayout_QBaseMinimumHeightForWidth(const QGridLayout* self, int param1) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MinimumHeightForWidth_IsBase(true);
	return vqgridlayout->minimumHeightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumHeightForWidth(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QGridLayout_QBaseExpandingDirections(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_ExpandingDirections_IsBase(true);
	return vqgridlayout->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnExpandingDirections(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
void QGridLayout_QBaseInvalidate(QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Invalidate_IsBase(true);
	vqgridlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseItemAt(const QGridLayout* self, int index) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_ItemAt_IsBase(true);
	return vqgridlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnItemAt(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_ItemAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseTakeAt(QGridLayout* self, int index) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_TakeAt_IsBase(true);
	return vqgridlayout->takeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_TakeAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_TakeAt_Callback>(slot));
}
}

// Base class handler implementation
int QGridLayout_QBaseCount(const QGridLayout* self) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Count_IsBase(true);
	return vqgridlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCount(const QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<const VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_Count_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
void QGridLayout_QBaseSetGeometry(QGridLayout* self, const QRect* geometry) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SetGeometry_IsBase(true);
	vqgridlayout->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetGeometry_Callback>(slot));
}
}

// Derived class handler implementation
void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
	vqgridlayout->addItem(param1);
	} else {
	self->QGridLayout::addItem(param1);
}
}

// Base class handler implementation
void QGridLayout_QBaseAddItem2(QGridLayout* self, QLayoutItem* param1) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_AddItem2_IsBase(true);
	vqgridlayout->addItem(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddItem2(QGridLayout* self, intptr_t slot) {
	auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
	if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
vqgridlayout->setQGridLayout_AddItem2_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddItem2_Callback>(slot));
}
}

void QGridLayout_Delete(QGridLayout* self) {
    delete self;
}

