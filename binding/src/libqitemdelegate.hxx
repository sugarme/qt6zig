#pragma once
#ifndef QITEMDELEGATE_H_C_LIBVIRTUAL
#define QITEMDELEGATE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QItemDelegate so that we can call protected methods
class VirtualQItemDelegate final : public QItemDelegate {

public:
	// Virtual class boolean flag
	bool isVirtualQItemDelegate= true;

	// Virtual class public types (including callbacks)
	using QItemDelegate_Paint_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_SizeHint_Callback = QSize* (*)(const QItemDelegate*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_CreateEditor_Callback = QWidget* (*)(const QItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_SetEditorData_Callback = void (*)(const QItemDelegate*, QWidget*, const QModelIndex*);
	using QItemDelegate_SetModelData_Callback = void (*)(const QItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex*);
	using QItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_DrawDisplay_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QRect*, libqt_string);
	using QItemDelegate_DrawDecoration_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QRect*, const QPixmap*);
	using QItemDelegate_DrawFocus_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QRect*);
	using QItemDelegate_DrawCheck_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QRect*, int);
	using QItemDelegate_EventFilter_Callback = bool (*)(QItemDelegate*, QObject*, QEvent*);
	using QItemDelegate_EditorEvent_Callback = bool (*)(QItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_DrawBackground_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QModelIndex*);
	using QItemDelegate_DoLayout_Callback = void (*)(const QItemDelegate*, const QStyleOptionViewItem*, QRect*, QRect*, QRect*, bool);
	using QItemDelegate_Rect_Callback = QRect* (*)(const QItemDelegate*, const QStyleOptionViewItem*, const QModelIndex*, int);
	using QItemDelegate_SetOptions_Callback = QStyleOptionViewItem* (*)(const QItemDelegate*, const QModelIndex*, const QStyleOptionViewItem*);
	using QItemDelegate_Decoration_Callback = QPixmap* (*)(const QItemDelegate*, const QStyleOptionViewItem*, const QVariant*);
	using QItemDelegate_SelectedPixmap_Callback = QPixmap* (*)(QItemDelegate*, const QPixmap*, const QPalette*, bool);
	using QItemDelegate_DoCheck_Callback = QRect* (*)(const QItemDelegate*, const QStyleOptionViewItem*, const QRect*, const QVariant*);
	using QItemDelegate_TextRectangle_Callback = QRect* (*)(const QItemDelegate*, QPainter*, const QRect*, const QFont*, libqt_string);

