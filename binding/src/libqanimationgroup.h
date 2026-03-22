#pragma once
#ifndef QANIMATIONGROUP_H_C_LIB
#define QANIMATIONGROUP_H_C_LIB

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
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAnimationGroup* QAnimationGroup_new();
QAnimationGroup* QAnimationGroup_new2(QObject* parent);
libqt_string QAnimationGroup_Tr(const char* s);
QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(const QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event);
libqt_string QAnimationGroup_Tr2(const char* s, const char* c);
libqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n);
void QAnimationGroup_OnEvent(QAnimationGroup* self, intptr_t slot);
bool QAnimationGroup_QBaseEvent(QAnimationGroup* self, QEvent* event);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
