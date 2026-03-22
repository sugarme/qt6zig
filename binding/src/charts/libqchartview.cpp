#include <QChart>
#include <QChartView>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qchartview.h>
#include "libqchartview.h"
#include "libqchartview.hxx"

QChartView* QChartView_new(QWidget* parent) {
	 return new VirtualQChartView(parent);
}

QChartView* QChartView_new2() {
	 return new VirtualQChartView();
}

QChartView* QChartView_new3(QChart* chart) {
	 return new VirtualQChartView(chart);
}

QChartView* QChartView_new4(QChart* chart, QWidget* parent) {
	 return new VirtualQChartView(chart, parent);
}

libqt_string QChartView_Tr(const char* s) {
	QString _ret = QChartView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QChartView_SetRubberBand(QChartView* self, const int* rubberBands) {
	self->setRubberBand(static_cast<QFlags<QChartView::RubberBand>>(rubberBands));
}

int QChartView_RubberBand(const QChartView* self) {
	return self->rubberBand();
}

QChart* QChartView_Chart(const QChartView* self) {
	return self->chart();
}

void QChartView_SetChart(QChartView* self, QChart* chart) {
	self->setChart(chart);
}

libqt_string QChartView_Tr2(const char* s, const char* c) {
	QString _ret = QChartView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QChartView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QChartView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
	vqchartview->resizeEvent(event);
	} else {
	self->QChartView::resizeEvent(event);
}
}

// Base class handler implementation
void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_ResizeEvent_IsBase(true);
	vqchartview->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnResizeEvent(QChartView* self, intptr_t slot) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_ResizeEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
	vqchartview->mousePressEvent(event);
	} else {
	self->QChartView::mousePressEvent(event);
}
}

// Base class handler implementation
void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MousePressEvent_IsBase(true);
	vqchartview->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMousePressEvent(QChartView* self, intptr_t slot) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MousePressEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
	vqchartview->mouseMoveEvent(event);
	} else {
	self->QChartView::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MouseMoveEvent_IsBase(true);
	vqchartview->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseMoveEvent(QChartView* self, intptr_t slot) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
	vqchartview->mouseReleaseEvent(event);
	} else {
	self->QChartView::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MouseReleaseEvent_IsBase(true);
	vqchartview->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QChartView_OnMouseReleaseEvent(QChartView* self, intptr_t slot) {
	auto* vqchartview = dynamic_cast<VirtualQChartView*>(self);
	if (vqchartview && vqchartview->isVirtualQChartView) {
vqchartview->setQChartView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQChartView::QChartView_MouseReleaseEvent_Callback>(slot));
}
}

void QChartView_Delete(QChartView* self) {
    delete self;
}

