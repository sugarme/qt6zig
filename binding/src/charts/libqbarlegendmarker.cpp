#include <QAbstractBarSeries>
#include <QBarLegendMarker>
#include <QBarSet>
#include <QLegend>
#include <QLegendMarker>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qbarlegendmarker.h>
#include "libqbarlegendmarker.h"
#include "libqbarlegendmarker.hxx"

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) {
	 return new VirtualQBarLegendMarker(series, barset, legend);
}

QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) {
	 return new VirtualQBarLegendMarker(series, barset, legend, parent);
}

libqt_string QBarLegendMarker_Tr(const char* s) {
	QString _ret = QBarLegendMarker::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QBarLegendMarker_Type(QBarLegendMarker* self) {
	return self->type();
}

QAbstractBarSeries* QBarLegendMarker_Series(QBarLegendMarker* self) {
	return self->series();
}

QBarSet* QBarLegendMarker_Barset(QBarLegendMarker* self) {
	return self->barset();
}

libqt_string QBarLegendMarker_Tr2(const char* s, const char* c) {
	QString _ret = QBarLegendMarker::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBarLegendMarker_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBarLegendMarker::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QBarLegendMarker_QBaseType(QBarLegendMarker* self) {
	auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
	if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
vqbarlegendmarker->setQBarLegendMarker_Type_IsBase(true);
	return vqbarlegendmarker->type();
}
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnType(QBarLegendMarker* self, intptr_t slot) {
	auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
	if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
vqbarlegendmarker->setQBarLegendMarker_Type_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Type_Callback>(slot));
}
}

// Base class handler implementation
QAbstractBarSeries* QBarLegendMarker_QBaseSeries(QBarLegendMarker* self) {
	auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
	if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
vqbarlegendmarker->setQBarLegendMarker_Series_IsBase(true);
	return vqbarlegendmarker->series();
}
}

// Auxiliary method to allow providing re-implementation
void QBarLegendMarker_OnSeries(QBarLegendMarker* self, intptr_t slot) {
	auto* vqbarlegendmarker = dynamic_cast<VirtualQBarLegendMarker*>(self);
	if (vqbarlegendmarker && vqbarlegendmarker->isVirtualQBarLegendMarker) {
vqbarlegendmarker->setQBarLegendMarker_Series_Callback(reinterpret_cast<VirtualQBarLegendMarker::QBarLegendMarker_Series_Callback>(slot));
}
}

void QBarLegendMarker_Delete(QBarLegendMarker* self) {
    delete self;
}

