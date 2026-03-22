#include <QAreaLegendMarker>
#include <QAreaSeries>
#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qarealegendmarker.h>
#include "libqarealegendmarker.h"
#include "libqarealegendmarker.hxx"

QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend) {
	 return new VirtualQAreaLegendMarker(series, legend);
}

QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent) {
	 return new VirtualQAreaLegendMarker(series, legend, parent);
}

libqt_string QAreaLegendMarker_Tr(const char* s) {
	QString _ret = QAreaLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAreaLegendMarker_Type(QAreaLegendMarker* self) {
	return self->type();
}

QAreaSeries* QAreaLegendMarker_Series(QAreaLegendMarker* self) {
	return self->series();
}

libqt_string QAreaLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QAreaLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAreaLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAreaLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QAreaLegendMarker_QBaseType(QAreaLegendMarker* self) {
	auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
	if (vqarealegendmarker && vqarealegendmarker->isVirtualQAreaLegendMarker) {
vqarealegendmarker->setQAreaLegendMarker_Type_IsBase(true);
	return vqarealegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnType(QAreaLegendMarker* self, intptr_t slot) {
	auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
	if (vqarealegendmarker && vqarealegendmarker->isVirtualQAreaLegendMarker) {
vqarealegendmarker->setQAreaLegendMarker_Type_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QAreaSeries* QAreaLegendMarker_QBaseSeries(QAreaLegendMarker* self) {
	auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
	if (vqarealegendmarker && vqarealegendmarker->isVirtualQAreaLegendMarker) {
vqarealegendmarker->setQAreaLegendMarker_Series_IsBase(true);
	return vqarealegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QAreaLegendMarker_OnSeries(QAreaLegendMarker* self, intptr_t slot) {
	auto* vqarealegendmarker = dynamic_cast<VirtualQAreaLegendMarker*>(self);
	if (vqarealegendmarker && vqarealegendmarker->isVirtualQAreaLegendMarker) {
vqarealegendmarker->setQAreaLegendMarker_Series_Callback(reinterpret_cast<VirtualQAreaLegendMarker::QAreaLegendMarker_Series_Callback>(slot));
}
}

void QAreaLegendMarker_Delete(QAreaLegendMarker* self) {
    delete self;
}

