#pragma once
#ifndef QSTYLEDITEMDELEGATE_H_C_LIBVIRTUAL
#define QSTYLEDITEMDELEGATE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStyledItemDelegate so that we can call protected methods
class VirtualQStyledItemDelegate final : public QStyledItemDelegate {

public:
	// Virtual class boolean flag
	bool isVirtualQStyledItemDelegate= true;

	// Virtual class public types (including callbacks)
	using QStyledItemDelegate_Paint_Callback = void (*)(const QStyledItemDelegate*, QPainter*, const QStyleOptionViewItem*, const QModelIndex*);
	using QStyledItemDelegate_SizeHint_Callback = QSize* (*)(const QStyledItemDelegate*, const QStyleOptionViewItem*, const QModelIndex*);
	using QStyledItemDelegate_CreateEditor_Callback = QWidget* (*)(const QStyledItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QStyledItemDelegate_SetEditorData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, const QModelIndex*);
	using QStyledItemDelegate_SetModelData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex*);
	using QStyledItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QStyledItemDelegate*, QWidget*, const QStyleOptionViewItem*, const QModelIndex*);
	using QStyledItemDelegate_DisplayText_Callback = const char* (*)(const QStyledItemDelegate*, const QVariant*, const QLocale*);
	using QStyledItemDelegate_InitStyleOption_Callback = void (*)(const QStyledItemDelegate*, QStyleOptionViewItem*, const QModelIndex*);
	using QStyledItemDelegate_EventFilter_Callback = bool (*)(QStyledItemDelegate*, QObject*, QEvent*);
	using QStyledItemDelegate_EditorEvent_Callback = bool (*)(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem*, const QModelIndex*);

protected:
	// Instance callback storage
	mutable QStyledItemDelegate_Paint_Callback qstyleditemdelegate_paint_callback = nullptr;
	mutable QStyledItemDelegate_SizeHint_Callback qstyleditemdelegate_sizehint_callback = nullptr;
	mutable QStyledItemDelegate_CreateEditor_Callback qstyleditemdelegate_createeditor_callback = nullptr;
	mutable QStyledItemDelegate_SetEditorData_Callback qstyleditemdelegate_seteditordata_callback = nullptr;
	mutable QStyledItemDelegate_SetModelData_Callback qstyleditemdelegate_setmodeldata_callback = nullptr;
	mutable QStyledItemDelegate_UpdateEditorGeometry_Callback qstyleditemdelegate_updateeditorgeometry_callback = nullptr;
	mutable QStyledItemDelegate_DisplayText_Callback qstyleditemdelegate_displaytext_callback = nullptr;
	mutable QStyledItemDelegate_InitStyleOption_Callback qstyleditemdelegate_initstyleoption_callback = nullptr;
	mutable QStyledItemDelegate_EventFilter_Callback qstyleditemdelegate_eventfilter_callback = nullptr;
	mutable QStyledItemDelegate_EditorEvent_Callback qstyleditemdelegate_editorevent_callback = nullptr;

	// Instance base flags
    mutable bool qstyleditemdelegate_paint_isbase = false;
    mutable bool qstyleditemdelegate_sizehint_isbase = false;
    mutable bool qstyleditemdelegate_createeditor_isbase = false;
    mutable bool qstyleditemdelegate_seteditordata_isbase = false;
    mutable bool qstyleditemdelegate_setmodeldata_isbase = false;
    mutable bool qstyleditemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qstyleditemdelegate_displaytext_isbase = false;
    mutable bool qstyleditemdelegate_initstyleoption_isbase = false;
    mutable bool qstyleditemdelegate_eventfilter_isbase = false;
    mutable bool qstyleditemdelegate_editorevent_isbase = false;

public:
	VirtualQStyledItemDelegate(): QStyledItemDelegate() {};
	VirtualQStyledItemDelegate(QObject* parent): QStyledItemDelegate(parent) {};

	~VirtualQStyledItemDelegate() {
		qstyleditemdelegate_paint_callback = nullptr;
		qstyleditemdelegate_sizehint_callback = nullptr;
		qstyleditemdelegate_createeditor_callback = nullptr;
		qstyleditemdelegate_seteditordata_callback = nullptr;
		qstyleditemdelegate_setmodeldata_callback = nullptr;
		qstyleditemdelegate_updateeditorgeometry_callback = nullptr;
		qstyleditemdelegate_displaytext_callback = nullptr;
		qstyleditemdelegate_initstyleoption_callback = nullptr;
		qstyleditemdelegate_eventfilter_callback = nullptr;
		qstyleditemdelegate_editorevent_callback = nullptr;
	}

