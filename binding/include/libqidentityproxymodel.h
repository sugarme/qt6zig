#pragma once
#ifndef QIDENTITYPROXYMODEL_H_C_LIB
#define QIDENTITYPROXYMODEL_H_C_LIB

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
typedef struct QIdentityProxyModel QIdentityProxyModel;
typedef struct QItemSelection QItemSelection;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QIdentityProxyModel* QIdentityProxyModel_new();
QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent);
libqt_string QIdentityProxyModel_Tr(const char* s);
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex);
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, const QModelIndex* child);
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, const QModelIndex* parent);
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role);
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx);
QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection);
QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection);
libqt_list QIdentityProxyModel_Match(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent);
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent);
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent);
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent);
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
bool QIdentityProxyModel_HandleSourceLayoutChanges(const QIdentityProxyModel* self);
bool QIdentityProxyModel_HandleSourceDataChanges(const QIdentityProxyModel* self);
libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c);
libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n);
void QIdentityProxyModel_OnColumnCount(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseColumnCount(const QIdentityProxyModel* self, const QModelIndex* parent);
void QIdentityProxyModel_OnIndex(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseIndex(const QIdentityProxyModel* self, int row, int column, const QModelIndex* parent);
void QIdentityProxyModel_OnMapFromSource(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseMapFromSource(const QIdentityProxyModel* self, const QModelIndex* sourceIndex);
void QIdentityProxyModel_OnMapToSource(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseMapToSource(const QIdentityProxyModel* self, const QModelIndex* proxyIndex);
void QIdentityProxyModel_OnParent(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseParent(const QIdentityProxyModel* self, const QModelIndex* child);
void QIdentityProxyModel_OnRowCount(const QIdentityProxyModel* self, intptr_t slot);
int QIdentityProxyModel_QBaseRowCount(const QIdentityProxyModel* self, const QModelIndex* parent);
void QIdentityProxyModel_OnHeaderData(const QIdentityProxyModel* self, intptr_t slot);
QVariant* QIdentityProxyModel_QBaseHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role);
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseDropMimeData(QIdentityProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QIdentityProxyModel_OnSibling(const QIdentityProxyModel* self, intptr_t slot);
QModelIndex* QIdentityProxyModel_QBaseSibling(const QIdentityProxyModel* self, int row, int column, const QModelIndex* idx);
void QIdentityProxyModel_OnMapSelectionFromSource(const QIdentityProxyModel* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_QBaseMapSelectionFromSource(const QIdentityProxyModel* self, const QItemSelection* selection);
void QIdentityProxyModel_OnMapSelectionToSource(const QIdentityProxyModel* self, intptr_t slot);
QItemSelection* QIdentityProxyModel_QBaseMapSelectionToSource(const QIdentityProxyModel* self, const QItemSelection* selection);
void QIdentityProxyModel_OnMatch(const QIdentityProxyModel* self, intptr_t slot);
libqt_list QIdentityProxyModel_QBaseMatch(const QIdentityProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel);
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseInsertColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent);
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseInsertRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent);
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseRemoveColumns(QIdentityProxyModel* self, int column, int count, const QModelIndex* parent);
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseRemoveRows(QIdentityProxyModel* self, int row, int count, const QModelIndex* parent);
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseMoveRows(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot);
bool QIdentityProxyModel_QBaseMoveColumns(QIdentityProxyModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild);
void QIdentityProxyModel_SetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
void QIdentityProxyModel_OnSetHandleSourceLayoutChanges(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseSetHandleSourceLayoutChanges(QIdentityProxyModel* self, bool handleSourceLayoutChanges);
void QIdentityProxyModel_SetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
void QIdentityProxyModel_OnSetHandleSourceDataChanges(QIdentityProxyModel* self, intptr_t slot);
void QIdentityProxyModel_QBaseSetHandleSourceDataChanges(QIdentityProxyModel* self, bool handleSourceDataChanges);
void QIdentityProxyModel_Delete(QIdentityProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
