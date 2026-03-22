#include <QAbstractListModel>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStringListModel>
#include <QVariant>
#include <qstringlistmodel.h>
#include "libqstringlistmodel.h"
#include "libqstringlistmodel.hxx"

QStringListModel* QStringListModel_new() {
	 return new VirtualQStringListModel();
}

QStringListModel* QStringListModel_new2(const libqt_list strings) {
	 return new VirtualQStringListModel(QList<QString>());
}

QStringListModel* QStringListModel_new3(QObject* parent) {
	 return new VirtualQStringListModel(parent);
}

QStringListModel* QStringListModel_new4(const libqt_list strings, QObject* parent) {
	 return new VirtualQStringListModel(QList<QString>(), parent);
}

libqt_string QStringListModel_Tr(const char* s) {
	QString _ret = QStringListModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QStringListModel_RowCount(const QStringListModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
	return new QModelIndex(self->sibling(row, column, *idx));
}

QVariant* QStringListModel_Data(const QStringListModel* self, const QModelIndex* index, int role) {
	return new QVariant(self->data(*index, role));
}

bool QStringListModel_SetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

bool QStringListModel_ClearItemData(QStringListModel* self, const QModelIndex* index) {
	return self->clearItemData(*index);
}

int QStringListModel_Flags(const QStringListModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QStringListModel_MoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}

libqt_map QStringListModel_ItemData(const QStringListModel* self, const QModelIndex* index) {
	auto _ret = self->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}

bool QStringListModel_SetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map roles) {
	return self->setItemData(*index, QMap<int, QVariant>());
}

void QStringListModel_Sort(QStringListModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

libqt_list QStringListModel_StringList(const QStringListModel* self) {
	auto _ret = self->stringList();
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

void QStringListModel_SetStringList(QStringListModel* self, const libqt_list strings) {
	self->setStringList(QList<QString>());
}

int QStringListModel_SupportedDropActions(const QStringListModel* self) {
	return self->supportedDropActions();
}

libqt_string QStringListModel_Tr2(const char* s, const char* c) {
	QString _ret = QStringListModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStringListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QStringListModel_QBaseRowCount(const QStringListModel* self, const QModelIndex* parent) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_RowCount_IsBase(true);
	return vqstringlistmodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRowCount(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_RowCount_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseSibling(const QStringListModel* self, int row, int column, const QModelIndex* idx) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Sibling_IsBase(true);
	return new QModelIndex(vqstringlistmodel->sibling(row, column, *idx));
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSibling(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Sibling_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sibling_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QStringListModel_QBaseData(const QStringListModel* self, const QModelIndex* index, int role) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Data_IsBase(true);
	return new QVariant(vqstringlistmodel->data(*index, role));
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnData(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Data_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseSetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SetData_IsBase(true);
	return vqstringlistmodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SetData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseClearItemData(QStringListModel* self, const QModelIndex* index) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_ClearItemData_IsBase(true);
	return vqstringlistmodel->clearItemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_ClearItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ClearItemData_Callback>(slot));
}
}

// Base class handler implementation
int QStringListModel_QBaseFlags(const QStringListModel* self, const QModelIndex* index) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Flags_IsBase(true);
	return vqstringlistmodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFlags(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Flags_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseInsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_InsertRows_IsBase(true);
	return vqstringlistmodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_InsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseRemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_RemoveRows_IsBase(true);
	return vqstringlistmodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_RemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_MoveRows_IsBase(true);
	return vqstringlistmodel->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_MoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveRows_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QStringListModel_QBaseItemData(const QStringListModel* self, const QModelIndex* index) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_ItemData_IsBase(true);
	auto _ret = vqstringlistmodel->itemData(*index);
	libqt_map _map;
	_map.len = _ret.size();
	_map.keys = nullptr;
	_map.values = nullptr;
	return _map;
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnItemData(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_ItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ItemData_Callback>(slot));
}
}

// Base class handler implementation
bool QStringListModel_QBaseSetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map roles) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SetItemData_IsBase(true);
	return vqstringlistmodel->setItemData(*index, QMap<int, QVariant>());
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SetItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetItemData_Callback>(slot));
}
}

// Base class handler implementation
void QStringListModel_QBaseSort(QStringListModel* self, int column, int order) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Sort_IsBase(true);
	vqstringlistmodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_Sort_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
int QStringListModel_QBaseSupportedDropActions(const QStringListModel* self) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SupportedDropActions_IsBase(true);
	return vqstringlistmodel->supportedDropActions();
}
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDropActions(const QStringListModel* self, intptr_t slot) {
	auto* vqstringlistmodel = dynamic_cast<const VirtualQStringListModel*>(self);
	if (vqstringlistmodel && vqstringlistmodel->isVirtualQStringListModel) {
vqstringlistmodel->setQStringListModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDropActions_Callback>(slot));
}
}

void QStringListModel_Delete(QStringListModel* self) {
    delete self;
}

