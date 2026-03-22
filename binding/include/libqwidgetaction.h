#pragma once
#ifndef QWIDGETACTION_H_C_LIB
#define QWIDGETACTION_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWidgetAction* QWidgetAction_new(QObject* parent);
libqt_string QWidgetAction_Tr(const char* s);
void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w);
QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self);
QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget);
bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1);
bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget);
libqt_string QWidgetAction_Tr2(const char* s, const char* c);
libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n);
void QWidgetAction_OnEvent(QWidgetAction* self, intptr_t slot);
bool QWidgetAction_QBaseEvent(QWidgetAction* self, QEvent* param1);
void QWidgetAction_OnEventFilter(QWidgetAction* self, intptr_t slot);
bool QWidgetAction_QBaseEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2);
void QWidgetAction_OnCreateWidget(QWidgetAction* self, intptr_t slot);
QWidget* QWidgetAction_QBaseCreateWidget(QWidgetAction* self, QWidget* parent);
void QWidgetAction_OnDeleteWidget(QWidgetAction* self, intptr_t slot);
void QWidgetAction_QBaseDeleteWidget(QWidgetAction* self, QWidget* widget);
libqt_list QWidgetAction_CreatedWidgets(const QWidgetAction* self);
void QWidgetAction_OnCreatedWidgets(const QWidgetAction* self, intptr_t slot);
libqt_list QWidgetAction_QBaseCreatedWidgets(const QWidgetAction* self);
void QWidgetAction_Delete(QWidgetAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
