#include <QAbstractScrollArea>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFrame>
#include <QKeyEvent>
#include <QMargins>
#include <QMouseEvent>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractscrollarea.h>
#include "libqabstractscrollarea.h"
#include "libqabstractscrollarea.hxx"

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent) {
	 return new VirtualQAbstractScrollArea(parent);
}

QAbstractScrollArea* QAbstractScrollArea_new2() {
	 return new VirtualQAbstractScrollArea();
}

libqt_string QAbstractScrollArea_Tr(const char* s) {
	QString _ret = QAbstractScrollArea::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self) {
	return self->verticalScrollBarPolicy();
}

void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy) {
	self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
	return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setVerticalScrollBar(scrollbar);
}

int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self) {
	return self->horizontalScrollBarPolicy();
}

void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy) {
	self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
	return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
	self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self) {
	return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
	self->setCornerWidget(widget);
}

void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
	self->addScrollBarWidget(widget, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

libqt_list QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment) {
	return self->scrollBarWidgets(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self) {
	return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
	self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self) {
	return new QSize(self->maximumViewportSize());
}

QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
	return new QSize(self->sizeHint());
}

void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	self->setupViewport(viewport);
}

int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
	return self->sizeAdjustPolicy();
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

libqt_string QAbstractScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractScrollArea::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractScrollArea::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseMinimumSizeHint(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_IsBase(true);
	return new QSize(vqabstractscrollarea->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMinimumSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseSizeHint(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SizeHint_IsBase(true);
	return new QSize(vqabstractscrollarea->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_IsBase(true);
	vqabstractscrollarea->setupViewport(viewport);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetupViewport(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetupViewport_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	return vqabstractscrollarea->eventFilter(param1, param2);
	} else {
	return self->QAbstractScrollArea::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_EventFilter_IsBase(true);
	return vqabstractscrollarea->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEventFilter(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	return vqabstractscrollarea->event(param1);
	} else {
	return self->QAbstractScrollArea::event(param1);
}
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_Event_IsBase(true);
	return vqabstractscrollarea->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_Event_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	return vqabstractscrollarea->viewportEvent(param1);
	} else {
	return self->QAbstractScrollArea::viewportEvent(param1);
}
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_IsBase(true);
	return vqabstractscrollarea->viewportEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->resizeEvent(param1);
	} else {
	self->QAbstractScrollArea::resizeEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_IsBase(true);
	vqabstractscrollarea->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnResizeEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->paintEvent(param1);
	} else {
	self->QAbstractScrollArea::paintEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_IsBase(true);
	vqabstractscrollarea->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->mousePressEvent(param1);
	} else {
	self->QAbstractScrollArea::mousePressEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_IsBase(true);
	vqabstractscrollarea->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMousePressEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->mouseReleaseEvent(param1);
	} else {
	self->QAbstractScrollArea::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_IsBase(true);
	vqabstractscrollarea->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->mouseDoubleClickEvent(param1);
	} else {
	self->QAbstractScrollArea::mouseDoubleClickEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_IsBase(true);
	vqabstractscrollarea->mouseDoubleClickEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseDoubleClickEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->mouseMoveEvent(param1);
	} else {
	self->QAbstractScrollArea::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_IsBase(true);
	vqabstractscrollarea->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->wheelEvent(param1);
	} else {
	self->QAbstractScrollArea::wheelEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_IsBase(true);
	vqabstractscrollarea->wheelEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnWheelEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->contextMenuEvent(param1);
	} else {
	self->QAbstractScrollArea::contextMenuEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_IsBase(true);
	vqabstractscrollarea->contextMenuEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnContextMenuEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->dragEnterEvent(param1);
	} else {
	self->QAbstractScrollArea::dragEnterEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_IsBase(true);
	vqabstractscrollarea->dragEnterEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->dragMoveEvent(param1);
	} else {
	self->QAbstractScrollArea::dragMoveEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_IsBase(true);
	vqabstractscrollarea->dragMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->dragLeaveEvent(param1);
	} else {
	self->QAbstractScrollArea::dragLeaveEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_IsBase(true);
	vqabstractscrollarea->dragLeaveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->dropEvent(param1);
	} else {
	self->QAbstractScrollArea::dropEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DropEvent_IsBase(true);
	vqabstractscrollarea->dropEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDropEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_DropEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->keyPressEvent(param1);
	} else {
	self->QAbstractScrollArea::keyPressEvent(param1);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_IsBase(true);
	vqabstractscrollarea->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyPressEvent(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->scrollContentsBy(dx, dy);
	} else {
	self->QAbstractScrollArea::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_IsBase(true);
	vqabstractscrollarea->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnScrollContentsBy(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	return new QSize(vqabstractscrollarea->viewportSizeHint());
	} else {
	return new QSize(self->QAbstractScrollArea::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_IsBase(true);
	return new QSize(vqabstractscrollarea->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->setViewportMargins(left, top, right, bottom);
	} else {
	self->QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_IsBase(true);
	vqabstractscrollarea->setViewportMargins(left, top, right, bottom);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMargins(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMargins_Callback>(slot));
}
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	vqabstractscrollarea->setViewportMargins(*margins);
	} else {
	self->QAbstractScrollArea::setViewportMargins(*margins);
}
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMargins2(QAbstractScrollArea* self, const QMargins* margins) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins2_IsBase(true);
	vqabstractscrollarea->setViewportMargins(*margins);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMargins2(QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins2_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMargins2_Callback>(slot));
}
}

// Derived class handler implementation
QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
	return new QMargins(vqabstractscrollarea->viewportMargins());
	} else {
	return new QMargins(self->QAbstractScrollArea::viewportMargins());
}
}

// Base class handler implementation
QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_IsBase(true);
	return new QMargins(vqabstractscrollarea->viewportMargins());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportMargins(const QAbstractScrollArea* self, intptr_t slot) {
	auto* vqabstractscrollarea = dynamic_cast<const VirtualQAbstractScrollArea*>(self);
	if (vqabstractscrollarea && vqabstractscrollarea->isVirtualQAbstractScrollArea) {
vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportMargins_Callback>(slot));
}
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
    delete self;
}