protected:
	// Instance callback storage
	mutable QItemDelegate_Paint_Callback qitemdelegate_paint_callback = nullptr;
	mutable QItemDelegate_SizeHint_Callback qitemdelegate_sizehint_callback = nullptr;
	mutable QItemDelegate_CreateEditor_Callback qitemdelegate_createeditor_callback = nullptr;
	mutable QItemDelegate_SetEditorData_Callback qitemdelegate_seteditordata_callback = nullptr;
	mutable QItemDelegate_SetModelData_Callback qitemdelegate_setmodeldata_callback = nullptr;
	mutable QItemDelegate_UpdateEditorGeometry_Callback qitemdelegate_updateeditorgeometry_callback = nullptr;
	mutable QItemDelegate_DrawDisplay_Callback qitemdelegate_drawdisplay_callback = nullptr;
	mutable QItemDelegate_DrawDecoration_Callback qitemdelegate_drawdecoration_callback = nullptr;
	mutable QItemDelegate_DrawFocus_Callback qitemdelegate_drawfocus_callback = nullptr;
	mutable QItemDelegate_DrawCheck_Callback qitemdelegate_drawcheck_callback = nullptr;
	mutable QItemDelegate_EventFilter_Callback qitemdelegate_eventfilter_callback = nullptr;
	mutable QItemDelegate_EditorEvent_Callback qitemdelegate_editorevent_callback = nullptr;
	mutable QItemDelegate_DrawBackground_Callback qitemdelegate_drawbackground_callback = nullptr;
	mutable QItemDelegate_DoLayout_Callback qitemdelegate_dolayout_callback = nullptr;
	mutable QItemDelegate_Rect_Callback qitemdelegate_rect_callback = nullptr;
	mutable QItemDelegate_SetOptions_Callback qitemdelegate_setoptions_callback = nullptr;
	mutable QItemDelegate_Decoration_Callback qitemdelegate_decoration_callback = nullptr;
	mutable QItemDelegate_SelectedPixmap_Callback qitemdelegate_selectedpixmap_callback = nullptr;
	mutable QItemDelegate_DoCheck_Callback qitemdelegate_docheck_callback = nullptr;
	mutable QItemDelegate_TextRectangle_Callback qitemdelegate_textrectangle_callback = nullptr;

	// Instance base flags
    mutable bool qitemdelegate_paint_isbase = false;
    mutable bool qitemdelegate_sizehint_isbase = false;
    mutable bool qitemdelegate_createeditor_isbase = false;
    mutable bool qitemdelegate_seteditordata_isbase = false;
    mutable bool qitemdelegate_setmodeldata_isbase = false;
    mutable bool qitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qitemdelegate_drawdisplay_isbase = false;
    mutable bool qitemdelegate_drawdecoration_isbase = false;
    mutable bool qitemdelegate_drawfocus_isbase = false;
    mutable bool qitemdelegate_drawcheck_isbase = false;
    mutable bool qitemdelegate_eventfilter_isbase = false;
    mutable bool qitemdelegate_editorevent_isbase = false;
    mutable bool qitemdelegate_drawbackground_isbase = false;
    mutable bool qitemdelegate_dolayout_isbase = false;
    mutable bool qitemdelegate_rect_isbase = false;
    mutable bool qitemdelegate_setoptions_isbase = false;
    mutable bool qitemdelegate_decoration_isbase = false;
    mutable bool qitemdelegate_selectedpixmap_isbase = false;
    mutable bool qitemdelegate_docheck_isbase = false;
    mutable bool qitemdelegate_textrectangle_isbase = false;

public:
	VirtualQItemDelegate(): QItemDelegate() {};
	VirtualQItemDelegate(QObject* parent): QItemDelegate(parent) {};

	~VirtualQItemDelegate() {
		qitemdelegate_paint_callback = nullptr;
		qitemdelegate_sizehint_callback = nullptr;
		qitemdelegate_createeditor_callback = nullptr;
		qitemdelegate_seteditordata_callback = nullptr;
		qitemdelegate_setmodeldata_callback = nullptr;
		qitemdelegate_updateeditorgeometry_callback = nullptr;
		qitemdelegate_drawdisplay_callback = nullptr;
		qitemdelegate_drawdecoration_callback = nullptr;
		qitemdelegate_drawfocus_callback = nullptr;
		qitemdelegate_drawcheck_callback = nullptr;
		qitemdelegate_eventfilter_callback = nullptr;
		qitemdelegate_editorevent_callback = nullptr;
		qitemdelegate_drawbackground_callback = nullptr;
		qitemdelegate_dolayout_callback = nullptr;
		qitemdelegate_rect_callback = nullptr;
		qitemdelegate_setoptions_callback = nullptr;
		qitemdelegate_decoration_callback = nullptr;
		qitemdelegate_selectedpixmap_callback = nullptr;
		qitemdelegate_docheck_callback = nullptr;
		qitemdelegate_textrectangle_callback = nullptr;
	}

