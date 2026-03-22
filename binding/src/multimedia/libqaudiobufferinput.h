#pragma once
#ifndef QAUDIOBUFFERINPUT_H_C_LIB
#define QAUDIOBUFFERINPUT_H_C_LIB

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
typedef struct QAudioBufferInput QAudioBufferInput;
typedef struct QAudioFormat QAudioFormat;
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAudioBufferInput* QAudioBufferInput_new();
QAudioBufferInput* QAudioBufferInput_new2(const QAudioFormat* format);
QAudioBufferInput* QAudioBufferInput_new3(QObject* parent);
QAudioBufferInput* QAudioBufferInput_new4(const QAudioFormat* format, QObject* parent);
libqt_string QAudioBufferInput_Tr(const char* s);
bool QAudioBufferInput_SendAudioBuffer(QAudioBufferInput* self, const QAudioBuffer* audioBuffer);
QAudioFormat* QAudioBufferInput_Format(const QAudioBufferInput* self);
QMediaCaptureSession* QAudioBufferInput_CaptureSession(const QAudioBufferInput* self);
void QAudioBufferInput_ReadyToSendAudioBuffer(QAudioBufferInput* self);
void QAudioBufferInput_Connect_ReadyToSendAudioBuffer(QAudioBufferInput* self, intptr_t slot);
libqt_string QAudioBufferInput_Tr2(const char* s, const char* c);
libqt_string QAudioBufferInput_Tr3(const char* s, const char* c, int n);
void QAudioBufferInput_Delete(QAudioBufferInput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
