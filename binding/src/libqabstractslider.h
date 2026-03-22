#pragma once
#ifndef QABSTRACTSLIDER_H_C_LIB
#define QABSTRACTSLIDER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSlider QAbstractSlider;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractSlider* QAbstractSlider_new(QWidget* parent);
QAbstractSlider* QAbstractSlider_new2();
libqt_string QAbstractSlider_Tr(const char* s);
int QAbstractSlider_Orientation(const QAbstractSlider* self);
void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum);
int QAbstractSlider_Minimum(const QAbstractSlider* self);
void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum);
int QAbstractSlider_Maximum(const QAbstractSlider* self);
void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep);
int QAbstractSlider_SingleStep(const QAbstractSlider* self);
void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep);
int QAbstractSlider_PageStep(const QAbstractSlider* self);
void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable);
bool QAbstractSlider_HasTracking(const QAbstractSlider* self);
void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown);
bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self);
void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition);
int QAbstractSlider_SliderPosition(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance);
bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self);
void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls);
bool QAbstractSlider_InvertedControls(const QAbstractSlider* self);
int QAbstractSlider_Value(const QAbstractSlider* self);
void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action);
void QAbstractSlider_SetValue(QAbstractSlider* self, int value);
void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation);
void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max);
void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value);
void QAbstractSlider_Connect_ValueChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderPressed(QAbstractSlider* self);
void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position);
void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_SliderReleased(QAbstractSlider* self);
void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max);
void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action);
void QAbstractSlider_Connect_ActionTriggered(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e);
libqt_string QAbstractSlider_Tr2(const char* s, const char* c);
libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n);
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action);
void QAbstractSlider_OnSetRepeatAction(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action);
int QAbstractSlider_RepeatAction(const QAbstractSlider* self);
void QAbstractSlider_OnRepeatAction(const QAbstractSlider* self, intptr_t slot);
int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self);
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
void QAbstractSlider_OnSetRepeatAction2(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
void QAbstractSlider_OnSetRepeatAction3(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
void QAbstractSlider_Delete(QAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
