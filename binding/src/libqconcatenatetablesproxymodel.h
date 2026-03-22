#pragma once
#ifndef QCONCATENATETABLESPROXYMODEL_H_C_LIB
#define QCONCATENATETABLESPROXYMODEL_H_C_LIB

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
typedef struct QConcatenateTablesProxyModel QConcatenateTablesProxyModel;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new();
QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent);
libqt_string QConcatenateTablesProxyModel_Tr(const char* s);
libqt_list QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel);
QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, const QModelIndex* sourceIndex);
QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex);
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role);
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
libqt_map QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex);
bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map roles);
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent);
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent);
libqt_list QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self);
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, const libqt_list indexes);
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c);
libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n);
void QConcatenateTablesProxyModel_OnData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_QBaseData(const QConcatenateTablesProxyModel* self, const QModelIndex* index, int role);
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSetData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const QVariant* value, int role);
void QConcatenateTablesProxyModel_OnItemData(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_map QConcatenateTablesProxyModel_QBaseItemData(const QConcatenateTablesProxyModel* self, const QModelIndex* proxyIndex);
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseSetItemData(QConcatenateTablesProxyModel* self, const QModelIndex* index, const libqt_map roles);
void QConcatenateTablesProxyModel_OnFlags(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseFlags(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
void QConcatenateTablesProxyModel_OnIndex(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseIndex(const QConcatenateTablesProxyModel* self, int row, int column, const QModelIndex* parent);
void QConcatenateTablesProxyModel_OnParent(const QConcatenateTablesProxyModel* self, intptr_t slot);
QModelIndex* QConcatenateTablesProxyModel_QBaseParent(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
void QConcatenateTablesProxyModel_OnRowCount(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseRowCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent);
void QConcatenateTablesProxyModel_OnHeaderData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QVariant* QConcatenateTablesProxyModel_QBaseHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role);
void QConcatenateTablesProxyModel_OnColumnCount(const QConcatenateTablesProxyModel* self, intptr_t slot);
int QConcatenateTablesProxyModel_QBaseColumnCount(const QConcatenateTablesProxyModel* self, const QModelIndex* parent);
void QConcatenateTablesProxyModel_OnMimeTypes(const QConcatenateTablesProxyModel* self, intptr_t slot);
libqt_list QConcatenateTablesProxyModel_QBaseMimeTypes(const QConcatenateTablesProxyModel* self);
void QConcatenateTablesProxyModel_OnMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot);
QMimeData* QConcatenateTablesProxyModel_QBaseMimeData(const QConcatenateTablesProxyModel* self, const libqt_list indexes);
void QConcatenateTablesProxyModel_OnCanDropMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseCanDropMimeData(const QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot);
bool QConcatenateTablesProxyModel_QBaseDropMimeData(QConcatenateTablesProxyModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent);
void QConcatenateTablesProxyModel_OnSpan(const QConcatenateTablesProxyModel* self, intptr_t slot);
QSize* QConcatenateTablesProxyModel_QBaseSpan(const QConcatenateTablesProxyModel* self, const QModelIndex* index);
void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
