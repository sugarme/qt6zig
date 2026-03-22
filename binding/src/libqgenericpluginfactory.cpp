#include <QGenericPluginFactory>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgenericpluginfactory.h>
#include "libqgenericpluginfactory.h"
#include "libqgenericpluginfactory.hxx"

QGenericPluginFactory* QGenericPluginFactory_new(const QGenericPluginFactory* other) {
	 return new QGenericPluginFactory(*other);
}

QGenericPluginFactory* QGenericPluginFactory_new2(QGenericPluginFactory* other) {
	 return new QGenericPluginFactory(*other);
}

QGenericPluginFactory* QGenericPluginFactory_new3() {
	 return new QGenericPluginFactory();
}

QGenericPluginFactory* QGenericPluginFactory_new4(const QGenericPluginFactory* param1) {
	 return new QGenericPluginFactory(*param1);
}

void QGenericPluginFactory_CopyAssign(QGenericPluginFactory* self, QGenericPluginFactory* other) {
    *self = *other;
}

void QGenericPluginFactory_MoveAssign(QGenericPluginFactory* self, QGenericPluginFactory* other) {
    *self = std::move(*other);
}

libqt_list QGenericPluginFactory_Keys() {
	return QGenericPluginFactory::keys();
}

QObject* QGenericPluginFactory_Create(const libqt_string param1, const libqt_string param2) {
	return QGenericPluginFactory::create(QString::fromUtf8(param1.data, param1.len), QString::fromUtf8(param2.data, param2.len));
}

void QGenericPluginFactory_OperatorAssign(QGenericPluginFactory* self, const QGenericPluginFactory* param1) {
	self->operator=(*param1);
}

void QGenericPluginFactory_Delete(QGenericPluginFactory* self) {
    delete self;
}

