#pragma once
#ifndef QEVENT_H_C_LIB
#define QEVENT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute)
typedef QInputMethodEvent::Attribute QInputMethodEvent__Attribute;
#endif
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QApplicationStateChangeEvent QApplicationStateChangeEvent;
typedef struct QChildWindowEvent QChildWindowEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QEventPoint QEventPoint;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFile QFile;
typedef struct QFileOpenEvent QFileOpenEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QIconDragEvent QIconDragEvent;
typedef struct QInputDevice QInputDevice;
typedef struct QInputEvent QInputEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QInputMethodEvent__Attribute QInputMethodEvent__Attribute;
typedef struct QInputMethodQueryEvent QInputMethodQueryEvent;
typedef struct QKeyCombination QKeyCombination;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QNativeGestureEvent QNativeGestureEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPlatformSurfaceEvent QPlatformSurfaceEvent;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScreenOrientationChangeEvent QScreenOrientationChangeEvent;
typedef struct QScrollEvent QScrollEvent;
typedef struct QScrollPrepareEvent QScrollPrepareEvent;
typedef struct QShortcut QShortcut;
typedef struct QShortcutEvent QShortcutEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSinglePointEvent QSinglePointEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStatusTipEvent QStatusTipEvent;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBarChangeEvent QToolBarChangeEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWhatsThisClickedEvent QWhatsThisClickedEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
typedef struct QWindowStateChangeEvent QWindowStateChangeEvent;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QInputEvent* QInputEvent_new(int typeVal, const QInputDevice* m_dev);
QInputEvent* QInputEvent_new2(int typeVal, const QInputDevice* m_dev, int modifiers);
const QInputDevice* QInputEvent_Device(const QInputEvent* self);
int QInputEvent_DeviceType(const QInputEvent* self);
int QInputEvent_Modifiers(const QInputEvent* self);
void QInputEvent_SetModifiers(QInputEvent* self, int modifiers);
unsigned long long QInputEvent_Timestamp(const QInputEvent* self);
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp);
void QInputEvent_OnSetTimestamp(QInputEvent* self, intptr_t slot);
void QInputEvent_QBaseSetTimestamp(QInputEvent* self, unsigned long long timestamp);
void QInputEvent_OperatorAssign(QInputEvent* self, const QInputEvent* other);
void QInputEvent_OnOperatorAssign(QInputEvent* self, intptr_t slot);
void QInputEvent_QBaseOperatorAssign(QInputEvent* self, const QInputEvent* other);
void QInputEvent_Delete(QInputEvent* self);

QPointerEvent* QPointerEvent_new(int typeVal, const QPointingDevice* dev);
QPointerEvent* QPointerEvent_new2(int typeVal, const QPointingDevice* dev, int modifiers);
QPointerEvent* QPointerEvent_new3(int typeVal, const QPointingDevice* dev, int modifiers, const libqt_list points);
const QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self);
int QPointerEvent_PointerType(const QPointerEvent* self);
void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp);
ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self);
QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i);
libqt_list QPointerEvent_Points(const QPointerEvent* self);
QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id);
bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self);
bool QPointerEvent_IsBeginEvent(const QPointerEvent* self);
bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self);
bool QPointerEvent_IsEndEvent(const QPointerEvent* self);
bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self);
void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted);
QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, const QEventPoint* point);
void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* exclusiveGrabber);
libqt_list QPointerEvent_PassiveGrabbers(const QPointerEvent* self, const QEventPoint* point);
void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, const QEventPoint* point);
bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber);
bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber);
void QPointerEvent_OnSetTimestamp(QPointerEvent* self, intptr_t slot);
void QPointerEvent_QBaseSetTimestamp(QPointerEvent* self, unsigned long long timestamp);
void QPointerEvent_OnIsBeginEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsBeginEvent(const QPointerEvent* self);
void QPointerEvent_OnIsUpdateEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsUpdateEvent(const QPointerEvent* self);
void QPointerEvent_OnIsEndEvent(const QPointerEvent* self, intptr_t slot);
bool QPointerEvent_QBaseIsEndEvent(const QPointerEvent* self);
void QPointerEvent_OnSetAccepted(QPointerEvent* self, intptr_t slot);
void QPointerEvent_QBaseSetAccepted(QPointerEvent* self, bool accepted);
void QPointerEvent_OperatorAssign(QPointerEvent* self, const QPointerEvent* other);
void QPointerEvent_OnOperatorAssign(QPointerEvent* self, intptr_t slot);
void QPointerEvent_QBaseOperatorAssign(QPointerEvent* self, const QPointerEvent* other);
void QPointerEvent_Delete(QPointerEvent* self);

