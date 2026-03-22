#include <QAbstractBarSeries>
#include <QHorizontalBarSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhorizontalbarseries.h>
#include "libqhorizontalbarseries.h"
#include "libqhorizontalbarseries.hxx"

QHorizontalBarSeries* QHorizontalBarSeries_new() {
	 return new VirtualQHorizontalBarSeries();
}

QHorizontalBarSeries* QHorizontalBarSeries_new2(QObject* parent) {
	 return new VirtualQHorizontalBarSeries(parent);
}

libqt_string QHorizontalBarSeries_Tr(const char* s) {
	QString _ret = QHorizontalBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QHorizontalBarSeries_Type(const QHorizontalBarSeries* self) {
	return self->type();
}

libqt_string QHorizontalBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QHorizontalBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHorizontalBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHorizontalBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QHorizontalBarSeries_QBaseType(const QHorizontalBarSeries* self) {
	auto* vqhorizontalbarseries = dynamic_cast<const VirtualQHorizontalBarSeries*>(self);
	if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
vqhorizontalbarseries->setQHorizontalBarSeries_Type_IsBase(true);
	return vqhorizontalbarseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QHorizontalBarSeries_OnType(const QHorizontalBarSeries* self, intptr_t slot) {
	auto* vqhorizontalbarseries = dynamic_cast<const VirtualQHorizontalBarSeries*>(self);
	if (vqhorizontalbarseries && vqhorizontalbarseries->isVirtualQHorizontalBarSeries) {
vqhorizontalbarseries->setQHorizontalBarSeries_Type_Callback(reinterpret_cast<VirtualQHorizontalBarSeries::QHorizontalBarSeries_Type_Callback>(slot));
}
}

void QHorizontalBarSeries_Delete(QHorizontalBarSeries* self) {
    delete self;
}

