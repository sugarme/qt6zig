#include <QStringConverter>
#include <QStringConverterBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStringConverterBase__State
#include <qstringconverter_base.h>
#include "libqstringconverter_base.h"
#include "libqstringconverter_base.hxx"

bool QStringConverter_IsValid(const QStringConverter* self) {
	return self->isValid();
}

void QStringConverter_ResetState(QStringConverter* self) {
	self->resetState();
}

bool QStringConverter_HasError(const QStringConverter* self) {
	return self->hasError();
}

const char* QStringConverter_Name(const QStringConverter* self) {
	return self->name();
}

const char* QStringConverter_NameForEncoding(int e) {
	return QStringConverter::nameForEncoding(static_cast<QStringConverter::Encoding>(e));
}

libqt_list QStringConverter_AvailableCodecs() {
	auto _ret = QStringConverter::availableCodecs();
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

QStringConverterBase__State* QStringConverterBase__State_new() {
	 return new QStringConverterBase::State();
}

QStringConverterBase__State* QStringConverterBase__State_new2(int f) {
	 return new QStringConverterBase::State(static_cast<QFlags<QTextOption::Flag>>(f));
}

void QStringConverterBase__State_Clear(QStringConverterBase__State* self) {
	self->clear();
}

void QStringConverterBase__State_Reset(QStringConverterBase__State* self) {
	self->reset();
}

int QStringConverterBase__State_Flags(const QStringConverterBase__State* self) {
	return self->flags;
}

void QStringConverterBase__State_SetFlags(QStringConverterBase__State* self, int flags) {
	self->flags;
}

int QStringConverterBase__State_InternalState(const QStringConverterBase__State* self) {
	return self->internalState;
}

void QStringConverterBase__State_SetInternalState(QStringConverterBase__State* self, int internalState) {
	self->internalState;
}

ptrdiff_t QStringConverterBase__State_RemainingChars(const QStringConverterBase__State* self) {
	return self->remainingChars;
}

void QStringConverterBase__State_SetRemainingChars(QStringConverterBase__State* self, ptrdiff_t remainingChars) {
	self->remainingChars;
}

ptrdiff_t QStringConverterBase__State_InvalidChars(const QStringConverterBase__State* self) {
	return self->invalidChars;
}

void QStringConverterBase__State_SetInvalidChars(QStringConverterBase__State* self, ptrdiff_t invalidChars) {
	self->invalidChars;
}

void QStringConverterBase__State_Delete(QStringConverterBase__State* self) {
    delete self;
}

