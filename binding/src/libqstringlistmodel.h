#pragma once
#ifndef QSTRINGLISTMODEL_H_C_LIB
#define QSTRINGLISTMODEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QStringListModel QStringListModel;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStringListModel* QStringListModel_new();
QStringListModel* QStringListModel_new2(const libqt_list strings);
QStringListModel* QStringListModel_new3(QObject* parent);
QStringListModel* QStringListModel_new4(const libqt_list strings, QObject* parent);
libqt_string QStringListModel_Tr(const char* s);
int QStringListModel_RowCount(const QStringListModel* self, const QModelIndex* parent);
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, const QModelIndex* idx);
QVariant* QStringListModel_Data(const QStringListModel* self, const QModelIndex* index, int role);
bool QStringListModel_SetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role);
bool QStringListModel_ClearItemData(QStringListModel* self, const QModelIndex* index);
int QStringListModel_Flags(const QStringListModel* self, const QModelIndex* index);
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
bool QStringListModel_MoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
libqt_map QStringListModel_ItemData(const QStringListModel* self, const QModelIndex* index);
bool QStringListModel_SetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map roles);
void QStringListModel_Sort(QStringListModel* self, int column, int order);
libqt_list QStringListModel_StringList(const QStringListModel* self);
void QStringListModel_SetStringList(QStringListModel* self, const libqt_list strings);
int QStringListModel_SupportedDropActions(const QStringListModel* self);
libqt_string QStringListModel_Tr2(const char* s, const char* c);
libqt_string QStringListModel_Tr3(const char* s, const char* c, int n);
void QStringListModel_OnRowCount(const QStringListModel* self, intptr_t slot);
int QStringListModel_QBaseRowCount(const QStringListModel* self, const QModelIndex* parent);
void QStringListModel_OnSibling(const QStringListModel* self, intptr_t slot);
QModelIndex* QStringListModel_QBaseSibling(const QStringListModel* self, int row, int column, const QModelIndex* idx);
void QStringListModel_OnData(const QStringListModel* self, intptr_t slot);
QVariant* QStringListModel_QBaseData(const QStringListModel* self, const QModelIndex* index, int role);
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseSetData(QStringListModel* self, const QModelIndex* index, const QVariant* value, int role);
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseClearItemData(QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnFlags(const QStringListModel* self, intptr_t slot);
int QStringListModel_QBaseFlags(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseInsertRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseRemoveRows(QStringListModel* self, int row, int count, const QModelIndex* parent);
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseMoveRows(QStringListModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild);
void QStringListModel_OnItemData(const QStringListModel* self, intptr_t slot);
libqt_map QStringListModel_QBaseItemData(const QStringListModel* self, const QModelIndex* index);
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot);
bool QStringListModel_QBaseSetItemData(QStringListModel* self, const QModelIndex* index, const libqt_map roles);
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot);
void QStringListModel_QBaseSort(QStringListModel* self, int column, int order);
void QStringListModel_OnSupportedDropActions(const QStringListModel* self, intptr_t slot);
int QStringListModel_QBaseSupportedDropActions(const QStringListModel* self);
void QStringListModel_Delete(QStringListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
