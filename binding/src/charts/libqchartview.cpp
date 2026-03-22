#include <QChart>
#include <QChartView>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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

void QChartView_Delete(QChartView* self) {
    delete self;
}

