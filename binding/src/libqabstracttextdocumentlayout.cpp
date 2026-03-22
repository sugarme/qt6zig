#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection
#include <QObject>
#include <QPaintDevice>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTextObjectInterface>
#include <qabstracttextdocumentlayout.h>
#include "libqabstracttextdocumentlayout.h"
#include "libqabstracttextdocumentlayout.hxx"

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc) {
	 return new VirtualQAbstractTextDocumentLayout(doc);
}

libqt_string QAbstractTextDocumentLayout_Tr(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, const QAbstractTextDocumentLayout__PaintContext* context) {
	self->draw(painter, *context);
}

int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, const QPointF* point, int accuracy) {
	return self->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}

libqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
	QString _ret = self->anchorAt(*pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
	QString _ret = self->imageAt(*pos);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
	return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, const QPointF* pos) {
	return new QTextBlock(self->blockWithMarkerAt(*pos));
}

int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
	return new QRectF(self->frameBoundingRect(frame));
}

QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, const QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self) {
	return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self) {
	return self->document();
}

void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->registerHandler(objectType, component);
}

void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
	self->unregisterHandler(objectType);
}

QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
	return self->handlerForObject(objectType);
}

void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self) {
	self->update();
}

void QAbstractTextDocumentLayout_Connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::update, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, const QTextBlock* block) {
	self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_Connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, const QTextBlock*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, const QTextBlock*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::updateBlock, [self, slotFunc](const QTextBlock& block) {
	slotFunc(self, block);
    });
}

void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, const QSizeF* newSize) {
	self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, const QSizeF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, const QSizeF*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::documentSizeChanged, [self, slotFunc](const QSizeF& newSize) {
	slotFunc(self, newSize);
    });
}

void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
	self->pageCountChanged(newPages);
}

void QAbstractTextDocumentLayout_Connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, int) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, int)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::pageCountChanged, [self, slotFunc](int newPages) {
	slotFunc(self, newPages);
    });
}

libqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->unregisterHandler(objectType, component);
}

void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, const QRectF* param1) {
	self->update(*param1);
}

void QAbstractTextDocumentLayout_Connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, const QRectF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, const QRectF*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::update, [self, slotFunc](const QRectF& param1) {
	slotFunc(self, param1);
    });
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseDraw(QAbstractTextDocumentLayout* self, QPainter* painter, const QAbstractTextDocumentLayout__PaintContext* context) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Draw_IsBase(true);
	vqabstracttextdocumentlayout->draw(painter, *context);
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDraw(QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Draw_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Draw_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBaseHitTest(const QAbstractTextDocumentLayout* self, const QPointF* point, int accuracy) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_HitTest_IsBase(true);
	return vqabstracttextdocumentlayout->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnHitTest(const QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_HitTest_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_HitTest_Callback>(slot));
}
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBasePageCount(const QAbstractTextDocumentLayout* self) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PageCount_IsBase(true);
	return vqabstracttextdocumentlayout->pageCount();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnPageCount(const QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PageCount_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_PageCount_Callback>(slot));
}
}

// Base class handler implementation
QSizeF* QAbstractTextDocumentLayout_QBaseDocumentSize(const QAbstractTextDocumentLayout* self) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentSize_IsBase(true);
	return new QSizeF(vqabstracttextdocumentlayout->documentSize());
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDocumentSize(const QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentSize_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DocumentSize_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QAbstractTextDocumentLayout_QBaseFrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FrameBoundingRect_IsBase(true);
	return new QRectF(vqabstracttextdocumentlayout->frameBoundingRect(frame));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnFrameBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FrameBoundingRect_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_FrameBoundingRect_Callback>(slot));
}
}

// Base class handler implementation
QRectF* QAbstractTextDocumentLayout_QBaseBlockBoundingRect(const QAbstractTextDocumentLayout* self, const QTextBlock* block) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_BlockBoundingRect_IsBase(true);
	return new QRectF(vqabstracttextdocumentlayout->blockBoundingRect(*block));
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnBlockBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot) {
	auto* vqabstracttextdocumentlayout = dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self);
	if (vqabstracttextdocumentlayout && vqabstracttextdocumentlayout->isVirtualQAbstractTextDocumentLayout) {
vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_BlockBoundingRect_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_BlockBoundingRect_Callback>(slot));
}
}

void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self) {
    delete self;
}

QTextObjectInterface* QTextObjectInterface_new() {
	 return new VirtualQTextObjectInterface();
}

QTextObjectInterface* QTextObjectInterface_new2(const QTextObjectInterface* param1) {
	 return new VirtualQTextObjectInterface(*param1);
}

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
	return new QSizeF(self->intrinsicSize(doc, posInDocument, *format));
}

void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, const QRectF* rect, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
	self->drawObject(painter, *rect, doc, posInDocument, *format);
}

void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, const QTextObjectInterface* param1) {
	self->operator=(*param1);
}

