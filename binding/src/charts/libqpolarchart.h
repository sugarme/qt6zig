#pragma once
#ifndef QPOLARCHART_H_C_LIB
#define QPOLARCHART_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChart QChart;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QPolarChart QPolarChart;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





QPolarChart* QPolarChart_new();
QPolarChart* QPolarChart_new2(QGraphicsItem* parent);
QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags);
libqt_string QPolarChart_Tr(const char* s);
void QPolarChart_AddAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation);
libqt_list QPolarChart_Axes(const QPolarChart* self);
int QPolarChart_AxisPolarOrientation(QAbstractAxis* axis);
libqt_string QPolarChart_Tr2(const char* s, const char* c);
libqt_string QPolarChart_Tr3(const char* s, const char* c, int n);
libqt_list QPolarChart_Axes1(const QPolarChart* self, int polarOrientation);
libqt_list QPolarChart_Axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series);
void QPolarChart_Delete(QPolarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
