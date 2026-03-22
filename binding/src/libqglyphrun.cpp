#include <QGlyphRun>
#include <QPointF>
#include <QRawFont>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qglyphrun.h>
#include "libqglyphrun.h"
#include "libqglyphrun.hxx"

QGlyphRun* QGlyphRun_new() {
	 return new QGlyphRun();
}

QGlyphRun* QGlyphRun_new2(const QGlyphRun* other) {
	 return new QGlyphRun(*other);
}

void QGlyphRun_OperatorAssign(QGlyphRun* self, const QGlyphRun* other) {
	self->operator=(*other);
}

void QGlyphRun_Swap(QGlyphRun* self, QGlyphRun* other) {
	self->swap(*other);
}

QRawFont* QGlyphRun_RawFont(const QGlyphRun* self) {
	return new QRawFont(self->rawFont());
}

void QGlyphRun_SetRawFont(QGlyphRun* self, const QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QGlyphRun_SetRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, const QPointF* glyphPositionArray, int size) {
	self->setRawData(glyphIndexArray, glyphPositionArray, size);
}

libqt_list QGlyphRun_GlyphIndexes(const QGlyphRun* self) {
	return self->glyphIndexes();
}

void QGlyphRun_SetGlyphIndexes(QGlyphRun* self, const libqt_list glyphIndexes) {
	self->setGlyphIndexes(*glyphIndexes);
}

libqt_list QGlyphRun_Positions(const QGlyphRun* self) {
	return self->positions();
}

void QGlyphRun_SetPositions(QGlyphRun* self, const libqt_list positions) {
	self->setPositions(*positions);
}

void QGlyphRun_Clear(QGlyphRun* self) {
	self->clear();
}

bool QGlyphRun_OperatorEqual(const QGlyphRun* self, const QGlyphRun* other) {
	return self->operator==(*other);
}

bool QGlyphRun_OperatorNotEqual(const QGlyphRun* self, const QGlyphRun* other) {
	return self->operator!=(*other);
}

void QGlyphRun_SetOverline(QGlyphRun* self, bool overline) {
	self->setOverline(overline);
}

bool QGlyphRun_Overline(const QGlyphRun* self) {
	return self->overline();
}

void QGlyphRun_SetUnderline(QGlyphRun* self, bool underline) {
	self->setUnderline(underline);
}

bool QGlyphRun_Underline(const QGlyphRun* self) {
	return self->underline();
}

void QGlyphRun_SetStrikeOut(QGlyphRun* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QGlyphRun_StrikeOut(const QGlyphRun* self) {
	return self->strikeOut();
}

void QGlyphRun_SetRightToLeft(QGlyphRun* self, bool on) {
	self->setRightToLeft(on);
}

bool QGlyphRun_IsRightToLeft(const QGlyphRun* self) {
	return self->isRightToLeft();
}

void QGlyphRun_SetFlag(QGlyphRun* self, int flag) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag));
}

void QGlyphRun_SetFlags(QGlyphRun* self, int flags) {
	self->setFlags(static_cast<QFlags<QGlyphRun::GlyphRunFlag>>(flags));
}

int QGlyphRun_Flags(const QGlyphRun* self) {
	return self->flags();
}

void QGlyphRun_SetBoundingRect(QGlyphRun* self, const QRectF* boundingRect) {
	self->setBoundingRect(*boundingRect);
}

QRectF* QGlyphRun_BoundingRect(const QGlyphRun* self) {
	return new QRectF(self->boundingRect());
}

libqt_list QGlyphRun_StringIndexes(const QGlyphRun* self) {
	return self->stringIndexes();
}

void QGlyphRun_SetStringIndexes(QGlyphRun* self, const libqt_list stringIndexes) {
	self->setStringIndexes(*stringIndexes);
}

void QGlyphRun_SetSourceString(QGlyphRun* self, const libqt_string sourceString) {
	self->setSourceString(QString::fromUtf8(sourceString.data, sourceString.len));
}

libqt_string QGlyphRun_SourceString(const QGlyphRun* self) {
	QString _ret = self->sourceString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QGlyphRun_IsEmpty(const QGlyphRun* self) {
	return self->isEmpty();
}

void QGlyphRun_SetFlag2(QGlyphRun* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled);
}

void QGlyphRun_Delete(QGlyphRun* self) {
    delete self;
}

