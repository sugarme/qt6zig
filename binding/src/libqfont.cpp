#include <QByteArray>
#include <QFont>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qfont.h>
#include "libqfont.h"
#include "libqfont.hxx"

QFont* QFont_new() {
	 return new QFont();
}

QFont* QFont_new2(const libqt_string family) {
	 return new QFont(QString::fromUtf8(family.data, family.len));
}

QFont* QFont_new3(const libqt_list families) {
	 return new QFont(*families);
}

QFont* QFont_new4(const QFont* font, const QPaintDevice* pd) {
	 return new QFont(*font, pd);
}

QFont* QFont_new5(const QFont* font) {
	 return new QFont(*font);
}

QFont* QFont_new6(const libqt_string family, int pointSize) {
	 return new QFont(QString::fromUtf8(family.data, family.len), pointSize);
}

QFont* QFont_new7(const libqt_string family, int pointSize, int weight) {
	 return new QFont(QString::fromUtf8(family.data, family.len), pointSize, weight);
}

QFont* QFont_new8(const libqt_string family, int pointSize, int weight, bool italic) {
	 return new QFont(QString::fromUtf8(family.data, family.len), pointSize, weight, italic);
}

QFont* QFont_new9(const libqt_list families, int pointSize) {
	 return new QFont(*families, pointSize);
}

QFont* QFont_new10(const libqt_list families, int pointSize, int weight) {
	 return new QFont(*families, pointSize, weight);
}

QFont* QFont_new11(const libqt_list families, int pointSize, int weight, bool italic) {
	 return new QFont(*families, pointSize, weight, italic);
}

void QFont_Swap(QFont* self, QFont* other) {
	self->swap(*other);
}

