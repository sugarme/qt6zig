#pragma once
#ifndef QDATETIMEAXIS_H_C_LIB
#define QDATETIMEAXIS_H_C_LIB

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
typedef struct QDateTime QDateTime;
typedef struct QDateTimeAxis QDateTimeAxis;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDateTimeAxis* QDateTimeAxis_new();
QDateTimeAxis* QDateTimeAxis_new2(QObject* parent);
libqt_string QDateTimeAxis_Tr(const char* s);
int QDateTimeAxis_Type(const QDateTimeAxis* self);
void QDateTimeAxis_SetMin(QDateTimeAxis* self, QDateTime* min);
QDateTime* QDateTimeAxis_Min(const QDateTimeAxis* self);
void QDateTimeAxis_SetMax(QDateTimeAxis* self, QDateTime* max);
QDateTime* QDateTimeAxis_Max(const QDateTimeAxis* self);
void QDateTimeAxis_SetRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_SetFormat(QDateTimeAxis* self, libqt_string format);
libqt_string QDateTimeAxis_Format(const QDateTimeAxis* self);
void QDateTimeAxis_SetTickCount(QDateTimeAxis* self, int count);
int QDateTimeAxis_TickCount(const QDateTimeAxis* self);
void QDateTimeAxis_MinChanged(QDateTimeAxis* self, QDateTime* min);
void QDateTimeAxis_Connect_MinChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_MaxChanged(QDateTimeAxis* self, QDateTime* max);
void QDateTimeAxis_Connect_MaxChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_RangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max);
void QDateTimeAxis_Connect_RangeChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_FormatChanged(QDateTimeAxis* self, libqt_string format);
void QDateTimeAxis_Connect_FormatChanged(QDateTimeAxis* self, intptr_t slot);
void QDateTimeAxis_TickCountChanged(QDateTimeAxis* self, int tick);
void QDateTimeAxis_Connect_TickCountChanged(QDateTimeAxis* self, intptr_t slot);
libqt_string QDateTimeAxis_Tr2(const char* s, const char* c);
libqt_string QDateTimeAxis_Tr3(const char* s, const char* c, int n);
void QDateTimeAxis_OnType(const QDateTimeAxis* self, intptr_t slot);
int QDateTimeAxis_QBaseType(const QDateTimeAxis* self);
void QDateTimeAxis_Delete(QDateTimeAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
