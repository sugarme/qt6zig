#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QXYLegendMarker>
#include <QXYSeries>
#include <qxylegendmarker.h>
#include "libqxylegendmarker.h"
#include "libqxylegendmarker.hxx"

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend) {
	 return new VirtualQXYLegendMarker(series, legend);
}

QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent) {
	 return new VirtualQXYLegendMarker(series, legend, parent);
}

libqt_string QXYLegendMarker_Tr(const char* s) {
	QString _ret = QXYLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QXYLegendMarker_Type(QXYLegendMarker* self) {
	return self->type();
}

QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self) {
	return self->series();
}

libqt_string QXYLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QXYLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QXYLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QXYLegendMarker_QBaseType(QXYLegendMarker* self) {
	auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
	if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
vqxylegendmarker->setQXYLegendMarker_Type_IsBase(true);
	return vqxylegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot) {
	auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
	if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
vqxylegendmarker->setQXYLegendMarker_Type_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QXYSeries* QXYLegendMarker_QBaseSeries(QXYLegendMarker* self) {
	auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
	if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
vqxylegendmarker->setQXYLegendMarker_Series_IsBase(true);
	return vqxylegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot) {
	auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
	if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
vqxylegendmarker->setQXYLegendMarker_Series_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Series_Callback>(slot));
}
}

void QXYLegendMarker_Delete(QXYLegendMarker* self) {
    delete self;
}

