#pragma once
#ifndef QABSTRACTITEMDELEGATE_H_C_LIBVIRTUAL
#define QABSTRACTITEMDELEGATE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractItemDelegate so that we can call protected methods
class VirtualQAbstractItemDelegate : public QAbstractItemDelegate {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractItemDelegate= true;

	// Virtual class public types (including callbacks)
	using QAbstractItemDelegate_Paint_Callback = void (*)(const QAbstractItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_SizeHint_Callback = QSize* (*)(const QAbstractItemDelegate*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_CreateEditor_Callback = QWidget* (*)(const QAbstractItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_DestroyEditor_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QModelIndex*);
	using QAbstractItemDelegate_SetEditorData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QModelIndex*);
	using QAbstractItemDelegate_SetModelData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex*);
	using QAbstractItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_EditorEvent_Callback = bool (*)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_HelpEvent_Callback = bool (*)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, const QStyleOptionViewItem*, const QModelIndex*);
	using QAbstractItemDelegate_PaintingRoles_Callback = libqt_list (*)();

protected:
	// Instance callback storage
	mutable QAbstractItemDelegate_Paint_Callback qabstractitemdelegate_paint_callback = nullptr;
	mutable QAbstractItemDelegate_SizeHint_Callback qabstractitemdelegate_sizehint_callback = nullptr;
	mutable QAbstractItemDelegate_CreateEditor_Callback qabstractitemdelegate_createeditor_callback = nullptr;
	mutable QAbstractItemDelegate_DestroyEditor_Callback qabstractitemdelegate_destroyeditor_callback = nullptr;
	mutable QAbstractItemDelegate_SetEditorData_Callback qabstractitemdelegate_seteditordata_callback = nullptr;
	mutable QAbstractItemDelegate_SetModelData_Callback qabstractitemdelegate_setmodeldata_callback = nullptr;
	mutable QAbstractItemDelegate_UpdateEditorGeometry_Callback qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
	mutable QAbstractItemDelegate_EditorEvent_Callback qabstractitemdelegate_editorevent_callback = nullptr;
	mutable QAbstractItemDelegate_HelpEvent_Callback qabstractitemdelegate_helpevent_callback = nullptr;
	mutable QAbstractItemDelegate_PaintingRoles_Callback qabstractitemdelegate_paintingroles_callback = nullptr;

	// Instance base flags
    mutable bool qabstractitemdelegate_paint_isbase = false;
    mutable bool qabstractitemdelegate_sizehint_isbase = false;
    mutable bool qabstractitemdelegate_createeditor_isbase = false;
    mutable bool qabstractitemdelegate_destroyeditor_isbase = false;
    mutable bool qabstractitemdelegate_seteditordata_isbase = false;
    mutable bool qabstractitemdelegate_setmodeldata_isbase = false;
    mutable bool qabstractitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qabstractitemdelegate_editorevent_isbase = false;
    mutable bool qabstractitemdelegate_helpevent_isbase = false;
    mutable bool qabstractitemdelegate_paintingroles_isbase = false;

