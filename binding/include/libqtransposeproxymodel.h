#pragma once
#ifndef QTRANSPOSEPROXYMODEL_H_C_LIB
#define QTRANSPOSEPROXYMODEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
libqt_string QTransposeProxyModel_Tr(const char* s);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, const QModelIndex* parent);
int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role);
bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map roles);
QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, const QModelIndex* index);
libqt_map QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, const QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, const QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order);
libqt_string QTransposeProxyModel_Tr2(const char* s, const char* c);
libqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n);
void QTransposeProxyModel_OnSetSourceModel(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseSetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
void QTransposeProxyModel_OnRowCount(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseRowCount(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnColumnCount(const QTransposeProxyModel* self, intptr_t slot);
int QTransposeProxyModel_QBaseColumnCount(const QTransposeProxyModel* self, const QModelIndex* parent);
void QTransposeProxyModel_OnHeaderData(const QTransposeProxyModel* self, intptr_t slot);
QVariant* QTransposeProxyModel_QBaseHeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
void QTransposeProxyModel_OnSetHeaderData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSetHeaderData(QTransposeProxyModel* self, int section, int orientation, const QVariant* value, int role);
void QTransposeProxyModel_OnSetItemData(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseSetItemData(QTransposeProxyModel* self, const QModelIndex* index, const libqt_map roles);
void QTransposeProxyModel_OnSpan(const QTransposeProxyModel* self, intptr_t slot);
QSize* QTransposeProxyModel_QBaseSpan(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnItemData(const QTransposeProxyModel* self, intptr_t slot);
libqt_map QTransposeProxyModel_QBaseItemData(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnMapFromSource(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseMapFromSource(const QTransposeProxyModel* self, const QModelIndex* sourceIndex);
void QTransposeProxyModel_OnMapToSource(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseMapToSource(const QTransposeProxyModel* self, const QModelIndex* proxyIndex);
void QTransposeProxyModel_OnParent(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseParent(const QTransposeProxyModel* self, const QModelIndex* index);
void QTransposeProxyModel_OnIndex(const QTransposeProxyModel* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_QBaseIndex(const QTransposeProxyModel* self, int row, int column, const QModelIndex* parent);
void QTransposeProxyModel_OnInsertRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseInsertRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnRemoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseRemoveRows(QTransposeProxyModel* self, int row, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnMoveRows(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseMoveRows(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnInsertColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseInsertColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnRemoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseRemoveColumns(QTransposeProxyModel* self, int column, int count, const QModelIndex* parent);
void QTransposeProxyModel_OnMoveColumns(QTransposeProxyModel* self, intptr_t slot);
bool QTransposeProxyModel_QBaseMoveColumns(QTransposeProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_OnSort(QTransposeProxyModel* self, intptr_t slot);
void QTransposeProxyModel_QBaseSort(QTransposeProxyModel* self, int column, int order);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
