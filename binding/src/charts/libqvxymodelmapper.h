#pragma once
#ifndef QVXYMODELMAPPER_H_C_LIB
#define QVXYMODELMAPPER_H_C_LIB

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
typedef struct QObject QObject;
typedef struct QVXYModelMapper QVXYModelMapper;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVXYModelMapper* QVXYModelMapper_new();
QVXYModelMapper* QVXYModelMapper_new2(QObject* parent);
libqt_string QVXYModelMapper_Tr(const char* s);
QAbstractItemModel* QVXYModelMapper_Model(const QVXYModelMapper* self);
void QVXYModelMapper_SetModel(QVXYModelMapper* self, QAbstractItemModel* model);
QXYSeries* QVXYModelMapper_Series(const QVXYModelMapper* self);
void QVXYModelMapper_SetSeries(QVXYModelMapper* self, QXYSeries* series);
int QVXYModelMapper_XColumn(const QVXYModelMapper* self);
void QVXYModelMapper_SetXColumn(QVXYModelMapper* self, int xColumn);
int QVXYModelMapper_YColumn(const QVXYModelMapper* self);
void QVXYModelMapper_SetYColumn(QVXYModelMapper* self, int yColumn);
int QVXYModelMapper_FirstRow(const QVXYModelMapper* self);
void QVXYModelMapper_SetFirstRow(QVXYModelMapper* self, int firstRow);
int QVXYModelMapper_RowCount(const QVXYModelMapper* self);
void QVXYModelMapper_SetRowCount(QVXYModelMapper* self, int rowCount);
void QVXYModelMapper_SeriesReplaced(QVXYModelMapper* self);
void QVXYModelMapper_Connect_SeriesReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_ModelReplaced(QVXYModelMapper* self);
void QVXYModelMapper_Connect_ModelReplaced(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_XColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_XColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_YColumnChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_YColumnChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_FirstRowChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_FirstRowChanged(QVXYModelMapper* self, intptr_t slot);
void QVXYModelMapper_RowCountChanged(QVXYModelMapper* self);
void QVXYModelMapper_Connect_RowCountChanged(QVXYModelMapper* self, intptr_t slot);
libqt_string QVXYModelMapper_Tr2(const char* s, const char* c);
libqt_string QVXYModelMapper_Tr3(const char* s, const char* c, int n);
void QVXYModelMapper_Delete(QVXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
