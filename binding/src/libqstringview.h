#pragma once
#ifndef QSTRINGVIEW_H_C_LIB
#define QSTRINGVIEW_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStringView* QStringView_new(const QStringView* other);
QStringView* QStringView_new2(QStringView* other);
QStringView* QStringView_new3();
QStringView* QStringView_new4(const QStringView* param1);
void QStringView_CopyAssign(QStringView* self, QStringView* other);
void QStringView_MoveAssign(QStringView* self, QStringView* other);
libqt_string QStringView_ToString(const QStringView* self);
ptrdiff_t QStringView_Size(const QStringView* self);
It::value_type** QStringView_Data(const QStringView* self);
It::value_type** QStringView_ConstData(const QStringView* self);
QChar* QStringView_OperatorSubscript(const QStringView* self, ptrdiff_t n);
libqt_string QStringView_ToLatin1(const QStringView* self);
libqt_string QStringView_ToUtf8(const QStringView* self);
libqt_string QStringView_ToLocal8Bit(const QStringView* self);
libqt_list QStringView_ToUcs4(const QStringView* self);
QChar* QStringView_At(const QStringView* self, ptrdiff_t n);
QStringView* QStringView_Mid(const QStringView* self, ptrdiff_t pos);
QStringView* QStringView_Left(const QStringView* self, ptrdiff_t n);
QStringView* QStringView_Right(const QStringView* self, ptrdiff_t n);
QStringView* QStringView_First(const QStringView* self, ptrdiff_t n);
QStringView* QStringView_Last(const QStringView* self, ptrdiff_t n);
QStringView* QStringView_Sliced(const QStringView* self, ptrdiff_t pos);
QStringView* QStringView_Sliced2(const QStringView* self, ptrdiff_t pos, ptrdiff_t n);
QStringView* QStringView_Chopped(const QStringView* self, ptrdiff_t n);
void QStringView_Truncate(QStringView* self, ptrdiff_t n);
void QStringView_Chop(QStringView* self, ptrdiff_t n);
QStringView* QStringView_Trimmed(const QStringView* self);
QStringView* QStringView_Slice(QStringView* self, ptrdiff_t pos);
QStringView* QStringView_Slice2(QStringView* self, ptrdiff_t pos, ptrdiff_t n);
int QStringView_Compare(const QStringView* self, QStringView* other);
int QStringView_Compare2(const QStringView* self, QLatin1StringView other);
int QStringView_Compare3(const QStringView* self, QUtf8StringView other);
int QStringView_Compare4(const QStringView* self, QChar* c);
int QStringView_Compare5(const QStringView* self, QChar* c, int cs);
int QStringView_LocaleAwareCompare(const QStringView* self, QStringView* other);
bool QStringView_StartsWith(const QStringView* self, QStringView* s);
bool QStringView_StartsWith2(const QStringView* self, QLatin1StringView s);
bool QStringView_StartsWith3(const QStringView* self, QChar* c);
bool QStringView_StartsWith4(const QStringView* self, QChar* c, int cs);
bool QStringView_EndsWith(const QStringView* self, QStringView* s);
bool QStringView_EndsWith2(const QStringView* self, QLatin1StringView s);
bool QStringView_EndsWith3(const QStringView* self, QChar* c);
bool QStringView_EndsWith4(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_IndexOf(const QStringView* self, QChar* c);
ptrdiff_t QStringView_IndexOf2(const QStringView* self, QStringView* s);
ptrdiff_t QStringView_IndexOf3(const QStringView* self, QLatin1StringView s);
bool QStringView_Contains(const QStringView* self, QChar* c);
bool QStringView_Contains2(const QStringView* self, QStringView* s);
bool QStringView_Contains3(const QStringView* self, QLatin1StringView s);
ptrdiff_t QStringView_Count(const QStringView* self, QChar* c);
ptrdiff_t QStringView_Count2(const QStringView* self, QStringView* s);
ptrdiff_t QStringView_Count3(const QStringView* self, QLatin1StringView s);
ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c);
ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_LastIndexOf3(const QStringView* self, QStringView* s);
ptrdiff_t QStringView_LastIndexOf4(const QStringView* self, QStringView* s, ptrdiff_t from);
ptrdiff_t QStringView_LastIndexOf5(const QStringView* self, QLatin1StringView s);
ptrdiff_t QStringView_LastIndexOf6(const QStringView* self, QLatin1StringView s, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf4(const QStringView* self, const QRegularExpression* re);
ptrdiff_t QStringView_LastIndexOf7(const QStringView* self, const QRegularExpression* re, ptrdiff_t from);
bool QStringView_Contains4(const QStringView* self, const QRegularExpression* re);
ptrdiff_t QStringView_Count4(const QStringView* self, const QRegularExpression* re);
bool QStringView_IsRightToLeft(const QStringView* self);
bool QStringView_IsValidUtf16(const QStringView* self);
bool QStringView_IsUpper(const QStringView* self);
bool QStringView_IsLower(const QStringView* self);
int16_t QStringView_ToShort(const QStringView* self);
uint16_t QStringView_ToUShort(const QStringView* self);
int QStringView_ToInt(const QStringView* self);
unsigned int QStringView_ToUInt(const QStringView* self);
long QStringView_ToLong(const QStringView* self);
unsigned long QStringView_ToULong(const QStringView* self);
long long QStringView_ToLongLong(const QStringView* self);
unsigned long long QStringView_ToULongLong(const QStringView* self);
float QStringView_ToFloat(const QStringView* self);
double QStringView_ToDouble(const QStringView* self);
libqt_list QStringView_Split(const QStringView* self, QStringView* sep);
libqt_list QStringView_Split2(const QStringView* self, QChar* sep);
libqt_list QStringView_Split3(const QStringView* self, const QRegularExpression* sep);
It::value_type** QStringView_Begin(const QStringView* self);
It::value_type** QStringView_End(const QStringView* self);
It::value_type** QStringView_Cbegin(const QStringView* self);
It::value_type** QStringView_Cend(const QStringView* self);
std::reverse_iterator<const QChar *> QStringView_Rbegin(const QStringView* self);
std::reverse_iterator<const QChar *> QStringView_Rend(const QStringView* self);
std::reverse_iterator<const QChar *> QStringView_Crbegin(const QStringView* self);
std::reverse_iterator<const QChar *> QStringView_Crend(const QStringView* self);
bool QStringView_Empty(const QStringView* self);
QChar* QStringView_Front(const QStringView* self);
QChar* QStringView_Back(const QStringView* self);
std::u16string_view QStringView_OperatorbasicStringView(const QStringView* self);
ptrdiff_t QStringView_MaxSize(const QStringView* self);
It::value_type** QStringView_ConstBegin(const QStringView* self);
It::value_type** QStringView_ConstEnd(const QStringView* self);
bool QStringView_IsNull(const QStringView* self);
bool QStringView_IsEmpty(const QStringView* self);
ptrdiff_t QStringView_Length(const QStringView* self);
QChar* QStringView_First2(const QStringView* self);
QChar* QStringView_Last2(const QStringView* self);
ptrdiff_t QStringView_MaxSize2();
QStringView* QStringView_Mid2(const QStringView* self, ptrdiff_t pos, ptrdiff_t n);
int QStringView_Compare22(const QStringView* self, QStringView* other, int cs);
int QStringView_Compare23(const QStringView* self, QLatin1StringView other, int cs);
int QStringView_Compare24(const QStringView* self, QUtf8StringView other, int cs);
bool QStringView_StartsWith22(const QStringView* self, QStringView* s, int cs);
bool QStringView_StartsWith23(const QStringView* self, QLatin1StringView s, int cs);
bool QStringView_EndsWith22(const QStringView* self, QStringView* s, int cs);
bool QStringView_EndsWith23(const QStringView* self, QLatin1StringView s, int cs);
ptrdiff_t QStringView_IndexOf22(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
ptrdiff_t QStringView_IndexOf23(const QStringView* self, QStringView* s, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf33(const QStringView* self, QStringView* s, ptrdiff_t from, int cs);
ptrdiff_t QStringView_IndexOf24(const QStringView* self, QLatin1StringView s, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf34(const QStringView* self, QLatin1StringView s, ptrdiff_t from, int cs);
bool QStringView_Contains22(const QStringView* self, QChar* c, int cs);
bool QStringView_Contains23(const QStringView* self, QStringView* s, int cs);
bool QStringView_Contains24(const QStringView* self, QLatin1StringView s, int cs);
ptrdiff_t QStringView_Count22(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_Count23(const QStringView* self, QStringView* s, int cs);
ptrdiff_t QStringView_Count24(const QStringView* self, QLatin1StringView s, int cs);
ptrdiff_t QStringView_LastIndexOf22(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_LastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
ptrdiff_t QStringView_LastIndexOf23(const QStringView* self, QStringView* s, int cs);
ptrdiff_t QStringView_LastIndexOf33(const QStringView* self, QStringView* s, ptrdiff_t from, int cs);
ptrdiff_t QStringView_LastIndexOf24(const QStringView* self, QLatin1StringView s, int cs);
ptrdiff_t QStringView_LastIndexOf34(const QStringView* self, QLatin1StringView s, ptrdiff_t from, int cs);
ptrdiff_t QStringView_IndexOf25(const QStringView* self, const QRegularExpression* re, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch);
ptrdiff_t QStringView_LastIndexOf35(const QStringView* self, const QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch);
bool QStringView_Contains25(const QStringView* self, const QRegularExpression* re, QRegularExpressionMatch* rmatch);
int16_t QStringView_ToShort1(const QStringView* self, bool* ok);
int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base);
uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok);
uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base);
int QStringView_ToInt1(const QStringView* self, bool* ok);
int QStringView_ToInt2(const QStringView* self, bool* ok, int base);
unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok);
unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base);
long QStringView_ToLong1(const QStringView* self, bool* ok);
long QStringView_ToLong2(const QStringView* self, bool* ok, int base);
unsigned long QStringView_ToULong1(const QStringView* self, bool* ok);
unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base);
long long QStringView_ToLongLong1(const QStringView* self, bool* ok);
long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base);
unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok);
unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base);
float QStringView_ToFloat1(const QStringView* self, bool* ok);
double QStringView_ToDouble1(const QStringView* self, bool* ok);
libqt_list QStringView_Split22(const QStringView* self, QStringView* sep, int behavior);
libqt_list QStringView_Split32(const QStringView* self, QStringView* sep, int behavior, int cs);
libqt_list QStringView_Split23(const QStringView* self, QChar* sep, int behavior);
libqt_list QStringView_Split33(const QStringView* self, QChar* sep, int behavior, int cs);
libqt_list QStringView_Split24(const QStringView* self, const QRegularExpression* sep, int behavior);
void QStringView_Delete(QStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
