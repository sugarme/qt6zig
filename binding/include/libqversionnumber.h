#pragma once
#ifndef QVERSIONNUMBER_H_C_LIB
#define QVERSIONNUMBER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QVersionNumber QVersionNumber;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QVersionNumber* QVersionNumber_new();
QVersionNumber* QVersionNumber_new2(libqt_list args);
QVersionNumber* QVersionNumber_new3(int maj);
QVersionNumber* QVersionNumber_new4(int maj, int min);
QVersionNumber* QVersionNumber_new5(int maj, int min, int mic);
bool QVersionNumber_IsNull(const QVersionNumber* self);
bool QVersionNumber_IsNormalized(const QVersionNumber* self);
int QVersionNumber_MajorVersion(const QVersionNumber* self);
int QVersionNumber_MinorVersion(const QVersionNumber* self);
int QVersionNumber_MicroVersion(const QVersionNumber* self);
QVersionNumber* QVersionNumber_Normalized(const QVersionNumber* self);
libqt_list QVersionNumber_Segments(const QVersionNumber* self);
int QVersionNumber_SegmentAt(const QVersionNumber* self, ptrdiff_t index);
ptrdiff_t QVersionNumber_SegmentCount(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_Begin(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_End(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_Cbegin(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_Cend(const QVersionNumber* self);
std::reverse_iterator<QVersionNumber::It> QVersionNumber_Rbegin(const QVersionNumber* self);
std::reverse_iterator<QVersionNumber::It> QVersionNumber_Rend(const QVersionNumber* self);
std::reverse_iterator<QVersionNumber::It> QVersionNumber_Crbegin(const QVersionNumber* self);
std::reverse_iterator<QVersionNumber::It> QVersionNumber_Crend(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_ConstBegin(const QVersionNumber* self);
QVersionNumber::It QVersionNumber_ConstEnd(const QVersionNumber* self);
bool QVersionNumber_IsPrefixOf(const QVersionNumber* self, const QVersionNumber* other);
int QVersionNumber_Compare(const QVersionNumber* v1, const QVersionNumber* v2);
QVersionNumber* QVersionNumber_CommonPrefix(const QVersionNumber* v1, const QVersionNumber* v2);
libqt_string QVersionNumber_ToString(const QVersionNumber* self);
QVersionNumber* QVersionNumber_FromString(libqt_string stringVal);
QVersionNumber* QVersionNumber_FromString2(libqt_string stringVal, ptrdiff_t* suffixIndex);
void QVersionNumber_Delete(QVersionNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
