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
#include <type_traits>
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
	auto _ret = self->items();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items2(const QGraphicsScene* self, const QPointF* pos) {
	auto _ret = self->items(*pos);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items3(const QGraphicsScene* self, const QRectF* rect) {
	auto _ret = self->items(*rect);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items5(const QGraphicsScene* self, const QPainterPath* path) {
	auto _ret = self->items(*path);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items6(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
	auto _ret = self->items(x, y, w, h, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_CollidingItems(const QGraphicsScene* self, const QGraphicsItem* item) {
	auto _ret = self->collidingItems(item);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, const QPointF* pos, const QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, const QTransform* deviceTransform) {
	return self->itemAt(x, y, *deviceTransform);
}

libqt_list QGraphicsScene_SelectedItems(const QGraphicsScene* self) {
	auto _ret = self->selectedItems();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
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
	return self->createItemGroup(QList<QGraphicsItem *>());
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
	auto _ret = self->views();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
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
	self->changed(QList<QRectF>());
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
	auto _ret = self->items(static_cast<Qt::SortOrder>(order));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items22(const QGraphicsScene* self, const QPointF* pos, int mode) {
	auto _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items32(const QGraphicsScene* self, const QPointF* pos, int mode, int order) {
	auto _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items42(const QGraphicsScene* self, const QPointF* pos, int mode, int order, const QTransform* deviceTransform) {
	auto _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items23(const QGraphicsScene* self, const QRectF* rect, int mode) {
	auto _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items33(const QGraphicsScene* self, const QRectF* rect, int mode, int order) {
	auto _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items43(const QGraphicsScene* self, const QRectF* rect, int mode, int order, const QTransform* deviceTransform) {
	auto _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items25(const QGraphicsScene* self, const QPainterPath* path, int mode) {
	auto _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items35(const QGraphicsScene* self, const QPainterPath* path, int mode, int order) {
	auto _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items45(const QGraphicsScene* self, const QPainterPath* path, int mode, int order, const QTransform* deviceTransform) {
	auto _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, const QTransform* deviceTransform) {
	auto _ret = self->items(x, y, w, h, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsScene_CollidingItems2(const QGraphicsScene* self, const QGraphicsItem* item, int mode) {
	auto _ret = self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
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

void QGraphicsScene_Delete(QGraphicsScene* self) {
    delete self;
}

