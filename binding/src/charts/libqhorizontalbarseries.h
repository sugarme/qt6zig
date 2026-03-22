#pragma once
#ifndef QHORIZONTALBARSERIES_H_C_LIB
#define QHORIZONTALBARSERIES_H_C_LIB

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
typedef struct QHorizontalBarSeries QHorizontalBarSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHorizontalBarSeries* QHorizontalBarSeries_new();
QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent);
libqt_string QHorizontalBarSeries_Tr(const char* s);
int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self);
libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c);
libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n);
void QHorizontalBarSeries_OnType(const QHorizontalBarSeries* self, intptr_t slot);
int QHorizontalBarSeries_QBaseType(const QHorizontalBarSeries* self);
void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
