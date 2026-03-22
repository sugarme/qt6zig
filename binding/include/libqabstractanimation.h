#pragma once
#ifndef QABSTRACTANIMATION_H_C_LIB
#define QABSTRACTANIMATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationDriver QAnimationDriver;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractAnimation* QAbstractAnimation_new();
QAbstractAnimation* QAbstractAnimation_new2(QObject* parent);
libqt_string QAbstractAnimation_Tr(const char* s);
int QAbstractAnimation_State(const QAbstractAnimation* self);
QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self);
int QAbstractAnimation_Direction(const QAbstractAnimation* self);
void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction);
int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self);
int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self);
int QAbstractAnimation_LoopCount(const QAbstractAnimation* self);
void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount);
int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self);
int QAbstractAnimation_Duration(const QAbstractAnimation* self);
int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self);
void QAbstractAnimation_Finished(QAbstractAnimation* self);
void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop);
void QAbstractAnimation_Connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1);
void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_Start(QAbstractAnimation* self);
void QAbstractAnimation_Pause(QAbstractAnimation* self);
void QAbstractAnimation_Resume(QAbstractAnimation* self);
void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused);
void QAbstractAnimation_Stop(QAbstractAnimation* self);
void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs);
bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime);
void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction);
libqt_string QAbstractAnimation_Tr2(const char* s, const char* c);
libqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n);
void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy);
void QAbstractAnimation_OnDuration(const QAbstractAnimation* self, intptr_t slot);
int QAbstractAnimation_QBaseDuration(const QAbstractAnimation* self);
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot);
bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event);
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime);
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction);
void QAbstractAnimation_Delete(QAbstractAnimation* self);

QAnimationDriver* QAnimationDriver_new();
QAnimationDriver* QAnimationDriver_new2(QObject* parent);
libqt_string QAnimationDriver_Tr(const char* s);
void QAnimationDriver_Advance(QAnimationDriver* self);
void QAnimationDriver_Install(QAnimationDriver* self);
void QAnimationDriver_Uninstall(QAnimationDriver* self);
bool QAnimationDriver_IsRunning(const QAnimationDriver* self);
long long QAnimationDriver_Elapsed(const QAnimationDriver* self);
void QAnimationDriver_Started(QAnimationDriver* self);
void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_Stopped(QAnimationDriver* self);
void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_Start(QAnimationDriver* self);
void QAnimationDriver_Stop(QAnimationDriver* self);
libqt_string QAnimationDriver_Tr2(const char* s, const char* c);
libqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n);
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseAdvance(QAnimationDriver* self);
void QAnimationDriver_OnElapsed(const QAnimationDriver* self, intptr_t slot);
long long QAnimationDriver_QBaseElapsed(const QAnimationDriver* self);
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseStart(QAnimationDriver* self);
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseStop(QAnimationDriver* self);
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self);
void QAnimationDriver_OnAdvanceAnimation(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self);
void QAnimationDriver_Delete(QAnimationDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
