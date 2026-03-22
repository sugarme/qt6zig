#pragma once
#ifndef QVCANDLESTICKMODELMAPPER_H_C_LIB
#define QVCANDLESTICKMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QObject QObject;
typedef struct QVCandlestickModelMapper QVCandlestickModelMapper;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVCandlestickModelMapper* QVCandlestickModelMapper_new();
QVCandlestickModelMapper* QVCandlestickModelMapper_new2(QObject* parent);
libqt_string QVCandlestickModelMapper_Tr(const char* s);
int QVCandlestickModelMapper_Orientation(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetTimestampRow(QVCandlestickModelMapper* self, int timestampRow);
int QVCandlestickModelMapper_TimestampRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetOpenRow(QVCandlestickModelMapper* self, int openRow);
int QVCandlestickModelMapper_OpenRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetHighRow(QVCandlestickModelMapper* self, int highRow);
int QVCandlestickModelMapper_HighRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLowRow(QVCandlestickModelMapper* self, int lowRow);
int QVCandlestickModelMapper_LowRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetCloseRow(QVCandlestickModelMapper* self, int closeRow);
int QVCandlestickModelMapper_CloseRow(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetFirstSetColumn(QVCandlestickModelMapper* self, int firstSetColumn);
int QVCandlestickModelMapper_FirstSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_SetLastSetColumn(QVCandlestickModelMapper* self, int lastSetColumn);
int QVCandlestickModelMapper_LastSetColumn(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_TimestampRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_TimestampRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_OpenRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_OpenRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_HighRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_HighRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_LowRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_LowRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_CloseRowChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_CloseRowChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_FirstSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_FirstSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
void QVCandlestickModelMapper_LastSetColumnChanged(QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Connect_LastSetColumnChanged(QVCandlestickModelMapper* self, intptr_t slot);
libqt_string QVCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QVCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
void QVCandlestickModelMapper_OnOrientation(const QVCandlestickModelMapper* self, intptr_t slot);
int QVCandlestickModelMapper_QBaseOrientation(const QVCandlestickModelMapper* self);
void QVCandlestickModelMapper_Delete(QVCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
