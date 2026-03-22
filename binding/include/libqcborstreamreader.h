#pragma once
#ifndef QCBORSTREAMREADER_H_C_LIB
#define QCBORSTREAMREADER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCborError QCborError;
typedef struct QCborStreamReader QCborStreamReader;
typedef struct QIODevice QIODevice;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCborStreamReader* QCborStreamReader_new();
QCborStreamReader* QCborStreamReader_new2(const char* data, ptrdiff_t lenVal);
QCborStreamReader* QCborStreamReader_new3(const unsigned char* data, ptrdiff_t lenVal);
QCborStreamReader* QCborStreamReader_new4(const libqt_string data);
QCborStreamReader* QCborStreamReader_new5(QIODevice* device);
void QCborStreamReader_SetDevice(QCborStreamReader* self, QIODevice* device);
QIODevice* QCborStreamReader_Device(const QCborStreamReader* self);
void QCborStreamReader_AddData(QCborStreamReader* self, const libqt_string data);
void QCborStreamReader_AddData2(QCborStreamReader* self, const char* data, ptrdiff_t lenVal);
void QCborStreamReader_AddData3(QCborStreamReader* self, const unsigned char* data, ptrdiff_t lenVal);
void QCborStreamReader_Reparse(QCborStreamReader* self);
void QCborStreamReader_Clear(QCborStreamReader* self);
void QCborStreamReader_Reset(QCborStreamReader* self);
QCborError* QCborStreamReader_LastError(const QCborStreamReader* self);
long long QCborStreamReader_CurrentOffset(const QCborStreamReader* self);
bool QCborStreamReader_IsValid(const QCborStreamReader* self);
int QCborStreamReader_ContainerDepth(const QCborStreamReader* self);
quint8 QCborStreamReader_ParentContainerType(const QCborStreamReader* self);
bool QCborStreamReader_HasNext(const QCborStreamReader* self);
bool QCborStreamReader_Next(QCborStreamReader* self);
int QCborStreamReader_Type(const QCborStreamReader* self);
bool QCborStreamReader_IsUnsignedInteger(const QCborStreamReader* self);
bool QCborStreamReader_IsNegativeInteger(const QCborStreamReader* self);
bool QCborStreamReader_IsInteger(const QCborStreamReader* self);
bool QCborStreamReader_IsByteArray(const QCborStreamReader* self);
bool QCborStreamReader_IsString(const QCborStreamReader* self);
bool QCborStreamReader_IsArray(const QCborStreamReader* self);
bool QCborStreamReader_IsMap(const QCborStreamReader* self);
bool QCborStreamReader_IsTag(const QCborStreamReader* self);
bool QCborStreamReader_IsSimpleType(const QCborStreamReader* self);
bool QCborStreamReader_IsFloat16(const QCborStreamReader* self);
bool QCborStreamReader_IsFloat(const QCborStreamReader* self);
bool QCborStreamReader_IsDouble(const QCborStreamReader* self);
bool QCborStreamReader_IsInvalid(const QCborStreamReader* self);
bool QCborStreamReader_IsSimpleType2(const QCborStreamReader* self, quint8 st);
bool QCborStreamReader_IsFalse(const QCborStreamReader* self);
bool QCborStreamReader_IsTrue(const QCborStreamReader* self);
bool QCborStreamReader_IsBool(const QCborStreamReader* self);
bool QCborStreamReader_IsNull(const QCborStreamReader* self);
bool QCborStreamReader_IsUndefined(const QCborStreamReader* self);
bool QCborStreamReader_IsLengthKnown(const QCborStreamReader* self);
unsigned long long QCborStreamReader_Length(const QCborStreamReader* self);
bool QCborStreamReader_IsContainer(const QCborStreamReader* self);
bool QCborStreamReader_EnterContainer(QCborStreamReader* self);
bool QCborStreamReader_LeaveContainer(QCborStreamReader* self);
bool QCborStreamReader_ReadAndAppendToString(QCborStreamReader* self, libqt_string dst);
bool QCborStreamReader_ReadAndAppendToUtf8String(QCborStreamReader* self, libqt_string dst);
bool QCborStreamReader_ReadAndAppendToByteArray(QCborStreamReader* self, libqt_string dst);
ptrdiff_t QCborStreamReader_CurrentStringChunkSize(const QCborStreamReader* self);
bool QCborStreamReader_ToBool(const QCborStreamReader* self);
quint64 QCborStreamReader_ToTag(const QCborStreamReader* self);
unsigned long long QCborStreamReader_ToUnsignedInteger(const QCborStreamReader* self);
quint64 QCborStreamReader_ToNegativeInteger(const QCborStreamReader* self);
quint8 QCborStreamReader_ToSimpleType(const QCborStreamReader* self);
float QCborStreamReader_ToFloat(const QCborStreamReader* self);
double QCborStreamReader_ToDouble(const QCborStreamReader* self);
long long QCborStreamReader_ToInteger(const QCborStreamReader* self);
libqt_string QCborStreamReader_ReadAllString(QCborStreamReader* self);
libqt_string QCborStreamReader_ReadAllUtf8String(QCborStreamReader* self);
libqt_string QCborStreamReader_ReadAllByteArray(QCborStreamReader* self);
bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion);
void QCborStreamReader_Delete(QCborStreamReader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
