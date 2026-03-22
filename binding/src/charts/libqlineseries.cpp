#include <QLineSeries>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYSeries>
#include <qlineseries.h>
#include "libqlineseries.h"
#include "libqlineseries.hxx"

QLineSeries* QLineSeries_new() {
	 return new VirtualQLineSeries();
}

QLineSeries* QLineSeries_new2(QObject* parent) {
	 return new VirtualQLineSeries(parent);
}

libqt_string QLineSeries_Tr(const char* s) {
	QString _ret = QLineSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLineSeries_Type(const QLineSeries* self) {
	return self->type();
}

libqt_string QLineSeries_Tr2(const char* s, const char* c) {
	QString _ret = QLineSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLineSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLineSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QLineSeries_QBaseType(const QLineSeries* self) {
	auto* vqlineseries = dynamic_cast<const VirtualQLineSeries*>(self);
	if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
vqlineseries->setQLineSeries_Type_IsBase(true);
	return vqlineseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QLineSeries_OnType(const QLineSeries* self, intptr_t slot) {
	auto* vqlineseries = dynamic_cast<const VirtualQLineSeries*>(self);
	if (vqlineseries && vqlineseries->isVirtualQLineSeries) {
vqlineseries->setQLineSeries_Type_Callback(reinterpret_cast<VirtualQLineSeries::QLineSeries_Type_Callback>(slot));
}
}

void QLineSeries_Delete(QLineSeries* self) {
    delete self;
}

