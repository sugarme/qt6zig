#pragma once
#ifndef QDIAL_H_C_LIB
#define QDIAL_H_C_LIB

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
typedef struct QDial QDial;
typedef struct QEvent QEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDial* QDial_new(QWidget* parent);
QDial* QDial_new2();
libqt_string QDial_Tr(const char* s);
bool QDial_Wrapping(const QDial* self);
int QDial_NotchSize(const QDial* self);
void QDial_SetNotchTarget(QDial* self, double target);
double QDial_NotchTarget(const QDial* self);
bool QDial_NotchesVisible(const QDial* self);
QSize* QDial_SizeHint(const QDial* self);
QSize* QDial_MinimumSizeHint(const QDial* self);
void QDial_SetNotchesVisible(QDial* self, bool visible);
void QDial_SetWrapping(QDial* self, bool on);
bool QDial_Event(QDial* self, QEvent* e);
void QDial_ResizeEvent(QDial* self, QResizeEvent* re);
void QDial_PaintEvent(QDial* self, QPaintEvent* pe);
void QDial_MousePressEvent(QDial* self, QMouseEvent* me);
void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me);
void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me);
void QDial_SliderChange(QDial* self, int change);
void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option);
libqt_string QDial_Tr2(const char* s, const char* c);
libqt_string QDial_Tr3(const char* s, const char* c, int n);
void QDial_OnSizeHint(const QDial* self, intptr_t slot);
QSize* QDial_QBaseSizeHint(const QDial* self);
void QDial_OnMinimumSizeHint(const QDial* self, intptr_t slot);
QSize* QDial_QBaseMinimumSizeHint(const QDial* self);
void QDial_OnEvent(QDial* self, intptr_t slot);
bool QDial_QBaseEvent(QDial* self, QEvent* e);
void QDial_OnResizeEvent(QDial* self, intptr_t slot);
void QDial_QBaseResizeEvent(QDial* self, QResizeEvent* re);
void QDial_OnPaintEvent(QDial* self, intptr_t slot);
void QDial_QBasePaintEvent(QDial* self, QPaintEvent* pe);
void QDial_OnMousePressEvent(QDial* self, intptr_t slot);
void QDial_QBaseMousePressEvent(QDial* self, QMouseEvent* me);
void QDial_OnMouseReleaseEvent(QDial* self, intptr_t slot);
void QDial_QBaseMouseReleaseEvent(QDial* self, QMouseEvent* me);
void QDial_OnMouseMoveEvent(QDial* self, intptr_t slot);
void QDial_QBaseMouseMoveEvent(QDial* self, QMouseEvent* me);
void QDial_OnSliderChange(QDial* self, intptr_t slot);
void QDial_QBaseSliderChange(QDial* self, int change);
void QDial_OnInitStyleOption(const QDial* self, intptr_t slot);
void QDial_QBaseInitStyleOption(const QDial* self, QStyleOptionSlider* option);
void QDial_Delete(QDial* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
