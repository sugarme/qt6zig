#pragma once
#ifndef QHPIEMODELMAPPER_H_C_LIB
#define QHPIEMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QHPieModelMapper QHPieModelMapper;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHPieModelMapper* QHPieModelMapper_new();
QHPieModelMapper* QHPieModelMapper_new2(QObject* parent);
libqt_string QHPieModelMapper_Tr(const char* s);
QAbstractItemModel* QHPieModelMapper_Model(const QHPieModelMapper* self);
void QHPieModelMapper_SetModel(QHPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QHPieModelMapper_Series(const QHPieModelMapper* self);
void QHPieModelMapper_SetSeries(QHPieModelMapper* self, QPieSeries* series);
int QHPieModelMapper_ValuesRow(const QHPieModelMapper* self);
void QHPieModelMapper_SetValuesRow(QHPieModelMapper* self, int valuesRow);
int QHPieModelMapper_LabelsRow(const QHPieModelMapper* self);
void QHPieModelMapper_SetLabelsRow(QHPieModelMapper* self, int labelsRow);
int QHPieModelMapper_FirstColumn(const QHPieModelMapper* self);
void QHPieModelMapper_SetFirstColumn(QHPieModelMapper* self, int firstColumn);
int QHPieModelMapper_ColumnCount(const QHPieModelMapper* self);
void QHPieModelMapper_SetColumnCount(QHPieModelMapper* self, int columnCount);
void QHPieModelMapper_SeriesReplaced(QHPieModelMapper* self);
void QHPieModelMapper_Connect_SeriesReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ModelReplaced(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ModelReplaced(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ValuesRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ValuesRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_LabelsRowChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_LabelsRowChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_FirstColumnChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_FirstColumnChanged(QHPieModelMapper* self, intptr_t slot);
void QHPieModelMapper_ColumnCountChanged(QHPieModelMapper* self);
void QHPieModelMapper_Connect_ColumnCountChanged(QHPieModelMapper* self, intptr_t slot);
libqt_string QHPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QHPieModelMapper_Tr3(const char* s, const char* c, int n);
void QHPieModelMapper_Delete(QHPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
