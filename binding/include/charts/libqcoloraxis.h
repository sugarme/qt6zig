#pragma once
#ifndef QCOLORAXIS_H_C_LIB
#define QCOLORAXIS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QColorAxis QColorAxis;
typedef struct QLinearGradient QLinearGradient;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QColorAxis* QColorAxis_new();
QColorAxis* QColorAxis_new2(QObject* parent);
libqt_string QColorAxis_Tr(const char* s);
int QColorAxis_Type(const QColorAxis* self);
void QColorAxis_SetMin(QColorAxis* self, double min);
double QColorAxis_Min(const QColorAxis* self);
void QColorAxis_SetMax(QColorAxis* self, double max);
double QColorAxis_Max(const QColorAxis* self);
void QColorAxis_SetRange(QColorAxis* self, double min, double max);
void QColorAxis_SetTickCount(QColorAxis* self, int count);
int QColorAxis_TickCount(const QColorAxis* self);
void QColorAxis_SetSize(QColorAxis* self, const double size);
double QColorAxis_Size(const QColorAxis* self);
void QColorAxis_SetGradient(QColorAxis* self, const QLinearGradient* gradient);
QLinearGradient* QColorAxis_Gradient(const QColorAxis* self);
void QColorAxis_SetAutoRange(QColorAxis* self, bool autoRange);
bool QColorAxis_AutoRange(const QColorAxis* self);
void QColorAxis_MinChanged(QColorAxis* self, double min);
void QColorAxis_Connect_MinChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_MaxChanged(QColorAxis* self, double max);
void QColorAxis_Connect_MaxChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_RangeChanged(QColorAxis* self, double min, double max);
void QColorAxis_Connect_RangeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_TickCountChanged(QColorAxis* self, int tickCount);
void QColorAxis_Connect_TickCountChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_GradientChanged(QColorAxis* self, const QLinearGradient* gradient);
void QColorAxis_Connect_GradientChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_SizeChanged(QColorAxis* self, const double size);
void QColorAxis_Connect_SizeChanged(QColorAxis* self, intptr_t slot);
void QColorAxis_AutoRangeChanged(QColorAxis* self, bool autoRange);
void QColorAxis_Connect_AutoRangeChanged(QColorAxis* self, intptr_t slot);
libqt_string QColorAxis_Tr2(const char* s, const char* c);
libqt_string QColorAxis_Tr3(const char* s, const char* c, int n);
void QColorAxis_OnType(const QColorAxis* self, intptr_t slot);
int QColorAxis_QBaseType(const QColorAxis* self);
void QColorAxis_Delete(QColorAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
