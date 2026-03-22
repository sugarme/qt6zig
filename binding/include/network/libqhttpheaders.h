#pragma once
#ifndef QHTTPHEADERS_H_C_LIB
#define QHTTPHEADERS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QHttpHeaders* QHttpHeaders_new();
QHttpHeaders* QHttpHeaders_new2(const QHttpHeaders* other);
void QHttpHeaders_OperatorAssign(QHttpHeaders* self, const QHttpHeaders* other);
void QHttpHeaders_Swap(QHttpHeaders* self, QHttpHeaders* other);
bool QHttpHeaders_Contains2(const QHttpHeaders* self, int name);
void QHttpHeaders_Clear(QHttpHeaders* self);
void QHttpHeaders_RemoveAll2(QHttpHeaders* self, int name);
void QHttpHeaders_RemoveAt(QHttpHeaders* self, ptrdiff_t i);
QByteArrayView* QHttpHeaders_Value2(const QHttpHeaders* self, int name);
libqt_list QHttpHeaders_Values2(const QHttpHeaders* self, int name);
QByteArrayView* QHttpHeaders_ValueAt(const QHttpHeaders* self, ptrdiff_t i);
libqt_string QHttpHeaders_CombinedValue2(const QHttpHeaders* self, int name);
ptrdiff_t QHttpHeaders_Size(const QHttpHeaders* self);
void QHttpHeaders_Reserve(QHttpHeaders* self, ptrdiff_t size);
bool QHttpHeaders_IsEmpty(const QHttpHeaders* self);
QByteArrayView* QHttpHeaders_WellKnownHeaderName(int name);
QHttpHeaders* QHttpHeaders_FromListOfPairs(const libqt_list headers);
QHttpHeaders* QHttpHeaders_FromMultiMap(const libqt_map headers);
QHttpHeaders* QHttpHeaders_FromMultiHash(const libqt_map headers);
libqt_list QHttpHeaders_ToListOfPairs(const QHttpHeaders* self);
libqt_map QHttpHeaders_ToMultiMap(const QHttpHeaders* self);
libqt_map QHttpHeaders_ToMultiHash(const QHttpHeaders* self);
QByteArrayView* QHttpHeaders_Value23(const QHttpHeaders* self, int name, QByteArrayView* defaultValue);
void QHttpHeaders_Delete(QHttpHeaders* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
