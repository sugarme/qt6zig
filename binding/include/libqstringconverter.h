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
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringConverter QStringConverter;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStringEncoder* QStringEncoder_new();
QStringEncoder* QStringEncoder_new2(int encoding);
QStringEncoder* QStringEncoder_new3(int encoding, int flags);
ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
void QStringEncoder_Delete(QStringEncoder* self);

QStringDecoder* QStringDecoder_new(int encoding);
QStringDecoder* QStringDecoder_new2();
QStringDecoder* QStringDecoder_new3(int encoding, int flags);
ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba);
QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data);
void QStringDecoder_Delete(QStringDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
