#include <QAction>
#include <QActionEvent>
#include <QApplicationStateChangeEvent>
#include <QChildWindowEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QEventPoint>
#include <QExposeEvent>
#include <QFile>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputDevice>
#include <QInputEvent>
#include <QInputMethodEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QInputMethodQueryEvent>
#include <QKeyCombination>
#include <QKeyEvent>
#include <QKeySequence>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QNativeGestureEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QPointerEvent>
#include <QPointingDevice>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScreenOrientationChangeEvent>
#include <QScrollEvent>
#include <QScrollPrepareEvent>
#include <QShortcut>
#include <QShortcutEvent>
#include <QShowEvent>
#include <QSinglePointEvent>
#include <QSize>
#include <QSizeF>
#include <QStatusTipEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchEvent>
#include <QUrl>
#include <QVariant>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "libqevent.h"
#include "libqevent.hxx"

QInputEvent* QInputEvent_new(int typeVal, const QInputDevice* m_dev) {
	 return new VirtualQInputEvent(static_cast<QMetaType::Type>(typeVal), m_dev);
}

QInputEvent* QInputEvent_new2(int typeVal, const QInputDevice* m_dev, int modifiers) {
	 return new VirtualQInputEvent(static_cast<QMetaType::Type>(typeVal), m_dev, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

const QInputDevice* QInputEvent_Device(const QInputEvent* self) {
	return self->device();
}

int QInputEvent_DeviceType(const QInputEvent* self) {
	return self->deviceType();
}

int QInputEvent_Modifiers(const QInputEvent* self) {
	return self->modifiers();
}

void QInputEvent_SetModifiers(QInputEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

unsigned long long QInputEvent_Timestamp(const QInputEvent* self) {
	return self->timestamp();
}

void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp) {
	self->setTimestamp(timestamp);
}

// Base class handler implementation
void QInputEvent_QBaseSetTimestamp(QInputEvent* self, unsigned long long timestamp) {
	auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
	if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
vqinputevent->setQInputEvent_SetTimestamp_IsBase(true);
	vqinputevent->setTimestamp(timestamp);
}
}

// Auxiliary method to allow providing re-implementation
void QInputEvent_OnSetTimestamp(QInputEvent* self, intptr_t slot) {
	auto* vqinputevent = dynamic_cast<VirtualQInputEvent*>(self);
	if (vqinputevent && vqinputevent->isVirtualQInputEvent) {
vqinputevent->setQInputEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQInputEvent::QInputEvent_SetTimestamp_Callback>(slot));
}
}

void QInputEvent_Delete(QInputEvent* self) {
    delete self;
}

QPointerEvent* QPointerEvent_new(int typeVal, const QPointingDevice* dev) {
	 return new VirtualQPointerEvent(static_cast<QMetaType::Type>(typeVal), dev);
}

QPointerEvent* QPointerEvent_new2(int typeVal, const QPointingDevice* dev, int modifiers) {
	 return new VirtualQPointerEvent(static_cast<QMetaType::Type>(typeVal), dev, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QPointerEvent* QPointerEvent_new3(int typeVal, const QPointingDevice* dev, int modifiers, const libqt_list points) {
	 return new VirtualQPointerEvent(static_cast<QMetaType::Type>(typeVal), dev, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), QList<QEventPoint>());
}

const QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self) {
	return self->pointingDevice();
}

int QPointerEvent_PointerType(const QPointerEvent* self) {
	return self->pointerType();
}

void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
	self->setTimestamp(timestamp);
}

ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self) {
	return self->pointCount();
}

QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i) {
	return new QEventPoint(self->point(i));
}

libqt_list QPointerEvent_Points(const QPointerEvent* self) {
	auto _ret = self->points();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id) {
	return self->pointById(id);
}

bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self) {
	return self->allPointsGrabbed();
}

bool QPointerEvent_IsBeginEvent(const QPointerEvent* self) {
	return self->isBeginEvent();
}

bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self) {
	return self->isUpdateEvent();
}

bool QPointerEvent_IsEndEvent(const QPointerEvent* self) {
	return self->isEndEvent();
}

bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self) {
	return self->allPointsAccepted();
}

void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, const QEventPoint* point) {
	return self->exclusiveGrabber(*point);
}

void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* exclusiveGrabber) {
	self->setExclusiveGrabber(*point, exclusiveGrabber);
}

libqt_list QPointerEvent_PassiveGrabbers(const QPointerEvent* self, const QEventPoint* point) {
	auto _ret = self->passiveGrabbers(*point);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, const QEventPoint* point) {
	self->clearPassiveGrabbers(*point);
}

bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber) {
	return self->addPassiveGrabber(*point, grabber);
}

bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, const QEventPoint* point, QObject* grabber) {
	return self->removePassiveGrabber(*point, grabber);
}

// Base class handler implementation
void QPointerEvent_QBaseSetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
	auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_SetTimestamp_IsBase(true);
	vqpointerevent->setTimestamp(timestamp);
}
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetTimestamp(QPointerEvent* self, intptr_t slot) {
	auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_SetTimestamp_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetTimestamp_Callback>(slot));
}
}

// Base class handler implementation
bool QPointerEvent_QBaseIsBeginEvent(const QPointerEvent* self) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsBeginEvent_IsBase(true);
	return vqpointerevent->isBeginEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsBeginEvent(const QPointerEvent* self, intptr_t slot) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsBeginEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QPointerEvent_QBaseIsUpdateEvent(const QPointerEvent* self) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsUpdateEvent_IsBase(true);
	return vqpointerevent->isUpdateEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsUpdateEvent(const QPointerEvent* self, intptr_t slot) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsUpdateEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QPointerEvent_QBaseIsEndEvent(const QPointerEvent* self) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsEndEvent_IsBase(true);
	return vqpointerevent->isEndEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnIsEndEvent(const QPointerEvent* self, intptr_t slot) {
	auto* vqpointerevent = dynamic_cast<const VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_IsEndEvent_Callback>(slot));
}
}

// Base class handler implementation
void QPointerEvent_QBaseSetAccepted(QPointerEvent* self, bool accepted) {
	auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_SetAccepted_IsBase(true);
	vqpointerevent->setAccepted(accepted);
}
}

// Auxiliary method to allow providing re-implementation
void QPointerEvent_OnSetAccepted(QPointerEvent* self, intptr_t slot) {
	auto* vqpointerevent = dynamic_cast<VirtualQPointerEvent*>(self);
	if (vqpointerevent && vqpointerevent->isVirtualQPointerEvent) {
vqpointerevent->setQPointerEvent_SetAccepted_Callback(reinterpret_cast<VirtualQPointerEvent::QPointerEvent_SetAccepted_Callback>(slot));
}
}

void QPointerEvent_Delete(QPointerEvent* self) {
    delete self;
}

int QSinglePointEvent_Button(const QSinglePointEvent* self) {
	return self->button();
}

int QSinglePointEvent_Buttons(const QSinglePointEvent* self) {
	return self->buttons();
}

QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self) {
	return new QPointF(self->position());
}

QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self) {
	return new QPointF(self->scenePosition());
}

QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self) {
	return new QPointF(self->globalPosition());
}

bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self) {
	return self->isBeginEvent();
}

bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self) {
	return self->isUpdateEvent();
}

bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self) {
	return self->isEndEvent();
}

QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self) {
	return self->exclusivePointGrabber();
}

void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber) {
	self->setExclusivePointGrabber(exclusiveGrabber);
}

// Base class handler implementation
bool QSinglePointEvent_QBaseIsBeginEvent(const QSinglePointEvent* self) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsBeginEvent_IsBase(true);
	return vqsinglepointevent->isBeginEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QSinglePointEvent_OnIsBeginEvent(const QSinglePointEvent* self, intptr_t slot) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQSinglePointEvent::QSinglePointEvent_IsBeginEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QSinglePointEvent_QBaseIsUpdateEvent(const QSinglePointEvent* self) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsUpdateEvent_IsBase(true);
	return vqsinglepointevent->isUpdateEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QSinglePointEvent_OnIsUpdateEvent(const QSinglePointEvent* self, intptr_t slot) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQSinglePointEvent::QSinglePointEvent_IsUpdateEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QSinglePointEvent_QBaseIsEndEvent(const QSinglePointEvent* self) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsEndEvent_IsBase(true);
	return vqsinglepointevent->isEndEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QSinglePointEvent_OnIsEndEvent(const QSinglePointEvent* self, intptr_t slot) {
	auto* vqsinglepointevent = dynamic_cast<const VirtualQSinglePointEvent*>(self);
	if (vqsinglepointevent && vqsinglepointevent->isVirtualQSinglePointEvent) {
vqsinglepointevent->setQSinglePointEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQSinglePointEvent::QSinglePointEvent_IsEndEvent_Callback>(slot));
}
}

void QSinglePointEvent_Delete(QSinglePointEvent* self) {
    delete self;
}

