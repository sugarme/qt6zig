#pragma once
#ifndef QVBOXPLOTMODELMAPPER_H_C_LIB
#define QVBOXPLOTMODELMAPPER_H_C_LIB

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
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QObject QObject;
typedef struct QVBoxPlotModelMapper QVBoxPlotModelMapper;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVBoxPlotModelMapper* QVBoxPlotModelMapper_new();
QVBoxPlotModelMapper* QVBoxPlotModelMapper_new2(QObject* parent);
libqt_string QVBoxPlotModelMapper_Tr(const char* s);
QAbstractItemModel* QVBoxPlotModelMapper_Model(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetModel(QVBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QVBoxPlotModelMapper_Series(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetSeries(QVBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QVBoxPlotModelMapper_FirstBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirstBoxSetColumn(QVBoxPlotModelMapper* self, int firstBoxSetColumn);
int QVBoxPlotModelMapper_LastBoxSetColumn(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetLastBoxSetColumn(QVBoxPlotModelMapper* self, int lastBoxSetColumn);
int QVBoxPlotModelMapper_FirstRow(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetFirstRow(QVBoxPlotModelMapper* self, int firstRow);
int QVBoxPlotModelMapper_RowCount(const QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_SetRowCount(QVBoxPlotModelMapper* self, int rowCount);
void QVBoxPlotModelMapper_SeriesReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_SeriesReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_ModelReplaced(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_ModelReplaced(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_FirstRowChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_FirstRowChanged(QVBoxPlotModelMapper* self, intptr_t slot);
void QVBoxPlotModelMapper_RowCountChanged(QVBoxPlotModelMapper* self);
void QVBoxPlotModelMapper_Connect_RowCountChanged(QVBoxPlotModelMapper* self, intptr_t slot);
libqt_string QVBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QVBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
void QVBoxPlotModelMapper_Delete(QVBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
