#pragma once
#ifndef QVPIEMODELMAPPER_H_C_LIB
#define QVPIEMODELMAPPER_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
typedef struct QVPieModelMapper QVPieModelMapper;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVPieModelMapper* QVPieModelMapper_new();
QVPieModelMapper* QVPieModelMapper_new2(QObject* parent);
libqt_string QVPieModelMapper_Tr(const char* s);
QAbstractItemModel* QVPieModelMapper_Model(const QVPieModelMapper* self);
void QVPieModelMapper_SetModel(QVPieModelMapper* self, QAbstractItemModel* model);
QPieSeries* QVPieModelMapper_Series(const QVPieModelMapper* self);
void QVPieModelMapper_SetSeries(QVPieModelMapper* self, QPieSeries* series);
int QVPieModelMapper_ValuesColumn(const QVPieModelMapper* self);
void QVPieModelMapper_SetValuesColumn(QVPieModelMapper* self, int valuesColumn);
int QVPieModelMapper_LabelsColumn(const QVPieModelMapper* self);
void QVPieModelMapper_SetLabelsColumn(QVPieModelMapper* self, int labelsColumn);
int QVPieModelMapper_FirstRow(const QVPieModelMapper* self);
void QVPieModelMapper_SetFirstRow(QVPieModelMapper* self, int firstRow);
int QVPieModelMapper_RowCount(const QVPieModelMapper* self);
void QVPieModelMapper_SetRowCount(QVPieModelMapper* self, int rowCount);
void QVPieModelMapper_SeriesReplaced(QVPieModelMapper* self);
void QVPieModelMapper_Connect_SeriesReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_ModelReplaced(QVPieModelMapper* self);
void QVPieModelMapper_Connect_ModelReplaced(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_ValuesColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_ValuesColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_LabelsColumnChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_LabelsColumnChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_FirstRowChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_FirstRowChanged(QVPieModelMapper* self, intptr_t slot);
void QVPieModelMapper_RowCountChanged(QVPieModelMapper* self);
void QVPieModelMapper_Connect_RowCountChanged(QVPieModelMapper* self, intptr_t slot);
libqt_string QVPieModelMapper_Tr2(const char* s, const char* c);
libqt_string QVPieModelMapper_Tr3(const char* s, const char* c, int n);
void QVPieModelMapper_Delete(QVPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
