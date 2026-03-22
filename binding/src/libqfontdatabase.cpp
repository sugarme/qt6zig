#include <QByteArray>
#include <QFont>
#include <QFontDatabase>
#include <QFontInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfontdatabase.h>
#include "libqfontdatabase.h"
#include "libqfontdatabase.hxx"

QFontDatabase* QFontDatabase_new(const QFontDatabase* other) {
	 return new QFontDatabase(*other);
}

QFontDatabase* QFontDatabase_new2(QFontDatabase* other) {
	 return new QFontDatabase(*other);
}

QFontDatabase* QFontDatabase_new3() {
	 return new QFontDatabase();
}

QFontDatabase* QFontDatabase_new4(const QFontDatabase* param1) {
	 return new QFontDatabase(*param1);
}

void QFontDatabase_CopyAssign(QFontDatabase* self, QFontDatabase* other) {
    *self = *other;
}

void QFontDatabase_MoveAssign(QFontDatabase* self, QFontDatabase* other) {
    *self = std::move(*other);
}

libqt_list QFontDatabase_StandardSizes() {
	return QFontDatabase::standardSizes();
}

libqt_list QFontDatabase_WritingSystems() {
	return QFontDatabase::writingSystems();
}

libqt_list QFontDatabase_WritingSystems2(const libqt_string family) {
	return QFontDatabase::writingSystems(QString::fromUtf8(family.data, family.len));
}

libqt_list QFontDatabase_Families() {
	return QFontDatabase::families();
}

libqt_list QFontDatabase_Styles(const libqt_string family) {
	return QFontDatabase::styles(QString::fromUtf8(family.data, family.len));
}

libqt_list QFontDatabase_PointSizes(const libqt_string family) {
	return QFontDatabase::pointSizes(QString::fromUtf8(family.data, family.len));
}

libqt_list QFontDatabase_SmoothSizes(const libqt_string family, const libqt_string style) {
	return QFontDatabase::smoothSizes(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

libqt_string QFontDatabase_StyleString(const QFont* font) {
	QString _ret = QFontDatabase::styleString(*font);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFontDatabase_StyleString2(const QFontInfo* fontInfo) {
	QString _ret = QFontDatabase::styleString(*fontInfo);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QFont* QFontDatabase_Font(const libqt_string family, const libqt_string style, int pointSize) {
	return new QFont(QFontDatabase::font(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len), pointSize));
}

bool QFontDatabase_IsBitmapScalable(const libqt_string family) {
	return QFontDatabase::isBitmapScalable(QString::fromUtf8(family.data, family.len));
}

bool QFontDatabase_IsSmoothlyScalable(const libqt_string family) {
	return QFontDatabase::isSmoothlyScalable(QString::fromUtf8(family.data, family.len));
}

bool QFontDatabase_IsScalable(const libqt_string family) {
	return QFontDatabase::isScalable(QString::fromUtf8(family.data, family.len));
}

bool QFontDatabase_IsFixedPitch(const libqt_string family) {
	return QFontDatabase::isFixedPitch(QString::fromUtf8(family.data, family.len));
}

bool QFontDatabase_Italic(const libqt_string family, const libqt_string style) {
	return QFontDatabase::italic(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_Bold(const libqt_string family, const libqt_string style) {
	return QFontDatabase::bold(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

int QFontDatabase_Weight(const libqt_string family, const libqt_string style) {
	return QFontDatabase::weight(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_HasFamily(const libqt_string family) {
	return QFontDatabase::hasFamily(QString::fromUtf8(family.data, family.len));
}

bool QFontDatabase_IsPrivateFamily(const libqt_string family) {
	return QFontDatabase::isPrivateFamily(QString::fromUtf8(family.data, family.len));
}

libqt_string QFontDatabase_WritingSystemName(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFontDatabase_WritingSystemSample(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QFontDatabase_AddApplicationFont(const libqt_string fileName) {
	return QFontDatabase::addApplicationFont(QString::fromUtf8(fileName.data, fileName.len));
}

int QFontDatabase_AddApplicationFontFromData(const libqt_string fontData) {
	return QFontDatabase::addApplicationFontFromData(QByteArray(fontData.data, fontData.len));
}

libqt_list QFontDatabase_ApplicationFontFamilies(int id) {
	return QFontDatabase::applicationFontFamilies(id);
}

bool QFontDatabase_RemoveApplicationFont(int id) {
	return QFontDatabase::removeApplicationFont(id);
}

bool QFontDatabase_RemoveAllApplicationFonts() {
	return QFontDatabase::removeAllApplicationFonts();
}

void QFontDatabase_AddApplicationFallbackFontFamily(int script, const libqt_string familyName) {
	QFontDatabase::addApplicationFallbackFontFamily(static_cast<QChar::Script>(script), QString::fromUtf8(familyName.data, familyName.len));
}

bool QFontDatabase_RemoveApplicationFallbackFontFamily(int script, const libqt_string familyName) {
	return QFontDatabase::removeApplicationFallbackFontFamily(static_cast<QChar::Script>(script), QString::fromUtf8(familyName.data, familyName.len));
}

void QFontDatabase_SetApplicationFallbackFontFamilies(int param1, const libqt_list familyNames) {
	QFontDatabase::setApplicationFallbackFontFamilies(static_cast<QChar::Script>(param1), *familyNames);
}

libqt_list QFontDatabase_ApplicationFallbackFontFamilies(int script) {
	return QFontDatabase::applicationFallbackFontFamilies(static_cast<QChar::Script>(script));
}

QFont* QFontDatabase_SystemFont(int typeVal) {
	return new QFont(QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(typeVal)));
}

void QFontDatabase_OperatorAssign(QFontDatabase* self, const QFontDatabase* param1) {
	self->operator=(*param1);
}

libqt_list QFontDatabase_Families1(int writingSystem) {
	return QFontDatabase::families(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

libqt_list QFontDatabase_PointSizes2(const libqt_string family, const libqt_string style) {
	return QFontDatabase::pointSizes(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_IsBitmapScalable2(const libqt_string family, const libqt_string style) {
	return QFontDatabase::isBitmapScalable(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_IsSmoothlyScalable2(const libqt_string family, const libqt_string style) {
	return QFontDatabase::isSmoothlyScalable(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_IsScalable2(const libqt_string family, const libqt_string style) {
	return QFontDatabase::isScalable(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

bool QFontDatabase_IsFixedPitch2(const libqt_string family, const libqt_string style) {
	return QFontDatabase::isFixedPitch(QString::fromUtf8(family.data, family.len), QString::fromUtf8(style.data, style.len));
}

void QFontDatabase_Delete(QFontDatabase* self) {
    delete self;
}

