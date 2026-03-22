#include <QFactoryInterface>
#include <qfactoryinterface.h>
#include "libqfactoryinterface.h"
#include "libqfactoryinterface.hxx"

QFactoryInterface* QFactoryInterface_new() {
	 return new VirtualQFactoryInterface();
}

libqt_list QFactoryInterface_Keys(const QFactoryInterface* self) {
	auto _ret = self->keys();
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

// Base class handler implementation
libqt_list QFactoryInterface_QBaseKeys(const QFactoryInterface* self) {
	auto* vqfactoryinterface = dynamic_cast<const VirtualQFactoryInterface*>(self);
	if (vqfactoryinterface && vqfactoryinterface->isVirtualQFactoryInterface) {
vqfactoryinterface->setQFactoryInterface_Keys_IsBase(true);
	auto _ret = vqfactoryinterface->keys();
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
}

// Auxiliary method to allow providing re-implementation
void QFactoryInterface_OnKeys(const QFactoryInterface* self, intptr_t slot) {
	auto* vqfactoryinterface = dynamic_cast<const VirtualQFactoryInterface*>(self);
	if (vqfactoryinterface && vqfactoryinterface->isVirtualQFactoryInterface) {
vqfactoryinterface->setQFactoryInterface_Keys_Callback(reinterpret_cast<VirtualQFactoryInterface::QFactoryInterface_Keys_Callback>(slot));
}
}

void QFactoryInterface_Delete(QFactoryInterface* self) {
    delete self;
}

