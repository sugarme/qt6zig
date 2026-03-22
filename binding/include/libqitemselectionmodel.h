#pragma once
#ifndef QITEMSELECTIONMODEL_H_C_LIB
#define QITEMSELECTIONMODEL_H_C_LIB

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
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QItemSelectionRange QItemSelectionRange;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QItemSelectionRange* QItemSelectionRange_new();
QItemSelectionRange* QItemSelectionRange_new2(const QModelIndex* topL, const QModelIndex* bottomR);
QItemSelectionRange* QItemSelectionRange_new3(const QModelIndex* index);
void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other);
int QItemSelectionRange_Top(const QItemSelectionRange* self);
int QItemSelectionRange_Left(const QItemSelectionRange* self);
int QItemSelectionRange_Bottom(const QItemSelectionRange* self);
int QItemSelectionRange_Right(const QItemSelectionRange* self);
int QItemSelectionRange_Width(const QItemSelectionRange* self);
int QItemSelectionRange_Height(const QItemSelectionRange* self);
const QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self);
const QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self);
QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self);
const QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self);
bool QItemSelectionRange_Contains(const QItemSelectionRange* self, const QModelIndex* index);
bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, const QModelIndex* parentIndex);
bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, const QItemSelectionRange* other);
QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, const QItemSelectionRange* other);
bool QItemSelectionRange_IsValid(const QItemSelectionRange* self);
bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self);
libqt_list QItemSelectionRange_Indexes(const QItemSelectionRange* self);
void QItemSelectionRange_Delete(QItemSelectionRange* self);

QItemSelectionModel* QItemSelectionModel_new();
QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
libqt_string QItemSelectionModel_Tr(const char* s);
QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self);
bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, const QModelIndex* index);
bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row);
bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column);
bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self);
libqt_list QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self);
libqt_list QItemSelectionModel_SelectedRows(const QItemSelectionModel* self);
libqt_list QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self);
QItemSelection* QItemSelectionModel_Selection(const QItemSelectionModel* self);
const QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self);
QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self);
QBindable<QAbstractItemModel *> QItemSelectionModel_BindableModel(QItemSelectionModel* self);
void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_Select(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_Select2(QItemSelectionModel* self, const QItemSelection* selection, int command);
void QItemSelectionModel_Clear(QItemSelectionModel* self);
void QItemSelectionModel_Reset(QItemSelectionModel* self);
void QItemSelectionModel_ClearSelection(QItemSelectionModel* self);
void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_SelectionChanged(QItemSelectionModel* self, const QItemSelection* selected, const QItemSelection* deselected);
void QItemSelectionModel_Connect_SelectionChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, const QModelIndex* current, const QModelIndex* previous);
void QItemSelectionModel_Connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
void QItemSelectionModel_Connect_ModelChanged(QItemSelectionModel* self, intptr_t slot);
libqt_string QItemSelectionModel_Tr2(const char* s, const char* c);
libqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n);
bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, const QModelIndex* parent);
bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, const QModelIndex* parent);
bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, const QModelIndex* parent);
bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, const QModelIndex* parent);
libqt_list QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column);
libqt_list QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row);
void QItemSelectionModel_OnSetCurrentIndex(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSetCurrentIndex(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_OnSelect(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSelect(QItemSelectionModel* self, const QModelIndex* index, int command);
void QItemSelectionModel_OnSelect2(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseSelect2(QItemSelectionModel* self, const QItemSelection* selection, int command);
void QItemSelectionModel_OnClear(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseClear(QItemSelectionModel* self);
void QItemSelectionModel_OnReset(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseReset(QItemSelectionModel* self);
void QItemSelectionModel_OnClearCurrentIndex(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseClearCurrentIndex(QItemSelectionModel* self);
void QItemSelectionModel_EmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void QItemSelectionModel_OnEmitSelectionChanged(QItemSelectionModel* self, intptr_t slot);
void QItemSelectionModel_QBaseEmitSelectionChanged(QItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
void QItemSelectionModel_Delete(QItemSelectionModel* self);

QItemSelection* QItemSelection_new(const QModelIndex* topLeft, const QModelIndex* bottomRight);
QItemSelection* QItemSelection_new2();
QItemSelection* QItemSelection_new3(const QItemSelection* param1);
void QItemSelection_Select(QItemSelection* self, const QModelIndex* topLeft, const QModelIndex* bottomRight);
bool QItemSelection_Contains(const QItemSelection* self, const QModelIndex* index);
libqt_list QItemSelection_Indexes(const QItemSelection* self);
void QItemSelection_Merge(QItemSelection* self, const QItemSelection* other, int command);
void QItemSelection_Split(const QItemSelectionRange* range, const QItemSelectionRange* other, QItemSelection* result);
void QItemSelection_Delete(QItemSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
