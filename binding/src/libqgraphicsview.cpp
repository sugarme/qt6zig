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

void QGraphicsView_Delete(QGraphicsView* self) {
    delete self;
}

