#pragma once
#ifndef QPARALLELANIMATIONGROUP_H_C_LIB
#define QPARALLELANIMATIONGROUP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QParallelAnimationGroup QParallelAnimationGroup;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QParallelAnimationGroup* QParallelAnimationGroup_new();
QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent);
libqt_string QParallelAnimationGroup_Tr(const char* s);
int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self);
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction);
libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c);
libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n);
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot);
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self);
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot);
bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event);
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime);
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState);
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot);
void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction);
void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