// Callback setters
	inline void setQItemDelegate_Paint_Callback(QItemDelegate_Paint_Callback cb) const { qitemdelegate_paint_callback = cb; }
	inline void setQItemDelegate_SizeHint_Callback(QItemDelegate_SizeHint_Callback cb) const { qitemdelegate_sizehint_callback = cb; }
	inline void setQItemDelegate_CreateEditor_Callback(QItemDelegate_CreateEditor_Callback cb) const { qitemdelegate_createeditor_callback = cb; }
	inline void setQItemDelegate_SetEditorData_Callback(QItemDelegate_SetEditorData_Callback cb) const { qitemdelegate_seteditordata_callback = cb; }
	inline void setQItemDelegate_SetModelData_Callback(QItemDelegate_SetModelData_Callback cb) const { qitemdelegate_setmodeldata_callback = cb; }
	inline void setQItemDelegate_UpdateEditorGeometry_Callback(QItemDelegate_UpdateEditorGeometry_Callback cb) const { qitemdelegate_updateeditorgeometry_callback = cb; }
	inline void setQItemDelegate_DrawDisplay_Callback(QItemDelegate_DrawDisplay_Callback cb) const { qitemdelegate_drawdisplay_callback = cb; }
	inline void setQItemDelegate_DrawDecoration_Callback(QItemDelegate_DrawDecoration_Callback cb) const { qitemdelegate_drawdecoration_callback = cb; }
	inline void setQItemDelegate_DrawFocus_Callback(QItemDelegate_DrawFocus_Callback cb) const { qitemdelegate_drawfocus_callback = cb; }
	inline void setQItemDelegate_DrawCheck_Callback(QItemDelegate_DrawCheck_Callback cb) const { qitemdelegate_drawcheck_callback = cb; }
	inline void setQItemDelegate_EventFilter_Callback(QItemDelegate_EventFilter_Callback cb) const { qitemdelegate_eventfilter_callback = cb; }
	inline void setQItemDelegate_EditorEvent_Callback(QItemDelegate_EditorEvent_Callback cb) const { qitemdelegate_editorevent_callback = cb; }
	inline void setQItemDelegate_DrawBackground_Callback(QItemDelegate_DrawBackground_Callback cb) const { qitemdelegate_drawbackground_callback = cb; }
	inline void setQItemDelegate_DoLayout_Callback(QItemDelegate_DoLayout_Callback cb) const { qitemdelegate_dolayout_callback = cb; }
	inline void setQItemDelegate_Rect_Callback(QItemDelegate_Rect_Callback cb) const { qitemdelegate_rect_callback = cb; }
	inline void setQItemDelegate_SetOptions_Callback(QItemDelegate_SetOptions_Callback cb) const { qitemdelegate_setoptions_callback = cb; }
	inline void setQItemDelegate_Decoration_Callback(QItemDelegate_Decoration_Callback cb) const { qitemdelegate_decoration_callback = cb; }
	inline void setQItemDelegate_SelectedPixmap_Callback(QItemDelegate_SelectedPixmap_Callback cb) const { qitemdelegate_selectedpixmap_callback = cb; }
	inline void setQItemDelegate_DoCheck_Callback(QItemDelegate_DoCheck_Callback cb) const { qitemdelegate_docheck_callback = cb; }
	inline void setQItemDelegate_TextRectangle_Callback(QItemDelegate_TextRectangle_Callback cb) const { qitemdelegate_textrectangle_callback = cb; }

