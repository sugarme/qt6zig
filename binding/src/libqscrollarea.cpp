#include <QAbstractScrollArea>
#include <QEvent>
#include <QObject>
#include <QResizeEvent>
#include <QScrollArea>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qscrollarea.h>
#include "libqscrollarea.h"
#include "libqscrollarea.hxx"

QScrollArea* QScrollArea_new(QWidget* parent) {
	 return new VirtualQScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
	 return new VirtualQScrollArea();
}

libqt_string QScrollArea_Tr(const char* s) {
	QString _ret = QScrollArea::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QWidget* QScrollArea_Widget(const QScrollArea* self) {
	return self->widget();
}

void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QScrollArea_TakeWidget(QScrollArea* self) {
	return self->takeWidget();
}

bool QScrollArea_WidgetResizable(const QScrollArea* self) {
	return self->widgetResizable();
}

void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable) {
	self->setWidgetResizable(resizable);
}

QSize* QScrollArea_SizeHint(const QScrollArea* self) {
	return new QSize(self->sizeHint());
}

bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
	return self->focusNextPrevChild(next);
}

int QScrollArea_Alignment(const QScrollArea* self) {
	return self->alignment();
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
	self->ensureVisible(x, y);
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
	self->ensureWidgetVisible(childWidget);
}

libqt_string QScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QScrollArea::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin) {
	self->ensureVisible(x, y, xmargin);
}

void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
	self->ensureVisible(x, y, xmargin, ymargin);
}

void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
	self->ensureWidgetVisible(childWidget, xmargin);
}

void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
	self->ensureWidgetVisible(childWidget, xmargin, ymargin);
}

// Base class handler implementation
QSize* QScrollArea_QBaseSizeHint(const QScrollArea* self) {
	auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_SizeHint_IsBase(true);
	return new QSize(vqscrollarea->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSizeHint(const QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
bool QScrollArea_QBaseFocusNextPrevChild(QScrollArea* self, bool next) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_FocusNextPrevChild_IsBase(true);
	return vqscrollarea->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
bool QScrollArea_Event(QScrollArea* self, QEvent* param1) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
	return vqscrollarea->event(param1);
	} else {
	return self->QScrollArea::event(param1);
}
}

// Base class handler implementation
bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_Event_IsBase(true);
	return vqscrollarea->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_Event_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
	return vqscrollarea->eventFilter(param1, param2);
	} else {
	return self->QScrollArea::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_EventFilter_IsBase(true);
	return vqscrollarea->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
	vqscrollarea->resizeEvent(param1);
	} else {
	self->QScrollArea::resizeEvent(param1);
}
}

// Base class handler implementation
void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ResizeEvent_IsBase(true);
	vqscrollarea->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
	vqscrollarea->scrollContentsBy(dx, dy);
	} else {
	self->QScrollArea::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ScrollContentsBy_IsBase(true);
	vqscrollarea->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self) {
	auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
	return new QSize(vqscrollarea->viewportSizeHint());
	} else {
	return new QSize(self->QScrollArea::viewportSizeHint());
}
}

// Base class handler implementation
QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self) {
	auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ViewportSizeHint_IsBase(true);
	return new QSize(vqscrollarea->viewportSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportSizeHint(const QScrollArea* self, intptr_t slot) {
	auto* vqscrollarea = dynamic_cast<const VirtualQScrollArea*>(self);
	if (vqscrollarea && vqscrollarea->isVirtualQScrollArea) {
vqscrollarea->setQScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportSizeHint_Callback>(slot));
}
}

void QScrollArea_Delete(QScrollArea* self) {
    delete self;
}