// Base class handler implementation
QSizeF* QTextObjectInterface_QBaseIntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
	auto* vqtextobjectinterface = dynamic_cast<VirtualQTextObjectInterface*>(self);
	if (vqtextobjectinterface && vqtextobjectinterface->isVirtualQTextObjectInterface) {
vqtextobjectinterface->setQTextObjectInterface_IntrinsicSize_IsBase(true);
	return new QSizeF(vqtextobjectinterface->intrinsicSize(doc, posInDocument, *format));
}
}

// Auxiliary method to allow providing re-implementation
void QTextObjectInterface_OnIntrinsicSize(QTextObjectInterface* self, intptr_t slot) {
	auto* vqtextobjectinterface = dynamic_cast<VirtualQTextObjectInterface*>(self);
	if (vqtextobjectinterface && vqtextobjectinterface->isVirtualQTextObjectInterface) {
vqtextobjectinterface->setQTextObjectInterface_IntrinsicSize_Callback(reinterpret_cast<VirtualQTextObjectInterface::QTextObjectInterface_IntrinsicSize_Callback>(slot));
}
}

// Base class handler implementation
void QTextObjectInterface_QBaseDrawObject(QTextObjectInterface* self, QPainter* painter, const QRectF* rect, QTextDocument* doc, int posInDocument, const QTextFormat* format) {
	auto* vqtextobjectinterface = dynamic_cast<VirtualQTextObjectInterface*>(self);
	if (vqtextobjectinterface && vqtextobjectinterface->isVirtualQTextObjectInterface) {
vqtextobjectinterface->setQTextObjectInterface_DrawObject_IsBase(true);
	vqtextobjectinterface->drawObject(painter, *rect, doc, posInDocument, *format);
}
}

// Auxiliary method to allow providing re-implementation
void QTextObjectInterface_OnDrawObject(QTextObjectInterface* self, intptr_t slot) {
	auto* vqtextobjectinterface = dynamic_cast<VirtualQTextObjectInterface*>(self);
	if (vqtextobjectinterface && vqtextobjectinterface->isVirtualQTextObjectInterface) {
vqtextobjectinterface->setQTextObjectInterface_DrawObject_Callback(reinterpret_cast<VirtualQTextObjectInterface::QTextObjectInterface_DrawObject_Callback>(slot));
}
}

void QTextObjectInterface_Delete(QTextObjectInterface* self) {
    delete self;
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new() {
	 return new QAbstractTextDocumentLayout::Selection();
}

QTextCursor* QAbstractTextDocumentLayout__Selection_Cursor(const QAbstractTextDocumentLayout__Selection* self) {
	return new QTextCursor(self->cursor);
}

void QAbstractTextDocumentLayout__Selection_SetCursor(QAbstractTextDocumentLayout__Selection* self, QTextCursor* cursor) {
	self->cursor;
}

QTextCharFormat* QAbstractTextDocumentLayout__Selection_Format(const QAbstractTextDocumentLayout__Selection* self) {
	return new QTextCharFormat(self->format);
}

void QAbstractTextDocumentLayout__Selection_SetFormat(QAbstractTextDocumentLayout__Selection* self, QTextCharFormat* format) {
	self->format;
}

void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, const QAbstractTextDocumentLayout__Selection* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self) {
    delete self;
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new() {
	 return new QAbstractTextDocumentLayout::PaintContext();
}

int QAbstractTextDocumentLayout__PaintContext_CursorPosition(const QAbstractTextDocumentLayout__PaintContext* self) {
	return self->cursorPosition;
}

void QAbstractTextDocumentLayout__PaintContext_SetCursorPosition(QAbstractTextDocumentLayout__PaintContext* self, int cursorPosition) {
	self->cursorPosition;
}

QPalette* QAbstractTextDocumentLayout__PaintContext_Palette(const QAbstractTextDocumentLayout__PaintContext* self) {
	return new QPalette(self->palette);
}

void QAbstractTextDocumentLayout__PaintContext_SetPalette(QAbstractTextDocumentLayout__PaintContext* self, QPalette* palette) {
	self->palette;
}

QRectF* QAbstractTextDocumentLayout__PaintContext_Clip(const QAbstractTextDocumentLayout__PaintContext* self) {
	return new QRectF(self->clip);
}

void QAbstractTextDocumentLayout__PaintContext_SetClip(QAbstractTextDocumentLayout__PaintContext* self, QRectF* clip) {
	self->clip;
}

libqt_list QAbstractTextDocumentLayout__PaintContext_Selections(const QAbstractTextDocumentLayout__PaintContext* self) {
	auto _ret = self->selections;
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

void QAbstractTextDocumentLayout__PaintContext_SetSelections(QAbstractTextDocumentLayout__PaintContext* self, libqt_list selections) {
	self->selections;
}

void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, const QAbstractTextDocumentLayout__PaintContext* param1) {
	self->operator=(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self) {
    delete self;
}

