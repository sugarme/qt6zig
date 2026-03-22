#pragma once
#ifndef QSCROLLAREA_H_C_LIB
#define QSCROLLAREA_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollArea QScrollArea;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QScrollArea* QScrollArea_new(QWidget* parent);
QScrollArea* QScrollArea_new2();
libqt_string QScrollArea_Tr(const char* s);
QWidget* QScrollArea_Widget(const QScrollArea* self);
void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget);
QWidget* QScrollArea_TakeWidget(QScrollArea* self);
bool QScrollArea_WidgetResizable(const QScrollArea* self);
void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable);
QSize* QScrollArea_SizeHint(const QScrollArea* self);
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next);
int QScrollArea_Alignment(const QScrollArea* self);
void QScrollArea_SetAlignment(QScrollArea* self, int alignment);
void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y);
void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget);
bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
libqt_string QScrollArea_Tr2(const char* s, const char* c);
libqt_string QScrollArea_Tr3(const char* s, const char* c, int n);
void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin);
void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin);
void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin);
void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin);
void QScrollArea_OnSizeHint(const QScrollArea* self, intptr_t slot);
QSize* QScrollArea_QBaseSizeHint(const QScrollArea* self);
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseFocusNextPrevChild(QScrollArea* self, bool next);
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1);
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot);
bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1);
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot);
void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy);
void QScrollArea_OnViewportSizeHint(const QScrollArea* self, intptr_t slot);
QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self);
void QScrollArea_Delete(QScrollArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
