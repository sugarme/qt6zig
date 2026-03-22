#pragma once
#ifndef QSLIDER_H_C_LIB
#define QSLIDER_H_C_LIB

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
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QSize QSize;
typedef struct QSlider QSlider;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSlider* QSlider_new(QWidget* parent);
QSlider* QSlider_new2();
QSlider* QSlider_new3(int orientation);
QSlider* QSlider_new4(int orientation, QWidget* parent);
libqt_string QSlider_Tr(const char* s);
QSize* QSlider_SizeHint(const QSlider* self);
QSize* QSlider_MinimumSizeHint(const QSlider* self);
void QSlider_SetTickPosition(QSlider* self, int position);
int QSlider_TickPosition(const QSlider* self);
void QSlider_SetTickInterval(QSlider* self, int ti);
int QSlider_TickInterval(const QSlider* self);
bool QSlider_Event(QSlider* self, QEvent* event);
void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev);
void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option);
libqt_string QSlider_Tr2(const char* s, const char* c);
libqt_string QSlider_Tr3(const char* s, const char* c, int n);
void QSlider_OnSizeHint(const QSlider* self, intptr_t slot);
QSize* QSlider_QBaseSizeHint(const QSlider* self);
void QSlider_OnMinimumSizeHint(const QSlider* self, intptr_t slot);
QSize* QSlider_QBaseMinimumSizeHint(const QSlider* self);
void QSlider_OnEvent(QSlider* self, intptr_t slot);
bool QSlider_QBaseEvent(QSlider* self, QEvent* event);
void QSlider_OnPaintEvent(QSlider* self, intptr_t slot);
void QSlider_QBasePaintEvent(QSlider* self, QPaintEvent* ev);
void QSlider_OnMousePressEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMousePressEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnMouseReleaseEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMouseReleaseEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnMouseMoveEvent(QSlider* self, intptr_t slot);
void QSlider_QBaseMouseMoveEvent(QSlider* self, QMouseEvent* ev);
void QSlider_OnInitStyleOption(const QSlider* self, intptr_t slot);
void QSlider_QBaseInitStyleOption(const QSlider* self, QStyleOptionSlider* option);
void QSlider_Delete(QSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
