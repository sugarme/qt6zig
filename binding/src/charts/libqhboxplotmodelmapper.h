#pragma once
#ifndef QHBOXPLOTMODELMAPPER_H_C_LIB
#define QHBOXPLOTMODELMAPPER_H_C_LIB

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
typedef struct QHBoxPlotModelMapper QHBoxPlotModelMapper;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHBoxPlotModelMapper* QHBoxPlotModelMapper_new();
QHBoxPlotModelMapper* QHBoxPlotModelMapper_new2(QObject* parent);
libqt_string QHBoxPlotModelMapper_Tr(const char* s);
QAbstractItemModel* QHBoxPlotModelMapper_Model(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetModel(QHBoxPlotModelMapper* self, QAbstractItemModel* model);
QBoxPlotSeries* QHBoxPlotModelMapper_Series(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetSeries(QHBoxPlotModelMapper* self, QBoxPlotSeries* series);
int QHBoxPlotModelMapper_FirstBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirstBoxSetRow(QHBoxPlotModelMapper* self, int firstBoxSetRow);
int QHBoxPlotModelMapper_LastBoxSetRow(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetLastBoxSetRow(QHBoxPlotModelMapper* self, int lastBoxSetRow);
int QHBoxPlotModelMapper_FirstColumn(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetFirstColumn(QHBoxPlotModelMapper* self, int firstColumn);
int QHBoxPlotModelMapper_ColumnCount(const QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_SetColumnCount(QHBoxPlotModelMapper* self, int rowCount);
void QHBoxPlotModelMapper_SeriesReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_SeriesReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_ModelReplaced(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_ModelReplaced(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_LastBoxSetRowChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_FirstColumnChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_FirstColumnChanged(QHBoxPlotModelMapper* self, intptr_t slot);
void QHBoxPlotModelMapper_ColumnCountChanged(QHBoxPlotModelMapper* self);
void QHBoxPlotModelMapper_Connect_ColumnCountChanged(QHBoxPlotModelMapper* self, intptr_t slot);
libqt_string QHBoxPlotModelMapper_Tr2(const char* s, const char* c);
libqt_string QHBoxPlotModelMapper_Tr3(const char* s, const char* c, int n);
void QHBoxPlotModelMapper_Delete(QHBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
