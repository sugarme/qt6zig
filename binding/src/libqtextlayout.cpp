#include <QFont>
#include <QPaintDevice>
#include <QPainter>
#include <QPointF>
#include <QRawFont>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextInlineObject>
#include <QTextLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange
#include <QTextLine>
#include <QTextOption>
#include <qtextlayout.h>
#include "libqtextlayout.h"
#include "libqtextlayout.hxx"

QTextInlineObject* QTextInlineObject_new(const QTextInlineObject* other) {
	 return new QTextInlineObject(*other);
}

QTextInlineObject* QTextInlineObject_new2(QTextInlineObject* other) {
	 return new QTextInlineObject(*other);
}

QTextInlineObject* QTextInlineObject_new3() {
	 return new QTextInlineObject();
}

QTextInlineObject* QTextInlineObject_new4(const QTextInlineObject* param1) {
	 return new QTextInlineObject(*param1);
}

void QTextInlineObject_CopyAssign(QTextInlineObject* self, QTextInlineObject* other) {
    *self = *other;
}

void QTextInlineObject_MoveAssign(QTextInlineObject* self, QTextInlineObject* other) {
    *self = std::move(*other);
}

bool QTextInlineObject_IsValid(const QTextInlineObject* self) {
	return self->isValid();
}

QRectF* QTextInlineObject_Rect(const QTextInlineObject* self) {
	return new QRectF(self->rect());
}

double QTextInlineObject_Width(const QTextInlineObject* self) {
	return self->width();
}

double QTextInlineObject_Ascent(const QTextInlineObject* self) {
	return self->ascent();
}

double QTextInlineObject_Descent(const QTextInlineObject* self) {
	return self->descent();
}

double QTextInlineObject_Height(const QTextInlineObject* self) {
	return self->height();
}

int QTextInlineObject_TextDirection(const QTextInlineObject* self) {
	return self->textDirection();
}

void QTextInlineObject_SetWidth(QTextInlineObject* self, double w) {
	self->setWidth(w);
}

void QTextInlineObject_SetAscent(QTextInlineObject* self, double a) {
	self->setAscent(a);
}

void QTextInlineObject_SetDescent(QTextInlineObject* self, double d) {
	self->setDescent(d);
}

int QTextInlineObject_TextPosition(const QTextInlineObject* self) {
	return self->textPosition();
}

int QTextInlineObject_FormatIndex(const QTextInlineObject* self) {
	return self->formatIndex();
}

QTextFormat* QTextInlineObject_Format(const QTextInlineObject* self) {
	return new QTextFormat(self->format());
}

void QTextInlineObject_Delete(QTextInlineObject* self) {
    delete self;
}

QTextLayout* QTextLayout_new() {
	 return new QTextLayout();
}

QTextLayout* QTextLayout_new2(const libqt_string text) {
	 return new QTextLayout(QString::fromUtf8(text.data, text.len));
}

QTextLayout* QTextLayout_new3(const libqt_string text, const QFont* font) {
	 return new QTextLayout(QString::fromUtf8(text.data, text.len), *font);
}

QTextLayout* QTextLayout_new4(const QTextBlock* b) {
	 return new QTextLayout(*b);
}

QTextLayout* QTextLayout_new5(const libqt_string text, const QFont* font, const QPaintDevice* paintdevice) {
	 return new QTextLayout(QString::fromUtf8(text.data, text.len), *font, paintdevice);
}

void QTextLayout_SetFont(QTextLayout* self, const QFont* f) {
	self->setFont(*f);
}

QFont* QTextLayout_Font(const QTextLayout* self) {
	return new QFont(self->font());
}

void QTextLayout_SetRawFont(QTextLayout* self, const QRawFont* rawFont) {
	self->setRawFont(*rawFont);
}

void QTextLayout_SetText(QTextLayout* self, const libqt_string stringVal) {
	self->setText(QString::fromUtf8(stringVal.data, stringVal.len));
}

