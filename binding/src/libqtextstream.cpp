#include <QByteArray>
#include <QChar>
#include <QIODevice>
#include <QIODeviceBase>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <QTextStream>
#include <qtextstream.h>
#include "libqtextstream.h"
#include "libqtextstream.hxx"

QTextStream* QTextStream_new() {
	 return new QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	 return new QTextStream(device);
}

QTextStream* QTextStream_new3(FILE* fileHandle) {
	 return new QTextStream(fileHandle);
}

QTextStream* QTextStream_new4(libqt_string stringVal) {
	 return new QTextStream(QString::fromUtf8(stringVal.data, stringVal.len));
}

QTextStream* QTextStream_new5(libqt_string array) {
	 return new QTextStream(QByteArray(array.data, array.len));
}

QTextStream* QTextStream_new6(const libqt_string array) {
	 return new QTextStream(QByteArray(array.data, array.len));
}

QTextStream* QTextStream_new7(FILE* fileHandle, int openMode) {
	 return new QTextStream(fileHandle, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

QTextStream* QTextStream_new8(libqt_string stringVal, int openMode) {
	 return new QTextStream(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

QTextStream* QTextStream_new9(libqt_string array, int openMode) {
	 return new QTextStream(QByteArray(array.data, array.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

QTextStream* QTextStream_new10(const libqt_string array, int openMode) {
	 return new QTextStream(QByteArray(array.data, array.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QTextStream_SetEncoding(QTextStream* self, int encoding) {
	self->setEncoding(static_cast<QStringConverter::Encoding>(encoding));
}

int QTextStream_Encoding(const QTextStream* self) {
	return self->encoding();
}

void QTextStream_SetAutoDetectUnicode(QTextStream* self, bool enabled) {
	self->setAutoDetectUnicode(enabled);
}

bool QTextStream_AutoDetectUnicode(const QTextStream* self) {
	return self->autoDetectUnicode();
}

void QTextStream_SetGenerateByteOrderMark(QTextStream* self, bool generate) {
	self->setGenerateByteOrderMark(generate);
}

bool QTextStream_GenerateByteOrderMark(const QTextStream* self) {
	return self->generateByteOrderMark();
}

void QTextStream_SetLocale(QTextStream* self, const QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QTextStream_Locale(const QTextStream* self) {
	return new QLocale(self->locale());
}

void QTextStream_SetDevice(QTextStream* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextStream_Device(const QTextStream* self) {
	return self->device();
}

void QTextStream_SetString(QTextStream* self, libqt_string stringVal) {
	self->setString(QString::fromUtf8(stringVal.data, stringVal.len));
}

libqt_string QTextStream_String(const QTextStream* self) {
	QString _ret = self->string();
	QByteArray _b = _ret->toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QTextStream_Status(const QTextStream* self) {
	return self->status();
}

void QTextStream_SetStatus(QTextStream* self, int status) {
	self->setStatus(static_cast<QTextStream::Status>(status));
}

void QTextStream_ResetStatus(QTextStream* self) {
	self->resetStatus();
}

bool QTextStream_AtEnd(const QTextStream* self) {
	return self->atEnd();
}

void QTextStream_Reset(QTextStream* self) {
	self->reset();
}

void QTextStream_Flush(QTextStream* self) {
	self->flush();
}

bool QTextStream_Seek(QTextStream* self, long long pos) {
	return self->seek(pos);
}

long long QTextStream_Pos(const QTextStream* self) {
	return self->pos();
}

void QTextStream_SkipWhiteSpace(QTextStream* self) {
	self->skipWhiteSpace();
}

libqt_string QTextStream_ReadLine(QTextStream* self) {
	QString _ret = self->readLine();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextStream_ReadLineInto(QTextStream* self, libqt_string line) {
	return self->readLineInto(QString::fromUtf8(line.data, line.len));
}

libqt_string QTextStream_ReadAll(QTextStream* self) {
	QString _ret = self->readAll();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextStream_Read(QTextStream* self, long long maxlen) {
	QString _ret = self->read(maxlen);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextStream_SetFieldAlignment(QTextStream* self, int alignment) {
	self->setFieldAlignment(static_cast<QTextStream::FieldAlignment>(alignment));
}

int QTextStream_FieldAlignment(const QTextStream* self) {
	return self->fieldAlignment();
}

void QTextStream_SetPadChar(QTextStream* self, QChar* ch) {
	self->setPadChar(*ch);
}

QChar* QTextStream_PadChar(const QTextStream* self) {
	return new QChar(self->padChar());
}

void QTextStream_SetFieldWidth(QTextStream* self, int width) {
	self->setFieldWidth(width);
}

int QTextStream_FieldWidth(const QTextStream* self) {
	return self->fieldWidth();
}

void QTextStream_SetNumberFlags(QTextStream* self, int flags) {
	self->setNumberFlags(static_cast<QFlags<QTextStream::NumberFlag>>(flags));
}

int QTextStream_NumberFlags(const QTextStream* self) {
	return self->numberFlags();
}

void QTextStream_SetIntegerBase(QTextStream* self, int base) {
	self->setIntegerBase(base);
}

int QTextStream_IntegerBase(const QTextStream* self) {
	return self->integerBase();
}

void QTextStream_SetRealNumberNotation(QTextStream* self, int notation) {
	self->setRealNumberNotation(static_cast<QTextStream::RealNumberNotation>(notation));
}

int QTextStream_RealNumberNotation(const QTextStream* self) {
	return self->realNumberNotation();
}

void QTextStream_SetRealNumberPrecision(QTextStream* self, int precision) {
	self->setRealNumberPrecision(precision);
}

int QTextStream_RealNumberPrecision(const QTextStream* self) {
	return self->realNumberPrecision();
}

QTextStream* QTextStream_OperatorShiftRight(QTextStream* self, QChar* ch) {
	return new QTextStream(self->operator>>(*ch));
}

QTextStream* QTextStream_OperatorShiftRight2(QTextStream* self, char* ch) {
	return new QTextStream(self->operator>>(*ch));
}

QTextStream* QTextStream_OperatorShiftRight4(QTextStream* self, int16_t* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight5(QTextStream* self, uint16_t* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight6(QTextStream* self, int* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight7(QTextStream* self, unsigned int* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight8(QTextStream* self, long* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight9(QTextStream* self, unsigned long* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight10(QTextStream* self, long long* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight11(QTextStream* self, unsigned long long* i) {
	return new QTextStream(self->operator>>(*i));
}

QTextStream* QTextStream_OperatorShiftRight12(QTextStream* self, float* f) {
	return new QTextStream(self->operator>>(*f));
}

QTextStream* QTextStream_OperatorShiftRight13(QTextStream* self, double* f) {
	return new QTextStream(self->operator>>(*f));
}

QTextStream* QTextStream_OperatorShiftRight14(QTextStream* self, libqt_string s) {
	return new QTextStream(self->operator>>(QString::fromUtf8(s.data, s.len)));
}

QTextStream* QTextStream_OperatorShiftRight15(QTextStream* self, libqt_string array) {
	return new QTextStream(self->operator>>(QByteArray(array.data, array.len)));
}

QTextStream* QTextStream_OperatorShiftRight16(QTextStream* self, char* c) {
	return new QTextStream(self->operator>>(c));
}

QTextStream* QTextStream_OperatorShiftLeft(QTextStream* self, QChar* ch) {
	return new QTextStream(self->operator<<(*ch));
}

QTextStream* QTextStream_OperatorShiftLeft2(QTextStream* self, char ch) {
	return new QTextStream(self->operator<<(ch));
}

QTextStream* QTextStream_OperatorShiftLeft4(QTextStream* self, int16_t i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft5(QTextStream* self, uint16_t i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft6(QTextStream* self, int i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft7(QTextStream* self, unsigned int i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft8(QTextStream* self, long i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft9(QTextStream* self, unsigned long i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft10(QTextStream* self, long long i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft11(QTextStream* self, unsigned long long i) {
	return new QTextStream(self->operator<<(i));
}

QTextStream* QTextStream_OperatorShiftLeft12(QTextStream* self, float f) {
	return new QTextStream(self->operator<<(f));
}

QTextStream* QTextStream_OperatorShiftLeft13(QTextStream* self, double f) {
	return new QTextStream(self->operator<<(f));
}

QTextStream* QTextStream_OperatorShiftLeft14(QTextStream* self, const libqt_string s) {
	return new QTextStream(self->operator<<(QString::fromUtf8(s.data, s.len)));
}

QTextStream* QTextStream_OperatorShiftLeft15(QTextStream* self, QStringView* s) {
	return new QTextStream(self->operator<<(*s));
}

QTextStream* QTextStream_OperatorShiftLeft16(QTextStream* self, QLatin1StringView s) {
	return new QTextStream(self->operator<<(s));
}

QTextStream* QTextStream_OperatorShiftLeft17(QTextStream* self, const libqt_string array) {
	return new QTextStream(self->operator<<(QByteArray(array.data, array.len)));
}

QTextStream* QTextStream_OperatorShiftLeft18(QTextStream* self, const char* c) {
	return new QTextStream(self->operator<<(c));
}

QTextStream* QTextStream_OperatorShiftLeft19(QTextStream* self, const void* ptr) {
	return new QTextStream(self->operator<<(ptr));
}

void QTextStream_SetString2(QTextStream* self, libqt_string stringVal, int openMode) {
	self->setString(QString::fromUtf8(stringVal.data, stringVal.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

libqt_string QTextStream_ReadLine1(QTextStream* self, long long maxlen) {
	QString _ret = self->readLine(maxlen);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextStream_ReadLineInto2(QTextStream* self, libqt_string line, long long maxlen) {
	return self->readLineInto(QString::fromUtf8(line.data, line.len), maxlen);
}

void QTextStream_Delete(QTextStream* self) {
    delete self;
}

QTextStreamManipulator* QTextStreamManipulator_new(const QTextStreamManipulator* other) {
	 return new QTextStreamManipulator(*other);
}

QTextStreamManipulator* QTextStreamManipulator_new2(QTextStreamManipulator* other) {
	 return new QTextStreamManipulator(*other);
}

QTextStreamManipulator* QTextStreamManipulator_new3(void (QTextStream::*)(int) m, int a) {
	 return new QTextStreamManipulator(m, a);
}

QTextStreamManipulator* QTextStreamManipulator_new4(void (QTextStream::*)(QChar) m, QChar* c) {
	 return new QTextStreamManipulator(m, *c);
}

QTextStreamManipulator* QTextStreamManipulator_new5(const QTextStreamManipulator* param1) {
	 return new QTextStreamManipulator(*param1);
}

void QTextStreamManipulator_CopyAssign(QTextStreamManipulator* self, QTextStreamManipulator* other) {
    *self = *other;
}

void QTextStreamManipulator_MoveAssign(QTextStreamManipulator* self, QTextStreamManipulator* other) {
    *self = std::move(*other);
}

void QTextStreamManipulator_Exec(QTextStreamManipulator* self, QTextStream* s) {
	self->exec(*s);
}

void QTextStreamManipulator_Delete(QTextStreamManipulator* self) {
    delete self;
}

