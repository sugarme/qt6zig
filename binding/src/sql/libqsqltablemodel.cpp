#include <QModelIndex>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlIndex>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlTableModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qsqltablemodel.h>
#include "libqsqltablemodel.h"
#include "libqsqltablemodel.hxx"

QSqlTableModel* QSqlTableModel_new() {
	 return new VirtualQSqlTableModel();
}

QSqlTableModel* QSqlTableModel_new2(QObject* parent) {
	 return new VirtualQSqlTableModel(parent);
}

QSqlTableModel* QSqlTableModel_new3(QObject* parent, const QSqlDatabase* db) {
	 return new VirtualQSqlTableModel(parent, *db);
}

libqt_string QSqlTableModel_Tr(const char* s) {
	QString _ret = QSqlTableModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlTableModel_SetTable(QSqlTableModel* self, const libqt_string tableName) {
	self->setTable(QString::fromUtf8(tableName.data, tableName.len));
}

libqt_string QSqlTableModel_TableName(const QSqlTableModel* self) {
	QString _ret = self->tableName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSqlTableModel_Flags(const QSqlTableModel* self, const QModelIndex* index) {
	return self->flags(*index);
}

QSqlRecord* QSqlTableModel_Record(const QSqlTableModel* self) {
	return new QSqlRecord(self->record());
}

QSqlRecord* QSqlTableModel_Record2(const QSqlTableModel* self, int row) {
	return new QSqlRecord(self->record(row));
}

QVariant* QSqlTableModel_Data(const QSqlTableModel* self, const QModelIndex* idx, int role) {
	return new QVariant(self->data(*idx, role));
}

bool QSqlTableModel_SetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
	return self->setData(*index, *value, role);
}

bool QSqlTableModel_ClearItemData(QSqlTableModel* self, const QModelIndex* index) {
	return self->clearItemData(*index);
}

QVariant* QSqlTableModel_HeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QSqlTableModel_IsDirty(const QSqlTableModel* self) {
	return self->isDirty();
}

bool QSqlTableModel_IsDirty2(const QSqlTableModel* self, const QModelIndex* index) {
	return self->isDirty(*index);
}

void QSqlTableModel_Clear(QSqlTableModel* self) {
	self->clear();
}

void QSqlTableModel_SetEditStrategy(QSqlTableModel* self, int strategy) {
	self->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

int QSqlTableModel_EditStrategy(const QSqlTableModel* self) {
	return self->editStrategy();
}

QSqlIndex* QSqlTableModel_PrimaryKey(const QSqlTableModel* self) {
	return new QSqlIndex(self->primaryKey());
}

QSqlDatabase* QSqlTableModel_Database(const QSqlTableModel* self) {
	return new QSqlDatabase(self->database());
}

int QSqlTableModel_FieldIndex(const QSqlTableModel* self, const libqt_string fieldName) {
	return self->fieldIndex(QString::fromUtf8(fieldName.data, fieldName.len));
}

void QSqlTableModel_Sort(QSqlTableModel* self, int column, int order) {
	self->sort(column, static_cast<Qt::SortOrder>(order));
}

void QSqlTableModel_SetSort(QSqlTableModel* self, int column, int order) {
	self->setSort(column, static_cast<Qt::SortOrder>(order));
}

libqt_string QSqlTableModel_Filter(const QSqlTableModel* self) {
	QString _ret = self->filter();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlTableModel_SetFilter(QSqlTableModel* self, const libqt_string filter) {
	self->setFilter(QString::fromUtf8(filter.data, filter.len));
}

int QSqlTableModel_RowCount(const QSqlTableModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

bool QSqlTableModel_RemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

bool QSqlTableModel_RemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
	return self->removeRows(row, count, *parent);
}

bool QSqlTableModel_InsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
	return self->insertRows(row, count, *parent);
}

bool QSqlTableModel_InsertRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
	return self->insertRecord(row, *record);
}

bool QSqlTableModel_SetRecord(QSqlTableModel* self, int row, const QSqlRecord* record) {
	return self->setRecord(row, *record);
}

void QSqlTableModel_RevertRow(QSqlTableModel* self, int row) {
	self->revertRow(row);
}

bool QSqlTableModel_Select(QSqlTableModel* self) {
	return self->select();
}

bool QSqlTableModel_SelectRow(QSqlTableModel* self, int row) {
	return self->selectRow(row);
}

bool QSqlTableModel_Submit(QSqlTableModel* self) {
	return self->submit();
}

void QSqlTableModel_Revert(QSqlTableModel* self) {
	self->revert();
}

bool QSqlTableModel_SubmitAll(QSqlTableModel* self) {
	return self->submitAll();
}

void QSqlTableModel_RevertAll(QSqlTableModel* self) {
	self->revertAll();
}

void QSqlTableModel_PrimeInsert(QSqlTableModel* self, int row, QSqlRecord* record) {
	self->primeInsert(row, *record);
}

void QSqlTableModel_Connect_PrimeInsert(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, int, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self, &QSqlTableModel::primeInsert, [self, slotFunc](int row, QSqlRecord& record) {
	slotFunc(self, row, record);
    });
}

void QSqlTableModel_BeforeInsert(QSqlTableModel* self, QSqlRecord* record) {
	self->beforeInsert(*record);
}

void QSqlTableModel_Connect_BeforeInsert(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self, &QSqlTableModel::beforeInsert, [self, slotFunc](QSqlRecord& record) {
	slotFunc(self, record);
    });
}

