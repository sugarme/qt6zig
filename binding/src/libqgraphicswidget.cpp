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
	self->addActions(*actions);
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, const libqt_list actions) {
	self->insertActions(before, *actions);
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

libqt_list QGraphicsWidget_Actions(const QGraphicsWidget* self) {
	return self->actions();
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

// Derived class handler implementation
void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->initStyleOption(option);
	} else {
	self->QGraphicsWidget::initStyleOption(option);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseInitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_InitStyleOption_IsBase(true);
	vqgraphicswidget->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInitStyleOption(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return new QSizeF(vqgraphicswidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
	} else {
	return new QSizeF(self->QGraphicsWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Base class handler implementation
QSizeF* QGraphicsWidget_QBaseSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SizeHint_IsBase(true);
	return new QSizeF(vqgraphicswidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSizeHint(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->updateGeometry();
	} else {
	self->QGraphicsWidget::updateGeometry();
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseUpdateGeometry(QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UpdateGeometry_IsBase(true);
	vqgraphicswidget->updateGeometry();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUpdateGeometry(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UpdateGeometry_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, const QVariant* value) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return new QVariant(vqgraphicswidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
	} else {
	return new QVariant(self->QGraphicsWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBaseItemChange(QGraphicsWidget* self, int change, const QVariant* value) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ItemChange_IsBase(true);
	return new QVariant(vqgraphicswidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnItemChange(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ItemChange_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return new QVariant(vqgraphicswidget->propertyChange(QString::fromUtf8(propertyName.data, propertyName.len), *value));
	} else {
	return new QVariant(self->QGraphicsWidget::propertyChange(QString::fromUtf8(propertyName.data, propertyName.len), *value));
}
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBasePropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PropertyChange_IsBase(true);
	return new QVariant(vqgraphicswidget->propertyChange(QString::fromUtf8(propertyName.data, propertyName.len), *value));
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPropertyChange(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PropertyChange_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PropertyChange_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return vqgraphicswidget->sceneEvent(event);
	} else {
	return self->QGraphicsWidget::sceneEvent(event);
}
}

// Base class handler implementation
bool QGraphicsWidget_QBaseSceneEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SceneEvent_IsBase(true);
	return vqgraphicswidget->sceneEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSceneEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SceneEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return vqgraphicswidget->windowFrameEvent(e);
	} else {
	return self->QGraphicsWidget::windowFrameEvent(e);
}
}

// Base class handler implementation
bool QGraphicsWidget_QBaseWindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_WindowFrameEvent_IsBase(true);
	return vqgraphicswidget->windowFrameEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_WindowFrameEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return vqgraphicswidget->windowFrameSectionAt(*pos);
	} else {
	return self->QGraphicsWidget::windowFrameSectionAt(*pos);
}
}

// Base class handler implementation
int QGraphicsWidget_QBaseWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_WindowFrameSectionAt_IsBase(true);
	return vqgraphicswidget->windowFrameSectionAt(*pos);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameSectionAt(const QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<const VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_WindowFrameSectionAt_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameSectionAt_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return vqgraphicswidget->event(event);
	} else {
	return self->QGraphicsWidget::event(event);
}
}

// Base class handler implementation
bool QGraphicsWidget_QBaseEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Event_IsBase(true);
	return vqgraphicswidget->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_Event_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->changeEvent(event);
	} else {
	self->QGraphicsWidget::changeEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseChangeEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ChangeEvent_IsBase(true);
	vqgraphicswidget->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnChangeEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->closeEvent(event);
	} else {
	self->QGraphicsWidget::closeEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseCloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_CloseEvent_IsBase(true);
	vqgraphicswidget->closeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCloseEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_CloseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->focusInEvent(event);
	} else {
	self->QGraphicsWidget::focusInEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseFocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusInEvent_IsBase(true);
	vqgraphicswidget->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusInEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	return vqgraphicswidget->focusNextPrevChild(next);
	} else {
	return self->QGraphicsWidget::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QGraphicsWidget_QBaseFocusNextPrevChild(QGraphicsWidget* self, bool next) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusNextPrevChild_IsBase(true);
	return vqgraphicswidget->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusNextPrevChild(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->focusOutEvent(event);
	} else {
	self->QGraphicsWidget::focusOutEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusOutEvent_IsBase(true);
	vqgraphicswidget->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusOutEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->hideEvent(event);
	} else {
	self->QGraphicsWidget::hideEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseHideEvent(QGraphicsWidget* self, QHideEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HideEvent_IsBase(true);
	vqgraphicswidget->hideEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHideEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->moveEvent(event);
	} else {
	self->QGraphicsWidget::moveEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_MoveEvent_IsBase(true);
	vqgraphicswidget->moveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMoveEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_MoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_PolishEvent(QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->polishEvent();
	} else {
	self->QGraphicsWidget::polishEvent();
}
}

// Base class handler implementation
void QGraphicsWidget_QBasePolishEvent(QGraphicsWidget* self) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PolishEvent_IsBase(true);
	vqgraphicswidget->polishEvent();
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPolishEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_PolishEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PolishEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->resizeEvent(event);
	} else {
	self->QGraphicsWidget::resizeEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ResizeEvent_IsBase(true);
	vqgraphicswidget->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnResizeEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->showEvent(event);
	} else {
	self->QGraphicsWidget::showEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseShowEvent(QGraphicsWidget* self, QShowEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ShowEvent_IsBase(true);
	vqgraphicswidget->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShowEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->hoverMoveEvent(event);
	} else {
	self->QGraphicsWidget::hoverMoveEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HoverMoveEvent_IsBase(true);
	vqgraphicswidget->hoverMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverMoveEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->hoverLeaveEvent(event);
	} else {
	self->QGraphicsWidget::hoverLeaveEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HoverLeaveEvent_IsBase(true);
	vqgraphicswidget->hoverLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverLeaveEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->grabMouseEvent(event);
	} else {
	self->QGraphicsWidget::grabMouseEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseGrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GrabMouseEvent_IsBase(true);
	vqgraphicswidget->grabMouseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabMouseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->ungrabMouseEvent(event);
	} else {
	self->QGraphicsWidget::ungrabMouseEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseUngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UngrabMouseEvent_IsBase(true);
	vqgraphicswidget->ungrabMouseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabMouseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->grabKeyboardEvent(event);
	} else {
	self->QGraphicsWidget::grabKeyboardEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GrabKeyboardEvent_IsBase(true);
	vqgraphicswidget->grabKeyboardEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_GrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabKeyboardEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
	vqgraphicswidget->ungrabKeyboardEvent(event);
	} else {
	self->QGraphicsWidget::ungrabKeyboardEvent(event);
}
}

// Base class handler implementation
void QGraphicsWidget_QBaseUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UngrabKeyboardEvent_IsBase(true);
	vqgraphicswidget->ungrabKeyboardEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
	auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self);
	if (vqgraphicswidget && vqgraphicswidget->isVirtualQGraphicsWidget) {
vqgraphicswidget->setQGraphicsWidget_UngrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabKeyboardEvent_Callback>(slot));
}
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
    delete self;
}

