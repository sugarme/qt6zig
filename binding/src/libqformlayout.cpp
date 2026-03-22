#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qformlayout.h>
#include "libqformlayout.h"
#include "libqformlayout.hxx"

QFormLayout* QFormLayout_new(QWidget* parent) {
	 return new VirtualQFormLayout(parent);
}

QFormLayout* QFormLayout_new2() {
	 return new VirtualQFormLayout();
}

libqt_string QFormLayout_Tr(const char* s) {
	QString _ret = QFormLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, int policy) {
	self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_FieldGrowthPolicy(const QFormLayout* self) {
	return self->fieldGrowthPolicy();
}

void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy) {
	self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_RowWrapPolicy(const QFormLayout* self) {
	return self->rowWrapPolicy();
}

void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment) {
	self->setLabelAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QFormLayout_LabelAlignment(const QFormLayout* self) {
	return self->labelAlignment();
}

void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment) {
	self->setFormAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QFormLayout_FormAlignment(const QFormLayout* self) {
	return self->formAlignment();
}

void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(spacing);
}

int QFormLayout_HorizontalSpacing(const QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(spacing);
}

int QFormLayout_VerticalSpacing(const QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_Spacing(const QFormLayout* self) {
	return self->spacing();
}

void QFormLayout_SetSpacing(QFormLayout* self, int spacing) {
	self->setSpacing(spacing);
}

void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field) {
	self->addRow(label, field);
}

void QFormLayout_AddRow3(QFormLayout* self, const libqt_string labelText, QWidget* field) {
	self->addRow(QString::fromUtf8(labelText.data, labelText.len), field);
}

void QFormLayout_AddRow4(QFormLayout* self, const libqt_string labelText, QLayout* field) {
	self->addRow(QString::fromUtf8(labelText.data, labelText.len), field);
}

void QFormLayout_AddRow5(QFormLayout* self, QWidget* widget) {
	self->addRow(widget);
}

void QFormLayout_AddRow6(QFormLayout* self, QLayout* layout) {
	self->addRow(layout);
}

void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
	self->insertRow(row, label, field);
}

void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
	self->insertRow(row, label, field);
}

void QFormLayout_InsertRow3(QFormLayout* self, int row, const libqt_string labelText, QWidget* field) {
	self->insertRow(row, QString::fromUtf8(labelText.data, labelText.len), field);
}

void QFormLayout_InsertRow4(QFormLayout* self, int row, const libqt_string labelText, QLayout* field) {
	self->insertRow(row, QString::fromUtf8(labelText.data, labelText.len), field);
}

void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget) {
	self->insertRow(row, widget);
}

void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout) {
	self->insertRow(row, layout);
}

void QFormLayout_RemoveRow(QFormLayout* self, int row) {
	self->removeRow(row);
}

void QFormLayout_RemoveRow2(QFormLayout* self, QWidget* widget) {
	self->removeRow(widget);
}

void QFormLayout_RemoveRow3(QFormLayout* self, QLayout* layout) {
	self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row) {
	return new QFormLayout::TakeRowResult(self->takeRow(row));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow2(QFormLayout* self, QWidget* widget) {
	return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow3(QFormLayout* self, QLayout* layout) {
	return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
	self->setItem(row, static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget) {
	self->setWidget(row, static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout) {
	self->setLayout(row, static_cast<QFormLayout::ItemRole>(role), layout);
}

void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on) {
	self->setRowVisible(row, on);
}

void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on) {
	self->setRowVisible(widget, on);
}

void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on) {
	self->setRowVisible(layout, on);
}

bool QFormLayout_IsRowVisible(const QFormLayout* self, int row) {
	return self->isRowVisible(row);
}

bool QFormLayout_IsRowVisible2(const QFormLayout* self, QWidget* widget) {
	return self->isRowVisible(widget);
}

bool QFormLayout_IsRowVisible3(const QFormLayout* self, QLayout* layout) {
	return self->isRowVisible(layout);
}

QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role) {
	return self->itemAt(row, static_cast<QFormLayout::ItemRole>(role));
}

void QFormLayout_GetItemPosition(const QFormLayout* self, int index, int* rowPtr, int* rolePtr) {
	self->getItemPosition(index, rowPtr, static_cast<QFormLayout::ItemRole>(rolePtr));
}

void QFormLayout_GetWidgetPosition(const QFormLayout* self, QWidget* widget, int* rowPtr, int* rolePtr) {
	self->getWidgetPosition(widget, rowPtr, static_cast<QFormLayout::ItemRole>(rolePtr));
}

void QFormLayout_GetLayoutPosition(const QFormLayout* self, QLayout* layout, int* rowPtr, int* rolePtr) {
	self->getLayoutPosition(layout, rowPtr, static_cast<QFormLayout::ItemRole>(rolePtr));
}

QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_LabelForField2(const QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_ItemAt2(const QFormLayout* self, int index) {
	return self->itemAt(index);
}

QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
	return self->takeAt(index);
}

void QFormLayout_SetGeometry(QFormLayout* self, const QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_MinimumSize(const QFormLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QFormLayout_SizeHint(const QFormLayout* self) {
	return new QSize(self->sizeHint());
}

void QFormLayout_Invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_HasHeightForWidth(const QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_HeightForWidth(const QFormLayout* self, int width) {
	return self->heightForWidth(width);
}

int QFormLayout_ExpandingDirections(const QFormLayout* self) {
	return self->expandingDirections();
}

int QFormLayout_Count(const QFormLayout* self) {
	return self->count();
}

int QFormLayout_RowCount(const QFormLayout* self) {
	return self->rowCount();
}

libqt_string QFormLayout_Tr2(const char* s, const char* c) {
	QString _ret = QFormLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFormLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QFormLayout_QBaseSpacing(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Spacing_IsBase(true);
	return vqformlayout->spacing();
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSpacing(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Spacing_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Spacing_Callback>(slot));
}
}

// Base class handler implementation
void QFormLayout_QBaseSetSpacing(QFormLayout* self, int spacing) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SetSpacing_IsBase(true);
	vqformlayout->setSpacing(spacing);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetSpacing(QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SetSpacing_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SetSpacing_Callback>(slot));
}
}

// Base class handler implementation
void QFormLayout_QBaseAddItem(QFormLayout* self, QLayoutItem* item) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_AddItem_IsBase(true);
	vqformlayout->addItem(item);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAddItem(QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_AddItem_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AddItem_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QFormLayout_QBaseItemAt2(const QFormLayout* self, int index) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_ItemAt2_IsBase(true);
	return vqformlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnItemAt2(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_ItemAt2_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ItemAt2_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QFormLayout_QBaseTakeAt(QFormLayout* self, int index) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_TakeAt_IsBase(true);
	return vqformlayout->takeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnTakeAt(QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_TakeAt_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_TakeAt_Callback>(slot));
}
}

// Base class handler implementation
void QFormLayout_QBaseSetGeometry(QFormLayout* self, const QRect* rect) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SetGeometry_IsBase(true);
	vqformlayout->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetGeometry(QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SetGeometry_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QSize* QFormLayout_QBaseMinimumSize(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_MinimumSize_IsBase(true);
	return new QSize(vqformlayout->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMinimumSize(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_MinimumSize_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QFormLayout_QBaseSizeHint(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SizeHint_IsBase(true);
	return new QSize(vqformlayout->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSizeHint(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_SizeHint_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QFormLayout_QBaseInvalidate(QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Invalidate_IsBase(true);
	vqformlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnInvalidate(QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Invalidate_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
bool QFormLayout_QBaseHasHeightForWidth(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_HasHeightForWidth_IsBase(true);
	return vqformlayout->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHasHeightForWidth(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QFormLayout_QBaseHeightForWidth(const QFormLayout* self, int width) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_HeightForWidth_IsBase(true);
	return vqformlayout->heightForWidth(width);
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHeightForWidth(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QFormLayout_QBaseExpandingDirections(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_ExpandingDirections_IsBase(true);
	return vqformlayout->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnExpandingDirections(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
int QFormLayout_QBaseCount(const QFormLayout* self) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Count_IsBase(true);
	return vqformlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnCount(const QFormLayout* self, intptr_t slot) {
	auto* vqformlayout = dynamic_cast<const VirtualQFormLayout*>(self);
	if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
vqformlayout->setQFormLayout_Count_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Count_Callback>(slot));
}
}

void QFormLayout_Delete(QFormLayout* self) {
    delete self;
}

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new() {
	 return new QFormLayout::TakeRowResult();
}

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new2(const QFormLayout__TakeRowResult* param1) {
	 return new QFormLayout::TakeRowResult(*param1);
}

QLayoutItem* QFormLayout__TakeRowResult_LabelItem(const QFormLayout__TakeRowResult* self) {
	return self->labelItem;
}

void QFormLayout__TakeRowResult_SetLabelItem(QFormLayout__TakeRowResult* self, QLayoutItem* labelItem) {
	self->labelItem;
}

QLayoutItem* QFormLayout__TakeRowResult_FieldItem(const QFormLayout__TakeRowResult* self) {
	return self->fieldItem;
}

void QFormLayout__TakeRowResult_SetFieldItem(QFormLayout__TakeRowResult* self, QLayoutItem* fieldItem) {
	self->fieldItem;
}

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self) {
    delete self;
}

