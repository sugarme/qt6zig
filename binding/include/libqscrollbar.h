#pragma once
#ifndef QSCROLLBAR_H_C_LIB
#define QSCROLLBAR_H_C_LIB

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
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QSize QSize;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QScrollBar* QScrollBar_new(QWidget* parent);
QScrollBar* QScrollBar_new2();
QScrollBar* QScrollBar_new3(int param1);
QScrollBar* QScrollBar_new4(int param1, QWidget* parent);
libqt_string QScrollBar_Tr(const char* s);
QSize* QScrollBar_SizeHint(const QScrollBar* self);
bool QScrollBar_Event(QScrollBar* self, QEvent* event);
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_SliderChange(QScrollBar* self, int change);
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
libqt_string QScrollBar_Tr2(const char* s, const char* c);
libqt_string QScrollBar_Tr3(const char* s, const char* c, int n);
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot);
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self);
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot);
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event);
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1);
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1);
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1);
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseSliderChange(QScrollBar* self, int change);
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
void QScrollBar_OnInitStyleOption(const QScrollBar* self, intptr_t slot);
void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
void QScrollBar_Delete(QScrollBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
