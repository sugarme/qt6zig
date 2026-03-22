#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleFactory>
#include <qstylefactory.h>
#include "libqstylefactory.h"
#include "libqstylefactory.hxx"

QStyleFactory* QStyleFactory_new(const QStyleFactory* other) {
	 return new QStyleFactory(*other);
}

QStyleFactory* QStyleFactory_new2(QStyleFactory* other) {
	 return new QStyleFactory(*other);
}

QStyleFactory* QStyleFactory_new3() {
	 return new QStyleFactory();
}

QStyleFactory* QStyleFactory_new4(const QStyleFactory* param1) {
	 return new QStyleFactory(*param1);
}

void QStyleFactory_CopyAssign(QStyleFactory* self, QStyleFactory* other) {
    *self = *other;
}

void QStyleFactory_MoveAssign(QStyleFactory* self, QStyleFactory* other) {
    *self = std::move(*other);
}

libqt_list QStyleFactory_Keys() {
	return QStyleFactory::keys();
}

QStyle* QStyleFactory_Create(const libqt_string param1) {
	return QStyleFactory::create(QString::fromUtf8(param1.data, param1.len));
}

void QStyleFactory_OperatorAssign(QStyleFactory* self, const QStyleFactory* param1) {
	self->operator=(*param1);
}

void QStyleFactory_Delete(QStyleFactory* self) {
    delete self;
}

