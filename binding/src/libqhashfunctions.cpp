#include <QHashSeed>
#include <qhashfunctions.h>
#include "libqhashfunctions.h"
#include "libqhashfunctions.hxx"

QHashSeed* QHashSeed_new(const QHashSeed* other) {
	 return new QHashSeed(*other);
}

QHashSeed* QHashSeed_new2(QHashSeed* other) {
	 return new QHashSeed(*other);
}

QHashSeed* QHashSeed_new3() {
	 return new QHashSeed();
}

QHashSeed* QHashSeed_new4(unsigned long long d) {
	 return new QHashSeed(d);
}

void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other) {
    *self = *other;
}

void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other) {
    *self = std::move(*other);
}

unsigned long long QHashSeed_OperatorunsignedLongLong(const QHashSeed* self) {
	return self->operator unsigned long long();
}

QHashSeed* QHashSeed_GlobalSeed() {
	return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_SetDeterministicGlobalSeed() {
	QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_ResetRandomGlobalSeed() {
	QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_Delete(QHashSeed* self) {
    delete self;
}