// Callback setters
	inline void setQStyledItemDelegate_Paint_Callback(QStyledItemDelegate_Paint_Callback cb) const { qstyleditemdelegate_paint_callback = cb; }
	inline void setQStyledItemDelegate_SizeHint_Callback(QStyledItemDelegate_SizeHint_Callback cb) const { qstyleditemdelegate_sizehint_callback = cb; }
	inline void setQStyledItemDelegate_CreateEditor_Callback(QStyledItemDelegate_CreateEditor_Callback cb) const { qstyleditemdelegate_createeditor_callback = cb; }
	inline void setQStyledItemDelegate_SetEditorData_Callback(QStyledItemDelegate_SetEditorData_Callback cb) const { qstyleditemdelegate_seteditordata_callback = cb; }
	inline void setQStyledItemDelegate_SetModelData_Callback(QStyledItemDelegate_SetModelData_Callback cb) const { qstyleditemdelegate_setmodeldata_callback = cb; }
	inline void setQStyledItemDelegate_UpdateEditorGeometry_Callback(QStyledItemDelegate_UpdateEditorGeometry_Callback cb) const { qstyleditemdelegate_updateeditorgeometry_callback = cb; }
	inline void setQStyledItemDelegate_DisplayText_Callback(QStyledItemDelegate_DisplayText_Callback cb) const { qstyleditemdelegate_displaytext_callback = cb; }
	inline void setQStyledItemDelegate_InitStyleOption_Callback(QStyledItemDelegate_InitStyleOption_Callback cb) const { qstyleditemdelegate_initstyleoption_callback = cb; }
	inline void setQStyledItemDelegate_EventFilter_Callback(QStyledItemDelegate_EventFilter_Callback cb) const { qstyleditemdelegate_eventfilter_callback = cb; }
	inline void setQStyledItemDelegate_EditorEvent_Callback(QStyledItemDelegate_EditorEvent_Callback cb) const { qstyleditemdelegate_editorevent_callback = cb; }

