#include <QByteArray>
#include <QEvent>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "libqpropertyanimation.h"
#include "libqpropertyanimation.hxx"

QPropertyAnimation* QPropertyAnimation_new() {
	 return new VirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, const libqt_string propertyName) {
	 return new VirtualQPropertyAnimation(target, QByteArray(propertyName.data, propertyName.len));
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	 return new VirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, const libqt_string propertyName, QObject* parent) {
	 return new VirtualQPropertyAnimation(target, QByteArray(propertyName.data, propertyName.len), parent);
}

libqt_string QPropertyAnimation_Tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
	QByteArray _qb = self->propertyName();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, const libqt_string propertyName) {
	self->setPropertyName(QByteArray(propertyName.data, propertyName.len));
}

libqt_string QPropertyAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
    delete self;
}

