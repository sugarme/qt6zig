#pragma once
#ifndef QPAUSEANIMATION_H_C_LIB
#define QPAUSEANIMATION_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPauseAnimation* QPauseAnimation_new();
QPauseAnimation* QPauseAnimation_new2(int msecs);
QPauseAnimation* QPauseAnimation_new3(QObject* parent);
QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent);
libqt_string QPauseAnimation_Tr(const char* s);
int QPauseAnimation_Duration(const QPauseAnimation* self);
void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs);
QBindable<int> QPauseAnimation_BindableDuration(QPauseAnimation* self);
bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1);
libqt_string QPauseAnimation_Tr2(const char* s, const char* c);
libqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n);
void QPauseAnimation_OnDuration(const QPauseAnimation* self, intptr_t slot);
int QPauseAnimation_QBaseDuration(const QPauseAnimation* self);
void QPauseAnimation_OnEvent(QPauseAnimation* self, intptr_t slot);
bool QPauseAnimation_QBaseEvent(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_OnUpdateCurrentTime(QPauseAnimation* self, intptr_t slot);
void QPauseAnimation_QBaseUpdateCurrentTime(QPauseAnimation* self, int param1);
void QPauseAnimation_Delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