// Base flag setters
	inline void setQStyledItemDelegate_Paint_IsBase(bool value) const { qstyleditemdelegate_paint_isbase = value; }
	inline void setQStyledItemDelegate_SizeHint_IsBase(bool value) const { qstyleditemdelegate_sizehint_isbase = value; }
	inline void setQStyledItemDelegate_CreateEditor_IsBase(bool value) const { qstyleditemdelegate_createeditor_isbase = value; }
	inline void setQStyledItemDelegate_SetEditorData_IsBase(bool value) const { qstyleditemdelegate_seteditordata_isbase = value; }
	inline void setQStyledItemDelegate_SetModelData_IsBase(bool value) const { qstyleditemdelegate_setmodeldata_isbase = value; }
	inline void setQStyledItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qstyleditemdelegate_updateeditorgeometry_isbase = value; }
	inline void setQStyledItemDelegate_DisplayText_IsBase(bool value) const { qstyleditemdelegate_displaytext_isbase = value; }
	inline void setQStyledItemDelegate_InitStyleOption_IsBase(bool value) const { qstyleditemdelegate_initstyleoption_isbase = value; }
	inline void setQStyledItemDelegate_EventFilter_IsBase(bool value) const { qstyleditemdelegate_eventfilter_isbase = value; }
	inline void setQStyledItemDelegate_EditorEvent_IsBase(bool value) const { qstyleditemdelegate_editorevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qstyleditemdelegate_paint_isbase) {
			qstyleditemdelegate_paint_isbase = false;
			QStyledItemDelegate::paint(painter, option, index);
		} else if (qstyleditemdelegate_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qstyleditemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QStyledItemDelegate::paint(painter, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qstyleditemdelegate_sizehint_isbase) {
			qstyleditemdelegate_sizehint_isbase = false;
			return QStyledItemDelegate::sizeHint(option, index);
		} else if (qstyleditemdelegate_sizehint_callback != nullptr) {
			const QStyleOptionViewItem* cbval1 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			QSize* callback_ret = qstyleditemdelegate_sizehint_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QStyledItemDelegate::sizeHint(option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qstyleditemdelegate_createeditor_isbase) {
			qstyleditemdelegate_createeditor_isbase = false;
			return QStyledItemDelegate::createEditor(parent, option, index);
		} else if (qstyleditemdelegate_createeditor_callback != nullptr) {
			QWidget* cbval1 = parent;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			QWidget* callback_ret = qstyleditemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QStyledItemDelegate::createEditor(parent, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (qstyleditemdelegate_seteditordata_isbase) {
			qstyleditemdelegate_seteditordata_isbase = false;
			QStyledItemDelegate::setEditorData(editor, index);
		} else if (qstyleditemdelegate_seteditordata_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qstyleditemdelegate_seteditordata_callback(this, cbval1, cbval2);
		} else {
			QStyledItemDelegate::setEditorData(editor, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (qstyleditemdelegate_setmodeldata_isbase) {
			qstyleditemdelegate_setmodeldata_isbase = false;
			QStyledItemDelegate::setModelData(editor, model, index);
		} else if (qstyleditemdelegate_setmodeldata_callback != nullptr) {
			QWidget* cbval1 = editor;
			QAbstractItemModel* cbval2 = model;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qstyleditemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
		} else {
			QStyledItemDelegate::setModelData(editor, model, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (qstyleditemdelegate_updateeditorgeometry_isbase) {
			qstyleditemdelegate_updateeditorgeometry_isbase = false;
			QStyledItemDelegate::updateEditorGeometry(editor, option, index);
		} else if (qstyleditemdelegate_updateeditorgeometry_callback != nullptr) {
			QWidget* cbval1 = editor;
			const QStyleOptionViewItem* cbval2 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval3 = (const QModelIndex*)&index;
			qstyleditemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
		} else {
			QStyledItemDelegate::updateEditorGeometry(editor, option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
		if (qstyleditemdelegate_displaytext_isbase) {
			qstyleditemdelegate_displaytext_isbase = false;
			return QStyledItemDelegate::displayText(value, locale);
		} else if (qstyleditemdelegate_displaytext_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&value;
			const QLocale* cbval2 = (const QLocale*)&locale;
			const char* callback_ret = qstyleditemdelegate_displaytext_callback(this, cbval1, cbval2);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QStyledItemDelegate::displayText(value, locale);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
		if (qstyleditemdelegate_initstyleoption_isbase) {
			qstyleditemdelegate_initstyleoption_isbase = false;
			QStyledItemDelegate::initStyleOption(option, index);
		} else if (qstyleditemdelegate_initstyleoption_callback != nullptr) {
			QStyleOptionViewItem* cbval1 = option;
			const QModelIndex* cbval2 = (const QModelIndex*)&index;
			qstyleditemdelegate_initstyleoption_callback(this, cbval1, cbval2);
		} else {
			QStyledItemDelegate::initStyleOption(option, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (qstyleditemdelegate_eventfilter_isbase) {
			qstyleditemdelegate_eventfilter_isbase = false;
			return QStyledItemDelegate::eventFilter(object, event);
		} else if (qstyleditemdelegate_eventfilter_callback != nullptr) {
			QObject* cbval1 = object;
			QEvent* cbval2 = event;
			bool callback_ret = qstyleditemdelegate_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QStyledItemDelegate::eventFilter(object, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (qstyleditemdelegate_editorevent_isbase) {
			qstyleditemdelegate_editorevent_isbase = false;
			return QStyledItemDelegate::editorEvent(event, model, option, index);
		} else if (qstyleditemdelegate_editorevent_callback != nullptr) {
			QEvent* cbval1 = event;
			QAbstractItemModel* cbval2 = model;
			const QStyleOptionViewItem* cbval3 = (const QStyleOptionViewItem*)&option;
			const QModelIndex* cbval4 = (const QModelIndex*)&index;
			bool callback_ret = qstyleditemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QStyledItemDelegate::editorEvent(event, model, option, index);
		}
	}

	// Friend functions
	friend void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
	friend void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
	friend bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
	friend bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
	friend bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
	friend bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
};

#endif


