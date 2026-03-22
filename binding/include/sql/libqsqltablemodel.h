#pragma once
#ifndef QSQLTABLEMODEL_H_C_LIB
#define QSQLTABLEMODEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlQueryModel QSqlQueryModel;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlTableModel QSqlTableModel;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlTableModel* QSqlTableModel_new();
QSqlTableModel* QSqlTableModel_new2(QObject* parent);
QSqlTableModel* QSqlTableModel_new3(QObject* parent, const QSqlDatabase* db);
libqt_string QSqlTableModel_Tr(const char* s);
void QSqlTableModel_SetTable(QSqlTableModel* self, const libqt_string tableName);
libqt_string QSqlTableModel_TableName(const QSqlTableModel* self);
int QSqlTableModel_Flags(const QSqlTableModel* self, const QModelIndex* index);
QSqlRecord* QSqlTableModel_Record(const QSqlTableModel* self);
QSqlRecord* QSqlTableModel_Record2(const QSqlTableModel* self, int row);
QVariant* QSqlTableModel_Data(const QSqlTableModel* self, const QModelIndex* idx, int role);
bool QSqlTableModel_SetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QSqlTableModel_ClearItemData(QSqlTableModel* self, const QModelIndex* index);
QVariant* QSqlTableModel_HeaderData(const QSqlTableModel* self, int section, int orientation, int role);
bool QSqlTableModel_IsDirty(const QSqlTableModel* self);
bool QSqlTableModel_IsDirty2(const QSqlTableModel* self, const QModelIndex* index);
void QSqlTableModel_Clear(QSqlTableModel* self);
void QSqlTableModel_SetEditStrategy(QSqlTableModel* self, int strategy);
int QSqlTableModel_EditStrategy(const QSqlTableModel* self);
QSqlIndex* QSqlTableModel_PrimaryKey(const QSqlTableModel* self);
QSqlDatabase* QSqlTableModel_Database(const QSqlTableModel* self);
int QSqlTableModel_FieldIndex(const QSqlTableModel* self, const libqt_string fieldName);
void QSqlTableModel_Sort(QSqlTableModel* self, int column, int order);
void QSqlTableModel_SetSort(QSqlTableModel* self, int column, int order);
libqt_string QSqlTableModel_Filter(const QSqlTableModel* self);
void QSqlTableModel_SetFilter(QSqlTableModel* self, const libqt_string filter);
int QSqlTableModel_RowCount(const QSqlTableModel* self, const QModelIndex* parent);
bool QSqlTableModel_RemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent);
bool QSqlTableModel_RemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent);
bool QSqlTableModel_InsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent);
bool QSqlTableModel_InsertRecord(QSqlTableModel* self, int row, const QSqlRecord* record);
bool QSqlTableModel_SetRecord(QSqlTableModel* self, int row, const QSqlRecord* record);
void QSqlTableModel_RevertRow(QSqlTableModel* self, int row);
bool QSqlTableModel_Select(QSqlTableModel* self);
bool QSqlTableModel_SelectRow(QSqlTableModel* self, int row);
bool QSqlTableModel_Submit(QSqlTableModel* self);
void QSqlTableModel_Revert(QSqlTableModel* self);
bool QSqlTableModel_SubmitAll(QSqlTableModel* self);
void QSqlTableModel_RevertAll(QSqlTableModel* self);
void QSqlTableModel_PrimeInsert(QSqlTableModel* self, int row, QSqlRecord* record);
void QSqlTableModel_Connect_PrimeInsert(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_BeforeInsert(QSqlTableModel* self, QSqlRecord* record);
void QSqlTableModel_Connect_BeforeInsert(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_BeforeUpdate(QSqlTableModel* self, int row, QSqlRecord* record);
void QSqlTableModel_Connect_BeforeUpdate(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_BeforeDelete(QSqlTableModel* self, int row);
void QSqlTableModel_Connect_BeforeDelete(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_UpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
bool QSqlTableModel_InsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
bool QSqlTableModel_DeleteRowFromTable(QSqlTableModel* self, int row);
libqt_string QSqlTableModel_OrderByClause(const QSqlTableModel* self);
libqt_string QSqlTableModel_SelectStatement(const QSqlTableModel* self);
QModelIndex* QSqlTableModel_IndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
libqt_string QSqlTableModel_Tr2(const char* s, const char* c);
libqt_string QSqlTableModel_Tr3(const char* s, const char* c, int n);
void QSqlTableModel_OnSetTable(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSetTable(QSqlTableModel* self, const libqt_string tableName);
void QSqlTableModel_OnFlags(const QSqlTableModel* self, intptr_t slot);
int QSqlTableModel_QBaseFlags(const QSqlTableModel* self, const QModelIndex* index);
void QSqlTableModel_OnData(const QSqlTableModel* self, intptr_t slot);
QVariant* QSqlTableModel_QBaseData(const QSqlTableModel* self, const QModelIndex* idx, int role);
void QSqlTableModel_OnSetData(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseSetData(QSqlTableModel* self, const QModelIndex* index, const QVariant* value, int role);
void QSqlTableModel_OnClearItemData(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseClearItemData(QSqlTableModel* self, const QModelIndex* index);
void QSqlTableModel_OnHeaderData(const QSqlTableModel* self, intptr_t slot);
QVariant* QSqlTableModel_QBaseHeaderData(const QSqlTableModel* self, int section, int orientation, int role);
void QSqlTableModel_OnClear(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseClear(QSqlTableModel* self);
void QSqlTableModel_OnSetEditStrategy(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSetEditStrategy(QSqlTableModel* self, int strategy);
void QSqlTableModel_OnSort(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSort(QSqlTableModel* self, int column, int order);
void QSqlTableModel_OnSetSort(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSetSort(QSqlTableModel* self, int column, int order);
void QSqlTableModel_OnSetFilter(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSetFilter(QSqlTableModel* self, const libqt_string filter);
void QSqlTableModel_OnRowCount(const QSqlTableModel* self, intptr_t slot);
int QSqlTableModel_QBaseRowCount(const QSqlTableModel* self, const QModelIndex* parent);
void QSqlTableModel_OnRemoveColumns(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseRemoveColumns(QSqlTableModel* self, int column, int count, const QModelIndex* parent);
void QSqlTableModel_OnRemoveRows(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseRemoveRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent);
void QSqlTableModel_OnInsertRows(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseInsertRows(QSqlTableModel* self, int row, int count, const QModelIndex* parent);
void QSqlTableModel_OnRevertRow(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseRevertRow(QSqlTableModel* self, int row);
void QSqlTableModel_OnSelect(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseSelect(QSqlTableModel* self);
void QSqlTableModel_OnSelectRow(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseSelectRow(QSqlTableModel* self, int row);
void QSqlTableModel_OnSubmit(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseSubmit(QSqlTableModel* self);
void QSqlTableModel_OnRevert(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseRevert(QSqlTableModel* self);
void QSqlTableModel_OnUpdateRowInTable(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseUpdateRowInTable(QSqlTableModel* self, int row, const QSqlRecord* values);
void QSqlTableModel_OnInsertRowIntoTable(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseInsertRowIntoTable(QSqlTableModel* self, const QSqlRecord* values);
void QSqlTableModel_OnDeleteRowFromTable(QSqlTableModel* self, intptr_t slot);
bool QSqlTableModel_QBaseDeleteRowFromTable(QSqlTableModel* self, int row);
void QSqlTableModel_OnOrderByClause(const QSqlTableModel* self, intptr_t slot);
libqt_string QSqlTableModel_QBaseOrderByClause(const QSqlTableModel* self);
void QSqlTableModel_OnSelectStatement(const QSqlTableModel* self, intptr_t slot);
libqt_string QSqlTableModel_QBaseSelectStatement(const QSqlTableModel* self);
void QSqlTableModel_OnIndexInQuery(const QSqlTableModel* self, intptr_t slot);
QModelIndex* QSqlTableModel_QBaseIndexInQuery(const QSqlTableModel* self, const QModelIndex* item);
void QSqlTableModel_SetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
void QSqlTableModel_OnSetPrimaryKey(QSqlTableModel* self, intptr_t slot);
void QSqlTableModel_QBaseSetPrimaryKey(QSqlTableModel* self, const QSqlIndex* key);
QSqlRecord* QSqlTableModel_PrimaryValues(const QSqlTableModel* self, int row);
void QSqlTableModel_OnPrimaryValues(const QSqlTableModel* self, intptr_t slot);
QSqlRecord* QSqlTableModel_QBasePrimaryValues(const QSqlTableModel* self, int row);
void QSqlTableModel_Delete(QSqlTableModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
