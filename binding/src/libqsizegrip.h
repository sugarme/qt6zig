#pragma once
#ifndef QSIZEGRIP_H_C_LIB
#define QSIZEGRIP_H_C_LIB

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
typedef struct QHideEvent QHideEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizeGrip QSizeGrip;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSizeGrip* QSizeGrip_new(QWidget* parent);
libqt_string QSizeGrip_Tr(const char* s);
QSize* QSizeGrip_SizeHint(const QSizeGrip* self);
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent);
bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1);
libqt_string QSizeGrip_Tr2(const char* s, const char* c);
libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n);
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot);
QSize* QSizeGrip_QBaseSizeHint(const QSizeGrip* self);
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseSetVisible(QSizeGrip* self, bool visible);
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBasePaintEvent(QSizeGrip* self, QPaintEvent* param1);
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseMousePressEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseShowEvent(QSizeGrip* self, QShowEvent* showEvent);
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot);
void QSizeGrip_QBaseHideEvent(QSizeGrip* self, QHideEvent* hideEvent);
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_QBaseEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot);
bool QSizeGrip_QBaseEvent(QSizeGrip* self, QEvent* param1);
void QSizeGrip_Delete(QSizeGrip* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
