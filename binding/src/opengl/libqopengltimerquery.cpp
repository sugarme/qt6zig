#include <QObject>
#include <QOpenGLTimeMonitor>
#include <QOpenGLTimerQuery>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qopengltimerquery.h>
#include "libqopengltimerquery.h"
#include "libqopengltimerquery.hxx"

QOpenGLTimerQuery* QOpenGLTimerQuery_new() {
	 return new QOpenGLTimerQuery();
}

QOpenGLTimerQuery* QOpenGLTimerQuery_new2(QObject* parent) {
	 return new QOpenGLTimerQuery(parent);
}

libqt_string QOpenGLTimerQuery_Tr(const char* s) {
	QString _ret = QOpenGLTimerQuery::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QOpenGLTimerQuery_Create(QOpenGLTimerQuery* self) {
	return self->create();
}

void QOpenGLTimerQuery_Destroy(QOpenGLTimerQuery* self) {
	self->destroy();
}

bool QOpenGLTimerQuery_IsCreated(const QOpenGLTimerQuery* self) {
	return self->isCreated();
}

uint32_t QOpenGLTimerQuery_ObjectId(const QOpenGLTimerQuery* self) {
	return self->objectId();
}

void QOpenGLTimerQuery_Begin(QOpenGLTimerQuery* self) {
	self->begin();
}

void QOpenGLTimerQuery_End(QOpenGLTimerQuery* self) {
	self->end();
}

uint64_t QOpenGLTimerQuery_WaitForTimestamp(const QOpenGLTimerQuery* self) {
	return self->waitForTimestamp();
}

void QOpenGLTimerQuery_RecordTimestamp(QOpenGLTimerQuery* self) {
	self->recordTimestamp();
}

bool QOpenGLTimerQuery_IsResultAvailable(const QOpenGLTimerQuery* self) {
	return self->isResultAvailable();
}

uint64_t QOpenGLTimerQuery_WaitForResult(const QOpenGLTimerQuery* self) {
	return self->waitForResult();
}

libqt_string QOpenGLTimerQuery_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLTimerQuery::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLTimerQuery_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLTimerQuery::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self) {
    delete self;
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new() {
	 return new QOpenGLTimeMonitor();
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent) {
	 return new QOpenGLTimeMonitor(parent);
}

libqt_string QOpenGLTimeMonitor_Tr(const char* s) {
	QString _ret = QOpenGLTimeMonitor::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLTimeMonitor_SetSampleCount(QOpenGLTimeMonitor* self, int sampleCount) {
	self->setSampleCount(sampleCount);
}

int QOpenGLTimeMonitor_SampleCount(const QOpenGLTimeMonitor* self) {
	return self->sampleCount();
}

bool QOpenGLTimeMonitor_Create(QOpenGLTimeMonitor* self) {
	return self->create();
}

void QOpenGLTimeMonitor_Destroy(QOpenGLTimeMonitor* self) {
	self->destroy();
}

bool QOpenGLTimeMonitor_IsCreated(const QOpenGLTimeMonitor* self) {
	return self->isCreated();
}

libqt_list QOpenGLTimeMonitor_ObjectIds(const QOpenGLTimeMonitor* self) {
	auto _ret = self->objectIds();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

int QOpenGLTimeMonitor_RecordSample(QOpenGLTimeMonitor* self) {
	return self->recordSample();
}

bool QOpenGLTimeMonitor_IsResultAvailable(const QOpenGLTimeMonitor* self) {
	return self->isResultAvailable();
}

libqt_list QOpenGLTimeMonitor_WaitForSamples(const QOpenGLTimeMonitor* self) {
	auto _ret = self->waitForSamples();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QOpenGLTimeMonitor_WaitForIntervals(const QOpenGLTimeMonitor* self) {
	auto _ret = self->waitForIntervals();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QOpenGLTimeMonitor_Reset(QOpenGLTimeMonitor* self) {
	self->reset();
}

libqt_string QOpenGLTimeMonitor_Tr2(const char* s, const char* c) {
	QString _ret = QOpenGLTimeMonitor::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QOpenGLTimeMonitor_Tr3(const char* s, const char* c, int n) {
	QString _ret = QOpenGLTimeMonitor::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self) {
    delete self;
}

