#include <QAbstractScrollArea>
#include <QBrush>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGraphicsItem>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgraphicsview.h>
#include "libqgraphicsview.h"
#include "libqgraphicsview.hxx"

QGraphicsView* QGraphicsView_new(QWidget* parent) {
	 return new VirtualQGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
	 return new VirtualQGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
	 return new VirtualQGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
	 return new VirtualQGraphicsView(scene, parent);
}

libqt_string QGraphicsView_Tr(const char* s) {
	QString _ret = QGraphicsView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
	return new QSize(self->sizeHint());
}

int QGraphicsView_RenderHints(const QGraphicsView* self) {
	return self->renderHints();
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
	self->setRenderHints(static_cast<QFlags<QPainter::RenderHint>>(hints));
}

int QGraphicsView_Alignment(const QGraphicsView* self) {
	return self->alignment();
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QGraphicsView_TransformationAnchor(const QGraphicsView* self) {
	return self->transformationAnchor();
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor) {
	self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ResizeAnchor(const QGraphicsView* self) {
	return self->resizeAnchor();
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor) {
	self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self) {
	return self->viewportUpdateMode();
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode) {
	self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(const QGraphicsView* self) {
	return self->optimizationFlags();
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
	self->setOptimizationFlags(static_cast<QFlags<QGraphicsView::OptimizationFlag>>(flags));
}

int QGraphicsView_DragMode(const QGraphicsView* self) {
	return self->dragMode();
}

void QGraphicsView_SetDragMode(QGraphicsView* self, int mode) {
	self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self) {
	return self->rubberBandSelectionMode();
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode) {
	self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self) {
	return new QRect(self->rubberBandRect());
}

int QGraphicsView_CacheMode(const QGraphicsView* self) {
	return self->cacheMode();
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
	self->setCacheMode(static_cast<QFlags<QGraphicsView::CacheModeFlag>>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(const QGraphicsView* self) {
	return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self) {
	return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(const QGraphicsView* self) {
	return new QRectF(self->sceneRect());
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, const QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
	self->setSceneRect(x, y, w, h);
}

QTransform* QGraphicsView_Transform(const QGraphicsView* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self) {
	return new QTransform(self->viewportTransform());
}

bool QGraphicsView_IsTransformed(const QGraphicsView* self) {
	return self->isTransformed();
}

void QGraphicsView_SetTransform(QGraphicsView* self, const QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsView_ResetTransform(QGraphicsView* self) {
	self->resetTransform();
}

void QGraphicsView_Rotate(QGraphicsView* self, double angle) {
	self->rotate(angle);
}

void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy) {
	self->scale(sx, sy);
}

void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv) {
	self->shear(sh, sv);
}

void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy) {
	self->translate(dx, dy);
}

void QGraphicsView_CenterOn(QGraphicsView* self, const QPointF* pos) {
	self->centerOn(*pos);
}

void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y) {
	self->centerOn(x, y);
}

void QGraphicsView_CenterOn3(QGraphicsView* self, const QGraphicsItem* item) {
	self->centerOn(item);
}

void QGraphicsView_EnsureVisible(QGraphicsView* self, const QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
	self->ensureVisible(x, y, w, h);
}

void QGraphicsView_EnsureVisible3(QGraphicsView* self, const QGraphicsItem* item) {
	self->ensureVisible(item);
}

void QGraphicsView_FitInView(QGraphicsView* self, const QRectF* rect) {
	self->fitInView(*rect);
}

void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h) {
	self->fitInView(x, y, w, h);
}

void QGraphicsView_FitInView3(QGraphicsView* self, const QGraphicsItem* item) {
	self->fitInView(item);
}

void QGraphicsView_Render(QGraphicsView* self, QPainter* painter) {
	self->render(painter);
}

libqt_list QGraphicsView_Items(const QGraphicsView* self) {
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

libqt_list QGraphicsView_Items2(const QGraphicsView* self, const QPoint* pos) {
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

libqt_list QGraphicsView_Items3(const QGraphicsView* self, int x, int y) {
	auto _ret = self->items(x, y);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsView_Items4(const QGraphicsView* self, const QRect* rect) {
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

libqt_list QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h) {
	auto _ret = self->items(x, y, w, h);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsView_Items7(const QGraphicsView* self, const QPainterPath* path) {
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

QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, const QPoint* pos) {
	return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y) {
	return self->itemAt(x, y);
}

QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, const QPoint* point) {
	return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_MapToScene4(const QGraphicsView* self, const QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, const QPointF* point) {
	return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_MapFromScene4(const QGraphicsView* self, const QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene5(const QGraphicsView* self, int x, int y) {
	return new QPointF(self->mapToScene(x, y));
}

QPoint* QGraphicsView_MapFromScene5(const QGraphicsView* self, double x, double y) {
	return new QPoint(self->mapFromScene(x, y));
}

QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, const QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, const QBrush* brush) {
	self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, const libqt_list rects) {
	self->updateScene(QList<QRectF>());
}

void QGraphicsView_InvalidateScene(QGraphicsView* self) {
	self->invalidateScene();
}

void QGraphicsView_UpdateSceneRect(QGraphicsView* self, const QRectF* rect) {
	self->updateSceneRect(*rect);
}

void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
	self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_Connect_RubberBandChanged(QGraphicsView* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsView*, QRect*, QPointF*, QPointF*) = reinterpret_cast<void (*)(QGraphicsView*, QRect*, QPointF*, QPointF*)>(slot);
    QGraphicsView::connect(self, &QGraphicsView::rubberBandChanged, [self, slotFunc](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
	slotFunc(self, viewportRect, fromScenePoint, toScenePoint);
    });
}

libqt_string QGraphicsView_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_SetTransform2(QGraphicsView* self, const QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

void QGraphicsView_EnsureVisible22(QGraphicsView* self, const QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, xmargin);
}

void QGraphicsView_EnsureVisible32(QGraphicsView* self, const QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, xmargin, ymargin);
}

void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(x, y, w, h, xmargin);
}

void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(x, y, w, h, xmargin, ymargin);
}

void QGraphicsView_EnsureVisible23(QGraphicsView* self, const QGraphicsItem* item, int xmargin) {
	self->ensureVisible(item, xmargin);
}

void QGraphicsView_EnsureVisible33(QGraphicsView* self, const QGraphicsItem* item, int xmargin, int ymargin) {
	self->ensureVisible(item, xmargin, ymargin);
}

void QGraphicsView_FitInView22(QGraphicsView* self, const QRectF* rect, int aspectRadioMode) {
	self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
	self->fitInView(x, y, w, h, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, const QGraphicsItem* item, int aspectRadioMode) {
	self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, const QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source) {
	self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, const QRectF* target, const QRect* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

libqt_list QGraphicsView_Items22(const QGraphicsView* self, const QRect* rect, int mode) {
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

libqt_list QGraphicsView_Items52(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
	auto _ret = self->items(x, y, w, h, static_cast<Qt::ItemSelectionMode>(mode));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGraphicsView_Items24(const QGraphicsView* self, const QPainterPath* path, int mode) {
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

void QGraphicsView_InvalidateScene1(QGraphicsView* self, const QRectF* rect) {
	self->invalidateScene(*rect);
}

void QGraphicsView_InvalidateScene2(QGraphicsView* self, const QRectF* rect, int layers) {
	self->invalidateScene(*rect, static_cast<QFlags<QGraphicsScene::SceneLayer>>(layers));
}

// Base class handler implementation
QSize* QGraphicsView_QBaseSizeHint(const QGraphicsView* self) {
	auto* vqgraphicsview = dynamic_cast<const VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_SizeHint_IsBase(true);
	return new QSize(vqgraphicsview->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSizeHint(const QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<const VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QGraphicsView_QBaseInputMethodQuery(const QGraphicsView* self, int query) {
	auto* vqgraphicsview = dynamic_cast<const VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_InputMethodQuery_IsBase(true);
	return new QVariant(vqgraphicsview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodQuery(const QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<const VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->setupViewport(widget);
	} else {
	self->QGraphicsView::setupViewport(widget);
}
}

// Base class handler implementation
void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_SetupViewport_IsBase(true);
	vqgraphicsview->setupViewport(widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_SetupViewport_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetupViewport_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	return vqgraphicsview->event(event);
	} else {
	return self->QGraphicsView::event(event);
}
}

// Base class handler implementation
bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_Event_IsBase(true);
	return vqgraphicsview->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_Event_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	return vqgraphicsview->viewportEvent(event);
	} else {
	return self->QGraphicsView::viewportEvent(event);
}
}

// Base class handler implementation
bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ViewportEvent_IsBase(true);
	return vqgraphicsview->viewportEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ViewportEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->contextMenuEvent(event);
	} else {
	self->QGraphicsView::contextMenuEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ContextMenuEvent_IsBase(true);
	vqgraphicsview->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->dragEnterEvent(event);
	} else {
	self->QGraphicsView::dragEnterEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragEnterEvent_IsBase(true);
	vqgraphicsview->dragEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->dragLeaveEvent(event);
	} else {
	self->QGraphicsView::dragLeaveEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragLeaveEvent_IsBase(true);
	vqgraphicsview->dragLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->dragMoveEvent(event);
	} else {
	self->QGraphicsView::dragMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragMoveEvent_IsBase(true);
	vqgraphicsview->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->dropEvent(event);
	} else {
	self->QGraphicsView::dropEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DropEvent_IsBase(true);
	vqgraphicsview->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->focusInEvent(event);
	} else {
	self->QGraphicsView::focusInEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusInEvent_IsBase(true);
	vqgraphicsview->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	return vqgraphicsview->focusNextPrevChild(next);
	} else {
	return self->QGraphicsView::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusNextPrevChild_IsBase(true);
	return vqgraphicsview->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->focusOutEvent(event);
	} else {
	self->QGraphicsView::focusOutEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusOutEvent_IsBase(true);
	vqgraphicsview->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->keyPressEvent(event);
	} else {
	self->QGraphicsView::keyPressEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_KeyPressEvent_IsBase(true);
	vqgraphicsview->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->keyReleaseEvent(event);
	} else {
	self->QGraphicsView::keyReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_KeyReleaseEvent_IsBase(true);
	vqgraphicsview->keyReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->mouseDoubleClickEvent(event);
	} else {
	self->QGraphicsView::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_IsBase(true);
	vqgraphicsview->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->mousePressEvent(event);
	} else {
	self->QGraphicsView::mousePressEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MousePressEvent_IsBase(true);
	vqgraphicsview->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->mouseMoveEvent(event);
	} else {
	self->QGraphicsView::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseMoveEvent_IsBase(true);
	vqgraphicsview->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->mouseReleaseEvent(event);
	} else {
	self->QGraphicsView::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseReleaseEvent_IsBase(true);
	vqgraphicsview->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->wheelEvent(event);
	} else {
	self->QGraphicsView::wheelEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_WheelEvent_IsBase(true);
	vqgraphicsview->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->paintEvent(event);
	} else {
	self->QGraphicsView::paintEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_PaintEvent_IsBase(true);
	vqgraphicsview->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_PaintEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->resizeEvent(event);
	} else {
	self->QGraphicsView::resizeEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ResizeEvent_IsBase(true);
	vqgraphicsview->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->scrollContentsBy(dx, dy);
	} else {
	self->QGraphicsView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ScrollContentsBy_IsBase(true);
	vqgraphicsview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->showEvent(event);
	} else {
	self->QGraphicsView::showEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ShowEvent_IsBase(true);
	vqgraphicsview->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->inputMethodEvent(event);
	} else {
	self->QGraphicsView::inputMethodEvent(event);
}
}

// Base class handler implementation
void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_InputMethodEvent_IsBase(true);
	vqgraphicsview->inputMethodEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->drawBackground(painter, *rect);
	} else {
	self->QGraphicsView::drawBackground(painter, *rect);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawBackground_IsBase(true);
	vqgraphicsview->drawBackground(painter, *rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawBackground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawBackground_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->drawForeground(painter, *rect);
	} else {
	self->QGraphicsView::drawForeground(painter, *rect);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, const QRectF* rect) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawForeground_IsBase(true);
	vqgraphicsview->drawForeground(painter, *rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawForeground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawForeground_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsView_DrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
	vqgraphicsview->drawItems(painter, numItems, items, options);
	} else {
	self->QGraphicsView::drawItems(painter, numItems, items, options);
}
}

// Base class handler implementation
void QGraphicsView_QBaseDrawItems(QGraphicsView* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawItems_IsBase(true);
	vqgraphicsview->drawItems(painter, numItems, items, options);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawItems(QGraphicsView* self, intptr_t slot) {
	auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self);
	if (vqgraphicsview && vqgraphicsview->isVirtualQGraphicsView) {
vqgraphicsview->setQGraphicsView_DrawItems_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawItems_Callback>(slot));
}
}

void QGraphicsView_Delete(QGraphicsView* self) {
    delete self;
}

