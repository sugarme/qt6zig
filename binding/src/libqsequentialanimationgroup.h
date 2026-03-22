#pragma once
#ifndef QSEQUENTIALANIMATIONGROUP_H_C_LIB
#define QSEQUENTIALANIMATIONGROUP_H_C_LIB

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
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QSequentialAnimationGroup QSequentialAnimationGroup;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSequentialAnimationGroup* QSequentialAnimationGroup_new();
QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent);
libqt_string QSequentialAnimationGroup_Tr(const char* s);
QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self);
QBindable<QAbstractAnimation *> QSequentialAnimationGroup_BindableCurrentAnimation(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction);
libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c);
libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n);
void QSequentialAnimationGroup_OnDuration(const QSequentialAnimationGroup* self, intptr_t slot);
int QSequentialAnimationGroup_QBaseDuration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot);
bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event);
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1);
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState);
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot);
void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction);
void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
