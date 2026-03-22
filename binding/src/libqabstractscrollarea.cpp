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
#include <type_traits>
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
	auto _ret = self->scrollBarWidgets(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
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

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
    delete self;
}

