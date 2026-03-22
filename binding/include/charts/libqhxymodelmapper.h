#pragma once
#ifndef QHXYMODELMAPPER_H_C_LIB
#define QHXYMODELMAPPER_H_C_LIB

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
typedef struct QHXYModelMapper QHXYModelMapper;
typedef struct QObject QObject;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHXYModelMapper* QHXYModelMapper_new();
QHXYModelMapper* QHXYModelMapper_new2(QObject* parent);
libqt_string QHXYModelMapper_Tr(const char* s);
QAbstractItemModel* QHXYModelMapper_Model(const QHXYModelMapper* self);
void QHXYModelMapper_SetModel(QHXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QHXYModelMapper_Series(const QHXYModelMapper* self);
void QHXYModelMapper_SetSeries(QHXYModelMapper* self, QXYSeries* series);
int QHXYModelMapper_XRow(const QHXYModelMapper* self);
void QHXYModelMapper_SetXRow(QHXYModelMapper* self, int xRow);
int QHXYModelMapper_YRow(const QHXYModelMapper* self);
void QHXYModelMapper_SetYRow(QHXYModelMapper* self, int yRow);
int QHXYModelMapper_FirstColumn(const QHXYModelMapper* self);
void QHXYModelMapper_SetFirstColumn(QHXYModelMapper* self, int firstColumn);
int QHXYModelMapper_ColumnCount(const QHXYModelMapper* self);
void QHXYModelMapper_SetColumnCount(QHXYModelMapper* self, int columnCount);
void QHXYModelMapper_SeriesReplaced(QHXYModelMapper* self);
void QHXYModelMapper_Connect_SeriesReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_ModelReplaced(QHXYModelMapper* self);
void QHXYModelMapper_Connect_ModelReplaced(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_XRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_XRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_YRowChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_YRowChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_FirstColumnChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_FirstColumnChanged(QHXYModelMapper* self, intptr_t slot);
void QHXYModelMapper_ColumnCountChanged(QHXYModelMapper* self);
void QHXYModelMapper_Connect_ColumnCountChanged(QHXYModelMapper* self, intptr_t slot);
libqt_string QHXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QHXYModelMapper_Tr3(const char* s, const char* c, int n);
void QHXYModelMapper_Delete(QHXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
