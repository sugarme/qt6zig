#include <QObject>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
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
	self->setRestartCommand(*restartCommand);
}

libqt_list QSessionManager_RestartCommand(const QSessionManager* self) {
	return self->restartCommand();
}

void QSessionManager_SetDiscardCommand(QSessionManager* self, const libqt_list discardCommand) {
	self->setDiscardCommand(*discardCommand);
}

libqt_list QSessionManager_DiscardCommand(const QSessionManager* self) {
	return self->discardCommand();
}

void QSessionManager_SetManagerProperty(QSessionManager* self, const libqt_string name, const libqt_string value) {
	self->setManagerProperty(QString::fromUtf8(name.data, name.len), QString::fromUtf8(value.data, value.len));
}

void QSessionManager_SetManagerProperty2(QSessionManager* self, const libqt_string name, const libqt_list value) {
	self->setManagerProperty(QString::fromUtf8(name.data, name.len), *value);
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

