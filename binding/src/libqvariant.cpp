#include <QBitArray>
#include <QByteArray>
#include <QChar>
#include <QDataStream>
#include <QDate>
#include <QDateTime>
#include <QEasingCurve>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QLine>
#include <QLineF>
#include <QLocale>
#include <QMetaType>
#include <QModelIndex>
#include <QPartialOrdering>
#include <QPersistentModelIndex>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include <QUrl>
#include <QUuid>
#include <QVariant>
#include <qvariant.h>
#include "libqvariant.h"
#include "libqvariant.hxx"

QVariant* QVariant_new() {
	 return new QVariant();
}

QVariant* QVariant_new2(QMetaType* typeVal) {
	 return new QVariant(*typeVal);
}

QVariant* QVariant_new3(const QVariant* other) {
	 return new QVariant(*other);
}

QVariant* QVariant_new4(int i) {
	 return new QVariant(i);
}

QVariant* QVariant_new5(unsigned int ui) {
	 return new QVariant(ui);
}

QVariant* QVariant_new6(long long ll) {
	 return new QVariant(ll);
}

QVariant* QVariant_new7(unsigned long long ull) {
	 return new QVariant(ull);
}

QVariant* QVariant_new8(bool b) {
	 return new QVariant(b);
}

QVariant* QVariant_new9(double d) {
	 return new QVariant(d);
}

QVariant* QVariant_new10(float f) {
	 return new QVariant(f);
}

QVariant* QVariant_new11(QChar* qchar) {
	 return new QVariant(*qchar);
}

QVariant* QVariant_new12(QDate* date) {
	 return new QVariant(*date);
}

QVariant* QVariant_new13(QTime* time) {
	 return new QVariant(*time);
}

QVariant* QVariant_new14(const QBitArray* bitarray) {
	 return new QVariant(*bitarray);
}

QVariant* QVariant_new15(const libqt_string bytearray) {
	 return new QVariant(QByteArray(bytearray.data, bytearray.len));
}

QVariant* QVariant_new16(const QDateTime* datetime) {
	 return new QVariant(*datetime);
}

QVariant* QVariant_new17(const libqt_map hash) {
	 return new QVariant(*hash);
}

QVariant* QVariant_new18(const QJsonArray* jsonArray) {
	 return new QVariant(*jsonArray);
}

QVariant* QVariant_new19(const QJsonObject* jsonObject) {
	 return new QVariant(*jsonObject);
}

QVariant* QVariant_new20(const libqt_list list) {
	 return new QVariant(*list);
}

QVariant* QVariant_new21(const QLocale* locale) {
	 return new QVariant(*locale);
}

QVariant* QVariant_new22(const libqt_map mapVal) {
	 return new QVariant(*mapVal);
}

QVariant* QVariant_new23(const QRegularExpression* re) {
	 return new QVariant(*re);
}

QVariant* QVariant_new24(const libqt_string stringVal) {
	 return new QVariant(QString::fromUtf8(stringVal.data, stringVal.len));
}

QVariant* QVariant_new25(const libqt_list stringlist) {
	 return new QVariant(*stringlist);
}

QVariant* QVariant_new26(const QUrl* url) {
	 return new QVariant(*url);
}

QVariant* QVariant_new27(QSize* size) {
	 return new QVariant(*size);
}

QVariant* QVariant_new28(QPoint* pt) {
	 return new QVariant(*pt);
}

QVariant* QVariant_new29(int typeVal) {
	 return new QVariant(static_cast<QMetaType::Type>(typeVal));
}

QVariant* QVariant_new30(QMetaType* typeVal, const void* copyVal) {
	 return new QVariant(*typeVal, copyVal);
}

void QVariant_OperatorAssign(QVariant* self, const QVariant* other) {
	self->operator=(*other);
}

void QVariant_Swap(QVariant* self, QVariant* other) {
	self->swap(*other);
}

int QVariant_UserType(const QVariant* self) {
	return self->userType();
}

int QVariant_TypeId(const QVariant* self) {
	return self->typeId();
}

const char* QVariant_TypeName(const QVariant* self) {
	return self->typeName();
}

QMetaType* QVariant_MetaType(const QVariant* self) {
	return new QMetaType(self->metaType());
}

