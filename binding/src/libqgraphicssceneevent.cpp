#include <QEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QMimeData>
#include <QPoint>
#include <QPointF>
#include <QSizeF>
#include <QWidget>
#include <qgraphicssceneevent.h>
#include "libqgraphicssceneevent.h"
#include "libqgraphicssceneevent.hxx"

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal) {
	 return new QGraphicsSceneEvent(static_cast<QMetaType::Type>(typeVal));
}

QWidget* QGraphicsSceneEvent_Widget(const QGraphicsSceneEvent* self) {
	return self->widget();
}

void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

unsigned long long QGraphicsSceneEvent_Timestamp(const QGraphicsSceneEvent* self) {
	return self->timestamp();
}

void QGraphicsSceneEvent_SetTimestamp(QGraphicsSceneEvent* self, unsigned long long ts) {
	self->setTimestamp(ts);
}

void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self) {
    delete self;
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new() {
	 return new QGraphicsSceneMouseEvent();
}

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal) {
	 return new QGraphicsSceneMouseEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneMouseEvent_Pos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ScenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_ScreenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos) {
	self->setButtonDownPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPointF(self->buttonDownScenePos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos) {
	self->setButtonDownScenePos(static_cast<Qt::MouseButton>(button), *pos);
}

QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button) {
	return new QPoint(self->buttonDownScreenPos(static_cast<Qt::MouseButton>(button)));
}

void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, const QPoint* pos) {
	self->setButtonDownScreenPos(static_cast<Qt::MouseButton>(button), *pos);
}

QPointF* QGraphicsSceneMouseEvent_LastPos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneMouseEvent_LastScenePos(const QGraphicsSceneMouseEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneMouseEvent_LastScreenPos(const QGraphicsSceneMouseEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneMouseEvent_Buttons(const QGraphicsSceneMouseEvent* self) {
	return self->buttons();
}

void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons) {
	self->setButtons(static_cast<QFlags<Qt::MouseButton>>(buttons));
}

int QGraphicsSceneMouseEvent_Button(const QGraphicsSceneMouseEvent* self) {
	return self->button();
}

void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, int button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QGraphicsSceneMouseEvent_Modifiers(const QGraphicsSceneMouseEvent* self) {
	return self->modifiers();
}

void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

int QGraphicsSceneMouseEvent_Source(const QGraphicsSceneMouseEvent* self) {
	return self->source();
}

void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, int source) {
	self->setSource(static_cast<Qt::MouseEventSource>(source));
}

int QGraphicsSceneMouseEvent_Flags(const QGraphicsSceneMouseEvent* self) {
	return self->flags();
}

void QGraphicsSceneMouseEvent_SetFlags(QGraphicsSceneMouseEvent* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::MouseEventFlag>>(flags));
}

void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self) {
    delete self;
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new() {
	 return new QGraphicsSceneWheelEvent();
}

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal) {
	 return new QGraphicsSceneWheelEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneWheelEvent_Pos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, const QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneWheelEvent_ScenePos(const QGraphicsSceneWheelEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneWheelEvent_ScreenPos(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneWheelEvent_Buttons(const QGraphicsSceneWheelEvent* self) {
	return self->buttons();
}

void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons) {
	self->setButtons(static_cast<QFlags<Qt::MouseButton>>(buttons));
}

int QGraphicsSceneWheelEvent_Modifiers(const QGraphicsSceneWheelEvent* self) {
	return self->modifiers();
}

void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

int QGraphicsSceneWheelEvent_Delta(const QGraphicsSceneWheelEvent* self) {
	return self->delta();
}

void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta) {
	self->setDelta(delta);
}

int QGraphicsSceneWheelEvent_Orientation(const QGraphicsSceneWheelEvent* self) {
	return self->orientation();
}

void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsSceneWheelEvent_Phase(const QGraphicsSceneWheelEvent* self) {
	return self->phase();
}

void QGraphicsSceneWheelEvent_SetPhase(QGraphicsSceneWheelEvent* self, int scrollPhase) {
	self->setPhase(static_cast<Qt::ScrollPhase>(scrollPhase));
}

QPoint* QGraphicsSceneWheelEvent_PixelDelta(const QGraphicsSceneWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

void QGraphicsSceneWheelEvent_SetPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta) {
	self->setPixelDelta(*delta);
}

bool QGraphicsSceneWheelEvent_IsInverted(const QGraphicsSceneWheelEvent* self) {
	return self->isInverted();
}

void QGraphicsSceneWheelEvent_SetInverted(QGraphicsSceneWheelEvent* self, bool inverted) {
	self->setInverted(inverted);
}

void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self) {
    delete self;
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new() {
	 return new QGraphicsSceneContextMenuEvent();
}

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal) {
	 return new QGraphicsSceneContextMenuEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneContextMenuEvent_Pos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneContextMenuEvent_ScenePos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(const QGraphicsSceneContextMenuEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneContextMenuEvent_Modifiers(const QGraphicsSceneContextMenuEvent* self) {
	return self->modifiers();
}

void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

int QGraphicsSceneContextMenuEvent_Reason(const QGraphicsSceneContextMenuEvent* self) {
	return self->reason();
}

void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, int reason) {
	self->setReason(static_cast<QGraphicsSceneContextMenuEvent::Reason>(reason));
}

void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self) {
    delete self;
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new() {
	 return new QGraphicsSceneHoverEvent();
}

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal) {
	 return new QGraphicsSceneHoverEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneHoverEvent_Pos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_ScenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_ScreenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastPos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastPos());
}

