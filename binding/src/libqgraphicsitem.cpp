#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "libqgraphicsitem.h"
#include "libqgraphicsitem.hxx"

QGraphicsItem* QGraphicsItem_new() {
	 return new VirtualQGraphicsItem();
}

QGraphicsItem* QGraphicsItem_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsItem(parent);
}

QGraphicsScene* QGraphicsItem_Scene(const QGraphicsItem* self) {
	return self->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(const QGraphicsItem* self) {
	return self->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(const QGraphicsItem* self) {
	return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(const QGraphicsItem* self) {
	return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(const QGraphicsItem* self) {
	return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(const QGraphicsItem* self) {
	return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(const QGraphicsItem* self) {
	return self->window();
}

QGraphicsItem* QGraphicsItem_Panel(const QGraphicsItem* self) {
	return self->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
	self->setParentItem(parent);
}

libqt_list QGraphicsItem_ChildItems(const QGraphicsItem* self) {
	auto _ret = self->childItems();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

bool QGraphicsItem_IsWidget(const QGraphicsItem* self) {
	return self->isWidget();
}

bool QGraphicsItem_IsWindow(const QGraphicsItem* self) {
	return self->isWindow();
}

bool QGraphicsItem_IsPanel(const QGraphicsItem* self) {
	return self->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
	return self->toGraphicsObject();
}

const QGraphicsObject* QGraphicsItem_ToGraphicsObject2(const QGraphicsItem* self) {
	return self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(const QGraphicsItem* self) {
	return self->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
	self->setGroup(group);
}

int QGraphicsItem_Flags(const QGraphicsItem* self) {
	return self->flags();
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, int flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QFlags<QGraphicsItem::GraphicsItemFlag>>(flags));
}

int QGraphicsItem_CacheMode(const QGraphicsItem* self) {
	return self->cacheMode();
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, int mode) {
	self->setCacheMode(static_cast<QFlags<QGraphicsView::CacheModeFlag>>(mode));
}

int QGraphicsItem_PanelModality(const QGraphicsItem* self) {
	return self->panelModality();
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, int panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
	return self->isBlockedByModalPanel();
}

libqt_string QGraphicsItem_ToolTip(const QGraphicsItem* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, const libqt_string toolTip) {
	self->setToolTip(QString::fromUtf8(toolTip.data, toolTip.len));
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
	return new QCursor(self->cursor());
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, const QCursor* cursor) {
	self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(const QGraphicsItem* self) {
	return self->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
	self->unsetCursor();
}

bool QGraphicsItem_IsVisible(const QGraphicsItem* self) {
	return self->isVisible();
}

bool QGraphicsItem_IsVisibleTo(const QGraphicsItem* self, const QGraphicsItem* parent) {
	return self->isVisibleTo(parent);
}

void QGraphicsItem_SetVisible(QGraphicsItem* self, bool visible) {
	self->setVisible(visible);
}

void QGraphicsItem_Hide(QGraphicsItem* self) {
	self->hide();
}

void QGraphicsItem_Show(QGraphicsItem* self) {
	self->show();
}

bool QGraphicsItem_IsEnabled(const QGraphicsItem* self) {
	return self->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(const QGraphicsItem* self) {
	return self->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
	self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(const QGraphicsItem* self) {
	return self->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
	self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(const QGraphicsItem* self) {
	return self->opacity();
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
	return self->effectiveOpacity();
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
	self->setOpacity(opacity);
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(const QGraphicsItem* self) {
	return self->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(const QGraphicsItem* self) {
	return self->acceptedMouseButtons();
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
	self->setAcceptedMouseButtons(static_cast<QFlags<Qt::MouseButton>>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(const QGraphicsItem* self) {
	return self->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(const QGraphicsItem* self) {
	return self->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(const QGraphicsItem* self) {
	return self->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
	self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(const QGraphicsItem* self) {
	return self->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
	self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(const QGraphicsItem* self) {
	return self->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
	self->setActive(active);
}

bool QGraphicsItem_HasFocus(const QGraphicsItem* self) {
	return self->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
	self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
	self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(const QGraphicsItem* self) {
	return self->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
	self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(const QGraphicsItem* self) {
	return self->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(const QGraphicsItem* self) {
	return self->focusScopeItem();
}

void QGraphicsItem_GrabMouse(QGraphicsItem* self) {
	self->grabMouse();
}

void QGraphicsItem_UngrabMouse(QGraphicsItem* self) {
	self->ungrabMouse();
}

void QGraphicsItem_GrabKeyboard(QGraphicsItem* self) {
	self->grabKeyboard();
}

void QGraphicsItem_UngrabKeyboard(QGraphicsItem* self) {
	self->ungrabKeyboard();
}

QPointF* QGraphicsItem_Pos(const QGraphicsItem* self) {
	return new QPointF(self->pos());
}

double QGraphicsItem_X(const QGraphicsItem* self) {
	return self->x();
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
	self->setX(x);
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
	return self->y();
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
	self->setY(y);
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsItem_SetPos(QGraphicsItem* self, const QPointF* pos) {
	self->setPos(*pos);
}

void QGraphicsItem_SetPos2(QGraphicsItem* self, double x, double y) {
	self->setPos(x, y);
}

void QGraphicsItem_MoveBy(QGraphicsItem* self, double dx, double dy) {
	self->moveBy(dx, dy);
}

void QGraphicsItem_EnsureVisible(QGraphicsItem* self) {
	self->ensureVisible();
}

void QGraphicsItem_EnsureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
	self->ensureVisible(x, y, w, h);
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
	return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, const QTransform* viewportTransform) {
	return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, const QGraphicsItem* other) {
	return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_SetTransform(QGraphicsItem* self, const QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsItem_ResetTransform(QGraphicsItem* self) {
	self->resetTransform();
}

void QGraphicsItem_SetRotation(QGraphicsItem* self, double angle) {
	self->setRotation(angle);
}

double QGraphicsItem_Rotation(const QGraphicsItem* self) {
	return self->rotation();
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
	self->setScale(scale);
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
	return self->scale();
}

libqt_list QGraphicsItem_Transformations(const QGraphicsItem* self) {
	auto _ret = self->transformations();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, const libqt_list transformations) {
	self->setTransformations(QList<QGraphicsTransform *>());
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
	return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_SetTransformOriginPoint(QGraphicsItem* self, const QPointF* origin) {
	self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_SetTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
	self->setTransformOriginPoint(ax, ay);
}

void QGraphicsItem_Advance(QGraphicsItem* self, int phase) {
	self->advance(phase);
}

double QGraphicsItem_ZValue(const QGraphicsItem* self) {
	return self->zValue();
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
	self->setZValue(z);
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, const QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->sceneBoundingRect());
}

QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
	return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
	return new QPainterPath(self->clipPath());
}

bool QGraphicsItem_Contains(const QGraphicsItem* self, const QPointF* point) {
	return self->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, const QGraphicsItem* other, int mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, const QPainterPath* path, int mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
	auto _ret = self->collidingItems();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

bool QGraphicsItem_IsObscured(const QGraphicsItem* self) {
	return self->isObscured();
}

bool QGraphicsItem_IsObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return self->isObscured(x, y, w, h);
}

bool QGraphicsItem_IsObscuredBy(const QGraphicsItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_OpaqueArea(const QGraphicsItem* self) {
	return new QPainterPath(self->opaqueArea());
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, const QTransform* itemToDeviceTransform) {
	return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
	return self->boundingRegionGranularity();
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
	self->setBoundingRegionGranularity(granularity);
}

void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItem_Update(QGraphicsItem* self) {
	self->update();
}

void QGraphicsItem_Update2(QGraphicsItem* self, double x, double y, double width, double height) {
	self->update(x, y, width, height);
}

void QGraphicsItem_Scroll(QGraphicsItem* self, double dx, double dy) {
	self->scroll(dx, dy);
}

QPointF* QGraphicsItem_MapToItem(const QGraphicsItem* self, const QGraphicsItem* item, const QPointF* point) {
	return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, const QPointF* point) {
	return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, const QPointF* point) {
	return new QPointF(self->mapToScene(*point));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
	return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, const QRectF* rect) {
	return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, const QRectF* rect) {
	return new QRectF(self->mapRectToScene(*rect));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, const QGraphicsItem* item, const QPainterPath* path) {
	return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_MapToParent4(const QGraphicsItem* self, const QPainterPath* path) {
	return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_MapToScene4(const QGraphicsItem* self, const QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, const QGraphicsItem* item, const QPointF* point) {
	return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, const QPointF* point) {
	return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, const QPointF* point) {
	return new QPointF(self->mapFromScene(*point));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, const QGraphicsItem* item, const QRectF* rect) {
	return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, const QRectF* rect) {
	return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, const QRectF* rect) {
	return new QRectF(self->mapRectFromScene(*rect));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, const QGraphicsItem* item, const QPainterPath* path) {
	return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_MapFromParent4(const QGraphicsItem* self, const QPainterPath* path) {
	return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_MapFromScene4(const QGraphicsItem* self, const QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapToItem(item, x, y));
}

QPointF* QGraphicsItem_MapToParent5(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToParent(x, y));
}

QPointF* QGraphicsItem_MapToScene5(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToScene(x, y));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToItem(item, x, y, w, h));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToParent(x, y, w, h));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToScene(x, y, w, h));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapFromItem(item, x, y));
}

QPointF* QGraphicsItem_MapFromParent5(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromParent(x, y));
}

QPointF* QGraphicsItem_MapFromScene5(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromScene(x, y));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, const QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromItem(item, x, y, w, h));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromParent(x, y, w, h));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromScene(x, y, w, h));
}

bool QGraphicsItem_IsAncestorOf(const QGraphicsItem* self, const QGraphicsItem* child) {
	return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(const QGraphicsItem* self, const QGraphicsItem* other) {
	return self->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(const QGraphicsItem* self) {
	return self->isUnderMouse();
}

QVariant* QGraphicsItem_Data(const QGraphicsItem* self, int key) {
	return new QVariant(self->data(key));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, const QVariant* value) {
	self->setData(key, *value);
}

int QGraphicsItem_InputMethodHints(const QGraphicsItem* self) {
	return self->inputMethodHints();
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
	self->setInputMethodHints(static_cast<QFlags<Qt::InputMethodHint>>(hints));
}

int QGraphicsItem_Type(const QGraphicsItem* self) {
	return self->type();
}

void QGraphicsItem_InstallSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_RemoveSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->removeSceneEventFilter(filterItem);
}

void QGraphicsItem_SetFlag2(QGraphicsItem* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, int mode, const QSize* cacheSize) {
	self->setCacheMode(static_cast<QFlags<QGraphicsView::CacheModeFlag>>(mode), *cacheSize);
}

bool QGraphicsItem_IsBlockedByModalPanel1(const QGraphicsItem* self, QGraphicsItem** blockingPanel) {
	return self->isBlockedByModalPanel(blockingPanel);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_EnsureVisible1(QGraphicsItem* self, const QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsItem_EnsureVisible22(QGraphicsItem* self, const QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, xmargin);
}

void QGraphicsItem_EnsureVisible3(QGraphicsItem* self, const QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, xmargin, ymargin);
}

void QGraphicsItem_EnsureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(x, y, w, h, xmargin);
}

void QGraphicsItem_EnsureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QTransform* QGraphicsItem_ItemTransform2(const QGraphicsItem* self, const QGraphicsItem* other, bool* ok) {
	return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, const QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

libqt_list QGraphicsItem_CollidingItems1(const QGraphicsItem* self, int mode) {
	auto _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, const QRectF* rect) {
	return self->isObscured(*rect);
}

void QGraphicsItem_Update1(QGraphicsItem* self, const QRectF* rect) {
	self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, const QRectF* rect) {
	self->scroll(dx, dy, *rect);
}

// Base class handler implementation
void QGraphicsItem_QBaseAdvance(QGraphicsItem* self, int phase) {
	auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Advance_IsBase(true);
	vqgraphicsitem->advance(phase);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnAdvance(QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Advance_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QGraphicsItem_QBaseBoundingRect(const QGraphicsItem* self) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicsitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnBoundingRect(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsItem_QBaseShape(const QGraphicsItem* self) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicsitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnShape(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsItem_QBaseContains(const QGraphicsItem* self, const QPointF* point) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Contains_IsBase(true);
	return vqgraphicsitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnContains(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsItem_QBaseCollidesWithItem(const QGraphicsItem* self, const QGraphicsItem* other, int mode) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_CollidesWithItem_IsBase(true);
	return vqgraphicsitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithItem(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithItem_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsItem_QBaseCollidesWithPath(const QGraphicsItem* self, const QPainterPath* path, int mode) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_CollidesWithPath_IsBase(true);
	return vqgraphicsitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithPath(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithPath_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsItem_QBaseIsObscuredBy(const QGraphicsItem* self, const QGraphicsItem* item) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_IsObscuredBy_IsBase(true);
	return vqgraphicsitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnIsObscuredBy(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsItem_QBaseOpaqueArea(const QGraphicsItem* self) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicsitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnOpaqueArea(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsItem_QBasePaint(QGraphicsItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Paint_IsBase(true);
	vqgraphicsitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnPaint(QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsItem_QBaseType(const QGraphicsItem* self) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Type_IsBase(true);
	return vqgraphicsitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnType(const QGraphicsItem* self, intptr_t slot) {
	auto* vqgraphicsitem = dynamic_cast<const VirtualQGraphicsItem*>(self);
	if (vqgraphicsitem && vqgraphicsitem->isVirtualQGraphicsItem) {
vqgraphicsitem->setQGraphicsItem_Type_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Type_Callback>(slot));
}
}

void QGraphicsItem_Delete(QGraphicsItem* self) {
    delete self;
}

QGraphicsObject* QGraphicsObject_new() {
	 return new VirtualQGraphicsObject();
}

QGraphicsObject* QGraphicsObject_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsObject(parent);
}

libqt_string QGraphicsObject_Tr(const char* s) {
	QString _ret = QGraphicsObject::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, int typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, int typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
	self->parentChanged();
}

void QGraphicsObject_Connect_ParentChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::parentChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_Connect_OpacityChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::opacityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_Connect_VisibleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::visibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_Connect_EnabledChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::enabledChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_Connect_XChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::xChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_Connect_YChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::yChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_Connect_ZChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::zChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_Connect_RotationChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::rotationChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_Connect_ScaleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::scaleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_Connect_ChildrenChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::childrenChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_Connect_WidthChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::widthChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_Connect_HeightChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::heightChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QGraphicsObject_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsObject::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, int typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<QFlags<Qt::GestureFlag>>(flags));
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
    delete self;
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new() {
	 return new VirtualQAbstractGraphicsShapeItem();
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new2(QGraphicsItem* parent) {
	 return new VirtualQAbstractGraphicsShapeItem(parent);
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
	return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, const QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
	return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, const QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
	return new QPainterPath(self->opaqueArea());
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseIsObscuredBy(const QAbstractGraphicsShapeItem* self, const QGraphicsItem* item) {
	auto* vqabstractgraphicsshapeitem = dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self);
	if (vqabstractgraphicsshapeitem && vqabstractgraphicsshapeitem->isVirtualQAbstractGraphicsShapeItem) {
vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_IsObscuredBy_IsBase(true);
	return vqabstractgraphicsshapeitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnIsObscuredBy(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
	auto* vqabstractgraphicsshapeitem = dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self);
	if (vqabstractgraphicsshapeitem && vqabstractgraphicsshapeitem->isVirtualQAbstractGraphicsShapeItem) {
vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_QBaseOpaqueArea(const QAbstractGraphicsShapeItem* self) {
	auto* vqabstractgraphicsshapeitem = dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self);
	if (vqabstractgraphicsshapeitem && vqabstractgraphicsshapeitem->isVirtualQAbstractGraphicsShapeItem) {
vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqabstractgraphicsshapeitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnOpaqueArea(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
	auto* vqabstractgraphicsshapeitem = dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self);
	if (vqabstractgraphicsshapeitem && vqabstractgraphicsshapeitem->isVirtualQAbstractGraphicsShapeItem) {
vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_OpaqueArea_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_OpaqueArea_Callback>(slot));
}
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self) {
    delete self;
}

QGraphicsPathItem* QGraphicsPathItem_new() {
	 return new VirtualQGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(const QPainterPath* path) {
	 return new VirtualQGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
	 return new VirtualQGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(const QPainterPath* path, QGraphicsItem* parent) {
	 return new VirtualQGraphicsPathItem(*path, parent);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
	return new QPainterPath(self->path());
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, const QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsPathItem_QBaseBoundingRect(const QGraphicsPathItem* self) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicspathitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnBoundingRect(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_QBaseShape(const QGraphicsPathItem* self) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicspathitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnShape(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseContains(const QGraphicsPathItem* self, const QPointF* point) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Contains_IsBase(true);
	return vqgraphicspathitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnContains(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsPathItem_QBasePaint(QGraphicsPathItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Paint_IsBase(true);
	vqgraphicspathitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnPaint(QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseIsObscuredBy(const QGraphicsPathItem* self, const QGraphicsItem* item) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_IsObscuredBy_IsBase(true);
	return vqgraphicspathitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnIsObscuredBy(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_QBaseOpaqueArea(const QGraphicsPathItem* self) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicspathitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnOpaqueArea(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsPathItem_QBaseType(const QGraphicsPathItem* self) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Type_IsBase(true);
	return vqgraphicspathitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnType(const QGraphicsPathItem* self, intptr_t slot) {
	auto* vqgraphicspathitem = dynamic_cast<const VirtualQGraphicsPathItem*>(self);
	if (vqgraphicspathitem && vqgraphicspathitem->isVirtualQGraphicsPathItem) {
vqgraphicspathitem->setQGraphicsPathItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Type_Callback>(slot));
}
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self) {
    delete self;
}

QGraphicsRectItem* QGraphicsRectItem_new() {
	 return new VirtualQGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(const QRectF* rect) {
	 return new VirtualQGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
	 return new VirtualQGraphicsRectItem(x, y, w, h);
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
	 return new VirtualQGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(const QRectF* rect, QGraphicsItem* parent) {
	 return new VirtualQGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	 return new VirtualQGraphicsRectItem(x, y, w, h, parent);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, const QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(x, y, w, h);
}

QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsRectItem_QBaseBoundingRect(const QGraphicsRectItem* self) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicsrectitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnBoundingRect(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_QBaseShape(const QGraphicsRectItem* self) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicsrectitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnShape(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseContains(const QGraphicsRectItem* self, const QPointF* point) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Contains_IsBase(true);
	return vqgraphicsrectitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnContains(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsRectItem_QBasePaint(QGraphicsRectItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Paint_IsBase(true);
	vqgraphicsrectitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnPaint(QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseIsObscuredBy(const QGraphicsRectItem* self, const QGraphicsItem* item) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_IsObscuredBy_IsBase(true);
	return vqgraphicsrectitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnIsObscuredBy(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_QBaseOpaqueArea(const QGraphicsRectItem* self) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicsrectitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnOpaqueArea(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsRectItem_QBaseType(const QGraphicsRectItem* self) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Type_IsBase(true);
	return vqgraphicsrectitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnType(const QGraphicsRectItem* self, intptr_t slot) {
	auto* vqgraphicsrectitem = dynamic_cast<const VirtualQGraphicsRectItem*>(self);
	if (vqgraphicsrectitem && vqgraphicsrectitem->isVirtualQGraphicsRectItem) {
vqgraphicsrectitem->setQGraphicsRectItem_Type_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Type_Callback>(slot));
}
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self) {
    delete self;
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
	 return new VirtualQGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(const QRectF* rect) {
	 return new VirtualQGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
	 return new VirtualQGraphicsEllipseItem(x, y, w, h);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
	 return new VirtualQGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(const QRectF* rect, QGraphicsItem* parent) {
	 return new VirtualQGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	 return new VirtualQGraphicsEllipseItem(x, y, w, h, parent);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, const QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
	self->setRect(x, y, w, h);
}

int QGraphicsEllipseItem_StartAngle(const QGraphicsEllipseItem* self) {
	return self->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
	self->setStartAngle(angle);
}

int QGraphicsEllipseItem_SpanAngle(const QGraphicsEllipseItem* self) {
	return self->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
	self->setSpanAngle(angle);
}

QRectF* QGraphicsEllipseItem_BoundingRect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsEllipseItem_QBaseBoundingRect(const QGraphicsEllipseItem* self) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicsellipseitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnBoundingRect(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_QBaseShape(const QGraphicsEllipseItem* self) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicsellipseitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnShape(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseContains(const QGraphicsEllipseItem* self, const QPointF* point) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Contains_IsBase(true);
	return vqgraphicsellipseitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnContains(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsEllipseItem_QBasePaint(QGraphicsEllipseItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Paint_IsBase(true);
	vqgraphicsellipseitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnPaint(QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseIsObscuredBy(const QGraphicsEllipseItem* self, const QGraphicsItem* item) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_IsObscuredBy_IsBase(true);
	return vqgraphicsellipseitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnIsObscuredBy(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_QBaseOpaqueArea(const QGraphicsEllipseItem* self) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicsellipseitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnOpaqueArea(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsEllipseItem_QBaseType(const QGraphicsEllipseItem* self) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Type_IsBase(true);
	return vqgraphicsellipseitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnType(const QGraphicsEllipseItem* self, intptr_t slot) {
	auto* vqgraphicsellipseitem = dynamic_cast<const VirtualQGraphicsEllipseItem*>(self);
	if (vqgraphicsellipseitem && vqgraphicsellipseitem->isVirtualQGraphicsEllipseItem) {
vqgraphicsellipseitem->setQGraphicsEllipseItem_Type_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Type_Callback>(slot));
}
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self) {
    delete self;
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
	 return new VirtualQGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsPolygonItem(parent);
}

int QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
	return self->fillRule();
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, int rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsPolygonItem_QBaseBoundingRect(const QGraphicsPolygonItem* self) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicspolygonitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnBoundingRect(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_QBaseShape(const QGraphicsPolygonItem* self) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicspolygonitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnShape(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseContains(const QGraphicsPolygonItem* self, const QPointF* point) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Contains_IsBase(true);
	return vqgraphicspolygonitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnContains(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsPolygonItem_QBasePaint(QGraphicsPolygonItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Paint_IsBase(true);
	vqgraphicspolygonitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnPaint(QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseIsObscuredBy(const QGraphicsPolygonItem* self, const QGraphicsItem* item) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_IsObscuredBy_IsBase(true);
	return vqgraphicspolygonitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnIsObscuredBy(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_QBaseOpaqueArea(const QGraphicsPolygonItem* self) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicspolygonitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnOpaqueArea(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsPolygonItem_QBaseType(const QGraphicsPolygonItem* self) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Type_IsBase(true);
	return vqgraphicspolygonitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnType(const QGraphicsPolygonItem* self, intptr_t slot) {
	auto* vqgraphicspolygonitem = dynamic_cast<const VirtualQGraphicsPolygonItem*>(self);
	if (vqgraphicspolygonitem && vqgraphicspolygonitem->isVirtualQGraphicsPolygonItem) {
vqgraphicspolygonitem->setQGraphicsPolygonItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Type_Callback>(slot));
}
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self) {
    delete self;
}

QGraphicsLineItem* QGraphicsLineItem_new() {
	 return new VirtualQGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(const QLineF* line) {
	 return new VirtualQGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
	 return new VirtualQGraphicsLineItem(x1, y1, x2, y2);
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
	 return new VirtualQGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(const QLineF* line, QGraphicsItem* parent) {
	 return new VirtualQGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
	 return new VirtualQGraphicsLineItem(x1, y1, x2, y2, parent);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
	return new QPen(self->pen());
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, const QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
	return new QLineF(self->line());
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, const QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(x1, y1, x2, y2);
}

QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsLineItem_QBaseBoundingRect(const QGraphicsLineItem* self) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicslineitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnBoundingRect(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_QBaseShape(const QGraphicsLineItem* self) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicslineitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnShape(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseContains(const QGraphicsLineItem* self, const QPointF* point) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Contains_IsBase(true);
	return vqgraphicslineitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnContains(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsLineItem_QBasePaint(QGraphicsLineItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Paint_IsBase(true);
	vqgraphicslineitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnPaint(QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseIsObscuredBy(const QGraphicsLineItem* self, const QGraphicsItem* item) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_IsObscuredBy_IsBase(true);
	return vqgraphicslineitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnIsObscuredBy(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_QBaseOpaqueArea(const QGraphicsLineItem* self) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicslineitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnOpaqueArea(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsLineItem_QBaseType(const QGraphicsLineItem* self) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Type_IsBase(true);
	return vqgraphicslineitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnType(const QGraphicsLineItem* self, intptr_t slot) {
	auto* vqgraphicslineitem = dynamic_cast<const VirtualQGraphicsLineItem*>(self);
	if (vqgraphicslineitem && vqgraphicslineitem->isVirtualQGraphicsLineItem) {
vqgraphicslineitem->setQGraphicsLineItem_Type_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Type_Callback>(slot));
}
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self) {
    delete self;
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
	 return new VirtualQGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(const QPixmap* pixmap) {
	 return new VirtualQGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
	 return new VirtualQGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(const QPixmap* pixmap, QGraphicsItem* parent) {
	 return new VirtualQGraphicsPixmapItem(*pixmap, parent);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
	return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, const QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
	return self->transformationMode();
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, int mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, const QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(x, y);
}

QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPixmapItem_Contains(const QGraphicsPixmapItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_IsObscuredBy(const QGraphicsPixmapItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_OpaqueArea(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
	return self->type();
}

int QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
	return self->shapeMode();
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, int mode) {
	self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

// Base class handler implementation
QRectF* QGraphicsPixmapItem_QBaseBoundingRect(const QGraphicsPixmapItem* self) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicspixmapitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnBoundingRect(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_QBaseShape(const QGraphicsPixmapItem* self) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicspixmapitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnShape(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseContains(const QGraphicsPixmapItem* self, const QPointF* point) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Contains_IsBase(true);
	return vqgraphicspixmapitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnContains(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsPixmapItem_QBasePaint(QGraphicsPixmapItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Paint_IsBase(true);
	vqgraphicspixmapitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnPaint(QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseIsObscuredBy(const QGraphicsPixmapItem* self, const QGraphicsItem* item) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_IsObscuredBy_IsBase(true);
	return vqgraphicspixmapitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnIsObscuredBy(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_QBaseOpaqueArea(const QGraphicsPixmapItem* self) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicspixmapitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnOpaqueArea(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsPixmapItem_QBaseType(const QGraphicsPixmapItem* self) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Type_IsBase(true);
	return vqgraphicspixmapitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnType(const QGraphicsPixmapItem* self, intptr_t slot) {
	auto* vqgraphicspixmapitem = dynamic_cast<const VirtualQGraphicsPixmapItem*>(self);
	if (vqgraphicspixmapitem && vqgraphicspixmapitem->isVirtualQGraphicsPixmapItem) {
vqgraphicspixmapitem->setQGraphicsPixmapItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Type_Callback>(slot));
}
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self) {
    delete self;
}

QGraphicsTextItem* QGraphicsTextItem_new() {
	 return new VirtualQGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(const libqt_string text) {
	 return new VirtualQGraphicsTextItem(QString::fromUtf8(text.data, text.len));
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
	 return new VirtualQGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(const libqt_string text, QGraphicsItem* parent) {
	 return new VirtualQGraphicsTextItem(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QGraphicsTextItem_Tr(const char* s) {
	QString _ret = QGraphicsTextItem::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
	QString _ret = self->toHtml();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, const libqt_string html) {
	self->setHtml(QString::fromUtf8(html.data, html.len));
}

libqt_string QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
	QString _ret = self->toPlainText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, const libqt_string text) {
	self->setPlainText(QString::fromUtf8(text.data, text.len));
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
	return new QFont(self->font());
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, const QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, const QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
	return new QColor(self->defaultTextColor());
}

QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsTextItem_Contains(const QGraphicsTextItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsTextItem_IsObscuredBy(const QGraphicsTextItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_OpaqueArea(const QGraphicsTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
	return self->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(width);
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
	return self->textWidth();
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
	self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(const QGraphicsTextItem* self) {
	return self->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
	self->setTextInteractionFlags(static_cast<QFlags<Qt::TextInteractionFlag>>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(const QGraphicsTextItem* self) {
	return self->textInteractionFlags();
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
	self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(const QGraphicsTextItem* self) {
	return self->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(const QGraphicsTextItem* self) {
	return self->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, const QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(const QGraphicsTextItem* self) {
	return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, const libqt_string param1) {
	self->linkActivated(QString::fromUtf8(param1.data, param1.len));
}

void QGraphicsTextItem_Connect_LinkActivated(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, const char*) = reinterpret_cast<void (*)(QGraphicsTextItem*, const char*)>(slot);
    QGraphicsTextItem::connect(self, &QGraphicsTextItem::linkActivated, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, const libqt_string param1) {
	self->linkHovered(QString::fromUtf8(param1.data, param1.len));
}

void QGraphicsTextItem_Connect_LinkHovered(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, const char*) = reinterpret_cast<void (*)(QGraphicsTextItem*, const char*)>(slot);
    QGraphicsTextItem::connect(self, &QGraphicsTextItem::linkHovered, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QGraphicsTextItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QRectF* QGraphicsTextItem_QBaseBoundingRect(const QGraphicsTextItem* self) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicstextitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnBoundingRect(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_QBaseShape(const QGraphicsTextItem* self) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicstextitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnShape(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseContains(const QGraphicsTextItem* self, const QPointF* point) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Contains_IsBase(true);
	return vqgraphicstextitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnContains(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsTextItem_QBasePaint(QGraphicsTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Paint_IsBase(true);
	vqgraphicstextitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnPaint(QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseIsObscuredBy(const QGraphicsTextItem* self, const QGraphicsItem* item) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_IsObscuredBy_IsBase(true);
	return vqgraphicstextitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnIsObscuredBy(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_QBaseOpaqueArea(const QGraphicsTextItem* self) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicstextitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnOpaqueArea(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsTextItem_QBaseType(const QGraphicsTextItem* self) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Type_IsBase(true);
	return vqgraphicstextitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnType(const QGraphicsTextItem* self, intptr_t slot) {
	auto* vqgraphicstextitem = dynamic_cast<const VirtualQGraphicsTextItem*>(self);
	if (vqgraphicstextitem && vqgraphicstextitem->isVirtualQGraphicsTextItem) {
vqgraphicstextitem->setQGraphicsTextItem_Type_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Type_Callback>(slot));
}
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
    delete self;
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
	 return new VirtualQGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(const libqt_string text) {
	 return new VirtualQGraphicsSimpleTextItem(QString::fromUtf8(text.data, text.len));
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
	 return new VirtualQGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(const libqt_string text, QGraphicsItem* parent) {
	 return new VirtualQGraphicsSimpleTextItem(QString::fromUtf8(text.data, text.len), parent);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

libqt_string QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, const QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
	return new QFont(self->font());
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsSimpleTextItem_Contains(const QGraphicsSimpleTextItem* self, const QPointF* point) {
	return self->contains(*point);
}

void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_IsObscuredBy(const QGraphicsSimpleTextItem* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsSimpleTextItem_QBaseBoundingRect(const QGraphicsSimpleTextItem* self) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicssimpletextitem->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnBoundingRect(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_QBaseShape(const QGraphicsSimpleTextItem* self) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Shape_IsBase(true);
	return new QPainterPath(vqgraphicssimpletextitem->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnShape(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Shape_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseContains(const QGraphicsSimpleTextItem* self, const QPointF* point) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Contains_IsBase(true);
	return vqgraphicssimpletextitem->contains(*point);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnContains(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Contains_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBasePaint(QGraphicsSimpleTextItem* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Paint_IsBase(true);
	vqgraphicssimpletextitem->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnPaint(QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseIsObscuredBy(const QGraphicsSimpleTextItem* self, const QGraphicsItem* item) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_IsObscuredBy_IsBase(true);
	return vqgraphicssimpletextitem->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnIsObscuredBy(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_QBaseOpaqueArea(const QGraphicsSimpleTextItem* self) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicssimpletextitem->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnOpaqueArea(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsSimpleTextItem_QBaseType(const QGraphicsSimpleTextItem* self) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Type_IsBase(true);
	return vqgraphicssimpletextitem->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnType(const QGraphicsSimpleTextItem* self, intptr_t slot) {
	auto* vqgraphicssimpletextitem = dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self);
	if (vqgraphicssimpletextitem && vqgraphicssimpletextitem->isVirtualQGraphicsSimpleTextItem) {
vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Type_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Type_Callback>(slot));
}
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self) {
    delete self;
}

QGraphicsItemGroup* QGraphicsItemGroup_new() {
	 return new VirtualQGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, const QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
	return self->type();
}

// Base class handler implementation
QRectF* QGraphicsItemGroup_QBaseBoundingRect(const QGraphicsItemGroup* self) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicsitemgroup->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnBoundingRect(const QGraphicsItemGroup* self, intptr_t slot) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsItemGroup_QBasePaint(QGraphicsItemGroup* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_Paint_IsBase(true);
	vqgraphicsitemgroup->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnPaint(QGraphicsItemGroup* self, intptr_t slot) {
	auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_Paint_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Paint_Callback>(slot));
}
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseIsObscuredBy(const QGraphicsItemGroup* self, const QGraphicsItem* item) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_IsObscuredBy_IsBase(true);
	return vqgraphicsitemgroup->isObscuredBy(item);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnIsObscuredBy(const QGraphicsItemGroup* self, intptr_t slot) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_IsObscuredBy_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsItemGroup_QBaseOpaqueArea(const QGraphicsItemGroup* self) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_OpaqueArea_IsBase(true);
	return new QPainterPath(vqgraphicsitemgroup->opaqueArea());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnOpaqueArea(const QGraphicsItemGroup* self, intptr_t slot) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_OpaqueArea_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsItemGroup_QBaseType(const QGraphicsItemGroup* self) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_Type_IsBase(true);
	return vqgraphicsitemgroup->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnType(const QGraphicsItemGroup* self, intptr_t slot) {
	auto* vqgraphicsitemgroup = dynamic_cast<const VirtualQGraphicsItemGroup*>(self);
	if (vqgraphicsitemgroup && vqgraphicsitemgroup->isVirtualQGraphicsItemGroup) {
vqgraphicsitemgroup->setQGraphicsItemGroup_Type_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Type_Callback>(slot));
}
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
    delete self;
}