bool QVariant_CanConvert(const QVariant* self, QMetaType* targetType) {
	return self->canConvert(*targetType);
}

bool QVariant_Convert(QVariant* self, QMetaType* typeVal) {
	return self->convert(*typeVal);
}

bool QVariant_CanView(const QVariant* self, QMetaType* targetType) {
	return self->canView(*targetType);
}

bool QVariant_CanConvert2(const QVariant* self, int targetTypeId) {
	return self->canConvert(targetTypeId);
}

bool QVariant_Convert2(QVariant* self, int targetTypeId) {
	return self->convert(targetTypeId);
}

bool QVariant_IsValid(const QVariant* self) {
	return self->isValid();
}

bool QVariant_IsNull(const QVariant* self) {
	return self->isNull();
}

void QVariant_Clear(QVariant* self) {
	self->clear();
}

void QVariant_Detach(QVariant* self) {
	self->detach();
}

bool QVariant_IsDetached(const QVariant* self) {
	return self->isDetached();
}

int QVariant_ToInt(const QVariant* self) {
	return self->toInt();
}

unsigned int QVariant_ToUInt(const QVariant* self) {
	return self->toUInt();
}

long long QVariant_ToLongLong(const QVariant* self) {
	return self->toLongLong();
}

unsigned long long QVariant_ToULongLong(const QVariant* self) {
	return self->toULongLong();
}

bool QVariant_ToBool(const QVariant* self) {
	return self->toBool();
}

double QVariant_ToDouble(const QVariant* self) {
	return self->toDouble();
}

float QVariant_ToFloat(const QVariant* self) {
	return self->toFloat();
}

double QVariant_ToReal(const QVariant* self) {
	return self->toReal();
}

