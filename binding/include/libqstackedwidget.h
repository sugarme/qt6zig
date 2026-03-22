#pragma once
#ifndef QSTACKEDWIDGET_H_C_LIB
#define QSTACKEDWIDGET_H_C_LIB

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
typedef struct QFrame QFrame;
typedef struct QStackedWidget QStackedWidget;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QStackedWidget* QStackedWidget_new(QWidget* parent);
QStackedWidget* QStackedWidget_new2();
libqt_string QStackedWidget_Tr(const char* s);
int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self);
int QStackedWidget_CurrentIndex(const QStackedWidget* self);
int QStackedWidget_IndexOf(const QStackedWidget* self, const QWidget* param1);
QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1);
int QStackedWidget_Count(const QStackedWidget* self);
void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1);
void QStackedWidget_Connect_CurrentChanged(QStackedWidget* self, intptr_t slot);
void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
libqt_string QStackedWidget_Tr2(const char* s, const char* c);
libqt_string QStackedWidget_Tr3(const char* s, const char* c, int n);
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot);
bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e);
void QStackedWidget_Delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