QEnterEvent* QEnterEvent_new(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos) {
	 return new QEnterEvent(*localPos, *scenePos, *globalPos);
}

QEnterEvent* QEnterEvent_new2(const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, const QPointingDevice* device) {
	 return new QEnterEvent(*localPos, *scenePos, *globalPos, device);
}

QPoint* QEnterEvent_Pos(const QEnterEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self) {
	return new QPoint(self->globalPos());
}

int QEnterEvent_X(const QEnterEvent* self) {
	return self->x();
}

int QEnterEvent_Y(const QEnterEvent* self) {
	return self->y();
}

int QEnterEvent_GlobalX(const QEnterEvent* self) {
	return self->globalX();
}

int QEnterEvent_GlobalY(const QEnterEvent* self) {
	return self->globalY();
}

QPointF* QEnterEvent_LocalPos(const QEnterEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
	return new QPointF(self->screenPos());
}

void QEnterEvent_Delete(QEnterEvent* self) {
    delete self;
}

QMouseEvent* QMouseEvent_new(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(int typeVal, const QPointF* localPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), device);
}

QMouseEvent* QMouseEvent_new6(int typeVal, const QPointF* localPos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), device);
}

QMouseEvent* QMouseEvent_new7(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, const QPointingDevice* device) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), device);
}

QMouseEvent* QMouseEvent_new8(int typeVal, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, int button, int buttons, int modifiers, int source, const QPointingDevice* device) {
	 return new QMouseEvent(static_cast<QMetaType::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QMouseEvent_Pos(const QMouseEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self) {
	return new QPoint(self->globalPos());
}

int QMouseEvent_X(const QMouseEvent* self) {
	return self->x();
}

int QMouseEvent_Y(const QMouseEvent* self) {
	return self->y();
}

int QMouseEvent_GlobalX(const QMouseEvent* self) {
	return self->globalX();
}

int QMouseEvent_GlobalY(const QMouseEvent* self) {
	return self->globalY();
}

QPointF* QMouseEvent_LocalPos(const QMouseEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
	return new QPointF(self->screenPos());
}

int QMouseEvent_Source(const QMouseEvent* self) {
	return self->source();
}

int QMouseEvent_Flags(const QMouseEvent* self) {
	return self->flags();
}

void QMouseEvent_Delete(QMouseEvent* self) {
    delete self;
}

QHoverEvent* QHoverEvent_new(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *scenePos, *globalPos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(int typeVal, const QPointF* pos, const QPointF* oldPos) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new3(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QHoverEvent* QHoverEvent_new4(int typeVal, const QPointF* scenePos, const QPointF* globalPos, const QPointF* oldPos, int modifiers, const QPointingDevice* device) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), device);
}

QHoverEvent* QHoverEvent_new5(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *pos, *oldPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QHoverEvent* QHoverEvent_new6(int typeVal, const QPointF* pos, const QPointF* oldPos, int modifiers, const QPointingDevice* device) {
	 return new VirtualQHoverEvent(static_cast<QMetaType::Type>(typeVal), *pos, *oldPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), device);
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
	return new QPointF(self->posF());
}

bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self) {
	return self->isUpdateEvent();
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
	return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
	return new QPointF(self->oldPosF());
}

// Base class handler implementation
bool QHoverEvent_QBaseIsUpdateEvent(const QHoverEvent* self) {
	auto* vqhoverevent = dynamic_cast<const VirtualQHoverEvent*>(self);
	if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
vqhoverevent->setQHoverEvent_IsUpdateEvent_IsBase(true);
	return vqhoverevent->isUpdateEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QHoverEvent_OnIsUpdateEvent(const QHoverEvent* self, intptr_t slot) {
	auto* vqhoverevent = dynamic_cast<const VirtualQHoverEvent*>(self);
	if (vqhoverevent && vqhoverevent->isVirtualQHoverEvent) {
vqhoverevent->setQHoverEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQHoverEvent::QHoverEvent_IsUpdateEvent_Callback>(slot));
}
}

void QHoverEvent_Delete(QHoverEvent* self) {
    delete self;
}

QWheelEvent* QWheelEvent_new(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
	 return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new2(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
	 return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new3(const QPointF* pos, const QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, const QPointingDevice* device) {
	 return new VirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source), device);
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
	return new QPoint(self->angleDelta());
}

int QWheelEvent_Phase(const QWheelEvent* self) {
	return self->phase();
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
	return self->inverted();
}

bool QWheelEvent_IsInverted(const QWheelEvent* self) {
	return self->isInverted();
}

