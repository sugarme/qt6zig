#include <QRandomGenerator>
#include <QRandomGenerator64>
#include <qrandom.h>
#include "libqrandom.h"
#include "libqrandom.hxx"

QRandomGenerator* QRandomGenerator_new() {
	 return new QRandomGenerator();
}

QRandomGenerator* QRandomGenerator_new2(const unsigned int* seedBuffer, ptrdiff_t lenVal) {
	 return new QRandomGenerator(seedBuffer, lenVal);
}

QRandomGenerator* QRandomGenerator_new3(const unsigned int* begin, const unsigned int* end) {
	 return new QRandomGenerator(begin, end);
}

QRandomGenerator* QRandomGenerator_new4(const QRandomGenerator* other) {
	 return new QRandomGenerator(*other);
}

QRandomGenerator* QRandomGenerator_new5(unsigned int seedValue) {
	 return new QRandomGenerator(seedValue);
}

void QRandomGenerator_OperatorAssign(QRandomGenerator* self, const QRandomGenerator* other) {
	self->operator=(*other);
}

unsigned int QRandomGenerator_Generate(QRandomGenerator* self) {
	return self->generate();
}

unsigned long long QRandomGenerator_Generate64(QRandomGenerator* self) {
	return self->generate64();
}

double QRandomGenerator_GenerateDouble(QRandomGenerator* self) {
	return self->generateDouble();
}

double QRandomGenerator_Bounded(QRandomGenerator* self, double highest) {
	return self->bounded(highest);
}

unsigned int QRandomGenerator_Bounded2(QRandomGenerator* self, unsigned int highest) {
	return self->bounded(highest);
}

unsigned int QRandomGenerator_Bounded3(QRandomGenerator* self, unsigned int lowest, unsigned int highest) {
	return self->bounded(lowest, highest);
}

int QRandomGenerator_Bounded4(QRandomGenerator* self, int highest) {
	return self->bounded(highest);
}

int QRandomGenerator_Bounded5(QRandomGenerator* self, int lowest, int highest) {
	return self->bounded(lowest, highest);
}

unsigned long long QRandomGenerator_Bounded6(QRandomGenerator* self, unsigned long long highest) {
	return self->bounded(highest);
}

unsigned long long QRandomGenerator_Bounded7(QRandomGenerator* self, unsigned long long lowest, unsigned long long highest) {
	return self->bounded(lowest, highest);
}

long long QRandomGenerator_Bounded8(QRandomGenerator* self, long long highest) {
	return self->bounded(highest);
}

long long QRandomGenerator_Bounded9(QRandomGenerator* self, long long lowest, long long highest) {
	return self->bounded(lowest, highest);
}

long long QRandomGenerator_Bounded10(QRandomGenerator* self, int lowest, long long highest) {
	return self->bounded(lowest, highest);
}

long long QRandomGenerator_Bounded11(QRandomGenerator* self, long long lowest, int highest) {
	return self->bounded(lowest, highest);
}

unsigned long long QRandomGenerator_Bounded12(QRandomGenerator* self, unsigned int lowest, unsigned long long highest) {
	return self->bounded(lowest, highest);
}

unsigned long long QRandomGenerator_Bounded13(QRandomGenerator* self, unsigned long long lowest, unsigned int highest) {
	return self->bounded(lowest, highest);
}

void QRandomGenerator_Generate2(QRandomGenerator* self, unsigned int* begin, unsigned int* end) {
	self->generate(begin, end);
}

unsigned int QRandomGenerator_OperatorCall(QRandomGenerator* self) {
	return self->operator()();
}

void QRandomGenerator_Seed(QRandomGenerator* self) {
	self->seed();
}

void QRandomGenerator_Discard(QRandomGenerator* self, unsigned long long z) {
	self->discard(z);
}

unsigned int QRandomGenerator_Min() {
	return QRandomGenerator::min();
}

unsigned int QRandomGenerator_Max() {
	return QRandomGenerator::max();
}

QRandomGenerator* QRandomGenerator_System() {
	return QRandomGenerator::system();
}

QRandomGenerator* QRandomGenerator_Global() {
	return QRandomGenerator::global();
}

QRandomGenerator* QRandomGenerator_SecurelySeeded() {
	return new QRandomGenerator(QRandomGenerator::securelySeeded());
}

void QRandomGenerator_Seed1(QRandomGenerator* self, unsigned int s) {
	self->seed(s);
}

void QRandomGenerator_Delete(QRandomGenerator* self) {
    delete self;
}

QRandomGenerator64* QRandomGenerator64_new() {
	 return new QRandomGenerator64();
}

QRandomGenerator64* QRandomGenerator64_new2(const unsigned int* seedBuffer, ptrdiff_t lenVal) {
	 return new QRandomGenerator64(seedBuffer, lenVal);
}

QRandomGenerator64* QRandomGenerator64_new3(const unsigned int* begin, const unsigned int* end) {
	 return new QRandomGenerator64(begin, end);
}

QRandomGenerator64* QRandomGenerator64_new4(const QRandomGenerator* other) {
	 return new QRandomGenerator64(*other);
}

QRandomGenerator64* QRandomGenerator64_new5(const QRandomGenerator64* param1) {
	 return new QRandomGenerator64(*param1);
}

QRandomGenerator64* QRandomGenerator64_new6(unsigned int seedValue) {
	 return new QRandomGenerator64(seedValue);
}

unsigned long long QRandomGenerator64_Generate(QRandomGenerator64* self) {
	return self->generate();
}

unsigned long long QRandomGenerator64_OperatorCall(QRandomGenerator64* self) {
	return self->operator()();
}

void QRandomGenerator64_Discard(QRandomGenerator64* self, unsigned long long z) {
	self->discard(z);
}

unsigned long long QRandomGenerator64_Min() {
	return QRandomGenerator64::min();
}

unsigned long long QRandomGenerator64_Max() {
	return QRandomGenerator64::max();
}

QRandomGenerator64* QRandomGenerator64_System() {
	return QRandomGenerator64::system();
}

QRandomGenerator64* QRandomGenerator64_Global() {
	return QRandomGenerator64::global();
}

QRandomGenerator64* QRandomGenerator64_SecurelySeeded() {
	return new QRandomGenerator64(QRandomGenerator64::securelySeeded());
}

void QRandomGenerator64_OperatorAssign(QRandomGenerator64* self, const QRandomGenerator64* param1) {
	self->operator=(*param1);
}

void QRandomGenerator64_Delete(QRandomGenerator64* self) {
    delete self;
}

