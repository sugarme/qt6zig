#include <QAbstractBarSeries>
#include <QObject>
#include <QStackedBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qstackedbarseries.h>
#include "libqstackedbarseries.h"
#include "libqstackedbarseries.hxx"

QStackedBarSeries* QStackedBarSeries_new() {
	 return new VirtualQStackedBarSeries();
}

QStackedBarSeries* QStackedBarSeries_new2(QObject* parent) {
	 return new VirtualQStackedBarSeries(parent);
}

libqt_string QStackedBarSeries_Tr(const char* s) {
	QString _ret = QStackedBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QStackedBarSeries_Type(const QStackedBarSeries* self) {
	return self->type();
}

libqt_string QStackedBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QStackedBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStackedBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QStackedBarSeries_QBaseType(const QStackedBarSeries* self) {
	auto* vqstackedbarseries = dynamic_cast<const VirtualQStackedBarSeries*>(self);
	if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
vqstackedbarseries->setQStackedBarSeries_Type_IsBase(true);
	return vqstackedbarseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QStackedBarSeries_OnType(const QStackedBarSeries* self, intptr_t slot) {
	auto* vqstackedbarseries = dynamic_cast<const VirtualQStackedBarSeries*>(self);
	if (vqstackedbarseries && vqstackedbarseries->isVirtualQStackedBarSeries) {
vqstackedbarseries->setQStackedBarSeries_Type_Callback(reinterpret_cast<VirtualQStackedBarSeries::QStackedBarSeries_Type_Callback>(slot));
}
}

void QStackedBarSeries_Delete(QStackedBarSeries* self) {
    delete self;
}

