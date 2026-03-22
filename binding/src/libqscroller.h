#pragma once
#ifndef QSCROLLER_H_C_LIB
#define QSCROLLER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QScroller QScroller;
typedef struct QScrollerProperties QScrollerProperties;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




libqt_string QScroller_Tr(const char* s);
bool QScroller_HasScroller(QObject* target);
QScroller* QScroller_Scroller(QObject* target);
const QScroller* QScroller_Scroller2(const QObject* target);
int QScroller_GrabGesture(QObject* target);
int QScroller_GrabbedGesture(QObject* target);
void QScroller_UngrabGesture(QObject* target);
libqt_list QScroller_ActiveScrollers();
QObject* QScroller_Target(const QScroller* self);
int QScroller_State(const QScroller* self);
bool QScroller_HandleInput(QScroller* self, int input, const QPointF* position);
void QScroller_Stop(QScroller* self);
QPointF* QScroller_Velocity(const QScroller* self);
QPointF* QScroller_FinalPosition(const QScroller* self);
QPointF* QScroller_PixelPerMeter(const QScroller* self);
QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self);
void QScroller_SetSnapPositionsX(QScroller* self, const libqt_list positions);
void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval);
void QScroller_SetSnapPositionsY(QScroller* self, const libqt_list positions);
void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval);
void QScroller_SetScrollerProperties(QScroller* self, const QScrollerProperties* prop);
void QScroller_ScrollTo(QScroller* self, const QPointF* pos);
void QScroller_ScrollTo2(QScroller* self, const QPointF* pos, int scrollTime);
void QScroller_EnsureVisible(QScroller* self, const QRectF* rect, double xmargin, double ymargin);
void QScroller_EnsureVisible2(QScroller* self, const QRectF* rect, double xmargin, double ymargin, int scrollTime);
void QScroller_ResendPrepareEvent(QScroller* self);
void QScroller_StateChanged(QScroller* self, int newstate);
void QScroller_Connect_StateChanged(QScroller* self, intptr_t slot);
void QScroller_ScrollerPropertiesChanged(QScroller* self, const QScrollerProperties* param1);
void QScroller_Connect_ScrollerPropertiesChanged(QScroller* self, intptr_t slot);
libqt_string QScroller_Tr2(const char* s, const char* c);
libqt_string QScroller_Tr3(const char* s, const char* c, int n);
int QScroller_GrabGesture2(QObject* target, int gestureType);
bool QScroller_HandleInput3(QScroller* self, int input, const QPointF* position, long long timestamp);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
