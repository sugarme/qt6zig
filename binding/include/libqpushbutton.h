#pragma once
#ifndef QPUSHBUTTON_H_C_LIB
#define QPUSHBUTTON_H_C_LIB

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
typedef struct QFocusEvent QFocusEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(const libqt_string text);
QPushButton* QPushButton_new4(const QIcon* icon, const libqt_string text);
QPushButton* QPushButton_new5(const libqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(const QIcon* icon, const libqt_string text, QWidget* parent);
libqt_string QPushButton_Tr(const char* s);
QSize* QPushButton_SizeHint(const QPushButton* self);
QSize* QPushButton_MinimumSizeHint(const QPushButton* self);
bool QPushButton_AutoDefault(const QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(const QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(const QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(const QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
bool QPushButton_Event(QPushButton* self, QEvent* e);
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1);
void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option);
bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos);
libqt_string QPushButton_Tr2(const char* s, const char* c);
libqt_string QPushButton_Tr3(const char* s, const char* c, int n);
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot);
QSize* QPushButton_QBaseSizeHint(const QPushButton* self);
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot);
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self);
void QPushButton_OnEvent(QPushButton* self, intptr_t slot);
bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e);
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1);
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1);
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1);
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot);
void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
void QPushButton_OnInitStyleOption(const QPushButton* self, intptr_t slot);
void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
void QPushButton_OnHitButton(const QPushButton* self, intptr_t slot);
bool QPushButton_QBaseHitButton(const QPushButton* self, const QPoint* pos);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
