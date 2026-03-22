#pragma once
#ifndef QGRAPHICSWIDGET_H_C_LIB
#define QGRAPHICSWIDGET_H_C_LIB

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
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMarginsF QMarginsF;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QGraphicsWidget* QGraphicsWidget_new();
QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent);
QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags);
libqt_string QGraphicsWidget_Tr(const char* s);
QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout);
void QGraphicsWidget_AdjustSize(QGraphicsWidget* self);
int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self);
void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction);
void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self);
QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self);
void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style);
QFont* QGraphicsWidget_Font(const QGraphicsWidget* self);
void QGraphicsWidget_SetFont(QGraphicsWidget* self, const QFont* font);
QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self);
void QGraphicsWidget_SetPalette(QGraphicsWidget* self, const QPalette* palette);
bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self);
void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled);
void QGraphicsWidget_Resize(QGraphicsWidget* self, const QSizeF* size);
void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h);
QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self);
void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, const QRectF* rect);
void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h);
QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self);
void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetContentsMargins2(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_SetWindowFrameMargins2(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self);
QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self);
int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self);
int QGraphicsWidget_WindowType(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags);
bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self);
void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, const libqt_string title);
libqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self);
int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self);
void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy);
void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second);
QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self);
int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, const QKeySequence* sequence);
void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id);
void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id);
void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action);
void QGraphicsWidget_AddActions(QGraphicsWidget* self, const libqt_list actions);
void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, const libqt_list actions);
void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action);
void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action);
libqt_list QGraphicsWidget_Actions(const QGraphicsWidget* self);
void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute);
bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute);
int QGraphicsWidget_Type(const QGraphicsWidget* self);
void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self);
QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self);
void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self);
void QGraphicsWidget_Connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self);
void QGraphicsWidget_Connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_Close(QGraphicsWidget* self);
void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self);
QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, const QVariant* value);
QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event);
bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e);
int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_PolishEvent(QGraphicsWidget* self);
void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
libqt_string QGraphicsWidget_Tr2(const char* s, const char* c);
libqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n);
int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, const QKeySequence* sequence, int context);
void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on);
void QGraphicsWidget_OnSetGeometry(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseSetGeometry(QGraphicsWidget* self, const QRectF* rect);
void QGraphicsWidget_OnGetContentsMargins(const QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_OnType(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseType(const QGraphicsWidget* self);
void QGraphicsWidget_OnPaint(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePaint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_OnPaintWindowFrame(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_OnBoundingRect(const QGraphicsWidget* self, intptr_t slot);
QRectF* QGraphicsWidget_QBaseBoundingRect(const QGraphicsWidget* self);
void QGraphicsWidget_OnShape(const QGraphicsWidget* self, intptr_t slot);
QPainterPath* QGraphicsWidget_QBaseShape(const QGraphicsWidget* self);
void QGraphicsWidget_OnInitStyleOption(const QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseInitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
void QGraphicsWidget_OnSizeHint(const QGraphicsWidget* self, intptr_t slot);
QSizeF* QGraphicsWidget_QBaseSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
void QGraphicsWidget_OnUpdateGeometry(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUpdateGeometry(QGraphicsWidget* self);
void QGraphicsWidget_OnItemChange(QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBaseItemChange(QGraphicsWidget* self, int change, const QVariant* value);
void QGraphicsWidget_OnPropertyChange(QGraphicsWidget* self, intptr_t slot);
QVariant* QGraphicsWidget_QBasePropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
void QGraphicsWidget_OnSceneEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseSceneEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnWindowFrameEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseWindowFrameEvent(QGraphicsWidget* self, QEvent* e);
void QGraphicsWidget_OnWindowFrameSectionAt(const QGraphicsWidget* self, intptr_t slot);
int QGraphicsWidget_QBaseWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
void QGraphicsWidget_OnEvent(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnChangeEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseChangeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnCloseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseCloseEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_OnFocusInEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseFocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_OnFocusNextPrevChild(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_QBaseFocusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_OnFocusOutEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_OnHideEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_OnMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_OnPolishEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBasePolishEvent(QGraphicsWidget* self);
void QGraphicsWidget_OnResizeEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_OnShowEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseShowEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_OnHoverMoveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_OnHoverLeaveEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_OnGrabMouseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnUngrabMouseEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnGrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_OnUngrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_QBaseUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_Delete(QGraphicsWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
