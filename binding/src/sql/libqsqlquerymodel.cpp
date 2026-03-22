#include <QAbstractTableModel>
#include <QModelIndex>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qsqlquerymodel.h>
#include "libqsqlquerymodel.h"
#include "libqsqlquerymodel.hxx"

QSqlQueryModel* QSqlQueryModel_new() {
	 return new VirtualQSqlQueryModel();
}

QSqlQueryModel* QSqlQueryModel_new2(QObject* parent) {
	 return new VirtualQSqlQueryModel(parent);
}

libqt_string QSqlQueryModel_Tr(const char* s) {
	QString _ret = QSqlQueryModel::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSqlQueryModel_RowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSqlQueryModel_ColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
	return self->columnCount(*parent);
}

QSqlRecord* QSqlQueryModel_Record(const QSqlQueryModel* self, int row) {
	return new QSqlRecord(self->record(row));
}

QSqlRecord* QSqlQueryModel_Record2(const QSqlQueryModel* self) {
	return new QSqlRecord(self->record());
}

QVariant* QSqlQueryModel_Data(const QSqlQueryModel* self, const QModelIndex* item, int role) {
	return new QVariant(self->data(*item, role));
}

QVariant* QSqlQueryModel_HeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

bool QSqlQueryModel_SetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
	return self->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}

bool QSqlQueryModel_InsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
	return self->insertColumns(column, count, *parent);
}

bool QSqlQueryModel_RemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
	return self->removeColumns(column, count, *parent);
}

void QSqlQueryModel_SetQuery(QSqlQueryModel* self, const QSqlQuery* query) {
	self->setQuery(*query);
}

void QSqlQueryModel_SetQuery2(QSqlQueryModel* self, const libqt_string query) {
	self->setQuery(QString::fromUtf8(query.data, query.len));
}

const QSqlQuery* QSqlQueryModel_Query(const QSqlQueryModel* self) {
	const QSqlQuery& _ret = self->query();
	// Cast returned reference into pointer
	return const_cast<QSqlQuery*>(&_ret);
}

void QSqlQueryModel_Clear(QSqlQueryModel* self) {
	self->clear();
}

QSqlError* QSqlQueryModel_LastError(const QSqlQueryModel* self) {
	return new QSqlError(self->lastError());
}

void QSqlQueryModel_FetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QSqlQueryModel_CanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

libqt_map QSqlQueryModel_RoleNames(const QSqlQueryModel* self) {
	return self->roleNames();
}

libqt_string QSqlQueryModel_Tr2(const char* s, const char* c) {
	QString _ret = QSqlQueryModel::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSqlQueryModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlQueryModel::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSqlQueryModel_SetQuery22(QSqlQueryModel* self, const libqt_string query, const QSqlDatabase* db) {
	self->setQuery(QString::fromUtf8(query.data, query.len), *db);
}

const QSqlQuery* QSqlQueryModel_Query1(const QSqlQueryModel* self, Disambiguated_t* param1) {
	const QSqlQuery& _ret = self->query(*param1);
	// Cast returned reference into pointer
	return const_cast<QSqlQuery*>(&_ret);
}

// Base class handler implementation
int QSqlQueryModel_QBaseRowCount(const QSqlQueryModel* self, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RowCount_IsBase(true);
	return vqsqlquerymodel->rowCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRowCount(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RowCount_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RowCount_Callback>(slot));
}
}

