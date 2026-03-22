#pragma once
#ifndef QLINESERIES_H_C_LIB
#define QLINESERIES_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLineSeries QLineSeries;
typedef struct QObject QObject;
typedef struct QXYSeries QXYSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLineSeries* QLineSeries_new();
QLineSeries* QLineSeries_new2(QObject* parent);
libqt_string QLineSeries_Tr(const char* s);
int QLineSeries_Type(const QLineSeries* self);
libqt_string QLineSeries_Tr2(const char* s, const char* c);
libqt_string QLineSeries_Tr3(const char* s, const char* c, int n);
void QLineSeries_OnType(const QLineSeries* self, intptr_t slot);
int QLineSeries_QBaseType(const QLineSeries* self);
void QLineSeries_Delete(QLineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
