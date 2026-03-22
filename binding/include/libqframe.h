#pragma once
#ifndef QFRAME_H_C_LIB
#define QFRAME_H_C_LIB

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
typedef struct QFrame QFrame;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFrame* QFrame_new(QWidget* parent);
QFrame* QFrame_new2();
QFrame* QFrame_new3(QWidget* parent, int f);
libqt_string QFrame_Tr(const char* s);
int QFrame_FrameStyle(const QFrame* self);
void QFrame_SetFrameStyle(QFrame* self, int frameStyle);
int QFrame_FrameWidth(const QFrame* self);
QSize* QFrame_SizeHint(const QFrame* self);
int QFrame_FrameShape(const QFrame* self);
void QFrame_SetFrameShape(QFrame* self, int frameShape);
int QFrame_FrameShadow(const QFrame* self);
void QFrame_SetFrameShadow(QFrame* self, int frameShadow);
int QFrame_LineWidth(const QFrame* self);
void QFrame_SetLineWidth(QFrame* self, int lineWidth);
int QFrame_MidLineWidth(const QFrame* self);
void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth);
QRect* QFrame_FrameRect(const QFrame* self);
void QFrame_SetFrameRect(QFrame* self, const QRect* frameRect);
bool QFrame_Event(QFrame* self, QEvent* e);
void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_ChangeEvent(QFrame* self, QEvent* param1);
void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option);
libqt_string QFrame_Tr2(const char* s, const char* c);
libqt_string QFrame_Tr3(const char* s, const char* c, int n);
void QFrame_OnSizeHint(const QFrame* self, intptr_t slot);
QSize* QFrame_QBaseSizeHint(const QFrame* self);
void QFrame_OnEvent(QFrame* self, intptr_t slot);
bool QFrame_QBaseEvent(QFrame* self, QEvent* e);
void QFrame_OnPaintEvent(QFrame* self, intptr_t slot);
void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1);
void QFrame_OnChangeEvent(QFrame* self, intptr_t slot);
void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1);
void QFrame_OnInitStyleOption(const QFrame* self, intptr_t slot);
void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option);
void QFrame_DrawFrame(QFrame* self, QPainter* param1);
void QFrame_OnDrawFrame(QFrame* self, intptr_t slot);
void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1);
void QFrame_Delete(QFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
