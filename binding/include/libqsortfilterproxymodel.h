#pragma once
#ifndef QSORTFILTERPROXYMODEL_H_C_LIB
#define QSORTFILTERPROXYMODEL_H_C_LIB

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
typedef struct QRegularExpression QRegularExpression;
typedef struct QSize QSize;
typedef struct QSortFilterProxyModel QSortFilterProxyModel;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSortFilterProxyModel* QSortFilterProxyModel_new();
QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent);
libqt_string QSortFilterProxyModel_Tr(const char* s);
void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex);
QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex);
QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection);
QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection);
QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self);
QBindable<QRegularExpression> QSortFilterProxyModel_BindableFilterRegularExpression(QSortFilterProxyModel* self);
int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column);
QBindable<int> QSortFilterProxyModel_BindableFilterKeyColumn(QSortFilterProxyModel* self);
int QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, int cs);
QBindable<Qt::CaseSensitivity> QSortFilterProxyModel_BindableFilterCaseSensitivity(QSortFilterProxyModel* self);
int QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, int cs);
QBindable<Qt::CaseSensitivity> QSortFilterProxyModel_BindableSortCaseSensitivity(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on);
QBindable<bool> QSortFilterProxyModel_BindableIsSortLocaleAware(QSortFilterProxyModel* self);
int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self);
bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable);
QBindable<bool> QSortFilterProxyModel_BindableDynamicSortFilter(QSortFilterProxyModel* self);
int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role);
QBindable<int> QSortFilterProxyModel_BindableSortRole(QSortFilterProxyModel* self);
int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role);
QBindable<int> QSortFilterProxyModel_BindableFilterRole(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive);
QBindable<bool> QSortFilterProxyModel_BindableRecursiveFilteringEnabled(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_AutoAcceptChildRows(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetAutoAcceptChildRows(QSortFilterProxyModel* self, bool accept);
QBindable<bool> QSortFilterProxyModel_BindableAutoAcceptChildRows(QSortFilterProxyModel* self);
void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, const libqt_string pattern);
void QSortFilterProxyModel_SetFilterRegularExpression2(QSortFilterProxyModel* self, const QRegularExpression* regularExpression);
void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, const libqt_string pattern);
void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, const libqt_string pattern);
void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self);
bool QSortFilterProxyModel_FilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
bool QSortFilterProxyModel_FilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
bool QSortFilterProxyModel_LessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, const QModelIndex* child);
QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx);
int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, const QModelIndex* parent);
int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent);
bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent);
QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, const QModelIndex* index, int role);
bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role);
bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role);
QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, const libqt_list indexes);
bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, const QModelIndex* parent);
bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent);
int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, const QModelIndex* index);
QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, const QModelIndex* index);
libqt_list QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, const QModelIndex* index);
void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order);
libqt_list QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self);
int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter);
void QSortFilterProxyModel_Connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity);
void QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity);
void QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware);
void QSortFilterProxyModel_Connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole);
void QSortFilterProxyModel_Connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole);
void QSortFilterProxyModel_Connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled);
void QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, bool autoAcceptChildRows);
void QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, intptr_t slot);
libqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c);
libqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n);
void QSortFilterProxyModel_OnSetSourceModel(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseSetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel);
void QSortFilterProxyModel_OnMapToSource(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseMapToSource(const QSortFilterProxyModel* self, const QModelIndex* proxyIndex);
void QSortFilterProxyModel_OnMapFromSource(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseMapFromSource(const QSortFilterProxyModel* self, const QModelIndex* sourceIndex);
void QSortFilterProxyModel_OnMapSelectionToSource(const QSortFilterProxyModel* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionToSource(const QSortFilterProxyModel* self, const QItemSelection* proxySelection);
void QSortFilterProxyModel_OnMapSelectionFromSource(const QSortFilterProxyModel* self, intptr_t slot);
QItemSelection* QSortFilterProxyModel_QBaseMapSelectionFromSource(const QSortFilterProxyModel* self, const QItemSelection* sourceSelection);
void QSortFilterProxyModel_OnFilterAcceptsRow(const QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseFilterAcceptsRow(const QSortFilterProxyModel* self, int source_row, const QModelIndex* source_parent);
void QSortFilterProxyModel_OnFilterAcceptsColumn(const QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseFilterAcceptsColumn(const QSortFilterProxyModel* self, int source_column, const QModelIndex* source_parent);
void QSortFilterProxyModel_OnLessThan(const QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseLessThan(const QSortFilterProxyModel* self, const QModelIndex* source_left, const QModelIndex* source_right);
void QSortFilterProxyModel_OnIndex(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseIndex(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* parent);
void QSortFilterProxyModel_OnParent(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseParent(const QSortFilterProxyModel* self, const QModelIndex* child);
void QSortFilterProxyModel_OnSibling(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseSibling(const QSortFilterProxyModel* self, int row, int column, const QModelIndex* idx);
void QSortFilterProxyModel_OnRowCount(const QSortFilterProxyModel* self, intptr_t slot);
int QSortFilterProxyModel_QBaseRowCount(const QSortFilterProxyModel* self, const QModelIndex* parent);
void QSortFilterProxyModel_OnColumnCount(const QSortFilterProxyModel* self, intptr_t slot);
int QSortFilterProxyModel_QBaseColumnCount(const QSortFilterProxyModel* self, const QModelIndex* parent);
void QSortFilterProxyModel_OnHasChildren(const QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseHasChildren(const QSortFilterProxyModel* self, const QModelIndex* parent);
void QSortFilterProxyModel_OnData(const QSortFilterProxyModel* self, intptr_t slot);
QVariant* QSortFilterProxyModel_QBaseData(const QSortFilterProxyModel* self, const QModelIndex* index, int role);
void QSortFilterProxyModel_OnSetData(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseSetData(QSortFilterProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void QSortFilterProxyModel_OnHeaderData(const QSortFilterProxyModel* self, intptr_t slot);
QVariant* QSortFilterProxyModel_QBaseHeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role);
void QSortFilterProxyModel_OnSetHeaderData(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseSetHeaderData(QSortFilterProxyModel* self, int section, int orientation, const QVariant* value, int role);
void QSortFilterProxyModel_OnMimeData(const QSortFilterProxyModel* self, intptr_t slot);
QMimeData* QSortFilterProxyModel_QBaseMimeData(const QSortFilterProxyModel* self, const libqt_list indexes);
void QSortFilterProxyModel_OnDropMimeData(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseDropMimeData(QSortFilterProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QSortFilterProxyModel_OnInsertRows(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseInsertRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
void QSortFilterProxyModel_OnInsertColumns(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseInsertColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void QSortFilterProxyModel_OnRemoveRows(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseRemoveRows(QSortFilterProxyModel* self, int row, int count, const QModelIndex* parent);
void QSortFilterProxyModel_OnRemoveColumns(QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseRemoveColumns(QSortFilterProxyModel* self, int column, int count, const QModelIndex* parent);
void QSortFilterProxyModel_OnFetchMore(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseFetchMore(QSortFilterProxyModel* self, const QModelIndex* parent);
void QSortFilterProxyModel_OnCanFetchMore(const QSortFilterProxyModel* self, intptr_t slot);
bool QSortFilterProxyModel_QBaseCanFetchMore(const QSortFilterProxyModel* self, const QModelIndex* parent);
void QSortFilterProxyModel_OnFlags(const QSortFilterProxyModel* self, intptr_t slot);
int QSortFilterProxyModel_QBaseFlags(const QSortFilterProxyModel* self, const QModelIndex* index);
void QSortFilterProxyModel_OnBuddy(const QSortFilterProxyModel* self, intptr_t slot);
QModelIndex* QSortFilterProxyModel_QBaseBuddy(const QSortFilterProxyModel* self, const QModelIndex* index);
void QSortFilterProxyModel_OnMatch(const QSortFilterProxyModel* self, intptr_t slot);
libqt_list QSortFilterProxyModel_QBaseMatch(const QSortFilterProxyModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags);
void QSortFilterProxyModel_OnSpan(const QSortFilterProxyModel* self, intptr_t slot);
QSize* QSortFilterProxyModel_QBaseSpan(const QSortFilterProxyModel* self, const QModelIndex* index);
void QSortFilterProxyModel_OnSort(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseSort(QSortFilterProxyModel* self, int column, int order);
void QSortFilterProxyModel_OnMimeTypes(const QSortFilterProxyModel* self, intptr_t slot);
libqt_list QSortFilterProxyModel_QBaseMimeTypes(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_OnSupportedDropActions(const QSortFilterProxyModel* self, intptr_t slot);
int QSortFilterProxyModel_QBaseSupportedDropActions(const QSortFilterProxyModel* self);
void QSortFilterProxyModel_InvalidateFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_OnInvalidateFilter(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseInvalidateFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_InvalidateRowsFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_OnInvalidateRowsFilter(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseInvalidateRowsFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_InvalidateColumnsFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_OnInvalidateColumnsFilter(QSortFilterProxyModel* self, intptr_t slot);
void QSortFilterProxyModel_QBaseInvalidateColumnsFilter(QSortFilterProxyModel* self);
void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
