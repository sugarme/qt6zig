#pragma once
#ifndef QTOOLBAR_H_C_LIB
#define QTOOLBAR_H_C_LIB

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
typedef struct QIcon QIcon;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QToolBar QToolBar;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





QToolBar* QToolBar_new(QWidget* parent);
QToolBar* QToolBar_new2(const libqt_string title);
QToolBar* QToolBar_new3();
QToolBar* QToolBar_new4(const libqt_string title, QWidget* parent);
libqt_string QToolBar_Tr(const char* s);
void QToolBar_SetMovable(QToolBar* self, bool movable);
bool QToolBar_IsMovable(const QToolBar* self);
void QToolBar_SetAllowedAreas(QToolBar* self, int areas);
int QToolBar_AllowedAreas(const QToolBar* self);
bool QToolBar_IsAreaAllowed(const QToolBar* self, int area);
void QToolBar_SetOrientation(QToolBar* self, int orientation);
int QToolBar_Orientation(const QToolBar* self);
void QToolBar_Clear(QToolBar* self);
QAction* QToolBar_AddSeparator(QToolBar* self);
QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before);
QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget);
QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget);
QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action);
QAction* QToolBar_ActionAt(const QToolBar* self, const QPoint* p);
QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y);
QAction* QToolBar_ToggleViewAction(const QToolBar* self);
QSize* QToolBar_IconSize(const QToolBar* self);
int QToolBar_ToolButtonStyle(const QToolBar* self);
QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action);
bool QToolBar_IsFloatable(const QToolBar* self);
void QToolBar_SetFloatable(QToolBar* self, bool floatable);
bool QToolBar_IsFloating(const QToolBar* self);
void QToolBar_SetIconSize(QToolBar* self, const QSize* iconSize);
void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle);
void QToolBar_ActionTriggered(QToolBar* self, QAction* action);
void QToolBar_Connect_ActionTriggered(QToolBar* self, intptr_t slot);
void QToolBar_MovableChanged(QToolBar* self, bool movable);
void QToolBar_Connect_MovableChanged(QToolBar* self, intptr_t slot);
void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas);
void QToolBar_Connect_AllowedAreasChanged(QToolBar* self, intptr_t slot);
void QToolBar_OrientationChanged(QToolBar* self, int orientation);
void QToolBar_Connect_OrientationChanged(QToolBar* self, intptr_t slot);
void QToolBar_IconSizeChanged(QToolBar* self, const QSize* iconSize);
void QToolBar_Connect_IconSizeChanged(QToolBar* self, intptr_t slot);
void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle);
void QToolBar_Connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot);
void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel);
void QToolBar_Connect_TopLevelChanged(QToolBar* self, intptr_t slot);
void QToolBar_VisibilityChanged(QToolBar* self, bool visible);
void QToolBar_Connect_VisibilityChanged(QToolBar* self, intptr_t slot);
void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event);
void QToolBar_ChangeEvent(QToolBar* self, QEvent* event);
void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event);
bool QToolBar_Event(QToolBar* self, QEvent* event);
void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
libqt_string QToolBar_Tr2(const char* s, const char* c);
libqt_string QToolBar_Tr3(const char* s, const char* c, int n);
void QToolBar_OnActionEvent(QToolBar* self, intptr_t slot);
void QToolBar_QBaseActionEvent(QToolBar* self, QActionEvent* event);
void QToolBar_OnChangeEvent(QToolBar* self, intptr_t slot);
void QToolBar_QBaseChangeEvent(QToolBar* self, QEvent* event);
void QToolBar_OnPaintEvent(QToolBar* self, intptr_t slot);
void QToolBar_QBasePaintEvent(QToolBar* self, QPaintEvent* event);
void QToolBar_OnEvent(QToolBar* self, intptr_t slot);
bool QToolBar_QBaseEvent(QToolBar* self, QEvent* event);
void QToolBar_OnInitStyleOption(const QToolBar* self, intptr_t slot);
void QToolBar_QBaseInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
void QToolBar_Delete(QToolBar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
