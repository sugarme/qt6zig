#include <QObject>
#include <QSignalMapper>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsignalmapper.h>
#include "libqsignalmapper.h"
#include "libqsignalmapper.hxx"

QSignalMapper* QSignalMapper_new() {
	 return new QSignalMapper();
}

QSignalMapper* QSignalMapper_new2(QObject* parent) {
	 return new QSignalMapper(parent);
}

libqt_string QSignalMapper_Tr(const char* s) {
	QString _ret = QSignalMapper::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id) {
	self->setMapping(sender, id);
}

void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const libqt_string text) {
	self->setMapping(sender, QString::fromUtf8(text.data, text.len));
}

void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object) {
	self->setMapping(sender, object);
}

void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender) {
	self->removeMappings(sender);
}

QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id) {
	return self->mapping(id);
}

QObject* QSignalMapper_Mapping2(const QSignalMapper* self, const libqt_string text) {
	return self->mapping(QString::fromUtf8(text.data, text.len));
}

QObject* QSignalMapper_Mapping3(const QSignalMapper* self, QObject* object) {
	return self->mapping(object);
}

void QSignalMapper_MappedInt(QSignalMapper* self, int param1) {
	self->mappedInt(param1);
}

void QSignalMapper_Connect_MappedInt(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, int) = reinterpret_cast<void (*)(QSignalMapper*, int)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedInt, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QSignalMapper_MappedString(QSignalMapper* self, const libqt_string param1) {
	self->mappedString(QString::fromUtf8(param1.data, param1.len));
}

void QSignalMapper_Connect_MappedString(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, const char*) = reinterpret_cast<void (*)(QSignalMapper*, const char*)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedString, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1) {
	self->mappedObject(param1);
}

void QSignalMapper_Connect_MappedObject(QSignalMapper* self, intptr_t slot) {
    void (*slotFunc)(QSignalMapper*, QObject*) = reinterpret_cast<void (*)(QSignalMapper*, QObject*)>(slot);
    QSignalMapper::connect(self, &QSignalMapper::mappedObject, [self, slotFunc](QObject* param1) {
	slotFunc(self, param1);
    });
}

void QSignalMapper_Map(QSignalMapper* self) {
	self->map();
}

void QSignalMapper_Map2(QSignalMapper* self, QObject* sender) {
	self->map(sender);
}

libqt_string QSignalMapper_Tr2(const char* s, const char* c) {
	QString _ret = QSignalMapper::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSignalMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalMapper::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSignalMapper_Delete(QSignalMapper* self) {
    delete self;
}

