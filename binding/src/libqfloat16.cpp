#include <qfloat16.h>
#include "libqfloat16.h"
#include "libqfloat16.hxx"

qfloat16* qfloat16_new(const qfloat16* other) {
	 return new qfloat16(*other);
}

qfloat16* qfloat16_new2(qfloat16* other) {
	 return new qfloat16(*other);
}

qfloat16* qfloat16_new3() {
	 return new qfloat16();
}

qfloat16* qfloat16_new4(int param1) {
	 return new qfloat16(static_cast<Qt::Initialization>(param1));
}

qfloat16* qfloat16_new5(float f) {
	 return new qfloat16(f);
}

qfloat16* qfloat16_new6(const qfloat16* param1) {
	 return new qfloat16(*param1);
}

void qfloat16_CopyAssign(qfloat16* self, qfloat16* other) {
    *self = *other;
}

void qfloat16_MoveAssign(qfloat16* self, qfloat16* other) {
    *self = std::move(*other);
}

float qfloat16_Operatorfloat(const qfloat16* self) {
	return self->operator float();
}

bool qfloat16_IsInf(const qfloat16* self) {
	return self->isInf();
}

bool qfloat16_IsNaN(const qfloat16* self) {
	return self->isNaN();
}

bool qfloat16_IsFinite(const qfloat16* self) {
	return self->isFinite();
}

int qfloat16_FpClassify(const qfloat16* self) {
	return self->fpClassify();
}

qfloat16* qfloat16_CopySign(const qfloat16* self, qfloat16* sign) {
	return new qfloat16(self->copySign(*sign));
}

qfloat16* qfloat16_LimitEpsilon() {
	return new qfloat16(qfloat16::_limit_epsilon());
}

qfloat16* qfloat16_LimitMin() {
	return new qfloat16(qfloat16::_limit_min());
}

qfloat16* qfloat16_LimitDenormMin() {
	return new qfloat16(qfloat16::_limit_denorm_min());
}

qfloat16* qfloat16_LimitMax() {
	return new qfloat16(qfloat16::_limit_max());
}

qfloat16* qfloat16_LimitLowest() {
	return new qfloat16(qfloat16::_limit_lowest());
}

qfloat16* qfloat16_LimitInfinity() {
	return new qfloat16(qfloat16::_limit_infinity());
}

qfloat16* qfloat16_LimitQuiet_NaN() {
	return new qfloat16(qfloat16::_limit_quiet_NaN());
}

qfloat16* qfloat16_LimitSignaling_NaN() {
	return new qfloat16(qfloat16::_limit_signaling_NaN());
}

bool qfloat16_IsNormal(const qfloat16* self) {
	return self->isNormal();
}

void qfloat16_Delete(qfloat16* self) {
    delete self;
}