libqt_string QTextLayout_Text(const QTextLayout* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextLayout_SetTextOption(QTextLayout* self, const QTextOption* option) {
	self->setTextOption(*option);
}

const QTextOption* QTextLayout_TextOption(const QTextLayout* self) {
	const QTextOption& _ret = self->textOption();
	// Cast returned reference into pointer
	return const_cast<QTextOption*>(&_ret);
}

void QTextLayout_SetPreeditArea(QTextLayout* self, int position, const libqt_string text) {
	self->setPreeditArea(position, QString::fromUtf8(text.data, text.len));
}

int QTextLayout_PreeditAreaPosition(const QTextLayout* self) {
	return self->preeditAreaPosition();
}

libqt_string QTextLayout_PreeditAreaText(const QTextLayout* self) {
	QString _ret = self->preeditAreaText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextLayout_SetFormats(QTextLayout* self, const libqt_list overrides) {
	self->setFormats(QList<QTextLayout::FormatRange>());
}

libqt_list QTextLayout_Formats(const QTextLayout* self) {
	auto _ret = self->formats();
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

void QTextLayout_ClearFormats(QTextLayout* self) {
	self->clearFormats();
}

void QTextLayout_SetCacheEnabled(QTextLayout* self, bool enable) {
	self->setCacheEnabled(enable);
}

bool QTextLayout_CacheEnabled(const QTextLayout* self) {
	return self->cacheEnabled();
}

void QTextLayout_SetCursorMoveStyle(QTextLayout* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QTextLayout_CursorMoveStyle(const QTextLayout* self) {
	return self->cursorMoveStyle();
}

void QTextLayout_BeginLayout(QTextLayout* self) {
	self->beginLayout();
}

void QTextLayout_EndLayout(QTextLayout* self) {
	self->endLayout();
}

void QTextLayout_ClearLayout(QTextLayout* self) {
	self->clearLayout();
}

QTextLine* QTextLayout_CreateLine(QTextLayout* self) {
	return new QTextLine(self->createLine());
}

int QTextLayout_LineCount(const QTextLayout* self) {
	return self->lineCount();
}

QTextLine* QTextLayout_LineAt(const QTextLayout* self, int i) {
	return new QTextLine(self->lineAt(i));
}

QTextLine* QTextLayout_LineForTextPosition(const QTextLayout* self, int pos) {
	return new QTextLine(self->lineForTextPosition(pos));
}

bool QTextLayout_IsValidCursorPosition(const QTextLayout* self, int pos) {
	return self->isValidCursorPosition(pos);
}

int QTextLayout_NextCursorPosition(const QTextLayout* self, int oldPos) {
	return self->nextCursorPosition(oldPos);
}

int QTextLayout_PreviousCursorPosition(const QTextLayout* self, int oldPos) {
	return self->previousCursorPosition(oldPos);
}

int QTextLayout_LeftCursorPosition(const QTextLayout* self, int oldPos) {
	return self->leftCursorPosition(oldPos);
}

int QTextLayout_RightCursorPosition(const QTextLayout* self, int oldPos) {
	return self->rightCursorPosition(oldPos);
}

void QTextLayout_Draw(const QTextLayout* self, QPainter* p, const QPointF* pos) {
	self->draw(p, *pos);
}

void QTextLayout_DrawCursor(const QTextLayout* self, QPainter* p, const QPointF* pos, int cursorPosition) {
	self->drawCursor(p, *pos, cursorPosition);
}

void QTextLayout_DrawCursor2(const QTextLayout* self, QPainter* p, const QPointF* pos, int cursorPosition, int width) {
	self->drawCursor(p, *pos, cursorPosition, width);
}

QPointF* QTextLayout_Position(const QTextLayout* self) {
	return new QPointF(self->position());
}

void QTextLayout_SetPosition(QTextLayout* self, const QPointF* p) {
	self->setPosition(*p);
}

QRectF* QTextLayout_BoundingRect(const QTextLayout* self) {
	return new QRectF(self->boundingRect());
}

double QTextLayout_MinimumWidth(const QTextLayout* self) {
	return self->minimumWidth();
}

double QTextLayout_MaximumWidth(const QTextLayout* self) {
	return self->maximumWidth();
}

libqt_list QTextLayout_GlyphRuns(const QTextLayout* self, int from, int length, quint16 flags) {
	auto _ret = self->glyphRuns(from, length, static_cast<QFlags<QTextLayout::GlyphRunRetrievalFlag>>(flags));
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

libqt_list QTextLayout_GlyphRuns2(const QTextLayout* self) {
	auto _ret = self->glyphRuns();
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

void QTextLayout_SetFlags(QTextLayout* self, int flags) {
	self->setFlags(flags);
}

int QTextLayout_NextCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->nextCursorPosition(oldPos, static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_PreviousCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->previousCursorPosition(oldPos, static_cast<QTextLayout::CursorMode>(mode));
}

void QTextLayout_Draw3(const QTextLayout* self, QPainter* p, const QPointF* pos, const libqt_list selections) {
	self->draw(p, *pos, QList<QTextLayout::FormatRange>());
}

void QTextLayout_Draw4(const QTextLayout* self, QPainter* p, const QPointF* pos, const libqt_list selections, const QRectF* clip) {
	self->draw(p, *pos, QList<QTextLayout::FormatRange>(), *clip);
}

libqt_list QTextLayout_GlyphRuns1(const QTextLayout* self, int from) {
	auto _ret = self->glyphRuns(from);
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

libqt_list QTextLayout_GlyphRuns22(const QTextLayout* self, int from, int length) {
	auto _ret = self->glyphRuns(from, length);
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

void QTextLayout_Delete(QTextLayout* self) {
    delete self;
}

QTextLine* QTextLine_new(const QTextLine* other) {
	 return new QTextLine(*other);
}

QTextLine* QTextLine_new2(QTextLine* other) {
	 return new QTextLine(*other);
}

QTextLine* QTextLine_new3() {
	 return new QTextLine();
}

QTextLine* QTextLine_new4(const QTextLine* param1) {
	 return new QTextLine(*param1);
}

void QTextLine_CopyAssign(QTextLine* self, QTextLine* other) {
    *self = *other;
}

void QTextLine_MoveAssign(QTextLine* self, QTextLine* other) {
    *self = std::move(*other);
}

bool QTextLine_IsValid(const QTextLine* self) {
	return self->isValid();
}

QRectF* QTextLine_Rect(const QTextLine* self) {
	return new QRectF(self->rect());
}

double QTextLine_X(const QTextLine* self) {
	return self->x();
}

double QTextLine_Y(const QTextLine* self) {
	return self->y();
}

double QTextLine_Width(const QTextLine* self) {
	return self->width();
}

double QTextLine_Ascent(const QTextLine* self) {
	return self->ascent();
}

double QTextLine_Descent(const QTextLine* self) {
	return self->descent();
}

double QTextLine_Height(const QTextLine* self) {
	return self->height();
}

double QTextLine_Leading(const QTextLine* self) {
	return self->leading();
}

void QTextLine_SetLeadingIncluded(QTextLine* self, bool included) {
	self->setLeadingIncluded(included);
}

bool QTextLine_LeadingIncluded(const QTextLine* self) {
	return self->leadingIncluded();
}

double QTextLine_NaturalTextWidth(const QTextLine* self) {
	return self->naturalTextWidth();
}

double QTextLine_HorizontalAdvance(const QTextLine* self) {
	return self->horizontalAdvance();
}

QRectF* QTextLine_NaturalTextRect(const QTextLine* self) {
	return new QRectF(self->naturalTextRect());
}

double QTextLine_CursorToX(const QTextLine* self, int* cursorPos) {
	return self->cursorToX(cursorPos);
}

double QTextLine_CursorToX2(const QTextLine* self, int cursorPos) {
	return self->cursorToX(cursorPos);
}

int QTextLine_XToCursor(const QTextLine* self, double x) {
	return self->xToCursor(x);
}

void QTextLine_SetLineWidth(QTextLine* self, double width) {
	self->setLineWidth(width);
}

void QTextLine_SetNumColumns(QTextLine* self, int columns) {
	self->setNumColumns(columns);
}

void QTextLine_SetNumColumns2(QTextLine* self, int columns, double alignmentWidth) {
	self->setNumColumns(columns, alignmentWidth);
}

void QTextLine_SetPosition(QTextLine* self, const QPointF* pos) {
	self->setPosition(*pos);
}

QPointF* QTextLine_Position(const QTextLine* self) {
	return new QPointF(self->position());
}

int QTextLine_TextStart(const QTextLine* self) {
	return self->textStart();
}

int QTextLine_TextLength(const QTextLine* self) {
	return self->textLength();
}

int QTextLine_LineNumber(const QTextLine* self) {
	return self->lineNumber();
}

void QTextLine_Draw(const QTextLine* self, QPainter* painter, const QPointF* position) {
	self->draw(painter, *position);
}

libqt_list QTextLine_GlyphRuns(const QTextLine* self, int from, int length, quint16 flags) {
	auto _ret = self->glyphRuns(from, length, static_cast<QFlags<QTextLayout::GlyphRunRetrievalFlag>>(flags));
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

libqt_list QTextLine_GlyphRuns2(const QTextLine* self) {
	auto _ret = self->glyphRuns();
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

double QTextLine_CursorToX22(const QTextLine* self, int* cursorPos, int edge) {
	return self->cursorToX(cursorPos, static_cast<QTextLine::Edge>(edge));
}

double QTextLine_CursorToX23(const QTextLine* self, int cursorPos, int edge) {
	return self->cursorToX(cursorPos, static_cast<QTextLine::Edge>(edge));
}

int QTextLine_XToCursor2(const QTextLine* self, double x, int param2) {
	return self->xToCursor(x, static_cast<QTextLine::CursorPosition>(param2));
}

libqt_list QTextLine_GlyphRuns1(const QTextLine* self, int from) {
	auto _ret = self->glyphRuns(from);
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

libqt_list QTextLine_GlyphRuns22(const QTextLine* self, int from, int length) {
	auto _ret = self->glyphRuns(from, length);
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

void QTextLine_Delete(QTextLine* self) {
    delete self;
}

QTextLayout__FormatRange* QTextLayout__FormatRange_new() {
	 return new QTextLayout::FormatRange();
}

int QTextLayout__FormatRange_Start(const QTextLayout__FormatRange* self) {
	return self->start;
}

void QTextLayout__FormatRange_SetStart(QTextLayout__FormatRange* self, int start) {
	self->start;
}

int QTextLayout__FormatRange_Length(const QTextLayout__FormatRange* self) {
	return self->length;
}

void QTextLayout__FormatRange_SetLength(QTextLayout__FormatRange* self, int length) {
	self->length;
}

QTextCharFormat* QTextLayout__FormatRange_Format(const QTextLayout__FormatRange* self) {
	return new QTextCharFormat(self->format);
}

void QTextLayout__FormatRange_SetFormat(QTextLayout__FormatRange* self, QTextCharFormat* format) {
	self->format;
}

void QTextLayout__FormatRange_Delete(QTextLayout__FormatRange* self) {
    delete self;
}

