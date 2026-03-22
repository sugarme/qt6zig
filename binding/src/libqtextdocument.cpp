#include <QAbstractTextDocumentLayout>
#include <QAbstractUndoItem>
#include <QChar>
#include <QFont>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextObject>
#include <QTextOption>
#include <QUrl>
#include <QVariant>
#include <qtextdocument.h>
#include "libqtextdocument.h"
#include "libqtextdocument.hxx"

QAbstractUndoItem* QAbstractUndoItem_new() {
	 return new VirtualQAbstractUndoItem();
}

QAbstractUndoItem* QAbstractUndoItem_new2(const QAbstractUndoItem* param1) {
	 return new VirtualQAbstractUndoItem(*param1);
}

void QAbstractUndoItem_Undo(QAbstractUndoItem* self) {
	self->undo();
}

void QAbstractUndoItem_Redo(QAbstractUndoItem* self) {
	self->redo();
}

void QAbstractUndoItem_OperatorAssign(QAbstractUndoItem* self, const QAbstractUndoItem* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
void QAbstractUndoItem_QBaseUndo(QAbstractUndoItem* self) {
	auto* vqabstractundoitem = dynamic_cast<VirtualQAbstractUndoItem*>(self);
	if (vqabstractundoitem && vqabstractundoitem->isVirtualQAbstractUndoItem) {
vqabstractundoitem->setQAbstractUndoItem_Undo_IsBase(true);
	vqabstractundoitem->undo();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractUndoItem_OnUndo(QAbstractUndoItem* self, intptr_t slot) {
	auto* vqabstractundoitem = dynamic_cast<VirtualQAbstractUndoItem*>(self);
	if (vqabstractundoitem && vqabstractundoitem->isVirtualQAbstractUndoItem) {
vqabstractundoitem->setQAbstractUndoItem_Undo_Callback(reinterpret_cast<VirtualQAbstractUndoItem::QAbstractUndoItem_Undo_Callback>(slot));
}
}

// Base class handler implementation
void QAbstractUndoItem_QBaseRedo(QAbstractUndoItem* self) {
	auto* vqabstractundoitem = dynamic_cast<VirtualQAbstractUndoItem*>(self);
	if (vqabstractundoitem && vqabstractundoitem->isVirtualQAbstractUndoItem) {
vqabstractundoitem->setQAbstractUndoItem_Redo_IsBase(true);
	vqabstractundoitem->redo();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractUndoItem_OnRedo(QAbstractUndoItem* self, intptr_t slot) {
	auto* vqabstractundoitem = dynamic_cast<VirtualQAbstractUndoItem*>(self);
	if (vqabstractundoitem && vqabstractundoitem->isVirtualQAbstractUndoItem) {
vqabstractundoitem->setQAbstractUndoItem_Redo_Callback(reinterpret_cast<VirtualQAbstractUndoItem::QAbstractUndoItem_Redo_Callback>(slot));
}
}

void QAbstractUndoItem_Delete(QAbstractUndoItem* self) {
    delete self;
}

QTextDocument* QTextDocument_new() {
	 return new VirtualQTextDocument();
}

QTextDocument* QTextDocument_new2(const libqt_string text) {
	 return new VirtualQTextDocument(QString::fromUtf8(text.data, text.len));
}

QTextDocument* QTextDocument_new3(QObject* parent) {
	 return new VirtualQTextDocument(parent);
}

QTextDocument* QTextDocument_new4(const libqt_string text, QObject* parent) {
	 return new VirtualQTextDocument(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QTextDocument_Tr(const char* s) {
	QString _ret = QTextDocument::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QTextDocument_IsEmpty(const QTextDocument* self) {
	return self->isEmpty();
}

void QTextDocument_Clear(QTextDocument* self) {
	self->clear();
}

void QTextDocument_SetUndoRedoEnabled(QTextDocument* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

bool QTextDocument_IsUndoRedoEnabled(const QTextDocument* self) {
	return self->isUndoRedoEnabled();
}

bool QTextDocument_IsUndoAvailable(const QTextDocument* self) {
	return self->isUndoAvailable();
}

bool QTextDocument_IsRedoAvailable(const QTextDocument* self) {
	return self->isRedoAvailable();
}

int QTextDocument_AvailableUndoSteps(const QTextDocument* self) {
	return self->availableUndoSteps();
}

int QTextDocument_AvailableRedoSteps(const QTextDocument* self) {
	return self->availableRedoSteps();
}

int QTextDocument_Revision(const QTextDocument* self) {
	return self->revision();
}

void QTextDocument_SetDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout) {
	self->setDocumentLayout(layout);
}

QAbstractTextDocumentLayout* QTextDocument_DocumentLayout(const QTextDocument* self) {
	return self->documentLayout();
}

void QTextDocument_SetMetaInformation(QTextDocument* self, int info, const libqt_string param2) {
	self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), QString::fromUtf8(param2.data, param2.len));
}

libqt_string QTextDocument_MetaInformation(const QTextDocument* self, int info) {
	QString _ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocument_ToHtml(const QTextDocument* self) {
	QString _ret = self->toHtml();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocument_SetHtml(QTextDocument* self, const libqt_string html) {
	self->setHtml(QString::fromUtf8(html.data, html.len));
}

libqt_string QTextDocument_ToMarkdown(const QTextDocument* self) {
	QString _ret = self->toMarkdown();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocument_SetMarkdown(QTextDocument* self, const libqt_string markdown) {
	self->setMarkdown(QString::fromUtf8(markdown.data, markdown.len));
}

libqt_string QTextDocument_ToRawText(const QTextDocument* self) {
	QString _ret = self->toRawText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocument_ToPlainText(const QTextDocument* self) {
	QString _ret = self->toPlainText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocument_SetPlainText(QTextDocument* self, const libqt_string text) {
	self->setPlainText(QString::fromUtf8(text.data, text.len));
}

QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos) {
	return new QChar(self->characterAt(pos));
}

QTextCursor* QTextDocument_Find(const QTextDocument* self, const libqt_string subString) {
	return new QTextCursor(self->find(QString::fromUtf8(subString.data, subString.len)));
}

QTextCursor* QTextDocument_Find2(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor) {
	return new QTextCursor(self->find(QString::fromUtf8(subString.data, subString.len), *cursor));
}

QTextCursor* QTextDocument_Find3(const QTextDocument* self, const QRegularExpression* expr) {
	return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_Find4(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor) {
	return new QTextCursor(self->find(*expr, *cursor));
}

QTextFrame* QTextDocument_FrameAt(const QTextDocument* self, int pos) {
	return self->frameAt(pos);
}

QTextFrame* QTextDocument_RootFrame(const QTextDocument* self) {
	return self->rootFrame();
}

QTextObject* QTextDocument_Object(const QTextDocument* self, int objectIndex) {
	return self->object(objectIndex);
}

QTextObject* QTextDocument_ObjectForFormat(const QTextDocument* self, const QTextFormat* param1) {
	return self->objectForFormat(*param1);
}

QTextBlock* QTextDocument_FindBlock(const QTextDocument* self, int pos) {
	return new QTextBlock(self->findBlock(pos));
}

QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByNumber(blockNumber));
}

QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByLineNumber(blockNumber));
}

QTextBlock* QTextDocument_Begin(const QTextDocument* self) {
	return new QTextBlock(self->begin());
}

QTextBlock* QTextDocument_End(const QTextDocument* self) {
	return new QTextBlock(self->end());
}

QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self) {
	return new QTextBlock(self->firstBlock());
}

QTextBlock* QTextDocument_LastBlock(const QTextDocument* self) {
	return new QTextBlock(self->lastBlock());
}

void QTextDocument_SetPageSize(QTextDocument* self, const QSizeF* size) {
	self->setPageSize(*size);
}

QSizeF* QTextDocument_PageSize(const QTextDocument* self) {
	return new QSizeF(self->pageSize());
}

void QTextDocument_SetDefaultFont(QTextDocument* self, const QFont* font) {
	self->setDefaultFont(*font);
}

QFont* QTextDocument_DefaultFont(const QTextDocument* self) {
	return new QFont(self->defaultFont());
}

void QTextDocument_SetSuperScriptBaseline(QTextDocument* self, double baseline) {
	self->setSuperScriptBaseline(baseline);
}

double QTextDocument_SuperScriptBaseline(const QTextDocument* self) {
	return self->superScriptBaseline();
}

void QTextDocument_SetSubScriptBaseline(QTextDocument* self, double baseline) {
	self->setSubScriptBaseline(baseline);
}

double QTextDocument_SubScriptBaseline(const QTextDocument* self) {
	return self->subScriptBaseline();
}

void QTextDocument_SetBaselineOffset(QTextDocument* self, double baseline) {
	self->setBaselineOffset(baseline);
}

double QTextDocument_BaselineOffset(const QTextDocument* self) {
	return self->baselineOffset();
}

int QTextDocument_PageCount(const QTextDocument* self) {
	return self->pageCount();
}

bool QTextDocument_IsModified(const QTextDocument* self) {
	return self->isModified();
}

void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, const QUrl* name) {
	return new QVariant(self->resource(typeVal, *name));
}

void QTextDocument_AddResource(QTextDocument* self, int typeVal, const QUrl* name, const QVariant* resource) {
	self->addResource(typeVal, *name, *resource);
}

libqt_list QTextDocument_AllFormats(const QTextDocument* self) {
	auto _ret = self->allFormats();
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

void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length) {
	self->markContentsDirty(from, length);
}

void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextDocument_UseDesignMetrics(const QTextDocument* self) {
	return self->useDesignMetrics();
}

void QTextDocument_SetLayoutEnabled(QTextDocument* self, bool b) {
	self->setLayoutEnabled(b);
}

bool QTextDocument_IsLayoutEnabled(const QTextDocument* self) {
	return self->isLayoutEnabled();
}

void QTextDocument_DrawContents(QTextDocument* self, QPainter* painter) {
	self->drawContents(painter);
}

void QTextDocument_SetTextWidth(QTextDocument* self, double width) {
	self->setTextWidth(width);
}

double QTextDocument_TextWidth(const QTextDocument* self) {
	return self->textWidth();
}

double QTextDocument_IdealWidth(const QTextDocument* self) {
	return self->idealWidth();
}

double QTextDocument_IndentWidth(const QTextDocument* self) {
	return self->indentWidth();
}

void QTextDocument_SetIndentWidth(QTextDocument* self, double width) {
	self->setIndentWidth(width);
}

double QTextDocument_DocumentMargin(const QTextDocument* self) {
	return self->documentMargin();
}

void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin) {
	self->setDocumentMargin(margin);
}

void QTextDocument_AdjustSize(QTextDocument* self) {
	self->adjustSize();
}

QSizeF* QTextDocument_Size(const QTextDocument* self) {
	return new QSizeF(self->size());
}

int QTextDocument_BlockCount(const QTextDocument* self) {
	return self->blockCount();
}

int QTextDocument_LineCount(const QTextDocument* self) {
	return self->lineCount();
}

int QTextDocument_CharacterCount(const QTextDocument* self) {
	return self->characterCount();
}

void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, const libqt_string sheet) {
	self->setDefaultStyleSheet(QString::fromUtf8(sheet.data, sheet.len));
}

libqt_string QTextDocument_DefaultStyleSheet(const QTextDocument* self) {
	QString _ret = self->defaultStyleSheet();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor) {
	self->undo(cursor);
}

void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor) {
	self->redo(cursor);
}

void QTextDocument_ClearUndoRedoStacks(QTextDocument* self) {
	self->clearUndoRedoStacks();
}

int QTextDocument_MaximumBlockCount(const QTextDocument* self) {
	return self->maximumBlockCount();
}

void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum) {
	self->setMaximumBlockCount(maximum);
}

QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self) {
	return new QTextOption(self->defaultTextOption());
}

