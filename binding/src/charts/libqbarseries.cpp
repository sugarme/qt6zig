#include <QAbstractBarSeries>
#include <QBarSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qbarseries.h>
#include "libqbarseries.h"
#include "libqbarseries.hxx"

QBarSeries* QBarSeries_new() {
	 return new VirtualQBarSeries();
}

QBarSeries* QBarSeries_new2(QObject* parent) {
	 return new VirtualQBarSeries(parent);
}

libqt_string QBarSeries_Tr(const char* s) {
	QString _ret = QBarSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QBarSeries_Type(const QBarSeries* self) {
	return self->type();
}

libqt_string QBarSeries_Tr2(const char* s, const char* c) {
	QString _ret = QBarSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBarSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBarSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QBarSeries_QBaseType(const QBarSeries* self) {
	auto* vqbarseries = dynamic_cast<const VirtualQBarSeries*>(self);
	if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
vqbarseries->setQBarSeries_Type_IsBase(true);
	return vqbarseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnType(const QBarSeries* self, intptr_t slot) {
	auto* vqbarseries = dynamic_cast<const VirtualQBarSeries*>(self);
	if (vqbarseries && vqbarseries->isVirtualQBarSeries) {
vqbarseries->setQBarSeries_Type_Callback(reinterpret_cast<VirtualQBarSeries::QBarSeries_Type_Callback>(slot));
}
}

void QBarSeries_Delete(QBarSeries* self) {
    delete self;
}

