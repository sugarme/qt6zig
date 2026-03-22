#pragma once
#ifndef QABSTRACTPROXYMODEL_H_C_LIB
#define QABSTRACTPROXYMODEL_H_C_LIB

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
typedef struct QItemSelection QItemSelection;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractProxyModel* QAbstractProxyModel_new();
QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent);
libqt_string QAbstractProxyModel_Tr(const char* s);
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self);
QBindable<QAbstractItemModel *> QAbstractProxyModel_BindableSourceModel(QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex);
QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection);
QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection);
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self);
void QAbstractProxyModel_Revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role);
QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role);
libqt_map QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, const QModelIndex* index);
int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map roles);
bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role);
bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, const QModelIndex* index);
QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order);
QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, const QModelIndex* index);
bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, const QModelIndex* parent);
QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx);
QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, const libqt_list indexes);
bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
libqt_list QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self);
libqt_map QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self);
libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c);
libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n);
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_QBaseSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
void QAbstractProxyModel_OnMapToSource(const QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_QBaseMapToSource(const QAbstractProxyModel* self, const QModelIndex* proxyIndex);
void QAbstractProxyModel_OnMapFromSource(const QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_QBaseMapFromSource(const QAbstractProxyModel* self, const QModelIndex* sourceIndex);
void QAbstractProxyModel_OnMapSelectionToSource(const QAbstractProxyModel* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_QBaseMapSelectionToSource(const QAbstractProxyModel* self, const QItemSelection* selection);
void QAbstractProxyModel_OnMapSelectionFromSource(const QAbstractProxyModel* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_QBaseMapSelectionFromSource(const QAbstractProxyModel* self, const QItemSelection* selection);
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseSubmit(QAbstractProxyModel* self);
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_QBaseRevert(QAbstractProxyModel* self);
void QAbstractProxyModel_OnData(const QAbstractProxyModel* self, intptr_t slot);
QVariant* QAbstractProxyModel_QBaseData(const QAbstractProxyModel* self, const QModelIndex* proxyIndex, int role);
void QAbstractProxyModel_OnHeaderData(const QAbstractProxyModel* self, intptr_t slot);
QVariant* QAbstractProxyModel_QBaseHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role);
void QAbstractProxyModel_OnItemData(const QAbstractProxyModel* self, intptr_t slot);
libqt_map QAbstractProxyModel_QBaseItemData(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnFlags(const QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_QBaseFlags(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseSetData(QAbstractProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseSetItemData(QAbstractProxyModel* self, const QModelIndex* index, const libqt_map roles);
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseSetHeaderData(QAbstractProxyModel* self, int section, int orientation, const QVariant* value, int role);
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseClearItemData(QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnBuddy(const QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_QBaseBuddy(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnCanFetchMore(const QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseCanFetchMore(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_QBaseFetchMore(QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_QBaseSort(QAbstractProxyModel* self, int column, int order);
void QAbstractProxyModel_OnSpan(const QAbstractProxyModel* self, intptr_t slot);
QSize* QAbstractProxyModel_QBaseSpan(const QAbstractProxyModel* self, const QModelIndex* index);
void QAbstractProxyModel_OnHasChildren(const QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseHasChildren(const QAbstractProxyModel* self, const QModelIndex* parent);
void QAbstractProxyModel_OnSibling(const QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_QBaseSibling(const QAbstractProxyModel* self, int row, int column, const QModelIndex* idx);
void QAbstractProxyModel_OnMimeData(const QAbstractProxyModel* self, intptr_t slot);
QMimeData* QAbstractProxyModel_QBaseMimeData(const QAbstractProxyModel* self, const libqt_list indexes);
void QAbstractProxyModel_OnCanDropMimeData(const QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseCanDropMimeData(const QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot);
bool QAbstractProxyModel_QBaseDropMimeData(QAbstractProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QAbstractProxyModel_OnMimeTypes(const QAbstractProxyModel* self, intptr_t slot);
libqt_list QAbstractProxyModel_QBaseMimeTypes(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnSupportedDragActions(const QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_QBaseSupportedDragActions(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnSupportedDropActions(const QAbstractProxyModel* self, intptr_t slot);
int QAbstractProxyModel_QBaseSupportedDropActions(const QAbstractProxyModel* self);
void QAbstractProxyModel_OnRoleNames(const QAbstractProxyModel* self, intptr_t slot);
libqt_map QAbstractProxyModel_QBaseRoleNames(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
void QAbstractProxyModel_OnCreateSourceIndex(const QAbstractProxyModel* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr);
void QAbstractProxyModel_Connect_sourceModelChanged(QAbstractProxyModel* self, intptr_t slot);
void QAbstractProxyModel_Delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
