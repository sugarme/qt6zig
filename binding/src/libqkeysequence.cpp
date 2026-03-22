#include <QKeyCombination>
#include <QKeySequence>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVariant>
#include <qkeysequence.h>
#include "libqkeysequence.h"
#include "libqkeysequence.hxx"

QKeySequence* QKeySequence_new() {
	 return new QKeySequence();
}

QKeySequence* QKeySequence_new2(const libqt_string key) {
	 return new QKeySequence(QString::fromUtf8(key.data, key.len));
}

QKeySequence* QKeySequence_new3(int k1) {
	 return new QKeySequence(k1);
}

QKeySequence* QKeySequence_new4(QKeyCombination* k1) {
	 return new QKeySequence(*k1);
}

QKeySequence* QKeySequence_new5(const QKeySequence* ks) {
	 return new QKeySequence(*ks);
}

QKeySequence* QKeySequence_new6(int key) {
	 return new QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

QKeySequence* QKeySequence_new7(const libqt_string key, int format) {
	 return new QKeySequence(QString::fromUtf8(key.data, key.len), static_cast<QKeySequence::SequenceFormat>(format));
}

QKeySequence* QKeySequence_new8(int k1, int k2) {
	 return new QKeySequence(k1, k2);
}

QKeySequence* QKeySequence_new9(int k1, int k2, int k3) {
	 return new QKeySequence(k1, k2, k3);
}

QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4) {
	 return new QKeySequence(k1, k2, k3, k4);
}

QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2) {
	 return new QKeySequence(*k1, *k2);
}

QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3) {
	 return new QKeySequence(*k1, *k2, *k3);
}

QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4) {
	 return new QKeySequence(*k1, *k2, *k3, *k4);
}

int QKeySequence_Count(const QKeySequence* self) {
	return self->count();
}

bool QKeySequence_IsEmpty(const QKeySequence* self) {
	return self->isEmpty();
}

libqt_string QKeySequence_ToString(const QKeySequence* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QKeySequence* QKeySequence_FromString(const libqt_string str) {
	return new QKeySequence(QKeySequence::fromString(QString::fromUtf8(str.data, str.len)));
}

libqt_list QKeySequence_ListFromString(const libqt_string str) {
	auto _ret = QKeySequence::listFromString(QString::fromUtf8(str.data, str.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QKeySequence_ListToString(const libqt_list list) {
	QString _ret = QKeySequence::listToString(QList<QKeySequence>());
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QKeySequence_Matches(const QKeySequence* self, const QKeySequence* seq) {
	return self->matches(*seq);
}

QKeySequence* QKeySequence_Mnemonic(const libqt_string text) {
	return new QKeySequence(QKeySequence::mnemonic(QString::fromUtf8(text.data, text.len)));
}

libqt_list QKeySequence_KeyBindings(int key) {
	auto _ret = QKeySequence::keyBindings(static_cast<QKeySequence::StandardKey>(key));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QVariant* QKeySequence_OperatorQVariant(const QKeySequence* self) {
	return new QVariant(self->operator QVariant());
}

QKeyCombination* QKeySequence_OperatorSubscript(const QKeySequence* self, unsigned int i) {
	return new QKeyCombination(self->operator[](i));
}

void QKeySequence_OperatorAssign(QKeySequence* self, const QKeySequence* other) {
	self->operator=(*other);
}

void QKeySequence_Swap(QKeySequence* self, QKeySequence* other) {
	self->swap(*other);
}

bool QKeySequence_OperatorEqual(const QKeySequence* self, const QKeySequence* other) {
	return self->operator==(*other);
}

bool QKeySequence_OperatorNotEqual(const QKeySequence* self, const QKeySequence* other) {
	return self->operator!=(*other);
}

bool QKeySequence_OperatorLesser(const QKeySequence* self, const QKeySequence* ks) {
	return self->operator<(*ks);
}

bool QKeySequence_OperatorGreater(const QKeySequence* self, const QKeySequence* other) {
	return self->operator>(*other);
}

bool QKeySequence_OperatorLesserOrEqual(const QKeySequence* self, const QKeySequence* other) {
	return self->operator<=(*other);
}

bool QKeySequence_OperatorGreaterOrEqual(const QKeySequence* self, const QKeySequence* other) {
	return self->operator>=(*other);
}

bool QKeySequence_IsDetached(const QKeySequence* self) {
	return self->isDetached();
}

libqt_string QKeySequence_ToString1(const QKeySequence* self, int format) {
	QString _ret = self->toString(static_cast<QKeySequence::SequenceFormat>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QKeySequence* QKeySequence_FromString2(const libqt_string str, int format) {
	return new QKeySequence(QKeySequence::fromString(QString::fromUtf8(str.data, str.len), static_cast<QKeySequence::SequenceFormat>(format)));
}

libqt_list QKeySequence_ListFromString2(const libqt_string str, int format) {
	auto _ret = QKeySequence::listFromString(QString::fromUtf8(str.data, str.len), static_cast<QKeySequence::SequenceFormat>(format));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QKeySequence_ListToString2(const libqt_list list, int format) {
	QString _ret = QKeySequence::listToString(QList<QKeySequence>(), static_cast<QKeySequence::SequenceFormat>(format));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QKeySequence_Delete(QKeySequence* self) {
    delete self;
}

