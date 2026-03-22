#pragma once
#ifndef QLAYOUT_H_C_LIBVIRTUAL
#define QLAYOUT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QLayout so that we can call protected methods
class VirtualQLayout : public QLayout {

public:
	// Virtual class boolean flag
	bool isVirtualQLayout= true;

	// Virtual class public types (including callbacks)
	using QLayout_Spacing_Callback = int (*)();
	using QLayout_SetSpacing_Callback = void (*)(QLayout*, int);
	using QLayout_Invalidate_Callback = void (*)();
	using QLayout_Geometry_Callback = QRect* (*)();
	using QLayout_AddItem_Callback = void (*)(QLayout*, QLayoutItem*);
	using QLayout_ExpandingDirections_Callback = int (*)();
	using QLayout_MinimumSize_Callback = QSize* (*)();
	using QLayout_MaximumSize_Callback = QSize* (*)();
	using QLayout_SetGeometry_Callback = void (*)(QLayout*, const QRect*);
	using QLayout_ItemAt_Callback = QLayoutItem* (*)(const QLayout*, int);
	using QLayout_TakeAt_Callback = QLayoutItem* (*)(QLayout*, int);
	using QLayout_IndexOf_Callback = int (*)(const QLayout*, const QWidget*);
	using QLayout_IndexOf2_Callback = int (*)(const QLayout*, const QLayoutItem*);
	using QLayout_Count_Callback = int (*)();
	using QLayout_IsEmpty_Callback = bool (*)();
	using QLayout_ControlTypes_Callback = int (*)();
	using QLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QLayout*, QWidget*, QWidget*, int);
	using QLayout_Layout_Callback = QLayout* (*)();
	using QLayout_ChildEvent_Callback = void (*)(QLayout*, QChildEvent*);
	using QLayout_WidgetEvent_Callback = void (*)(QLayout*, QEvent*);
	using QLayout_AddChildLayout_Callback = void (*)(QLayout*, QLayout*);
	using QLayout_AddChildWidget_Callback = void (*)(QLayout*, QWidget*);
	using QLayout_AdoptLayout_Callback = bool (*)(QLayout*, QLayout*);
	using QLayout_AlignmentRect_Callback = QRect* (*)(const QLayout*, const QRect*);

protected:
	// Instance callback storage
	mutable QLayout_Spacing_Callback qlayout_spacing_callback = nullptr;
	mutable QLayout_SetSpacing_Callback qlayout_setspacing_callback = nullptr;
	mutable QLayout_Invalidate_Callback qlayout_invalidate_callback = nullptr;
	mutable QLayout_Geometry_Callback qlayout_geometry_callback = nullptr;
	mutable QLayout_AddItem_Callback qlayout_additem_callback = nullptr;
	mutable QLayout_ExpandingDirections_Callback qlayout_expandingdirections_callback = nullptr;
	mutable QLayout_MinimumSize_Callback qlayout_minimumsize_callback = nullptr;
	mutable QLayout_MaximumSize_Callback qlayout_maximumsize_callback = nullptr;
	mutable QLayout_SetGeometry_Callback qlayout_setgeometry_callback = nullptr;
	mutable QLayout_ItemAt_Callback qlayout_itemat_callback = nullptr;
	mutable QLayout_TakeAt_Callback qlayout_takeat_callback = nullptr;
	mutable QLayout_IndexOf_Callback qlayout_indexof_callback = nullptr;
	mutable QLayout_IndexOf2_Callback qlayout_indexof2_callback = nullptr;
	mutable QLayout_Count_Callback qlayout_count_callback = nullptr;
	mutable QLayout_IsEmpty_Callback qlayout_isempty_callback = nullptr;
	mutable QLayout_ControlTypes_Callback qlayout_controltypes_callback = nullptr;
	mutable QLayout_ReplaceWidget_Callback qlayout_replacewidget_callback = nullptr;
	mutable QLayout_Layout_Callback qlayout_layout_callback = nullptr;
	mutable QLayout_ChildEvent_Callback qlayout_childevent_callback = nullptr;
	mutable QLayout_WidgetEvent_Callback qlayout_widgetevent_callback = nullptr;
	mutable QLayout_AddChildLayout_Callback qlayout_addchildlayout_callback = nullptr;
	mutable QLayout_AddChildWidget_Callback qlayout_addchildwidget_callback = nullptr;
	mutable QLayout_AdoptLayout_Callback qlayout_adoptlayout_callback = nullptr;
	mutable QLayout_AlignmentRect_Callback qlayout_alignmentrect_callback = nullptr;

	// Instance base flags
    mutable bool qlayout_spacing_isbase = false;
    mutable bool qlayout_setspacing_isbase = false;
    mutable bool qlayout_invalidate_isbase = false;
    mutable bool qlayout_geometry_isbase = false;
    mutable bool qlayout_additem_isbase = false;
    mutable bool qlayout_expandingdirections_isbase = false;
    mutable bool qlayout_minimumsize_isbase = false;
    mutable bool qlayout_maximumsize_isbase = false;
    mutable bool qlayout_setgeometry_isbase = false;
    mutable bool qlayout_itemat_isbase = false;
    mutable bool qlayout_takeat_isbase = false;
    mutable bool qlayout_indexof_isbase = false;
    mutable bool qlayout_indexof2_isbase = false;
    mutable bool qlayout_count_isbase = false;
    mutable bool qlayout_isempty_isbase = false;
    mutable bool qlayout_controltypes_isbase = false;
    mutable bool qlayout_replacewidget_isbase = false;
    mutable bool qlayout_layout_isbase = false;
    mutable bool qlayout_childevent_isbase = false;
    mutable bool qlayout_widgetevent_isbase = false;
    mutable bool qlayout_addchildlayout_isbase = false;
    mutable bool qlayout_addchildwidget_isbase = false;
    mutable bool qlayout_adoptlayout_isbase = false;
    mutable bool qlayout_alignmentrect_isbase = false;

