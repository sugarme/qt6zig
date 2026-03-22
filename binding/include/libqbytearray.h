#pragma once
#ifndef QBYTEARRAY_H_C_LIB
#define QBYTEARRAY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result)
typedef QByteArray::FromBase64Result QByteArray__FromBase64Result;
#endif
#else
typedef struct QByteArray__FromBase64Result QByteArray__FromBase64Result;
typedef struct QByteArrayView QByteArrayView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QByteArray* QByteArray_new();
QByteArray* QByteArray_new2(const char* param1);
QByteArray* QByteArray_new3(ptrdiff_t size, char c);
QByteArray* QByteArray_new4(ptrdiff_t size, int param2);
QByteArray* QByteArray_new5(QByteArrayView* v);
QByteArray* QByteArray_new6(const libqt_string param1);
QByteArray* QByteArray_new7(const char* param1, ptrdiff_t size);
void QByteArray_OperatorAssign(QByteArray* self, const libqt_string param1);
void QByteArray_OperatorAssign2(QByteArray* self, const char* str);
void QByteArray_Swap(QByteArray* self, libqt_string other);
bool QByteArray_IsEmpty(const QByteArray* self);
void QByteArray_Resize(QByteArray* self, ptrdiff_t size);
void QByteArray_Resize2(QByteArray* self, ptrdiff_t size, char c);
void QByteArray_ResizeForOverwrite(QByteArray* self, ptrdiff_t size);
libqt_string QByteArray_Fill(QByteArray* self, char c);
ptrdiff_t QByteArray_Capacity(const QByteArray* self);
void QByteArray_Reserve(QByteArray* self, ptrdiff_t size);
void QByteArray_Squeeze(QByteArray* self);
const char* QByteArray_OperatorconstCharMultiply(const QByteArray* self);
const void* QByteArray_OperatorconstVoidMultiply(const QByteArray* self);
char* QByteArray_Data(QByteArray* self);
const char* QByteArray_Data2(const QByteArray* self);
const char* QByteArray_ConstData(const QByteArray* self);
void QByteArray_Detach(QByteArray* self);
bool QByteArray_IsDetached(const QByteArray* self);
bool QByteArray_IsSharedWith(const QByteArray* self, const libqt_string other);
void QByteArray_Clear(QByteArray* self);
char QByteArray_At(const QByteArray* self, ptrdiff_t i);
char QByteArray_OperatorSubscript(const QByteArray* self, ptrdiff_t i);
char* QByteArray_OperatorSubscript2(QByteArray* self, ptrdiff_t i);
char QByteArray_Front(const QByteArray* self);
char* QByteArray_Front2(QByteArray* self);
char QByteArray_Back(const QByteArray* self);
char* QByteArray_Back2(QByteArray* self);
ptrdiff_t QByteArray_IndexOf(const QByteArray* self, char c);
ptrdiff_t QByteArray_IndexOf2(const QByteArray* self, QByteArrayView* bv);
ptrdiff_t QByteArray_LastIndexOf(const QByteArray* self, char c);
ptrdiff_t QByteArray_LastIndexOf2(const QByteArray* self, QByteArrayView* bv);
ptrdiff_t QByteArray_LastIndexOf3(const QByteArray* self, QByteArrayView* bv, ptrdiff_t from);
bool QByteArray_Contains(const QByteArray* self, char c);
bool QByteArray_Contains2(const QByteArray* self, QByteArrayView* bv);
ptrdiff_t QByteArray_Count(const QByteArray* self, char c);
ptrdiff_t QByteArray_Count2(const QByteArray* self, QByteArrayView* bv);
int QByteArray_Compare(const QByteArray* self, QByteArrayView* a);
libqt_string QByteArray_Left(const QByteArray* self, ptrdiff_t n);
libqt_string QByteArray_Right(const QByteArray* self, ptrdiff_t n);
libqt_string QByteArray_Mid(const QByteArray* self, ptrdiff_t index);
libqt_string QByteArray_First(const QByteArray* self, ptrdiff_t n);
libqt_string QByteArray_Last(const QByteArray* self, ptrdiff_t n);
libqt_string QByteArray_Sliced(const QByteArray* self, ptrdiff_t pos);
libqt_string QByteArray_Sliced2(const QByteArray* self, ptrdiff_t pos, ptrdiff_t n);
libqt_string QByteArray_Chopped(const QByteArray* self, ptrdiff_t lenVal);
bool QByteArray_StartsWith(const QByteArray* self, QByteArrayView* bv);
bool QByteArray_StartsWith2(const QByteArray* self, char c);
bool QByteArray_EndsWith(const QByteArray* self, char c);
bool QByteArray_EndsWith2(const QByteArray* self, QByteArrayView* bv);
bool QByteArray_IsUpper(const QByteArray* self);
bool QByteArray_IsLower(const QByteArray* self);
bool QByteArray_IsValidUtf8(const QByteArray* self);
void QByteArray_Truncate(QByteArray* self, ptrdiff_t pos);
void QByteArray_Chop(QByteArray* self, ptrdiff_t n);
libqt_string QByteArray_Slice(QByteArray* self, ptrdiff_t pos);
libqt_string QByteArray_Slice2(QByteArray* self, ptrdiff_t pos, ptrdiff_t n);
libqt_string QByteArray_ToLower(const QByteArray* self);
libqt_string QByteArray_ToUpper(const QByteArray* self);
libqt_string QByteArray_Trimmed(const QByteArray* self);
libqt_string QByteArray_Simplified(const QByteArray* self);
libqt_string QByteArray_LeftJustified(const QByteArray* self, ptrdiff_t width);
libqt_string QByteArray_RightJustified(const QByteArray* self, ptrdiff_t width);
libqt_string QByteArray_Prepend(QByteArray* self, char c);
libqt_string QByteArray_Prepend2(QByteArray* self, ptrdiff_t count, char c);
libqt_string QByteArray_Prepend3(QByteArray* self, const char* s);
libqt_string QByteArray_Prepend4(QByteArray* self, const char* s, ptrdiff_t lenVal);
libqt_string QByteArray_Prepend5(QByteArray* self, const libqt_string a);
libqt_string QByteArray_Prepend6(QByteArray* self, QByteArrayView* a);
libqt_string QByteArray_Append(QByteArray* self, char c);
libqt_string QByteArray_Append2(QByteArray* self, ptrdiff_t count, char c);
libqt_string QByteArray_Append3(QByteArray* self, const char* s);
libqt_string QByteArray_Append4(QByteArray* self, const char* s, ptrdiff_t lenVal);
libqt_string QByteArray_Append5(QByteArray* self, const libqt_string a);
libqt_string QByteArray_Append6(QByteArray* self, QByteArrayView* a);
libqt_string QByteArray_Assign(QByteArray* self, QByteArrayView* v);
libqt_string QByteArray_Assign2(QByteArray* self, ptrdiff_t n, char c);
libqt_string QByteArray_Insert(QByteArray* self, ptrdiff_t i, QByteArrayView* data);
libqt_string QByteArray_Insert2(QByteArray* self, ptrdiff_t i, const char* s);
libqt_string QByteArray_Insert3(QByteArray* self, ptrdiff_t i, const libqt_string data);
libqt_string QByteArray_Insert4(QByteArray* self, ptrdiff_t i, ptrdiff_t count, char c);
libqt_string QByteArray_Insert5(QByteArray* self, ptrdiff_t i, char c);
libqt_string QByteArray_Insert6(QByteArray* self, ptrdiff_t i, const char* s, ptrdiff_t lenVal);
libqt_string QByteArray_Remove(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal);
libqt_string QByteArray_RemoveAt(QByteArray* self, ptrdiff_t pos);
libqt_string QByteArray_RemoveFirst(QByteArray* self);
libqt_string QByteArray_RemoveLast(QByteArray* self);
libqt_string QByteArray_Replace(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal, const char* s, ptrdiff_t alen);
libqt_string QByteArray_Replace2(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal, QByteArrayView* s);
libqt_string QByteArray_Replace3(QByteArray* self, char before, QByteArrayView* after);
libqt_string QByteArray_Replace4(QByteArray* self, const char* before, ptrdiff_t bsize, const char* after, ptrdiff_t asize);
libqt_string QByteArray_Replace5(QByteArray* self, QByteArrayView* before, QByteArrayView* after);
libqt_string QByteArray_Replace6(QByteArray* self, char before, char after);
libqt_string QByteArray_OperatorPlusAssign(QByteArray* self, char c);
libqt_string QByteArray_OperatorPlusAssign2(QByteArray* self, const char* s);
libqt_string QByteArray_OperatorPlusAssign3(QByteArray* self, const libqt_string a);
libqt_string QByteArray_OperatorPlusAssign4(QByteArray* self, QByteArrayView* a);
libqt_list QByteArray_Split(const QByteArray* self, char sep);
libqt_string QByteArray_Repeated(const QByteArray* self, ptrdiff_t times);
int16_t QByteArray_ToShort(const QByteArray* self);
uint16_t QByteArray_ToUShort(const QByteArray* self);
int QByteArray_ToInt(const QByteArray* self);
unsigned int QByteArray_ToUInt(const QByteArray* self);
long QByteArray_ToLong(const QByteArray* self);
unsigned long QByteArray_ToULong(const QByteArray* self);
long long QByteArray_ToLongLong(const QByteArray* self);
unsigned long long QByteArray_ToULongLong(const QByteArray* self);
float QByteArray_ToFloat(const QByteArray* self);
double QByteArray_ToDouble(const QByteArray* self);
libqt_string QByteArray_ToBase64(const QByteArray* self);
libqt_string QByteArray_ToHex(const QByteArray* self);
libqt_string QByteArray_ToPercentEncoding(const QByteArray* self);
libqt_string QByteArray_PercentDecoded(const QByteArray* self);
libqt_string QByteArray_SetNum(QByteArray* self, int16_t param1);
libqt_string QByteArray_SetNum2(QByteArray* self, uint16_t param1);
libqt_string QByteArray_SetNum3(QByteArray* self, int param1);
libqt_string QByteArray_SetNum4(QByteArray* self, unsigned int param1);
libqt_string QByteArray_SetNum5(QByteArray* self, long param1);
libqt_string QByteArray_SetNum6(QByteArray* self, unsigned long param1);
libqt_string QByteArray_SetNum7(QByteArray* self, long long param1);
libqt_string QByteArray_SetNum8(QByteArray* self, unsigned long long param1);
libqt_string QByteArray_SetNum9(QByteArray* self, float param1);
libqt_string QByteArray_SetNum10(QByteArray* self, double param1);
libqt_string QByteArray_SetRawData(QByteArray* self, const char* a, ptrdiff_t n);
libqt_string QByteArray_Number(int param1);
libqt_string QByteArray_Number2(unsigned int param1);
libqt_string QByteArray_Number3(long param1);
libqt_string QByteArray_Number4(unsigned long param1);
libqt_string QByteArray_Number5(long long param1);
libqt_string QByteArray_Number6(unsigned long long param1);
libqt_string QByteArray_Number7(double param1);
libqt_string QByteArray_FromRawData(const char* data, ptrdiff_t size);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(const libqt_string base64);
libqt_string QByteArray_FromBase64(const libqt_string base64);
libqt_string QByteArray_FromHex(const libqt_string hexEncoded);
libqt_string QByteArray_FromPercentEncoding(const libqt_string pctEncoded);
char** QByteArray_Begin(QByteArray* self);
const char** QByteArray_Begin2(const QByteArray* self);
const char** QByteArray_Cbegin(const QByteArray* self);
const char** QByteArray_ConstBegin(const QByteArray* self);
char** QByteArray_End(QByteArray* self);
const char** QByteArray_End2(const QByteArray* self);
const char** QByteArray_Cend(const QByteArray* self);
const char** QByteArray_ConstEnd(const QByteArray* self);
void QByteArray_PushBack(QByteArray* self, char c);
void QByteArray_PushBack2(QByteArray* self, const char* s);
void QByteArray_PushBack3(QByteArray* self, const libqt_string a);
void QByteArray_PushBack4(QByteArray* self, QByteArrayView* a);
void QByteArray_PushFront(QByteArray* self, char c);
void QByteArray_PushFront2(QByteArray* self, const char* c);
void QByteArray_PushFront3(QByteArray* self, const libqt_string a);
void QByteArray_PushFront4(QByteArray* self, QByteArrayView* a);
void QByteArray_ShrinkToFit(QByteArray* self);
char** QByteArray_Erase(QByteArray* self, const char** first, const char** last);
char** QByteArray_Erase2(QByteArray* self, const char** it);
ptrdiff_t QByteArray_MaxSize(const QByteArray* self);
ptrdiff_t QByteArray_MaxSize2();
ptrdiff_t QByteArray_Size(const QByteArray* self);
ptrdiff_t QByteArray_Count3(const QByteArray* self);
ptrdiff_t QByteArray_Length(const QByteArray* self);
bool QByteArray_IsNull(const QByteArray* self);
libqt_string QByteArray_Fill2(QByteArray* self, char c, ptrdiff_t size);
ptrdiff_t QByteArray_IndexOf22(const QByteArray* self, char c, ptrdiff_t from);
ptrdiff_t QByteArray_IndexOf23(const QByteArray* self, QByteArrayView* bv, ptrdiff_t from);
ptrdiff_t QByteArray_LastIndexOf22(const QByteArray* self, char c, ptrdiff_t from);
int QByteArray_Compare2(const QByteArray* self, QByteArrayView* a, int cs);
libqt_string QByteArray_Mid2(const QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal);
libqt_string QByteArray_LeftJustified2(const QByteArray* self, ptrdiff_t width, char fill);
libqt_string QByteArray_LeftJustified3(const QByteArray* self, ptrdiff_t width, char fill, bool truncate);
libqt_string QByteArray_RightJustified2(const QByteArray* self, ptrdiff_t width, char fill);
libqt_string QByteArray_RightJustified3(const QByteArray* self, ptrdiff_t width, char fill, bool truncate);
int16_t QByteArray_ToShort1(const QByteArray* self, bool* ok);
int16_t QByteArray_ToShort2(const QByteArray* self, bool* ok, int base);
uint16_t QByteArray_ToUShort1(const QByteArray* self, bool* ok);
uint16_t QByteArray_ToUShort2(const QByteArray* self, bool* ok, int base);
int QByteArray_ToInt1(const QByteArray* self, bool* ok);
int QByteArray_ToInt2(const QByteArray* self, bool* ok, int base);
unsigned int QByteArray_ToUInt1(const QByteArray* self, bool* ok);
unsigned int QByteArray_ToUInt2(const QByteArray* self, bool* ok, int base);
long QByteArray_ToLong1(const QByteArray* self, bool* ok);
long QByteArray_ToLong2(const QByteArray* self, bool* ok, int base);
unsigned long QByteArray_ToULong1(const QByteArray* self, bool* ok);
unsigned long QByteArray_ToULong2(const QByteArray* self, bool* ok, int base);
long long QByteArray_ToLongLong1(const QByteArray* self, bool* ok);
long long QByteArray_ToLongLong2(const QByteArray* self, bool* ok, int base);
unsigned long long QByteArray_ToULongLong1(const QByteArray* self, bool* ok);
unsigned long long QByteArray_ToULongLong2(const QByteArray* self, bool* ok, int base);
float QByteArray_ToFloat1(const QByteArray* self, bool* ok);
double QByteArray_ToDouble1(const QByteArray* self, bool* ok);
libqt_string QByteArray_ToBase641(const QByteArray* self, int options);
libqt_string QByteArray_ToHex1(const QByteArray* self, char separator);
libqt_string QByteArray_ToPercentEncoding1(const QByteArray* self, const libqt_string exclude);
libqt_string QByteArray_ToPercentEncoding2(const QByteArray* self, const libqt_string exclude, const libqt_string include);
libqt_string QByteArray_ToPercentEncoding3(const QByteArray* self, const libqt_string exclude, const libqt_string include, char percent);
libqt_string QByteArray_PercentDecoded1(const QByteArray* self, char percent);
libqt_string QByteArray_SetNum22(QByteArray* self, int16_t param1, int base);
libqt_string QByteArray_SetNum23(QByteArray* self, uint16_t param1, int base);
libqt_string QByteArray_SetNum24(QByteArray* self, int param1, int base);
libqt_string QByteArray_SetNum25(QByteArray* self, unsigned int param1, int base);
libqt_string QByteArray_SetNum26(QByteArray* self, long param1, int base);
libqt_string QByteArray_SetNum27(QByteArray* self, unsigned long param1, int base);
libqt_string QByteArray_SetNum28(QByteArray* self, long long param1, int base);
libqt_string QByteArray_SetNum29(QByteArray* self, unsigned long long param1, int base);
libqt_string QByteArray_SetNum210(QByteArray* self, float param1, char format);
libqt_string QByteArray_SetNum32(QByteArray* self, float param1, char format, int precision);
libqt_string QByteArray_SetNum211(QByteArray* self, double param1, char format);
libqt_string QByteArray_SetNum33(QByteArray* self, double param1, char format, int precision);
libqt_string QByteArray_Number22(int param1, int base);
libqt_string QByteArray_Number23(unsigned int param1, int base);
libqt_string QByteArray_Number24(long param1, int base);
libqt_string QByteArray_Number25(unsigned long param1, int base);
libqt_string QByteArray_Number26(long long param1, int base);
libqt_string QByteArray_Number27(unsigned long long param1, int base);
libqt_string QByteArray_Number28(double param1, char format);
libqt_string QByteArray_Number32(double param1, char format, int precision);
QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(const libqt_string base64, int options);
libqt_string QByteArray_FromBase642(const libqt_string base64, int options);
libqt_string QByteArray_FromPercentEncoding2(const libqt_string pctEncoded, char percent);
void QByteArray_Delete(QByteArray* self);

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new(const QByteArray__FromBase64Result* param1);
QByteArray__FromBase64Result* QByteArray__FromBase64Result_new2();
libqt_string QByteArray__FromBase64Result_Decoded(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_SetDecoded(QByteArray__FromBase64Result* self, libqt_string decoded);
int QByteArray__FromBase64Result_DecodingStatus(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_SetDecodingStatus(QByteArray__FromBase64Result* self, int decodingStatus);
void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other);
bool QByteArray__FromBase64Result_Operatorbool(const QByteArray__FromBase64Result* self);
libqt_string QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self);
libqt_string QByteArray__FromBase64Result_OperatorMultiply2(const QByteArray__FromBase64Result* self);
void QByteArray__FromBase64Result_OperatorAssign(QByteArray__FromBase64Result* self, const QByteArray__FromBase64Result* param1);
void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
