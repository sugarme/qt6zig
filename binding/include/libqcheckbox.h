#pragma once
#ifndef QCHECKBOX_H_C_LIB
#define QCHECKBOX_H_C_LIB

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
typedef struct QCheckBox QCheckBox;
typedef struct QEvent QEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCheckBox* QCheckBox_new(QWidget* parent);
QCheckBox* QCheckBox_new2();
QCheckBox* QCheckBox_new3(const libqt_string text);
QCheckBox* QCheckBox_new4(const libqt_string text, QWidget* parent);
libqt_string QCheckBox_Tr(const char* s);
QSize* QCheckBox_SizeHint(const QCheckBox* self);
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self);
void QCheckBox_SetTristate(QCheckBox* self);
bool QCheckBox_IsTristate(const QCheckBox* self);
int QCheckBox_CheckState(const QCheckBox* self);
void QCheckBox_SetCheckState(QCheckBox* self, int state);
void QCheckBox_StateChanged(QCheckBox* self, int param1);
void QCheckBox_Connect_StateChanged(QCheckBox* self, intptr_t slot);
void QCheckBox_CheckStateChanged(QCheckBox* self, int param1);
void QCheckBox_Connect_CheckStateChanged(QCheckBox* self, intptr_t slot);
bool QCheckBox_Event(QCheckBox* self, QEvent* e);
bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos);
void QCheckBox_CheckStateSet(QCheckBox* self);
void QCheckBox_NextCheckState(QCheckBox* self);
void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
libqt_string QCheckBox_Tr2(const char* s, const char* c);
libqt_string QCheckBox_Tr3(const char* s, const char* c, int n);
void QCheckBox_SetTristate1(QCheckBox* self, bool y);
void QCheckBox_OnSizeHint(const QCheckBox* self, intptr_t slot);
QSize* QCheckBox_QBaseSizeHint(const QCheckBox* self);
void QCheckBox_OnMinimumSizeHint(const QCheckBox* self, intptr_t slot);
QSize* QCheckBox_QBaseMinimumSizeHint(const QCheckBox* self);
void QCheckBox_OnEvent(QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseEvent(QCheckBox* self, QEvent* e);
void QCheckBox_OnHitButton(const QCheckBox* self, intptr_t slot);
bool QCheckBox_QBaseHitButton(const QCheckBox* self, const QPoint* pos);
void QCheckBox_OnCheckStateSet(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseCheckStateSet(QCheckBox* self);
void QCheckBox_OnNextCheckState(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseNextCheckState(QCheckBox* self);
void QCheckBox_OnPaintEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBasePaintEvent(QCheckBox* self, QPaintEvent* param1);
void QCheckBox_OnMouseMoveEvent(QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
void QCheckBox_OnInitStyleOption(const QCheckBox* self, intptr_t slot);
void QCheckBox_QBaseInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
void QCheckBox_Delete(QCheckBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