void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
	self->setLastPos(*pos);
}

QPointF* QGraphicsSceneHoverEvent_LastScenePos(const QGraphicsSceneHoverEvent* self) {
	return new QPointF(self->lastScenePos());
}

void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos) {
	self->setLastScenePos(*pos);
}

QPoint* QGraphicsSceneHoverEvent_LastScreenPos(const QGraphicsSceneHoverEvent* self) {
	return new QPoint(self->lastScreenPos());
}

void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos) {
	self->setLastScreenPos(*pos);
}

int QGraphicsSceneHoverEvent_Modifiers(const QGraphicsSceneHoverEvent* self) {
	return self->modifiers();
}

void QGraphicsSceneHoverEvent_SetModifiers(QGraphicsSceneHoverEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self) {
    delete self;
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new() {
	 return new QGraphicsSceneHelpEvent();
}

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal) {
	 return new QGraphicsSceneHelpEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneHelpEvent_ScenePos(const QGraphicsSceneHelpEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneHelpEvent_ScreenPos(const QGraphicsSceneHelpEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self) {
    delete self;
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new() {
	 return new QGraphicsSceneDragDropEvent();
}

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal) {
	 return new QGraphicsSceneDragDropEvent(static_cast<QMetaType::Type>(typeVal));
}

QPointF* QGraphicsSceneDragDropEvent_Pos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->pos());
}

void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, const QPointF* pos) {
	self->setPos(*pos);
}

QPointF* QGraphicsSceneDragDropEvent_ScenePos(const QGraphicsSceneDragDropEvent* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, const QPointF* pos) {
	self->setScenePos(*pos);
}

QPoint* QGraphicsSceneDragDropEvent_ScreenPos(const QGraphicsSceneDragDropEvent* self) {
	return new QPoint(self->screenPos());
}

void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, const QPoint* pos) {
	self->setScreenPos(*pos);
}

int QGraphicsSceneDragDropEvent_Buttons(const QGraphicsSceneDragDropEvent* self) {
	return self->buttons();
}

void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons) {
	self->setButtons(static_cast<QFlags<Qt::MouseButton>>(buttons));
}

int QGraphicsSceneDragDropEvent_Modifiers(const QGraphicsSceneDragDropEvent* self) {
	return self->modifiers();
}

void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers) {
	self->setModifiers(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

int QGraphicsSceneDragDropEvent_PossibleActions(const QGraphicsSceneDragDropEvent* self) {
	return self->possibleActions();
}

void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions) {
	self->setPossibleActions(static_cast<QFlags<Qt::DropAction>>(actions));
}

int QGraphicsSceneDragDropEvent_ProposedAction(const QGraphicsSceneDragDropEvent* self) {
	return self->proposedAction();
}

void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setProposedAction(static_cast<Qt::DropAction>(action));
}

void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self) {
	self->acceptProposedAction();
}

int QGraphicsSceneDragDropEvent_DropAction(const QGraphicsSceneDragDropEvent* self) {
	return self->dropAction();
}

void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QWidget* QGraphicsSceneDragDropEvent_Source(const QGraphicsSceneDragDropEvent* self) {
	return self->source();
}

void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source) {
	self->setSource(source);
}

const QMimeData* QGraphicsSceneDragDropEvent_MimeData(const QGraphicsSceneDragDropEvent* self) {
	return self->mimeData();
}

void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, const QMimeData* data) {
	self->setMimeData(data);
}

void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self) {
    delete self;
}

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new() {
	 return new QGraphicsSceneResizeEvent();
}

QSizeF* QGraphicsSceneResizeEvent_OldSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->oldSize());
}

void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, const QSizeF* size) {
	self->setOldSize(*size);
}

QSizeF* QGraphicsSceneResizeEvent_NewSize(const QGraphicsSceneResizeEvent* self) {
	return new QSizeF(self->newSize());
}

void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, const QSizeF* size) {
	self->setNewSize(*size);
}

void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self) {
    delete self;
}

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new() {
	 return new QGraphicsSceneMoveEvent();
}

QPointF* QGraphicsSceneMoveEvent_OldPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->oldPos());
}

void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, const QPointF* pos) {
	self->setOldPos(*pos);
}

QPointF* QGraphicsSceneMoveEvent_NewPos(const QGraphicsSceneMoveEvent* self) {
	return new QPointF(self->newPos());
}

void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, const QPointF* pos) {
	self->setNewPos(*pos);
}

void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self) {
    delete self;
}

