#pragma once
#ifndef QSQLQUERYMODEL_H_C_LIB
#define QSQLQUERYMODEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t)
typedef Qt::Disambiguated_t Disambiguated_t;
#endif
#else
typedef struct QAbstractTableModel QAbstractTableModel;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlError QSqlError;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlQueryModel QSqlQueryModel;
typedef struct QSqlRecord QSqlRecord;
typedef struct QVariant QVariant;
typedef struct Disambiguated_t Disambiguated_t;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlQueryModel* QSqlQueryModel_new();
QSqlQueryModel* QSqlQueryModel_new2(QObject* parent);
libqt_string QSqlQueryModel_Tr(const char* s);
int QSqlQueryModel_RowCount(const QSqlQueryModel* self, const QModelIndex* parent);
int QSqlQueryModel_ColumnCount(const QSqlQueryModel* self, const QModelIndex* parent);
QSqlRecord* QSqlQueryModel_Record(const QSqlQueryModel* self, int row);
QSqlRecord* QSqlQueryModel_Record2(const QSqlQueryModel* self);
QVariant* QSqlQueryModel_Data(const QSqlQueryModel* self, const QModelIndex* item, int role);
QVariant* QSqlQueryModel_HeaderData(const QSqlQueryModel* self, int section, int orientation, int role);
bool QSqlQueryModel_SetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role);
bool QSqlQueryModel_InsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
bool QSqlQueryModel_RemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_SetQuery(QSqlQueryModel* self, const QSqlQuery* query);
void QSqlQueryModel_SetQuery2(QSqlQueryModel* self, const libqt_string query);
const QSqlQuery* QSqlQueryModel_Query(const QSqlQueryModel* self);
void QSqlQueryModel_Clear(QSqlQueryModel* self);
QSqlError* QSqlQueryModel_LastError(const QSqlQueryModel* self);
void QSqlQueryModel_FetchMore(QSqlQueryModel* self, const QModelIndex* parent);
bool QSqlQueryModel_CanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent);
libqt_map QSqlQueryModel_RoleNames(const QSqlQueryModel* self);
void QSqlQueryModel_QueryChange(QSqlQueryModel* self);
QModelIndex* QSqlQueryModel_IndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
libqt_string QSqlQueryModel_Tr2(const char* s, const char* c);
libqt_string QSqlQueryModel_Tr3(const char* s, const char* c, int n);
void QSqlQueryModel_SetQuery22(QSqlQueryModel* self, const libqt_string query, const QSqlDatabase* db);
const QSqlQuery* QSqlQueryModel_Query1(const QSqlQueryModel* self, Disambiguated_t* param1);
void QSqlQueryModel_OnRowCount(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseRowCount(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnColumnCount(const QSqlQueryModel* self, intptr_t slot);
int QSqlQueryModel_QBaseColumnCount(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnData(const QSqlQueryModel* self, intptr_t slot);
QVariant* QSqlQueryModel_QBaseData(const QSqlQueryModel* self, const QModelIndex* item, int role);
void QSqlQueryModel_OnHeaderData(const QSqlQueryModel* self, intptr_t slot);
QVariant* QSqlQueryModel_QBaseHeaderData(const QSqlQueryModel* self, int section, int orientation, int role);
void QSqlQueryModel_OnSetHeaderData(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseSetHeaderData(QSqlQueryModel* self, int section, int orientation, const QVariant* value, int role);
void QSqlQueryModel_OnInsertColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseInsertColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_OnRemoveColumns(QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseRemoveColumns(QSqlQueryModel* self, int column, int count, const QModelIndex* parent);
void QSqlQueryModel_OnClear(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseClear(QSqlQueryModel* self);
void QSqlQueryModel_OnFetchMore(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseFetchMore(QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnCanFetchMore(const QSqlQueryModel* self, intptr_t slot);
bool QSqlQueryModel_QBaseCanFetchMore(const QSqlQueryModel* self, const QModelIndex* parent);
void QSqlQueryModel_OnRoleNames(const QSqlQueryModel* self, intptr_t slot);
libqt_map QSqlQueryModel_QBaseRoleNames(const QSqlQueryModel* self);
void QSqlQueryModel_OnQueryChange(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseQueryChange(QSqlQueryModel* self);
void QSqlQueryModel_OnIndexInQuery(const QSqlQueryModel* self, intptr_t slot);
QModelIndex* QSqlQueryModel_QBaseIndexInQuery(const QSqlQueryModel* self, const QModelIndex* item);
void QSqlQueryModel_BeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginInsertRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginInsertRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndInsertRows(QSqlQueryModel* self);
void QSqlQueryModel_OnEndInsertRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndInsertRows(QSqlQueryModel* self);
void QSqlQueryModel_BeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginRemoveRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginRemoveRows(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndRemoveRows(QSqlQueryModel* self);
void QSqlQueryModel_OnEndRemoveRows(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndRemoveRows(QSqlQueryModel* self);
void QSqlQueryModel_BeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginInsertColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginInsertColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndInsertColumns(QSqlQueryModel* self);
void QSqlQueryModel_OnEndInsertColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndInsertColumns(QSqlQueryModel* self);
void QSqlQueryModel_BeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_OnBeginRemoveColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginRemoveColumns(QSqlQueryModel* self, const QModelIndex* parent, int first, int last);
void QSqlQueryModel_EndRemoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_OnEndRemoveColumns(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndRemoveColumns(QSqlQueryModel* self);
void QSqlQueryModel_BeginResetModel(QSqlQueryModel* self);
void QSqlQueryModel_OnBeginResetModel(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseBeginResetModel(QSqlQueryModel* self);
void QSqlQueryModel_EndResetModel(QSqlQueryModel* self);
void QSqlQueryModel_OnEndResetModel(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseEndResetModel(QSqlQueryModel* self);
void QSqlQueryModel_SetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
void QSqlQueryModel_OnSetLastError(QSqlQueryModel* self, intptr_t slot);
void QSqlQueryModel_QBaseSetLastError(QSqlQueryModel* self, const QSqlError* errorVal);
void QSqlQueryModel_Delete(QSqlQueryModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
