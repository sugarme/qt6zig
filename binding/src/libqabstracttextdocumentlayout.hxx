#pragma once
#ifndef QABSTRACTTEXTDOCUMENTLAYOUT_H_C_LIBVIRTUAL
#define QABSTRACTTEXTDOCUMENTLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractTextDocumentLayout so that we can call protected methods
class VirtualQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractTextDocumentLayout= true;

	// Virtual class public types (including callbacks)
	using QAbstractTextDocumentLayout_Draw_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, const QAbstractTextDocumentLayout__PaintContext*);
	using QAbstractTextDocumentLayout_HitTest_Callback = int (*)(const QAbstractTextDocumentLayout*, const QPointF*, int);
	using QAbstractTextDocumentLayout_PageCount_Callback = int (*)();
	using QAbstractTextDocumentLayout_DocumentSize_Callback = QSizeF* (*)();
	using QAbstractTextDocumentLayout_FrameBoundingRect_Callback = QRectF* (*)(const QAbstractTextDocumentLayout*, QTextFrame*);
	using QAbstractTextDocumentLayout_BlockBoundingRect_Callback = QRectF* (*)(const QAbstractTextDocumentLayout*, const QTextBlock*);
	using QAbstractTextDocumentLayout_DocumentChanged_Callback = void (*)(QAbstractTextDocumentLayout*, int, int, int);
	using QAbstractTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, const QTextFormat*);
	using QAbstractTextDocumentLayout_PositionInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject*, int, const QTextFormat*);
	using QAbstractTextDocumentLayout_DrawInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, const QRectF*, QTextInlineObject*, int, const QTextFormat*);
	using QAbstractTextDocumentLayout_FormatIndex_Callback = int (*)(QAbstractTextDocumentLayout*, int);
	using QAbstractTextDocumentLayout_Format_Callback = QTextCharFormat* (*)(QAbstractTextDocumentLayout*, int);

protected:
	// Instance callback storage
	mutable QAbstractTextDocumentLayout_Draw_Callback qabstracttextdocumentlayout_draw_callback = nullptr;
	mutable QAbstractTextDocumentLayout_HitTest_Callback qabstracttextdocumentlayout_hittest_callback = nullptr;
	mutable QAbstractTextDocumentLayout_PageCount_Callback qabstracttextdocumentlayout_pagecount_callback = nullptr;
	mutable QAbstractTextDocumentLayout_DocumentSize_Callback qabstracttextdocumentlayout_documentsize_callback = nullptr;
	mutable QAbstractTextDocumentLayout_FrameBoundingRect_Callback qabstracttextdocumentlayout_frameboundingrect_callback = nullptr;
	mutable QAbstractTextDocumentLayout_BlockBoundingRect_Callback qabstracttextdocumentlayout_blockboundingrect_callback = nullptr;
	mutable QAbstractTextDocumentLayout_DocumentChanged_Callback qabstracttextdocumentlayout_documentchanged_callback = nullptr;
	mutable QAbstractTextDocumentLayout_ResizeInlineObject_Callback qabstracttextdocumentlayout_resizeinlineobject_callback = nullptr;
	mutable QAbstractTextDocumentLayout_PositionInlineObject_Callback qabstracttextdocumentlayout_positioninlineobject_callback = nullptr;
	mutable QAbstractTextDocumentLayout_DrawInlineObject_Callback qabstracttextdocumentlayout_drawinlineobject_callback = nullptr;
	mutable QAbstractTextDocumentLayout_FormatIndex_Callback qabstracttextdocumentlayout_formatindex_callback = nullptr;
	mutable QAbstractTextDocumentLayout_Format_Callback qabstracttextdocumentlayout_format_callback = nullptr;

	// Instance base flags
    mutable bool qabstracttextdocumentlayout_draw_isbase = false;
    mutable bool qabstracttextdocumentlayout_hittest_isbase = false;
    mutable bool qabstracttextdocumentlayout_pagecount_isbase = false;
    mutable bool qabstracttextdocumentlayout_documentsize_isbase = false;
    mutable bool qabstracttextdocumentlayout_frameboundingrect_isbase = false;
    mutable bool qabstracttextdocumentlayout_blockboundingrect_isbase = false;
    mutable bool qabstracttextdocumentlayout_documentchanged_isbase = false;
    mutable bool qabstracttextdocumentlayout_resizeinlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_positioninlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_drawinlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_formatindex_isbase = false;
    mutable bool qabstracttextdocumentlayout_format_isbase = false;