void QTextDocument_SetDefaultTextOption(QTextDocument* self, const QTextOption* option) {
	self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_BaseUrl(const QTextDocument* self) {
	return new QUrl(self->baseUrl());
}

void QTextDocument_SetBaseUrl(QTextDocument* self, const QUrl* url) {
	self->setBaseUrl(*url);
}

int QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self) {
	return self->defaultCursorMoveStyle();
}

void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, int style) {
	self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
	self->contentsChange(from, charsRemoved, charsAdded);
}

void QTextDocument_Connect_ContentsChange(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, int, int, int) = reinterpret_cast<void (*)(QTextDocument*, int, int, int)>(slot);
    QTextDocument::connect(self, &QTextDocument::contentsChange, [self, slotFunc](int from, int charsRemoved, int charsAdded) {
	slotFunc(self, from, charsRemoved, charsAdded);
    });
}

void QTextDocument_ContentsChanged(QTextDocument* self) {
	self->contentsChanged();
}

void QTextDocument_Connect_ContentsChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::contentsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextDocument_UndoAvailable(QTextDocument* self, bool param1) {
	self->undoAvailable(param1);
}

void QTextDocument_Connect_UndoAvailable(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::undoAvailable, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QTextDocument_RedoAvailable(QTextDocument* self, bool param1) {
	self->redoAvailable(param1);
}

void QTextDocument_Connect_RedoAvailable(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::redoAvailable, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QTextDocument_UndoCommandAdded(QTextDocument* self) {
	self->undoCommandAdded();
}

void QTextDocument_Connect_UndoCommandAdded(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::undoCommandAdded, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextDocument_ModificationChanged(QTextDocument* self, bool m) {
	self->modificationChanged(m);
}

void QTextDocument_Connect_ModificationChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, bool) = reinterpret_cast<void (*)(QTextDocument*, bool)>(slot);
    QTextDocument::connect(self, &QTextDocument::modificationChanged, [self, slotFunc](bool m) {
	slotFunc(self, m);
    });
}

void QTextDocument_CursorPositionChanged(QTextDocument* self, const QTextCursor* cursor) {
	self->cursorPositionChanged(*cursor);
}

void QTextDocument_Connect_CursorPositionChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, const QTextCursor*) = reinterpret_cast<void (*)(QTextDocument*, const QTextCursor*)>(slot);
    QTextDocument::connect(self, &QTextDocument::cursorPositionChanged, [self, slotFunc](const QTextCursor& cursor) {
	slotFunc(self, cursor);
    });
}

