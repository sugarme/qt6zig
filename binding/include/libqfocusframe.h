#pragma once
#ifndef QFOCUSFRAME_H_C_LIB
#define QFOCUSFRAME_H_C_LIB

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
typedef struct QFocusFrame QFocusFrame;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QStyleOption QStyleOption;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFocusFrame* QFocusFrame_new(QWidget* parent);
QFocusFrame* QFocusFrame_new2();
libqt_string QFocusFrame_Tr(const char* s);
void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget);
QWidget* QFocusFrame_Widget(const QFocusFrame* self);
bool QFocusFrame_Event(QFocusFrame* self, QEvent* e);
bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1);
void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option);
libqt_string QFocusFrame_Tr2(const char* s, const char* c);
libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n);
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e);
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot);
bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1);
void QFocusFrame_OnInitStyleOption(const QFocusFrame* self, intptr_t slot);
void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option);
void QFocusFrame_Delete(QFocusFrame* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
