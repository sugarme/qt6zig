#pragma once
#ifndef QLOGVALUEAXIS_H_C_LIB
#define QLOGVALUEAXIS_H_C_LIB

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
typedef struct QLogValueAxis QLogValueAxis;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLogValueAxis* QLogValueAxis_new();
QLogValueAxis* QLogValueAxis_new2(QObject* parent);
libqt_string QLogValueAxis_Tr(const char* s);
int QLogValueAxis_Type(const QLogValueAxis* self);
void QLogValueAxis_SetMin(QLogValueAxis* self, double min);
double QLogValueAxis_Min(const QLogValueAxis* self);
void QLogValueAxis_SetMax(QLogValueAxis* self, double max);
double QLogValueAxis_Max(const QLogValueAxis* self);
void QLogValueAxis_SetRange(QLogValueAxis* self, double min, double max);
void QLogValueAxis_SetLabelFormat(QLogValueAxis* self, const libqt_string format);
libqt_string QLogValueAxis_LabelFormat(const QLogValueAxis* self);
void QLogValueAxis_SetBase(QLogValueAxis* self, double base);
double QLogValueAxis_Base(const QLogValueAxis* self);
int QLogValueAxis_TickCount(const QLogValueAxis* self);
void QLogValueAxis_SetMinorTickCount(QLogValueAxis* self, int minorTickCount);
int QLogValueAxis_MinorTickCount(const QLogValueAxis* self);
void QLogValueAxis_MinChanged(QLogValueAxis* self, double min);
void QLogValueAxis_Connect_MinChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_MaxChanged(QLogValueAxis* self, double max);
void QLogValueAxis_Connect_MaxChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_RangeChanged(QLogValueAxis* self, double min, double max);
void QLogValueAxis_Connect_RangeChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_LabelFormatChanged(QLogValueAxis* self, const libqt_string format);
void QLogValueAxis_Connect_LabelFormatChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_BaseChanged(QLogValueAxis* self, double base);
void QLogValueAxis_Connect_BaseChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_TickCountChanged(QLogValueAxis* self, int tickCount);
void QLogValueAxis_Connect_TickCountChanged(QLogValueAxis* self, intptr_t slot);
void QLogValueAxis_MinorTickCountChanged(QLogValueAxis* self, int minorTickCount);
void QLogValueAxis_Connect_MinorTickCountChanged(QLogValueAxis* self, intptr_t slot);
libqt_string QLogValueAxis_Tr2(const char* s, const char* c);
libqt_string QLogValueAxis_Tr3(const char* s, const char* c, int n);
void QLogValueAxis_OnType(const QLogValueAxis* self, intptr_t slot);
int QLogValueAxis_QBaseType(const QLogValueAxis* self);
void QLogValueAxis_Delete(QLogValueAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
