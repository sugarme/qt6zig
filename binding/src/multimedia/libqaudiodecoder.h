#pragma once
#ifndef QAUDIODECODER_H_C_LIB
#define QAUDIODECODER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoder QAudioDecoder;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioDecoder* QAudioDecoder_new();
QAudioDecoder* QAudioDecoder_new2(QObject* parent);
libqt_string QAudioDecoder_Tr(const char* s);
bool QAudioDecoder_IsSupported(const QAudioDecoder* self);
bool QAudioDecoder_IsDecoding(const QAudioDecoder* self);
QUrl* QAudioDecoder_Source(const QAudioDecoder* self);
void QAudioDecoder_SetSource(QAudioDecoder* self, const QUrl* fileName);
QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self);
void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device);
QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self);
void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, const QAudioFormat* format);
int QAudioDecoder_Error(const QAudioDecoder* self);
libqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self);
QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self);
bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self);
long long QAudioDecoder_Position(const QAudioDecoder* self);
long long QAudioDecoder_Duration(const QAudioDecoder* self);
void QAudioDecoder_Start(QAudioDecoder* self);
void QAudioDecoder_Stop(QAudioDecoder* self);
void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1);
void QAudioDecoder_BufferReady(QAudioDecoder* self);
void QAudioDecoder_Finished(QAudioDecoder* self);
void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1);
void QAudioDecoder_FormatChanged(QAudioDecoder* self, const QAudioFormat* format);
void QAudioDecoder_Error2(QAudioDecoder* self, int errorVal);
void QAudioDecoder_SourceChanged(QAudioDecoder* self);
void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position);
void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration);
libqt_string QAudioDecoder_Tr2(const char* s, const char* c);
libqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n);
void QAudioDecoder_Delete(QAudioDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
