#pragma once
#ifndef QTIMELINE_H_C_LIB
#define QTIMELINE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEasingCurve QEasingCurve;
typedef struct QObject QObject;
typedef struct QTimeLine QTimeLine;
typedef struct QTimerEvent QTimerEvent;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTimeLine* QTimeLine_new();
QTimeLine* QTimeLine_new2(int duration);
QTimeLine* QTimeLine_new3(int duration, QObject* parent);
libqt_string QTimeLine_Tr(const char* s);
int QTimeLine_State(const QTimeLine* self);
int QTimeLine_LoopCount(const QTimeLine* self);
void QTimeLine_SetLoopCount(QTimeLine* self, int count);
QBindable<int> QTimeLine_BindableLoopCount(QTimeLine* self);
int QTimeLine_Direction(const QTimeLine* self);
void QTimeLine_SetDirection(QTimeLine* self, int direction);
QBindable<Direction> QTimeLine_BindableDirection(QTimeLine* self);
int QTimeLine_Duration(const QTimeLine* self);
void QTimeLine_SetDuration(QTimeLine* self, int duration);
QBindable<int> QTimeLine_BindableDuration(QTimeLine* self);
int QTimeLine_StartFrame(const QTimeLine* self);
void QTimeLine_SetStartFrame(QTimeLine* self, int frame);
int QTimeLine_EndFrame(const QTimeLine* self);
void QTimeLine_SetEndFrame(QTimeLine* self, int frame);
void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_UpdateInterval(const QTimeLine* self);
void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval);
QBindable<int> QTimeLine_BindableUpdateInterval(QTimeLine* self);
QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self);
void QTimeLine_SetEasingCurve(QTimeLine* self, const QEasingCurve* curve);
QBindable<QEasingCurve> QTimeLine_BindableEasingCurve(QTimeLine* self);
int QTimeLine_CurrentTime(const QTimeLine* self);
QBindable<int> QTimeLine_BindableCurrentTime(QTimeLine* self);
int QTimeLine_CurrentFrame(const QTimeLine* self);
double QTimeLine_CurrentValue(const QTimeLine* self);
int QTimeLine_FrameForTime(const QTimeLine* self, int msec);
double QTimeLine_ValueForTime(const QTimeLine* self, int msec);
void QTimeLine_Start(QTimeLine* self);
void QTimeLine_Resume(QTimeLine* self);
void QTimeLine_Stop(QTimeLine* self);
void QTimeLine_SetPaused(QTimeLine* self, bool paused);
void QTimeLine_SetCurrentTime(QTimeLine* self, int msec);
void QTimeLine_ToggleDirection(QTimeLine* self);
void QTimeLine_TimerEvent(QTimeLine* self, QTimerEvent* event);
libqt_string QTimeLine_Tr2(const char* s, const char* c);
libqt_string QTimeLine_Tr3(const char* s, const char* c, int n);
void QTimeLine_OnValueForTime(const QTimeLine* self, intptr_t slot);
double QTimeLine_QBaseValueForTime(const QTimeLine* self, int msec);
void QTimeLine_OnTimerEvent(QTimeLine* self, intptr_t slot);
void QTimeLine_QBaseTimerEvent(QTimeLine* self, QTimerEvent* event);
void QTimeLine_Connect_valueChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_frameChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_stateChanged(QTimeLine* self, intptr_t slot);
void QTimeLine_Connect_finished(QTimeLine* self, intptr_t slot);
void QTimeLine_Delete(QTimeLine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
