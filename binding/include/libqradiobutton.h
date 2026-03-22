#pragma once
#ifndef QRADIOBUTTON_H_C_LIB
#define QRADIOBUTTON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QEvent QEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRadioButton QRadioButton;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QRadioButton* QRadioButton_new(QWidget* parent);
QRadioButton* QRadioButton_new2();
QRadioButton* QRadioButton_new3(const libqt_string text);
QRadioButton* QRadioButton_new4(const libqt_string text, QWidget* parent);
libqt_string QRadioButton_Tr(const char* s);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
bool QRadioButton_Event(QRadioButton* self, QEvent* e);
bool QRadioButton_HitButton(const QRadioButton* self, const QPoint* param1);
void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
libqt_string QRadioButton_Tr2(const char* s, const char* c);
libqt_string QRadioButton_Tr3(const char* s, const char* c, int n);
void QRadioButton_OnSizeHint(const QRadioButton* self, intptr_t slot);
QSize* QRadioButton_QBaseSizeHint(const QRadioButton* self);
void QRadioButton_OnMinimumSizeHint(const QRadioButton* self, intptr_t slot);
QSize* QRadioButton_QBaseMinimumSizeHint(const QRadioButton* self);
void QRadioButton_OnEvent(QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseEvent(QRadioButton* self, QEvent* e);
void QRadioButton_OnHitButton(const QRadioButton* self, intptr_t slot);
bool QRadioButton_QBaseHitButton(const QRadioButton* self, const QPoint* param1);
void QRadioButton_OnPaintEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBasePaintEvent(QRadioButton* self, QPaintEvent* param1);
void QRadioButton_OnMouseMoveEvent(QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseMouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
void QRadioButton_OnInitStyleOption(const QRadioButton* self, intptr_t slot);
void QRadioButton_QBaseInitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
