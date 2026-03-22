#include <QGenericPluginFactory>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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
	auto _ret = QGenericPluginFactory::keys();
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

QObject* QGenericPluginFactory_Create(const libqt_string param1, const libqt_string param2) {
	return QGenericPluginFactory::create(QString::fromUtf8(param1.data, param1.len), QString::fromUtf8(param2.data, param2.len));
}

void QGenericPluginFactory_OperatorAssign(QGenericPluginFactory* self, const QGenericPluginFactory* param1) {
	self->operator=(*param1);
}

void QGenericPluginFactory_Delete(QGenericPluginFactory* self) {
    delete self;
}

