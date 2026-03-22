#include <QByteArray>
#include <QChar>
#include <QFont>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFont__Tag
#include <QImage>
#include <QPainterPath>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTransform>
#include <qrawfont.h>
#include "libqrawfont.h"
#include "libqrawfont.hxx"

QRawFont* QRawFont_new() {
	 return new QRawFont();
}

QRawFont* QRawFont_new2(const libqt_string fileName, double pixelSize) {
	 return new QRawFont(QString::fromUtf8(fileName.data, fileName.len), pixelSize);
}

QRawFont* QRawFont_new3(const libqt_string fontData, double pixelSize) {
	 return new QRawFont(QByteArray(fontData.data, fontData.len), pixelSize);
}

QRawFont* QRawFont_new4(const QRawFont* other) {
	 return new QRawFont(*other);
}

QRawFont* QRawFont_new5(const libqt_string fileName, double pixelSize, int hintingPreference) {
	 return new QRawFont(QString::fromUtf8(fileName.data, fileName.len), pixelSize, static_cast<QFont::HintingPreference>(hintingPreference));
}

QRawFont* QRawFont_new6(const libqt_string fontData, double pixelSize, int hintingPreference) {
	 return new QRawFont(QByteArray(fontData.data, fontData.len), pixelSize, static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_OperatorAssign(QRawFont* self, const QRawFont* other) {
	self->operator=(*other);
}

void QRawFont_Swap(QRawFont* self, QRawFont* other) {
	self->swap(*other);
}

bool QRawFont_IsValid(const QRawFont* self) {
	return self->isValid();
}

bool QRawFont_OperatorEqual(const QRawFont* self, const QRawFont* other) {
	return self->operator==(*other);
}

bool QRawFont_OperatorNotEqual(const QRawFont* self, const QRawFont* other) {
	return self->operator!=(*other);
}

libqt_string QRawFont_FamilyName(const QRawFont* self) {
	QString _ret = self->familyName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRawFont_StyleName(const QRawFont* self) {
	QString _ret = self->styleName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRawFont_Style(const QRawFont* self) {
	return self->style();
}

int QRawFont_Weight(const QRawFont* self) {
	return self->weight();
}

libqt_list QRawFont_GlyphIndexesForString(const QRawFont* self, const libqt_string text) {
	auto _ret = self->glyphIndexesForString(QString::fromUtf8(text.data, text.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QRawFont_AdvancesForGlyphIndexes(const QRawFont* self, const libqt_list glyphIndexes) {
	auto _ret = self->advancesForGlyphIndexes(QList<unsigned int>());
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QRawFont_AdvancesForGlyphIndexes2(const QRawFont* self, const libqt_list glyphIndexes, int layoutFlags) {
	auto _ret = self->advancesForGlyphIndexes(QList<unsigned int>(), static_cast<QFlags<QRawFont::LayoutFlag>>(layoutFlags));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

bool QRawFont_GlyphIndexesForChars(const QRawFont* self, const QChar* chars, int numChars, unsigned int* glyphIndexes, int* numGlyphs) {
	return self->glyphIndexesForChars(chars, numChars, glyphIndexes, numGlyphs);
}

bool QRawFont_AdvancesForGlyphIndexes3(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs) {
	return self->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs);
}

bool QRawFont_AdvancesForGlyphIndexes4(const QRawFont* self, const unsigned int* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags) {
	return self->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs, static_cast<QFlags<QRawFont::LayoutFlag>>(layoutFlags));
}

QImage* QRawFont_AlphaMapForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	return new QImage(self->alphaMapForGlyph(glyphIndex));
}

QPainterPath* QRawFont_PathForGlyph(const QRawFont* self, unsigned int glyphIndex) {
	return new QPainterPath(self->pathForGlyph(glyphIndex));
}

QRectF* QRawFont_BoundingRect(const QRawFont* self, unsigned int glyphIndex) {
	return new QRectF(self->boundingRect(glyphIndex));
}

void QRawFont_SetPixelSize(QRawFont* self, double pixelSize) {
	self->setPixelSize(pixelSize);
}

double QRawFont_PixelSize(const QRawFont* self) {
	return self->pixelSize();
}

int QRawFont_HintingPreference(const QRawFont* self) {
	return self->hintingPreference();
}

double QRawFont_Ascent(const QRawFont* self) {
	return self->ascent();
}

double QRawFont_CapHeight(const QRawFont* self) {
	return self->capHeight();
}

double QRawFont_Descent(const QRawFont* self) {
	return self->descent();
}

double QRawFont_Leading(const QRawFont* self) {
	return self->leading();
}

double QRawFont_XHeight(const QRawFont* self) {
	return self->xHeight();
}

double QRawFont_AverageCharWidth(const QRawFont* self) {
	return self->averageCharWidth();
}

double QRawFont_MaxCharWidth(const QRawFont* self) {
	return self->maxCharWidth();
}

double QRawFont_LineThickness(const QRawFont* self) {
	return self->lineThickness();
}

double QRawFont_UnderlinePosition(const QRawFont* self) {
	return self->underlinePosition();
}

double QRawFont_UnitsPerEm(const QRawFont* self) {
	return self->unitsPerEm();
}

void QRawFont_LoadFromFile(QRawFont* self, const libqt_string fileName, double pixelSize, int hintingPreference) {
	self->loadFromFile(QString::fromUtf8(fileName.data, fileName.len), pixelSize, static_cast<QFont::HintingPreference>(hintingPreference));
}

void QRawFont_LoadFromData(QRawFont* self, const libqt_string fontData, double pixelSize, int hintingPreference) {
	self->loadFromData(QByteArray(fontData.data, fontData.len), pixelSize, static_cast<QFont::HintingPreference>(hintingPreference));
}

bool QRawFont_SupportsCharacter(const QRawFont* self, unsigned int ucs4) {
	return self->supportsCharacter(ucs4);
}

bool QRawFont_SupportsCharacter2(const QRawFont* self, QChar* character) {
	return self->supportsCharacter(*character);
}

libqt_list QRawFont_SupportedWritingSystems(const QRawFont* self) {
	auto _ret = self->supportedWritingSystems();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QRawFont_FontTable(const QRawFont* self, const char* tagName) {
	QByteArray _qb = self->fontTable(tagName);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRawFont_FontTable2(const QRawFont* self, QFont__Tag* tag) {
	QByteArray _qb = self->fontTable(*tag);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QRawFont* QRawFont_FromFont(const QFont* font) {
	return new QRawFont(QRawFont::fromFont(*font));
}

QImage* QRawFont_AlphaMapForGlyph2(const QRawFont* self, unsigned int glyphIndex, int antialiasingType) {
	return new QImage(self->alphaMapForGlyph(glyphIndex, static_cast<QRawFont::AntialiasingType>(antialiasingType)));
}

QImage* QRawFont_AlphaMapForGlyph3(const QRawFont* self, unsigned int glyphIndex, int antialiasingType, const QTransform* transform) {
	return new QImage(self->alphaMapForGlyph(glyphIndex, static_cast<QRawFont::AntialiasingType>(antialiasingType), *transform));
}

QRawFont* QRawFont_FromFont2(const QFont* font, int writingSystem) {
	return new QRawFont(QRawFont::fromFont(*font, static_cast<QFontDatabase::WritingSystem>(writingSystem)));
}

void QRawFont_Delete(QRawFont* self) {
    delete self;
}

