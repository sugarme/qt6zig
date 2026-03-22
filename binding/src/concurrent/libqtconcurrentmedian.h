#pragma once
#ifndef QTCONCURRENTMEDIAN_H_C_LIB
#define QTCONCURRENTMEDIAN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtConcurrent__Median)
typedef QtConcurrent::Median QtConcurrent__Median;
#endif
#else
typedef struct QtConcurrent__Median QtConcurrent__Median;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QtConcurrent__Median* QtConcurrent__Median_new(const QtConcurrent__Median* other);
QtConcurrent__Median* QtConcurrent__Median_new2(QtConcurrent__Median* other);
QtConcurrent__Median* QtConcurrent__Median_new3();
void QtConcurrent__Median_CopyAssign(QtConcurrent__Median* self, QtConcurrent__Median* other);
void QtConcurrent__Median_MoveAssign(QtConcurrent__Median* self, QtConcurrent__Median* other);
void QtConcurrent__Median_Reset(QtConcurrent__Median* self);
void QtConcurrent__Median_AddValue(QtConcurrent__Median* self, double value);
bool QtConcurrent__Median_IsMedianValid(const QtConcurrent__Median* self);
double QtConcurrent__Median_Median(QtConcurrent__Median* self);
void QtConcurrent__Median_Delete(QtConcurrent__Median* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
