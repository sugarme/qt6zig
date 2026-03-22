#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QPieLegendMarker>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpielegendmarker.h>
#include "libqpielegendmarker.h"
#include "libqpielegendmarker.hxx"

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend) {
	 return new VirtualQPieLegendMarker(series, slice, legend);
}

QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) {
	 return new VirtualQPieLegendMarker(series, slice, legend, parent);
}

libqt_string QPieLegendMarker_Tr(const char* s) {
	QString _ret = QPieLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPieLegendMarker_Type(QPieLegendMarker* self) {
	return self->type();
}

QPieSeries* QPieLegendMarker_Series(QPieLegendMarker* self) {
	return self->series();
}

QPieSlice* QPieLegendMarker_Slice(QPieLegendMarker* self) {
	return self->slice();
}

libqt_string QPieLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QPieLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPieLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPieLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QPieLegendMarker_QBaseType(QPieLegendMarker* self) {
	auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
	if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
vqpielegendmarker->setQPieLegendMarker_Type_IsBase(true);
	return vqpielegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnType(QPieLegendMarker* self, intptr_t slot) {
	auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
	if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
vqpielegendmarker->setQPieLegendMarker_Type_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QPieSeries* QPieLegendMarker_QBaseSeries(QPieLegendMarker* self) {
	auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
	if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
vqpielegendmarker->setQPieLegendMarker_Series_IsBase(true);
	return vqpielegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QPieLegendMarker_OnSeries(QPieLegendMarker* self, intptr_t slot) {
	auto* vqpielegendmarker = dynamic_cast<VirtualQPieLegendMarker*>(self);
	if (vqpielegendmarker && vqpielegendmarker->isVirtualQPieLegendMarker) {
vqpielegendmarker->setQPieLegendMarker_Series_Callback(reinterpret_cast<VirtualQPieLegendMarker::QPieLegendMarker_Series_Callback>(slot));
}
}

void QPieLegendMarker_Delete(QPieLegendMarker* self) {
    delete self;
}