public:
	VirtualQAbstractItemDelegate(): QAbstractItemDelegate() {};
	VirtualQAbstractItemDelegate(QObject* parent): QAbstractItemDelegate(parent) {};

	~VirtualQAbstractItemDelegate() {
		qabstractitemdelegate_paint_callback = nullptr;
		qabstractitemdelegate_sizehint_callback = nullptr;
		qabstractitemdelegate_createeditor_callback = nullptr;
		qabstractitemdelegate_destroyeditor_callback = nullptr;
		qabstractitemdelegate_seteditordata_callback = nullptr;
		qabstractitemdelegate_setmodeldata_callback = nullptr;
		qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
		qabstractitemdelegate_editorevent_callback = nullptr;
		qabstractitemdelegate_helpevent_callback = nullptr;
		qabstractitemdelegate_paintingroles_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractItemDelegate_Paint_Callback(QAbstractItemDelegate_Paint_Callback cb) const { qabstractitemdelegate_paint_callback = cb; }
	inline void setQAbstractItemDelegate_SizeHint_Callback(QAbstractItemDelegate_SizeHint_Callback cb) const { qabstractitemdelegate_sizehint_callback = cb; }
	inline void setQAbstractItemDelegate_CreateEditor_Callback(QAbstractItemDelegate_CreateEditor_Callback cb) const { qabstractitemdelegate_createeditor_callback = cb; }
	inline void setQAbstractItemDelegate_DestroyEditor_Callback(QAbstractItemDelegate_DestroyEditor_Callback cb) const { qabstractitemdelegate_destroyeditor_callback = cb; }
	inline void setQAbstractItemDelegate_SetEditorData_Callback(QAbstractItemDelegate_SetEditorData_Callback cb) const { qabstractitemdelegate_seteditordata_callback = cb; }
	inline void setQAbstractItemDelegate_SetModelData_Callback(QAbstractItemDelegate_SetModelData_Callback cb) const { qabstractitemdelegate_setmodeldata_callback = cb; }
	inline void setQAbstractItemDelegate_UpdateEditorGeometry_Callback(QAbstractItemDelegate_UpdateEditorGeometry_Callback cb) const { qabstractitemdelegate_updateeditorgeometry_callback = cb; }
	inline void setQAbstractItemDelegate_EditorEvent_Callback(QAbstractItemDelegate_EditorEvent_Callback cb) const { qabstractitemdelegate_editorevent_callback = cb; }
	inline void setQAbstractItemDelegate_HelpEvent_Callback(QAbstractItemDelegate_HelpEvent_Callback cb) const { qabstractitemdelegate_helpevent_callback = cb; }
	inline void setQAbstractItemDelegate_PaintingRoles_Callback(QAbstractItemDelegate_PaintingRoles_Callback cb) const { qabstractitemdelegate_paintingroles_callback = cb; }

// Base flag setters
	inline void setQAbstractItemDelegate_Paint_IsBase(bool value) const { qabstractitemdelegate_paint_isbase = value; }
	inline void setQAbstractItemDelegate_SizeHint_IsBase(bool value) const { qabstractitemdelegate_sizehint_isbase = value; }
	inline void setQAbstractItemDelegate_CreateEditor_IsBase(bool value) const { qabstractitemdelegate_createeditor_isbase = value; }
	inline void setQAbstractItemDelegate_DestroyEditor_IsBase(bool value) const { qabstractitemdelegate_destroyeditor_isbase = value; }
	inline void setQAbstractItemDelegate_SetEditorData_IsBase(bool value) const { qabstractitemdelegate_seteditordata_isbase = value; }
	inline void setQAbstractItemDelegate_SetModelData_IsBase(bool value) const { qabstractitemdelegate_setmodeldata_isbase = value; }
	inline void setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qabstractitemdelegate_updateeditorgeometry_isbase = value; }
	inline void setQAbstractItemDelegate_EditorEvent_IsBase(bool value) const { qabstractitemdelegate_editorevent_isbase = value; }
	inline void setQAbstractItemDelegate_HelpEvent_IsBase(bool value) const { qabstractitemdelegate_helpevent_isbase = value; }
	inline void setQAbstractItemDelegate_PaintingRoles_IsBase(bool value) const { qabstractitemdelegate_paintingroles_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qabstractitemdelegate_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qabstractitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qabstractitemdelegate_sizehint_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			QSize* callback_ret = qabstractitemdelegate_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qabstractitemdelegate_createeditor_isbase) {
			qabstractitemdelegate_createeditor_isbase = false;
			return QAbstractItemDelegate::createEditor(parent, option, index);
		} else if (qabstractitemdelegate_createeditor_callback != nullptr) {
			QWidget* cbval1 = parent;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			QWidget* callback_ret = qabstractitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QAbstractItemDelegate::createEditor(parent, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (qabstractitemdelegate_destroyeditor_isbase) {
			qabstractitemdelegate_destroyeditor_isbase = false;
			QAbstractItemDelegate::destroyEditor(editor, index);
		} else if (qabstractitemdelegate_destroyeditor_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qabstractitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemDelegate::destroyEditor(editor, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (qabstractitemdelegate_seteditordata_isbase) {
			qabstractitemdelegate_seteditordata_isbase = false;
			QAbstractItemDelegate::setEditorData(editor, index);
		} else if (qabstractitemdelegate_seteditordata_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qabstractitemdelegate_seteditordata_callback(this, cbval1, cbval2);
		} else {
			QAbstractItemDelegate::setEditorData(editor, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (qabstractitemdelegate_setmodeldata_isbase) {
			qabstractitemdelegate_setmodeldata_isbase = false;
			QAbstractItemDelegate::setModelData(editor, model, index);
		} else if (qabstractitemdelegate_setmodeldata_callback != nullptr) {
			QWidget* cbval1 = editor;
			QAbstractItemModel* cbval2 = model;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qabstractitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemDelegate::setModelData(editor, model, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qabstractitemdelegate_updateeditorgeometry_isbase) {
			qabstractitemdelegate_updateeditorgeometry_isbase = false;
			QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
		} else if (qabstractitemdelegate_updateeditorgeometry_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qabstractitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
		} else {
			QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (qabstractitemdelegate_editorevent_isbase) {
			qabstractitemdelegate_editorevent_isbase = false;
			return QAbstractItemDelegate::editorEvent(event, model, option, index);
		} else if (qabstractitemdelegate_editorevent_callback != nullptr) {
			QEvent* cbval1 = event;
			QAbstractItemModel* cbval2 = model;
			const QStyleOptionViewItem* cbval3 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval4 = (const QModelIndex*)&index;
			bool callback_ret = qabstractitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QAbstractItemDelegate::editorEvent(event, model, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (qabstractitemdelegate_helpevent_isbase) {
			qabstractitemdelegate_helpevent_isbase = false;
			return QAbstractItemDelegate::helpEvent(event, view, option, index);
		} else if (qabstractitemdelegate_helpevent_callback != nullptr) {
			QHelpEvent* cbval1 = event;
			QAbstractItemView* cbval2 = view;
			const QStyleOptionViewItem* cbval3 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval4 = (const QModelIndex*)&index;
			bool callback_ret = qabstractitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QAbstractItemDelegate::helpEvent(event, view, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<int> paintingRoles() const override {
		if (qabstractitemdelegate_paintingroles_isbase) {
			qabstractitemdelegate_paintingroles_isbase = false;
			return QAbstractItemDelegate::paintingRoles();
		} else if (qabstractitemdelegate_paintingroles_callback != nullptr) {
			libqt_list callback_ret = qabstractitemdelegate_paintingroles_callback();
			return callback_ret;
		} else {
			return QAbstractItemDelegate::paintingRoles();
		}
	}
};

#endif


