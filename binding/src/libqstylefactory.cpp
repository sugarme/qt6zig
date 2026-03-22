#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
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
	auto _ret = QStyleFactory::keys();
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

QStyle* QStyleFactory_Create(const libqt_string param1) {
	return QStyleFactory::create(QString::fromUtf8(param1.data, param1.len));
}

void QStyleFactory_OperatorAssign(QStyleFactory* self, const QStyleFactory* param1) {
	self->operator=(*param1);
}

void QStyleFactory_Delete(QStyleFactory* self) {
    delete self;
}

