#include <QAbstractBarSeries>
#include <QObject>
#include <QPercentBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpercentbarseries.h>
#include "libqpercentbarseries.h"
#include "libqpercentbarseries.hxx"

QPercentBarSeries* QPercentBarSeries_new() {
	 return new VirtualQPercentBarSeries();
}

QPercentBarSeries* QPercentBarSeries_new2(QObject* parent) {
	 return new VirtualQPercentBarSeries(parent);
}

libqt_string QPercentBarSeries_Tr(const char* s) {
	QString _ret = QPercentBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QPercentBarSeries_Type(const QPercentBarSeries* self) {
	return self->type();
}

libqt_string QPercentBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QPercentBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPercentBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPercentBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QPercentBarSeries_QBaseType(const QPercentBarSeries* self) {
	auto* vqpercentbarseries = dynamic_cast<const VirtualQPercentBarSeries*>(self);
	if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
vqpercentbarseries->setQPercentBarSeries_Type_IsBase(true);
	return vqpercentbarseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QPercentBarSeries_OnType(const QPercentBarSeries* self, intptr_t slot) {
	auto* vqpercentbarseries = dynamic_cast<const VirtualQPercentBarSeries*>(self);
	if (vqpercentbarseries && vqpercentbarseries->isVirtualQPercentBarSeries) {
vqpercentbarseries->setQPercentBarSeries_Type_Callback(reinterpret_cast<VirtualQPercentBarSeries::QPercentBarSeries_Type_Callback>(slot));
}
}

void QPercentBarSeries_Delete(QPercentBarSeries* self) {
    delete self;
}