bool QWheelEvent_HasPixelDelta(const QWheelEvent* self) {
	return self->hasPixelDelta();
}

bool QWheelEvent_IsBeginEvent(const QWheelEvent* self) {
	return self->isBeginEvent();
}

bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self) {
	return self->isUpdateEvent();
}

bool QWheelEvent_IsEndEvent(const QWheelEvent* self) {
	return self->isEndEvent();
}

int QWheelEvent_Source(const QWheelEvent* self) {
	return self->source();
}

// Base class handler implementation
bool QWheelEvent_QBaseIsBeginEvent(const QWheelEvent* self) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsBeginEvent_IsBase(true);
	return vqwheelevent->isBeginEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsBeginEvent(const QWheelEvent* self, intptr_t slot) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsBeginEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QWheelEvent_QBaseIsUpdateEvent(const QWheelEvent* self) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsUpdateEvent_IsBase(true);
	return vqwheelevent->isUpdateEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsUpdateEvent(const QWheelEvent* self, intptr_t slot) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsUpdateEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QWheelEvent_QBaseIsEndEvent(const QWheelEvent* self) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsEndEvent_IsBase(true);
	return vqwheelevent->isEndEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QWheelEvent_OnIsEndEvent(const QWheelEvent* self, intptr_t slot) {
	auto* vqwheelevent = dynamic_cast<const VirtualQWheelEvent*>(self);
	if (vqwheelevent && vqwheelevent->isVirtualQWheelEvent) {
vqwheelevent->setQWheelEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQWheelEvent::QWheelEvent_IsEndEvent_Callback>(slot));
}
}

void QWheelEvent_Delete(QWheelEvent* self) {
    delete self;
}

QTabletEvent* QTabletEvent_new(int t, const QPointingDevice* device, const QPointF* pos, const QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons) {
	 return new QTabletEvent(static_cast<QMetaType::Type>(t), device, *pos, *globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, static_cast<QFlags<Qt::KeyboardModifier>>(keyState), static_cast<Qt::MouseButton>(button), static_cast<QFlags<Qt::MouseButton>>(buttons));
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
	return new QPointF(self->posF());
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
	return new QPointF(self->globalPosF());
}

int QTabletEvent_X(const QTabletEvent* self) {
	return self->x();
}

int QTabletEvent_Y(const QTabletEvent* self) {
	return self->y();
}

int QTabletEvent_GlobalX(const QTabletEvent* self) {
	return self->globalX();
}

int QTabletEvent_GlobalY(const QTabletEvent* self) {
	return self->globalY();
}

double QTabletEvent_HiResGlobalX(const QTabletEvent* self) {
	return self->hiResGlobalX();
}

double QTabletEvent_HiResGlobalY(const QTabletEvent* self) {
	return self->hiResGlobalY();
}

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
	return self->uniqueId();
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
	return self->pressure();
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
	return self->rotation();
}

double QTabletEvent_Z(const QTabletEvent* self) {
	return self->z();
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
	return self->tangentialPressure();
}

double QTabletEvent_XTilt(const QTabletEvent* self) {
	return self->xTilt();
}

double QTabletEvent_YTilt(const QTabletEvent* self) {
	return self->yTilt();
}

void QTabletEvent_Delete(QTabletEvent* self) {
    delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, const QPointingDevice* dev, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument) {
	 return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *scenePos, *globalPos, value, sequenceId, intArgument);
}

QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta) {
	 return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, fingerCount, *localPos, *scenePos, *globalPos, value, *delta);
}

QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, const QPointingDevice* dev, int fingerCount, const QPointF* localPos, const QPointF* scenePos, const QPointF* globalPos, double value, const QPointF* delta, unsigned long long sequenceId) {
	 return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, fingerCount, *localPos, *scenePos, *globalPos, value, *delta, sequenceId);
}

int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
	return self->gestureType();
}

int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self) {
	return self->fingerCount();
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
	return self->value();
}

QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self) {
	return new QPointF(self->delta());
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
	return new QPointF(self->screenPos());
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
    delete self;
}

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers);
}

QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, const libqt_string text) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), QString::fromUtf8(text.data, text.len));
}

QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, const libqt_string text, bool autorep) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), QString::fromUtf8(text.data, text.len), autorep);
}

QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, const libqt_string text, bool autorep, uint16_t count) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), QString::fromUtf8(text.data, text.len), autorep, count);
}

QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, QString::fromUtf8(text.data, text.len));
}

QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, QString::fromUtf8(text.data, text.len), autorep);
}

QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, QString::fromUtf8(text.data, text.len), autorep, count);
}

QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const libqt_string text, bool autorep, uint16_t count, const QInputDevice* device) {
	 return new QKeyEvent(static_cast<QMetaType::Type>(typeVal), key, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), nativeScanCode, nativeVirtualKey, nativeModifiers, QString::fromUtf8(text.data, text.len), autorep, count, device);
}

int QKeyEvent_Key(const QKeyEvent* self) {
	return self->key();
}

bool QKeyEvent_Matches(const QKeyEvent* self, int key) {
	return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Modifiers(const QKeyEvent* self) {
	return self->modifiers();
}

QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self) {
	return new QKeyCombination(self->keyCombination());
}

libqt_string QKeyEvent_Text(const QKeyEvent* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_Count(const QKeyEvent* self) {
	return self->count();
}

unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self) {
	return self->nativeScanCode();
}

unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self) {
	return self->nativeVirtualKey();
}

unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self) {
	return self->nativeModifiers();
}

void QKeyEvent_Delete(QKeyEvent* self) {
    delete self;
}

QFocusEvent* QFocusEvent_new(int typeVal) {
	 return new QFocusEvent(static_cast<QMetaType::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(int typeVal, int reason) {
	 return new QFocusEvent(static_cast<QMetaType::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

bool QFocusEvent_GotFocus(const QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_LostFocus(const QFocusEvent* self) {
	return self->lostFocus();
}

int QFocusEvent_Reason(const QFocusEvent* self) {
	return self->reason();
}

void QFocusEvent_Delete(QFocusEvent* self) {
    delete self;
}

QPaintEvent* QPaintEvent_new(const QRegion* paintRegion) {
	 return new QPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(const QRect* paintRect) {
	 return new QPaintEvent(*paintRect);
}

const QRect* QPaintEvent_Rect(const QPaintEvent* self) {
	const QRect& _ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

const QRegion* QPaintEvent_Region(const QPaintEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QPaintEvent_Delete(QPaintEvent* self) {
    delete self;
}

QMoveEvent* QMoveEvent_new(const QPoint* pos, const QPoint* oldPos) {
	 return new QMoveEvent(*pos, *oldPos);
}

const QPoint* QMoveEvent_Pos(const QMoveEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

const QPoint* QMoveEvent_OldPos(const QMoveEvent* self) {
	const QPoint& _ret = self->oldPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QMoveEvent_Delete(QMoveEvent* self) {
    delete self;
}

QExposeEvent* QExposeEvent_new(const QRegion* m_region) {
	 return new QExposeEvent(*m_region);
}

const QRegion* QExposeEvent_Region(const QExposeEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QExposeEvent_Delete(QExposeEvent* self) {
    delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
	 return new QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
	return self->surfaceEventType();
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self) {
    delete self;
}

QResizeEvent* QResizeEvent_new(const QSize* size, const QSize* oldSize) {
	 return new QResizeEvent(*size, *oldSize);
}

const QSize* QResizeEvent_Size(const QResizeEvent* self) {
	const QSize& _ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

const QSize* QResizeEvent_OldSize(const QResizeEvent* self) {
	const QSize& _ret = self->oldSize();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

void QResizeEvent_Delete(QResizeEvent* self) {
    delete self;
}

QCloseEvent* QCloseEvent_new() {
	 return new QCloseEvent();
}

void QCloseEvent_Delete(QCloseEvent* self) {
    delete self;
}

QIconDragEvent* QIconDragEvent_new() {
	 return new QIconDragEvent();
}

void QIconDragEvent_Delete(QIconDragEvent* self) {
    delete self;
}

QShowEvent* QShowEvent_new() {
	 return new QShowEvent();
}

void QShowEvent_Delete(QShowEvent* self) {
    delete self;
}

QHideEvent* QHideEvent_new() {
	 return new QHideEvent();
}

void QHideEvent_Delete(QHideEvent* self) {
    delete self;
}

QContextMenuEvent* QContextMenuEvent_new(int reason, const QPoint* pos, const QPoint* globalPos) {
	 return new QContextMenuEvent(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, const QPoint* pos) {
	 return new QContextMenuEvent(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, const QPoint* pos, const QPoint* globalPos, int modifiers) {
	 return new QContextMenuEvent(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

int QContextMenuEvent_X(const QContextMenuEvent* self) {
	return self->x();
}

int QContextMenuEvent_Y(const QContextMenuEvent* self) {
	return self->y();
}

int QContextMenuEvent_GlobalX(const QContextMenuEvent* self) {
	return self->globalX();
}

int QContextMenuEvent_GlobalY(const QContextMenuEvent* self) {
	return self->globalY();
}

const QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

const QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_Reason(const QContextMenuEvent* self) {
	return self->reason();
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
    delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
	 return new QInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(const libqt_string preeditText, const libqt_list attributes) {
	 return new QInputMethodEvent(QString::fromUtf8(preeditText.data, preeditText.len), QList<QInputMethodEvent::Attribute>());
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const libqt_string commitString) {
	self->setCommitString(QString::fromUtf8(commitString.data, commitString.len));
}

libqt_list QInputMethodEvent_Attributes(const QInputMethodEvent* self) {
	auto _ret = self->attributes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self) {
	QString _ret = self->preeditString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self) {
	QString _ret = self->commitString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom) {
	self->setCommitString(QString::fromUtf8(commitString.data, commitString.len), replaceFrom);
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const libqt_string commitString, int replaceFrom, int replaceLength) {
	self->setCommitString(QString::fromUtf8(commitString.data, commitString.len), replaceFrom, replaceLength);
}

void QInputMethodEvent_Delete(QInputMethodEvent* self) {
    delete self;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
	 return new QInputMethodQueryEvent(static_cast<QFlags<Qt::InputMethodQuery>>(queries));
}

int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self) {
	return self->queries();
}

void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, const QVariant* value) {
	self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query) {
	return new QVariant(self->value(static_cast<Qt::InputMethodQuery>(query)));
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self) {
    delete self;
}

QDropEvent* QDropEvent_new(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
	 return new QDropEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QDropEvent* QDropEvent_new2(const QPointF* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal) {
	 return new QDropEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<QMetaType::Type>(typeVal));
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
	return new QPointF(self->posF());
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
	return self->mouseButtons();
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
	return self->keyboardModifiers();
}

QPointF* QDropEvent_Position(const QDropEvent* self) {
	return new QPointF(self->position());
}

int QDropEvent_Buttons(const QDropEvent* self) {
	return self->buttons();
}

int QDropEvent_Modifiers(const QDropEvent* self) {
	return self->modifiers();
}

int QDropEvent_PossibleActions(const QDropEvent* self) {
	return self->possibleActions();
}

int QDropEvent_ProposedAction(const QDropEvent* self) {
	return self->proposedAction();
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

int QDropEvent_DropAction(const QDropEvent* self) {
	return self->dropAction();
}

void QDropEvent_SetDropAction(QDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_Source(const QDropEvent* self) {
	return self->source();
}

const QMimeData* QDropEvent_MimeData(const QDropEvent* self) {
	return self->mimeData();
}

void QDropEvent_Delete(QDropEvent* self) {
    delete self;
}

QDragMoveEvent* QDragMoveEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
	 return new QDragMoveEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers, int typeVal) {
	 return new QDragMoveEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<QMetaType::Type>(typeVal));
}

QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self) {
	return new QRect(self->answerRect());
}

void QDragMoveEvent_Accept(QDragMoveEvent* self) {
	self->accept();
}

void QDragMoveEvent_Ignore(QDragMoveEvent* self) {
	self->ignore();
}

void QDragMoveEvent_Accept2(QDragMoveEvent* self, const QRect* r) {
	self->accept(*r);
}

void QDragMoveEvent_Ignore2(QDragMoveEvent* self, const QRect* r) {
	self->ignore(*r);
}

void QDragMoveEvent_Delete(QDragMoveEvent* self) {
    delete self;
}

QDragEnterEvent* QDragEnterEvent_new(const QPoint* pos, int actions, const QMimeData* data, int buttons, int modifiers) {
	 return new QDragEnterEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

void QDragEnterEvent_Delete(QDragEnterEvent* self) {
    delete self;
}

QDragLeaveEvent* QDragLeaveEvent_new() {
	 return new QDragLeaveEvent();
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self) {
    delete self;
}

QHelpEvent* QHelpEvent_new(int typeVal, const QPoint* pos, const QPoint* globalPos) {
	 return new QHelpEvent(static_cast<QMetaType::Type>(typeVal), *pos, *globalPos);
}

int QHelpEvent_X(const QHelpEvent* self) {
	return self->x();
}

int QHelpEvent_Y(const QHelpEvent* self) {
	return self->y();
}

int QHelpEvent_GlobalX(const QHelpEvent* self) {
	return self->globalX();
}

int QHelpEvent_GlobalY(const QHelpEvent* self) {
	return self->globalY();
}

const QPoint* QHelpEvent_Pos(const QHelpEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

const QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QHelpEvent_Delete(QHelpEvent* self) {
    delete self;
}

QStatusTipEvent* QStatusTipEvent_new(const libqt_string tip) {
	 return new QStatusTipEvent(QString::fromUtf8(tip.data, tip.len));
}

libqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self) {
	QString _ret = self->tip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusTipEvent_Delete(QStatusTipEvent* self) {
    delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(const libqt_string href) {
	 return new QWhatsThisClickedEvent(QString::fromUtf8(href.data, href.len));
}

libqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self) {
	QString _ret = self->href();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self) {
    delete self;
}

QActionEvent* QActionEvent_new(int typeVal, QAction* action) {
	 return new QActionEvent(typeVal, action);
}

QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before) {
	 return new QActionEvent(typeVal, action, before);
}

QAction* QActionEvent_Action(const QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_Before(const QActionEvent* self) {
	return self->before();
}

void QActionEvent_Delete(QActionEvent* self) {
    delete self;
}

QFileOpenEvent* QFileOpenEvent_new(const libqt_string file) {
	 return new QFileOpenEvent(QString::fromUtf8(file.data, file.len));
}

QFileOpenEvent* QFileOpenEvent_new2(const QUrl* url) {
	 return new QFileOpenEvent(*url);
}

libqt_string QFileOpenEvent_File(const QFileOpenEvent* self) {
	QString _ret = self->file();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
	return new QUrl(self->url());
}

bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, QIODevice::OpenMode flags) {
	return self->openFile(*file, flags);
}

void QFileOpenEvent_Delete(QFileOpenEvent* self) {
    delete self;
}

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
	 return new QToolBarChangeEvent(t);
}

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
	return self->toggle();
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self) {
    delete self;
}

QShortcutEvent* QShortcutEvent_new(const QKeySequence* key, int id) {
	 return new QShortcutEvent(*key, id);
}

QShortcutEvent* QShortcutEvent_new2(const QKeySequence* key) {
	 return new QShortcutEvent(*key);
}

QShortcutEvent* QShortcutEvent_new3(const QKeySequence* key, int id, bool ambiguous) {
	 return new QShortcutEvent(*key, id, ambiguous);
}

QShortcutEvent* QShortcutEvent_new4(const QKeySequence* key, const QShortcut* shortcut) {
	 return new QShortcutEvent(*key, shortcut);
}

QShortcutEvent* QShortcutEvent_new5(const QKeySequence* key, const QShortcut* shortcut, bool ambiguous) {
	 return new QShortcutEvent(*key, shortcut, ambiguous);
}

const QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self) {
	const QKeySequence& _ret = self->key();
	// Cast returned reference into pointer
	return const_cast<QKeySequence*>(&_ret);
}

int QShortcutEvent_ShortcutId(const QShortcutEvent* self) {
	return self->shortcutId();
}

bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self) {
	return self->isAmbiguous();
}

void QShortcutEvent_Delete(QShortcutEvent* self) {
    delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState) {
	 return new QWindowStateChangeEvent(static_cast<QFlags<Qt::WindowState>>(oldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride) {
	 return new QWindowStateChangeEvent(static_cast<QFlags<Qt::WindowState>>(oldState), isOverride);
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
	return self->oldState();
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
	return self->isOverride();
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self) {
    delete self;
}

QTouchEvent* QTouchEvent_new(int eventType) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(int eventType, const QPointingDevice* device, int modifiers, quint8 touchPointStates) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<QFlags<QEventPoint::State>>(touchPointStates));
}

QTouchEvent* QTouchEvent_new3(int eventType, const QPointingDevice* device) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, const QPointingDevice* device, int modifiers) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, const QPointingDevice* device, int modifiers, const libqt_list touchPoints) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), QList<QEventPoint>());
}

QTouchEvent* QTouchEvent_new6(int eventType, const QPointingDevice* device, int modifiers, quint8 touchPointStates, const libqt_list touchPoints) {
	 return new VirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<QFlags<QEventPoint::State>>(touchPointStates), QList<QEventPoint>());
}

QObject* QTouchEvent_Target(const QTouchEvent* self) {
	return self->target();
}

quint8 QTouchEvent_TouchPointStates(const QTouchEvent* self) {
	return self->touchPointStates();
}

libqt_list QTouchEvent_TouchPoints(const QTouchEvent* self) {
	auto _ret = self->touchPoints();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QTouchEvent_IsBeginEvent(const QTouchEvent* self) {
	return self->isBeginEvent();
}

bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self) {
	return self->isUpdateEvent();
}

bool QTouchEvent_IsEndEvent(const QTouchEvent* self) {
	return self->isEndEvent();
}

// Base class handler implementation
bool QTouchEvent_QBaseIsBeginEvent(const QTouchEvent* self) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsBeginEvent_IsBase(true);
	return vqtouchevent->isBeginEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsBeginEvent(const QTouchEvent* self, intptr_t slot) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsBeginEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsBeginEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QTouchEvent_QBaseIsUpdateEvent(const QTouchEvent* self) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsUpdateEvent_IsBase(true);
	return vqtouchevent->isUpdateEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsUpdateEvent(const QTouchEvent* self, intptr_t slot) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsUpdateEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsUpdateEvent_Callback>(slot));
}
}

// Base class handler implementation
bool QTouchEvent_QBaseIsEndEvent(const QTouchEvent* self) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsEndEvent_IsBase(true);
	return vqtouchevent->isEndEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QTouchEvent_OnIsEndEvent(const QTouchEvent* self, intptr_t slot) {
	auto* vqtouchevent = dynamic_cast<const VirtualQTouchEvent*>(self);
	if (vqtouchevent && vqtouchevent->isVirtualQTouchEvent) {
vqtouchevent->setQTouchEvent_IsEndEvent_Callback(reinterpret_cast<VirtualQTouchEvent::QTouchEvent_IsEndEvent_Callback>(slot));
}
}

void QTouchEvent_Delete(QTouchEvent* self) {
    delete self;
}

QScrollPrepareEvent* QScrollPrepareEvent_new(const QPointF* startPos) {
	 return new QScrollPrepareEvent(*startPos);
}

QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self) {
	return new QPointF(self->startPos());
}

QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self) {
	return new QSizeF(self->viewportSize());
}

QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self) {
	return new QRectF(self->contentPosRange());
}

QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self) {
	return new QPointF(self->contentPos());
}

void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, const QSizeF* size) {
	self->setViewportSize(*size);
}

void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, const QRectF* rect) {
	self->setContentPosRange(*rect);
}

void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, const QPointF* pos) {
	self->setContentPos(*pos);
}

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self) {
    delete self;
}

QScrollEvent* QScrollEvent_new(const QPointF* contentPos, const QPointF* overshoot, int scrollState) {
	 return new QScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QPointF* QScrollEvent_ContentPos(const QScrollEvent* self) {
	return new QPointF(self->contentPos());
}

QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self) {
	return new QPointF(self->overshootDistance());
}

int QScrollEvent_ScrollState(const QScrollEvent* self) {
	return self->scrollState();
}

void QScrollEvent_Delete(QScrollEvent* self) {
    delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
	 return new QScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
	return self->orientation();
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
    delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
	 return new QApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
	return self->applicationState();
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
    delete self;
}

QChildWindowEvent* QChildWindowEvent_new(int typeVal, QWindow* childWindow) {
	 return new QChildWindowEvent(static_cast<QMetaType::Type>(typeVal), childWindow);
}

QWindow* QChildWindowEvent_Child(const QChildWindowEvent* self) {
	return self->child();
}

void QChildWindowEvent_Delete(QChildWindowEvent* self) {
    delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val) {
	 return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), s, l, *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l) {
	 return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), s, l);
}

int QInputMethodEvent__Attribute_Type(const QInputMethodEvent__Attribute* self) {
	return self->type;
}

void QInputMethodEvent__Attribute_SetType(QInputMethodEvent__Attribute* self, int type) {
	self->type;
}

int QInputMethodEvent__Attribute_Start(const QInputMethodEvent__Attribute* self) {
	return self->start;
}

void QInputMethodEvent__Attribute_SetStart(QInputMethodEvent__Attribute* self, int start) {
	self->start;
}

int QInputMethodEvent__Attribute_Length(const QInputMethodEvent__Attribute* self) {
	return self->length;
}

void QInputMethodEvent__Attribute_SetLength(QInputMethodEvent__Attribute* self, int length) {
	self->length;
}

QVariant* QInputMethodEvent__Attribute_Value(const QInputMethodEvent__Attribute* self) {
	return new QVariant(self->value);
}

void QInputMethodEvent__Attribute_SetValue(QInputMethodEvent__Attribute* self, QVariant* value) {
	self->value;
}

void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, const QInputMethodEvent__Attribute* param1) {
	self->operator=(*param1);
}

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self) {
    delete self;
}