int QSinglePointEvent_Button(const QSinglePointEvent* self);
int QSinglePointEvent_Buttons(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self);
bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self);
QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self);
void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber);
void QSinglePointEvent_OnIsBeginEvent(const QSinglePointEvent* self, intptr_t slot);
bool QSinglePointEvent_QBaseIsBeginEvent(const QSinglePointEvent* self);
void QSinglePointEvent_OnIsUpdateEvent(const QSinglePointEvent* self, intptr_t slot);
bool QSinglePointEvent_QBaseIsUpdateEvent(const QSinglePointEvent* self);
void QSinglePointEvent_OnIsEndEvent(const QSinglePointEvent* self, intptr_t slot);
bool QSinglePointEvent_QBaseIsEndEvent(const QSinglePointEvent* self);
void QSinglePointEvent_OperatorAssign(QSinglePointEvent* self, const QSinglePointEvent* other);
void QSinglePointEvent_OnOperatorAssign(QSinglePointEvent* self, intptr_t slot);
void QSinglePointEvent_QBaseOperatorAssign(QSinglePointEvent* self, const QSinglePointEvent* other);
void QSinglePointEvent_Delete(QSinglePointEvent* self);

QEnterEvent* QEnterEvent_new(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos);
QEnterEvent* QEnterEvent_new2(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, const QPointingDevice* device);
QPoint* QEnterEvent_Pos(const QEnterEvent* self);
QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self);
int QEnterEvent_X(const QEnterEvent* self);
int QEnterEvent_Y(const QEnterEvent* self);
int QEnterEvent_GlobalX(const QEnterEvent* self);
int QEnterEvent_GlobalY(const QEnterEvent* self);
QPointF* QEnterEvent_LocalPos(const QEnterEvent* self);
QPointF* QEnterEvent_WindowPos(const QEnterEvent* self);
QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self);
void QEnterEvent_Delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source);
QMouseEvent* QMouseEvent_new5(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers, const QPointingDevice* device);
QMouseEvent* QMouseEvent_new6(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device);
QMouseEvent* QMouseEvent_new7(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device);
QMouseEvent* QMouseEvent_new8(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source, const QPointingDevice* device);
QPoint* QMouseEvent_Pos(const QMouseEvent* self);
QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self);
int QMouseEvent_X(const QMouseEvent* self);
int QMouseEvent_Y(const QMouseEvent* self);
int QMouseEvent_GlobalX(const QMouseEvent* self);
int QMouseEvent_GlobalY(const QMouseEvent* self);
QPointF* QMouseEvent_LocalPos(const QMouseEvent* self);
QPointF* QMouseEvent_WindowPos(const QMouseEvent* self);
QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self);
int QMouseEvent_Source(const QMouseEvent* self);
int QMouseEvent_Flags(const QMouseEvent* self);
void QMouseEvent_Delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(int typeVal, const QPointF* pos, const QPointF* oldPos);
QHoverEvent* QHoverEvent_new3(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new4(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers, const QPointingDevice* device);
QHoverEvent* QHoverEvent_new5(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new6(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers, const QPointingDevice* device);
QPoint* QHoverEvent_Pos(const QHoverEvent* self);
QPointF* QHoverEvent_PosF(const QHoverEvent* self);
bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self);
QPoint* QHoverEvent_OldPos(const QHoverEvent* self);
QPointF* QHoverEvent_OldPosF(const QHoverEvent* self);
void QHoverEvent_OnIsUpdateEvent(const QHoverEvent* self, intptr_t slot);
bool QHoverEvent_QBaseIsUpdateEvent(const QHoverEvent* self);
void QHoverEvent_OperatorAssign(QHoverEvent* self, const QHoverEvent* other);
void QHoverEvent_OnOperatorAssign(QHoverEvent* self, intptr_t slot);
void QHoverEvent_QBaseOperatorAssign(QHoverEvent* self, const QHoverEvent* other);
void QHoverEvent_Delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted);
QWheelEvent* QWheelEvent_new2(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source);
QWheelEvent* QWheelEvent_new3(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, const QPointingDevice* device);
QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self);
QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self);
int QWheelEvent_Phase(const QWheelEvent* self);
bool QWheelEvent_Inverted(const QWheelEvent* self);
bool QWheelEvent_IsInverted(const QWheelEvent* self);
bool QWheelEvent_HasPixelDelta(const QWheelEvent* self);
bool QWheelEvent_IsBeginEvent(const QWheelEvent* self);
bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self);
bool QWheelEvent_IsEndEvent(const QWheelEvent* self);
int QWheelEvent_Source(const QWheelEvent* self);
void QWheelEvent_OnIsBeginEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsBeginEvent(const QWheelEvent* self);
void QWheelEvent_OnIsUpdateEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsUpdateEvent(const QWheelEvent* self);
void QWheelEvent_OnIsEndEvent(const QWheelEvent* self, intptr_t slot);
bool QWheelEvent_QBaseIsEndEvent(const QWheelEvent* self);
void QWheelEvent_OperatorAssign(QWheelEvent* self, const QWheelEvent* other);
void QWheelEvent_OnOperatorAssign(QWheelEvent* self, intptr_t slot);
void QWheelEvent_QBaseOperatorAssign(QWheelEvent* self, const QWheelEvent* other);
void QWheelEvent_Delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(int t, const QPointingDevice* device, const QPointF* pos, const QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons);
QPoint* QTabletEvent_Pos(const QTabletEvent* self);
QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self);
QPointF* QTabletEvent_PosF(const QTabletEvent* self);
QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self);
int QTabletEvent_X(const QTabletEvent* self);
int QTabletEvent_Y(const QTabletEvent* self);
int QTabletEvent_GlobalX(const QTabletEvent* self);
int QTabletEvent_GlobalY(const QTabletEvent* self);
double QTabletEvent_HiResGlobalX(const QTabletEvent* self);
double QTabletEvent_HiResGlobalY(const QTabletEvent* self);
long long QTabletEvent_UniqueId(const QTabletEvent* self);
double QTabletEvent_Pressure(const QTabletEvent* self);
double QTabletEvent_Rotation(const QTabletEvent* self);
double QTabletEvent_Z(const QTabletEvent* self);
double QTabletEvent_TangentialPressure(const QTabletEvent* self);
double QTabletEvent_XTilt(const QTabletEvent* self);
double QTabletEvent_YTilt(const QTabletEvent* self);
void QTabletEvent_Delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, const QPointingDevice* dev, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta);
QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta, unsigned long long sequenceId);
int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self);
int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self);
double QNativeGestureEvent_Value(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self);
void QNativeGestureEvent_Delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, const libqt_string text);
QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, const libqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, const libqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text);
QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count, const QInputDevice* device);
int QKeyEvent_Key(const QKeyEvent* self);
bool QKeyEvent_Matches(const QKeyEvent* self, int key);
int QKeyEvent_Modifiers(const QKeyEvent* self);
QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self);
libqt_string QKeyEvent_Text(const QKeyEvent* self);
bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self);
int QKeyEvent_Count(const QKeyEvent* self);
unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self);
unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self);
unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self);
void QKeyEvent_Delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(int typeVal);
QFocusEvent* QFocusEvent_new2(int typeVal, int reason);
bool QFocusEvent_GotFocus(const QFocusEvent* self);
bool QFocusEvent_LostFocus(const QFocusEvent* self);
int QFocusEvent_Reason(const QFocusEvent* self);
void QFocusEvent_Delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(const QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(const QRect* paintRect);
const QRect* QPaintEvent_Rect(const QPaintEvent* self);
const QRegion* QPaintEvent_Region(const QPaintEvent* self);
void QPaintEvent_Delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(const QPoint* pos, const QPoint* oldPos);
const QPoint* QMoveEvent_Pos(const QMoveEvent* self);
const QPoint* QMoveEvent_OldPos(const QMoveEvent* self);
void QMoveEvent_Delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(const QRegion* m_region);
const QRegion* QExposeEvent_Region(const QExposeEvent* self);
void QExposeEvent_Delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType);
int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(const QSize* size, const QSize* oldSize);
const QSize* QResizeEvent_Size(const QResizeEvent* self);
const QSize* QResizeEvent_OldSize(const QResizeEvent* self);
void QResizeEvent_Delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
void QCloseEvent_Delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
void QIconDragEvent_Delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
void QShowEvent_Delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
void QHideEvent_Delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(int reason, const QPoint* pos, const QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new2(int reason, const QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new3(int reason, const QPoint* pos, const QPoint* globalPos, int modifiers);
int QContextMenuEvent_X(const QContextMenuEvent* self);
int QContextMenuEvent_Y(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalX(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalY(const QContextMenuEvent* self);
const QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self);
const QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self);
int QContextMenuEvent_Reason(const QContextMenuEvent* self);
void QContextMenuEvent_Delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(const libqt_string preeditText, const libqt_list attributes);
void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const libqt_string commitString);
libqt_list QInputMethodEvent_Attributes(const QInputMethodEvent* self);
libqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self);
libqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom);
void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom, int replaceLength);
void QInputMethodEvent_Delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, const QVariant* value);
QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query);
void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal);
QPoint* QDropEvent_Pos(const QDropEvent* self);
QPointF* QDropEvent_PosF(const QDropEvent* self);
int QDropEvent_MouseButtons(const QDropEvent* self);
int QDropEvent_KeyboardModifiers(const QDropEvent* self);
QPointF* QDropEvent_Position(const QDropEvent* self);
int QDropEvent_Buttons(const QDropEvent* self);
int QDropEvent_Modifiers(const QDropEvent* self);
int QDropEvent_PossibleActions(const QDropEvent* self);
int QDropEvent_ProposedAction(const QDropEvent* self);
void QDropEvent_AcceptProposedAction(QDropEvent* self);
int QDropEvent_DropAction(const QDropEvent* self);
void QDropEvent_SetDropAction(QDropEvent* self, int action);
QObject* QDropEvent_Source(const QDropEvent* self);
const QMimeData* QDropEvent_MimeData(const QDropEvent* self);
void QDropEvent_Delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal);
QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self);
void QDragMoveEvent_Accept(QDragMoveEvent* self);
void QDragMoveEvent_Ignore(QDragMoveEvent* self);
void QDragMoveEvent_Accept2(QDragMoveEvent* self, const QRect* r);
void QDragMoveEvent_Ignore2(QDragMoveEvent* self, const QRect* r);
void QDragMoveEvent_Delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers);
void QDragEnterEvent_Delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
void QDragLeaveEvent_Delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(int typeVal, const QPoint* pos, const QPoint* globalPos);
int QHelpEvent_X(const QHelpEvent* self);
int QHelpEvent_Y(const QHelpEvent* self);
int QHelpEvent_GlobalX(const QHelpEvent* self);
int QHelpEvent_GlobalY(const QHelpEvent* self);
const QPoint* QHelpEvent_Pos(const QHelpEvent* self);
const QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self);
void QHelpEvent_Delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(const libqt_string tip);
libqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self);
void QStatusTipEvent_Delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(const libqt_string href);
libqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self);
void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int typeVal, QAction* action);
QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before);
QAction* QActionEvent_Action(const QActionEvent* self);
QAction* QActionEvent_Before(const QActionEvent* self);
void QActionEvent_Delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(const libqt_string file);
QFileOpenEvent* QFileOpenEvent_new2(const QUrl* url);
libqt_string QFileOpenEvent_File(const QFileOpenEvent* self);
QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self);
bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, QIODevice::OpenMode flags);
void QFileOpenEvent_Delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self);
void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(const QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(const QKeySequence* key);
QShortcutEvent* QShortcutEvent_new3(const QKeySequence* key, int id, bool ambiguous);
QShortcutEvent* QShortcutEvent_new4(const QKeySequence* key, const QShortcut* shortcut);
QShortcutEvent* QShortcutEvent_new5(const QKeySequence* key, const QShortcut* shortcut, bool ambiguous);
const QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self);
int QShortcutEvent_ShortcutId(const QShortcutEvent* self);
bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self);
void QShortcutEvent_Delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride);
int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self);