void QSqlTableModel_BeforeUpdate(QSqlTableModel* self, int row, QSqlRecord* record) {
	self->beforeUpdate(row, *record);
}

void QSqlTableModel_Connect_BeforeUpdate(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int, QSqlRecord*) = reinterpret_cast<void (*)(QSqlTableModel*, int, QSqlRecord*)>(slot);
    QSqlTableModel::connect(self, &QSqlTableModel::beforeUpdate, [self, slotFunc](int row, QSqlRecord& record) {
	slotFunc(self, row, record);
    });
}

void QSqlTableModel_BeforeDelete(QSqlTableModel* self, int row) {
	self->beforeDelete(row);
}

void QSqlTableModel_Connect_BeforeDelete(QSqlTableModel* self, intptr_t slot) {
    void (*slotFunc)(QSqlTableModel*, int) = reinterpret_cast<void (*)(QSqlTableModel*, int)>(slot);
    QSqlTableModel::connect(self, &QSqlTableModel::beforeDelete, [self, slotFunc](int row) {
	slotFunc(self, row);
    });
}

libqt_string QSqlTableModel_Tr2(const char* s, const char* c) {
	QString _ret = QSqlTableModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlTableModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlTableModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QSqlTableModel_QBaseSetTable(QSqlTableModel* self, const libqt_string tableName) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetTable_IsBase(true);
	vqsqltablemodel->setTable(QString::fromUtf8(tableName.data, tableName.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetTable(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetTable_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetTable_Callback>(slot));
}
}

// Base class handler implementation
int QSqlTableModel_QBaseFlags(const QSqlTableModel* self, const QModelIndex* index) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Flags_IsBase(true);
	return vqsqltablemodel->flags(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnFlags(const QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Flags_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Flags_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSqlTableModel_QBaseData(const QSqlTableModel* self, const QModelIndex* idx, int role) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Data_IsBase(true);
	return new QVariant(vqsqltablemodel->data(*idx, role));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnData(const QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Data_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseSetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetData_IsBase(true);
	return vqsqltablemodel->setData(*index, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetData(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseClearItemData(QSqlTableModel* self, const QModelIndex* index) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_ClearItemData_IsBase(true);
	return vqsqltablemodel->clearItemData(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClearItemData(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_ClearItemData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_ClearItemData_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSqlTableModel_QBaseHeaderData(const QSqlTableModel* self, int section, int orientation, int role) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_HeaderData_IsBase(true);
	return new QVariant(vqsqltablemodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnHeaderData(const QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_HeaderData_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseClear(QSqlTableModel* self) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Clear_IsBase(true);
	vqsqltablemodel->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnClear(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Clear_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Clear_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseSetEditStrategy(QSqlTableModel* self, int strategy) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetEditStrategy_IsBase(true);
	vqsqltablemodel->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetEditStrategy(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetEditStrategy_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetEditStrategy_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseSort(QSqlTableModel* self, int column, int order) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Sort_IsBase(true);
	vqsqltablemodel->sort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSort(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Sort_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Sort_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseSetSort(QSqlTableModel* self, int column, int order) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetSort_IsBase(true);
	vqsqltablemodel->setSort(column, static_cast<Qt::SortOrder>(order));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetSort(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetSort_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetSort_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseSetFilter(QSqlTableModel* self, const libqt_string filter) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetFilter_IsBase(true);
	vqsqltablemodel->setFilter(QString::fromUtf8(filter.data, filter.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSetFilter(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SetFilter_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SetFilter_Callback>(slot));
}
}

// Base class handler implementation
int QSqlTableModel_QBaseRowCount(const QSqlTableModel* self, const QModelIndex* parent) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RowCount_IsBase(true);
	return vqsqltablemodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRowCount(const QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<const VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RowCount_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseRemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RemoveColumns_IsBase(true);
	return vqsqltablemodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveColumns(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseRemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RemoveRows_IsBase(true);
	return vqsqltablemodel->removeRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRemoveRows(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RemoveRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RemoveRows_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseInsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_InsertRows_IsBase(true);
	return vqsqltablemodel->insertRows(row, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnInsertRows(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_InsertRows_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_InsertRows_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseRevertRow(QSqlTableModel* self, int row) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RevertRow_IsBase(true);
	vqsqltablemodel->revertRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevertRow(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_RevertRow_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_RevertRow_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseSelect(QSqlTableModel* self) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Select_IsBase(true);
	return vqsqltablemodel->select();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelect(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Select_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Select_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseSelectRow(QSqlTableModel* self, int row) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SelectRow_IsBase(true);
	return vqsqltablemodel->selectRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSelectRow(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_SelectRow_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_SelectRow_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlTableModel_QBaseSubmit(QSqlTableModel* self) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Submit_IsBase(true);
	return vqsqltablemodel->submit();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnSubmit(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Submit_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Submit_Callback>(slot));
}
}

// Base class handler implementation
void QSqlTableModel_QBaseRevert(QSqlTableModel* self) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Revert_IsBase(true);
	vqsqltablemodel->revert();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlTableModel_OnRevert(QSqlTableModel* self, intptr_t slot) {
	auto* vqsqltablemodel = dynamic_cast<VirtualQSqlTableModel*>(self);
	if (vqsqltablemodel && vqsqltablemodel->isVirtualQSqlTableModel) {
vqsqltablemodel->setQSqlTableModel_Revert_Callback(reinterpret_cast<VirtualQSqlTableModel::QSqlTableModel_Revert_Callback>(slot));
}
}

void QSqlTableModel_Delete(QSqlTableModel* self) {
    delete self;
}

