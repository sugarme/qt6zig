#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qobjectcleanuphandler.h>
#include "libqobjectcleanuphandler.h"
#include "libqobjectcleanuphandler.hxx"

QObjectCleanupHandler* QObjectCleanupHandler_new() {
	 return new QObjectCleanupHandler();
}

libqt_string QObjectCleanupHandler_Tr(const char* s) {
	QString _ret = QObjectCleanupHandler::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object) {
	return self->add(object);
}

void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object) {
	self->remove(object);
}

bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self) {
	return self->isEmpty();
}

void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self) {
	self->clear();
}

libqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self) {
    delete self;
}

