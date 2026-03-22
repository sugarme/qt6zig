#pragma once
#ifndef QAUDIOBUFFEROUTPUT_H_C_LIB
#define QAUDIOBUFFEROUTPUT_H_C_LIB

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
typedef struct QAudioBufferOutput QAudioBufferOutput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioBufferOutput* QAudioBufferOutput_new();
QAudioBufferOutput* QAudioBufferOutput_new2(const QAudioFormat* format);
QAudioBufferOutput* QAudioBufferOutput_new3(QObject* parent);
QAudioBufferOutput* QAudioBufferOutput_new4(const QAudioFormat* format, QObject* parent);
libqt_string QAudioBufferOutput_Tr(const char* s);
QAudioFormat* QAudioBufferOutput_Format(const QAudioBufferOutput* self);
void QAudioBufferOutput_AudioBufferReceived(QAudioBufferOutput* self, const QAudioBuffer* buffer);
void QAudioBufferOutput_Connect_AudioBufferReceived(QAudioBufferOutput* self, intptr_t slot);
libqt_string QAudioBufferOutput_Tr2(const char* s, const char* c);
libqt_string QAudioBufferOutput_Tr3(const char* s, const char* c, int n);
void QAudioBufferOutput_Delete(QAudioBufferOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
