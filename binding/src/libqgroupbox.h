#pragma once
#ifndef QGROUPBOX_H_C_LIB
#define QGROUPBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGroupBox QGroupBox;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionGroupBox QStyleOptionGroupBox;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGroupBox* QGroupBox_new(QWidget* parent);
QGroupBox* QGroupBox_new2();
QGroupBox* QGroupBox_new3(const libqt_string title);
QGroupBox* QGroupBox_new4(const libqt_string title, QWidget* parent);
libqt_string QGroupBox_Tr(const char* s);
libqt_string QGroupBox_Title(const QGroupBox* self);
void QGroupBox_SetTitle(QGroupBox* self, const libqt_string title);
int QGroupBox_Alignment(const QGroupBox* self);
void QGroupBox_SetAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self);
bool QGroupBox_IsFlat(const QGroupBox* self);
void QGroupBox_SetFlat(QGroupBox* self, bool flat);
bool QGroupBox_IsCheckable(const QGroupBox* self);
void QGroupBox_SetCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_IsChecked(const QGroupBox* self);
void QGroupBox_SetChecked(QGroupBox* self, bool checked);
void QGroupBox_Clicked(QGroupBox* self);
void QGroupBox_Connect_Clicked(QGroupBox* self, intptr_t slot);
void QGroupBox_Toggled(QGroupBox* self, bool param1);
void QGroupBox_Connect_Toggled(QGroupBox* self, intptr_t slot);
bool QGroupBox_Event(QGroupBox* self, QEvent* event);
void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
libqt_string QGroupBox_Tr2(const char* s, const char* c);
libqt_string QGroupBox_Tr3(const char* s, const char* c, int n);
void QGroupBox_Clicked1(QGroupBox* self, bool checked);
void QGroupBox_Connect_Clicked1(QGroupBox* self, intptr_t slot);
void QGroupBox_OnMinimumSizeHint(const QGroupBox* self, intptr_t slot);
QSize* QGroupBox_QBaseMinimumSizeHint(const QGroupBox* self);
void QGroupBox_OnEvent(QGroupBox* self, intptr_t slot);
bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event);
void QGroupBox_OnChildEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_OnResizeEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_OnPaintEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_OnFocusInEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_OnChangeEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_OnMousePressEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMouseMoveEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnMouseReleaseEvent(QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_OnInitStyleOption(const QGroupBox* self, intptr_t slot);
void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
void QGroupBox_Delete(QGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
