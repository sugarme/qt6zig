#include <QBrush>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHelpEvent>
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
#include <QPalette>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionGraphicsItem>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsscene.h>
#include "libqgraphicsscene.h"
#include "libqgraphicsscene.hxx"

QGraphicsScene* QGraphicsScene_new() {
	 return new VirtualQGraphicsScene();
}

QGraphicsScene* QGraphicsScene_new2(const QRectF* sceneRect) {
	 return new VirtualQGraphicsScene(*sceneRect);
}

QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height) {
	 return new VirtualQGraphicsScene(x, y, width, height);
}

QGraphicsScene* QGraphicsScene_new4(QObject* parent) {
	 return new VirtualQGraphicsScene(parent);
}

QGraphicsScene* QGraphicsScene_new5(const QRectF* sceneRect, QObject* parent) {
	 return new VirtualQGraphicsScene(*sceneRect, parent);
}

QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent) {
	 return new VirtualQGraphicsScene(x, y, width, height, parent);
}

libqt_string QGraphicsScene_Tr(const char* s) {
	QString _ret = QGraphicsScene::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self) {
	return new QRectF(self->sceneRect());
}

double QGraphicsScene_Width(const QGraphicsScene* self) {
	return self->width();
}

double QGraphicsScene_Height(const QGraphicsScene* self) {
	return self->height();
}

void QGraphicsScene_SetSceneRect(QGraphicsScene* self, const QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	self->setSceneRect(x, y, w, h);
}

void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter) {
	self->render(painter);
}

int QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self) {
	return self->itemIndexMethod();
}

void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, int method) {
	self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self) {
	return self->bspTreeDepth();
}

void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth) {
	self->setBspTreeDepth(depth);
}

QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self) {
	return new QRectF(self->itemsBoundingRect());
}

libqt_list QGraphicsScene_Items(const QGraphicsScene* self) {
	return self->items();
}

libqt_list QGraphicsScene_Items2(const QGraphicsScene* self, const QPointF* pos) {
	return self->items(*pos);
}

libqt_list QGraphicsScene_Items3(const QGraphicsScene* self, const QRectF* rect) {
	return self->items(*rect);
}

libqt_list QGraphicsScene_Items4(const QGraphicsScene* self, const QPolygonF* polygon) {
	return self->items(*polygon);
}

libqt_list QGraphicsScene_Items5(const QGraphicsScene* self, const QPainterPath* path) {
	return self->items(*path);
}

libqt_list QGraphicsScene_Items6(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
	return self->items(x, y, w, h, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_CollidingItems(const QGraphicsScene* self, const QGraphicsItem* item) {
	return self->collidingItems(item);
}

QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, const QPointF* pos, const QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, const QTransform* deviceTransform) {
	return self->itemAt(x, y, *deviceTransform);
}

libqt_list QGraphicsScene_SelectedItems(const QGraphicsScene* self) {
	return self->selectedItems();
}

QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self) {
	return new QPainterPath(self->selectionArea());
}

void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, const QPainterPath* path, const QTransform* deviceTransform) {
	self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, const QPainterPath* path) {
	self->setSelectionArea(*path);
}

QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, const libqt_list items) {
	return self->createItemGroup(*items);
}

void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
	self->destroyItemGroup(group);
}

void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, const QRectF* rect) {
	return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, const QLineF* line) {
	return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, const QPainterPath* path) {
	return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, const QPixmap* pixmap) {
	return self->addPixmap(*pixmap);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon(QGraphicsScene* self, const QPolygonF* polygon) {
	return self->addPolygon(*polygon);
}

QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, const QRectF* rect) {
	return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, const libqt_string text) {
	return self->addText(QString::fromUtf8(text.data, text.len));
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, const libqt_string text) {
	return self->addSimpleText(QString::fromUtf8(text.data, text.len));
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget) {
	return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addEllipse(x, y, w, h);
}

QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
	return self->addLine(x1, y1, x2, y2);
}

QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addRect(x, y, w, h);
}

void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self) {
	return self->focusItem();
}

void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->setFocusItem(item);
}

bool QGraphicsScene_HasFocus(const QGraphicsScene* self) {
	return self->hasFocus();
}

void QGraphicsScene_SetFocus(QGraphicsScene* self) {
	self->setFocus();
}

void QGraphicsScene_ClearFocus(QGraphicsScene* self) {
	self->clearFocus();
}

void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled) {
	self->setStickyFocus(enabled);
}

