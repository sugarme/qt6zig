#pragma once
#ifndef QSTRINGCONVERTER_H_C_LIB
#define QSTRINGCONVERTER_H_C_LIB

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
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringConverter QStringConverter;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStringEncoder* QStringEncoder_new();
QStringEncoder* QStringEncoder_new2(int encoding);
QStringEncoder* QStringEncoder_new3(libqt_string name);
QStringEncoder* QStringEncoder_new4(int encoding, int flags);
QStringEncoder* QStringEncoder_new5(libqt_string name, int flags);
DecodedData<QStringView> QStringEncoder_OperatorCall(QStringEncoder* self, QStringView* in);
DecodedData<QStringView> QStringEncoder_Encode(QStringEncoder* self, QStringView* in);
ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
char* QStringEncoder_AppendToBuffer(QStringEncoder* self, char* out, QStringView* in);
void QStringEncoder_Delete(QStringEncoder* self);

QStringDecoder* QStringDecoder_new(int encoding);
QStringDecoder* QStringDecoder_new2();
QStringDecoder* QStringDecoder_new3(libqt_string name);
QStringDecoder* QStringDecoder_new4(int encoding, int flags);
QStringDecoder* QStringDecoder_new5(libqt_string name, int f);
EncodedData<QByteArrayView> QStringDecoder_OperatorCall(QStringDecoder* self, QByteArrayView* ba);
EncodedData<QByteArrayView> QStringDecoder_Decode(QStringDecoder* self, QByteArrayView* ba);
ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba);
QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data);
void QStringDecoder_Delete(QStringDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
