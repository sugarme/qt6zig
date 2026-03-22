#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransposeProxyModel>
#include <QVariant>
#include <qtransposeproxymodel.h>
#include "libqtransposeproxymodel.h"
#include "libqtransposeproxymodel.hxx"

QTransposeProxyModel* QTransposeProxyModel_new() {
	 return new VirtualQTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
	 return new VirtualQTransposeProxyModel(parent);
}

libqt_string QTransposeProxyModel_Tr(const char* s) {
	QString _ret = QTransposeProxyModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, *roles);
}

QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, const QModelIndex* index) {
	return new QSize(self->span(*index));
}

libqt_map QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
	return self->itemData(*index);
}

QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, const QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}

bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}

void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QTransposeProxyModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTransposeProxyModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QTransposeProxyModel_QBaseSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetSourceModel_IsBase(true);
	vqtransposeproxymodel->setSourceModel(newSourceModel);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetSourceModel_Callback>(slot));
}
}

// Base class handler implementation
int QTransposeProxyModel_QBaseRowCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RowCount_IsBase(true);
	return vqtransposeproxymodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRowCount(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RowCount_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QTransposeProxyModel_QBaseColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_ColumnCount_IsBase(true);
	return vqtransposeproxymodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnColumnCount(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QTransposeProxyModel_QBaseHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_HeaderData_IsBase(true);
	return new QVariant(vqtransposeproxymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnHeaderData(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseSetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetHeaderData_IsBase(true);
	return vqtransposeproxymodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseSetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetItemData_IsBase(true);
	return vqtransposeproxymodel->setItemData(*index, *roles);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
QSize* QTransposeProxyModel_QBaseSpan(const QTransposeProxyModel* self, const QModelIndex* index) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Span_IsBase(true);
	return new QSize(vqtransposeproxymodel->span(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSpan(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Span_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Span_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QTransposeProxyModel_QBaseItemData(const QTransposeProxyModel* self, const QModelIndex* index) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_ItemData_IsBase(true);
	return vqtransposeproxymodel->itemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnItemData(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_ItemData_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseMapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MapFromSource_IsBase(true);
	return new QModelIndex(vqtransposeproxymodel->mapFromSource(*sourceIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapFromSource(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapFromSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseMapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MapToSource_IsBase(true);
	return new QModelIndex(vqtransposeproxymodel->mapToSource(*proxyIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMapToSource(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MapToSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseParent(const QTransposeProxyModel* self, const QModelIndex* index) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Parent_IsBase(true);
	return new QModelIndex(vqtransposeproxymodel->parent(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnParent(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Parent_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QTransposeProxyModel_QBaseIndex(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Index_IsBase(true);
	return new QModelIndex(vqtransposeproxymodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnIndex(const QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<const VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Index_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Index_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseInsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_InsertRows_IsBase(true);
	return vqtransposeproxymodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseRemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RemoveRows_IsBase(true);
	return vqtransposeproxymodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MoveRows_IsBase(true);
	return vqtransposeproxymodel->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseInsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_InsertColumns_IsBase(true);
	return vqtransposeproxymodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseRemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RemoveColumns_IsBase(true);
	return vqtransposeproxymodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QTransposeProxyModel_QBaseMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MoveColumns_IsBase(true);
	return vqtransposeproxymodel->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_MoveColumns_Callback>(slot));
}
}

// Base class handler implementation
void QTransposeProxyModel_QBaseSort(QTransposeProxyModel* self, int column, int order) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Sort_IsBase(true);
	vqtransposeproxymodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot) {
	auto* vqtransposeproxymodel = dynamic_cast<VirtualQTransposeProxyModel*>(self);
	if (vqtransposeproxymodel && vqtransposeproxymodel->isVirtualQTransposeProxyModel) {
vqtransposeproxymodel->setQTransposeProxyModel_Sort_Callback(reinterpret_cast<VirtualQTransposeProxyModel::QTransposeProxyModel_Sort_Callback>(slot));
}
}

void QTransposeProxyModel_Delete(QTransposeProxyModel* self) {
    delete self;
}