bool QGraphicsScene_StickyFocus(const QGraphicsScene* self) {
	return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self) {
	return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, const QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, const QBrush* brush) {
	self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

libqt_list QGraphicsScene_Views(const QGraphicsScene* self) {
	return self->views();
}

void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h) {
	self->update(x, y, w, h);
}

void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
	self->invalidate(x, y, w, h);
}

QStyle* QGraphicsScene_Style(const QGraphicsScene* self) {
	return self->style();
}

void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsScene_Font(const QGraphicsScene* self) {
	return new QFont(self->font());
}

void QGraphicsScene_SetFont(QGraphicsScene* self, const QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsScene_Palette(const QGraphicsScene* self) {
	return new QPalette(self->palette());
}

void QGraphicsScene_SetPalette(QGraphicsScene* self, const QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsScene_IsActive(const QGraphicsScene* self) {
	return self->isActive();
}

QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self) {
	return self->activePanel();
}

void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
	self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self) {
	return self->activeWindow();
}

void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
	self->setActiveWindow(widget);
}

bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
	return self->sendEvent(item, event);
}

double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self) {
	return self->minimumRenderSize();
}

void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize) {
	self->setMinimumRenderSize(minSize);
}

bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self) {
	return self->focusOnTouch();
}

void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled) {
	self->setFocusOnTouch(enabled);
}

void QGraphicsScene_Update2(QGraphicsScene* self) {
	self->update();
}

void QGraphicsScene_Invalidate2(QGraphicsScene* self) {
	self->invalidate();
}

void QGraphicsScene_Advance(QGraphicsScene* self) {
	self->advance();
}

void QGraphicsScene_ClearSelection(QGraphicsScene* self) {
	self->clearSelection();
}

void QGraphicsScene_Clear(QGraphicsScene* self) {
	self->clear();
}

void QGraphicsScene_Changed(QGraphicsScene* self, const libqt_list region) {
	self->changed(*region);
}

void QGraphicsScene_Connect_Changed(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, libqt_list) = reinterpret_cast<void (*)(QGraphicsScene*, libqt_list)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::changed, [self, slotFunc](const QList<QRectF>& region) {
	slotFunc(self, region);
    });
}

void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, const QRectF* rect) {
	self->sceneRectChanged(*rect);
}

void QGraphicsScene_Connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, const QRectF*) = reinterpret_cast<void (*)(QGraphicsScene*, const QRectF*)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::sceneRectChanged, [self, slotFunc](const QRectF& rect) {
	slotFunc(self, rect);
    });
}

void QGraphicsScene_SelectionChanged(QGraphicsScene* self) {
	self->selectionChanged();
}

void QGraphicsScene_Connect_SelectionChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*) = reinterpret_cast<void (*)(QGraphicsScene*)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::selectionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
	self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_Connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int) = reinterpret_cast<void (*)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, int)>(slot);
    QGraphicsScene::connect(self, &QGraphicsScene::focusItemChanged, [self, slotFunc](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
	slotFunc(self, newFocus, oldFocus, reason);
    });
}

libqt_string QGraphicsScene_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScene::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsScene_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScene::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, const QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source) {
	self->render(painter, *target, *source);
}

void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, const QRectF* target, const QRectF* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

