#pragma once
#ifndef QCANDLESTICKSET_H_C_LIB
#define QCANDLESTICKSET_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QCandlestickSet QCandlestickSet;
typedef struct QObject QObject;
typedef struct QPen QPen;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCandlestickSet* QCandlestickSet_new();
QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close);
QCandlestickSet* QCandlestickSet_new3(double timestamp);
QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent);
QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp);
QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent);
libqt_string QCandlestickSet_Tr(const char* s);
void QCandlestickSet_SetTimestamp(QCandlestickSet* self, double timestamp);
double QCandlestickSet_Timestamp(const QCandlestickSet* self);
void QCandlestickSet_SetOpen(QCandlestickSet* self, double open);
double QCandlestickSet_Open(const QCandlestickSet* self);
void QCandlestickSet_SetHigh(QCandlestickSet* self, double high);
double QCandlestickSet_High(const QCandlestickSet* self);
void QCandlestickSet_SetLow(QCandlestickSet* self, double low);
double QCandlestickSet_Low(const QCandlestickSet* self);
void QCandlestickSet_SetClose(QCandlestickSet* self, double close);
double QCandlestickSet_Close(const QCandlestickSet* self);
void QCandlestickSet_SetBrush(QCandlestickSet* self, const QBrush* brush);
QBrush* QCandlestickSet_Brush(const QCandlestickSet* self);
void QCandlestickSet_SetPen(QCandlestickSet* self, const QPen* pen);
QPen* QCandlestickSet_Pen(const QCandlestickSet* self);
void QCandlestickSet_Clicked(QCandlestickSet* self);
void QCandlestickSet_Connect_Clicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Hovered(QCandlestickSet* self, bool status);
void QCandlestickSet_Connect_Hovered(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Pressed(QCandlestickSet* self);
void QCandlestickSet_Connect_Pressed(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_Released(QCandlestickSet* self);
void QCandlestickSet_Connect_Released(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_DoubleClicked(QCandlestickSet* self);
void QCandlestickSet_Connect_DoubleClicked(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_TimestampChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_TimestampChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_OpenChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_OpenChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_HighChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_HighChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_LowChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_LowChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_CloseChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_CloseChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_BrushChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_BrushChanged(QCandlestickSet* self, intptr_t slot);
void QCandlestickSet_PenChanged(QCandlestickSet* self);
void QCandlestickSet_Connect_PenChanged(QCandlestickSet* self, intptr_t slot);
libqt_string QCandlestickSet_Tr2(const char* s, const char* c);
libqt_string QCandlestickSet_Tr3(const char* s, const char* c, int n);
void QCandlestickSet_Delete(QCandlestickSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
