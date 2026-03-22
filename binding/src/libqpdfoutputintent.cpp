#include <QColorSpace>
#include <QPdfOutputIntent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <qpdfoutputintent.h>
#include "libqpdfoutputintent.h"
#include "libqpdfoutputintent.hxx"

QPdfOutputIntent* QPdfOutputIntent_new() {
	 return new QPdfOutputIntent();
}

QPdfOutputIntent* QPdfOutputIntent_new2(const QPdfOutputIntent* other) {
	 return new QPdfOutputIntent(*other);
}

void QPdfOutputIntent_OperatorAssign(QPdfOutputIntent* self, const QPdfOutputIntent* other) {
	self->operator=(*other);
}

void QPdfOutputIntent_Swap(QPdfOutputIntent* self, QPdfOutputIntent* other) {
	self->swap(*other);
}

libqt_string QPdfOutputIntent_OutputConditionIdentifier(const QPdfOutputIntent* self) {
	QString _ret = self->outputConditionIdentifier();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfOutputIntent_SetOutputConditionIdentifier(QPdfOutputIntent* self, const libqt_string identifier) {
	self->setOutputConditionIdentifier(QString::fromUtf8(identifier.data, identifier.len));
}

libqt_string QPdfOutputIntent_OutputCondition(const QPdfOutputIntent* self) {
	QString _ret = self->outputCondition();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPdfOutputIntent_SetOutputCondition(QPdfOutputIntent* self, const libqt_string condition) {
	self->setOutputCondition(QString::fromUtf8(condition.data, condition.len));
}

QUrl* QPdfOutputIntent_RegistryName(const QPdfOutputIntent* self) {
	return new QUrl(self->registryName());
}

void QPdfOutputIntent_SetRegistryName(QPdfOutputIntent* self, const QUrl* name) {
	self->setRegistryName(*name);
}

QColorSpace* QPdfOutputIntent_OutputProfile(const QPdfOutputIntent* self) {
	return new QColorSpace(self->outputProfile());
}

void QPdfOutputIntent_SetOutputProfile(QPdfOutputIntent* self, const QColorSpace* profile) {
	self->setOutputProfile(*profile);
}

void QPdfOutputIntent_Delete(QPdfOutputIntent* self) {
    delete self;
}

