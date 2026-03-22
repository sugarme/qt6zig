#pragma once
#ifndef QMDIAREA_H_C_LIB
#define QMDIAREA_H_C_LIB

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
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMdiArea QMdiArea;
typedef struct QMdiSubWindow QMdiSubWindow;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMdiArea* QMdiArea_new(QWidget* parent);
QMdiArea* QMdiArea_new2();
libqt_string QMdiArea_Tr(const char* s);
QSize* QMdiArea_SizeHint(const QMdiArea* self);
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self);
QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self);
QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self);
libqt_list QMdiArea_SubWindowList(const QMdiArea* self);
QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget);
void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget);
QBrush* QMdiArea_Background(const QMdiArea* self);
void QMdiArea_SetBackground(QMdiArea* self, const QBrush* background);
int QMdiArea_ActivationOrder(const QMdiArea* self);
void QMdiArea_SetActivationOrder(QMdiArea* self, int order);
void QMdiArea_SetOption(QMdiArea* self, int option);
bool QMdiArea_TestOption(const QMdiArea* self, int opton);
void QMdiArea_SetViewMode(QMdiArea* self, int mode);
int QMdiArea_ViewMode(const QMdiArea* self);
bool QMdiArea_DocumentMode(const QMdiArea* self);
void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled);
void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable);
bool QMdiArea_TabsClosable(const QMdiArea* self);
void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable);
bool QMdiArea_TabsMovable(const QMdiArea* self);
void QMdiArea_SetTabShape(QMdiArea* self, int shape);
int QMdiArea_TabShape(const QMdiArea* self);
void QMdiArea_SetTabPosition(QMdiArea* self, int position);
int QMdiArea_TabPosition(const QMdiArea* self);
void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1);
void QMdiArea_Connect_SubWindowActivated(QMdiArea* self, intptr_t slot);
void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window);
void QMdiArea_TileSubWindows(QMdiArea* self);
void QMdiArea_CascadeSubWindows(QMdiArea* self);
void QMdiArea_CloseActiveSubWindow(QMdiArea* self);
void QMdiArea_CloseAllSubWindows(QMdiArea* self);
void QMdiArea_ActivateNextSubWindow(QMdiArea* self);
void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self);
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport);
bool QMdiArea_Event(QMdiArea* self, QEvent* event);
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent);
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy);
libqt_string QMdiArea_Tr2(const char* s, const char* c);
libqt_string QMdiArea_Tr3(const char* s, const char* c, int n);
libqt_list QMdiArea_SubWindowList1(const QMdiArea* self, int order);
QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags);
void QMdiArea_SetOption2(QMdiArea* self, int option, bool on);
void QMdiArea_OnSizeHint(const QMdiArea* self, intptr_t slot);
QSize* QMdiArea_QBaseSizeHint(const QMdiArea* self);
void QMdiArea_OnMinimumSizeHint(const QMdiArea* self, intptr_t slot);
QSize* QMdiArea_QBaseMinimumSizeHint(const QMdiArea* self);
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport);
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event);
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event);
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent);
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent);
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot);
bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event);
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot);
void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy);
void QMdiArea_Delete(QMdiArea* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
