#include <QAbstractAxis>
#include <QBarCategoryAxis>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbarcategoryaxis.h>
#include "libqbarcategoryaxis.h"
#include "libqbarcategoryaxis.hxx"

QBarCategoryAxis* QBarCategoryAxis_new() {
	 return new VirtualQBarCategoryAxis();
}

QBarCategoryAxis* QBarCategoryAxis_new2(QObject* parent) {
	 return new VirtualQBarCategoryAxis(parent);
}

libqt_string QBarCategoryAxis_Tr(const char* s) {
	QString _ret = QBarCategoryAxis::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QBarCategoryAxis_Type(const QBarCategoryAxis* self) {
	return self->type();
}

void QBarCategoryAxis_Append(QBarCategoryAxis* self, const libqt_list categories) {
	self->append(*categories);
}

void QBarCategoryAxis_Append2(QBarCategoryAxis* self, const libqt_string category) {
	self->append(QString::fromUtf8(category.data, category.len));
}

void QBarCategoryAxis_Remove(QBarCategoryAxis* self, const libqt_string category) {
	self->remove(QString::fromUtf8(category.data, category.len));
}

void QBarCategoryAxis_Insert(QBarCategoryAxis* self, int index, const libqt_string category) {
	self->insert(index, QString::fromUtf8(category.data, category.len));
}

void QBarCategoryAxis_Replace(QBarCategoryAxis* self, const libqt_string oldCategory, const libqt_string newCategory) {
	self->replace(QString::fromUtf8(oldCategory.data, oldCategory.len), QString::fromUtf8(newCategory.data, newCategory.len));
}

void QBarCategoryAxis_Clear(QBarCategoryAxis* self) {
	self->clear();
}

void QBarCategoryAxis_SetCategories(QBarCategoryAxis* self, const libqt_list categories) {
	self->setCategories(*categories);
}

libqt_list QBarCategoryAxis_Categories(QBarCategoryAxis* self) {
	return self->categories();
}

int QBarCategoryAxis_Count(const QBarCategoryAxis* self) {
	return self->count();
}

libqt_string QBarCategoryAxis_At(const QBarCategoryAxis* self, int index) {
	QString _ret = self->at(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarCategoryAxis_SetMin(QBarCategoryAxis* self, const libqt_string minCategory) {
	self->setMin(QString::fromUtf8(minCategory.data, minCategory.len));
}

libqt_string QBarCategoryAxis_Min(const QBarCategoryAxis* self) {
	QString _ret = self->min();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarCategoryAxis_SetMax(QBarCategoryAxis* self, const libqt_string maxCategory) {
	self->setMax(QString::fromUtf8(maxCategory.data, maxCategory.len));
}

libqt_string QBarCategoryAxis_Max(const QBarCategoryAxis* self) {
	QString _ret = self->max();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBarCategoryAxis_SetRange(QBarCategoryAxis* self, const libqt_string minCategory, const libqt_string maxCategory) {
	self->setRange(QString::fromUtf8(minCategory.data, minCategory.len), QString::fromUtf8(maxCategory.data, maxCategory.len));
}

void QBarCategoryAxis_CategoriesChanged(QBarCategoryAxis* self) {
	self->categoriesChanged();
}

void QBarCategoryAxis_Connect_CategoriesChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::categoriesChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QBarCategoryAxis_MinChanged(QBarCategoryAxis* self, const libqt_string min) {
	self->minChanged(QString::fromUtf8(min.data, min.len));
}

void QBarCategoryAxis_Connect_MinChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::minChanged, [self, slotFunc](const QString& min) {
	slotFunc(self, min);
    });
}

void QBarCategoryAxis_MaxChanged(QBarCategoryAxis* self, const libqt_string max) {
	self->maxChanged(QString::fromUtf8(max.data, max.len));
}

void QBarCategoryAxis_Connect_MaxChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::maxChanged, [self, slotFunc](const QString& max) {
	slotFunc(self, max);
    });
}

void QBarCategoryAxis_RangeChanged(QBarCategoryAxis* self, const libqt_string min, const libqt_string max) {
	self->rangeChanged(QString::fromUtf8(min.data, min.len), QString::fromUtf8(max.data, max.len));
}

void QBarCategoryAxis_Connect_RangeChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*, const char*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::rangeChanged, [self, slotFunc](const QString& min, const QString& max) {
	slotFunc(self, min, max);
    });
}

void QBarCategoryAxis_CountChanged(QBarCategoryAxis* self) {
	self->countChanged();
}

void QBarCategoryAxis_Connect_CountChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::countChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QBarCategoryAxis_Tr2(const char* s, const char* c) {
	QString _ret = QBarCategoryAxis::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBarCategoryAxis_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBarCategoryAxis::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QBarCategoryAxis_QBaseType(const QBarCategoryAxis* self) {
	auto* vqbarcategoryaxis = dynamic_cast<const VirtualQBarCategoryAxis*>(self);
	if (vqbarcategoryaxis && vqbarcategoryaxis->isVirtualQBarCategoryAxis) {
vqbarcategoryaxis->setQBarCategoryAxis_Type_IsBase(true);
	return vqbarcategoryaxis->type();
}
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnType(const QBarCategoryAxis* self, intptr_t slot) {
	auto* vqbarcategoryaxis = dynamic_cast<const VirtualQBarCategoryAxis*>(self);
	if (vqbarcategoryaxis && vqbarcategoryaxis->isVirtualQBarCategoryAxis) {
vqbarcategoryaxis->setQBarCategoryAxis_Type_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Type_Callback>(slot));
}
}

void QBarCategoryAxis_Delete(QBarCategoryAxis* self) {
    delete self;
}

