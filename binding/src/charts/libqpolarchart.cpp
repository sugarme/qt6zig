#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QGraphicsItem>
#include <QPolarChart>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qpolarchart.h>
#include "libqpolarchart.h"
#include "libqpolarchart.hxx"

QPolarChart* QPolarChart_new() {
	 return new QPolarChart();
}

QPolarChart* QPolarChart_new2(QGraphicsItem* parent) {
	 return new QPolarChart(parent);
}

QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags) {
	 return new QPolarChart(parent, static_cast<QFlags<Qt::WindowType>>(wFlags));
}

libqt_string QPolarChart_Tr(const char* s) {
	QString _ret = QPolarChart::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPolarChart_AddAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation) {
	self->addAxis(axis, static_cast<QPolarChart::PolarOrientation>(polarOrientation));
}

libqt_list QPolarChart_Axes(const QPolarChart* self) {
	auto _ret = self->axes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

int QPolarChart_AxisPolarOrientation(QAbstractAxis* axis) {
	return QPolarChart::axisPolarOrientation(axis);
}

libqt_string QPolarChart_Tr2(const char* s, const char* c) {
	QString _ret = QPolarChart::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPolarChart_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPolarChart::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QPolarChart_Axes1(const QPolarChart* self, int polarOrientation) {
	auto _ret = self->axes(static_cast<QFlags<QPolarChart::PolarOrientation>>(polarOrientation));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QPolarChart_Axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series) {
	auto _ret = self->axes(static_cast<QFlags<QPolarChart::PolarOrientation>>(polarOrientation), series);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QPolarChart_Delete(QPolarChart* self) {
    delete self;
}

