#pragma once
#ifndef QPROGRESSBAR_H_C_LIB
#define QPROGRESSBAR_H_C_LIB

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
typedef struct QPaintEvent QPaintEvent;
typedef struct QProgressBar QProgressBar;
typedef struct QSize QSize;
typedef struct QStyleOptionProgressBar QStyleOptionProgressBar;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QProgressBar* QProgressBar_new(QWidget* parent);
QProgressBar* QProgressBar_new2();
libqt_string QProgressBar_Tr(const char* s);
int QProgressBar_Minimum(const QProgressBar* self);
int QProgressBar_Maximum(const QProgressBar* self);
int QProgressBar_Value(const QProgressBar* self);
libqt_string QProgressBar_Text(const QProgressBar* self);
void QProgressBar_SetTextVisible(QProgressBar* self, bool visible);
bool QProgressBar_IsTextVisible(const QProgressBar* self);
int QProgressBar_Alignment(const QProgressBar* self);
void QProgressBar_SetAlignment(QProgressBar* self, int alignment);
QSize* QProgressBar_SizeHint(const QProgressBar* self);
QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self);
int QProgressBar_Orientation(const QProgressBar* self);
void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert);
bool QProgressBar_InvertedAppearance(const QProgressBar* self);
void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection);
int QProgressBar_TextDirection(const QProgressBar* self);
void QProgressBar_SetFormat(QProgressBar* self, const libqt_string format);
void QProgressBar_ResetFormat(QProgressBar* self);
libqt_string QProgressBar_Format(const QProgressBar* self);
void QProgressBar_Reset(QProgressBar* self);
void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum);
void QProgressBar_SetMinimum(QProgressBar* self, int minimum);
void QProgressBar_SetMaximum(QProgressBar* self, int maximum);
void QProgressBar_SetValue(QProgressBar* self, int value);
void QProgressBar_SetOrientation(QProgressBar* self, int orientation);
void QProgressBar_ValueChanged(QProgressBar* self, int value);
void QProgressBar_Connect_ValueChanged(QProgressBar* self, intptr_t slot);
bool QProgressBar_Event(QProgressBar* self, QEvent* e);
void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1);
void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
libqt_string QProgressBar_Tr2(const char* s, const char* c);
libqt_string QProgressBar_Tr3(const char* s, const char* c, int n);
void QProgressBar_OnText(const QProgressBar* self, intptr_t slot);
libqt_string QProgressBar_QBaseText(const QProgressBar* self);
void QProgressBar_OnSizeHint(const QProgressBar* self, intptr_t slot);
QSize* QProgressBar_QBaseSizeHint(const QProgressBar* self);
void QProgressBar_OnMinimumSizeHint(const QProgressBar* self, intptr_t slot);
QSize* QProgressBar_QBaseMinimumSizeHint(const QProgressBar* self);
void QProgressBar_OnEvent(QProgressBar* self, intptr_t slot);
bool QProgressBar_QBaseEvent(QProgressBar* self, QEvent* e);
void QProgressBar_OnPaintEvent(QProgressBar* self, intptr_t slot);
void QProgressBar_QBasePaintEvent(QProgressBar* self, QPaintEvent* param1);
void QProgressBar_OnInitStyleOption(const QProgressBar* self, intptr_t slot);
void QProgressBar_QBaseInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
void QProgressBar_Delete(QProgressBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
