#pragma once
#ifndef QVBARMODELMAPPER_H_C_LIB
#define QVBARMODELMAPPER_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QVBarModelMapper QVBarModelMapper;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVBarModelMapper* QVBarModelMapper_new();
QVBarModelMapper* QVBarModelMapper_new2(QObject* parent);
libqt_string QVBarModelMapper_Tr(const char* s);
QAbstractItemModel* QVBarModelMapper_Model(const QVBarModelMapper* self);
void QVBarModelMapper_SetModel(QVBarModelMapper* self, QAbstractItemModel* model);
QAbstractBarSeries* QVBarModelMapper_Series(const QVBarModelMapper* self);
void QVBarModelMapper_SetSeries(QVBarModelMapper* self, QAbstractBarSeries* series);
int QVBarModelMapper_FirstBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirstBarSetColumn(QVBarModelMapper* self, int firstBarSetColumn);
int QVBarModelMapper_LastBarSetColumn(const QVBarModelMapper* self);
void QVBarModelMapper_SetLastBarSetColumn(QVBarModelMapper* self, int lastBarSetColumn);
int QVBarModelMapper_FirstRow(const QVBarModelMapper* self);
void QVBarModelMapper_SetFirstRow(QVBarModelMapper* self, int firstRow);
int QVBarModelMapper_RowCount(const QVBarModelMapper* self);
void QVBarModelMapper_SetRowCount(QVBarModelMapper* self, int rowCount);
void QVBarModelMapper_SeriesReplaced(QVBarModelMapper* self);
void QVBarModelMapper_Connect_SeriesReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_ModelReplaced(QVBarModelMapper* self);
void QVBarModelMapper_Connect_ModelReplaced(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_FirstBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_FirstBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_LastBarSetColumnChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_LastBarSetColumnChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_FirstRowChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_FirstRowChanged(QVBarModelMapper* self, intptr_t slot);
void QVBarModelMapper_RowCountChanged(QVBarModelMapper* self);
void QVBarModelMapper_Connect_RowCountChanged(QVBarModelMapper* self, intptr_t slot);
libqt_string QVBarModelMapper_Tr2(const char* s, const char* c);
libqt_string QVBarModelMapper_Tr3(const char* s, const char* c, int n);
void QVBarModelMapper_Delete(QVBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
