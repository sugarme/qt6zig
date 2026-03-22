#pragma once
#ifndef QCANDLESTICKMODELMAPPER_H_C_LIB
#define QCANDLESTICKMODELMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QCandlestickModelMapper QCandlestickModelMapper;
typedef struct QCandlestickSeries QCandlestickSeries;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCandlestickModelMapper* QCandlestickModelMapper_new();
QCandlestickModelMapper* QCandlestickModelMapper_new2(QObject* parent);
libqt_string QCandlestickModelMapper_Tr(const char* s);
void QCandlestickModelMapper_SetModel(QCandlestickModelMapper* self, QAbstractItemModel* model);
QAbstractItemModel* QCandlestickModelMapper_Model(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetSeries(QCandlestickModelMapper* self, QCandlestickSeries* series);
QCandlestickSeries* QCandlestickModelMapper_Series(const QCandlestickModelMapper* self);
int QCandlestickModelMapper_Orientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_ModelReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_ModelReplaced(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_SeriesReplaced(QCandlestickModelMapper* self);
void QCandlestickModelMapper_Connect_SeriesReplaced(QCandlestickModelMapper* self, intptr_t slot);
libqt_string QCandlestickModelMapper_Tr2(const char* s, const char* c);
libqt_string QCandlestickModelMapper_Tr3(const char* s, const char* c, int n);
void QCandlestickModelMapper_OnOrientation(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseOrientation(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetTimestamp(QCandlestickModelMapper* self, int timestamp);
void QCandlestickModelMapper_OnSetTimestamp(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetTimestamp(QCandlestickModelMapper* self, int timestamp);
int QCandlestickModelMapper_Timestamp(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnTimestamp(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseTimestamp(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetOpen(QCandlestickModelMapper* self, int open);
void QCandlestickModelMapper_OnSetOpen(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetOpen(QCandlestickModelMapper* self, int open);
int QCandlestickModelMapper_Open(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnOpen(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseOpen(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetHigh(QCandlestickModelMapper* self, int high);
void QCandlestickModelMapper_OnSetHigh(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetHigh(QCandlestickModelMapper* self, int high);
int QCandlestickModelMapper_High(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnHigh(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseHigh(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLow(QCandlestickModelMapper* self, int low);
void QCandlestickModelMapper_OnSetLow(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetLow(QCandlestickModelMapper* self, int low);
int QCandlestickModelMapper_Low(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnLow(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseLow(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetClose(QCandlestickModelMapper* self, int close);
void QCandlestickModelMapper_OnSetClose(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetClose(QCandlestickModelMapper* self, int close);
int QCandlestickModelMapper_Close(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnClose(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseClose(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
void QCandlestickModelMapper_OnSetFirstSetSection(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetFirstSetSection(QCandlestickModelMapper* self, int firstSetSection);
int QCandlestickModelMapper_FirstSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnFirstSetSection(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseFirstSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_SetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
void QCandlestickModelMapper_OnSetLastSetSection(QCandlestickModelMapper* self, intptr_t slot);
void QCandlestickModelMapper_QBaseSetLastSetSection(QCandlestickModelMapper* self, int lastSetSection);
int QCandlestickModelMapper_LastSetSection(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnLastSetSection(const QCandlestickModelMapper* self, intptr_t slot);
int QCandlestickModelMapper_QBaseLastSetSection(const QCandlestickModelMapper* self);
QCandlestickModelMapperPrivate* QCandlestickModelMapper_DFunc(QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnDFunc(QCandlestickModelMapper* self, intptr_t slot);
QCandlestickModelMapperPrivate* QCandlestickModelMapper_QBaseDFunc(QCandlestickModelMapper* self);
const QCandlestickModelMapperPrivate* QCandlestickModelMapper_DFunc2(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_OnDFunc2(const QCandlestickModelMapper* self, intptr_t slot);
const QCandlestickModelMapperPrivate* QCandlestickModelMapper_QBaseDFunc2(const QCandlestickModelMapper* self);
void QCandlestickModelMapper_Delete(QCandlestickModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