QTouchEvent* QTouchEvent_new(int eventType);
QTouchEvent* QTouchEvent_new2(int eventType, const QPointingDevice* device, int modifiers, quint8 touchPointStates);
QTouchEvent* QTouchEvent_new3(int eventType, const QPointingDevice* device);
QTouchEvent* QTouchEvent_new4(int eventType, const QPointingDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(int eventType, const QPointingDevice* device, int modifiers, const libqt_list touchPoints);
QTouchEvent* QTouchEvent_new6(int eventType, const QPointingDevice* device, int modifiers, quint8 touchPointStates, const libqt_list touchPoints);
QObject* QTouchEvent_Target(const QTouchEvent* self);
quint8 QTouchEvent_TouchPointStates(const QTouchEvent* self);
libqt_list QTouchEvent_TouchPoints(const QTouchEvent* self);
bool QTouchEvent_IsBeginEvent(const QTouchEvent* self);
bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self);
bool QTouchEvent_IsEndEvent(const QTouchEvent* self);
void QTouchEvent_OnIsBeginEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsBeginEvent(const QTouchEvent* self);
void QTouchEvent_OnIsUpdateEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsUpdateEvent(const QTouchEvent* self);
void QTouchEvent_OnIsEndEvent(const QTouchEvent* self, intptr_t slot);
bool QTouchEvent_QBaseIsEndEvent(const QTouchEvent* self);
void QTouchEvent_OperatorAssign(QTouchEvent* self, const QTouchEvent* other);
void QTouchEvent_OnOperatorAssign(QTouchEvent* self, intptr_t slot);
void QTouchEvent_QBaseOperatorAssign(QTouchEvent* self, const QTouchEvent* other);
void QTouchEvent_Delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(const QPointF* startPos);
QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, const QSizeF* size);
void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, const QRectF* rect);
void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, const QPointF* pos);
void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(const QPointF* contentPos, const QPointF* overshoot, int scrollState);
QPointF* QScrollEvent_ContentPos(const QScrollEvent* self);
QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self);
int QScrollEvent_ScrollState(const QScrollEvent* self);
void QScrollEvent_Delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation);
QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self);
int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state);
int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self);

QChildWindowEvent* QChildWindowEvent_new(int typeVal, QWindow* childWindow);
QWindow* QChildWindowEvent_Child(const QChildWindowEvent* self);
void QChildWindowEvent_Delete(QChildWindowEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l);
int QInputMethodEvent__Attribute_Type(const QInputMethodEvent__Attribute* self);
void QInputMethodEvent__Attribute_SetType(QInputMethodEvent__Attribute* self, int type);
int QInputMethodEvent__Attribute_Start(const QInputMethodEvent__Attribute* self);
void QInputMethodEvent__Attribute_SetStart(QInputMethodEvent__Attribute* self, int start);
int QInputMethodEvent__Attribute_Length(const QInputMethodEvent__Attribute* self);
void QInputMethodEvent__Attribute_SetLength(QInputMethodEvent__Attribute* self, int length);
QVariant* QInputMethodEvent__Attribute_Value(const QInputMethodEvent__Attribute* self);
void QInputMethodEvent__Attribute_SetValue(QInputMethodEvent__Attribute* self, QVariant* value);
void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, const QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