void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount) {
	self->blockCountChanged(newBlockCount);
}

void QTextDocument_Connect_BlockCountChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, int) = reinterpret_cast<void (*)(QTextDocument*, int)>(slot);
    QTextDocument::connect(self, &QTextDocument::blockCountChanged, [self, slotFunc](int newBlockCount) {
	slotFunc(self, newBlockCount);
    });
}

void QTextDocument_BaseUrlChanged(QTextDocument* self, const QUrl* url) {
	self->baseUrlChanged(*url);
}

void QTextDocument_Connect_BaseUrlChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*, const QUrl*) = reinterpret_cast<void (*)(QTextDocument*, const QUrl*)>(slot);
    QTextDocument::connect(self, &QTextDocument::baseUrlChanged, [self, slotFunc](const QUrl& url) {
	slotFunc(self, url);
    });
}

void QTextDocument_DocumentLayoutChanged(QTextDocument* self) {
	self->documentLayoutChanged();
}

void QTextDocument_Connect_DocumentLayoutChanged(QTextDocument* self, intptr_t slot) {
    void (*slotFunc)(QTextDocument*) = reinterpret_cast<void (*)(QTextDocument*)>(slot);
    QTextDocument::connect(self, &QTextDocument::documentLayoutChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextDocument_Undo2(QTextDocument* self) {
	self->undo();
}

void QTextDocument_Redo2(QTextDocument* self) {
	self->redo();
}

void QTextDocument_AppendUndoItem(QTextDocument* self, QAbstractUndoItem* param1) {
	self->appendUndoItem(param1);
}

void QTextDocument_SetModified(QTextDocument* self) {
	self->setModified();
}

libqt_string QTextDocument_Tr2(const char* s, const char* c) {
	QString _ret = QTextDocument::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocument_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextDocument::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextDocument_ToMarkdown1(const QTextDocument* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextDocument_SetMarkdown2(QTextDocument* self, const libqt_string markdown, int features) {
	self->setMarkdown(QString::fromUtf8(markdown.data, markdown.len), static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
}

QTextCursor* QTextDocument_Find22(const QTextDocument* self, const libqt_string subString, int from) {
	return new QTextCursor(self->find(QString::fromUtf8(subString.data, subString.len), from));
}

QTextCursor* QTextDocument_Find32(const QTextDocument* self, const libqt_string subString, int from, int options) {
	return new QTextCursor(self->find(QString::fromUtf8(subString.data, subString.len), from, static_cast<QFlags<QTextDocument::FindFlag>>(options)));
}

QTextCursor* QTextDocument_Find33(const QTextDocument* self, const libqt_string subString, const QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(QString::fromUtf8(subString.data, subString.len), *cursor, static_cast<QFlags<QTextDocument::FindFlag>>(options)));
}

QTextCursor* QTextDocument_Find23(const QTextDocument* self, const QRegularExpression* expr, int from) {
	return new QTextCursor(self->find(*expr, from));
}

QTextCursor* QTextDocument_Find34(const QTextDocument* self, const QRegularExpression* expr, int from, int options) {
	return new QTextCursor(self->find(*expr, from, static_cast<QFlags<QTextDocument::FindFlag>>(options)));
}

QTextCursor* QTextDocument_Find35(const QTextDocument* self, const QRegularExpression* expr, const QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(*expr, *cursor, static_cast<QFlags<QTextDocument::FindFlag>>(options)));
}

void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, const QRectF* rect) {
	self->drawContents(painter, *rect);
}

void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, int historyToClear) {
	self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_SetModified1(QTextDocument* self, bool m) {
	self->setModified(m);
}

// Base class handler implementation
void QTextDocument_QBaseClear(QTextDocument* self) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_Clear_IsBase(true);
	vqtextdocument->clear();
}
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnClear(QTextDocument* self, intptr_t slot) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_Clear_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_Clear_Callback>(slot));
}
}

