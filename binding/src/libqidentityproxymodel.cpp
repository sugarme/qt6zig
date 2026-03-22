#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QIdentityProxyModel>
#include <QItemSelection>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qidentityproxymodel.h>
#include "libqidentityproxymodel.h"
#include "libqidentityproxymodel.hxx"

QIdentityProxyModel* QIdentityProxyModel_new() {
	 return new VirtualQIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
	 return new VirtualQIdentityProxyModel(parent);
}

libqt_string QIdentityProxyModel_Tr(const char* s) {
	QString _ret = QIdentityProxyModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, const QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

libqt_list QIdentityProxyModel_Match(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
	auto _ret = self->match(*start, role, *value, hits, static_cast<QFlags<Qt::MatchFlag>>(flags));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}

bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}

bool QIdentityProxyModel_HandleSourceLayoutChanges(const QIdentityProxyModel* self) {
	return self->handleSourceLayoutChanges();
}

bool QIdentityProxyModel_HandleSourceDataChanges(const QIdentityProxyModel* self) {
	return self->handleSourceDataChanges();
}

libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QIdentityProxyModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIdentityProxyModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QIdentityProxyModel_QBaseColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_IsBase(true);
	return vqidentityproxymodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnColumnCount(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseIndex(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Index_IsBase(true);
	return new QModelIndex(vqidentityproxymodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIndex(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Index_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_IsBase(true);
	return new QModelIndex(vqidentityproxymodel->mapFromSource(*sourceIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapFromSource(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapFromSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapToSource_IsBase(true);
	return new QModelIndex(vqidentityproxymodel->mapToSource(*proxyIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapToSource(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapToSource_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseParent(const QIdentityProxyModel* self, const QModelIndex* child) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Parent_IsBase(true);
	return new QModelIndex(vqidentityproxymodel->parent(*child));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnParent(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Parent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
int QIdentityProxyModel_QBaseRowCount(const QIdentityProxyModel* self, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RowCount_IsBase(true);
	return vqidentityproxymodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRowCount(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RowCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QIdentityProxyModel_QBaseHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_HeaderData_IsBase(true);
	return new QVariant(vqidentityproxymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHeaderData(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseDropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_IsBase(true);
	return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseSibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Sibling_IsBase(true);
	return new QModelIndex(vqidentityproxymodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSibling(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Sibling_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_IsBase(true);
	return new QItemSelection(vqidentityproxymodel->mapSelectionFromSource(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionFromSource(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionFromSource_Callback>(slot));
}
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_IsBase(true);
	return new QItemSelection(vqidentityproxymodel->mapSelectionToSource(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionToSource(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionToSource_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QIdentityProxyModel_QBaseMatch(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Match_IsBase(true);
	auto _ret = vqidentityproxymodel->match(*start, role, *value, hits, static_cast<QFlags<Qt::MatchFlag>>(flags));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMatch(const QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<const VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_Match_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Match_Callback>(slot));
}
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_IsBase(true);
	vqidentityproxymodel->setSourceModel(sourceModel);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetSourceModel_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_IsBase(true);
	return vqidentityproxymodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_InsertRows_IsBase(true);
	return vqidentityproxymodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_IsBase(true);
	return vqidentityproxymodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_IsBase(true);
	return vqidentityproxymodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MoveRows_IsBase(true);
	return vqidentityproxymodel->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_IsBase(true);
	return vqidentityproxymodel->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveColumns_Callback>(slot));
}
}

// Derived class handler implementation
void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
	vqidentityproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
	} else {
	self->QIdentityProxyModel::setHandleSourceLayoutChanges(handleSourceLayoutChanges);
}
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetHandleSourceLayoutChanges_IsBase(true);
	vqidentityproxymodel->setHandleSourceLayoutChanges(handleSourceLayoutChanges);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetHandleSourceLayoutChanges(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetHandleSourceLayoutChanges_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetHandleSourceLayoutChanges_Callback>(slot));
}
}

// Derived class handler implementation
void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
	vqidentityproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
	} else {
	self->QIdentityProxyModel::setHandleSourceDataChanges(handleSourceDataChanges);
}
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetHandleSourceDataChanges_IsBase(true);
	vqidentityproxymodel->setHandleSourceDataChanges(handleSourceDataChanges);
}
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetHandleSourceDataChanges(QIdentityProxyModel* self, intptr_t slot) {
	auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self);
	if (vqidentityproxymodel && vqidentityproxymodel->isVirtualQIdentityProxyModel) {
vqidentityproxymodel->setQIdentityProxyModel_SetHandleSourceDataChanges_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetHandleSourceDataChanges_Callback>(slot));
}
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self) {
    delete self;
}

