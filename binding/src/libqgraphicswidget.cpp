#include <QAction>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QKeySequence>
#include <QMarginsF>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "libqgraphicswidget.h"
#include "libqgraphicswidget.hxx"

QGraphicsWidget* QGraphicsWidget_new() {
	 return new VirtualQGraphicsWidget();
}

QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent) {
	 return new VirtualQGraphicsWidget(parent);
}

QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags) {
	 return new VirtualQGraphicsWidget(parent, static_cast<QFlags<Qt::WindowType>>(wFlags));
}

libqt_string QGraphicsWidget_Tr(const char* s) {
	QString _ret = QGraphicsWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self) {
	return self->layout();
}

void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
	self->setLayout(layout);
}

void QGraphicsWidget_AdjustSize(QGraphicsWidget* self) {
	self->adjustSize();
}

int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self) {
	return self->layoutDirection();
}

void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self) {
	self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self) {
	return self->style();
}

void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsWidget_Font(const QGraphicsWidget* self) {
	return new QFont(self->font());
}

void QGraphicsWidget_SetFont(QGraphicsWidget* self, const QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self) {
	return new QPalette(self->palette());
}

void QGraphicsWidget_SetPalette(QGraphicsWidget* self, const QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self) {
	return self->autoFillBackground();
}

void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_Resize(QGraphicsWidget* self, const QSizeF* size) {
	self->resize(*size);
}

void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h) {
	self->resize(w, h);
}

QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self) {
	return new QSizeF(self->size());
}

void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, const QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
	self->setGeometry(x, y, w, h);
}

QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self) {
	return new QRectF(self->rect());
}

void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(left, top, right, bottom);
}

void QGraphicsWidget_SetContentsMargins2(QGraphicsWidget* self, QMarginsF* margins) {
	self->setContentsMargins(*margins);
}

void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(left, top, right, bottom);
}

void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setWindowFrameMargins(left, top, right, bottom);
}

void QGraphicsWidget_SetWindowFrameMargins2(QGraphicsWidget* self, QMarginsF* margins) {
	self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getWindowFrameMargins(left, top, right, bottom);
}

void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self) {
	self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self) {
	return self->windowFlags();
}

int QGraphicsWidget_WindowType(const QGraphicsWidget* self) {
	return self->windowType();
}

void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags) {
	self->setWindowFlags(static_cast<QFlags<Qt::WindowType>>(wFlags));
}

bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self) {
	return self->isActiveWindow();
}

void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, const libqt_string title) {
	self->setWindowTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self) {
	QString _ret = self->windowTitle();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self) {
	return self->focusPolicy();
}

void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
	QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self) {
	return self->focusWidget();
}

int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, const QKeySequence* sequence) {
	return self->grabShortcut(*sequence);
}

void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id) {
	self->releaseShortcut(id);
}

void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id) {
	self->setShortcutEnabled(id);
}

void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id) {
	self->setShortcutAutoRepeat(id);
}

void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action) {
	self->addAction(action);
}

void QGraphicsWidget_AddActions(QGraphicsWidget* self, const libqt_list actions) {
	self->addActions(QList<QAction *>());
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, const libqt_list actions) {
	self->insertActions(before, QList<QAction *>());
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

libqt_list QGraphicsWidget_Actions(const QGraphicsWidget* self) {
	auto _ret = self->actions();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

int QGraphicsWidget_Type(const QGraphicsWidget* self) {
	return self->type();
}

void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paintWindowFrame(painter, option, widget);
}

QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self) {
	return new QPainterPath(self->shape());
}

void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self) {
	self->geometryChanged();
}

void QGraphicsWidget_Connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self, &QGraphicsWidget::geometryChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self) {
	self->layoutChanged();
}

void QGraphicsWidget_Connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self, &QGraphicsWidget::layoutChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

bool QGraphicsWidget_Close(QGraphicsWidget* self) {
	return self->close();
}

libqt_string QGraphicsWidget_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, const QKeySequence* sequence, int context) {
	return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutEnabled(id, enabled);
}

void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutAutoRepeat(id, enabled);
}

void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

// Base class handler implementation
void QGraphicsWidget_QBaseSetGeometry(QGraphicsWidget* self, const QRectF* rect) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SetGeometry_IsBase(true);
	vqgraphicswidget->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetGeometry(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseGetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GetContentsMargins_IsBase(true);
	vqgraphicswidget->getContentsMargins(left, top, right, bottom);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGetContentsMargins(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GetContentsMargins_Callback>(slot));
}
}

// Base class handler implementation
int QGraphicsWidget_QBaseType(const QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Type_IsBase(true);
	return vqgraphicswidget->type();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnType(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Type_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Type_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsWidget_QBasePaint(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Paint_IsBase(true);
	vqgraphicswidget->paint(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaint(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Paint_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Paint_Callback>(slot));
}
}

// Base class handler implementation
void QGraphicsWidget_QBasePaintWindowFrame(QGraphicsWidget* self, QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PaintWindowFrame_IsBase(true);
	vqgraphicswidget->paintWindowFrame(painter, option, widget);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaintWindowFrame(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PaintWindowFrame_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PaintWindowFrame_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QGraphicsWidget_QBaseBoundingRect(const QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_BoundingRect_IsBase(true);
	return new QRectF(vqgraphicswidget->boundingRect());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnBoundingRect(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_BoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QPainterPath* QGraphicsWidget_QBaseShape(const QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Shape_IsBase(true);
	return new QPainterPath(vqgraphicswidget->shape());
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShape(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Shape_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Shape_Callback>(slot));
}
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
    delete self;
}