// Derived class handler implementation
QTextObject* QTextDocument_CreateObject(QTextDocument* self, const QTextFormat* f) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
	return vqtextdocument->createObject(*f);
	} else {
	return self->QTextDocument::createObject(*f);
}
}

// Base class handler implementation
QTextObject* QTextDocument_QBaseCreateObject(QTextDocument* self, const QTextFormat* f) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_CreateObject_IsBase(true);
	return vqtextdocument->createObject(*f);
}
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnCreateObject(QTextDocument* self, intptr_t slot) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_CreateObject_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_CreateObject_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QTextDocument_LoadResource(QTextDocument* self, int typeVal, const QUrl* name) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
	return new QVariant(vqtextdocument->loadResource(typeVal, *name));
	} else {
	return new QVariant(self->QTextDocument::loadResource(typeVal, *name));
}
}

// Base class handler implementation
QVariant* QTextDocument_QBaseLoadResource(QTextDocument* self, int typeVal, const QUrl* name) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_LoadResource_IsBase(true);
	return new QVariant(vqtextdocument->loadResource(typeVal, *name));
}
}

// Auxiliary method to allow providing re-implementation
void QTextDocument_OnLoadResource(QTextDocument* self, intptr_t slot) {
	auto* vqtextdocument = dynamic_cast<VirtualQTextDocument*>(self);
	if (vqtextdocument && vqtextdocument->isVirtualQTextDocument) {
vqtextdocument->setQTextDocument_LoadResource_Callback(reinterpret_cast<VirtualQTextDocument::QTextDocument_LoadResource_Callback>(slot));
}
}

void QTextDocument_Delete(QTextDocument* self) {
    delete self;
}

