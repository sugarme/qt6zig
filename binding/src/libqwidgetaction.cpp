#include <QAction>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <QWidgetAction>
#include <qwidgetaction.h>
#include "libqwidgetaction.h"
#include "libqwidgetaction.hxx"

QWidgetAction* QWidgetAction_new(QObject* parent) {
	 return new VirtualQWidgetAction(parent);
}

libqt_string QWidgetAction_Tr(const char* s) {
	QString _ret = QWidgetAction::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

libqt_string QWidgetAction_Tr2(const char* s, const char* c) {
	QString _ret = QWidgetAction::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidgetAction_Delete(QWidgetAction* self) {
    delete self;
}

