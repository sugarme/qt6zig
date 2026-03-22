#include <QLineSeries>
#include <QObject>
#include <QSplineSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsplineseries.h>
#include "libqsplineseries.h"
#include "libqsplineseries.hxx"

QSplineSeries* QSplineSeries_new() {
	 return new VirtualQSplineSeries();
}

QSplineSeries* QSplineSeries_new2(QObject* parent) {
	 return new VirtualQSplineSeries(parent);
}

libqt_string QSplineSeries_Tr(const char* s) {
	QString _ret = QSplineSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSplineSeries_Type(const QSplineSeries* self) {
	return self->type();
}

libqt_string QSplineSeries_Tr2(const char* s, const char* c) {
	QString _ret = QSplineSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSplineSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplineSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QSplineSeries_QBaseType(const QSplineSeries* self) {
	auto* vqsplineseries = dynamic_cast<const VirtualQSplineSeries*>(self);
	if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
vqsplineseries->setQSplineSeries_Type_IsBase(true);
	return vqsplineseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QSplineSeries_OnType(const QSplineSeries* self, intptr_t slot) {
	auto* vqsplineseries = dynamic_cast<const VirtualQSplineSeries*>(self);
	if (vqsplineseries && vqsplineseries->isVirtualQSplineSeries) {
vqsplineseries->setQSplineSeries_Type_Callback(reinterpret_cast<VirtualQSplineSeries::QSplineSeries_Type_Callback>(slot));
}
}

void QSplineSeries_Delete(QSplineSeries* self) {
    delete self;
}

