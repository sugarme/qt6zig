#pragma once
#ifndef QSPLINESERIES_H_C_LIB
#define QSPLINESERIES_H_C_LIB

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
typedef struct QSplineSeries QSplineSeries;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSplineSeries* QSplineSeries_new();
QSplineSeries* QSplineSeries_new2(QObject* parent);
libqt_string QSplineSeries_Tr(const char* s);
int QSplineSeries_Type(const QSplineSeries* self);
libqt_string QSplineSeries_Tr2(const char* s, const char* c);
libqt_string QSplineSeries_Tr3(const char* s, const char* c, int n);
void QSplineSeries_OnType(const QSplineSeries* self, intptr_t slot);
int QSplineSeries_QBaseType(const QSplineSeries* self);
void QSplineSeries_Delete(QSplineSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
