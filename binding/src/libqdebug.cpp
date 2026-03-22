#include <QByteArray>
#include <QByteArrayView>
#include <QChar>
#include <QDebug>
#include <QDebugStateSaver>
#include <QIODevice>
#include <QIODeviceBase>
#include <QNoDebug>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qdebug.h>
#include "libqdebug.h"
#include "libqdebug.hxx"

QDebug* QDebug_new(QIODevice* device) {
	 return new QDebug(device);
}

QDebug* QDebug_new2(libqt_string stringVal) {
	 return new QDebug(QString::fromUtf8(stringVal.data, stringVal.len));
}

QDebug* QDebug_new3(const QDebug* o) {
	 return new QDebug(*o);
}

void QDebug_OperatorAssign(QDebug* self, const QDebug* other) {
	self->operator=(*other);
}

void QDebug_Swap(QDebug* self, QDebug* other) {
	self->swap(*other);
}

QDebug* QDebug_ResetFormat(QDebug* self) {
	return new QDebug(self->resetFormat());
}

QDebug* QDebug_Space(QDebug* self) {
	return new QDebug(self->space());
}

QDebug* QDebug_Nospace(QDebug* self) {
	return new QDebug(self->nospace());
}

QDebug* QDebug_MaybeSpace(QDebug* self) {
	return new QDebug(self->maybeSpace());
}

QDebug* QDebug_Verbosity(QDebug* self, int verbosityLevel) {
	return new QDebug(self->verbosity(verbosityLevel));
}

int QDebug_Verbosity2(const QDebug* self) {
	return self->verbosity();
}

void QDebug_SetVerbosity(QDebug* self, int verbosityLevel) {
	self->setVerbosity(verbosityLevel);
}

bool QDebug_AutoInsertSpaces(const QDebug* self) {
	return self->autoInsertSpaces();
}

void QDebug_SetAutoInsertSpaces(QDebug* self, bool b) {
	self->setAutoInsertSpaces(b);
}

bool QDebug_QuoteStrings(const QDebug* self) {
	return self->quoteStrings();
}

void QDebug_SetQuoteStrings(QDebug* self, bool b) {
	self->setQuoteStrings(b);
}

QDebug* QDebug_Quote(QDebug* self) {
	return new QDebug(self->quote());
}

QDebug* QDebug_Noquote(QDebug* self) {
	return new QDebug(self->noquote());
}

QDebug* QDebug_MaybeQuote(QDebug* self) {
	return new QDebug(self->maybeQuote());
}

QDebug* QDebug_OperatorShiftLeft(QDebug* self, QChar* t) {
	return new QDebug(self->operator<<(*t));
}

QDebug* QDebug_OperatorShiftLeft2(QDebug* self, bool t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft3(QDebug* self, char t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft4(QDebug* self, int16_t t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft5(QDebug* self, uint16_t t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft8(QDebug* self, int t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft9(QDebug* self, unsigned int t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft10(QDebug* self, long t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft11(QDebug* self, unsigned long t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft12(QDebug* self, long long t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft13(QDebug* self, unsigned long long t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft15(QDebug* self, float t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft16(QDebug* self, double t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft17(QDebug* self, const char* t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_OperatorShiftLeft19(QDebug* self, const libqt_string t) {
	return new QDebug(self->operator<<(QString::fromUtf8(t.data, t.len)));
}

QDebug* QDebug_OperatorShiftLeft23(QDebug* self, const libqt_string t) {
	return new QDebug(self->operator<<(QByteArray(t.data, t.len)));
}

QDebug* QDebug_OperatorShiftLeft24(QDebug* self, QByteArrayView* t) {
	return new QDebug(self->operator<<(*t));
}

QDebug* QDebug_OperatorShiftLeft25(QDebug* self, const void* t) {
	return new QDebug(self->operator<<(t));
}

QDebug* QDebug_MaybeQuote1(QDebug* self, char c) {
	return new QDebug(self->maybeQuote(c));
}

void QDebug_Delete(QDebug* self) {
    delete self;
}

QDebugStateSaver* QDebugStateSaver_new(QDebug* dbg) {
	 return new QDebugStateSaver(*dbg);
}

void QDebugStateSaver_Delete(QDebugStateSaver* self) {
    delete self;
}

QNoDebug* QNoDebug_new(const QNoDebug* other) {
	 return new QNoDebug(*other);
}

QNoDebug* QNoDebug_new2(QNoDebug* other) {
	 return new QNoDebug(*other);
}

void QNoDebug_CopyAssign(QNoDebug* self, QNoDebug* other) {
    *self = *other;
}

void QNoDebug_MoveAssign(QNoDebug* self, QNoDebug* other) {
    *self = std::move(*other);
}

QNoDebug* QNoDebug_Space(QNoDebug* self) {
	return new QNoDebug(self->space());
}

QNoDebug* QNoDebug_Nospace(QNoDebug* self) {
	return new QNoDebug(self->nospace());
}

QNoDebug* QNoDebug_MaybeSpace(QNoDebug* self) {
	return new QNoDebug(self->maybeSpace());
}

QNoDebug* QNoDebug_Quote(QNoDebug* self) {
	return new QNoDebug(self->quote());
}

QNoDebug* QNoDebug_Noquote(QNoDebug* self) {
	return new QNoDebug(self->noquote());
}

QNoDebug* QNoDebug_MaybeQuote(QNoDebug* self) {
	return new QNoDebug(self->maybeQuote());
}

QNoDebug* QNoDebug_Verbosity(QNoDebug* self, int param1) {
	return new QNoDebug(self->verbosity(param1));
}

QNoDebug* QNoDebug_MaybeQuote1(QNoDebug* self, const char param1) {
	return new QNoDebug(self->maybeQuote(param1));
}

void QNoDebug_Delete(QNoDebug* self) {
    delete self;
}

