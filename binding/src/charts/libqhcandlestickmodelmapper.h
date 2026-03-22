#pragma once
#ifndef QHCANDLESTICKMODELMAPPER_H_C_LIB
#define QHCANDLESTICKMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QHCandlestickModelMapper QHCandlestickModelMapper;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHCandlestickModelMapper* QHCandlestickModelMapper_new();
QHCandlestickModelMapper* QHCandlestickModelMapper_new2(QObject* parent);
libqt_string QHCandlestickModelMapper_Tr(const char* s);
int QHCandlestickModelMapper_Orientation(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetTimestampColumn(QHCandlestickModelMapper* self, int timestampColumn);
int QHCandlestickModelMapper_TimestampColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetOpenColumn(QHCandlestickModelMapper* self, int openColumn);
int QHCandlestickModelMapper_OpenColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetHighColumn(QHCandlestickModelMapper* self, int highColumn);
int QHCandlestickModelMapper_HighColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLowColumn(QHCandlestickModelMapper* self, int lowColumn);
int QHCandlestickModelMapper_LowColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetCloseColumn(QHCandlestickModelMapper* self, int closeColumn);
int QHCandlestickModelMapper_CloseColumn(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetFirstSetRow(QHCandlestickModelMapper* self, int firstSetRow);
int QHCandlestickModelMapper_FirstSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_SetLastSetRow(QHCandlestickModelMapper* self, int lastSetRow);
int QHCandlestickModelMapper_LastSetRow(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_TimestampColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_TimestampColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_OpenColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_OpenColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_HighColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_HighColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_LowColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_LowColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_CloseColumnChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_CloseColumnChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_FirstSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_FirstSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
void QHCandlestickModelMapper_LastSetRowChanged(QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Connect_LastSetRowChanged(QHCandlestickModelMapper* self, intptr_t slot);
libqt_string QHCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QHCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
void QHCandlestickModelMapper_OnOrientation(const QHCandlestickModelMapper* self, intptr_t slot);
int QHCandlestickModelMapper_QBaseOrientation(const QHCandlestickModelMapper* self);
void QHCandlestickModelMapper_Delete(QHCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