libqt_list QGraphicsScene_Items1(const QGraphicsScene* self, int order) {
	return self->items(static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_Items22(const QGraphicsScene* self, const QPointF* pos, int mode) {
	return self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list QGraphicsScene_Items32(const QGraphicsScene* self, const QPointF* pos, int mode, int order) {
	return self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_Items42(const QGraphicsScene* self, const QPointF* pos, int mode, int order, const QTransform* deviceTransform) {
	return self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
}

libqt_list QGraphicsScene_Items23(const QGraphicsScene* self, const QRectF* rect, int mode) {
	return self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list QGraphicsScene_Items33(const QGraphicsScene* self, const QRectF* rect, int mode, int order) {
	return self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_Items43(const QGraphicsScene* self, const QRectF* rect, int mode, int order, const QTransform* deviceTransform) {
	return self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
}

libqt_list QGraphicsScene_Items24(const QGraphicsScene* self, const QPolygonF* polygon, int mode) {
	return self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list QGraphicsScene_Items34(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order) {
	return self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_Items44(const QGraphicsScene* self, const QPolygonF* polygon, int mode, int order, const QTransform* deviceTransform) {
	return self->items(*polygon, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
}

libqt_list QGraphicsScene_Items25(const QGraphicsScene* self, const QPainterPath* path, int mode) {
	return self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

libqt_list QGraphicsScene_Items35(const QGraphicsScene* self, const QPainterPath* path, int mode, int order) {
	return self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
}

libqt_list QGraphicsScene_Items45(const QGraphicsScene* self, const QPainterPath* path, int mode, int order, const QTransform* deviceTransform) {
	return self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
}

libqt_list QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, const QTransform* deviceTransform) {
	return self->items(x, y, w, h, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
}

libqt_list QGraphicsScene_CollidingItems2(const QGraphicsScene* self, const QGraphicsItem* item, int mode) {
	return self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea22(QGraphicsScene* self, const QPainterPath* path, int selectionOperation) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, const QPainterPath* path, int selectionOperation, int mode, const QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, const QRectF* rect, const QPen* pen) {
	return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush) {
	return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, const QLineF* line, const QPen* pen) {
	return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, const QPainterPath* path, const QPen* pen) {
	return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, const QPainterPath* path, const QPen* pen, const QBrush* brush) {
	return self->addPath(*path, *pen, *brush);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon2(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen) {
	return self->addPolygon(*polygon, *pen);
}

QGraphicsPolygonItem* QGraphicsScene_AddPolygon3(QGraphicsScene* self, const QPolygonF* polygon, const QPen* pen, const QBrush* brush) {
	return self->addPolygon(*polygon, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, const QRectF* rect, const QPen* pen) {
	return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, const QRectF* rect, const QPen* pen, const QBrush* brush) {
	return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, const libqt_string text, const QFont* font) {
	return self->addText(QString::fromUtf8(text.data, text.len), *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, const libqt_string text, const QFont* font) {
	return self->addSimpleText(QString::fromUtf8(text.data, text.len), *font);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
	return self->addWidget(widget, static_cast<QFlags<Qt::WindowType>>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen) {
	return self->addEllipse(x, y, w, h, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush) {
	return self->addEllipse(x, y, w, h, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, const QPen* pen) {
	return self->addLine(x1, y1, x2, y2, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen) {
	return self->addRect(x, y, w, h, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, const QPen* pen, const QBrush* brush) {
	return self->addRect(x, y, w, h, *pen, *brush);
}

void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason) {
	self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_SetFocus1(QGraphicsScene* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
	self->invalidate(x, y, w, h, static_cast<QFlags<QGraphicsScene::SceneLayer>>(layers));
}

void QGraphicsScene_Update1(QGraphicsScene* self, const QRectF* rect) {
	self->update(*rect);
}

void QGraphicsScene_Invalidate1(QGraphicsScene* self, const QRectF* rect) {
	self->invalidate(*rect);
}

void QGraphicsScene_Invalidate22(QGraphicsScene* self, const QRectF* rect, int layers) {
	self->invalidate(*rect, static_cast<QFlags<QGraphicsScene::SceneLayer>>(layers));
}

// Base class handler implementation
QVariant* QGraphicsScene_QBaseInputMethodQuery(const QGraphicsScene* self, int query) {
	auto* vqgraphicsscene = dynamic_cast<const VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_InputMethodQuery_IsBase(true);
	return new QVariant(vqgraphicsscene->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodQuery(const QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<const VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsScene_Event(QGraphicsScene* self, QEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	return vqgraphicsscene->event(event);
	} else {
	return self->QGraphicsScene::event(event);
}
}

// Base class handler implementation
bool QGraphicsScene_QBaseEvent(QGraphicsScene* self, QEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_Event_IsBase(true);
	return vqgraphicsscene->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_Event_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsScene_EventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	return vqgraphicsscene->eventFilter(watched, event);
	} else {
	return self->QGraphicsScene::eventFilter(watched, event);
}
}

// Base class handler implementation
bool QGraphicsScene_QBaseEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_EventFilter_IsBase(true);
	return vqgraphicsscene->eventFilter(watched, event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnEventFilter(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_ContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->contextMenuEvent(event);
	} else {
	self->QGraphicsScene::contextMenuEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_ContextMenuEvent_IsBase(true);
	vqgraphicsscene->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnContextMenuEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->dragEnterEvent(event);
	} else {
	self->QGraphicsScene::dragEnterEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragEnterEvent_IsBase(true);
	vqgraphicsscene->dragEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragEnterEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->dragMoveEvent(event);
	} else {
	self->QGraphicsScene::dragMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragMoveEvent_IsBase(true);
	vqgraphicsscene->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragMoveEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->dragLeaveEvent(event);
	} else {
	self->QGraphicsScene::dragLeaveEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragLeaveEvent_IsBase(true);
	vqgraphicsscene->dragLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDragLeaveEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->dropEvent(event);
	} else {
	self->QGraphicsScene::dropEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DropEvent_IsBase(true);
	vqgraphicsscene->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDropEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_FocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->focusInEvent(event);
	} else {
	self->QGraphicsScene::focusInEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseFocusInEvent(QGraphicsScene* self, QFocusEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusInEvent_IsBase(true);
	vqgraphicsscene->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusInEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_FocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->focusOutEvent(event);
	} else {
	self->QGraphicsScene::focusOutEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseFocusOutEvent(QGraphicsScene* self, QFocusEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusOutEvent_IsBase(true);
	vqgraphicsscene->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusOutEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_HelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->helpEvent(event);
	} else {
	self->QGraphicsScene::helpEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_HelpEvent_IsBase(true);
	vqgraphicsscene->helpEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnHelpEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_HelpEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_HelpEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_KeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->keyPressEvent(event);
	} else {
	self->QGraphicsScene::keyPressEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseKeyPressEvent(QGraphicsScene* self, QKeyEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_KeyPressEvent_IsBase(true);
	vqgraphicsscene->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyPressEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_KeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->keyReleaseEvent(event);
	} else {
	self->QGraphicsScene::keyReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_KeyReleaseEvent_IsBase(true);
	vqgraphicsscene->keyReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnKeyReleaseEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_MousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->mousePressEvent(event);
	} else {
	self->QGraphicsScene::mousePressEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MousePressEvent_IsBase(true);
	vqgraphicsscene->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMousePressEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_MouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->mouseMoveEvent(event);
	} else {
	self->QGraphicsScene::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseMoveEvent_IsBase(true);
	vqgraphicsscene->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseMoveEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_MouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->mouseReleaseEvent(event);
	} else {
	self->QGraphicsScene::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseReleaseEvent_IsBase(true);
	vqgraphicsscene->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseReleaseEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_MouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->mouseDoubleClickEvent(event);
	} else {
	self->QGraphicsScene::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseDoubleClickEvent_IsBase(true);
	vqgraphicsscene->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnMouseDoubleClickEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_WheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->wheelEvent(event);
	} else {
	self->QGraphicsScene::wheelEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_WheelEvent_IsBase(true);
	vqgraphicsscene->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnWheelEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_InputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->inputMethodEvent(event);
	} else {
	self->QGraphicsScene::inputMethodEvent(event);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_InputMethodEvent_IsBase(true);
	vqgraphicsscene->inputMethodEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnInputMethodEvent(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->drawBackground(painter, *rect);
	} else {
	self->QGraphicsScene::drawBackground(painter, *rect);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawBackground_IsBase(true);
	vqgraphicsscene->drawBackground(painter, *rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawBackground(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawBackground_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawBackground_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->drawForeground(painter, *rect);
	} else {
	self->QGraphicsScene::drawForeground(painter, *rect);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawForeground_IsBase(true);
	vqgraphicsscene->drawForeground(painter, *rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawForeground(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawForeground_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawForeground_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsScene_DrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	vqgraphicsscene->drawItems(painter, numItems, items, options, widget);
	} else {
	self->QGraphicsScene::drawItems(painter, numItems, items, options, widget);
}
}

// Base class handler implementation
void QGraphicsScene_QBaseDrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawItems_IsBase(true);
	vqgraphicsscene->drawItems(painter, numItems, items, options, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnDrawItems(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_DrawItems_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_DrawItems_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsScene_FocusNextPrevChild(QGraphicsScene* self, bool next) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
	return vqgraphicsscene->focusNextPrevChild(next);
	} else {
	return self->QGraphicsScene::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QGraphicsScene_QBaseFocusNextPrevChild(QGraphicsScene* self, bool next) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusNextPrevChild_IsBase(true);
	return vqgraphicsscene->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsScene_OnFocusNextPrevChild(QGraphicsScene* self, intptr_t slot) {
	auto* vqgraphicsscene = dynamic_cast<VirtualQGraphicsScene*>(self);
	if (vqgraphicsscene && vqgraphicsscene->isVirtualQGraphicsScene) {
vqgraphicsscene->setQGraphicsScene_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsScene::QGraphicsScene_FocusNextPrevChild_Callback>(slot));
}
}

void QGraphicsScene_Delete(QGraphicsScene* self) {
    delete self;
}

