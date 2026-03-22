#include <QAbstractBarSeries>
#include <QHorizontalStackedBarSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qhorizontalstackedbarseries.h>
#include "libqhorizontalstackedbarseries.h"
#include "libqhorizontalstackedbarseries.hxx"

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new() {
	 return new VirtualQHorizontalStackedBarSeries();
}

QHorizontalStackedBarSeries* QHorizontalStackedBarSeries_new2(QObject* parent) {
	 return new VirtualQHorizontalStackedBarSeries(parent);
}

libqt_string QHorizontalStackedBarSeries_Tr(const char* s) {
	QString _ret = QHorizontalStackedBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QHorizontalStackedBarSeries_Type(const QHorizontalStackedBarSeries* self) {
	return self->type();
}

libqt_string QHorizontalStackedBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QHorizontalStackedBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHorizontalStackedBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHorizontalStackedBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QHorizontalStackedBarSeries_QBaseType(const QHorizontalStackedBarSeries* self) {
	auto* vqhorizontalstackedbarseries = dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self);
	if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Type_IsBase(true);
	return vqhorizontalstackedbarseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QHorizontalStackedBarSeries_OnType(const QHorizontalStackedBarSeries* self, intptr_t slot) {
	auto* vqhorizontalstackedbarseries = dynamic_cast<const VirtualQHorizontalStackedBarSeries*>(self);
	if (vqhorizontalstackedbarseries && vqhorizontalstackedbarseries->isVirtualQHorizontalStackedBarSeries) {
vqhorizontalstackedbarseries->setQHorizontalStackedBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalStackedBarSeries::QHorizontalStackedBarSeries_Type_Callback>(slot));
}
}

void QHorizontalStackedBarSeries_Delete(QHorizontalStackedBarSeries* self) {
    delete self;
}

