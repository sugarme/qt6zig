#include <QCandlestickLegendMarker>
#include <QCandlestickSeries>
#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcandlesticklegendmarker.h>
#include "libqcandlesticklegendmarker.h"
#include "libqcandlesticklegendmarker.hxx"

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend) {
	 return new VirtualQCandlestickLegendMarker(series, legend);
}

QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent) {
	 return new VirtualQCandlestickLegendMarker(series, legend, parent);
}

libqt_string QCandlestickLegendMarker_Tr(const char* s) {
	QString _ret = QCandlestickLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QCandlestickLegendMarker_Type(QCandlestickLegendMarker* self) {
	return self->type();
}

QCandlestickSeries* QCandlestickLegendMarker_Series(QCandlestickLegendMarker* self) {
	return self->series();
}

libqt_string QCandlestickLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QCandlestickLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCandlestickLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QCandlestickLegendMarker_QBaseType(QCandlestickLegendMarker* self) {
	auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
	if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
vqcandlesticklegendmarker->setQCandlestickLegendMarker_Type_IsBase(true);
	return vqcandlesticklegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnType(QCandlestickLegendMarker* self, intptr_t slot) {
	auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
	if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
vqcandlesticklegendmarker->setQCandlestickLegendMarker_Type_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QCandlestickSeries* QCandlestickLegendMarker_QBaseSeries(QCandlestickLegendMarker* self) {
	auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
	if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
vqcandlesticklegendmarker->setQCandlestickLegendMarker_Series_IsBase(true);
	return vqcandlesticklegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QCandlestickLegendMarker_OnSeries(QCandlestickLegendMarker* self, intptr_t slot) {
	auto* vqcandlesticklegendmarker = dynamic_cast<VirtualQCandlestickLegendMarker*>(self);
	if (vqcandlesticklegendmarker && vqcandlesticklegendmarker->isVirtualQCandlestickLegendMarker) {
vqcandlesticklegendmarker->setQCandlestickLegendMarker_Series_Callback(reinterpret_cast<VirtualQCandlestickLegendMarker::QCandlestickLegendMarker_Series_Callback>(slot));
}
}

void QCandlestickLegendMarker_Delete(QCandlestickLegendMarker* self) {
    delete self;
}

