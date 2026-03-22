#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
#include <QDataStream>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleData>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qabstractitemmodel.h>
#include "libqabstractitemmodel.h"
#include "libqabstractitemmodel.hxx"

QModelRoleData* QModelRoleData_new(int role) {
	 return new QModelRoleData(role);
}

int QModelRoleData_Role(const QModelRoleData* self) {
	return self->role();
}

QVariant* QModelRoleData_Data(QModelRoleData* self) {
	return new QVariant(self->data());
}

const QVariant* QModelRoleData_Data2(const QModelRoleData* self) {
	const QVariant& _ret = self->data();
	// Cast returned reference into pointer
	return const_cast<QVariant*>(&_ret);
}

void QModelRoleData_ClearData(QModelRoleData* self) {
	self->clearData();
}

void QModelRoleData_OperatorAssign(QModelRoleData* self, const QModelRoleData* param1) {
	self->operator=(*param1);
}

void QModelRoleData_Delete(QModelRoleData* self) {
    delete self;
}

QModelRoleDataSpan* QModelRoleDataSpan_new(const QModelRoleDataSpan* other) {
	 return new QModelRoleDataSpan(*other);
}

QModelRoleDataSpan* QModelRoleDataSpan_new2(QModelRoleDataSpan* other) {
	 return new QModelRoleDataSpan(*other);
}

QModelRoleDataSpan* QModelRoleDataSpan_new3() {
	 return new QModelRoleDataSpan();
}

QModelRoleDataSpan* QModelRoleDataSpan_new4(QModelRoleData* modelRoleData) {
	 return new QModelRoleDataSpan(*modelRoleData);
}

QModelRoleDataSpan* QModelRoleDataSpan_new5(QModelRoleData* modelRoleData, ptrdiff_t lenVal) {
	 return new QModelRoleDataSpan(modelRoleData, lenVal);
}

QModelRoleDataSpan* QModelRoleDataSpan_new6(const QModelRoleDataSpan* param1) {
	 return new QModelRoleDataSpan(*param1);
}

void QModelRoleDataSpan_CopyAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = *other;
}

void QModelRoleDataSpan_MoveAssign(QModelRoleDataSpan* self, QModelRoleDataSpan* other) {
    *self = std::move(*other);
}

ptrdiff_t QModelRoleDataSpan_Size(const QModelRoleDataSpan* self) {
	return self->size();
}

ptrdiff_t QModelRoleDataSpan_Length(const QModelRoleDataSpan* self) {
	return self->length();
}

QModelRoleData* QModelRoleDataSpan_Data(const QModelRoleDataSpan* self) {
	return self->data();
}

QModelRoleData* QModelRoleDataSpan_Begin(const QModelRoleDataSpan* self) {
	return self->begin();
}

QModelRoleData* QModelRoleDataSpan_End(const QModelRoleDataSpan* self) {
	return self->end();
}

QModelRoleData* QModelRoleDataSpan_OperatorSubscript(const QModelRoleDataSpan* self, ptrdiff_t index) {
	return new QModelRoleData(self->operator[](index));
}

QVariant* QModelRoleDataSpan_DataForRole(const QModelRoleDataSpan* self, int role) {
	return self->dataForRole(role);
}

void QModelRoleDataSpan_Delete(QModelRoleDataSpan* self) {
    delete self;
}

QModelIndex* QModelIndex_new(const QModelIndex* other) {
	 return new QModelIndex(*other);
}

QModelIndex* QModelIndex_new2(QModelIndex* other) {
	 return new QModelIndex(*other);
}

QModelIndex* QModelIndex_new3() {
	 return new QModelIndex();
}

QModelIndex* QModelIndex_new4(const QModelIndex* param1) {
	 return new QModelIndex(*param1);
}

void QModelIndex_CopyAssign(QModelIndex* self, QModelIndex* other) {
    *self = *other;
}

void QModelIndex_MoveAssign(QModelIndex* self, QModelIndex* other) {
    *self = std::move(*other);
}

int QModelIndex_Row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_Column(const QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_InternalId(const QModelIndex* self) {
	return self->internalId();
}

void* QModelIndex_InternalPointer(const QModelIndex* self) {
	return self->internalPointer();
}

const void* QModelIndex_ConstInternalPointer(const QModelIndex* self) {
	return self->constInternalPointer();
}

QModelIndex* QModelIndex_Parent(const QModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(row, column));
}

QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column) {
	return new QModelIndex(self->siblingAtColumn(column));
}

QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row) {
	return new QModelIndex(self->siblingAtRow(row));
}

QVariant* QModelIndex_Data(const QModelIndex* self) {
	return new QVariant(self->data());
}

void QModelIndex_MultiData(const QModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

int QModelIndex_Flags(const QModelIndex* self) {
	return self->flags();
}

const QAbstractItemModel* QModelIndex_Model(const QModelIndex* self) {
	return self->model();
}

bool QModelIndex_IsValid(const QModelIndex* self) {
	return self->isValid();
}

QVariant* QModelIndex_Data1(const QModelIndex* self, int role) {
	return new QVariant(self->data(role));
}

void QModelIndex_Delete(QModelIndex* self) {
    delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
	 return new QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(const QModelIndex* index) {
	 return new QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(const QPersistentModelIndex* other) {
	 return new QPersistentModelIndex(*other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, const QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

void QPersistentModelIndex_OperatorAssign2(QPersistentModelIndex* self, const QModelIndex* other) {
	self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_OperatorQModelIndex(const QPersistentModelIndex* self) {
	return new QModelIndex(self->operator QModelIndex());
}

int QPersistentModelIndex_Row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_Column(const QPersistentModelIndex* self) {
	return self->column();
}

void* QPersistentModelIndex_InternalPointer(const QPersistentModelIndex* self) {
	return self->internalPointer();
}

const void* QPersistentModelIndex_ConstInternalPointer(const QPersistentModelIndex* self) {
	return self->constInternalPointer();
}

uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self) {
	return self->internalId();
}

QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(row, column));
}

QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self) {
	return new QVariant(self->data());
}

void QPersistentModelIndex_MultiData(const QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

int QPersistentModelIndex_Flags(const QPersistentModelIndex* self) {
	return self->flags();
}

const QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self) {
	return self->model();
}

bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role) {
	return new QVariant(self->data(role));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
    delete self;
}

QAbstractItemModel* QAbstractItemModel_new() {
	 return new VirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
	 return new VirtualQAbstractItemModel(parent);
}

libqt_string QAbstractItemModel_Tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(row, column);
}

QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, const QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

int QAbstractItemModel_RowCount(const QAbstractItemModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

bool QAbstractItemModel_SetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

libqt_map QAbstractItemModel_ItemData(const QAbstractItemModel* self, const QModelIndex* index) {
	auto _ret = self->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

bool QAbstractItemModel_SetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, QMap<int, QVariant>());
}

bool QAbstractItemModel_ClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
	return self->clearItemData(*index);
}

libqt_list QAbstractItemModel_MimeTypes(const QAbstractItemModel* self) {
	auto _ret = self->mimeTypes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, const libqt_list indexes) {
	return self->mimeData(QList<QModelIndex>());
}

bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self) {
	return self->supportedDropActions();
}

int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self) {
	return self->supportedDragActions();
}

bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}

bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}

bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(row);
}

bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(column);
}

bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row) {
	return self->removeRow(row);
}

bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(column);
}

bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, sourceRow, *destinationParent, destinationChild);
}

bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, sourceColumn, *destinationParent, destinationChild);
}

void QAbstractItemModel_FetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_Flags(const QAbstractItemModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

void QAbstractItemModel_Sort(QAbstractItemModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, const QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

libqt_list QAbstractItemModel_Match(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
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

QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, const QModelIndex* index) {
	return new QSize(self->span(*index));
}

libqt_map QAbstractItemModel_RoleNames(const QAbstractItemModel* self) {
	auto _ret = self->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, const QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_MultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*index, *roleDataSpan);
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_Connect_DataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, const QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, const QModelIndex*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::dataChanged, [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
	slotFunc(self, topLeft, bottomRight);
    });
}

void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), first, last);
}

void QAbstractItemModel_Connect_HeaderDataChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, int, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, int, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::headerDataChanged, [self, slotFunc](Qt::Orientation orientation, int first, int last) {
	slotFunc(self, orientation, first, last);
    });
}

void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void QAbstractItemModel_Connect_LayoutChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_Revert(QAbstractItemModel* self) {
	self->revert();
}

libqt_string QAbstractItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
	return self->hasIndex(row, column, *parent);
}

bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
	return self->insertRow(row, *parent);
}

bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
	return self->insertColumn(column, *parent);
}

bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, const QModelIndex* parent) {
	return self->removeRow(row, *parent);
}

bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, const QModelIndex* parent) {
	return self->removeColumn(column, *parent);
}

bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, const QModelIndex* index, int options) {
	return self->checkIndex(*index, static_cast<QFlags<QAbstractItemModel::CheckIndexOption>>(options));
}

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	self->dataChanged(*topLeft, *bottomRight, QList<int>());
}

void QAbstractItemModel_Connect_DataChanged3(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, const QModelIndex*, libqt_list) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, const QModelIndex*, libqt_list)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::dataChanged, [self, slotFunc](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) {
	slotFunc(self, topLeft, bottomRight, roles);
    });
}

void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, const libqt_list parents) {
	self->layoutChanged(QList<QPersistentModelIndex>());
}

void QAbstractItemModel_Connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
	slotFunc(self, parents);
    });
}

void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, const libqt_list parents, int hint) {
	self->layoutChanged(QList<QPersistentModelIndex>(), static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
	slotFunc(self, parents, hint);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, const libqt_list parents) {
	self->layoutAboutToBeChanged(QList<QPersistentModelIndex>());
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents) {
	slotFunc(self, parents);
    });
}

void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, const libqt_list parents, int hint) {
	self->layoutAboutToBeChanged(QList<QPersistentModelIndex>(), static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_Connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, libqt_list, int) = reinterpret_cast<void (*)(QAbstractItemModel*, libqt_list, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::layoutAboutToBeChanged, [self, slotFunc](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
	slotFunc(self, parents, hint);
    });
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseIndex(const QAbstractItemModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Index_IsBase(true);
	return new QModelIndex(vqabstractitemmodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnIndex(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Index_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseParent(const QAbstractItemModel* self, const QModelIndex* child) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Parent_IsBase(true);
	return new QModelIndex(vqabstractitemmodel->parent(*child));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnParent(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Parent_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Parent_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseSibling(const QAbstractItemModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Sibling_IsBase(true);
	return new QModelIndex(vqabstractitemmodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSibling(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemModel_QBaseRowCount(const QAbstractItemModel* self, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RowCount_IsBase(true);
	return vqabstractitemmodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRowCount(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemModel_QBaseColumnCount(const QAbstractItemModel* self, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ColumnCount_IsBase(true);
	return vqabstractitemmodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnColumnCount(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ColumnCount_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseHasChildren(const QAbstractItemModel* self, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_HasChildren_IsBase(true);
	return vqabstractitemmodel->hasChildren(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHasChildren(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_HasChildren_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HasChildren_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractItemModel_QBaseData(const QAbstractItemModel* self, const QModelIndex* index, int role) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Data_IsBase(true);
	return new QVariant(vqabstractitemmodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Data_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetData(QAbstractItemModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetData_IsBase(true);
	return vqabstractitemmodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetData(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QAbstractItemModel_QBaseHeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_HeaderData_IsBase(true);
	return new QVariant(vqabstractitemmodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnHeaderData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetHeaderData(QAbstractItemModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetHeaderData_IsBase(true);
	return vqabstractitemmodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetHeaderData(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QAbstractItemModel_QBaseItemData(const QAbstractItemModel* self, const QModelIndex* index) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ItemData_IsBase(true);
	auto _ret = vqabstractitemmodel->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnItemData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSetItemData(QAbstractItemModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetItemData_IsBase(true);
	return vqabstractitemmodel->setItemData(*index, QMap<int, QVariant>());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSetItemData(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseClearItemData(QAbstractItemModel* self, const QModelIndex* index) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ClearItemData_IsBase(true);
	return vqabstractitemmodel->clearItemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnClearItemData(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_ClearItemData_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAbstractItemModel_QBaseMimeTypes(const QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MimeTypes_IsBase(true);
	auto _ret = vqabstractitemmodel->mimeTypes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMimeTypes(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeTypes_Callback>(slot));
}
}

// Base class handler implementation
QMimeData* QAbstractItemModel_QBaseMimeData(const QAbstractItemModel* self, const libqt_list indexes) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MimeData_IsBase(true);
	return vqabstractitemmodel->mimeData(QList<QModelIndex>());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMimeData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseCanDropMimeData(const QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_CanDropMimeData_IsBase(true);
	return vqabstractitemmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanDropMimeData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanDropMimeData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseDropMimeData(QAbstractItemModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_DropMimeData_IsBase(true);
	return vqabstractitemmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnDropMimeData(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemModel_QBaseSupportedDropActions(const QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SupportedDropActions_IsBase(true);
	return vqabstractitemmodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDropActions(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDropActions_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemModel_QBaseSupportedDragActions(const QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SupportedDragActions_IsBase(true);
	return vqabstractitemmodel->supportedDragActions();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSupportedDragActions(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_SupportedDragActions_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseInsertRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_InsertRows_IsBase(true);
	return vqabstractitemmodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertRows(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseInsertColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_InsertColumns_IsBase(true);
	return vqabstractitemmodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnInsertColumns(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseRemoveRows(QAbstractItemModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RemoveRows_IsBase(true);
	return vqabstractitemmodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveRows(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseRemoveColumns(QAbstractItemModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RemoveColumns_IsBase(true);
	return vqabstractitemmodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRemoveColumns(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseMoveRows(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MoveRows_IsBase(true);
	return vqabstractitemmodel->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveRows(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseMoveColumns(QAbstractItemModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MoveColumns_IsBase(true);
	return vqabstractitemmodel->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMoveColumns(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MoveColumns_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemModel_QBaseFetchMore(QAbstractItemModel* self, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_FetchMore_IsBase(true);
	vqabstractitemmodel->fetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFetchMore(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_FetchMore_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseCanFetchMore(const QAbstractItemModel* self, const QModelIndex* parent) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_CanFetchMore_IsBase(true);
	return vqabstractitemmodel->canFetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnCanFetchMore(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_CanFetchMore_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractItemModel_QBaseFlags(const QAbstractItemModel* self, const QModelIndex* index) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Flags_IsBase(true);
	return vqabstractitemmodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnFlags(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Flags_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemModel_QBaseSort(QAbstractItemModel* self, int column, int order) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Sort_IsBase(true);
	vqabstractitemmodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSort(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Sort_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractItemModel_QBaseBuddy(const QAbstractItemModel* self, const QModelIndex* index) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Buddy_IsBase(true);
	return new QModelIndex(vqabstractitemmodel->buddy(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnBuddy(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Buddy_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QAbstractItemModel_QBaseMatch(const QAbstractItemModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Match_IsBase(true);
	auto _ret = vqabstractitemmodel->match(*start, role, *value, hits, static_cast<QFlags<Qt::MatchFlag>>(flags));
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
void QAbstractItemModel_OnMatch(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Match_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Match_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAbstractItemModel_QBaseSpan(const QAbstractItemModel* self, const QModelIndex* index) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Span_IsBase(true);
	return new QSize(vqabstractitemmodel->span(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSpan(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Span_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Span_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QAbstractItemModel_QBaseRoleNames(const QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RoleNames_IsBase(true);
	auto _ret = vqabstractitemmodel->roleNames();
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRoleNames(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_RoleNames_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemModel_QBaseMultiData(const QAbstractItemModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MultiData_IsBase(true);
	vqabstractitemmodel->multiData(*index, *roleDataSpan);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnMultiData(const QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<const VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_MultiData_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractItemModel_QBaseSubmit(QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Submit_IsBase(true);
	return vqabstractitemmodel->submit();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnSubmit(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Submit_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Submit_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractItemModel_QBaseRevert(QAbstractItemModel* self) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Revert_IsBase(true);
	vqabstractitemmodel->revert();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemModel_OnRevert(QAbstractItemModel* self, intptr_t slot) {
	auto* vqabstractitemmodel = dynamic_cast<VirtualQAbstractItemModel*>(self);
	if (vqabstractitemmodel && vqabstractitemmodel->isVirtualQAbstractItemModel) {
vqabstractitemmodel->setQAbstractItemModel_Revert_Callback(reinterpret_cast<VirtualQAbstractItemModel::QAbstractItemModel_Revert_Callback>(slot));
}
}

void QAbstractItemModel_Connect_rowsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_rowsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_rowsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_rowsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_columnsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_columnsInserted(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsInserted, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_columnsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_columnsRemoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsRemoved, [self, slotFunc](const QModelIndex& parent, int first, int last) {
	slotFunc(self, parent, first, last);
    });
}

void QAbstractItemModel_Connect_modelAboutToBeReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelAboutToBeReset, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractItemModel_Connect_modelReset(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*) = reinterpret_cast<void (*)(QAbstractItemModel*)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::modelReset, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractItemModel_Connect_rowsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
	slotFunc(self, sourceParent, sourceStart, sourceEnd, destinationParent, destinationRow);
    });
}

void QAbstractItemModel_Connect_rowsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::rowsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
	slotFunc(self, sourceParent, sourceStart, sourceEnd, destinationParent, destinationRow);
    });
}

void QAbstractItemModel_Connect_columnsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
	slotFunc(self, sourceParent, sourceStart, sourceEnd, destinationParent, destinationColumn);
    });
}

void QAbstractItemModel_Connect_columnsMoved(QAbstractItemModel* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int) = reinterpret_cast<void (*)(QAbstractItemModel*, const QModelIndex*, int, int, const QModelIndex*, int)>(slot);
    QAbstractItemModel::connect(self, &QAbstractItemModel::columnsMoved, [self, slotFunc](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
	slotFunc(self, sourceParent, sourceStart, sourceEnd, destinationParent, destinationColumn);
    });
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
    delete self;
}

QAbstractTableModel* QAbstractTableModel_new() {
	 return new VirtualQAbstractTableModel();
}

QAbstractTableModel* QAbstractTableModel_new2(QObject* parent) {
	 return new VirtualQAbstractTableModel(parent);
}

libqt_string QAbstractTableModel_Tr(const char* s) {
	QString _ret = QAbstractTableModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

int QAbstractTableModel_Flags(const QAbstractTableModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

libqt_string QAbstractTableModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseIndex(const QAbstractTableModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Index_IsBase(true);
	return new QModelIndex(vqabstracttablemodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnIndex(const QAbstractTableModel* self, intptr_t slot) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Index_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractTableModel_QBaseSibling(const QAbstractTableModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Sibling_IsBase(true);
	return new QModelIndex(vqabstracttablemodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnSibling(const QAbstractTableModel* self, intptr_t slot) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractTableModel_QBaseDropMimeData(QAbstractTableModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_DropMimeData_IsBase(true);
	return vqabstracttablemodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnDropMimeData(QAbstractTableModel* self, intptr_t slot) {
	auto* vqabstracttablemodel = dynamic_cast<VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractTableModel_QBaseFlags(const QAbstractTableModel* self, const QModelIndex* index) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Flags_IsBase(true);
	return vqabstracttablemodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTableModel_OnFlags(const QAbstractTableModel* self, intptr_t slot) {
	auto* vqabstracttablemodel = dynamic_cast<const VirtualQAbstractTableModel*>(self);
	if (vqabstracttablemodel && vqabstracttablemodel->isVirtualQAbstractTableModel) {
vqabstracttablemodel->setQAbstractTableModel_Flags_Callback(reinterpret_cast<VirtualQAbstractTableModel::QAbstractTableModel_Flags_Callback>(slot));
}
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
    delete self;
}

QAbstractListModel* QAbstractListModel_new() {
	 return new VirtualQAbstractListModel();
}

QAbstractListModel* QAbstractListModel_new2(QObject* parent) {
	 return new VirtualQAbstractListModel(parent);
}

libqt_string QAbstractListModel_Tr(const char* s) {
	QString _ret = QAbstractListModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
	return new QModelIndex(self->index(row, column, *parent));
}

QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

bool QAbstractListModel_DropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}

int QAbstractListModel_Flags(const QAbstractListModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

libqt_string QAbstractListModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractListModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseIndex(const QAbstractListModel* self, int row, int column, const QModelIndex* parent) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Index_IsBase(true);
	return new QModelIndex(vqabstractlistmodel->index(row, column, *parent));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnIndex(const QAbstractListModel* self, intptr_t slot) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Index_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Index_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QAbstractListModel_QBaseSibling(const QAbstractListModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Sibling_IsBase(true);
	return new QModelIndex(vqabstractlistmodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnSibling(const QAbstractListModel* self, intptr_t slot) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
bool QAbstractListModel_QBaseDropMimeData(QAbstractListModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
	auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_DropMimeData_IsBase(true);
	return vqabstractlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), row, column, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnDropMimeData(QAbstractListModel* self, intptr_t slot) {
	auto* vqabstractlistmodel = dynamic_cast<VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_DropMimeData_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractListModel_QBaseFlags(const QAbstractListModel* self, const QModelIndex* index) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Flags_IsBase(true);
	return vqabstractlistmodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractListModel_OnFlags(const QAbstractListModel* self, intptr_t slot) {
	auto* vqabstractlistmodel = dynamic_cast<const VirtualQAbstractListModel*>(self);
	if (vqabstractlistmodel && vqabstractlistmodel->isVirtualQAbstractListModel) {
vqabstractlistmodel->setQAbstractListModel_Flags_Callback(reinterpret_cast<VirtualQAbstractListModel::QAbstractListModel_Flags_Callback>(slot));
}
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
    delete self;
}