public:
	VirtualQAbstractTextDocumentLayout(QTextDocument* doc): QAbstractTextDocumentLayout(doc) {};

	~VirtualQAbstractTextDocumentLayout() {
		qabstracttextdocumentlayout_draw_callback = nullptr;
		qabstracttextdocumentlayout_hittest_callback = nullptr;
		qabstracttextdocumentlayout_pagecount_callback = nullptr;
		qabstracttextdocumentlayout_documentsize_callback = nullptr;
		qabstracttextdocumentlayout_frameboundingrect_callback = nullptr;
		qabstracttextdocumentlayout_blockboundingrect_callback = nullptr;
		qabstracttextdocumentlayout_documentchanged_callback = nullptr;
		qabstracttextdocumentlayout_resizeinlineobject_callback = nullptr;
		qabstracttextdocumentlayout_positioninlineobject_callback = nullptr;
		qabstracttextdocumentlayout_drawinlineobject_callback = nullptr;
		qabstracttextdocumentlayout_formatindex_callback = nullptr;
		qabstracttextdocumentlayout_format_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractTextDocumentLayout_Draw_Callback(QAbstractTextDocumentLayout_Draw_Callback cb) const { qabstracttextdocumentlayout_draw_callback = cb; }
	inline void setQAbstractTextDocumentLayout_HitTest_Callback(QAbstractTextDocumentLayout_HitTest_Callback cb) const { qabstracttextdocumentlayout_hittest_callback = cb; }
	inline void setQAbstractTextDocumentLayout_PageCount_Callback(QAbstractTextDocumentLayout_PageCount_Callback cb) const { qabstracttextdocumentlayout_pagecount_callback = cb; }
	inline void setQAbstractTextDocumentLayout_DocumentSize_Callback(QAbstractTextDocumentLayout_DocumentSize_Callback cb) const { qabstracttextdocumentlayout_documentsize_callback = cb; }
	inline void setQAbstractTextDocumentLayout_FrameBoundingRect_Callback(QAbstractTextDocumentLayout_FrameBoundingRect_Callback cb) const { qabstracttextdocumentlayout_frameboundingrect_callback = cb; }
	inline void setQAbstractTextDocumentLayout_BlockBoundingRect_Callback(QAbstractTextDocumentLayout_BlockBoundingRect_Callback cb) const { qabstracttextdocumentlayout_blockboundingrect_callback = cb; }
	inline void setQAbstractTextDocumentLayout_DocumentChanged_Callback(QAbstractTextDocumentLayout_DocumentChanged_Callback cb) const { qabstracttextdocumentlayout_documentchanged_callback = cb; }
	inline void setQAbstractTextDocumentLayout_ResizeInlineObject_Callback(QAbstractTextDocumentLayout_ResizeInlineObject_Callback cb) const { qabstracttextdocumentlayout_resizeinlineobject_callback = cb; }
	inline void setQAbstractTextDocumentLayout_PositionInlineObject_Callback(QAbstractTextDocumentLayout_PositionInlineObject_Callback cb) const { qabstracttextdocumentlayout_positioninlineobject_callback = cb; }
	inline void setQAbstractTextDocumentLayout_DrawInlineObject_Callback(QAbstractTextDocumentLayout_DrawInlineObject_Callback cb) const { qabstracttextdocumentlayout_drawinlineobject_callback = cb; }
	inline void setQAbstractTextDocumentLayout_FormatIndex_Callback(QAbstractTextDocumentLayout_FormatIndex_Callback cb) const { qabstracttextdocumentlayout_formatindex_callback = cb; }
	inline void setQAbstractTextDocumentLayout_Format_Callback(QAbstractTextDocumentLayout_Format_Callback cb) const { qabstracttextdocumentlayout_format_callback = cb; }

// Base flag setters
	inline void setQAbstractTextDocumentLayout_Draw_IsBase(bool value) const { qabstracttextdocumentlayout_draw_isbase = value; }
	inline void setQAbstractTextDocumentLayout_HitTest_IsBase(bool value) const { qabstracttextdocumentlayout_hittest_isbase = value; }
	inline void setQAbstractTextDocumentLayout_PageCount_IsBase(bool value) const { qabstracttextdocumentlayout_pagecount_isbase = value; }
	inline void setQAbstractTextDocumentLayout_DocumentSize_IsBase(bool value) const { qabstracttextdocumentlayout_documentsize_isbase = value; }
	inline void setQAbstractTextDocumentLayout_FrameBoundingRect_IsBase(bool value) const { qabstracttextdocumentlayout_frameboundingrect_isbase = value; }
	inline void setQAbstractTextDocumentLayout_BlockBoundingRect_IsBase(bool value) const { qabstracttextdocumentlayout_blockboundingrect_isbase = value; }
	inline void setQAbstractTextDocumentLayout_DocumentChanged_IsBase(bool value) const { qabstracttextdocumentlayout_documentchanged_isbase = value; }
	inline void setQAbstractTextDocumentLayout_ResizeInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_resizeinlineobject_isbase = value; }
	inline void setQAbstractTextDocumentLayout_PositionInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_positioninlineobject_isbase = value; }
	inline void setQAbstractTextDocumentLayout_DrawInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_drawinlineobject_isbase = value; }
	inline void setQAbstractTextDocumentLayout_FormatIndex_IsBase(bool value) const { qabstracttextdocumentlayout_formatindex_isbase = value; }
	inline void setQAbstractTextDocumentLayout_Format_IsBase(bool value) const { qabstracttextdocumentlayout_format_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter, const QAbstractTextDocumentLayout::PaintContext& context) override {
		if (qabstracttextdocumentlayout_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QAbstractTextDocumentLayout__PaintContext* cbval2 = (const QAbstractTextDocumentLayout__PaintContext*)&context;
			qabstracttextdocumentlayout_draw_callback(this, cbval1, cbval2);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int hitTest(const QPointF& point, Qt::HitTestAccuracy accuracy) const override {
		if (qabstracttextdocumentlayout_hittest_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			int cbval2 = static_cast<int>(accuracy);
			int callback_ret = qabstracttextdocumentlayout_hittest_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int pageCount() const override {
		if (qabstracttextdocumentlayout_pagecount_callback != nullptr) {
			int callback_ret = qabstracttextdocumentlayout_pagecount_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSizeF documentSize() const override {
		if (qabstracttextdocumentlayout_documentsize_callback != nullptr) {
			QSizeF* callback_ret = qabstracttextdocumentlayout_documentsize_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF frameBoundingRect(QTextFrame* frame) const override {
		if (qabstracttextdocumentlayout_frameboundingrect_callback != nullptr) {
			QTextFrame* cbval1 = frame;
			QRectF* callback_ret = qabstracttextdocumentlayout_frameboundingrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (qabstracttextdocumentlayout_blockboundingrect_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			QRectF* callback_ret = qabstracttextdocumentlayout_blockboundingrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void documentChanged(int from, int charsRemoved, int charsAdded) override {
		if (qabstracttextdocumentlayout_documentchanged_callback != nullptr) {
			int cbval1 = from;
			int cbval2 = charsRemoved;
			int cbval3 = charsAdded;
			qabstracttextdocumentlayout_documentchanged_callback(this, cbval1, cbval2, cbval3);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (qabstracttextdocumentlayout_resizeinlineobject_isbase) {
			qabstracttextdocumentlayout_resizeinlineobject_isbase = false;
			QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
		} else if (qabstracttextdocumentlayout_resizeinlineobject_callback != nullptr) {
			QTextInlineObject* cbval1 = &item;
			int cbval2 = posInDocument;
			const QTextFormat* cbval3 = (const QTextFormat*)&format;
			qabstracttextdocumentlayout_resizeinlineobject_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (qabstracttextdocumentlayout_positioninlineobject_isbase) {
			qabstracttextdocumentlayout_positioninlineobject_isbase = false;
			QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
		} else if (qabstracttextdocumentlayout_positioninlineobject_callback != nullptr) {
			QTextInlineObject* cbval1 = &item;
			int cbval2 = posInDocument;
			const QTextFormat* cbval3 = (const QTextFormat*)&format;
			qabstracttextdocumentlayout_positioninlineobject_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (qabstracttextdocumentlayout_drawinlineobject_isbase) {
			qabstracttextdocumentlayout_drawinlineobject_isbase = false;
			QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
		} else if (qabstracttextdocumentlayout_drawinlineobject_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRectF* cbval2 = (const QRectF*)&rect;
			QTextInlineObject* cbval3 = &object;
			int cbval4 = posInDocument;
			const QTextFormat* cbval5 = (const QTextFormat*)&format;
			qabstracttextdocumentlayout_drawinlineobject_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
		} else {
			QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
		}
	}

	// Virtual method for C ABI access and custom callback
	int formatIndex(int pos) {
		if (qabstracttextdocumentlayout_formatindex_isbase) {
			qabstracttextdocumentlayout_formatindex_isbase = false;
			return QAbstractTextDocumentLayout::formatIndex(pos);
		} else if (qabstracttextdocumentlayout_formatindex_callback != nullptr) {
			int cbval1 = pos;
			int callback_ret = qabstracttextdocumentlayout_formatindex_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractTextDocumentLayout::formatIndex(pos);
		}
	}

	// Virtual method for C ABI access and custom callback
	QTextCharFormat format(int pos) {
		if (qabstracttextdocumentlayout_format_isbase) {
			qabstracttextdocumentlayout_format_isbase = false;
			return QAbstractTextDocumentLayout::format(pos);
		} else if (qabstracttextdocumentlayout_format_callback != nullptr) {
			int cbval1 = pos;
			QTextCharFormat* callback_ret = qabstracttextdocumentlayout_format_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QAbstractTextDocumentLayout::format(pos);
		}
	}

	// Friend functions
	friend void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
	friend void QAbstractTextDocumentLayout_QBaseDocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
	friend void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
	friend void QAbstractTextDocumentLayout_QBaseResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
	friend void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
	friend void QAbstractTextDocumentLayout_QBasePositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
	friend void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
	friend void QAbstractTextDocumentLayout_QBaseDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
	friend int QAbstractTextDocumentLayout_FormatIndex(QAbstractTextDocumentLayout* self, int pos);
	friend int QAbstractTextDocumentLayout_QBaseFormatIndex(QAbstractTextDocumentLayout* self, int pos);
	friend QTextCharFormat* QAbstractTextDocumentLayout_Format(QAbstractTextDocumentLayout* self, int pos);
	friend QTextCharFormat* QAbstractTextDocumentLayout_QBaseFormat(QAbstractTextDocumentLayout* self, int pos);
};

// This class is a subclass of QTextObjectInterface so that we can call protected methods
class VirtualQTextObjectInterface : public QTextObjectInterface {

public:
	// Virtual class boolean flag
	bool isVirtualQTextObjectInterface= true;

	// Virtual class public types (including callbacks)
	using QTextObjectInterface_IntrinsicSize_Callback = QSizeF* (*)(QTextObjectInterface*, QTextDocument*, int, const QTextFormat*);
	using QTextObjectInterface_DrawObject_Callback = void (*)(QTextObjectInterface*, QPainter*, const QRectF*, QTextDocument*, int, const QTextFormat*);

protected:
	// Instance callback storage
	mutable QTextObjectInterface_IntrinsicSize_Callback qtextobjectinterface_intrinsicsize_callback = nullptr;
	mutable QTextObjectInterface_DrawObject_Callback qtextobjectinterface_drawobject_callback = nullptr;

	// Instance base flags
    mutable bool qtextobjectinterface_intrinsicsize_isbase = false;
    mutable bool qtextobjectinterface_drawobject_isbase = false;

public:
	VirtualQTextObjectInterface(): QTextObjectInterface() {};
	VirtualQTextObjectInterface(const QTextObjectInterface& param1): QTextObjectInterface(param1) {};

	~VirtualQTextObjectInterface() {
		qtextobjectinterface_intrinsicsize_callback = nullptr;
		qtextobjectinterface_drawobject_callback = nullptr;
	}

// Callback setters
	inline void setQTextObjectInterface_IntrinsicSize_Callback(QTextObjectInterface_IntrinsicSize_Callback cb) const { qtextobjectinterface_intrinsicsize_callback = cb; }
	inline void setQTextObjectInterface_DrawObject_Callback(QTextObjectInterface_DrawObject_Callback cb) const { qtextobjectinterface_drawobject_callback = cb; }

// Base flag setters
	inline void setQTextObjectInterface_IntrinsicSize_IsBase(bool value) const { qtextobjectinterface_intrinsicsize_isbase = value; }
	inline void setQTextObjectInterface_DrawObject_IsBase(bool value) const { qtextobjectinterface_drawobject_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSizeF intrinsicSize(QTextDocument* doc, int posInDocument, const QTextFormat& format) override {
		if (qtextobjectinterface_intrinsicsize_callback != nullptr) {
			QTextDocument* cbval1 = doc;
			int cbval2 = posInDocument;
			const QTextFormat* cbval3 = (const QTextFormat*)&format;
			QSizeF* callback_ret = qtextobjectinterface_intrinsicsize_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawObject(QPainter* painter, const QRectF& rect, QTextDocument* doc, int posInDocument, const QTextFormat& format) override {
		if (qtextobjectinterface_drawobject_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRectF* cbval2 = (const QRectF*)&rect;
			QTextDocument* cbval3 = doc;
			int cbval4 = posInDocument;
			const QTextFormat* cbval5 = (const QTextFormat*)&format;
			qtextobjectinterface_drawobject_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
		}
	}
};

#endif