// Base class handler implementation
int QSqlQueryModel_QBaseColumnCount(const QSqlQueryModel* self, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_ColumnCount_IsBase(true);
	return vqsqlquerymodel->columnCount(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnColumnCount(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_ColumnCount_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_ColumnCount_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSqlQueryModel_QBaseData(const QSqlQueryModel* self, const QModelIndex* item, int role) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_Data_IsBase(true);
	return new QVariant(vqsqlquerymodel->data(*item, role));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnData(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_Data_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Data_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QSqlQueryModel_QBaseHeaderData(const QSqlQueryModel* self, int section, int orientation, int role) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_HeaderData_IsBase(true);
	return new QVariant(vqsqlquerymodel->headerData(section, static_cast<Qt::Orientation>(orientation), role));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnHeaderData(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_HeaderData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_HeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlQueryModel_QBaseSetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_SetHeaderData_IsBase(true);
	return vqsqlquerymodel->setHeaderData(section, static_cast<Qt::Orientation>(orientation), *value, role);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetHeaderData(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_SetHeaderData_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetHeaderData_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlQueryModel_QBaseInsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_InsertColumns_IsBase(true);
	return vqsqlquerymodel->insertColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnInsertColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_InsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_InsertColumns_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlQueryModel_QBaseRemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RemoveColumns_IsBase(true);
	return vqsqlquerymodel->removeColumns(column, count, *parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RemoveColumns_Callback>(slot));
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseClear(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_Clear_IsBase(true);
	vqsqlquerymodel->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnClear(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_Clear_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_Clear_Callback>(slot));
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseFetchMore(QSqlQueryModel* self, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_FetchMore_IsBase(true);
	vqsqlquerymodel->fetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnFetchMore(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_FetchMore_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_FetchMore_Callback>(slot));
}
}

// Base class handler implementation
bool QSqlQueryModel_QBaseCanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_CanFetchMore_IsBase(true);
	return vqsqlquerymodel->canFetchMore(*parent);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnCanFetchMore(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_CanFetchMore_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_CanFetchMore_Callback>(slot));
}
}

// Base class handler implementation
libqt_map QSqlQueryModel_QBaseRoleNames(const QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RoleNames_IsBase(true);
	return vqsqlquerymodel->roleNames();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnRoleNames(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_RoleNames_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_RoleNames_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_QueryChange(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->queryChange();
	} else {
	self->QSqlQueryModel::queryChange();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_QueryChange_IsBase(true);
	vqsqlquerymodel->queryChange();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnQueryChange(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_QueryChange_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_QueryChange_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	return new QModelIndex(vqsqlquerymodel->indexInQuery(*item));
	} else {
	return new QModelIndex(self->QSqlQueryModel::indexInQuery(*item));
}
}

// Base class handler implementation
QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_IndexInQuery_IsBase(true);
	return new QModelIndex(vqsqlquerymodel->indexInQuery(*item));
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnIndexInQuery(const QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<const VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_IndexInQuery_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_IndexInQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->beginInsertRows(*parent, first, last);
	} else {
	self->QSqlQueryModel::beginInsertRows(*parent, first, last);
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginInsertRows_IsBase(true);
	vqsqlquerymodel->beginInsertRows(*parent, first, last);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginInsertRows(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginInsertRows_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->endInsertRows();
	} else {
	self->QSqlQueryModel::endInsertRows();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndInsertRows_IsBase(true);
	vqsqlquerymodel->endInsertRows();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndInsertRows(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndInsertRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndInsertRows_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->beginRemoveRows(*parent, first, last);
	} else {
	self->QSqlQueryModel::beginRemoveRows(*parent, first, last);
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginRemoveRows_IsBase(true);
	vqsqlquerymodel->beginRemoveRows(*parent, first, last);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginRemoveRows(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginRemoveRows_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->endRemoveRows();
	} else {
	self->QSqlQueryModel::endRemoveRows();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndRemoveRows_IsBase(true);
	vqsqlquerymodel->endRemoveRows();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndRemoveRows(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndRemoveRows_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->beginInsertColumns(*parent, first, last);
	} else {
	self->QSqlQueryModel::beginInsertColumns(*parent, first, last);
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginInsertColumns_IsBase(true);
	vqsqlquerymodel->beginInsertColumns(*parent, first, last);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginInsertColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginInsertColumns_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->endInsertColumns();
	} else {
	self->QSqlQueryModel::endInsertColumns();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndInsertColumns_IsBase(true);
	vqsqlquerymodel->endInsertColumns();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndInsertColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndInsertColumns_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->beginRemoveColumns(*parent, first, last);
	} else {
	self->QSqlQueryModel::beginRemoveColumns(*parent, first, last);
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginRemoveColumns_IsBase(true);
	vqsqlquerymodel->beginRemoveColumns(*parent, first, last);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginRemoveColumns_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->endRemoveColumns();
	} else {
	self->QSqlQueryModel::endRemoveColumns();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndRemoveColumns_IsBase(true);
	vqsqlquerymodel->endRemoveColumns();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndRemoveColumns(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndRemoveColumns_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->beginResetModel();
	} else {
	self->QSqlQueryModel::beginResetModel();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginResetModel_IsBase(true);
	vqsqlquerymodel->beginResetModel();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnBeginResetModel(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_BeginResetModel_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_BeginResetModel_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_EndResetModel(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->endResetModel();
	} else {
	self->QSqlQueryModel::endResetModel();
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndResetModel_IsBase(true);
	vqsqlquerymodel->endResetModel();
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnEndResetModel(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_EndResetModel_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_EndResetModel_Callback>(slot));
}
}

// Derived class handler implementation
void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
	vqsqlquerymodel->setLastError(*errorVal);
	} else {
	self->QSqlQueryModel::setLastError(*errorVal);
}
}

// Base class handler implementation
void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_SetLastError_IsBase(true);
	vqsqlquerymodel->setLastError(*errorVal);
}
}

// Auxiliary method to allow providing re-implementation
void QSqlQueryModel_OnSetLastError(QSqlQueryModel* self, intptr_t slot) {
	auto* vqsqlquerymodel = dynamic_cast<VirtualQSqlQueryModel*>(self);
	if (vqsqlquerymodel && vqsqlquerymodel->isVirtualQSqlQueryModel) {
vqsqlquerymodel->setQSqlQueryModel_SetLastError_Callback(reinterpret_cast<VirtualQSqlQueryModel::QSqlQueryModel_SetLastError_Callback>(slot));
}
}

void QSqlQueryModel_Delete(QSqlQueryModel* self) {
    delete self;
}

