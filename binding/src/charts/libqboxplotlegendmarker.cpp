#include <QBoxPlotLegendMarker>
#include <QBoxPlotSeries>
#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qboxplotlegendmarker.h>
#include "libqboxplotlegendmarker.h"
#include "libqboxplotlegendmarker.hxx"

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend) {
	 return new VirtualQBoxPlotLegendMarker(series, legend);
}

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent) {
	 return new VirtualQBoxPlotLegendMarker(series, legend, parent);
}

libqt_string QBoxPlotLegendMarker_Tr(const char* s) {
	QString _ret = QBoxPlotLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QBoxPlotLegendMarker_Type(QBoxPlotLegendMarker* self) {
	return self->type();
}

QBoxPlotSeries* QBoxPlotLegendMarker_Series(QBoxPlotLegendMarker* self) {
	return self->series();
}

libqt_string QBoxPlotLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QBoxPlotLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBoxPlotLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxPlotLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QBoxPlotLegendMarker_QBaseType(QBoxPlotLegendMarker* self) {
	auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
	if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_IsBase(true);
	return vqboxplotlegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnType(QBoxPlotLegendMarker* self, intptr_t slot) {
	auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
	if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
vqboxplotlegendmarker->setQBoxPlotLegendMarker_Type_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QBoxPlotSeries* QBoxPlotLegendMarker_QBaseSeries(QBoxPlotLegendMarker* self) {
	auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
	if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_IsBase(true);
	return vqboxplotlegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxPlotLegendMarker_OnSeries(QBoxPlotLegendMarker* self, intptr_t slot) {
	auto* vqboxplotlegendmarker = dynamic_cast<VirtualQBoxPlotLegendMarker*>(self);
	if (vqboxplotlegendmarker && vqboxplotlegendmarker->isVirtualQBoxPlotLegendMarker) {
vqboxplotlegendmarker->setQBoxPlotLegendMarker_Series_Callback(reinterpret_cast<VirtualQBoxPlotLegendMarker::QBoxPlotLegendMarker_Series_Callback>(slot));
}
}

void QBoxPlotLegendMarker_Delete(QBoxPlotLegendMarker* self) {
    delete self;
}

