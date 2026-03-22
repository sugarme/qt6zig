#pragma once
#ifndef QGESTURE_H_C_LIB
#define QGESTURE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureEvent QGestureEvent;
typedef struct QObject QObject;
typedef struct QPanGesture QPanGesture;
typedef struct QPinchGesture QPinchGesture;
typedef struct QPointF QPointF;
typedef struct QSwipeGesture QSwipeGesture;
typedef struct QTapAndHoldGesture QTapAndHoldGesture;
typedef struct QTapGesture QTapGesture;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGesture* QGesture_new();
QGesture* QGesture_new2(QObject* parent);
libqt_string QGesture_Tr(const char* s);
int QGesture_GestureType(const QGesture* self);
int QGesture_State(const QGesture* self);
QPointF* QGesture_HotSpot(const QGesture* self);
void QGesture_SetHotSpot(QGesture* self, const QPointF* value);
bool QGesture_HasHotSpot(const QGesture* self);
void QGesture_UnsetHotSpot(QGesture* self);
void QGesture_SetGestureCancelPolicy(QGesture* self, int policy);
int QGesture_GestureCancelPolicy(const QGesture* self);
libqt_string QGesture_Tr2(const char* s, const char* c);
libqt_string QGesture_Tr3(const char* s, const char* c, int n);
void QGesture_Delete(QGesture* self);

QPanGesture* QPanGesture_new();
QPanGesture* QPanGesture_new2(QObject* parent);
libqt_string QPanGesture_Tr(const char* s);
QPointF* QPanGesture_LastOffset(const QPanGesture* self);
QPointF* QPanGesture_Offset(const QPanGesture* self);
QPointF* QPanGesture_Delta(const QPanGesture* self);
double QPanGesture_Acceleration(const QPanGesture* self);
void QPanGesture_SetLastOffset(QPanGesture* self, const QPointF* value);
void QPanGesture_SetOffset(QPanGesture* self, const QPointF* value);
void QPanGesture_SetAcceleration(QPanGesture* self, double value);
libqt_string QPanGesture_Tr2(const char* s, const char* c);
libqt_string QPanGesture_Tr3(const char* s, const char* c, int n);
void QPanGesture_Delete(QPanGesture* self);

QPinchGesture* QPinchGesture_new();
QPinchGesture* QPinchGesture_new2(QObject* parent);
libqt_string QPinchGesture_Tr(const char* s);
int QPinchGesture_TotalChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value);
int QPinchGesture_ChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value);
QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self);
void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, const QPointF* value);
void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, const QPointF* value);
void QPinchGesture_SetCenterPoint(QPinchGesture* self, const QPointF* value);
double QPinchGesture_TotalScaleFactor(const QPinchGesture* self);
double QPinchGesture_LastScaleFactor(const QPinchGesture* self);
double QPinchGesture_ScaleFactor(const QPinchGesture* self);
void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value);
double QPinchGesture_TotalRotationAngle(const QPinchGesture* self);
double QPinchGesture_LastRotationAngle(const QPinchGesture* self);
double QPinchGesture_RotationAngle(const QPinchGesture* self);
void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value);
libqt_string QPinchGesture_Tr2(const char* s, const char* c);
libqt_string QPinchGesture_Tr3(const char* s, const char* c, int n);
void QPinchGesture_Delete(QPinchGesture* self);

QSwipeGesture* QSwipeGesture_new();
QSwipeGesture* QSwipeGesture_new2(QObject* parent);
libqt_string QSwipeGesture_Tr(const char* s);
int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self);
int QSwipeGesture_VerticalDirection(const QSwipeGesture* self);
double QSwipeGesture_SwipeAngle(const QSwipeGesture* self);
void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value);
libqt_string QSwipeGesture_Tr2(const char* s, const char* c);
libqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n);
void QSwipeGesture_Delete(QSwipeGesture* self);

QTapGesture* QTapGesture_new();
QTapGesture* QTapGesture_new2(QObject* parent);
libqt_string QTapGesture_Tr(const char* s);
QPointF* QTapGesture_Position(const QTapGesture* self);
void QTapGesture_SetPosition(QTapGesture* self, const QPointF* pos);
libqt_string QTapGesture_Tr2(const char* s, const char* c);
libqt_string QTapGesture_Tr3(const char* s, const char* c, int n);
void QTapGesture_Delete(QTapGesture* self);

QTapAndHoldGesture* QTapAndHoldGesture_new();
QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent);
libqt_string QTapAndHoldGesture_Tr(const char* s);
QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, const QPointF* pos);
void QTapAndHoldGesture_SetTimeout(int msecs);
int QTapAndHoldGesture_Timeout();
libqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c);
libqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n);
void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self);


QGestureEvent* QGestureEvent_new(const libqt_list gestures);
QGestureEvent* QGestureEvent_new2(const QGestureEvent* param1);
libqt_list QGestureEvent_Gestures(const QGestureEvent* self);
QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal);
libqt_list QGestureEvent_ActiveGestures(const QGestureEvent* self);
libqt_list QGestureEvent_CanceledGestures(const QGestureEvent* self);
void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2);
void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1);
void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1);
bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1);
void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2);
void QGestureEvent_Accept2(QGestureEvent* self, int param1);
void QGestureEvent_Ignore2(QGestureEvent* self, int param1);
bool QGestureEvent_IsAccepted2(const QGestureEvent* self, int param1);
void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget);
QWidget* QGestureEvent_Widget(const QGestureEvent* self);
QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, const QPointF* gesturePoint);
void QGestureEvent_Delete(QGestureEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
