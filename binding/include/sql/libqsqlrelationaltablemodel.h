#pragma once
#ifndef QSQLRELATIONALTABLEMODEL_H_C_LIB
#define QSQLRELATIONALTABLEMODEL_H_C_LIB

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
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlRelation QSqlRelation;
typedef struct QSqlRelationalTableModel QSqlRelationalTableModel;
typedef struct QSqlTableModel QSqlTableModel;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSqlRelation* QSqlRelation_new();
QSqlRelation* QSqlRelation_new2(const libqt_string aTableName, const libqt_string indexCol, const libqt_string displayCol);
QSqlRelation* QSqlRelation_new3(const QSqlRelation* param1);
void QSqlRelation_Swap(QSqlRelation* self, QSqlRelation* other);
libqt_string QSqlRelation_TableName(const QSqlRelation* self);
libqt_string QSqlRelation_IndexColumn(const QSqlRelation* self);
libqt_string QSqlRelation_DisplayColumn(const QSqlRelation* self);
bool QSqlRelation_IsValid(const QSqlRelation* self);
void QSqlRelation_Delete(QSqlRelation* self);

QSqlRelationalTableModel* QSqlRelationalTableModel_new();
QSqlRelationalTableModel* QSqlRelationalTableModel_new2(QObject* parent);
QSqlRelationalTableModel* QSqlRelationalTableModel_new3(QObject* parent, const QSqlDatabase* db);
libqt_string QSqlRelationalTableModel_Tr(const char* s);
QVariant* QSqlRelationalTableModel_Data(const QSqlRelationalTableModel* self, const QModelIndex* item, int role);
bool QSqlRelationalTableModel_SetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role);
bool QSqlRelationalTableModel_RemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent);
void QSqlRelationalTableModel_Clear(QSqlRelationalTableModel* self);
bool QSqlRelationalTableModel_Select(QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_SetTable(QSqlRelationalTableModel* self, const libqt_string tableName);
void QSqlRelationalTableModel_SetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation);
QSqlRelation* QSqlRelationalTableModel_Relation(const QSqlRelationalTableModel* self, int column);
QSqlTableModel* QSqlRelationalTableModel_RelationModel(const QSqlRelationalTableModel* self, int column);
void QSqlRelationalTableModel_SetJoinMode(QSqlRelationalTableModel* self, int joinMode);
void QSqlRelationalTableModel_RevertRow(QSqlRelationalTableModel* self, int row);
libqt_string QSqlRelationalTableModel_SelectStatement(const QSqlRelationalTableModel* self);
bool QSqlRelationalTableModel_UpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
bool QSqlRelationalTableModel_InsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
libqt_string QSqlRelationalTableModel_OrderByClause(const QSqlRelationalTableModel* self);
libqt_string QSqlRelationalTableModel_Tr2(const char* s, const char* c);
libqt_string QSqlRelationalTableModel_Tr3(const char* s, const char* c, int n);
void QSqlRelationalTableModel_OnData(const QSqlRelationalTableModel* self, intptr_t slot);
QVariant* QSqlRelationalTableModel_QBaseData(const QSqlRelationalTableModel* self, const QModelIndex* item, int role);
void QSqlRelationalTableModel_OnSetData(QSqlRelationalTableModel* self, intptr_t slot);
bool QSqlRelationalTableModel_QBaseSetData(QSqlRelationalTableModel* self, const QModelIndex* item, const QVariant* value, int role);
void QSqlRelationalTableModel_OnRemoveColumns(QSqlRelationalTableModel* self, intptr_t slot);
bool QSqlRelationalTableModel_QBaseRemoveColumns(QSqlRelationalTableModel* self, int column, int count, const QModelIndex* parent);
void QSqlRelationalTableModel_OnClear(QSqlRelationalTableModel* self, intptr_t slot);
void QSqlRelationalTableModel_QBaseClear(QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_OnSelect(QSqlRelationalTableModel* self, intptr_t slot);
bool QSqlRelationalTableModel_QBaseSelect(QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_OnSetTable(QSqlRelationalTableModel* self, intptr_t slot);
void QSqlRelationalTableModel_QBaseSetTable(QSqlRelationalTableModel* self, const libqt_string tableName);
void QSqlRelationalTableModel_OnSetRelation(QSqlRelationalTableModel* self, intptr_t slot);
void QSqlRelationalTableModel_QBaseSetRelation(QSqlRelationalTableModel* self, int column, const QSqlRelation* relation);
void QSqlRelationalTableModel_OnRelationModel(const QSqlRelationalTableModel* self, intptr_t slot);
QSqlTableModel* QSqlRelationalTableModel_QBaseRelationModel(const QSqlRelationalTableModel* self, int column);
void QSqlRelationalTableModel_OnRevertRow(QSqlRelationalTableModel* self, intptr_t slot);
void QSqlRelationalTableModel_QBaseRevertRow(QSqlRelationalTableModel* self, int row);
void QSqlRelationalTableModel_OnSelectStatement(const QSqlRelationalTableModel* self, intptr_t slot);
libqt_string QSqlRelationalTableModel_QBaseSelectStatement(const QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_OnUpdateRowInTable(QSqlRelationalTableModel* self, intptr_t slot);
bool QSqlRelationalTableModel_QBaseUpdateRowInTable(QSqlRelationalTableModel* self, int row, const QSqlRecord* values);
void QSqlRelationalTableModel_OnInsertRowIntoTable(QSqlRelationalTableModel* self, intptr_t slot);
bool QSqlRelationalTableModel_QBaseInsertRowIntoTable(QSqlRelationalTableModel* self, const QSqlRecord* values);
void QSqlRelationalTableModel_OnOrderByClause(const QSqlRelationalTableModel* self, intptr_t slot);
libqt_string QSqlRelationalTableModel_QBaseOrderByClause(const QSqlRelationalTableModel* self);
void QSqlRelationalTableModel_Delete(QSqlRelationalTableModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