libqt_string QVariant_ToByteArray(const QVariant* self) {
	QByteArray _qb = self->toByteArray();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QBitArray* QVariant_ToBitArray(const QVariant* self) {
	return new QBitArray(self->toBitArray());
}

libqt_string QVariant_ToString(const QVariant* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QVariant_ToStringList(const QVariant* self) {
	return self->toStringList();
}

QChar* QVariant_ToChar(const QVariant* self) {
	return new QChar(self->toChar());
}

QDate* QVariant_ToDate(const QVariant* self) {
	return new QDate(self->toDate());
}

QTime* QVariant_ToTime(const QVariant* self) {
	return new QTime(self->toTime());
}

QDateTime* QVariant_ToDateTime(const QVariant* self) {
	return new QDateTime(self->toDateTime());
}

libqt_list QVariant_ToList(const QVariant* self) {
	return self->toList();
}

libqt_map QVariant_ToMap(const QVariant* self) {
	return self->toMap();
}

libqt_map QVariant_ToHash(const QVariant* self) {
	return self->toHash();
}

QPoint* QVariant_ToPoint(const QVariant* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVariant_ToPointF(const QVariant* self) {
	return new QPointF(self->toPointF());
}

QRect* QVariant_ToRect(const QVariant* self) {
	return new QRect(self->toRect());
}

QSize* QVariant_ToSize(const QVariant* self) {
	return new QSize(self->toSize());
}

QSizeF* QVariant_ToSizeF(const QVariant* self) {
	return new QSizeF(self->toSizeF());
}

QLine* QVariant_ToLine(const QVariant* self) {
	return new QLine(self->toLine());
}

QLineF* QVariant_ToLineF(const QVariant* self) {
	return new QLineF(self->toLineF());
}

QRectF* QVariant_ToRectF(const QVariant* self) {
	return new QRectF(self->toRectF());
}

QLocale* QVariant_ToLocale(const QVariant* self) {
	return new QLocale(self->toLocale());
}

QRegularExpression* QVariant_ToRegularExpression(const QVariant* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QEasingCurve* QVariant_ToEasingCurve(const QVariant* self) {
	return new QEasingCurve(self->toEasingCurve());
}

QUuid* QVariant_ToUuid(const QVariant* self) {
	return new QUuid(self->toUuid());
}

QUrl* QVariant_ToUrl(const QVariant* self) {
	return new QUrl(self->toUrl());
}

QJsonValue* QVariant_ToJsonValue(const QVariant* self) {
	return new QJsonValue(self->toJsonValue());
}

QJsonObject* QVariant_ToJsonObject(const QVariant* self) {
	return new QJsonObject(self->toJsonObject());
}

QJsonArray* QVariant_ToJsonArray(const QVariant* self) {
	return new QJsonArray(self->toJsonArray());
}

QJsonDocument* QVariant_ToJsonDocument(const QVariant* self) {
	return new QJsonDocument(self->toJsonDocument());
}

QModelIndex* QVariant_ToModelIndex(const QVariant* self) {
	return new QModelIndex(self->toModelIndex());
}

QPersistentModelIndex* QVariant_ToPersistentModelIndex(const QVariant* self) {
	return new QPersistentModelIndex(self->toPersistentModelIndex());
}

void QVariant_Load(QVariant* self, QDataStream* ds) {
	self->load(*ds);
}

void QVariant_Save(const QVariant* self, QDataStream* ds) {
	self->save(*ds);
}

int QVariant_Type(const QVariant* self) {
	return self->type();
}

const char* QVariant_TypeToName(int typeId) {
	return QVariant::typeToName(typeId);
}

int QVariant_NameToType(const char* name) {
	return QVariant::nameToType(name);
}

void* QVariant_Data(QVariant* self) {
	return self->data();
}

const void* QVariant_ConstData(const QVariant* self) {
	return self->constData();
}

const void* QVariant_Data2(const QVariant* self) {
	return self->data();
}

void QVariant_SetValue(QVariant* self, const QVariant* avalue) {
	self->setValue(*avalue);
}

QVariant* QVariant_FromMetaType(QMetaType* typeVal) {
	return new QVariant(QVariant::fromMetaType(*typeVal));
}

QPartialOrdering* QVariant_Compare(const QVariant* lhs, const QVariant* rhs) {
	return new QPartialOrdering(QVariant::compare(*lhs, *rhs));
}

QVariant__Private* QVariant_DataPtr(QVariant* self) {
	return new QVariant::Private(self->data_ptr());
}

const QVariant__Private* QVariant_DataPtr2(const QVariant* self) {
	const QVariant::Private& _ret = self->data_ptr();
	// Cast returned reference into pointer
	return const_cast<QVariant::Private*>(&_ret);
}

int QVariant_ToInt1(const QVariant* self, bool* ok) {
	return self->toInt(ok);
}

unsigned int QVariant_ToUInt1(const QVariant* self, bool* ok) {
	return self->toUInt(ok);
}

long long QVariant_ToLongLong1(const QVariant* self, bool* ok) {
	return self->toLongLong(ok);
}

unsigned long long QVariant_ToULongLong1(const QVariant* self, bool* ok) {
	return self->toULongLong(ok);
}

double QVariant_ToDouble1(const QVariant* self, bool* ok) {
	return self->toDouble(ok);
}

float QVariant_ToFloat1(const QVariant* self, bool* ok) {
	return self->toFloat(ok);
}

double QVariant_ToReal1(const QVariant* self, bool* ok) {
	return self->toReal(ok);
}

QVariant* QVariant_FromMetaType2(QMetaType* typeVal, const void* copyVal) {
	return new QVariant(QVariant::fromMetaType(*typeVal, copyVal));
}

void QVariant_Delete(QVariant* self) {
    delete self;
}

QVariantConstPointer* QVariantConstPointer_new(QVariant* variant) {
	 return new QVariantConstPointer(*variant);
}

QVariantConstPointer* QVariantConstPointer_new2(const QVariantConstPointer* param1) {
	 return new QVariantConstPointer(*param1);
}

QVariant* QVariantConstPointer_OperatorMultiply(const QVariantConstPointer* self) {
	return new QVariant(self->operator*());
}

const QVariant* QVariantConstPointer_OperatorMinusGreater(const QVariantConstPointer* self) {
	return self->operator->();
}

void QVariantConstPointer_OperatorAssign(QVariantConstPointer* self, const QVariantConstPointer* param1) {
	self->operator=(*param1);
}

void QVariantConstPointer_Delete(QVariantConstPointer* self) {
    delete self;
}

