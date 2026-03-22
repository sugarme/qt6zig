#pragma once
#ifndef QTOOLBUTTON_H_C_LIB
#define QTOOLBUTTON_H_C_LIB

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
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QTimerEvent QTimerEvent;
typedef struct QToolButton QToolButton;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QToolButton* QToolButton_new(QWidget* parent);
QToolButton* QToolButton_new2();
libqt_string QToolButton_Tr(const char* s);
QSize* QToolButton_SizeHint(const QToolButton* self);
QSize* QToolButton_MinimumSizeHint(const QToolButton* self);
int QToolButton_ToolButtonStyle(const QToolButton* self);
int QToolButton_ArrowType(const QToolButton* self);
void QToolButton_SetArrowType(QToolButton* self, int typeVal);
void QToolButton_SetMenu(QToolButton* self, QMenu* menu);
QMenu* QToolButton_Menu(const QToolButton* self);
void QToolButton_SetPopupMode(QToolButton* self, int mode);
int QToolButton_PopupMode(const QToolButton* self);
QAction* QToolButton_DefaultAction(const QToolButton* self);
void QToolButton_SetAutoRaise(QToolButton* self, bool enable);
bool QToolButton_AutoRaise(const QToolButton* self);
void QToolButton_ShowMenu(QToolButton* self);
void QToolButton_SetToolButtonStyle(QToolButton* self, int style);
void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction);
void QToolButton_Triggered(QToolButton* self, QAction* param1);
void QToolButton_Connect_Triggered(QToolButton* self, intptr_t slot);
bool QToolButton_Event(QToolButton* self, QEvent* e);
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1);
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1);
bool QToolButton_HitButton(const QToolButton* self, const QPoint* pos);
void QToolButton_CheckStateSet(QToolButton* self);
void QToolButton_NextCheckState(QToolButton* self);
void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
libqt_string QToolButton_Tr2(const char* s, const char* c);
libqt_string QToolButton_Tr3(const char* s, const char* c, int n);
void QToolButton_OnSizeHint(const QToolButton* self, intptr_t slot);
QSize* QToolButton_QBaseSizeHint(const QToolButton* self);
void QToolButton_OnMinimumSizeHint(const QToolButton* self, intptr_t slot);
QSize* QToolButton_QBaseMinimumSizeHint(const QToolButton* self);
void QToolButton_OnEvent(QToolButton* self, intptr_t slot);
bool QToolButton_QBaseEvent(QToolButton* self, QEvent* e);
void QToolButton_OnMousePressEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMousePressEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_OnMouseReleaseEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseMouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
void QToolButton_OnPaintEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBasePaintEvent(QToolButton* self, QPaintEvent* param1);
void QToolButton_OnActionEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseActionEvent(QToolButton* self, QActionEvent* param1);
void QToolButton_OnEnterEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseEnterEvent(QToolButton* self, QEnterEvent* param1);
void QToolButton_OnLeaveEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseLeaveEvent(QToolButton* self, QEvent* param1);
void QToolButton_OnTimerEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseTimerEvent(QToolButton* self, QTimerEvent* param1);
void QToolButton_OnChangeEvent(QToolButton* self, intptr_t slot);
void QToolButton_QBaseChangeEvent(QToolButton* self, QEvent* param1);
void QToolButton_OnHitButton(const QToolButton* self, intptr_t slot);
bool QToolButton_QBaseHitButton(const QToolButton* self, const QPoint* pos);
void QToolButton_OnCheckStateSet(QToolButton* self, intptr_t slot);
void QToolButton_QBaseCheckStateSet(QToolButton* self);
void QToolButton_OnNextCheckState(QToolButton* self, intptr_t slot);
void QToolButton_QBaseNextCheckState(QToolButton* self);
void QToolButton_OnInitStyleOption(const QToolButton* self, intptr_t slot);
void QToolButton_QBaseInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
void QToolButton_Delete(QToolButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
