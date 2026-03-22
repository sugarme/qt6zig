#pragma once
#ifndef QWAVEDECODER_H_C_LIB
#define QWAVEDECODER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct QWaveDecoder QWaveDecoder;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWaveDecoder* QWaveDecoder_new(QIODevice* device);
QWaveDecoder* QWaveDecoder_new2(QIODevice* device, const QAudioFormat* format);
QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent);
QWaveDecoder* QWaveDecoder_new4(QIODevice* device, const QAudioFormat* format, QObject* parent);
libqt_string QWaveDecoder_Tr(const char* s);
QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self);
QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self);
int QWaveDecoder_Duration(const QWaveDecoder* self);
long long QWaveDecoder_HeaderLength();
bool QWaveDecoder_Open(QWaveDecoder* self, QIODevice::OpenMode mode);
void QWaveDecoder_Close(QWaveDecoder* self);
bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos);
long long QWaveDecoder_Pos(const QWaveDecoder* self);
void QWaveDecoder_SetIODevice(QWaveDecoder* self, QIODevice* device);
long long QWaveDecoder_Size(const QWaveDecoder* self);
bool QWaveDecoder_IsSequential(const QWaveDecoder* self);
long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self);
void QWaveDecoder_FormatKnown(QWaveDecoder* self);
void QWaveDecoder_Connect_FormatKnown(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_ParsingError(QWaveDecoder* self);
void QWaveDecoder_Connect_ParsingError(QWaveDecoder* self, intptr_t slot);
libqt_string QWaveDecoder_Tr2(const char* s, const char* c);
libqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n);
void QWaveDecoder_OnOpen(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_QBaseOpen(QWaveDecoder* self, QIODevice::OpenMode mode);
void QWaveDecoder_OnClose(QWaveDecoder* self, intptr_t slot);
void QWaveDecoder_QBaseClose(QWaveDecoder* self);
void QWaveDecoder_OnSeek(QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_QBaseSeek(QWaveDecoder* self, long long pos);
void QWaveDecoder_OnPos(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_QBasePos(const QWaveDecoder* self);
void QWaveDecoder_OnSize(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_QBaseSize(const QWaveDecoder* self);
void QWaveDecoder_OnIsSequential(const QWaveDecoder* self, intptr_t slot);
bool QWaveDecoder_QBaseIsSequential(const QWaveDecoder* self);
void QWaveDecoder_OnBytesAvailable(const QWaveDecoder* self, intptr_t slot);
long long QWaveDecoder_QBaseBytesAvailable(const QWaveDecoder* self);
void QWaveDecoder_Delete(QWaveDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