libqt_string QFont_Family(const QFont* self) {
	QString _ret = self->family();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFont_SetFamily(QFont* self, const libqt_string family) {
	self->setFamily(QString::fromUtf8(family.data, family.len));
}

libqt_list QFont_Families(const QFont* self) {
	return self->families();
}

void QFont_SetFamilies(QFont* self, const libqt_list families) {
	self->setFamilies(*families);
}

libqt_string QFont_StyleName(const QFont* self) {
	QString _ret = self->styleName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFont_SetStyleName(QFont* self, const libqt_string styleName) {
	self->setStyleName(QString::fromUtf8(styleName.data, styleName.len));
}

int QFont_PointSize(const QFont* self) {
	return self->pointSize();
}

void QFont_SetPointSize(QFont* self, int pointSize) {
	self->setPointSize(pointSize);
}

double QFont_PointSizeF(const QFont* self) {
	return self->pointSizeF();
}

void QFont_SetPointSizeF(QFont* self, double pointSizeF) {
	self->setPointSizeF(pointSizeF);
}

int QFont_PixelSize(const QFont* self) {
	return self->pixelSize();
}

void QFont_SetPixelSize(QFont* self, int pixelSize) {
	self->setPixelSize(pixelSize);
}

int QFont_Weight(const QFont* self) {
	return self->weight();
}

void QFont_SetWeight(QFont* self, int weight) {
	self->setWeight(static_cast<QFont::Weight>(weight));
}

bool QFont_Bold(const QFont* self) {
	return self->bold();
}

void QFont_SetBold(QFont* self, bool bold) {
	self->setBold(bold);
}

void QFont_SetStyle(QFont* self, int style) {
	self->setStyle(static_cast<QTextListFormat::Style>(style));
}

int QFont_Style(const QFont* self) {
	return self->style();
}

bool QFont_Italic(const QFont* self) {
	return self->italic();
}

void QFont_SetItalic(QFont* self, bool b) {
	self->setItalic(b);
}

bool QFont_Underline(const QFont* self) {
	return self->underline();
}

void QFont_SetUnderline(QFont* self, bool underline) {
	self->setUnderline(underline);
}

bool QFont_Overline(const QFont* self) {
	return self->overline();
}

void QFont_SetOverline(QFont* self, bool overline) {
	self->setOverline(overline);
}

bool QFont_StrikeOut(const QFont* self) {
	return self->strikeOut();
}

void QFont_SetStrikeOut(QFont* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QFont_FixedPitch(const QFont* self) {
	return self->fixedPitch();
}

void QFont_SetFixedPitch(QFont* self, bool fixedPitch) {
	self->setFixedPitch(fixedPitch);
}

bool QFont_Kerning(const QFont* self) {
	return self->kerning();
}

void QFont_SetKerning(QFont* self, bool kerning) {
	self->setKerning(kerning);
}

int QFont_StyleHint(const QFont* self) {
	return self->styleHint();
}

int QFont_StyleStrategy(const QFont* self) {
	return self->styleStrategy();
}

void QFont_SetStyleHint(QFont* self, int param1) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_SetStyleStrategy(QFont* self, int s) {
	self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_Stretch(const QFont* self) {
	return self->stretch();
}

void QFont_SetStretch(QFont* self, int stretch) {
	self->setStretch(stretch);
}

double QFont_LetterSpacing(const QFont* self) {
	return self->letterSpacing();
}

int QFont_LetterSpacingType(const QFont* self) {
	return self->letterSpacingType();
}

void QFont_SetLetterSpacing(QFont* self, int typeVal, double spacing) {
	self->setLetterSpacing(static_cast<QFont::SpacingType>(typeVal), spacing);
}

double QFont_WordSpacing(const QFont* self) {
	return self->wordSpacing();
}

void QFont_SetWordSpacing(QFont* self, double spacing) {
	self->setWordSpacing(spacing);
}

void QFont_SetCapitalization(QFont* self, int capitalization) {
	self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QFont_Capitalization(const QFont* self) {
	return self->capitalization();
}

void QFont_SetHintingPreference(QFont* self, int hintingPreference) {
	self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QFont_HintingPreference(const QFont* self) {
	return self->hintingPreference();
}

void QFont_SetFeature(QFont* self, QFont__Tag* tag, unsigned int value) {
	self->setFeature(*tag, value);
}

void QFont_UnsetFeature(QFont* self, QFont__Tag* tag) {
	self->unsetFeature(*tag);
}

unsigned int QFont_FeatureValue(const QFont* self, QFont__Tag* tag) {
	return self->featureValue(*tag);
}

bool QFont_IsFeatureSet(const QFont* self, QFont__Tag* tag) {
	return self->isFeatureSet(*tag);
}

libqt_list QFont_FeatureTags(const QFont* self) {
	return self->featureTags();
}

void QFont_ClearFeatures(QFont* self) {
	self->clearFeatures();
}

void QFont_SetVariableAxis(QFont* self, QFont__Tag* tag, float value) {
	self->setVariableAxis(*tag, value);
}

void QFont_UnsetVariableAxis(QFont* self, QFont__Tag* tag) {
	self->unsetVariableAxis(*tag);
}

bool QFont_IsVariableAxisSet(const QFont* self, QFont__Tag* tag) {
	return self->isVariableAxisSet(*tag);
}

float QFont_VariableAxisValue(const QFont* self, QFont__Tag* tag) {
	return self->variableAxisValue(*tag);
}

void QFont_ClearVariableAxes(QFont* self) {
	self->clearVariableAxes();
}

libqt_list QFont_VariableAxisTags(const QFont* self) {
	return self->variableAxisTags();
}

bool QFont_ExactMatch(const QFont* self) {
	return self->exactMatch();
}

void QFont_OperatorAssign(QFont* self, const QFont* param1) {
	self->operator=(*param1);
}

bool QFont_OperatorEqual(const QFont* self, const QFont* param1) {
	return self->operator==(*param1);
}

bool QFont_OperatorNotEqual(const QFont* self, const QFont* param1) {
	return self->operator!=(*param1);
}

bool QFont_OperatorLesser(const QFont* self, const QFont* param1) {
	return self->operator<(*param1);
}

QVariant* QFont_OperatorQVariant(const QFont* self) {
	return new QVariant(self->operator QVariant());
}

bool QFont_IsCopyOf(const QFont* self, const QFont* param1) {
	return self->isCopyOf(*param1);
}

libqt_string QFont_Key(const QFont* self) {
	QString _ret = self->key();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFont_ToString(const QFont* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFont_FromString(QFont* self, const libqt_string param1) {
	return self->fromString(QString::fromUtf8(param1.data, param1.len));
}

libqt_string QFont_Substitute(const libqt_string param1) {
	QString _ret = QFont::substitute(QString::fromUtf8(param1.data, param1.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QFont_Substitutes(const libqt_string param1) {
	return QFont::substitutes(QString::fromUtf8(param1.data, param1.len));
}

libqt_list QFont_Substitutions() {
	return QFont::substitutions();
}

void QFont_InsertSubstitution(const libqt_string param1, const libqt_string param2) {
	QFont::insertSubstitution(QString::fromUtf8(param1.data, param1.len), QString::fromUtf8(param2.data, param2.len));
}

void QFont_InsertSubstitutions(const libqt_string param1, const libqt_list param2) {
	QFont::insertSubstitutions(QString::fromUtf8(param1.data, param1.len), *param2);
}

void QFont_RemoveSubstitutions(const libqt_string param1) {
	QFont::removeSubstitutions(QString::fromUtf8(param1.data, param1.len));
}

void QFont_Initialize() {
	QFont::initialize();
}

void QFont_Cleanup() {
	QFont::cleanup();
}

void QFont_CacheStatistics() {
	QFont::cacheStatistics();
}

libqt_string QFont_DefaultFamily(const QFont* self) {
	QString _ret = self->defaultFamily();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QFont* QFont_Resolve(const QFont* self, const QFont* param1) {
	return new QFont(self->resolve(*param1));
}

unsigned int QFont_ResolveMask(const QFont* self) {
	return self->resolveMask();
}

void QFont_SetResolveMask(QFont* self, unsigned int mask) {
	self->setResolveMask(mask);
}

void QFont_SetLegacyWeight(QFont* self, int legacyWeight) {
	self->setLegacyWeight(legacyWeight);
}

int QFont_LegacyWeight(const QFont* self) {
	return self->legacyWeight();
}

void QFont_SetStyleHint2(QFont* self, int param1, int param2) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_Delete(QFont* self) {
    delete self;
}

QFont__Tag* QFont__Tag_new(const QFont__Tag* other) {
	 return new QFont::Tag(*other);
}

QFont__Tag* QFont__Tag_new2(QFont__Tag* other) {
	 return new QFont::Tag(*other);
}

QFont__Tag* QFont__Tag_new3() {
	 return new QFont::Tag();
}

QFont__Tag* QFont__Tag_new4(const QFont__Tag* param1) {
	 return new QFont::Tag(*param1);
}

void QFont__Tag_CopyAssign(QFont__Tag* self, QFont__Tag* other) {
    *self = *other;
}

void QFont__Tag_MoveAssign(QFont__Tag* self, QFont__Tag* other) {
    *self = std::move(*other);
}

bool QFont__Tag_IsValid(const QFont__Tag* self) {
	return self->isValid();
}

unsigned int QFont__Tag_Value(const QFont__Tag* self) {
	return self->value();
}

libqt_string QFont__Tag_ToString(const QFont__Tag* self) {
	QByteArray _qb = self->toString();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFont__Tag_Delete(QFont__Tag* self) {
    delete self;
}

