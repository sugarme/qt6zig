#pragma once
#ifndef QHBARMODELMAPPER_H_C_LIB
#define QHBARMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QHBarModelMapper QHBarModelMapper;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHBarModelMapper* QHBarModelMapper_new();
QHBarModelMapper* QHBarModelMapper_new2(QObject* parent);
libqt_string QHBarModelMapper_Tr(const char* s);
QAbstractItemModel* QHBarModelMapper_Model(const QHBarModelMapper* self);
void QHBarModelMapper_SetModel(QHBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QHBarModelMapper_Series(const QHBarModelMapper* self);
void QHBarModelMapper_SetSeries(QHBarModelMapper* self, QAbstractBarSeries* series);
int QHBarModelMapper_FirstBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirstBarSetRow(QHBarModelMapper* self, int firstBarSetRow);
int QHBarModelMapper_LastBarSetRow(const QHBarModelMapper* self);
void QHBarModelMapper_SetLastBarSetRow(QHBarModelMapper* self, int lastBarSetRow);
int QHBarModelMapper_FirstColumn(const QHBarModelMapper* self);
void QHBarModelMapper_SetFirstColumn(QHBarModelMapper* self, int firstColumn);
int QHBarModelMapper_ColumnCount(const QHBarModelMapper* self);
void QHBarModelMapper_SetColumnCount(QHBarModelMapper* self, int columnCount);
void QHBarModelMapper_SeriesReplaced(QHBarModelMapper* self);
void QHBarModelMapper_Connect_SeriesReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_ModelReplaced(QHBarModelMapper* self);
void QHBarModelMapper_Connect_ModelReplaced(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_FirstBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_FirstBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_LastBarSetRowChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_LastBarSetRowChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_FirstColumnChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_FirstColumnChanged(QHBarModelMapper* self, intptr_t slot);
void QHBarModelMapper_ColumnCountChanged(QHBarModelMapper* self);
void QHBarModelMapper_Connect_ColumnCountChanged(QHBarModelMapper* self, intptr_t slot);
libqt_string QHBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QHBarModelMapper_Tr3(const char* s, const char* c, int n);
void QHBarModelMapper_Delete(QHBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
