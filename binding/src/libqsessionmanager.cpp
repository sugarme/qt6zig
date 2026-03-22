#include <QObject>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qsessionmanager.h>
#include "libqsessionmanager.h"
#include "libqsessionmanager.hxx"

libqt_string QSessionManager_Tr(const char* s) {
	QString _ret = QSessionManager::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSessionManager_SessionId(const QSessionManager* self) {
	QString _ret = self->sessionId();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSessionManager_SessionKey(const QSessionManager* self) {
	QString _ret = self->sessionKey();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSessionManager_AllowsInteraction(QSessionManager* self) {
	return self->allowsInteraction();
}

bool QSessionManager_AllowsErrorInteraction(QSessionManager* self) {
	return self->allowsErrorInteraction();
}

void QSessionManager_Release(QSessionManager* self) {
	self->release();
}

void QSessionManager_Cancel(QSessionManager* self) {
	self->cancel();
}

void QSessionManager_SetRestartHint(QSessionManager* self, int restartHint) {
	self->setRestartHint(static_cast<QSessionManager::RestartHint>(restartHint));
}

int QSessionManager_RestartHint(const QSessionManager* self) {
	return self->restartHint();
}

void QSessionManager_SetRestartCommand(QSessionManager* self, const libqt_list restartCommand) {
	self->setRestartCommand(QList<QString>());
}

libqt_list QSessionManager_RestartCommand(const QSessionManager* self) {
	auto _ret = self->restartCommand();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QSessionManager_SetDiscardCommand(QSessionManager* self, const libqt_list discardCommand) {
	self->setDiscardCommand(QList<QString>());
}

libqt_list QSessionManager_DiscardCommand(const QSessionManager* self) {
	auto _ret = self->discardCommand();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QSessionManager_SetManagerProperty(QSessionManager* self, const libqt_string name, const libqt_string value) {
	self->setManagerProperty(QString::fromUtf8(name.data, name.len), QString::fromUtf8(value.data, value.len));
}

void QSessionManager_SetManagerProperty2(QSessionManager* self, const libqt_string name, const libqt_list value) {
	self->setManagerProperty(QString::fromUtf8(name.data, name.len), QList<QString>());
}

bool QSessionManager_IsPhase2(const QSessionManager* self) {
	return self->isPhase2();
}

void QSessionManager_RequestPhase2(QSessionManager* self) {
	self->requestPhase2();
}

libqt_string QSessionManager_Tr2(const char* s, const char* c) {
	QString _ret = QSessionManager::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSessionManager_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSessionManager::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

