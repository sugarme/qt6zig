#include <QInternal>
#include <QKeyCombination>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qnamespace.h>
#include "libqnamespace.h"
#include "libqnamespace.hxx"

Disambiguated_t* Disambiguated_t_new(const Disambiguated_t* other) {
	 return new Qt::Disambiguated_t(*other);
}

Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* other) {
	 return new Qt::Disambiguated_t(*other);
}

Disambiguated_t* Disambiguated_t_new3() {
	 return new Qt::Disambiguated_t();
}

Disambiguated_t* Disambiguated_t_new4(const Disambiguated_t* param1) {
	 return new Qt::Disambiguated_t(*param1);
}

void Disambiguated_t_CopyAssign(Disambiguated_t* self, Disambiguated_t* other) {
    *self = *other;
}

void Disambiguated_t_MoveAssign(Disambiguated_t* self, Disambiguated_t* other) {
    *self = std::move(*other);
}

void Disambiguated_t_Delete(Disambiguated_t* self) {
    delete self;
}

QInternal* QInternal_new(const QInternal* other) {
	 return new QInternal(*other);
}

QInternal* QInternal_new2(QInternal* other) {
	 return new QInternal(*other);
}

QInternal* QInternal_new3() {
	 return new QInternal();
}

QInternal* QInternal_new4(const QInternal* param1) {
	 return new QInternal(*param1);
}

void QInternal_CopyAssign(QInternal* self, QInternal* other) {
    *self = *other;
}

void QInternal_MoveAssign(QInternal* self, QInternal* other) {
    *self = std::move(*other);
}

bool QInternal_ActivateCallbacks(int param1, void** param2) {
	return QInternal::activateCallbacks(static_cast<QInternal::Callback>(param1), param2);
}

void QInternal_OperatorAssign(QInternal* self, const QInternal* param1) {
	self->operator=(*param1);
}

void QInternal_Delete(QInternal* self) {
    delete self;
}

QKeyCombination* QKeyCombination_new(const QKeyCombination* other) {
	 return new QKeyCombination(*other);
}

QKeyCombination* QKeyCombination_new2(QKeyCombination* other) {
	 return new QKeyCombination(*other);
}

QKeyCombination* QKeyCombination_new3() {
	 return new QKeyCombination();
}

QKeyCombination* QKeyCombination_new4(int modifiers) {
	 return new QKeyCombination(static_cast<QFlags<Qt::Modifier>>(modifiers));
}

QKeyCombination* QKeyCombination_new5(int modifiers) {
	 return new QKeyCombination(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QKeyCombination* QKeyCombination_new6(const QKeyCombination* param1) {
	 return new QKeyCombination(*param1);
}

QKeyCombination* QKeyCombination_new7(int key) {
	 return new QKeyCombination(static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new8(int modifiers, int key) {
	 return new QKeyCombination(static_cast<QFlags<Qt::Modifier>>(modifiers), static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new9(int modifiers, int key) {
	 return new QKeyCombination(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::Key>(key));
}

void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = *other;
}

void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = std::move(*other);
}

int QKeyCombination_KeyboardModifiers(const QKeyCombination* self) {
	return self->keyboardModifiers();
}

int QKeyCombination_Key(const QKeyCombination* self) {
	return self->key();
}

QKeyCombination* QKeyCombination_FromCombined(int combined) {
	return new QKeyCombination(QKeyCombination::fromCombined(combined));
}

int QKeyCombination_ToCombined(const QKeyCombination* self) {
	return self->toCombined();
}

int QKeyCombination_Operatorint(const QKeyCombination* self) {
	return self->operator int();
}

void QKeyCombination_Delete(QKeyCombination* self) {
    delete self;
}