public:
	VirtualQLayout(QWidget* parent): QLayout(parent) {};
	VirtualQLayout(): QLayout() {};

	~VirtualQLayout() {
		qlayout_spacing_callback = nullptr;
		qlayout_setspacing_callback = nullptr;
		qlayout_invalidate_callback = nullptr;
		qlayout_geometry_callback = nullptr;
		qlayout_additem_callback = nullptr;
		qlayout_expandingdirections_callback = nullptr;
		qlayout_minimumsize_callback = nullptr;
		qlayout_maximumsize_callback = nullptr;
		qlayout_setgeometry_callback = nullptr;
		qlayout_itemat_callback = nullptr;
		qlayout_takeat_callback = nullptr;
		qlayout_indexof_callback = nullptr;
		qlayout_indexof2_callback = nullptr;
		qlayout_count_callback = nullptr;
		qlayout_isempty_callback = nullptr;
		qlayout_controltypes_callback = nullptr;
		qlayout_replacewidget_callback = nullptr;
		qlayout_layout_callback = nullptr;
		qlayout_childevent_callback = nullptr;
		qlayout_widgetevent_callback = nullptr;
		qlayout_addchildlayout_callback = nullptr;
		qlayout_addchildwidget_callback = nullptr;
		qlayout_adoptlayout_callback = nullptr;
		qlayout_alignmentrect_callback = nullptr;
	}

// Callback setters
	inline void setQLayout_Spacing_Callback(QLayout_Spacing_Callback cb) const { qlayout_spacing_callback = cb; }
	inline void setQLayout_SetSpacing_Callback(QLayout_SetSpacing_Callback cb) const { qlayout_setspacing_callback = cb; }
	inline void setQLayout_Invalidate_Callback(QLayout_Invalidate_Callback cb) const { qlayout_invalidate_callback = cb; }
	inline void setQLayout_Geometry_Callback(QLayout_Geometry_Callback cb) const { qlayout_geometry_callback = cb; }
	inline void setQLayout_AddItem_Callback(QLayout_AddItem_Callback cb) const { qlayout_additem_callback = cb; }
	inline void setQLayout_ExpandingDirections_Callback(QLayout_ExpandingDirections_Callback cb) const { qlayout_expandingdirections_callback = cb; }
	inline void setQLayout_MinimumSize_Callback(QLayout_MinimumSize_Callback cb) const { qlayout_minimumsize_callback = cb; }
	inline void setQLayout_MaximumSize_Callback(QLayout_MaximumSize_Callback cb) const { qlayout_maximumsize_callback = cb; }
	inline void setQLayout_SetGeometry_Callback(QLayout_SetGeometry_Callback cb) const { qlayout_setgeometry_callback = cb; }
	inline void setQLayout_ItemAt_Callback(QLayout_ItemAt_Callback cb) const { qlayout_itemat_callback = cb; }
	inline void setQLayout_TakeAt_Callback(QLayout_TakeAt_Callback cb) const { qlayout_takeat_callback = cb; }
	inline void setQLayout_IndexOf_Callback(QLayout_IndexOf_Callback cb) const { qlayout_indexof_callback = cb; }
	inline void setQLayout_IndexOf2_Callback(QLayout_IndexOf2_Callback cb) const { qlayout_indexof2_callback = cb; }
	inline void setQLayout_Count_Callback(QLayout_Count_Callback cb) const { qlayout_count_callback = cb; }
	inline void setQLayout_IsEmpty_Callback(QLayout_IsEmpty_Callback cb) const { qlayout_isempty_callback = cb; }
	inline void setQLayout_ControlTypes_Callback(QLayout_ControlTypes_Callback cb) const { qlayout_controltypes_callback = cb; }
	inline void setQLayout_ReplaceWidget_Callback(QLayout_ReplaceWidget_Callback cb) const { qlayout_replacewidget_callback = cb; }
	inline void setQLayout_Layout_Callback(QLayout_Layout_Callback cb) const { qlayout_layout_callback = cb; }
	inline void setQLayout_ChildEvent_Callback(QLayout_ChildEvent_Callback cb) const { qlayout_childevent_callback = cb; }
	inline void setQLayout_WidgetEvent_Callback(QLayout_WidgetEvent_Callback cb) const { qlayout_widgetevent_callback = cb; }
	inline void setQLayout_AddChildLayout_Callback(QLayout_AddChildLayout_Callback cb) const { qlayout_addchildlayout_callback = cb; }
	inline void setQLayout_AddChildWidget_Callback(QLayout_AddChildWidget_Callback cb) const { qlayout_addchildwidget_callback = cb; }
	inline void setQLayout_AdoptLayout_Callback(QLayout_AdoptLayout_Callback cb) const { qlayout_adoptlayout_callback = cb; }
	inline void setQLayout_AlignmentRect_Callback(QLayout_AlignmentRect_Callback cb) const { qlayout_alignmentrect_callback = cb; }

