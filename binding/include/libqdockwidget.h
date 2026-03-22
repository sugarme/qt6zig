#pragma once
#ifndef QDOCKWIDGET_H_C_LIB
#define QDOCKWIDGET_H_C_LIB

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
typedef struct QCloseEvent QCloseEvent;
typedef struct QDockWidget QDockWidget;
typedef struct QEvent QEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QStyleOptionDockWidget QStyleOptionDockWidget;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDockWidget* QDockWidget_new(QWidget* parent);
QDockWidget* QDockWidget_new2(const libqt_string title);
QDockWidget* QDockWidget_new3();
QDockWidget* QDockWidget_new4(const libqt_string title, QWidget* parent);
QDockWidget* QDockWidget_new5(const libqt_string title, QWidget* parent, int flags);
QDockWidget* QDockWidget_new6(QWidget* parent, int flags);
libqt_string QDockWidget_Tr(const char* s);
QWidget* QDockWidget_Widget(const QDockWidget* self);
void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget);
void QDockWidget_SetFeatures(QDockWidget* self, int features);
int QDockWidget_Features(const QDockWidget* self);
void QDockWidget_SetFloating(QDockWidget* self, bool floating);
bool QDockWidget_IsFloating(const QDockWidget* self);
void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas);
int QDockWidget_AllowedAreas(const QDockWidget* self);
void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget);
QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self);
bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area);
QAction* QDockWidget_ToggleViewAction(const QDockWidget* self);
void QDockWidget_FeaturesChanged(QDockWidget* self, int features);
void QDockWidget_Connect_FeaturesChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel);
void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas);
void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible);
void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_DockLocationChanged(QDockWidget* self, int area);
void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot);
void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event);
void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event);
void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event);
bool QDockWidget_Event(QDockWidget* self, QEvent* event);
void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
libqt_string QDockWidget_Tr2(const char* s, const char* c);
libqt_string QDockWidget_Tr3(const char* s, const char* c, int n);
void QDockWidget_OnChangeEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseChangeEvent(QDockWidget* self, QEvent* event);
void QDockWidget_OnCloseEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseCloseEvent(QDockWidget* self, QCloseEvent* event);
void QDockWidget_OnPaintEvent(QDockWidget* self, intptr_t slot);
void QDockWidget_QBasePaintEvent(QDockWidget* self, QPaintEvent* event);
void QDockWidget_OnEvent(QDockWidget* self, intptr_t slot);
bool QDockWidget_QBaseEvent(QDockWidget* self, QEvent* event);
void QDockWidget_OnInitStyleOption(const QDockWidget* self, intptr_t slot);
void QDockWidget_QBaseInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
void QDockWidget_Delete(QDockWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
