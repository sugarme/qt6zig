#pragma once
#ifndef QSPLITTER_H_C_LIB
#define QSPLITTER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFrame QFrame;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QSplitter QSplitter;
typedef struct QSplitterHandle QSplitterHandle;
typedef struct QTextStream QTextStream;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QSplitter* QSplitter_new(QWidget* parent);
QSplitter* QSplitter_new2();
QSplitter* QSplitter_new3(int param1);
QSplitter* QSplitter_new4(int param1, QWidget* parent);
libqt_string QSplitter_Tr(const char* s);
void QSplitter_AddWidget(QSplitter* self, QWidget* widget);
void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget);
QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget);
void QSplitter_SetOrientation(QSplitter* self, int orientation);
int QSplitter_Orientation(const QSplitter* self);
void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible);
bool QSplitter_ChildrenCollapsible(const QSplitter* self);
void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2);
bool QSplitter_IsCollapsible(const QSplitter* self, int index);
void QSplitter_SetOpaqueResize(QSplitter* self);
bool QSplitter_OpaqueResize(const QSplitter* self);
void QSplitter_Refresh(QSplitter* self);
QSize* QSplitter_SizeHint(const QSplitter* self);
QSize* QSplitter_MinimumSizeHint(const QSplitter* self);
libqt_list QSplitter_Sizes(const QSplitter* self);
void QSplitter_SetSizes(QSplitter* self, const libqt_list list);
libqt_string QSplitter_SaveState(const QSplitter* self);
bool QSplitter_RestoreState(QSplitter* self, const libqt_string state);
int QSplitter_HandleWidth(const QSplitter* self);
void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth);
int QSplitter_IndexOf(const QSplitter* self, QWidget* w);
QWidget* QSplitter_Widget(const QSplitter* self, int index);
int QSplitter_Count(const QSplitter* self);
void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3);
QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index);
void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch);
void QSplitter_SplitterMoved(QSplitter* self, int pos, int index);
void QSplitter_Connect_SplitterMoved(QSplitter* self, intptr_t slot);
QSplitterHandle* QSplitter_CreateHandle(QSplitter* self);
void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1);
bool QSplitter_Event(QSplitter* self, QEvent* param1);
void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1);
void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1);
libqt_string QSplitter_Tr2(const char* s, const char* c);
libqt_string QSplitter_Tr3(const char* s, const char* c, int n);
void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaqueVal);
void QSplitter_OnSizeHint(const QSplitter* self, intptr_t slot);
QSize* QSplitter_QBaseSizeHint(const QSplitter* self);
void QSplitter_OnMinimumSizeHint(const QSplitter* self, intptr_t slot);
QSize* QSplitter_QBaseMinimumSizeHint(const QSplitter* self);
void QSplitter_OnCreateHandle(QSplitter* self, intptr_t slot);
QSplitterHandle* QSplitter_QBaseCreateHandle(QSplitter* self);
void QSplitter_OnChildEvent(QSplitter* self, intptr_t slot);
void QSplitter_QBaseChildEvent(QSplitter* self, QChildEvent* param1);
void QSplitter_OnEvent(QSplitter* self, intptr_t slot);
bool QSplitter_QBaseEvent(QSplitter* self, QEvent* param1);
void QSplitter_OnResizeEvent(QSplitter* self, intptr_t slot);
void QSplitter_QBaseResizeEvent(QSplitter* self, QResizeEvent* param1);
void QSplitter_OnChangeEvent(QSplitter* self, intptr_t slot);
void QSplitter_QBaseChangeEvent(QSplitter* self, QEvent* param1);
void QSplitter_MoveSplitter(QSplitter* self, int pos, int index);
void QSplitter_OnMoveSplitter(QSplitter* self, intptr_t slot);
void QSplitter_QBaseMoveSplitter(QSplitter* self, int pos, int index);
void QSplitter_SetRubberBand(QSplitter* self, int position);
void QSplitter_OnSetRubberBand(QSplitter* self, intptr_t slot);
void QSplitter_QBaseSetRubberBand(QSplitter* self, int position);
int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2);
void QSplitter_OnClosestLegalPosition(QSplitter* self, intptr_t slot);
int QSplitter_QBaseClosestLegalPosition(QSplitter* self, int param1, int param2);
void QSplitter_Delete(QSplitter* self);

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent);
libqt_string QSplitterHandle_Tr(const char* s);
void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o);
int QSplitterHandle_Orientation(const QSplitterHandle* self);
bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self);
QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self);
QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self);
void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1);
void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1);
libqt_string QSplitterHandle_Tr2(const char* s, const char* c);
libqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n);
void QSplitterHandle_OnSizeHint(const QSplitterHandle* self, intptr_t slot);
QSize* QSplitterHandle_QBaseSizeHint(const QSplitterHandle* self);
void QSplitterHandle_OnPaintEvent(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBasePaintEvent(QSplitterHandle* self, QPaintEvent* param1);
void QSplitterHandle_OnMouseMoveEvent(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBaseMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_OnMousePressEvent(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBaseMousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_OnMouseReleaseEvent(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBaseMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
void QSplitterHandle_OnResizeEvent(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBaseResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
void QSplitterHandle_OnEvent(QSplitterHandle* self, intptr_t slot);
bool QSplitterHandle_QBaseEvent(QSplitterHandle* self, QEvent* param1);
void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p);
void QSplitterHandle_OnMoveSplitter(QSplitterHandle* self, intptr_t slot);
void QSplitterHandle_QBaseMoveSplitter(QSplitterHandle* self, int p);
int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p);
void QSplitterHandle_OnClosestLegalPosition(QSplitterHandle* self, intptr_t slot);
int QSplitterHandle_QBaseClosestLegalPosition(QSplitterHandle* self, int p);
void QSplitterHandle_Delete(QSplitterHandle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