// Base flag setters
	inline void setQLayout_Spacing_IsBase(bool value) const { qlayout_spacing_isbase = value; }
	inline void setQLayout_SetSpacing_IsBase(bool value) const { qlayout_setspacing_isbase = value; }
	inline void setQLayout_Invalidate_IsBase(bool value) const { qlayout_invalidate_isbase = value; }
	inline void setQLayout_Geometry_IsBase(bool value) const { qlayout_geometry_isbase = value; }
	inline void setQLayout_AddItem_IsBase(bool value) const { qlayout_additem_isbase = value; }
	inline void setQLayout_ExpandingDirections_IsBase(bool value) const { qlayout_expandingdirections_isbase = value; }
	inline void setQLayout_MinimumSize_IsBase(bool value) const { qlayout_minimumsize_isbase = value; }
	inline void setQLayout_MaximumSize_IsBase(bool value) const { qlayout_maximumsize_isbase = value; }
	inline void setQLayout_SetGeometry_IsBase(bool value) const { qlayout_setgeometry_isbase = value; }
	inline void setQLayout_ItemAt_IsBase(bool value) const { qlayout_itemat_isbase = value; }
	inline void setQLayout_TakeAt_IsBase(bool value) const { qlayout_takeat_isbase = value; }
	inline void setQLayout_IndexOf_IsBase(bool value) const { qlayout_indexof_isbase = value; }
	inline void setQLayout_IndexOf2_IsBase(bool value) const { qlayout_indexof2_isbase = value; }
	inline void setQLayout_Count_IsBase(bool value) const { qlayout_count_isbase = value; }
	inline void setQLayout_IsEmpty_IsBase(bool value) const { qlayout_isempty_isbase = value; }
	inline void setQLayout_ControlTypes_IsBase(bool value) const { qlayout_controltypes_isbase = value; }
	inline void setQLayout_ReplaceWidget_IsBase(bool value) const { qlayout_replacewidget_isbase = value; }
	inline void setQLayout_Layout_IsBase(bool value) const { qlayout_layout_isbase = value; }
	inline void setQLayout_ChildEvent_IsBase(bool value) const { qlayout_childevent_isbase = value; }
	inline void setQLayout_WidgetEvent_IsBase(bool value) const { qlayout_widgetevent_isbase = value; }
	inline void setQLayout_AddChildLayout_IsBase(bool value) const { qlayout_addchildlayout_isbase = value; }
	inline void setQLayout_AddChildWidget_IsBase(bool value) const { qlayout_addchildwidget_isbase = value; }
	inline void setQLayout_AdoptLayout_IsBase(bool value) const { qlayout_adoptlayout_isbase = value; }
	inline void setQLayout_AlignmentRect_IsBase(bool value) const { qlayout_alignmentrect_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual int spacing() const override {
		if (qlayout_spacing_isbase) {
			qlayout_spacing_isbase = false;
			return QLayout::spacing();
		} else if (qlayout_spacing_callback != nullptr) {
			int callback_ret = qlayout_spacing_callback();
			return callback_ret;
		} else {
			return QLayout::spacing();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSpacing(int spacing) override {
		if (qlayout_setspacing_isbase) {
			qlayout_setspacing_isbase = false;
			QLayout::setSpacing(spacing);
		} else if (qlayout_setspacing_callback != nullptr) {
			int cbval1 = spacing;
			qlayout_setspacing_callback(this, cbval1);
		} else {
			QLayout::setSpacing(spacing);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void invalidate() override {
		if (qlayout_invalidate_isbase) {
			qlayout_invalidate_isbase = false;
			QLayout::invalidate();
		} else if (qlayout_invalidate_callback != nullptr) {
			qlayout_invalidate_callback();
		} else {
			QLayout::invalidate();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect geometry() const override {
		if (qlayout_geometry_isbase) {
			qlayout_geometry_isbase = false;
			return QLayout::geometry();
		} else if (qlayout_geometry_callback != nullptr) {
			QRect* callback_ret = qlayout_geometry_callback();
			return *callback_ret;
		} else {
			return QLayout::geometry();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void addItem(QLayoutItem* param1) override {
		if (qlayout_additem_callback != nullptr) {
			QLayoutItem* cbval1 = param1;
			qlayout_additem_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::Orientation> expandingDirections() const override {
		if (qlayout_expandingdirections_isbase) {
			qlayout_expandingdirections_isbase = false;
			return QLayout::expandingDirections();
		} else if (qlayout_expandingdirections_callback != nullptr) {
			int callback_ret = qlayout_expandingdirections_callback();
			return static_cast<QFlags<Qt::Orientation>>(callback_ret);
		} else {
			return QLayout::expandingDirections();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSize() const override {
		if (qlayout_minimumsize_isbase) {
			qlayout_minimumsize_isbase = false;
			return QLayout::minimumSize();
		} else if (qlayout_minimumsize_callback != nullptr) {
			QSize* callback_ret = qlayout_minimumsize_callback();
			return *callback_ret;
		} else {
			return QLayout::minimumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize maximumSize() const override {
		if (qlayout_maximumsize_isbase) {
			qlayout_maximumsize_isbase = false;
			return QLayout::maximumSize();
		} else if (qlayout_maximumsize_callback != nullptr) {
			QSize* callback_ret = qlayout_maximumsize_callback();
			return *callback_ret;
		} else {
			return QLayout::maximumSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setGeometry(const QRect& geometry) override {
		if (qlayout_setgeometry_isbase) {
			qlayout_setgeometry_isbase = false;
			QLayout::setGeometry(geometry);
		} else if (qlayout_setgeometry_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&geometry;
			qlayout_setgeometry_callback(this, cbval1);
		} else {
			QLayout::setGeometry(geometry);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* itemAt(int index) const override {
		if (qlayout_itemat_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qlayout_itemat_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* takeAt(int index) override {
		if (qlayout_takeat_callback != nullptr) {
			int cbval1 = index;
			QLayoutItem* callback_ret = qlayout_takeat_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int indexOf(const QWidget* param1) const override {
		if (qlayout_indexof_isbase) {
			qlayout_indexof_isbase = false;
			return QLayout::indexOf(param1);
		} else if (qlayout_indexof_callback != nullptr) {
			const QWidget* cbval1 = param1;
			int callback_ret = qlayout_indexof_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLayout::indexOf(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int indexOf(const QLayoutItem* param1) const override {
		if (qlayout_indexof2_isbase) {
			qlayout_indexof2_isbase = false;
			return QLayout::indexOf(param1);
		} else if (qlayout_indexof2_callback != nullptr) {
			const QLayoutItem* cbval1 = param1;
			int callback_ret = qlayout_indexof2_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLayout::indexOf(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int count() const override {
		if (qlayout_count_callback != nullptr) {
			int callback_ret = qlayout_count_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEmpty() const override {
		if (qlayout_isempty_isbase) {
			qlayout_isempty_isbase = false;
			return QLayout::isEmpty();
		} else if (qlayout_isempty_callback != nullptr) {
			bool callback_ret = qlayout_isempty_callback();
			return callback_ret;
		} else {
			return QLayout::isEmpty();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<QSizePolicy::ControlType> controlTypes() const override {
		if (qlayout_controltypes_isbase) {
			qlayout_controltypes_isbase = false;
			return QLayout::controlTypes();
		} else if (qlayout_controltypes_callback != nullptr) {
			int callback_ret = qlayout_controltypes_callback();
			return static_cast<QFlags<QSizePolicy::ControlType>>(callback_ret);
		} else {
			return QLayout::controlTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (qlayout_replacewidget_isbase) {
			qlayout_replacewidget_isbase = false;
			return QLayout::replaceWidget(from, to, options);
		} else if (qlayout_replacewidget_callback != nullptr) {
			QWidget* cbval1 = from;
			QWidget* cbval2 = to;
			int cbval3 = static_cast<int>(options);
			QLayoutItem* callback_ret = qlayout_replacewidget_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QLayout::replaceWidget(from, to, options);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QLayout* layout() override {
		if (qlayout_layout_isbase) {
			qlayout_layout_isbase = false;
			return QLayout::layout();
		} else if (qlayout_layout_callback != nullptr) {
			QLayout* callback_ret = qlayout_layout_callback();
			return callback_ret;
		} else {
			return QLayout::layout();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void childEvent(QChildEvent* e) override {
		if (qlayout_childevent_isbase) {
			qlayout_childevent_isbase = false;
			QLayout::childEvent(e);
		} else if (qlayout_childevent_callback != nullptr) {
			QChildEvent* cbval1 = e;
			qlayout_childevent_callback(this, cbval1);
		} else {
			QLayout::childEvent(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	void widgetEvent(QEvent* param1) {
		if (qlayout_widgetevent_isbase) {
			qlayout_widgetevent_isbase = false;
			QLayout::widgetEvent(param1);
		} else if (qlayout_widgetevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qlayout_widgetevent_callback(this, cbval1);
		} else {
			QLayout::widgetEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void addChildLayout(QLayout* l) {
		if (qlayout_addchildlayout_isbase) {
			qlayout_addchildlayout_isbase = false;
			QLayout::addChildLayout(l);
		} else if (qlayout_addchildlayout_callback != nullptr) {
			QLayout* cbval1 = l;
			qlayout_addchildlayout_callback(this, cbval1);
		} else {
			QLayout::addChildLayout(l);
		}
	}

	// Virtual method for C ABI access and custom callback
	void addChildWidget(QWidget* w) {
		if (qlayout_addchildwidget_isbase) {
			qlayout_addchildwidget_isbase = false;
			QLayout::addChildWidget(w);
		} else if (qlayout_addchildwidget_callback != nullptr) {
			QWidget* cbval1 = w;
			qlayout_addchildwidget_callback(this, cbval1);
		} else {
			QLayout::addChildWidget(w);
		}
	}

	// Virtual method for C ABI access and custom callback
	bool adoptLayout(QLayout* layout) {
		if (qlayout_adoptlayout_isbase) {
			qlayout_adoptlayout_isbase = false;
			return QLayout::adoptLayout(layout);
		} else if (qlayout_adoptlayout_callback != nullptr) {
			QLayout* cbval1 = layout;
			bool callback_ret = qlayout_adoptlayout_callback(this, cbval1);
			return callback_ret;
		} else {
			return QLayout::adoptLayout(layout);
		}
	}

	// Virtual method for C ABI access and custom callback
	QRect alignmentRect(const QRect& param1) const {
		if (qlayout_alignmentrect_isbase) {
			qlayout_alignmentrect_isbase = false;
			return QLayout::alignmentRect(param1);
		} else if (qlayout_alignmentrect_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&param1;
			QRect* callback_ret = qlayout_alignmentrect_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QLayout::alignmentRect(param1);
		}
	}

	// Friend functions
	friend void QLayout_ChildEvent(QLayout* self, QChildEvent* e);
	friend void QLayout_QBaseChildEvent(QLayout* self, QChildEvent* e);
	friend void QLayout_WidgetEvent(QLayout* self, QEvent* param1);
	friend void QLayout_QBaseWidgetEvent(QLayout* self, QEvent* param1);
	friend void QLayout_AddChildLayout(QLayout* self, QLayout* l);
	friend void QLayout_QBaseAddChildLayout(QLayout* self, QLayout* l);
	friend void QLayout_AddChildWidget(QLayout* self, QWidget* w);
	friend void QLayout_QBaseAddChildWidget(QLayout* self, QWidget* w);
	friend bool QLayout_AdoptLayout(QLayout* self, QLayout* layout);
	friend bool QLayout_QBaseAdoptLayout(QLayout* self, QLayout* layout);
	friend QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1);
	friend QRect* QLayout_QBaseAlignmentRect(const QLayout* self, const QRect* param1);
};

#endif


