#include <QModelIndex>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlrelationaltablemodel.h>
#include "libqsqlrelationaltablemodel.h"
#include "libqsqlrelationaltablemodel.hxx"

QSqlRelation* QSqlRelation_new() {
	 return new QSqlRelation();
}

QSqlRelation* QSqlRelation_new2(const libqt_string aTableName, const libqt_string indexCol, const libqt_string displayCol) {
	 return new QSqlRelation(QString::fromUtf8(aTableName.data, aTableName.len), QString::fromUtf8(indexCol.data, indexCol.len), QString::fromUtf8(displayCol.data, displayCol.len));
}

QSqlRelation* QSqlRelation_new3(const QSqlRelation* param1) {
	 return new QSqlRelation(*param1);
}

void QSqlRelation_Swap(QSqlRelation* self, QSqlRelation* other) {
	self->swap(*other);
}

libqt_string QSqlRelation_TableName(const QSqlRelation* self) {
	QString _ret = self->tableName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlRelation_IndexColumn(const QSqlRelation* self) {
	QString _ret = self->indexColumn();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlRelation_DisplayColumn(const QSqlRelation* self) {
	QString _ret = self->displayColumn();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSqlRelation_IsValid(const QSqlRelation* self) {
	return self->isValid();
}

void QSqlRelation_Delete(QSqlRelation* self) {
    delete self;
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new() {
	 return new VirtualQSqlRelationalTableModel();
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new2(QObject* parent) {
	 return new VirtualQSqlRelationalTableModel(parent);
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new3(QObject* parent, const QSqlDatabase* db) {
	 return new VirtualQSqlRelationalTableModel(parent, *db);
}

libqt_string QSqlRelationalTableModel_Tr(const char* s) {
	QString _ret = QSqlRelationalTableModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVariant* QSqlRelationalTableModel_Data(const QSqlRelationalTableModel* self, const QModelIndex* item, int role) {
	return new QVariant(self->data(*item, role));
}

bool QSqlRelationalTableModel_SetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
	return self->setData(*item, *value, role);
}

bool QSqlRelationalTableModel_RemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

void QSqlRelationalTableModel_Clear(QSqlRelationalTableModel* self) {
	self->clear();
}

bool QSqlRelationalTableModel_Select(QSqlRelationalTableModel* self) {
	return self->select();
}

void QSqlRelationalTableModel_SetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
	self->setTable(QString::fromUtf8(tableName.data, tableName.len));
}

void QSqlRelationalTableModel_SetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
	self->setRelation(column, *relation);
}

QSqlRelation* QSqlRelationalTableModel_Relation(const QSqlRelationalTableModel* self, int column) {
	return new QSqlRelation(self->relation(column));
}

QSqlTableModel* QSqlRelationalTableModel_RelationModel(const QSqlRelationalTableModel* self, int column) {
	return self->relationModel(column);
}

void QSqlRelationalTableModel_SetJoinMode(QSqlRelationalTableModel* self, int joinMode) {
	self->setJoinMode(static_cast<QSqlRelationalTableModel::JoinMode>(joinMode));
}

void QSqlRelationalTableModel_RevertRow(QSqlRelationalTableModel* self, int row) {
	self->revertRow(row);
}

libqt_string QSqlRelationalTableModel_Tr2(const char* s, const char* c) {
	QString _ret = QSqlRelationalTableModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlRelationalTableModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlRelationalTableModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QVariant* QSqlRelationalTableModel_QBaseData(const QSqlRelationalTableModel* self, const QModelIndex* item, int role) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Data_IsBase(true);
	return new QVariant(vqsqlrelationaltablemodel->data(*item, role));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnData(const QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Data_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Data_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetData_IsBase(true);
	return vqsqlrelationaltablemodel->setData(*item, *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetData(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetData_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetData_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseRemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveColumns_IsBase(true);
	return vqsqlrelationaltablemodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseClear(QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Clear_IsBase(true);
	vqsqlrelationaltablemodel->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnClear(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Clear_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Clear_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseSelect(QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Select_IsBase(true);
	return vqsqlrelationaltablemodel->select();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelect(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_Select_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_Select_Callback>(slot));
}
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetTable(QSqlRelationalTableModel* self, const libqt_string tableName) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetTable_IsBase(true);
	vqsqlrelationaltablemodel->setTable(QString::fromUtf8(tableName.data, tableName.len));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetTable(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetTable_Callback>(slot));
}
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseSetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetRelation_IsBase(true);
	vqsqlrelationaltablemodel->setRelation(column, *relation);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSetRelation(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SetRelation_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SetRelation_Callback>(slot));
}
}

// Base class handler implementation
QSqlTableModel* QSqlRelationalTableModel_QBaseRelationModel(const QSqlRelationalTableModel* self, int column) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RelationModel_IsBase(true);
	return vqsqlrelationaltablemodel->relationModel(column);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRelationModel(const QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RelationModel_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RelationModel_Callback>(slot));
}
}

// Base class handler implementation
void QSqlRelationalTableModel_QBaseRevertRow(QSqlRelationalTableModel* self, int row) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RevertRow_IsBase(true);
	vqsqlrelationaltablemodel->revertRow(row);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnRevertRow(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_RevertRow_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_RevertRow_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
	QString _ret = vqsqlrelationaltablemodel->selectStatement();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QSqlRelationalTableModel::selectStatement();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QSqlRelationalTableModel_QBaseSelectStatement(const QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectStatement_IsBase(true);
	QString _ret = vqsqlrelationaltablemodel->selectStatement();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnSelectStatement(const QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_SelectStatement_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_SelectStatement_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
	return vqsqlrelationaltablemodel->updateRowInTable(row, *values);
	} else {
	return self->QSqlRelationalTableModel::updateRowInTable(row, *values);
}
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_UpdateRowInTable_IsBase(true);
	return vqsqlrelationaltablemodel->updateRowInTable(row, *values);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnUpdateRowInTable(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_UpdateRowInTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_UpdateRowInTable_Callback>(slot));
}
}

// Derived class handler implementation
bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
	return vqsqlrelationaltablemodel->insertRowIntoTable(*values);
	} else {
	return self->QSqlRelationalTableModel::insertRowIntoTable(*values);
}
}

// Base class handler implementation
bool QSqlRelationalTableModel_QBaseInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRowIntoTable_IsBase(true);
	return vqsqlrelationaltablemodel->insertRowIntoTable(*values);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnInsertRowIntoTable(QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_InsertRowIntoTable_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_InsertRowIntoTable_Callback>(slot));
}
}

// Derived class handler implementation
libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
	QString _ret = vqsqlrelationaltablemodel->orderByClause();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
	} else {
	QString _ret = self->QSqlRelationalTableModel::orderByClause();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Base class handler implementation
libqt_string QSqlRelationalTableModel_QBaseOrderByClause(const QSqlRelationalTableModel* self) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_OrderByClause_IsBase(true);
	QString _ret = vqsqlrelationaltablemodel->orderByClause();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QSqlRelationalTableModel_OnOrderByClause(const QSqlRelationalTableModel* self, intptr_t slot) {
	auto* vqsqlrelationaltablemodel = dynamic_cast<const VirtualQSqlRelationalTableModel*>(self);
	if (vqsqlrelationaltablemodel && vqsqlrelationaltablemodel->isVirtualQSqlRelationalTableModel) {
vqsqlrelationaltablemodel->setQSqlRelationalTableModel_OrderByClause_Callback(reinterpret_cast<VirtualQSqlRelationalTableModel::QSqlRelationalTableModel_OrderByClause_Callback>(slot));
}
}

void QSqlRelationalTableModel_Delete(QSqlRelationalTableModel* self) {
    delete self;
}