// Base flag setters
	inline void setQItemDelegate_Paint_IsBase(bool value) const { qitemdelegate_paint_isbase = value; }
	inline void setQItemDelegate_SizeHint_IsBase(bool value) const { qitemdelegate_sizehint_isbase = value; }
	inline void setQItemDelegate_CreateEditor_IsBase(bool value) const { qitemdelegate_createeditor_isbase = value; }
	inline void setQItemDelegate_SetEditorData_IsBase(bool value) const { qitemdelegate_seteditordata_isbase = value; }
	inline void setQItemDelegate_SetModelData_IsBase(bool value) const { qitemdelegate_setmodeldata_isbase = value; }
	inline void setQItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qitemdelegate_updateeditorgeometry_isbase = value; }
	inline void setQItemDelegate_DrawDisplay_IsBase(bool value) const { qitemdelegate_drawdisplay_isbase = value; }
	inline void setQItemDelegate_DrawDecoration_IsBase(bool value) const { qitemdelegate_drawdecoration_isbase = value; }
	inline void setQItemDelegate_DrawFocus_IsBase(bool value) const { qitemdelegate_drawfocus_isbase = value; }
	inline void setQItemDelegate_DrawCheck_IsBase(bool value) const { qitemdelegate_drawcheck_isbase = value; }
	inline void setQItemDelegate_EventFilter_IsBase(bool value) const { qitemdelegate_eventfilter_isbase = value; }
	inline void setQItemDelegate_EditorEvent_IsBase(bool value) const { qitemdelegate_editorevent_isbase = value; }
	inline void setQItemDelegate_DrawBackground_IsBase(bool value) const { qitemdelegate_drawbackground_isbase = value; }
	inline void setQItemDelegate_DoLayout_IsBase(bool value) const { qitemdelegate_dolayout_isbase = value; }
	inline void setQItemDelegate_Rect_IsBase(bool value) const { qitemdelegate_rect_isbase = value; }
	inline void setQItemDelegate_SetOptions_IsBase(bool value) const { qitemdelegate_setoptions_isbase = value; }
	inline void setQItemDelegate_Decoration_IsBase(bool value) const { qitemdelegate_decoration_isbase = value; }
	inline void setQItemDelegate_SelectedPixmap_IsBase(bool value) const { qitemdelegate_selectedpixmap_isbase = value; }
	inline void setQItemDelegate_DoCheck_IsBase(bool value) const { qitemdelegate_docheck_isbase = value; }
	inline void setQItemDelegate_TextRectangle_IsBase(bool value) const { qitemdelegate_textrectangle_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qitemdelegate_paint_isbase) {
			qitemdelegate_paint_isbase = false;
			QItemDelegate::paint(painter, option, index);
		} else if (qitemdelegate_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QItemDelegate::paint(painter, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qitemdelegate_sizehint_isbase) {
			qitemdelegate_sizehint_isbase = false;
			return QItemDelegate::sizeHint(option, index);
		} else if (qitemdelegate_sizehint_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			QSize* callback_ret = qitemdelegate_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QItemDelegate::sizeHint(option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qitemdelegate_createeditor_isbase) {
			qitemdelegate_createeditor_isbase = false;
			return QItemDelegate::createEditor(parent, option, index);
		} else if (qitemdelegate_createeditor_callback != nullptr) {
			QWidget* cbval1 = parent;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			QWidget* callback_ret = qitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QItemDelegate::createEditor(parent, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (qitemdelegate_seteditordata_isbase) {
			qitemdelegate_seteditordata_isbase = false;
			QItemDelegate::setEditorData(editor, index);
		} else if (qitemdelegate_seteditordata_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qitemdelegate_seteditordata_callback(this, cbval1, cbval2);
		} else {
			QItemDelegate::setEditorData(editor, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (qitemdelegate_setmodeldata_isbase) {
			qitemdelegate_setmodeldata_isbase = false;
			QItemDelegate::setModelData(editor, model, index);
		} else if (qitemdelegate_setmodeldata_callback != nullptr) {
			QWidget* cbval1 = editor;
			QAbstractItemModel* cbval2 = model;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
		} else {
			QItemDelegate::setModelData(editor, model, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qitemdelegate_updateeditorgeometry_isbase) {
			qitemdelegate_updateeditorgeometry_isbase = false;
			QItemDelegate::updateEditorGeometry(editor, option, index);
		} else if (qitemdelegate_updateeditorgeometry_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
		} else {
			QItemDelegate::updateEditorGeometry(editor, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawDisplay(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QString& text) const override {
		if (qitemdelegate_drawdisplay_isbase) {
			qitemdelegate_drawdisplay_isbase = false;
			QItemDelegate::drawDisplay(painter, option, rect, text);
		} else if (qitemdelegate_drawdisplay_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QRect* cbval3 = (const QRect*)&rect;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval4;
			cbval4.len = text_qb.length();
			cbval4.data = static_cast<const char*>(text_qb.constData());
			qitemdelegate_drawdisplay_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QItemDelegate::drawDisplay(painter, option, rect, text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawDecoration(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QPixmap& pixmap) const override {
		if (qitemdelegate_drawdecoration_isbase) {
			qitemdelegate_drawdecoration_isbase = false;
			QItemDelegate::drawDecoration(painter, option, rect, pixmap);
		} else if (qitemdelegate_drawdecoration_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QRect* cbval3 = (const QRect*)&rect;
			const QPixmap* cbval4 = (const QPixmap*)&pixmap;
			qitemdelegate_drawdecoration_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QItemDelegate::drawDecoration(painter, option, rect, pixmap);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawFocus(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect) const override {
		if (qitemdelegate_drawfocus_isbase) {
			qitemdelegate_drawfocus_isbase = false;
			QItemDelegate::drawFocus(painter, option, rect);
		} else if (qitemdelegate_drawfocus_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QRect* cbval3 = (const QRect*)&rect;
			qitemdelegate_drawfocus_callback(this, cbval1, cbval2, cbval3);
		} else {
			QItemDelegate::drawFocus(painter, option, rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawCheck(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, Qt::CheckState state) const override {
		if (qitemdelegate_drawcheck_isbase) {
			qitemdelegate_drawcheck_isbase = false;
			QItemDelegate::drawCheck(painter, option, rect, state);
		} else if (qitemdelegate_drawcheck_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QRect* cbval3 = (const QRect*)&rect;
			int cbval4 = static_cast<int>(state);
			qitemdelegate_drawcheck_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QItemDelegate::drawCheck(painter, option, rect, state);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qitemdelegate_eventfilter_isbase) {
			qitemdelegate_eventfilter_isbase = false;
			return QItemDelegate::eventFilter(object, event);
		} else if (qitemdelegate_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qitemdelegate_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QItemDelegate::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (qitemdelegate_editorevent_isbase) {
			qitemdelegate_editorevent_isbase = false;
			return QItemDelegate::editorEvent(event, model, option, index);
		} else if (qitemdelegate_editorevent_callback != nullptr) {
			QEvent* cbval1 = event;
			QAbstractItemModel* cbval2 = model;
			const QStyleOptionViewItem* cbval3 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval4 = (const QModelIndex*)&index;
			bool callback_ret = qitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QItemDelegate::editorEvent(event, model, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	void drawBackground(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const {
		if (qitemdelegate_drawbackground_isbase) {
			qitemdelegate_drawbackground_isbase = false;
			QItemDelegate::drawBackground(painter, option, index);
		} else if (qitemdelegate_drawbackground_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qitemdelegate_drawbackground_callback(this, cbval1, cbval2, cbval3);
		} else {
			QItemDelegate::drawBackground(painter, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	void doLayout(const QStyleOptionViewItem& option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) const {
		if (qitemdelegate_dolayout_isbase) {
			qitemdelegate_dolayout_isbase = false;
			QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
		} else if (qitemdelegate_dolayout_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			QRect* cbval2 = checkRect;
			QRect* cbval3 = iconRect;
			QRect* cbval4 = textRect;
			bool cbval5 = hint;
			qitemdelegate_dolayout_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
		} else {
			QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect rect(const QStyleOptionViewItem& option, const QModelIndex& index, int role) const {
		if (qitemdelegate_rect_isbase) {
			qitemdelegate_rect_isbase = false;
			return QItemDelegate::rect(option, index, role);
		} else if (qitemdelegate_rect_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			int cbval3 = role;
			QRect* callback_ret = qitemdelegate_rect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QItemDelegate::rect(option, index, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	QStyleOptionViewItem setOptions(const QModelIndex& index, const QStyleOptionViewItem& option) const {
		if (qitemdelegate_setoptions_isbase) {
			qitemdelegate_setoptions_isbase = false;
			return QItemDelegate::setOptions(index, option);
		} else if (qitemdelegate_setoptions_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			QStyleOptionViewItem* callback_ret = qitemdelegate_setoptions_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QItemDelegate::setOptions(index, option);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap decoration(const QStyleOptionViewItem& option, const QVariant& variant) const {
		if (qitemdelegate_decoration_isbase) {
			qitemdelegate_decoration_isbase = false;
			return QItemDelegate::decoration(option, variant);
		} else if (qitemdelegate_decoration_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QVariant* cbval2 = (const QVariant*)&variant;
			QPixmap* callback_ret = qitemdelegate_decoration_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QItemDelegate::decoration(option, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap selectedPixmap(const QPixmap& pixmap, const QPalette& palette, bool enabled) {
		if (qitemdelegate_selectedpixmap_isbase) {
			qitemdelegate_selectedpixmap_isbase = false;
			return QItemDelegate::selectedPixmap(pixmap, palette, enabled);
		} else if (qitemdelegate_selectedpixmap_callback != nullptr) {
			const QPixmap* cbval1 = (const QPixmap*)&pixmap;
			const QPalette* cbval2 = (const QPalette*)&palette;
			bool cbval3 = enabled;
			QPixmap* callback_ret = qitemdelegate_selectedpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QItemDelegate::selectedPixmap(pixmap, palette, enabled);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect doCheck(const QStyleOptionViewItem& option, const QRect& bounding, const QVariant& variant) const {
		if (qitemdelegate_docheck_isbase) {
			qitemdelegate_docheck_isbase = false;
			return QItemDelegate::doCheck(option, bounding, variant);
		} else if (qitemdelegate_docheck_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QRect* cbval2 = (const QRect*)&bounding;
			const QVariant* cbval3 = (const QVariant*)&variant;
			QRect* callback_ret = qitemdelegate_docheck_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QItemDelegate::doCheck(option, bounding, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect textRectangle(QPainter* painter, const QRect& rect, const QFont& font, const QString& text) const {
		if (qitemdelegate_textrectangle_isbase) {
			qitemdelegate_textrectangle_isbase = false;
			return QItemDelegate::textRectangle(painter, rect, font, text);
		} else if (qitemdelegate_textrectangle_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			const QFont* cbval3 = (const QFont*)&font;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval4;
			cbval4.len = text_qb.length();
			cbval4.data = static_cast<const char*>(text_qb.constData());
			QRect* callback_ret = qitemdelegate_textrectangle_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return QItemDelegate::textRectangle(painter, rect, font, text);
		}
	}

	// Friend functions
	friend void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text);
	friend void QItemDelegate_QBaseDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text);
	friend void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap);
	friend void QItemDelegate_QBaseDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap);
	friend void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect);
	friend void QItemDelegate_QBaseDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect);
	friend void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state);
	friend void QItemDelegate_QBaseDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state);
	friend bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event);
	friend bool QItemDelegate_QBaseEventFilter(QItemDelegate* self, QObject* object, QEvent* event);
	friend bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
	friend bool QItemDelegate_QBaseEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
	friend void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
	friend void QItemDelegate_QBaseDrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index);
	friend void QItemDelegate_DoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
	friend void QItemDelegate_QBaseDoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint);
	friend QRect* QItemDelegate_Rect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role);
	friend QRect* QItemDelegate_QBaseRect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role);
	friend QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option);
	friend QStyleOptionViewItem* QItemDelegate_QBaseSetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option);
	friend QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant);
	friend QPixmap* QItemDelegate_QBaseDecoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant);
	friend QPixmap* QItemDelegate_SelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled);
	friend QPixmap* QItemDelegate_QBaseSelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled);
	friend QRect* QItemDelegate_DoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant);
	friend QRect* QItemDelegate_QBaseDoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant);
	friend QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text);
	friend QRect* QItemDelegate_QBaseTextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text);
};

#endif


