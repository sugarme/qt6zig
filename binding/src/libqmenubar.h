#pragma once
#ifndef QMENUBAR_H_C_LIB
#define QMENUBAR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMenuBar* QMenuBar_new(QWidget* parent);
QMenuBar* QMenuBar_new2();
libqt_string QMenuBar_Tr(const char* s);
QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu);
QMenu* QMenuBar_AddMenu2(QMenuBar* self, const libqt_string title);
QMenu* QMenuBar_AddMenu3(QMenuBar* self, const QIcon* icon, const libqt_string title);
QAction* QMenuBar_AddSeparator(QMenuBar* self);
QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before);
QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu);
void QMenuBar_Clear(QMenuBar* self);
QAction* QMenuBar_ActiveAction(const QMenuBar* self);
void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action);
void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp);
bool QMenuBar_IsDefaultUp(const QMenuBar* self);
QSize* QMenuBar_SizeHint(const QMenuBar* self);
QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self);
int QMenuBar_HeightForWidth(const QMenuBar* self, int param1);
QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1);
QAction* QMenuBar_ActionAt(const QMenuBar* self, const QPoint* param1);
void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w);
QWidget* QMenuBar_CornerWidget(const QMenuBar* self);
bool QMenuBar_IsNativeMenuBar(const QMenuBar* self);
void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar);
void QMenuBar_SetVisible(QMenuBar* self, bool visible);
void QMenuBar_Triggered(QMenuBar* self, QAction* action);
void QMenuBar_Connect_Triggered(QMenuBar* self, intptr_t slot);
void QMenuBar_Hovered(QMenuBar* self, QAction* action);
void QMenuBar_Connect_Hovered(QMenuBar* self, intptr_t slot);
void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
libqt_string QMenuBar_Tr2(const char* s, const char* c);
libqt_string QMenuBar_Tr3(const char* s, const char* c, int n);
void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner);
QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner);
void QMenuBar_OnSizeHint(const QMenuBar* self, intptr_t slot);
QSize* QMenuBar_QBaseSizeHint(const QMenuBar* self);
void QMenuBar_OnMinimumSizeHint(const QMenuBar* self, intptr_t slot);
QSize* QMenuBar_QBaseMinimumSizeHint(const QMenuBar* self);
void QMenuBar_OnHeightForWidth(const QMenuBar* self, intptr_t slot);
int QMenuBar_QBaseHeightForWidth(const QMenuBar* self, int param1);
void QMenuBar_OnSetVisible(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseSetVisible(QMenuBar* self, bool visible);
void QMenuBar_OnChangeEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_OnKeyPressEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
void QMenuBar_OnMouseReleaseEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnMousePressEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnMouseMoveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
void QMenuBar_OnLeaveEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_OnPaintEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1);
void QMenuBar_OnResizeEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1);
void QMenuBar_OnActionEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1);
void QMenuBar_OnFocusOutEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_OnFocusInEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1);
void QMenuBar_OnTimerEvent(QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1);
void QMenuBar_OnEventFilter(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
void QMenuBar_OnEvent(QMenuBar* self, intptr_t slot);
bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1);
void QMenuBar_OnInitStyleOption(const QMenuBar* self, intptr_t slot);
void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
void QMenuBar_Delete(QMenuBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
