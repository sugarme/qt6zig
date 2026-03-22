#pragma once
#ifndef QGRAPHICSITEM_H_C_LIBVIRTUAL
#define QGRAPHICSITEM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsItem so that we can call protected methods
class VirtualQGraphicsItem : public QGraphicsItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsItem::Extension;
	using QGraphicsItem_Advance_Callback = void (*)(QGraphicsItem*, int);
	using QGraphicsItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsItem_Contains_Callback = bool (*)(const QGraphicsItem*, const QPointF*);
	using QGraphicsItem_CollidesWithItem_Callback = bool (*)(const QGraphicsItem*, const QGraphicsItem*, int);
	using QGraphicsItem_CollidesWithPath_Callback = bool (*)(const QGraphicsItem*, const QPainterPath*, int);
	using QGraphicsItem_IsObscuredBy_Callback = bool (*)(const QGraphicsItem*, const QGraphicsItem*);
	using QGraphicsItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsItem_Paint_Callback = void (*)(QGraphicsItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsItem_Type_Callback = int (*)();
	using QGraphicsItem_SceneEventFilter_Callback = bool (*)(QGraphicsItem*, QGraphicsItem*, QEvent*);
	using QGraphicsItem_SceneEvent_Callback = bool (*)(QGraphicsItem*, QEvent*);
	using QGraphicsItem_ContextMenuEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneContextMenuEvent*);
	using QGraphicsItem_DragEnterEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsItem_DragLeaveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsItem_DragMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsItem_DropEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsItem_FocusInEvent_Callback = void (*)(QGraphicsItem*, QFocusEvent*);
	using QGraphicsItem_FocusOutEvent_Callback = void (*)(QGraphicsItem*, QFocusEvent*);
	using QGraphicsItem_HoverEnterEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsItem_HoverMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsItem_HoverLeaveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsItem_KeyPressEvent_Callback = void (*)(QGraphicsItem*, QKeyEvent*);
	using QGraphicsItem_KeyReleaseEvent_Callback = void (*)(QGraphicsItem*, QKeyEvent*);
	using QGraphicsItem_MousePressEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsItem_MouseMoveEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsItem_MouseReleaseEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsItem_WheelEvent_Callback = void (*)(QGraphicsItem*, QGraphicsSceneWheelEvent*);
	using QGraphicsItem_InputMethodEvent_Callback = void (*)(QGraphicsItem*, QInputMethodEvent*);
	using QGraphicsItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsItem*, int);
	using QGraphicsItem_ItemChange_Callback = QVariant* (*)(QGraphicsItem*, int, const QVariant*);
	using QGraphicsItem_SupportsExtension_Callback = bool (*)(const QGraphicsItem*, int);
	using QGraphicsItem_SetExtension_Callback = void (*)(QGraphicsItem*, int, const QVariant*);
	using QGraphicsItem_Extension_Callback = QVariant* (*)(const QGraphicsItem*, const QVariant*);
	using QGraphicsItem_UpdateMicroFocus_Callback = void (*)();
	using QGraphicsItem_AddToIndex_Callback = void (*)();
	using QGraphicsItem_RemoveFromIndex_Callback = void (*)();
	using QGraphicsItem_PrepareGeometryChange_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QGraphicsItem_Advance_Callback qgraphicsitem_advance_callback = nullptr;
	mutable QGraphicsItem_BoundingRect_Callback qgraphicsitem_boundingrect_callback = nullptr;
	mutable QGraphicsItem_Shape_Callback qgraphicsitem_shape_callback = nullptr;
	mutable QGraphicsItem_Contains_Callback qgraphicsitem_contains_callback = nullptr;
	mutable QGraphicsItem_CollidesWithItem_Callback qgraphicsitem_collideswithitem_callback = nullptr;
	mutable QGraphicsItem_CollidesWithPath_Callback qgraphicsitem_collideswithpath_callback = nullptr;
	mutable QGraphicsItem_IsObscuredBy_Callback qgraphicsitem_isobscuredby_callback = nullptr;
	mutable QGraphicsItem_OpaqueArea_Callback qgraphicsitem_opaquearea_callback = nullptr;
	mutable QGraphicsItem_Paint_Callback qgraphicsitem_paint_callback = nullptr;
	mutable QGraphicsItem_Type_Callback qgraphicsitem_type_callback = nullptr;
	mutable QGraphicsItem_SceneEventFilter_Callback qgraphicsitem_sceneeventfilter_callback = nullptr;
	mutable QGraphicsItem_SceneEvent_Callback qgraphicsitem_sceneevent_callback = nullptr;
	mutable QGraphicsItem_ContextMenuEvent_Callback qgraphicsitem_contextmenuevent_callback = nullptr;
	mutable QGraphicsItem_DragEnterEvent_Callback qgraphicsitem_dragenterevent_callback = nullptr;
	mutable QGraphicsItem_DragLeaveEvent_Callback qgraphicsitem_dragleaveevent_callback = nullptr;
	mutable QGraphicsItem_DragMoveEvent_Callback qgraphicsitem_dragmoveevent_callback = nullptr;
	mutable QGraphicsItem_DropEvent_Callback qgraphicsitem_dropevent_callback = nullptr;
	mutable QGraphicsItem_FocusInEvent_Callback qgraphicsitem_focusinevent_callback = nullptr;
	mutable QGraphicsItem_FocusOutEvent_Callback qgraphicsitem_focusoutevent_callback = nullptr;
	mutable QGraphicsItem_HoverEnterEvent_Callback qgraphicsitem_hoverenterevent_callback = nullptr;
	mutable QGraphicsItem_HoverMoveEvent_Callback qgraphicsitem_hovermoveevent_callback = nullptr;
	mutable QGraphicsItem_HoverLeaveEvent_Callback qgraphicsitem_hoverleaveevent_callback = nullptr;
	mutable QGraphicsItem_KeyPressEvent_Callback qgraphicsitem_keypressevent_callback = nullptr;
	mutable QGraphicsItem_KeyReleaseEvent_Callback qgraphicsitem_keyreleaseevent_callback = nullptr;
	mutable QGraphicsItem_MousePressEvent_Callback qgraphicsitem_mousepressevent_callback = nullptr;
	mutable QGraphicsItem_MouseMoveEvent_Callback qgraphicsitem_mousemoveevent_callback = nullptr;
	mutable QGraphicsItem_MouseReleaseEvent_Callback qgraphicsitem_mousereleaseevent_callback = nullptr;
	mutable QGraphicsItem_MouseDoubleClickEvent_Callback qgraphicsitem_mousedoubleclickevent_callback = nullptr;
	mutable QGraphicsItem_WheelEvent_Callback qgraphicsitem_wheelevent_callback = nullptr;
	mutable QGraphicsItem_InputMethodEvent_Callback qgraphicsitem_inputmethodevent_callback = nullptr;
	mutable QGraphicsItem_InputMethodQuery_Callback qgraphicsitem_inputmethodquery_callback = nullptr;
	mutable QGraphicsItem_ItemChange_Callback qgraphicsitem_itemchange_callback = nullptr;
	mutable QGraphicsItem_SupportsExtension_Callback qgraphicsitem_supportsextension_callback = nullptr;
	mutable QGraphicsItem_SetExtension_Callback qgraphicsitem_setextension_callback = nullptr;
	mutable QGraphicsItem_Extension_Callback qgraphicsitem_extension_callback = nullptr;
	mutable QGraphicsItem_UpdateMicroFocus_Callback qgraphicsitem_updatemicrofocus_callback = nullptr;
	mutable QGraphicsItem_AddToIndex_Callback qgraphicsitem_addtoindex_callback = nullptr;
	mutable QGraphicsItem_RemoveFromIndex_Callback qgraphicsitem_removefromindex_callback = nullptr;
	mutable QGraphicsItem_PrepareGeometryChange_Callback qgraphicsitem_preparegeometrychange_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsitem_advance_isbase = false;
    mutable bool qgraphicsitem_boundingrect_isbase = false;
    mutable bool qgraphicsitem_shape_isbase = false;
    mutable bool qgraphicsitem_contains_isbase = false;
    mutable bool qgraphicsitem_collideswithitem_isbase = false;
    mutable bool qgraphicsitem_collideswithpath_isbase = false;
    mutable bool qgraphicsitem_isobscuredby_isbase = false;
    mutable bool qgraphicsitem_opaquearea_isbase = false;
    mutable bool qgraphicsitem_paint_isbase = false;
    mutable bool qgraphicsitem_type_isbase = false;
    mutable bool qgraphicsitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicsitem_sceneevent_isbase = false;
    mutable bool qgraphicsitem_contextmenuevent_isbase = false;
    mutable bool qgraphicsitem_dragenterevent_isbase = false;
    mutable bool qgraphicsitem_dragleaveevent_isbase = false;
    mutable bool qgraphicsitem_dragmoveevent_isbase = false;
    mutable bool qgraphicsitem_dropevent_isbase = false;
    mutable bool qgraphicsitem_focusinevent_isbase = false;
    mutable bool qgraphicsitem_focusoutevent_isbase = false;
    mutable bool qgraphicsitem_hoverenterevent_isbase = false;
    mutable bool qgraphicsitem_hovermoveevent_isbase = false;
    mutable bool qgraphicsitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicsitem_keypressevent_isbase = false;
    mutable bool qgraphicsitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicsitem_mousepressevent_isbase = false;
    mutable bool qgraphicsitem_mousemoveevent_isbase = false;
    mutable bool qgraphicsitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicsitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsitem_wheelevent_isbase = false;
    mutable bool qgraphicsitem_inputmethodevent_isbase = false;
    mutable bool qgraphicsitem_inputmethodquery_isbase = false;
    mutable bool qgraphicsitem_itemchange_isbase = false;
    mutable bool qgraphicsitem_supportsextension_isbase = false;
    mutable bool qgraphicsitem_setextension_isbase = false;
    mutable bool qgraphicsitem_extension_isbase = false;
    mutable bool qgraphicsitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicsitem_addtoindex_isbase = false;
    mutable bool qgraphicsitem_removefromindex_isbase = false;
    mutable bool qgraphicsitem_preparegeometrychange_isbase = false;

public:
	VirtualQGraphicsItem(): QGraphicsItem() {};
	VirtualQGraphicsItem(QGraphicsItem* parent): QGraphicsItem(parent) {};

	~VirtualQGraphicsItem() {
		qgraphicsitem_advance_callback = nullptr;
		qgraphicsitem_boundingrect_callback = nullptr;
		qgraphicsitem_shape_callback = nullptr;
		qgraphicsitem_contains_callback = nullptr;
		qgraphicsitem_collideswithitem_callback = nullptr;
		qgraphicsitem_collideswithpath_callback = nullptr;
		qgraphicsitem_isobscuredby_callback = nullptr;
		qgraphicsitem_opaquearea_callback = nullptr;
		qgraphicsitem_paint_callback = nullptr;
		qgraphicsitem_type_callback = nullptr;
		qgraphicsitem_sceneeventfilter_callback = nullptr;
		qgraphicsitem_sceneevent_callback = nullptr;
		qgraphicsitem_contextmenuevent_callback = nullptr;
		qgraphicsitem_dragenterevent_callback = nullptr;
		qgraphicsitem_dragleaveevent_callback = nullptr;
		qgraphicsitem_dragmoveevent_callback = nullptr;
		qgraphicsitem_dropevent_callback = nullptr;
		qgraphicsitem_focusinevent_callback = nullptr;
		qgraphicsitem_focusoutevent_callback = nullptr;
		qgraphicsitem_hoverenterevent_callback = nullptr;
		qgraphicsitem_hovermoveevent_callback = nullptr;
		qgraphicsitem_hoverleaveevent_callback = nullptr;
		qgraphicsitem_keypressevent_callback = nullptr;
		qgraphicsitem_keyreleaseevent_callback = nullptr;
		qgraphicsitem_mousepressevent_callback = nullptr;
		qgraphicsitem_mousemoveevent_callback = nullptr;
		qgraphicsitem_mousereleaseevent_callback = nullptr;
		qgraphicsitem_mousedoubleclickevent_callback = nullptr;
		qgraphicsitem_wheelevent_callback = nullptr;
		qgraphicsitem_inputmethodevent_callback = nullptr;
		qgraphicsitem_inputmethodquery_callback = nullptr;
		qgraphicsitem_itemchange_callback = nullptr;
		qgraphicsitem_supportsextension_callback = nullptr;
		qgraphicsitem_setextension_callback = nullptr;
		qgraphicsitem_extension_callback = nullptr;
		qgraphicsitem_updatemicrofocus_callback = nullptr;
		qgraphicsitem_addtoindex_callback = nullptr;
		qgraphicsitem_removefromindex_callback = nullptr;
		qgraphicsitem_preparegeometrychange_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsItem_Advance_Callback(QGraphicsItem_Advance_Callback cb) const { qgraphicsitem_advance_callback = cb; }
	inline void setQGraphicsItem_BoundingRect_Callback(QGraphicsItem_BoundingRect_Callback cb) const { qgraphicsitem_boundingrect_callback = cb; }
	inline void setQGraphicsItem_Shape_Callback(QGraphicsItem_Shape_Callback cb) const { qgraphicsitem_shape_callback = cb; }
	inline void setQGraphicsItem_Contains_Callback(QGraphicsItem_Contains_Callback cb) const { qgraphicsitem_contains_callback = cb; }
	inline void setQGraphicsItem_CollidesWithItem_Callback(QGraphicsItem_CollidesWithItem_Callback cb) const { qgraphicsitem_collideswithitem_callback = cb; }
	inline void setQGraphicsItem_CollidesWithPath_Callback(QGraphicsItem_CollidesWithPath_Callback cb) const { qgraphicsitem_collideswithpath_callback = cb; }
	inline void setQGraphicsItem_IsObscuredBy_Callback(QGraphicsItem_IsObscuredBy_Callback cb) const { qgraphicsitem_isobscuredby_callback = cb; }
	inline void setQGraphicsItem_OpaqueArea_Callback(QGraphicsItem_OpaqueArea_Callback cb) const { qgraphicsitem_opaquearea_callback = cb; }
	inline void setQGraphicsItem_Paint_Callback(QGraphicsItem_Paint_Callback cb) const { qgraphicsitem_paint_callback = cb; }
	inline void setQGraphicsItem_Type_Callback(QGraphicsItem_Type_Callback cb) const { qgraphicsitem_type_callback = cb; }
	inline void setQGraphicsItem_SceneEventFilter_Callback(QGraphicsItem_SceneEventFilter_Callback cb) const { qgraphicsitem_sceneeventfilter_callback = cb; }
	inline void setQGraphicsItem_SceneEvent_Callback(QGraphicsItem_SceneEvent_Callback cb) const { qgraphicsitem_sceneevent_callback = cb; }
	inline void setQGraphicsItem_ContextMenuEvent_Callback(QGraphicsItem_ContextMenuEvent_Callback cb) const { qgraphicsitem_contextmenuevent_callback = cb; }
	inline void setQGraphicsItem_DragEnterEvent_Callback(QGraphicsItem_DragEnterEvent_Callback cb) const { qgraphicsitem_dragenterevent_callback = cb; }
	inline void setQGraphicsItem_DragLeaveEvent_Callback(QGraphicsItem_DragLeaveEvent_Callback cb) const { qgraphicsitem_dragleaveevent_callback = cb; }
	inline void setQGraphicsItem_DragMoveEvent_Callback(QGraphicsItem_DragMoveEvent_Callback cb) const { qgraphicsitem_dragmoveevent_callback = cb; }
	inline void setQGraphicsItem_DropEvent_Callback(QGraphicsItem_DropEvent_Callback cb) const { qgraphicsitem_dropevent_callback = cb; }
	inline void setQGraphicsItem_FocusInEvent_Callback(QGraphicsItem_FocusInEvent_Callback cb) const { qgraphicsitem_focusinevent_callback = cb; }
	inline void setQGraphicsItem_FocusOutEvent_Callback(QGraphicsItem_FocusOutEvent_Callback cb) const { qgraphicsitem_focusoutevent_callback = cb; }
	inline void setQGraphicsItem_HoverEnterEvent_Callback(QGraphicsItem_HoverEnterEvent_Callback cb) const { qgraphicsitem_hoverenterevent_callback = cb; }
	inline void setQGraphicsItem_HoverMoveEvent_Callback(QGraphicsItem_HoverMoveEvent_Callback cb) const { qgraphicsitem_hovermoveevent_callback = cb; }
	inline void setQGraphicsItem_HoverLeaveEvent_Callback(QGraphicsItem_HoverLeaveEvent_Callback cb) const { qgraphicsitem_hoverleaveevent_callback = cb; }
	inline void setQGraphicsItem_KeyPressEvent_Callback(QGraphicsItem_KeyPressEvent_Callback cb) const { qgraphicsitem_keypressevent_callback = cb; }
	inline void setQGraphicsItem_KeyReleaseEvent_Callback(QGraphicsItem_KeyReleaseEvent_Callback cb) const { qgraphicsitem_keyreleaseevent_callback = cb; }
	inline void setQGraphicsItem_MousePressEvent_Callback(QGraphicsItem_MousePressEvent_Callback cb) const { qgraphicsitem_mousepressevent_callback = cb; }
	inline void setQGraphicsItem_MouseMoveEvent_Callback(QGraphicsItem_MouseMoveEvent_Callback cb) const { qgraphicsitem_mousemoveevent_callback = cb; }
	inline void setQGraphicsItem_MouseReleaseEvent_Callback(QGraphicsItem_MouseReleaseEvent_Callback cb) const { qgraphicsitem_mousereleaseevent_callback = cb; }
	inline void setQGraphicsItem_MouseDoubleClickEvent_Callback(QGraphicsItem_MouseDoubleClickEvent_Callback cb) const { qgraphicsitem_mousedoubleclickevent_callback = cb; }
	inline void setQGraphicsItem_WheelEvent_Callback(QGraphicsItem_WheelEvent_Callback cb) const { qgraphicsitem_wheelevent_callback = cb; }
	inline void setQGraphicsItem_InputMethodEvent_Callback(QGraphicsItem_InputMethodEvent_Callback cb) const { qgraphicsitem_inputmethodevent_callback = cb; }
	inline void setQGraphicsItem_InputMethodQuery_Callback(QGraphicsItem_InputMethodQuery_Callback cb) const { qgraphicsitem_inputmethodquery_callback = cb; }
	inline void setQGraphicsItem_ItemChange_Callback(QGraphicsItem_ItemChange_Callback cb) const { qgraphicsitem_itemchange_callback = cb; }
	inline void setQGraphicsItem_SupportsExtension_Callback(QGraphicsItem_SupportsExtension_Callback cb) const { qgraphicsitem_supportsextension_callback = cb; }
	inline void setQGraphicsItem_SetExtension_Callback(QGraphicsItem_SetExtension_Callback cb) const { qgraphicsitem_setextension_callback = cb; }
	inline void setQGraphicsItem_Extension_Callback(QGraphicsItem_Extension_Callback cb) const { qgraphicsitem_extension_callback = cb; }
	inline void setQGraphicsItem_UpdateMicroFocus_Callback(QGraphicsItem_UpdateMicroFocus_Callback cb) const { qgraphicsitem_updatemicrofocus_callback = cb; }
	inline void setQGraphicsItem_AddToIndex_Callback(QGraphicsItem_AddToIndex_Callback cb) const { qgraphicsitem_addtoindex_callback = cb; }
	inline void setQGraphicsItem_RemoveFromIndex_Callback(QGraphicsItem_RemoveFromIndex_Callback cb) const { qgraphicsitem_removefromindex_callback = cb; }
	inline void setQGraphicsItem_PrepareGeometryChange_Callback(QGraphicsItem_PrepareGeometryChange_Callback cb) const { qgraphicsitem_preparegeometrychange_callback = cb; }

// Base flag setters
	inline void setQGraphicsItem_Advance_IsBase(bool value) const { qgraphicsitem_advance_isbase = value; }
	inline void setQGraphicsItem_BoundingRect_IsBase(bool value) const { qgraphicsitem_boundingrect_isbase = value; }
	inline void setQGraphicsItem_Shape_IsBase(bool value) const { qgraphicsitem_shape_isbase = value; }
	inline void setQGraphicsItem_Contains_IsBase(bool value) const { qgraphicsitem_contains_isbase = value; }
	inline void setQGraphicsItem_CollidesWithItem_IsBase(bool value) const { qgraphicsitem_collideswithitem_isbase = value; }
	inline void setQGraphicsItem_CollidesWithPath_IsBase(bool value) const { qgraphicsitem_collideswithpath_isbase = value; }
	inline void setQGraphicsItem_IsObscuredBy_IsBase(bool value) const { qgraphicsitem_isobscuredby_isbase = value; }
	inline void setQGraphicsItem_OpaqueArea_IsBase(bool value) const { qgraphicsitem_opaquearea_isbase = value; }
	inline void setQGraphicsItem_Paint_IsBase(bool value) const { qgraphicsitem_paint_isbase = value; }
	inline void setQGraphicsItem_Type_IsBase(bool value) const { qgraphicsitem_type_isbase = value; }
	inline void setQGraphicsItem_SceneEventFilter_IsBase(bool value) const { qgraphicsitem_sceneeventfilter_isbase = value; }
	inline void setQGraphicsItem_SceneEvent_IsBase(bool value) const { qgraphicsitem_sceneevent_isbase = value; }
	inline void setQGraphicsItem_ContextMenuEvent_IsBase(bool value) const { qgraphicsitem_contextmenuevent_isbase = value; }
	inline void setQGraphicsItem_DragEnterEvent_IsBase(bool value) const { qgraphicsitem_dragenterevent_isbase = value; }
	inline void setQGraphicsItem_DragLeaveEvent_IsBase(bool value) const { qgraphicsitem_dragleaveevent_isbase = value; }
	inline void setQGraphicsItem_DragMoveEvent_IsBase(bool value) const { qgraphicsitem_dragmoveevent_isbase = value; }
	inline void setQGraphicsItem_DropEvent_IsBase(bool value) const { qgraphicsitem_dropevent_isbase = value; }
	inline void setQGraphicsItem_FocusInEvent_IsBase(bool value) const { qgraphicsitem_focusinevent_isbase = value; }
	inline void setQGraphicsItem_FocusOutEvent_IsBase(bool value) const { qgraphicsitem_focusoutevent_isbase = value; }
	inline void setQGraphicsItem_HoverEnterEvent_IsBase(bool value) const { qgraphicsitem_hoverenterevent_isbase = value; }
	inline void setQGraphicsItem_HoverMoveEvent_IsBase(bool value) const { qgraphicsitem_hovermoveevent_isbase = value; }
	inline void setQGraphicsItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicsitem_hoverleaveevent_isbase = value; }
	inline void setQGraphicsItem_KeyPressEvent_IsBase(bool value) const { qgraphicsitem_keypressevent_isbase = value; }
	inline void setQGraphicsItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicsitem_keyreleaseevent_isbase = value; }
	inline void setQGraphicsItem_MousePressEvent_IsBase(bool value) const { qgraphicsitem_mousepressevent_isbase = value; }
	inline void setQGraphicsItem_MouseMoveEvent_IsBase(bool value) const { qgraphicsitem_mousemoveevent_isbase = value; }
	inline void setQGraphicsItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicsitem_mousereleaseevent_isbase = value; }
	inline void setQGraphicsItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsitem_mousedoubleclickevent_isbase = value; }
	inline void setQGraphicsItem_WheelEvent_IsBase(bool value) const { qgraphicsitem_wheelevent_isbase = value; }
	inline void setQGraphicsItem_InputMethodEvent_IsBase(bool value) const { qgraphicsitem_inputmethodevent_isbase = value; }
	inline void setQGraphicsItem_InputMethodQuery_IsBase(bool value) const { qgraphicsitem_inputmethodquery_isbase = value; }
	inline void setQGraphicsItem_ItemChange_IsBase(bool value) const { qgraphicsitem_itemchange_isbase = value; }
	inline void setQGraphicsItem_SupportsExtension_IsBase(bool value) const { qgraphicsitem_supportsextension_isbase = value; }
	inline void setQGraphicsItem_SetExtension_IsBase(bool value) const { qgraphicsitem_setextension_isbase = value; }
	inline void setQGraphicsItem_Extension_IsBase(bool value) const { qgraphicsitem_extension_isbase = value; }
	inline void setQGraphicsItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicsitem_updatemicrofocus_isbase = value; }
	inline void setQGraphicsItem_AddToIndex_IsBase(bool value) const { qgraphicsitem_addtoindex_isbase = value; }
	inline void setQGraphicsItem_RemoveFromIndex_IsBase(bool value) const { qgraphicsitem_removefromindex_isbase = value; }
	inline void setQGraphicsItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicsitem_preparegeometrychange_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void advance(int phase) override {
		if (qgraphicsitem_advance_isbase) {
			qgraphicsitem_advance_isbase = false;
			QGraphicsItem::advance(phase);
		} else if (qgraphicsitem_advance_callback != nullptr) {
			int cbval1 = phase;
			qgraphicsitem_advance_callback(this, cbval1);
		} else {
			QGraphicsItem::advance(phase);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicsitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicsitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicsitem_shape_isbase) {
			qgraphicsitem_shape_isbase = false;
			return QGraphicsItem::shape();
		} else if (qgraphicsitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicsitem_contains_isbase) {
			qgraphicsitem_contains_isbase = false;
			return QGraphicsItem::contains(point);
		} else if (qgraphicsitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicsitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (qgraphicsitem_collideswithitem_isbase) {
			qgraphicsitem_collideswithitem_isbase = false;
			return QGraphicsItem::collidesWithItem(other, mode);
		} else if (qgraphicsitem_collideswithitem_callback != nullptr) {
			const QGraphicsItem* cbval1 = other;
			int cbval2 = static_cast<int>(mode);
			bool callback_ret = qgraphicsitem_collideswithitem_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGraphicsItem::collidesWithItem(other, mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (qgraphicsitem_collideswithpath_isbase) {
			qgraphicsitem_collideswithpath_isbase = false;
			return QGraphicsItem::collidesWithPath(path, mode);
		} else if (qgraphicsitem_collideswithpath_callback != nullptr) {
			const QPainterPath* cbval1 = (const QPainterPath*)&path;
			int cbval2 = static_cast<int>(mode);
			bool callback_ret = qgraphicsitem_collideswithpath_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGraphicsItem::collidesWithPath(path, mode);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicsitem_isobscuredby_isbase) {
			qgraphicsitem_isobscuredby_isbase = false;
			return QGraphicsItem::isObscuredBy(item);
		} else if (qgraphicsitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicsitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicsitem_opaquearea_isbase) {
			qgraphicsitem_opaquearea_isbase = false;
			return QGraphicsItem::opaqueArea();
		} else if (qgraphicsitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicsitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicsitem_paint_callback(this, cbval1, cbval2, cbval3);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicsitem_type_isbase) {
			qgraphicsitem_type_isbase = false;
			return QGraphicsItem::type();
		} else if (qgraphicsitem_type_callback != nullptr) {
			int callback_ret = qgraphicsitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (qgraphicsitem_sceneeventfilter_isbase) {
			qgraphicsitem_sceneeventfilter_isbase = false;
			return QGraphicsItem::sceneEventFilter(watched, event);
		} else if (qgraphicsitem_sceneeventfilter_callback != nullptr) {
			QGraphicsItem* cbval1 = watched;
			QEvent* cbval2 = event;
			bool callback_ret = qgraphicsitem_sceneeventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QGraphicsItem::sceneEventFilter(watched, event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool sceneEvent(QEvent* event) override {
		if (qgraphicsitem_sceneevent_isbase) {
			qgraphicsitem_sceneevent_isbase = false;
			return QGraphicsItem::sceneEvent(event);
		} else if (qgraphicsitem_sceneevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicsitem_sceneevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsItem::sceneEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (qgraphicsitem_contextmenuevent_isbase) {
			qgraphicsitem_contextmenuevent_isbase = false;
			QGraphicsItem::contextMenuEvent(event);
		} else if (qgraphicsitem_contextmenuevent_callback != nullptr) {
			QGraphicsSceneContextMenuEvent* cbval1 = event;
			qgraphicsitem_contextmenuevent_callback(this, cbval1);
		} else {
			QGraphicsItem::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsitem_dragenterevent_isbase) {
			qgraphicsitem_dragenterevent_isbase = false;
			QGraphicsItem::dragEnterEvent(event);
		} else if (qgraphicsitem_dragenterevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsitem_dragenterevent_callback(this, cbval1);
		} else {
			QGraphicsItem::dragEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsitem_dragleaveevent_isbase) {
			qgraphicsitem_dragleaveevent_isbase = false;
			QGraphicsItem::dragLeaveEvent(event);
		} else if (qgraphicsitem_dragleaveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsitem_dragleaveevent_callback(this, cbval1);
		} else {
			QGraphicsItem::dragLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsitem_dragmoveevent_isbase) {
			qgraphicsitem_dragmoveevent_isbase = false;
			QGraphicsItem::dragMoveEvent(event);
		} else if (qgraphicsitem_dragmoveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsitem_dragmoveevent_callback(this, cbval1);
		} else {
			QGraphicsItem::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicsitem_dropevent_isbase) {
			qgraphicsitem_dropevent_isbase = false;
			QGraphicsItem::dropEvent(event);
		} else if (qgraphicsitem_dropevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicsitem_dropevent_callback(this, cbval1);
		} else {
			QGraphicsItem::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgraphicsitem_focusinevent_isbase) {
			qgraphicsitem_focusinevent_isbase = false;
			QGraphicsItem::focusInEvent(event);
		} else if (qgraphicsitem_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsitem_focusinevent_callback(this, cbval1);
		} else {
			QGraphicsItem::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qgraphicsitem_focusoutevent_isbase) {
			qgraphicsitem_focusoutevent_isbase = false;
			QGraphicsItem::focusOutEvent(event);
		} else if (qgraphicsitem_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicsitem_focusoutevent_callback(this, cbval1);
		} else {
			QGraphicsItem::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsitem_hoverenterevent_isbase) {
			qgraphicsitem_hoverenterevent_isbase = false;
			QGraphicsItem::hoverEnterEvent(event);
		} else if (qgraphicsitem_hoverenterevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsitem_hoverenterevent_callback(this, cbval1);
		} else {
			QGraphicsItem::hoverEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsitem_hovermoveevent_isbase) {
			qgraphicsitem_hovermoveevent_isbase = false;
			QGraphicsItem::hoverMoveEvent(event);
		} else if (qgraphicsitem_hovermoveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsitem_hovermoveevent_callback(this, cbval1);
		} else {
			QGraphicsItem::hoverMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicsitem_hoverleaveevent_isbase) {
			qgraphicsitem_hoverleaveevent_isbase = false;
			QGraphicsItem::hoverLeaveEvent(event);
		} else if (qgraphicsitem_hoverleaveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicsitem_hoverleaveevent_callback(this, cbval1);
		} else {
			QGraphicsItem::hoverLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qgraphicsitem_keypressevent_isbase) {
			qgraphicsitem_keypressevent_isbase = false;
			QGraphicsItem::keyPressEvent(event);
		} else if (qgraphicsitem_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsitem_keypressevent_callback(this, cbval1);
		} else {
			QGraphicsItem::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (qgraphicsitem_keyreleaseevent_isbase) {
			qgraphicsitem_keyreleaseevent_isbase = false;
			QGraphicsItem::keyReleaseEvent(event);
		} else if (qgraphicsitem_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicsitem_keyreleaseevent_callback(this, cbval1);
		} else {
			QGraphicsItem::keyReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsitem_mousepressevent_isbase) {
			qgraphicsitem_mousepressevent_isbase = false;
			QGraphicsItem::mousePressEvent(event);
		} else if (qgraphicsitem_mousepressevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsitem_mousepressevent_callback(this, cbval1);
		} else {
			QGraphicsItem::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsitem_mousemoveevent_isbase) {
			qgraphicsitem_mousemoveevent_isbase = false;
			QGraphicsItem::mouseMoveEvent(event);
		} else if (qgraphicsitem_mousemoveevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsitem_mousemoveevent_callback(this, cbval1);
		} else {
			QGraphicsItem::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsitem_mousereleaseevent_isbase) {
			qgraphicsitem_mousereleaseevent_isbase = false;
			QGraphicsItem::mouseReleaseEvent(event);
		} else if (qgraphicsitem_mousereleaseevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsitem_mousereleaseevent_callback(this, cbval1);
		} else {
			QGraphicsItem::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicsitem_mousedoubleclickevent_isbase) {
			qgraphicsitem_mousedoubleclickevent_isbase = false;
			QGraphicsItem::mouseDoubleClickEvent(event);
		} else if (qgraphicsitem_mousedoubleclickevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicsitem_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QGraphicsItem::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (qgraphicsitem_wheelevent_isbase) {
			qgraphicsitem_wheelevent_isbase = false;
			QGraphicsItem::wheelEvent(event);
		} else if (qgraphicsitem_wheelevent_callback != nullptr) {
			QGraphicsSceneWheelEvent* cbval1 = event;
			qgraphicsitem_wheelevent_callback(this, cbval1);
		} else {
			QGraphicsItem::wheelEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (qgraphicsitem_inputmethodevent_isbase) {
			qgraphicsitem_inputmethodevent_isbase = false;
			QGraphicsItem::inputMethodEvent(event);
		} else if (qgraphicsitem_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = event;
			qgraphicsitem_inputmethodevent_callback(this, cbval1);
		} else {
			QGraphicsItem::inputMethodEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (qgraphicsitem_inputmethodquery_isbase) {
			qgraphicsitem_inputmethodquery_isbase = false;
			return QGraphicsItem::inputMethodQuery(query);
		} else if (qgraphicsitem_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(query);
			QVariant* callback_ret = qgraphicsitem_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsItem::inputMethodQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant itemChange(GraphicsItemChange change, const QVariant& value) override {
		if (qgraphicsitem_itemchange_isbase) {
			qgraphicsitem_itemchange_isbase = false;
			return QGraphicsItem::itemChange(change, value);
		} else if (qgraphicsitem_itemchange_callback != nullptr) {
			int cbval1 = static_cast<int>(change);
			const QVariant* cbval2 = (const QVariant*)&value;
			QVariant* callback_ret = qgraphicsitem_itemchange_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsItem::itemChange(change, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicsitem_supportsextension_isbase) {
			qgraphicsitem_supportsextension_isbase = false;
			return QGraphicsItem::supportsExtension(extension);
		} else if (qgraphicsitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicsitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicsitem_setextension_isbase) {
			qgraphicsitem_setextension_isbase = false;
			QGraphicsItem::setExtension(extension, variant);
		} else if (qgraphicsitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicsitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicsitem_extension_isbase) {
			qgraphicsitem_extension_isbase = false;
			return QGraphicsItem::extension(variant);
		} else if (qgraphicsitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicsitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsItem::extension(variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateMicroFocus() {
		if (qgraphicsitem_updatemicrofocus_isbase) {
			qgraphicsitem_updatemicrofocus_isbase = false;
			QGraphicsItem::updateMicroFocus();
		} else if (qgraphicsitem_updatemicrofocus_callback != nullptr) {
			qgraphicsitem_updatemicrofocus_callback();
		} else {
			QGraphicsItem::updateMicroFocus();
		}
	}

	// Virtual method for C ABI access and custom callback
	void addToIndex() {
		if (qgraphicsitem_addtoindex_isbase) {
			qgraphicsitem_addtoindex_isbase = false;
			QGraphicsItem::addToIndex();
		} else if (qgraphicsitem_addtoindex_callback != nullptr) {
			qgraphicsitem_addtoindex_callback();
		} else {
			QGraphicsItem::addToIndex();
		}
	}

	// Virtual method for C ABI access and custom callback
	void removeFromIndex() {
		if (qgraphicsitem_removefromindex_isbase) {
			qgraphicsitem_removefromindex_isbase = false;
			QGraphicsItem::removeFromIndex();
		} else if (qgraphicsitem_removefromindex_callback != nullptr) {
			qgraphicsitem_removefromindex_callback();
		} else {
			QGraphicsItem::removeFromIndex();
		}
	}

	// Virtual method for C ABI access and custom callback
	void prepareGeometryChange() {
		if (qgraphicsitem_preparegeometrychange_isbase) {
			qgraphicsitem_preparegeometrychange_isbase = false;
			QGraphicsItem::prepareGeometryChange();
		} else if (qgraphicsitem_preparegeometrychange_callback != nullptr) {
			qgraphicsitem_preparegeometrychange_callback();
		} else {
			QGraphicsItem::prepareGeometryChange();
		}
	}

	// Friend functions
	friend bool QGraphicsItem_SceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event);
	friend bool QGraphicsItem_QBaseSceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event);
	friend bool QGraphicsItem_SceneEvent(QGraphicsItem* self, QEvent* event);
	friend bool QGraphicsItem_QBaseSceneEvent(QGraphicsItem* self, QEvent* event);
	friend void QGraphicsItem_ContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsItem_QBaseContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsItem_DragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_QBaseDragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_DragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_QBaseDragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_DragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_QBaseDragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_DropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_QBaseDropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsItem_FocusInEvent(QGraphicsItem* self, QFocusEvent* event);
	friend void QGraphicsItem_QBaseFocusInEvent(QGraphicsItem* self, QFocusEvent* event);
	friend void QGraphicsItem_FocusOutEvent(QGraphicsItem* self, QFocusEvent* event);
	friend void QGraphicsItem_QBaseFocusOutEvent(QGraphicsItem* self, QFocusEvent* event);
	friend void QGraphicsItem_HoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_QBaseHoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_HoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_QBaseHoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_HoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_QBaseHoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsItem_KeyPressEvent(QGraphicsItem* self, QKeyEvent* event);
	friend void QGraphicsItem_QBaseKeyPressEvent(QGraphicsItem* self, QKeyEvent* event);
	friend void QGraphicsItem_KeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event);
	friend void QGraphicsItem_QBaseKeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event);
	friend void QGraphicsItem_MousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_QBaseMousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_MouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_QBaseMouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_MouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_QBaseMouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_MouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_QBaseMouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsItem_WheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event);
	friend void QGraphicsItem_QBaseWheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event);
	friend void QGraphicsItem_InputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event);
	friend void QGraphicsItem_QBaseInputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event);
	friend QVariant* QGraphicsItem_InputMethodQuery(const QGraphicsItem* self, int query);
	friend QVariant* QGraphicsItem_QBaseInputMethodQuery(const QGraphicsItem* self, int query);
	friend QVariant* QGraphicsItem_ItemChange(QGraphicsItem* self, int change, const QVariant* value);
	friend QVariant* QGraphicsItem_QBaseItemChange(QGraphicsItem* self, int change, const QVariant* value);
	friend bool QGraphicsItem_SupportsExtension(const QGraphicsItem* self, int extension);
	friend bool QGraphicsItem_QBaseSupportsExtension(const QGraphicsItem* self, int extension);
	friend void QGraphicsItem_SetExtension(QGraphicsItem* self, int extension, const QVariant* variant);
	friend void QGraphicsItem_QBaseSetExtension(QGraphicsItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsItem_Extension(const QGraphicsItem* self, const QVariant* variant);
	friend QVariant* QGraphicsItem_QBaseExtension(const QGraphicsItem* self, const QVariant* variant);
	friend void QGraphicsItem_UpdateMicroFocus(QGraphicsItem* self);
	friend void QGraphicsItem_QBaseUpdateMicroFocus(QGraphicsItem* self);
	friend void QGraphicsItem_AddToIndex(QGraphicsItem* self);
	friend void QGraphicsItem_QBaseAddToIndex(QGraphicsItem* self);
	friend void QGraphicsItem_RemoveFromIndex(QGraphicsItem* self);
	friend void QGraphicsItem_QBaseRemoveFromIndex(QGraphicsItem* self);
	friend void QGraphicsItem_PrepareGeometryChange(QGraphicsItem* self);
	friend void QGraphicsItem_QBasePrepareGeometryChange(QGraphicsItem* self);
};

// This class is a subclass of QGraphicsObject so that we can call protected methods
class VirtualQGraphicsObject : public QGraphicsObject {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsObject= true;

	// Virtual class public types (including callbacks)
	using QGraphicsObject_Event_Callback = bool (*)(QGraphicsObject*, QEvent*);
	using QGraphicsObject_UpdateMicroFocus_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QGraphicsObject_Event_Callback qgraphicsobject_event_callback = nullptr;
	mutable QGraphicsObject_UpdateMicroFocus_Callback qgraphicsobject_updatemicrofocus_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsobject_event_isbase = false;
    mutable bool qgraphicsobject_updatemicrofocus_isbase = false;

public:
	VirtualQGraphicsObject(): QGraphicsObject() {};
	VirtualQGraphicsObject(QGraphicsItem* parent): QGraphicsObject(parent) {};

	~VirtualQGraphicsObject() {
		qgraphicsobject_event_callback = nullptr;
		qgraphicsobject_updatemicrofocus_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsObject_Event_Callback(QGraphicsObject_Event_Callback cb) const { qgraphicsobject_event_callback = cb; }
	inline void setQGraphicsObject_UpdateMicroFocus_Callback(QGraphicsObject_UpdateMicroFocus_Callback cb) const { qgraphicsobject_updatemicrofocus_callback = cb; }

// Base flag setters
	inline void setQGraphicsObject_Event_IsBase(bool value) const { qgraphicsobject_event_isbase = value; }
	inline void setQGraphicsObject_UpdateMicroFocus_IsBase(bool value) const { qgraphicsobject_updatemicrofocus_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* ev) override {
		if (qgraphicsobject_event_isbase) {
			qgraphicsobject_event_isbase = false;
			return QGraphicsObject::event(ev);
		} else if (qgraphicsobject_event_callback != nullptr) {
			QEvent* cbval1 = ev;
			bool callback_ret = qgraphicsobject_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsObject::event(ev);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateMicroFocus() {
		if (qgraphicsobject_updatemicrofocus_isbase) {
			qgraphicsobject_updatemicrofocus_isbase = false;
			QGraphicsObject::updateMicroFocus();
		} else if (qgraphicsobject_updatemicrofocus_callback != nullptr) {
			qgraphicsobject_updatemicrofocus_callback();
		} else {
			QGraphicsObject::updateMicroFocus();
		}
	}

	// Friend functions
	friend bool QGraphicsObject_Event(QGraphicsObject* self, QEvent* ev);
	friend bool QGraphicsObject_QBaseEvent(QGraphicsObject* self, QEvent* ev);
	friend void QGraphicsObject_UpdateMicroFocus(QGraphicsObject* self);
	friend void QGraphicsObject_QBaseUpdateMicroFocus(QGraphicsObject* self);
};

// This class is a subclass of QAbstractGraphicsShapeItem so that we can call protected methods
class VirtualQAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractGraphicsShapeItem= true;

	// Virtual class public types (including callbacks)
	using QAbstractGraphicsShapeItem_IsObscuredBy_Callback = bool (*)(const QAbstractGraphicsShapeItem*, const QGraphicsItem*);
	using QAbstractGraphicsShapeItem_OpaqueArea_Callback = QPainterPath* (*)();

protected:
	// Instance callback storage
	mutable QAbstractGraphicsShapeItem_IsObscuredBy_Callback qabstractgraphicsshapeitem_isobscuredby_callback = nullptr;
	mutable QAbstractGraphicsShapeItem_OpaqueArea_Callback qabstractgraphicsshapeitem_opaquearea_callback = nullptr;

	// Instance base flags
    mutable bool qabstractgraphicsshapeitem_isobscuredby_isbase = false;
    mutable bool qabstractgraphicsshapeitem_opaquearea_isbase = false;

public:
	VirtualQAbstractGraphicsShapeItem(): QAbstractGraphicsShapeItem() {};
	VirtualQAbstractGraphicsShapeItem(QGraphicsItem* parent): QAbstractGraphicsShapeItem(parent) {};

	~VirtualQAbstractGraphicsShapeItem() {
		qabstractgraphicsshapeitem_isobscuredby_callback = nullptr;
		qabstractgraphicsshapeitem_opaquearea_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractGraphicsShapeItem_IsObscuredBy_Callback(QAbstractGraphicsShapeItem_IsObscuredBy_Callback cb) const { qabstractgraphicsshapeitem_isobscuredby_callback = cb; }
	inline void setQAbstractGraphicsShapeItem_OpaqueArea_Callback(QAbstractGraphicsShapeItem_OpaqueArea_Callback cb) const { qabstractgraphicsshapeitem_opaquearea_callback = cb; }

// Base flag setters
	inline void setQAbstractGraphicsShapeItem_IsObscuredBy_IsBase(bool value) const { qabstractgraphicsshapeitem_isobscuredby_isbase = value; }
	inline void setQAbstractGraphicsShapeItem_OpaqueArea_IsBase(bool value) const { qabstractgraphicsshapeitem_opaquearea_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qabstractgraphicsshapeitem_isobscuredby_isbase) {
			qabstractgraphicsshapeitem_isobscuredby_isbase = false;
			return QAbstractGraphicsShapeItem::isObscuredBy(item);
		} else if (qabstractgraphicsshapeitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qabstractgraphicsshapeitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QAbstractGraphicsShapeItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qabstractgraphicsshapeitem_opaquearea_isbase) {
			qabstractgraphicsshapeitem_opaquearea_isbase = false;
			return QAbstractGraphicsShapeItem::opaqueArea();
		} else if (qabstractgraphicsshapeitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qabstractgraphicsshapeitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QAbstractGraphicsShapeItem::opaqueArea();
		}
	}
};

// This class is a subclass of QGraphicsPathItem so that we can call protected methods
class VirtualQGraphicsPathItem final : public QGraphicsPathItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsPathItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsPathItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsPathItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsPathItem_Contains_Callback = bool (*)(const QGraphicsPathItem*, const QPointF*);
	using QGraphicsPathItem_Paint_Callback = void (*)(QGraphicsPathItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsPathItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPathItem*, const QGraphicsItem*);
	using QGraphicsPathItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsPathItem_Type_Callback = int (*)();
	using QGraphicsPathItem_SupportsExtension_Callback = bool (*)(const QGraphicsPathItem*, int);
	using QGraphicsPathItem_SetExtension_Callback = void (*)(QGraphicsPathItem*, int, const QVariant*);
	using QGraphicsPathItem_Extension_Callback = QVariant* (*)(const QGraphicsPathItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsPathItem_BoundingRect_Callback qgraphicspathitem_boundingrect_callback = nullptr;
	mutable QGraphicsPathItem_Shape_Callback qgraphicspathitem_shape_callback = nullptr;
	mutable QGraphicsPathItem_Contains_Callback qgraphicspathitem_contains_callback = nullptr;
	mutable QGraphicsPathItem_Paint_Callback qgraphicspathitem_paint_callback = nullptr;
	mutable QGraphicsPathItem_IsObscuredBy_Callback qgraphicspathitem_isobscuredby_callback = nullptr;
	mutable QGraphicsPathItem_OpaqueArea_Callback qgraphicspathitem_opaquearea_callback = nullptr;
	mutable QGraphicsPathItem_Type_Callback qgraphicspathitem_type_callback = nullptr;
	mutable QGraphicsPathItem_SupportsExtension_Callback qgraphicspathitem_supportsextension_callback = nullptr;
	mutable QGraphicsPathItem_SetExtension_Callback qgraphicspathitem_setextension_callback = nullptr;
	mutable QGraphicsPathItem_Extension_Callback qgraphicspathitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicspathitem_boundingrect_isbase = false;
    mutable bool qgraphicspathitem_shape_isbase = false;
    mutable bool qgraphicspathitem_contains_isbase = false;
    mutable bool qgraphicspathitem_paint_isbase = false;
    mutable bool qgraphicspathitem_isobscuredby_isbase = false;
    mutable bool qgraphicspathitem_opaquearea_isbase = false;
    mutable bool qgraphicspathitem_type_isbase = false;
    mutable bool qgraphicspathitem_supportsextension_isbase = false;
    mutable bool qgraphicspathitem_setextension_isbase = false;
    mutable bool qgraphicspathitem_extension_isbase = false;

public:
	VirtualQGraphicsPathItem(): QGraphicsPathItem() {};
	VirtualQGraphicsPathItem(const QPainterPath& path): QGraphicsPathItem(path) {};
	VirtualQGraphicsPathItem(QGraphicsItem* parent): QGraphicsPathItem(parent) {};
	VirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent): QGraphicsPathItem(path, parent) {};

	~VirtualQGraphicsPathItem() {
		qgraphicspathitem_boundingrect_callback = nullptr;
		qgraphicspathitem_shape_callback = nullptr;
		qgraphicspathitem_contains_callback = nullptr;
		qgraphicspathitem_paint_callback = nullptr;
		qgraphicspathitem_isobscuredby_callback = nullptr;
		qgraphicspathitem_opaquearea_callback = nullptr;
		qgraphicspathitem_type_callback = nullptr;
		qgraphicspathitem_supportsextension_callback = nullptr;
		qgraphicspathitem_setextension_callback = nullptr;
		qgraphicspathitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsPathItem_BoundingRect_Callback(QGraphicsPathItem_BoundingRect_Callback cb) const { qgraphicspathitem_boundingrect_callback = cb; }
	inline void setQGraphicsPathItem_Shape_Callback(QGraphicsPathItem_Shape_Callback cb) const { qgraphicspathitem_shape_callback = cb; }
	inline void setQGraphicsPathItem_Contains_Callback(QGraphicsPathItem_Contains_Callback cb) const { qgraphicspathitem_contains_callback = cb; }
	inline void setQGraphicsPathItem_Paint_Callback(QGraphicsPathItem_Paint_Callback cb) const { qgraphicspathitem_paint_callback = cb; }
	inline void setQGraphicsPathItem_IsObscuredBy_Callback(QGraphicsPathItem_IsObscuredBy_Callback cb) const { qgraphicspathitem_isobscuredby_callback = cb; }
	inline void setQGraphicsPathItem_OpaqueArea_Callback(QGraphicsPathItem_OpaqueArea_Callback cb) const { qgraphicspathitem_opaquearea_callback = cb; }
	inline void setQGraphicsPathItem_Type_Callback(QGraphicsPathItem_Type_Callback cb) const { qgraphicspathitem_type_callback = cb; }
	inline void setQGraphicsPathItem_SupportsExtension_Callback(QGraphicsPathItem_SupportsExtension_Callback cb) const { qgraphicspathitem_supportsextension_callback = cb; }
	inline void setQGraphicsPathItem_SetExtension_Callback(QGraphicsPathItem_SetExtension_Callback cb) const { qgraphicspathitem_setextension_callback = cb; }
	inline void setQGraphicsPathItem_Extension_Callback(QGraphicsPathItem_Extension_Callback cb) const { qgraphicspathitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsPathItem_BoundingRect_IsBase(bool value) const { qgraphicspathitem_boundingrect_isbase = value; }
	inline void setQGraphicsPathItem_Shape_IsBase(bool value) const { qgraphicspathitem_shape_isbase = value; }
	inline void setQGraphicsPathItem_Contains_IsBase(bool value) const { qgraphicspathitem_contains_isbase = value; }
	inline void setQGraphicsPathItem_Paint_IsBase(bool value) const { qgraphicspathitem_paint_isbase = value; }
	inline void setQGraphicsPathItem_IsObscuredBy_IsBase(bool value) const { qgraphicspathitem_isobscuredby_isbase = value; }
	inline void setQGraphicsPathItem_OpaqueArea_IsBase(bool value) const { qgraphicspathitem_opaquearea_isbase = value; }
	inline void setQGraphicsPathItem_Type_IsBase(bool value) const { qgraphicspathitem_type_isbase = value; }
	inline void setQGraphicsPathItem_SupportsExtension_IsBase(bool value) const { qgraphicspathitem_supportsextension_isbase = value; }
	inline void setQGraphicsPathItem_SetExtension_IsBase(bool value) const { qgraphicspathitem_setextension_isbase = value; }
	inline void setQGraphicsPathItem_Extension_IsBase(bool value) const { qgraphicspathitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicspathitem_boundingrect_isbase) {
			qgraphicspathitem_boundingrect_isbase = false;
			return QGraphicsPathItem::boundingRect();
		} else if (qgraphicspathitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicspathitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsPathItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicspathitem_shape_isbase) {
			qgraphicspathitem_shape_isbase = false;
			return QGraphicsPathItem::shape();
		} else if (qgraphicspathitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspathitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsPathItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicspathitem_contains_isbase) {
			qgraphicspathitem_contains_isbase = false;
			return QGraphicsPathItem::contains(point);
		} else if (qgraphicspathitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicspathitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPathItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicspathitem_paint_isbase) {
			qgraphicspathitem_paint_isbase = false;
			QGraphicsPathItem::paint(painter, option, widget);
		} else if (qgraphicspathitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicspathitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsPathItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicspathitem_isobscuredby_isbase) {
			qgraphicspathitem_isobscuredby_isbase = false;
			return QGraphicsPathItem::isObscuredBy(item);
		} else if (qgraphicspathitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicspathitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPathItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicspathitem_opaquearea_isbase) {
			qgraphicspathitem_opaquearea_isbase = false;
			return QGraphicsPathItem::opaqueArea();
		} else if (qgraphicspathitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspathitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsPathItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicspathitem_type_isbase) {
			qgraphicspathitem_type_isbase = false;
			return QGraphicsPathItem::type();
		} else if (qgraphicspathitem_type_callback != nullptr) {
			int callback_ret = qgraphicspathitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsPathItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicspathitem_supportsextension_isbase) {
			qgraphicspathitem_supportsextension_isbase = false;
			return QGraphicsPathItem::supportsExtension(extension);
		} else if (qgraphicspathitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicspathitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPathItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicspathitem_setextension_isbase) {
			qgraphicspathitem_setextension_isbase = false;
			QGraphicsPathItem::setExtension(extension, variant);
		} else if (qgraphicspathitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicspathitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsPathItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicspathitem_extension_isbase) {
			qgraphicspathitem_extension_isbase = false;
			return QGraphicsPathItem::extension(variant);
		} else if (qgraphicspathitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicspathitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsPathItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsPathItem_SupportsExtension(const QGraphicsPathItem* self, int extension);
	friend bool QGraphicsPathItem_QBaseSupportsExtension(const QGraphicsPathItem* self, int extension);
	friend void QGraphicsPathItem_SetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant);
	friend void QGraphicsPathItem_QBaseSetExtension(QGraphicsPathItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsPathItem_Extension(const QGraphicsPathItem* self, const QVariant* variant);
	friend QVariant* QGraphicsPathItem_QBaseExtension(const QGraphicsPathItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsRectItem so that we can call protected methods
class VirtualQGraphicsRectItem final : public QGraphicsRectItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsRectItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsRectItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsRectItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsRectItem_Contains_Callback = bool (*)(const QGraphicsRectItem*, const QPointF*);
	using QGraphicsRectItem_Paint_Callback = void (*)(QGraphicsRectItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsRectItem_IsObscuredBy_Callback = bool (*)(const QGraphicsRectItem*, const QGraphicsItem*);
	using QGraphicsRectItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsRectItem_Type_Callback = int (*)();
	using QGraphicsRectItem_SupportsExtension_Callback = bool (*)(const QGraphicsRectItem*, int);
	using QGraphicsRectItem_SetExtension_Callback = void (*)(QGraphicsRectItem*, int, const QVariant*);
	using QGraphicsRectItem_Extension_Callback = QVariant* (*)(const QGraphicsRectItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsRectItem_BoundingRect_Callback qgraphicsrectitem_boundingrect_callback = nullptr;
	mutable QGraphicsRectItem_Shape_Callback qgraphicsrectitem_shape_callback = nullptr;
	mutable QGraphicsRectItem_Contains_Callback qgraphicsrectitem_contains_callback = nullptr;
	mutable QGraphicsRectItem_Paint_Callback qgraphicsrectitem_paint_callback = nullptr;
	mutable QGraphicsRectItem_IsObscuredBy_Callback qgraphicsrectitem_isobscuredby_callback = nullptr;
	mutable QGraphicsRectItem_OpaqueArea_Callback qgraphicsrectitem_opaquearea_callback = nullptr;
	mutable QGraphicsRectItem_Type_Callback qgraphicsrectitem_type_callback = nullptr;
	mutable QGraphicsRectItem_SupportsExtension_Callback qgraphicsrectitem_supportsextension_callback = nullptr;
	mutable QGraphicsRectItem_SetExtension_Callback qgraphicsrectitem_setextension_callback = nullptr;
	mutable QGraphicsRectItem_Extension_Callback qgraphicsrectitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsrectitem_boundingrect_isbase = false;
    mutable bool qgraphicsrectitem_shape_isbase = false;
    mutable bool qgraphicsrectitem_contains_isbase = false;
    mutable bool qgraphicsrectitem_paint_isbase = false;
    mutable bool qgraphicsrectitem_isobscuredby_isbase = false;
    mutable bool qgraphicsrectitem_opaquearea_isbase = false;
    mutable bool qgraphicsrectitem_type_isbase = false;
    mutable bool qgraphicsrectitem_supportsextension_isbase = false;
    mutable bool qgraphicsrectitem_setextension_isbase = false;
    mutable bool qgraphicsrectitem_extension_isbase = false;

public:
	VirtualQGraphicsRectItem(): QGraphicsRectItem() {};
	VirtualQGraphicsRectItem(const QRectF& rect): QGraphicsRectItem(rect) {};
	VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h): QGraphicsRectItem(x, y, w, h) {};
	VirtualQGraphicsRectItem(QGraphicsItem* parent): QGraphicsRectItem(parent) {};
	VirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsRectItem(rect, parent) {};
	VirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsRectItem(x, y, w, h, parent) {};

	~VirtualQGraphicsRectItem() {
		qgraphicsrectitem_boundingrect_callback = nullptr;
		qgraphicsrectitem_shape_callback = nullptr;
		qgraphicsrectitem_contains_callback = nullptr;
		qgraphicsrectitem_paint_callback = nullptr;
		qgraphicsrectitem_isobscuredby_callback = nullptr;
		qgraphicsrectitem_opaquearea_callback = nullptr;
		qgraphicsrectitem_type_callback = nullptr;
		qgraphicsrectitem_supportsextension_callback = nullptr;
		qgraphicsrectitem_setextension_callback = nullptr;
		qgraphicsrectitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsRectItem_BoundingRect_Callback(QGraphicsRectItem_BoundingRect_Callback cb) const { qgraphicsrectitem_boundingrect_callback = cb; }
	inline void setQGraphicsRectItem_Shape_Callback(QGraphicsRectItem_Shape_Callback cb) const { qgraphicsrectitem_shape_callback = cb; }
	inline void setQGraphicsRectItem_Contains_Callback(QGraphicsRectItem_Contains_Callback cb) const { qgraphicsrectitem_contains_callback = cb; }
	inline void setQGraphicsRectItem_Paint_Callback(QGraphicsRectItem_Paint_Callback cb) const { qgraphicsrectitem_paint_callback = cb; }
	inline void setQGraphicsRectItem_IsObscuredBy_Callback(QGraphicsRectItem_IsObscuredBy_Callback cb) const { qgraphicsrectitem_isobscuredby_callback = cb; }
	inline void setQGraphicsRectItem_OpaqueArea_Callback(QGraphicsRectItem_OpaqueArea_Callback cb) const { qgraphicsrectitem_opaquearea_callback = cb; }
	inline void setQGraphicsRectItem_Type_Callback(QGraphicsRectItem_Type_Callback cb) const { qgraphicsrectitem_type_callback = cb; }
	inline void setQGraphicsRectItem_SupportsExtension_Callback(QGraphicsRectItem_SupportsExtension_Callback cb) const { qgraphicsrectitem_supportsextension_callback = cb; }
	inline void setQGraphicsRectItem_SetExtension_Callback(QGraphicsRectItem_SetExtension_Callback cb) const { qgraphicsrectitem_setextension_callback = cb; }
	inline void setQGraphicsRectItem_Extension_Callback(QGraphicsRectItem_Extension_Callback cb) const { qgraphicsrectitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsRectItem_BoundingRect_IsBase(bool value) const { qgraphicsrectitem_boundingrect_isbase = value; }
	inline void setQGraphicsRectItem_Shape_IsBase(bool value) const { qgraphicsrectitem_shape_isbase = value; }
	inline void setQGraphicsRectItem_Contains_IsBase(bool value) const { qgraphicsrectitem_contains_isbase = value; }
	inline void setQGraphicsRectItem_Paint_IsBase(bool value) const { qgraphicsrectitem_paint_isbase = value; }
	inline void setQGraphicsRectItem_IsObscuredBy_IsBase(bool value) const { qgraphicsrectitem_isobscuredby_isbase = value; }
	inline void setQGraphicsRectItem_OpaqueArea_IsBase(bool value) const { qgraphicsrectitem_opaquearea_isbase = value; }
	inline void setQGraphicsRectItem_Type_IsBase(bool value) const { qgraphicsrectitem_type_isbase = value; }
	inline void setQGraphicsRectItem_SupportsExtension_IsBase(bool value) const { qgraphicsrectitem_supportsextension_isbase = value; }
	inline void setQGraphicsRectItem_SetExtension_IsBase(bool value) const { qgraphicsrectitem_setextension_isbase = value; }
	inline void setQGraphicsRectItem_Extension_IsBase(bool value) const { qgraphicsrectitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicsrectitem_boundingrect_isbase) {
			qgraphicsrectitem_boundingrect_isbase = false;
			return QGraphicsRectItem::boundingRect();
		} else if (qgraphicsrectitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicsrectitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsRectItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicsrectitem_shape_isbase) {
			qgraphicsrectitem_shape_isbase = false;
			return QGraphicsRectItem::shape();
		} else if (qgraphicsrectitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsrectitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsRectItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicsrectitem_contains_isbase) {
			qgraphicsrectitem_contains_isbase = false;
			return QGraphicsRectItem::contains(point);
		} else if (qgraphicsrectitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicsrectitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsRectItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicsrectitem_paint_isbase) {
			qgraphicsrectitem_paint_isbase = false;
			QGraphicsRectItem::paint(painter, option, widget);
		} else if (qgraphicsrectitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicsrectitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsRectItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicsrectitem_isobscuredby_isbase) {
			qgraphicsrectitem_isobscuredby_isbase = false;
			return QGraphicsRectItem::isObscuredBy(item);
		} else if (qgraphicsrectitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicsrectitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsRectItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicsrectitem_opaquearea_isbase) {
			qgraphicsrectitem_opaquearea_isbase = false;
			return QGraphicsRectItem::opaqueArea();
		} else if (qgraphicsrectitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsrectitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsRectItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicsrectitem_type_isbase) {
			qgraphicsrectitem_type_isbase = false;
			return QGraphicsRectItem::type();
		} else if (qgraphicsrectitem_type_callback != nullptr) {
			int callback_ret = qgraphicsrectitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsRectItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicsrectitem_supportsextension_isbase) {
			qgraphicsrectitem_supportsextension_isbase = false;
			return QGraphicsRectItem::supportsExtension(extension);
		} else if (qgraphicsrectitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicsrectitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsRectItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicsrectitem_setextension_isbase) {
			qgraphicsrectitem_setextension_isbase = false;
			QGraphicsRectItem::setExtension(extension, variant);
		} else if (qgraphicsrectitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicsrectitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsRectItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicsrectitem_extension_isbase) {
			qgraphicsrectitem_extension_isbase = false;
			return QGraphicsRectItem::extension(variant);
		} else if (qgraphicsrectitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicsrectitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsRectItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsRectItem_SupportsExtension(const QGraphicsRectItem* self, int extension);
	friend bool QGraphicsRectItem_QBaseSupportsExtension(const QGraphicsRectItem* self, int extension);
	friend void QGraphicsRectItem_SetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant);
	friend void QGraphicsRectItem_QBaseSetExtension(QGraphicsRectItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsRectItem_Extension(const QGraphicsRectItem* self, const QVariant* variant);
	friend QVariant* QGraphicsRectItem_QBaseExtension(const QGraphicsRectItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsEllipseItem so that we can call protected methods
class VirtualQGraphicsEllipseItem final : public QGraphicsEllipseItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsEllipseItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsEllipseItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsEllipseItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsEllipseItem_Contains_Callback = bool (*)(const QGraphicsEllipseItem*, const QPointF*);
	using QGraphicsEllipseItem_Paint_Callback = void (*)(QGraphicsEllipseItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsEllipseItem_IsObscuredBy_Callback = bool (*)(const QGraphicsEllipseItem*, const QGraphicsItem*);
	using QGraphicsEllipseItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsEllipseItem_Type_Callback = int (*)();
	using QGraphicsEllipseItem_SupportsExtension_Callback = bool (*)(const QGraphicsEllipseItem*, int);
	using QGraphicsEllipseItem_SetExtension_Callback = void (*)(QGraphicsEllipseItem*, int, const QVariant*);
	using QGraphicsEllipseItem_Extension_Callback = QVariant* (*)(const QGraphicsEllipseItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsEllipseItem_BoundingRect_Callback qgraphicsellipseitem_boundingrect_callback = nullptr;
	mutable QGraphicsEllipseItem_Shape_Callback qgraphicsellipseitem_shape_callback = nullptr;
	mutable QGraphicsEllipseItem_Contains_Callback qgraphicsellipseitem_contains_callback = nullptr;
	mutable QGraphicsEllipseItem_Paint_Callback qgraphicsellipseitem_paint_callback = nullptr;
	mutable QGraphicsEllipseItem_IsObscuredBy_Callback qgraphicsellipseitem_isobscuredby_callback = nullptr;
	mutable QGraphicsEllipseItem_OpaqueArea_Callback qgraphicsellipseitem_opaquearea_callback = nullptr;
	mutable QGraphicsEllipseItem_Type_Callback qgraphicsellipseitem_type_callback = nullptr;
	mutable QGraphicsEllipseItem_SupportsExtension_Callback qgraphicsellipseitem_supportsextension_callback = nullptr;
	mutable QGraphicsEllipseItem_SetExtension_Callback qgraphicsellipseitem_setextension_callback = nullptr;
	mutable QGraphicsEllipseItem_Extension_Callback qgraphicsellipseitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsellipseitem_boundingrect_isbase = false;
    mutable bool qgraphicsellipseitem_shape_isbase = false;
    mutable bool qgraphicsellipseitem_contains_isbase = false;
    mutable bool qgraphicsellipseitem_paint_isbase = false;
    mutable bool qgraphicsellipseitem_isobscuredby_isbase = false;
    mutable bool qgraphicsellipseitem_opaquearea_isbase = false;
    mutable bool qgraphicsellipseitem_type_isbase = false;
    mutable bool qgraphicsellipseitem_supportsextension_isbase = false;
    mutable bool qgraphicsellipseitem_setextension_isbase = false;
    mutable bool qgraphicsellipseitem_extension_isbase = false;

public:
	VirtualQGraphicsEllipseItem(): QGraphicsEllipseItem() {};
	VirtualQGraphicsEllipseItem(const QRectF& rect): QGraphicsEllipseItem(rect) {};
	VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h): QGraphicsEllipseItem(x, y, w, h) {};
	VirtualQGraphicsEllipseItem(QGraphicsItem* parent): QGraphicsEllipseItem(parent) {};
	VirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsEllipseItem(rect, parent) {};
	VirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsEllipseItem(x, y, w, h, parent) {};

	~VirtualQGraphicsEllipseItem() {
		qgraphicsellipseitem_boundingrect_callback = nullptr;
		qgraphicsellipseitem_shape_callback = nullptr;
		qgraphicsellipseitem_contains_callback = nullptr;
		qgraphicsellipseitem_paint_callback = nullptr;
		qgraphicsellipseitem_isobscuredby_callback = nullptr;
		qgraphicsellipseitem_opaquearea_callback = nullptr;
		qgraphicsellipseitem_type_callback = nullptr;
		qgraphicsellipseitem_supportsextension_callback = nullptr;
		qgraphicsellipseitem_setextension_callback = nullptr;
		qgraphicsellipseitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsEllipseItem_BoundingRect_Callback(QGraphicsEllipseItem_BoundingRect_Callback cb) const { qgraphicsellipseitem_boundingrect_callback = cb; }
	inline void setQGraphicsEllipseItem_Shape_Callback(QGraphicsEllipseItem_Shape_Callback cb) const { qgraphicsellipseitem_shape_callback = cb; }
	inline void setQGraphicsEllipseItem_Contains_Callback(QGraphicsEllipseItem_Contains_Callback cb) const { qgraphicsellipseitem_contains_callback = cb; }
	inline void setQGraphicsEllipseItem_Paint_Callback(QGraphicsEllipseItem_Paint_Callback cb) const { qgraphicsellipseitem_paint_callback = cb; }
	inline void setQGraphicsEllipseItem_IsObscuredBy_Callback(QGraphicsEllipseItem_IsObscuredBy_Callback cb) const { qgraphicsellipseitem_isobscuredby_callback = cb; }
	inline void setQGraphicsEllipseItem_OpaqueArea_Callback(QGraphicsEllipseItem_OpaqueArea_Callback cb) const { qgraphicsellipseitem_opaquearea_callback = cb; }
	inline void setQGraphicsEllipseItem_Type_Callback(QGraphicsEllipseItem_Type_Callback cb) const { qgraphicsellipseitem_type_callback = cb; }
	inline void setQGraphicsEllipseItem_SupportsExtension_Callback(QGraphicsEllipseItem_SupportsExtension_Callback cb) const { qgraphicsellipseitem_supportsextension_callback = cb; }
	inline void setQGraphicsEllipseItem_SetExtension_Callback(QGraphicsEllipseItem_SetExtension_Callback cb) const { qgraphicsellipseitem_setextension_callback = cb; }
	inline void setQGraphicsEllipseItem_Extension_Callback(QGraphicsEllipseItem_Extension_Callback cb) const { qgraphicsellipseitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsEllipseItem_BoundingRect_IsBase(bool value) const { qgraphicsellipseitem_boundingrect_isbase = value; }
	inline void setQGraphicsEllipseItem_Shape_IsBase(bool value) const { qgraphicsellipseitem_shape_isbase = value; }
	inline void setQGraphicsEllipseItem_Contains_IsBase(bool value) const { qgraphicsellipseitem_contains_isbase = value; }
	inline void setQGraphicsEllipseItem_Paint_IsBase(bool value) const { qgraphicsellipseitem_paint_isbase = value; }
	inline void setQGraphicsEllipseItem_IsObscuredBy_IsBase(bool value) const { qgraphicsellipseitem_isobscuredby_isbase = value; }
	inline void setQGraphicsEllipseItem_OpaqueArea_IsBase(bool value) const { qgraphicsellipseitem_opaquearea_isbase = value; }
	inline void setQGraphicsEllipseItem_Type_IsBase(bool value) const { qgraphicsellipseitem_type_isbase = value; }
	inline void setQGraphicsEllipseItem_SupportsExtension_IsBase(bool value) const { qgraphicsellipseitem_supportsextension_isbase = value; }
	inline void setQGraphicsEllipseItem_SetExtension_IsBase(bool value) const { qgraphicsellipseitem_setextension_isbase = value; }
	inline void setQGraphicsEllipseItem_Extension_IsBase(bool value) const { qgraphicsellipseitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicsellipseitem_boundingrect_isbase) {
			qgraphicsellipseitem_boundingrect_isbase = false;
			return QGraphicsEllipseItem::boundingRect();
		} else if (qgraphicsellipseitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicsellipseitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsEllipseItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicsellipseitem_shape_isbase) {
			qgraphicsellipseitem_shape_isbase = false;
			return QGraphicsEllipseItem::shape();
		} else if (qgraphicsellipseitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsellipseitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsEllipseItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicsellipseitem_contains_isbase) {
			qgraphicsellipseitem_contains_isbase = false;
			return QGraphicsEllipseItem::contains(point);
		} else if (qgraphicsellipseitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicsellipseitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsEllipseItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicsellipseitem_paint_isbase) {
			qgraphicsellipseitem_paint_isbase = false;
			QGraphicsEllipseItem::paint(painter, option, widget);
		} else if (qgraphicsellipseitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicsellipseitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsEllipseItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicsellipseitem_isobscuredby_isbase) {
			qgraphicsellipseitem_isobscuredby_isbase = false;
			return QGraphicsEllipseItem::isObscuredBy(item);
		} else if (qgraphicsellipseitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicsellipseitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsEllipseItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicsellipseitem_opaquearea_isbase) {
			qgraphicsellipseitem_opaquearea_isbase = false;
			return QGraphicsEllipseItem::opaqueArea();
		} else if (qgraphicsellipseitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsellipseitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsEllipseItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicsellipseitem_type_isbase) {
			qgraphicsellipseitem_type_isbase = false;
			return QGraphicsEllipseItem::type();
		} else if (qgraphicsellipseitem_type_callback != nullptr) {
			int callback_ret = qgraphicsellipseitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsEllipseItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicsellipseitem_supportsextension_isbase) {
			qgraphicsellipseitem_supportsextension_isbase = false;
			return QGraphicsEllipseItem::supportsExtension(extension);
		} else if (qgraphicsellipseitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicsellipseitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsEllipseItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicsellipseitem_setextension_isbase) {
			qgraphicsellipseitem_setextension_isbase = false;
			QGraphicsEllipseItem::setExtension(extension, variant);
		} else if (qgraphicsellipseitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicsellipseitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsEllipseItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicsellipseitem_extension_isbase) {
			qgraphicsellipseitem_extension_isbase = false;
			return QGraphicsEllipseItem::extension(variant);
		} else if (qgraphicsellipseitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicsellipseitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsEllipseItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsEllipseItem_SupportsExtension(const QGraphicsEllipseItem* self, int extension);
	friend bool QGraphicsEllipseItem_QBaseSupportsExtension(const QGraphicsEllipseItem* self, int extension);
	friend void QGraphicsEllipseItem_SetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant);
	friend void QGraphicsEllipseItem_QBaseSetExtension(QGraphicsEllipseItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsEllipseItem_Extension(const QGraphicsEllipseItem* self, const QVariant* variant);
	friend QVariant* QGraphicsEllipseItem_QBaseExtension(const QGraphicsEllipseItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsPolygonItem so that we can call protected methods
class VirtualQGraphicsPolygonItem final : public QGraphicsPolygonItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsPolygonItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsPolygonItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsPolygonItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsPolygonItem_Contains_Callback = bool (*)(const QGraphicsPolygonItem*, const QPointF*);
	using QGraphicsPolygonItem_Paint_Callback = void (*)(QGraphicsPolygonItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsPolygonItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPolygonItem*, const QGraphicsItem*);
	using QGraphicsPolygonItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsPolygonItem_Type_Callback = int (*)();
	using QGraphicsPolygonItem_SupportsExtension_Callback = bool (*)(const QGraphicsPolygonItem*, int);
	using QGraphicsPolygonItem_SetExtension_Callback = void (*)(QGraphicsPolygonItem*, int, const QVariant*);
	using QGraphicsPolygonItem_Extension_Callback = QVariant* (*)(const QGraphicsPolygonItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsPolygonItem_BoundingRect_Callback qgraphicspolygonitem_boundingrect_callback = nullptr;
	mutable QGraphicsPolygonItem_Shape_Callback qgraphicspolygonitem_shape_callback = nullptr;
	mutable QGraphicsPolygonItem_Contains_Callback qgraphicspolygonitem_contains_callback = nullptr;
	mutable QGraphicsPolygonItem_Paint_Callback qgraphicspolygonitem_paint_callback = nullptr;
	mutable QGraphicsPolygonItem_IsObscuredBy_Callback qgraphicspolygonitem_isobscuredby_callback = nullptr;
	mutable QGraphicsPolygonItem_OpaqueArea_Callback qgraphicspolygonitem_opaquearea_callback = nullptr;
	mutable QGraphicsPolygonItem_Type_Callback qgraphicspolygonitem_type_callback = nullptr;
	mutable QGraphicsPolygonItem_SupportsExtension_Callback qgraphicspolygonitem_supportsextension_callback = nullptr;
	mutable QGraphicsPolygonItem_SetExtension_Callback qgraphicspolygonitem_setextension_callback = nullptr;
	mutable QGraphicsPolygonItem_Extension_Callback qgraphicspolygonitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicspolygonitem_boundingrect_isbase = false;
    mutable bool qgraphicspolygonitem_shape_isbase = false;
    mutable bool qgraphicspolygonitem_contains_isbase = false;
    mutable bool qgraphicspolygonitem_paint_isbase = false;
    mutable bool qgraphicspolygonitem_isobscuredby_isbase = false;
    mutable bool qgraphicspolygonitem_opaquearea_isbase = false;
    mutable bool qgraphicspolygonitem_type_isbase = false;
    mutable bool qgraphicspolygonitem_supportsextension_isbase = false;
    mutable bool qgraphicspolygonitem_setextension_isbase = false;
    mutable bool qgraphicspolygonitem_extension_isbase = false;

public:
	VirtualQGraphicsPolygonItem(): QGraphicsPolygonItem() {};
	VirtualQGraphicsPolygonItem(QGraphicsItem* parent): QGraphicsPolygonItem(parent) {};

	~VirtualQGraphicsPolygonItem() {
		qgraphicspolygonitem_boundingrect_callback = nullptr;
		qgraphicspolygonitem_shape_callback = nullptr;
		qgraphicspolygonitem_contains_callback = nullptr;
		qgraphicspolygonitem_paint_callback = nullptr;
		qgraphicspolygonitem_isobscuredby_callback = nullptr;
		qgraphicspolygonitem_opaquearea_callback = nullptr;
		qgraphicspolygonitem_type_callback = nullptr;
		qgraphicspolygonitem_supportsextension_callback = nullptr;
		qgraphicspolygonitem_setextension_callback = nullptr;
		qgraphicspolygonitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsPolygonItem_BoundingRect_Callback(QGraphicsPolygonItem_BoundingRect_Callback cb) const { qgraphicspolygonitem_boundingrect_callback = cb; }
	inline void setQGraphicsPolygonItem_Shape_Callback(QGraphicsPolygonItem_Shape_Callback cb) const { qgraphicspolygonitem_shape_callback = cb; }
	inline void setQGraphicsPolygonItem_Contains_Callback(QGraphicsPolygonItem_Contains_Callback cb) const { qgraphicspolygonitem_contains_callback = cb; }
	inline void setQGraphicsPolygonItem_Paint_Callback(QGraphicsPolygonItem_Paint_Callback cb) const { qgraphicspolygonitem_paint_callback = cb; }
	inline void setQGraphicsPolygonItem_IsObscuredBy_Callback(QGraphicsPolygonItem_IsObscuredBy_Callback cb) const { qgraphicspolygonitem_isobscuredby_callback = cb; }
	inline void setQGraphicsPolygonItem_OpaqueArea_Callback(QGraphicsPolygonItem_OpaqueArea_Callback cb) const { qgraphicspolygonitem_opaquearea_callback = cb; }
	inline void setQGraphicsPolygonItem_Type_Callback(QGraphicsPolygonItem_Type_Callback cb) const { qgraphicspolygonitem_type_callback = cb; }
	inline void setQGraphicsPolygonItem_SupportsExtension_Callback(QGraphicsPolygonItem_SupportsExtension_Callback cb) const { qgraphicspolygonitem_supportsextension_callback = cb; }
	inline void setQGraphicsPolygonItem_SetExtension_Callback(QGraphicsPolygonItem_SetExtension_Callback cb) const { qgraphicspolygonitem_setextension_callback = cb; }
	inline void setQGraphicsPolygonItem_Extension_Callback(QGraphicsPolygonItem_Extension_Callback cb) const { qgraphicspolygonitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsPolygonItem_BoundingRect_IsBase(bool value) const { qgraphicspolygonitem_boundingrect_isbase = value; }
	inline void setQGraphicsPolygonItem_Shape_IsBase(bool value) const { qgraphicspolygonitem_shape_isbase = value; }
	inline void setQGraphicsPolygonItem_Contains_IsBase(bool value) const { qgraphicspolygonitem_contains_isbase = value; }
	inline void setQGraphicsPolygonItem_Paint_IsBase(bool value) const { qgraphicspolygonitem_paint_isbase = value; }
	inline void setQGraphicsPolygonItem_IsObscuredBy_IsBase(bool value) const { qgraphicspolygonitem_isobscuredby_isbase = value; }
	inline void setQGraphicsPolygonItem_OpaqueArea_IsBase(bool value) const { qgraphicspolygonitem_opaquearea_isbase = value; }
	inline void setQGraphicsPolygonItem_Type_IsBase(bool value) const { qgraphicspolygonitem_type_isbase = value; }
	inline void setQGraphicsPolygonItem_SupportsExtension_IsBase(bool value) const { qgraphicspolygonitem_supportsextension_isbase = value; }
	inline void setQGraphicsPolygonItem_SetExtension_IsBase(bool value) const { qgraphicspolygonitem_setextension_isbase = value; }
	inline void setQGraphicsPolygonItem_Extension_IsBase(bool value) const { qgraphicspolygonitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicspolygonitem_boundingrect_isbase) {
			qgraphicspolygonitem_boundingrect_isbase = false;
			return QGraphicsPolygonItem::boundingRect();
		} else if (qgraphicspolygonitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicspolygonitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsPolygonItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicspolygonitem_shape_isbase) {
			qgraphicspolygonitem_shape_isbase = false;
			return QGraphicsPolygonItem::shape();
		} else if (qgraphicspolygonitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspolygonitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsPolygonItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicspolygonitem_contains_isbase) {
			qgraphicspolygonitem_contains_isbase = false;
			return QGraphicsPolygonItem::contains(point);
		} else if (qgraphicspolygonitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicspolygonitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPolygonItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicspolygonitem_paint_isbase) {
			qgraphicspolygonitem_paint_isbase = false;
			QGraphicsPolygonItem::paint(painter, option, widget);
		} else if (qgraphicspolygonitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicspolygonitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsPolygonItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicspolygonitem_isobscuredby_isbase) {
			qgraphicspolygonitem_isobscuredby_isbase = false;
			return QGraphicsPolygonItem::isObscuredBy(item);
		} else if (qgraphicspolygonitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicspolygonitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPolygonItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicspolygonitem_opaquearea_isbase) {
			qgraphicspolygonitem_opaquearea_isbase = false;
			return QGraphicsPolygonItem::opaqueArea();
		} else if (qgraphicspolygonitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspolygonitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsPolygonItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicspolygonitem_type_isbase) {
			qgraphicspolygonitem_type_isbase = false;
			return QGraphicsPolygonItem::type();
		} else if (qgraphicspolygonitem_type_callback != nullptr) {
			int callback_ret = qgraphicspolygonitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsPolygonItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicspolygonitem_supportsextension_isbase) {
			qgraphicspolygonitem_supportsextension_isbase = false;
			return QGraphicsPolygonItem::supportsExtension(extension);
		} else if (qgraphicspolygonitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicspolygonitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPolygonItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicspolygonitem_setextension_isbase) {
			qgraphicspolygonitem_setextension_isbase = false;
			QGraphicsPolygonItem::setExtension(extension, variant);
		} else if (qgraphicspolygonitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicspolygonitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsPolygonItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicspolygonitem_extension_isbase) {
			qgraphicspolygonitem_extension_isbase = false;
			return QGraphicsPolygonItem::extension(variant);
		} else if (qgraphicspolygonitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicspolygonitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsPolygonItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsPolygonItem_SupportsExtension(const QGraphicsPolygonItem* self, int extension);
	friend bool QGraphicsPolygonItem_QBaseSupportsExtension(const QGraphicsPolygonItem* self, int extension);
	friend void QGraphicsPolygonItem_SetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant);
	friend void QGraphicsPolygonItem_QBaseSetExtension(QGraphicsPolygonItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsPolygonItem_Extension(const QGraphicsPolygonItem* self, const QVariant* variant);
	friend QVariant* QGraphicsPolygonItem_QBaseExtension(const QGraphicsPolygonItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsLineItem so that we can call protected methods
class VirtualQGraphicsLineItem final : public QGraphicsLineItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsLineItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsLineItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsLineItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsLineItem_Contains_Callback = bool (*)(const QGraphicsLineItem*, const QPointF*);
	using QGraphicsLineItem_Paint_Callback = void (*)(QGraphicsLineItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsLineItem_IsObscuredBy_Callback = bool (*)(const QGraphicsLineItem*, const QGraphicsItem*);
	using QGraphicsLineItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsLineItem_Type_Callback = int (*)();
	using QGraphicsLineItem_SupportsExtension_Callback = bool (*)(const QGraphicsLineItem*, int);
	using QGraphicsLineItem_SetExtension_Callback = void (*)(QGraphicsLineItem*, int, const QVariant*);
	using QGraphicsLineItem_Extension_Callback = QVariant* (*)(const QGraphicsLineItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsLineItem_BoundingRect_Callback qgraphicslineitem_boundingrect_callback = nullptr;
	mutable QGraphicsLineItem_Shape_Callback qgraphicslineitem_shape_callback = nullptr;
	mutable QGraphicsLineItem_Contains_Callback qgraphicslineitem_contains_callback = nullptr;
	mutable QGraphicsLineItem_Paint_Callback qgraphicslineitem_paint_callback = nullptr;
	mutable QGraphicsLineItem_IsObscuredBy_Callback qgraphicslineitem_isobscuredby_callback = nullptr;
	mutable QGraphicsLineItem_OpaqueArea_Callback qgraphicslineitem_opaquearea_callback = nullptr;
	mutable QGraphicsLineItem_Type_Callback qgraphicslineitem_type_callback = nullptr;
	mutable QGraphicsLineItem_SupportsExtension_Callback qgraphicslineitem_supportsextension_callback = nullptr;
	mutable QGraphicsLineItem_SetExtension_Callback qgraphicslineitem_setextension_callback = nullptr;
	mutable QGraphicsLineItem_Extension_Callback qgraphicslineitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicslineitem_boundingrect_isbase = false;
    mutable bool qgraphicslineitem_shape_isbase = false;
    mutable bool qgraphicslineitem_contains_isbase = false;
    mutable bool qgraphicslineitem_paint_isbase = false;
    mutable bool qgraphicslineitem_isobscuredby_isbase = false;
    mutable bool qgraphicslineitem_opaquearea_isbase = false;
    mutable bool qgraphicslineitem_type_isbase = false;
    mutable bool qgraphicslineitem_supportsextension_isbase = false;
    mutable bool qgraphicslineitem_setextension_isbase = false;
    mutable bool qgraphicslineitem_extension_isbase = false;

public:
	VirtualQGraphicsLineItem(): QGraphicsLineItem() {};
	VirtualQGraphicsLineItem(const QLineF& line): QGraphicsLineItem(line) {};
	VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2): QGraphicsLineItem(x1, y1, x2, y2) {};
	VirtualQGraphicsLineItem(QGraphicsItem* parent): QGraphicsLineItem(parent) {};
	VirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent): QGraphicsLineItem(line, parent) {};
	VirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent): QGraphicsLineItem(x1, y1, x2, y2, parent) {};

	~VirtualQGraphicsLineItem() {
		qgraphicslineitem_boundingrect_callback = nullptr;
		qgraphicslineitem_shape_callback = nullptr;
		qgraphicslineitem_contains_callback = nullptr;
		qgraphicslineitem_paint_callback = nullptr;
		qgraphicslineitem_isobscuredby_callback = nullptr;
		qgraphicslineitem_opaquearea_callback = nullptr;
		qgraphicslineitem_type_callback = nullptr;
		qgraphicslineitem_supportsextension_callback = nullptr;
		qgraphicslineitem_setextension_callback = nullptr;
		qgraphicslineitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsLineItem_BoundingRect_Callback(QGraphicsLineItem_BoundingRect_Callback cb) const { qgraphicslineitem_boundingrect_callback = cb; }
	inline void setQGraphicsLineItem_Shape_Callback(QGraphicsLineItem_Shape_Callback cb) const { qgraphicslineitem_shape_callback = cb; }
	inline void setQGraphicsLineItem_Contains_Callback(QGraphicsLineItem_Contains_Callback cb) const { qgraphicslineitem_contains_callback = cb; }
	inline void setQGraphicsLineItem_Paint_Callback(QGraphicsLineItem_Paint_Callback cb) const { qgraphicslineitem_paint_callback = cb; }
	inline void setQGraphicsLineItem_IsObscuredBy_Callback(QGraphicsLineItem_IsObscuredBy_Callback cb) const { qgraphicslineitem_isobscuredby_callback = cb; }
	inline void setQGraphicsLineItem_OpaqueArea_Callback(QGraphicsLineItem_OpaqueArea_Callback cb) const { qgraphicslineitem_opaquearea_callback = cb; }
	inline void setQGraphicsLineItem_Type_Callback(QGraphicsLineItem_Type_Callback cb) const { qgraphicslineitem_type_callback = cb; }
	inline void setQGraphicsLineItem_SupportsExtension_Callback(QGraphicsLineItem_SupportsExtension_Callback cb) const { qgraphicslineitem_supportsextension_callback = cb; }
	inline void setQGraphicsLineItem_SetExtension_Callback(QGraphicsLineItem_SetExtension_Callback cb) const { qgraphicslineitem_setextension_callback = cb; }
	inline void setQGraphicsLineItem_Extension_Callback(QGraphicsLineItem_Extension_Callback cb) const { qgraphicslineitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsLineItem_BoundingRect_IsBase(bool value) const { qgraphicslineitem_boundingrect_isbase = value; }
	inline void setQGraphicsLineItem_Shape_IsBase(bool value) const { qgraphicslineitem_shape_isbase = value; }
	inline void setQGraphicsLineItem_Contains_IsBase(bool value) const { qgraphicslineitem_contains_isbase = value; }
	inline void setQGraphicsLineItem_Paint_IsBase(bool value) const { qgraphicslineitem_paint_isbase = value; }
	inline void setQGraphicsLineItem_IsObscuredBy_IsBase(bool value) const { qgraphicslineitem_isobscuredby_isbase = value; }
	inline void setQGraphicsLineItem_OpaqueArea_IsBase(bool value) const { qgraphicslineitem_opaquearea_isbase = value; }
	inline void setQGraphicsLineItem_Type_IsBase(bool value) const { qgraphicslineitem_type_isbase = value; }
	inline void setQGraphicsLineItem_SupportsExtension_IsBase(bool value) const { qgraphicslineitem_supportsextension_isbase = value; }
	inline void setQGraphicsLineItem_SetExtension_IsBase(bool value) const { qgraphicslineitem_setextension_isbase = value; }
	inline void setQGraphicsLineItem_Extension_IsBase(bool value) const { qgraphicslineitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicslineitem_boundingrect_isbase) {
			qgraphicslineitem_boundingrect_isbase = false;
			return QGraphicsLineItem::boundingRect();
		} else if (qgraphicslineitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicslineitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsLineItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicslineitem_shape_isbase) {
			qgraphicslineitem_shape_isbase = false;
			return QGraphicsLineItem::shape();
		} else if (qgraphicslineitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicslineitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsLineItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicslineitem_contains_isbase) {
			qgraphicslineitem_contains_isbase = false;
			return QGraphicsLineItem::contains(point);
		} else if (qgraphicslineitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicslineitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsLineItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicslineitem_paint_isbase) {
			qgraphicslineitem_paint_isbase = false;
			QGraphicsLineItem::paint(painter, option, widget);
		} else if (qgraphicslineitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicslineitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsLineItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicslineitem_isobscuredby_isbase) {
			qgraphicslineitem_isobscuredby_isbase = false;
			return QGraphicsLineItem::isObscuredBy(item);
		} else if (qgraphicslineitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicslineitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsLineItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicslineitem_opaquearea_isbase) {
			qgraphicslineitem_opaquearea_isbase = false;
			return QGraphicsLineItem::opaqueArea();
		} else if (qgraphicslineitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicslineitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsLineItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicslineitem_type_isbase) {
			qgraphicslineitem_type_isbase = false;
			return QGraphicsLineItem::type();
		} else if (qgraphicslineitem_type_callback != nullptr) {
			int callback_ret = qgraphicslineitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsLineItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicslineitem_supportsextension_isbase) {
			qgraphicslineitem_supportsextension_isbase = false;
			return QGraphicsLineItem::supportsExtension(extension);
		} else if (qgraphicslineitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicslineitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsLineItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicslineitem_setextension_isbase) {
			qgraphicslineitem_setextension_isbase = false;
			QGraphicsLineItem::setExtension(extension, variant);
		} else if (qgraphicslineitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicslineitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsLineItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicslineitem_extension_isbase) {
			qgraphicslineitem_extension_isbase = false;
			return QGraphicsLineItem::extension(variant);
		} else if (qgraphicslineitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicslineitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsLineItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsLineItem_SupportsExtension(const QGraphicsLineItem* self, int extension);
	friend bool QGraphicsLineItem_QBaseSupportsExtension(const QGraphicsLineItem* self, int extension);
	friend void QGraphicsLineItem_SetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant);
	friend void QGraphicsLineItem_QBaseSetExtension(QGraphicsLineItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsLineItem_Extension(const QGraphicsLineItem* self, const QVariant* variant);
	friend QVariant* QGraphicsLineItem_QBaseExtension(const QGraphicsLineItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsPixmapItem so that we can call protected methods
class VirtualQGraphicsPixmapItem final : public QGraphicsPixmapItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsPixmapItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsPixmapItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsPixmapItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsPixmapItem_Contains_Callback = bool (*)(const QGraphicsPixmapItem*, const QPointF*);
	using QGraphicsPixmapItem_Paint_Callback = void (*)(QGraphicsPixmapItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsPixmapItem_IsObscuredBy_Callback = bool (*)(const QGraphicsPixmapItem*, const QGraphicsItem*);
	using QGraphicsPixmapItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsPixmapItem_Type_Callback = int (*)();
	using QGraphicsPixmapItem_SupportsExtension_Callback = bool (*)(const QGraphicsPixmapItem*, int);
	using QGraphicsPixmapItem_SetExtension_Callback = void (*)(QGraphicsPixmapItem*, int, const QVariant*);
	using QGraphicsPixmapItem_Extension_Callback = QVariant* (*)(const QGraphicsPixmapItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsPixmapItem_BoundingRect_Callback qgraphicspixmapitem_boundingrect_callback = nullptr;
	mutable QGraphicsPixmapItem_Shape_Callback qgraphicspixmapitem_shape_callback = nullptr;
	mutable QGraphicsPixmapItem_Contains_Callback qgraphicspixmapitem_contains_callback = nullptr;
	mutable QGraphicsPixmapItem_Paint_Callback qgraphicspixmapitem_paint_callback = nullptr;
	mutable QGraphicsPixmapItem_IsObscuredBy_Callback qgraphicspixmapitem_isobscuredby_callback = nullptr;
	mutable QGraphicsPixmapItem_OpaqueArea_Callback qgraphicspixmapitem_opaquearea_callback = nullptr;
	mutable QGraphicsPixmapItem_Type_Callback qgraphicspixmapitem_type_callback = nullptr;
	mutable QGraphicsPixmapItem_SupportsExtension_Callback qgraphicspixmapitem_supportsextension_callback = nullptr;
	mutable QGraphicsPixmapItem_SetExtension_Callback qgraphicspixmapitem_setextension_callback = nullptr;
	mutable QGraphicsPixmapItem_Extension_Callback qgraphicspixmapitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicspixmapitem_boundingrect_isbase = false;
    mutable bool qgraphicspixmapitem_shape_isbase = false;
    mutable bool qgraphicspixmapitem_contains_isbase = false;
    mutable bool qgraphicspixmapitem_paint_isbase = false;
    mutable bool qgraphicspixmapitem_isobscuredby_isbase = false;
    mutable bool qgraphicspixmapitem_opaquearea_isbase = false;
    mutable bool qgraphicspixmapitem_type_isbase = false;
    mutable bool qgraphicspixmapitem_supportsextension_isbase = false;
    mutable bool qgraphicspixmapitem_setextension_isbase = false;
    mutable bool qgraphicspixmapitem_extension_isbase = false;

public:
	VirtualQGraphicsPixmapItem(): QGraphicsPixmapItem() {};
	VirtualQGraphicsPixmapItem(const QPixmap& pixmap): QGraphicsPixmapItem(pixmap) {};
	VirtualQGraphicsPixmapItem(QGraphicsItem* parent): QGraphicsPixmapItem(parent) {};
	VirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent): QGraphicsPixmapItem(pixmap, parent) {};

	~VirtualQGraphicsPixmapItem() {
		qgraphicspixmapitem_boundingrect_callback = nullptr;
		qgraphicspixmapitem_shape_callback = nullptr;
		qgraphicspixmapitem_contains_callback = nullptr;
		qgraphicspixmapitem_paint_callback = nullptr;
		qgraphicspixmapitem_isobscuredby_callback = nullptr;
		qgraphicspixmapitem_opaquearea_callback = nullptr;
		qgraphicspixmapitem_type_callback = nullptr;
		qgraphicspixmapitem_supportsextension_callback = nullptr;
		qgraphicspixmapitem_setextension_callback = nullptr;
		qgraphicspixmapitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsPixmapItem_BoundingRect_Callback(QGraphicsPixmapItem_BoundingRect_Callback cb) const { qgraphicspixmapitem_boundingrect_callback = cb; }
	inline void setQGraphicsPixmapItem_Shape_Callback(QGraphicsPixmapItem_Shape_Callback cb) const { qgraphicspixmapitem_shape_callback = cb; }
	inline void setQGraphicsPixmapItem_Contains_Callback(QGraphicsPixmapItem_Contains_Callback cb) const { qgraphicspixmapitem_contains_callback = cb; }
	inline void setQGraphicsPixmapItem_Paint_Callback(QGraphicsPixmapItem_Paint_Callback cb) const { qgraphicspixmapitem_paint_callback = cb; }
	inline void setQGraphicsPixmapItem_IsObscuredBy_Callback(QGraphicsPixmapItem_IsObscuredBy_Callback cb) const { qgraphicspixmapitem_isobscuredby_callback = cb; }
	inline void setQGraphicsPixmapItem_OpaqueArea_Callback(QGraphicsPixmapItem_OpaqueArea_Callback cb) const { qgraphicspixmapitem_opaquearea_callback = cb; }
	inline void setQGraphicsPixmapItem_Type_Callback(QGraphicsPixmapItem_Type_Callback cb) const { qgraphicspixmapitem_type_callback = cb; }
	inline void setQGraphicsPixmapItem_SupportsExtension_Callback(QGraphicsPixmapItem_SupportsExtension_Callback cb) const { qgraphicspixmapitem_supportsextension_callback = cb; }
	inline void setQGraphicsPixmapItem_SetExtension_Callback(QGraphicsPixmapItem_SetExtension_Callback cb) const { qgraphicspixmapitem_setextension_callback = cb; }
	inline void setQGraphicsPixmapItem_Extension_Callback(QGraphicsPixmapItem_Extension_Callback cb) const { qgraphicspixmapitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsPixmapItem_BoundingRect_IsBase(bool value) const { qgraphicspixmapitem_boundingrect_isbase = value; }
	inline void setQGraphicsPixmapItem_Shape_IsBase(bool value) const { qgraphicspixmapitem_shape_isbase = value; }
	inline void setQGraphicsPixmapItem_Contains_IsBase(bool value) const { qgraphicspixmapitem_contains_isbase = value; }
	inline void setQGraphicsPixmapItem_Paint_IsBase(bool value) const { qgraphicspixmapitem_paint_isbase = value; }
	inline void setQGraphicsPixmapItem_IsObscuredBy_IsBase(bool value) const { qgraphicspixmapitem_isobscuredby_isbase = value; }
	inline void setQGraphicsPixmapItem_OpaqueArea_IsBase(bool value) const { qgraphicspixmapitem_opaquearea_isbase = value; }
	inline void setQGraphicsPixmapItem_Type_IsBase(bool value) const { qgraphicspixmapitem_type_isbase = value; }
	inline void setQGraphicsPixmapItem_SupportsExtension_IsBase(bool value) const { qgraphicspixmapitem_supportsextension_isbase = value; }
	inline void setQGraphicsPixmapItem_SetExtension_IsBase(bool value) const { qgraphicspixmapitem_setextension_isbase = value; }
	inline void setQGraphicsPixmapItem_Extension_IsBase(bool value) const { qgraphicspixmapitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicspixmapitem_boundingrect_isbase) {
			qgraphicspixmapitem_boundingrect_isbase = false;
			return QGraphicsPixmapItem::boundingRect();
		} else if (qgraphicspixmapitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicspixmapitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsPixmapItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicspixmapitem_shape_isbase) {
			qgraphicspixmapitem_shape_isbase = false;
			return QGraphicsPixmapItem::shape();
		} else if (qgraphicspixmapitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspixmapitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsPixmapItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicspixmapitem_contains_isbase) {
			qgraphicspixmapitem_contains_isbase = false;
			return QGraphicsPixmapItem::contains(point);
		} else if (qgraphicspixmapitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicspixmapitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPixmapItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicspixmapitem_paint_isbase) {
			qgraphicspixmapitem_paint_isbase = false;
			QGraphicsPixmapItem::paint(painter, option, widget);
		} else if (qgraphicspixmapitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicspixmapitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsPixmapItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicspixmapitem_isobscuredby_isbase) {
			qgraphicspixmapitem_isobscuredby_isbase = false;
			return QGraphicsPixmapItem::isObscuredBy(item);
		} else if (qgraphicspixmapitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicspixmapitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPixmapItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicspixmapitem_opaquearea_isbase) {
			qgraphicspixmapitem_opaquearea_isbase = false;
			return QGraphicsPixmapItem::opaqueArea();
		} else if (qgraphicspixmapitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicspixmapitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsPixmapItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicspixmapitem_type_isbase) {
			qgraphicspixmapitem_type_isbase = false;
			return QGraphicsPixmapItem::type();
		} else if (qgraphicspixmapitem_type_callback != nullptr) {
			int callback_ret = qgraphicspixmapitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsPixmapItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicspixmapitem_supportsextension_isbase) {
			qgraphicspixmapitem_supportsextension_isbase = false;
			return QGraphicsPixmapItem::supportsExtension(extension);
		} else if (qgraphicspixmapitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicspixmapitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsPixmapItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicspixmapitem_setextension_isbase) {
			qgraphicspixmapitem_setextension_isbase = false;
			QGraphicsPixmapItem::setExtension(extension, variant);
		} else if (qgraphicspixmapitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicspixmapitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsPixmapItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicspixmapitem_extension_isbase) {
			qgraphicspixmapitem_extension_isbase = false;
			return QGraphicsPixmapItem::extension(variant);
		} else if (qgraphicspixmapitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicspixmapitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsPixmapItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsPixmapItem_SupportsExtension(const QGraphicsPixmapItem* self, int extension);
	friend bool QGraphicsPixmapItem_QBaseSupportsExtension(const QGraphicsPixmapItem* self, int extension);
	friend void QGraphicsPixmapItem_SetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant);
	friend void QGraphicsPixmapItem_QBaseSetExtension(QGraphicsPixmapItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsPixmapItem_Extension(const QGraphicsPixmapItem* self, const QVariant* variant);
	friend QVariant* QGraphicsPixmapItem_QBaseExtension(const QGraphicsPixmapItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsTextItem so that we can call protected methods
class VirtualQGraphicsTextItem final : public QGraphicsTextItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsTextItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsTextItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsTextItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsTextItem_Contains_Callback = bool (*)(const QGraphicsTextItem*, const QPointF*);
	using QGraphicsTextItem_Paint_Callback = void (*)(QGraphicsTextItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsTextItem*, const QGraphicsItem*);
	using QGraphicsTextItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsTextItem_Type_Callback = int (*)();
	using QGraphicsTextItem_SceneEvent_Callback = bool (*)(QGraphicsTextItem*, QEvent*);
	using QGraphicsTextItem_MousePressEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsTextItem_MouseMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsTextItem_MouseReleaseEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsTextItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneMouseEvent*);
	using QGraphicsTextItem_ContextMenuEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneContextMenuEvent*);
	using QGraphicsTextItem_KeyPressEvent_Callback = void (*)(QGraphicsTextItem*, QKeyEvent*);
	using QGraphicsTextItem_KeyReleaseEvent_Callback = void (*)(QGraphicsTextItem*, QKeyEvent*);
	using QGraphicsTextItem_FocusInEvent_Callback = void (*)(QGraphicsTextItem*, QFocusEvent*);
	using QGraphicsTextItem_FocusOutEvent_Callback = void (*)(QGraphicsTextItem*, QFocusEvent*);
	using QGraphicsTextItem_DragEnterEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsTextItem_DragLeaveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsTextItem_DragMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsTextItem_DropEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneDragDropEvent*);
	using QGraphicsTextItem_InputMethodEvent_Callback = void (*)(QGraphicsTextItem*, QInputMethodEvent*);
	using QGraphicsTextItem_HoverEnterEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsTextItem_HoverMoveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsTextItem_HoverLeaveEvent_Callback = void (*)(QGraphicsTextItem*, QGraphicsSceneHoverEvent*);
	using QGraphicsTextItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsTextItem*, int);
	using QGraphicsTextItem_SupportsExtension_Callback = bool (*)(const QGraphicsTextItem*, int);
	using QGraphicsTextItem_SetExtension_Callback = void (*)(QGraphicsTextItem*, int, const QVariant*);
	using QGraphicsTextItem_Extension_Callback = QVariant* (*)(const QGraphicsTextItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsTextItem_BoundingRect_Callback qgraphicstextitem_boundingrect_callback = nullptr;
	mutable QGraphicsTextItem_Shape_Callback qgraphicstextitem_shape_callback = nullptr;
	mutable QGraphicsTextItem_Contains_Callback qgraphicstextitem_contains_callback = nullptr;
	mutable QGraphicsTextItem_Paint_Callback qgraphicstextitem_paint_callback = nullptr;
	mutable QGraphicsTextItem_IsObscuredBy_Callback qgraphicstextitem_isobscuredby_callback = nullptr;
	mutable QGraphicsTextItem_OpaqueArea_Callback qgraphicstextitem_opaquearea_callback = nullptr;
	mutable QGraphicsTextItem_Type_Callback qgraphicstextitem_type_callback = nullptr;
	mutable QGraphicsTextItem_SceneEvent_Callback qgraphicstextitem_sceneevent_callback = nullptr;
	mutable QGraphicsTextItem_MousePressEvent_Callback qgraphicstextitem_mousepressevent_callback = nullptr;
	mutable QGraphicsTextItem_MouseMoveEvent_Callback qgraphicstextitem_mousemoveevent_callback = nullptr;
	mutable QGraphicsTextItem_MouseReleaseEvent_Callback qgraphicstextitem_mousereleaseevent_callback = nullptr;
	mutable QGraphicsTextItem_MouseDoubleClickEvent_Callback qgraphicstextitem_mousedoubleclickevent_callback = nullptr;
	mutable QGraphicsTextItem_ContextMenuEvent_Callback qgraphicstextitem_contextmenuevent_callback = nullptr;
	mutable QGraphicsTextItem_KeyPressEvent_Callback qgraphicstextitem_keypressevent_callback = nullptr;
	mutable QGraphicsTextItem_KeyReleaseEvent_Callback qgraphicstextitem_keyreleaseevent_callback = nullptr;
	mutable QGraphicsTextItem_FocusInEvent_Callback qgraphicstextitem_focusinevent_callback = nullptr;
	mutable QGraphicsTextItem_FocusOutEvent_Callback qgraphicstextitem_focusoutevent_callback = nullptr;
	mutable QGraphicsTextItem_DragEnterEvent_Callback qgraphicstextitem_dragenterevent_callback = nullptr;
	mutable QGraphicsTextItem_DragLeaveEvent_Callback qgraphicstextitem_dragleaveevent_callback = nullptr;
	mutable QGraphicsTextItem_DragMoveEvent_Callback qgraphicstextitem_dragmoveevent_callback = nullptr;
	mutable QGraphicsTextItem_DropEvent_Callback qgraphicstextitem_dropevent_callback = nullptr;
	mutable QGraphicsTextItem_InputMethodEvent_Callback qgraphicstextitem_inputmethodevent_callback = nullptr;
	mutable QGraphicsTextItem_HoverEnterEvent_Callback qgraphicstextitem_hoverenterevent_callback = nullptr;
	mutable QGraphicsTextItem_HoverMoveEvent_Callback qgraphicstextitem_hovermoveevent_callback = nullptr;
	mutable QGraphicsTextItem_HoverLeaveEvent_Callback qgraphicstextitem_hoverleaveevent_callback = nullptr;
	mutable QGraphicsTextItem_InputMethodQuery_Callback qgraphicstextitem_inputmethodquery_callback = nullptr;
	mutable QGraphicsTextItem_SupportsExtension_Callback qgraphicstextitem_supportsextension_callback = nullptr;
	mutable QGraphicsTextItem_SetExtension_Callback qgraphicstextitem_setextension_callback = nullptr;
	mutable QGraphicsTextItem_Extension_Callback qgraphicstextitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicstextitem_boundingrect_isbase = false;
    mutable bool qgraphicstextitem_shape_isbase = false;
    mutable bool qgraphicstextitem_contains_isbase = false;
    mutable bool qgraphicstextitem_paint_isbase = false;
    mutable bool qgraphicstextitem_isobscuredby_isbase = false;
    mutable bool qgraphicstextitem_opaquearea_isbase = false;
    mutable bool qgraphicstextitem_type_isbase = false;
    mutable bool qgraphicstextitem_sceneevent_isbase = false;
    mutable bool qgraphicstextitem_mousepressevent_isbase = false;
    mutable bool qgraphicstextitem_mousemoveevent_isbase = false;
    mutable bool qgraphicstextitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicstextitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicstextitem_contextmenuevent_isbase = false;
    mutable bool qgraphicstextitem_keypressevent_isbase = false;
    mutable bool qgraphicstextitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicstextitem_focusinevent_isbase = false;
    mutable bool qgraphicstextitem_focusoutevent_isbase = false;
    mutable bool qgraphicstextitem_dragenterevent_isbase = false;
    mutable bool qgraphicstextitem_dragleaveevent_isbase = false;
    mutable bool qgraphicstextitem_dragmoveevent_isbase = false;
    mutable bool qgraphicstextitem_dropevent_isbase = false;
    mutable bool qgraphicstextitem_inputmethodevent_isbase = false;
    mutable bool qgraphicstextitem_hoverenterevent_isbase = false;
    mutable bool qgraphicstextitem_hovermoveevent_isbase = false;
    mutable bool qgraphicstextitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicstextitem_inputmethodquery_isbase = false;
    mutable bool qgraphicstextitem_supportsextension_isbase = false;
    mutable bool qgraphicstextitem_setextension_isbase = false;
    mutable bool qgraphicstextitem_extension_isbase = false;

public:
	VirtualQGraphicsTextItem(): QGraphicsTextItem() {};
	VirtualQGraphicsTextItem(const QString& text): QGraphicsTextItem(text) {};
	VirtualQGraphicsTextItem(QGraphicsItem* parent): QGraphicsTextItem(parent) {};
	VirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent): QGraphicsTextItem(text, parent) {};

	~VirtualQGraphicsTextItem() {
		qgraphicstextitem_boundingrect_callback = nullptr;
		qgraphicstextitem_shape_callback = nullptr;
		qgraphicstextitem_contains_callback = nullptr;
		qgraphicstextitem_paint_callback = nullptr;
		qgraphicstextitem_isobscuredby_callback = nullptr;
		qgraphicstextitem_opaquearea_callback = nullptr;
		qgraphicstextitem_type_callback = nullptr;
		qgraphicstextitem_sceneevent_callback = nullptr;
		qgraphicstextitem_mousepressevent_callback = nullptr;
		qgraphicstextitem_mousemoveevent_callback = nullptr;
		qgraphicstextitem_mousereleaseevent_callback = nullptr;
		qgraphicstextitem_mousedoubleclickevent_callback = nullptr;
		qgraphicstextitem_contextmenuevent_callback = nullptr;
		qgraphicstextitem_keypressevent_callback = nullptr;
		qgraphicstextitem_keyreleaseevent_callback = nullptr;
		qgraphicstextitem_focusinevent_callback = nullptr;
		qgraphicstextitem_focusoutevent_callback = nullptr;
		qgraphicstextitem_dragenterevent_callback = nullptr;
		qgraphicstextitem_dragleaveevent_callback = nullptr;
		qgraphicstextitem_dragmoveevent_callback = nullptr;
		qgraphicstextitem_dropevent_callback = nullptr;
		qgraphicstextitem_inputmethodevent_callback = nullptr;
		qgraphicstextitem_hoverenterevent_callback = nullptr;
		qgraphicstextitem_hovermoveevent_callback = nullptr;
		qgraphicstextitem_hoverleaveevent_callback = nullptr;
		qgraphicstextitem_inputmethodquery_callback = nullptr;
		qgraphicstextitem_supportsextension_callback = nullptr;
		qgraphicstextitem_setextension_callback = nullptr;
		qgraphicstextitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsTextItem_BoundingRect_Callback(QGraphicsTextItem_BoundingRect_Callback cb) const { qgraphicstextitem_boundingrect_callback = cb; }
	inline void setQGraphicsTextItem_Shape_Callback(QGraphicsTextItem_Shape_Callback cb) const { qgraphicstextitem_shape_callback = cb; }
	inline void setQGraphicsTextItem_Contains_Callback(QGraphicsTextItem_Contains_Callback cb) const { qgraphicstextitem_contains_callback = cb; }
	inline void setQGraphicsTextItem_Paint_Callback(QGraphicsTextItem_Paint_Callback cb) const { qgraphicstextitem_paint_callback = cb; }
	inline void setQGraphicsTextItem_IsObscuredBy_Callback(QGraphicsTextItem_IsObscuredBy_Callback cb) const { qgraphicstextitem_isobscuredby_callback = cb; }
	inline void setQGraphicsTextItem_OpaqueArea_Callback(QGraphicsTextItem_OpaqueArea_Callback cb) const { qgraphicstextitem_opaquearea_callback = cb; }
	inline void setQGraphicsTextItem_Type_Callback(QGraphicsTextItem_Type_Callback cb) const { qgraphicstextitem_type_callback = cb; }
	inline void setQGraphicsTextItem_SceneEvent_Callback(QGraphicsTextItem_SceneEvent_Callback cb) const { qgraphicstextitem_sceneevent_callback = cb; }
	inline void setQGraphicsTextItem_MousePressEvent_Callback(QGraphicsTextItem_MousePressEvent_Callback cb) const { qgraphicstextitem_mousepressevent_callback = cb; }
	inline void setQGraphicsTextItem_MouseMoveEvent_Callback(QGraphicsTextItem_MouseMoveEvent_Callback cb) const { qgraphicstextitem_mousemoveevent_callback = cb; }
	inline void setQGraphicsTextItem_MouseReleaseEvent_Callback(QGraphicsTextItem_MouseReleaseEvent_Callback cb) const { qgraphicstextitem_mousereleaseevent_callback = cb; }
	inline void setQGraphicsTextItem_MouseDoubleClickEvent_Callback(QGraphicsTextItem_MouseDoubleClickEvent_Callback cb) const { qgraphicstextitem_mousedoubleclickevent_callback = cb; }
	inline void setQGraphicsTextItem_ContextMenuEvent_Callback(QGraphicsTextItem_ContextMenuEvent_Callback cb) const { qgraphicstextitem_contextmenuevent_callback = cb; }
	inline void setQGraphicsTextItem_KeyPressEvent_Callback(QGraphicsTextItem_KeyPressEvent_Callback cb) const { qgraphicstextitem_keypressevent_callback = cb; }
	inline void setQGraphicsTextItem_KeyReleaseEvent_Callback(QGraphicsTextItem_KeyReleaseEvent_Callback cb) const { qgraphicstextitem_keyreleaseevent_callback = cb; }
	inline void setQGraphicsTextItem_FocusInEvent_Callback(QGraphicsTextItem_FocusInEvent_Callback cb) const { qgraphicstextitem_focusinevent_callback = cb; }
	inline void setQGraphicsTextItem_FocusOutEvent_Callback(QGraphicsTextItem_FocusOutEvent_Callback cb) const { qgraphicstextitem_focusoutevent_callback = cb; }
	inline void setQGraphicsTextItem_DragEnterEvent_Callback(QGraphicsTextItem_DragEnterEvent_Callback cb) const { qgraphicstextitem_dragenterevent_callback = cb; }
	inline void setQGraphicsTextItem_DragLeaveEvent_Callback(QGraphicsTextItem_DragLeaveEvent_Callback cb) const { qgraphicstextitem_dragleaveevent_callback = cb; }
	inline void setQGraphicsTextItem_DragMoveEvent_Callback(QGraphicsTextItem_DragMoveEvent_Callback cb) const { qgraphicstextitem_dragmoveevent_callback = cb; }
	inline void setQGraphicsTextItem_DropEvent_Callback(QGraphicsTextItem_DropEvent_Callback cb) const { qgraphicstextitem_dropevent_callback = cb; }
	inline void setQGraphicsTextItem_InputMethodEvent_Callback(QGraphicsTextItem_InputMethodEvent_Callback cb) const { qgraphicstextitem_inputmethodevent_callback = cb; }
	inline void setQGraphicsTextItem_HoverEnterEvent_Callback(QGraphicsTextItem_HoverEnterEvent_Callback cb) const { qgraphicstextitem_hoverenterevent_callback = cb; }
	inline void setQGraphicsTextItem_HoverMoveEvent_Callback(QGraphicsTextItem_HoverMoveEvent_Callback cb) const { qgraphicstextitem_hovermoveevent_callback = cb; }
	inline void setQGraphicsTextItem_HoverLeaveEvent_Callback(QGraphicsTextItem_HoverLeaveEvent_Callback cb) const { qgraphicstextitem_hoverleaveevent_callback = cb; }
	inline void setQGraphicsTextItem_InputMethodQuery_Callback(QGraphicsTextItem_InputMethodQuery_Callback cb) const { qgraphicstextitem_inputmethodquery_callback = cb; }
	inline void setQGraphicsTextItem_SupportsExtension_Callback(QGraphicsTextItem_SupportsExtension_Callback cb) const { qgraphicstextitem_supportsextension_callback = cb; }
	inline void setQGraphicsTextItem_SetExtension_Callback(QGraphicsTextItem_SetExtension_Callback cb) const { qgraphicstextitem_setextension_callback = cb; }
	inline void setQGraphicsTextItem_Extension_Callback(QGraphicsTextItem_Extension_Callback cb) const { qgraphicstextitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsTextItem_BoundingRect_IsBase(bool value) const { qgraphicstextitem_boundingrect_isbase = value; }
	inline void setQGraphicsTextItem_Shape_IsBase(bool value) const { qgraphicstextitem_shape_isbase = value; }
	inline void setQGraphicsTextItem_Contains_IsBase(bool value) const { qgraphicstextitem_contains_isbase = value; }
	inline void setQGraphicsTextItem_Paint_IsBase(bool value) const { qgraphicstextitem_paint_isbase = value; }
	inline void setQGraphicsTextItem_IsObscuredBy_IsBase(bool value) const { qgraphicstextitem_isobscuredby_isbase = value; }
	inline void setQGraphicsTextItem_OpaqueArea_IsBase(bool value) const { qgraphicstextitem_opaquearea_isbase = value; }
	inline void setQGraphicsTextItem_Type_IsBase(bool value) const { qgraphicstextitem_type_isbase = value; }
	inline void setQGraphicsTextItem_SceneEvent_IsBase(bool value) const { qgraphicstextitem_sceneevent_isbase = value; }
	inline void setQGraphicsTextItem_MousePressEvent_IsBase(bool value) const { qgraphicstextitem_mousepressevent_isbase = value; }
	inline void setQGraphicsTextItem_MouseMoveEvent_IsBase(bool value) const { qgraphicstextitem_mousemoveevent_isbase = value; }
	inline void setQGraphicsTextItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicstextitem_mousereleaseevent_isbase = value; }
	inline void setQGraphicsTextItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicstextitem_mousedoubleclickevent_isbase = value; }
	inline void setQGraphicsTextItem_ContextMenuEvent_IsBase(bool value) const { qgraphicstextitem_contextmenuevent_isbase = value; }
	inline void setQGraphicsTextItem_KeyPressEvent_IsBase(bool value) const { qgraphicstextitem_keypressevent_isbase = value; }
	inline void setQGraphicsTextItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicstextitem_keyreleaseevent_isbase = value; }
	inline void setQGraphicsTextItem_FocusInEvent_IsBase(bool value) const { qgraphicstextitem_focusinevent_isbase = value; }
	inline void setQGraphicsTextItem_FocusOutEvent_IsBase(bool value) const { qgraphicstextitem_focusoutevent_isbase = value; }
	inline void setQGraphicsTextItem_DragEnterEvent_IsBase(bool value) const { qgraphicstextitem_dragenterevent_isbase = value; }
	inline void setQGraphicsTextItem_DragLeaveEvent_IsBase(bool value) const { qgraphicstextitem_dragleaveevent_isbase = value; }
	inline void setQGraphicsTextItem_DragMoveEvent_IsBase(bool value) const { qgraphicstextitem_dragmoveevent_isbase = value; }
	inline void setQGraphicsTextItem_DropEvent_IsBase(bool value) const { qgraphicstextitem_dropevent_isbase = value; }
	inline void setQGraphicsTextItem_InputMethodEvent_IsBase(bool value) const { qgraphicstextitem_inputmethodevent_isbase = value; }
	inline void setQGraphicsTextItem_HoverEnterEvent_IsBase(bool value) const { qgraphicstextitem_hoverenterevent_isbase = value; }
	inline void setQGraphicsTextItem_HoverMoveEvent_IsBase(bool value) const { qgraphicstextitem_hovermoveevent_isbase = value; }
	inline void setQGraphicsTextItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicstextitem_hoverleaveevent_isbase = value; }
	inline void setQGraphicsTextItem_InputMethodQuery_IsBase(bool value) const { qgraphicstextitem_inputmethodquery_isbase = value; }
	inline void setQGraphicsTextItem_SupportsExtension_IsBase(bool value) const { qgraphicstextitem_supportsextension_isbase = value; }
	inline void setQGraphicsTextItem_SetExtension_IsBase(bool value) const { qgraphicstextitem_setextension_isbase = value; }
	inline void setQGraphicsTextItem_Extension_IsBase(bool value) const { qgraphicstextitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicstextitem_boundingrect_isbase) {
			qgraphicstextitem_boundingrect_isbase = false;
			return QGraphicsTextItem::boundingRect();
		} else if (qgraphicstextitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicstextitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsTextItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicstextitem_shape_isbase) {
			qgraphicstextitem_shape_isbase = false;
			return QGraphicsTextItem::shape();
		} else if (qgraphicstextitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicstextitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsTextItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicstextitem_contains_isbase) {
			qgraphicstextitem_contains_isbase = false;
			return QGraphicsTextItem::contains(point);
		} else if (qgraphicstextitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicstextitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsTextItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicstextitem_paint_isbase) {
			qgraphicstextitem_paint_isbase = false;
			QGraphicsTextItem::paint(painter, option, widget);
		} else if (qgraphicstextitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicstextitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsTextItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicstextitem_isobscuredby_isbase) {
			qgraphicstextitem_isobscuredby_isbase = false;
			return QGraphicsTextItem::isObscuredBy(item);
		} else if (qgraphicstextitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicstextitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsTextItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicstextitem_opaquearea_isbase) {
			qgraphicstextitem_opaquearea_isbase = false;
			return QGraphicsTextItem::opaqueArea();
		} else if (qgraphicstextitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicstextitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsTextItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicstextitem_type_isbase) {
			qgraphicstextitem_type_isbase = false;
			return QGraphicsTextItem::type();
		} else if (qgraphicstextitem_type_callback != nullptr) {
			int callback_ret = qgraphicstextitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsTextItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool sceneEvent(QEvent* event) override {
		if (qgraphicstextitem_sceneevent_isbase) {
			qgraphicstextitem_sceneevent_isbase = false;
			return QGraphicsTextItem::sceneEvent(event);
		} else if (qgraphicstextitem_sceneevent_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qgraphicstextitem_sceneevent_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsTextItem::sceneEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicstextitem_mousepressevent_isbase) {
			qgraphicstextitem_mousepressevent_isbase = false;
			QGraphicsTextItem::mousePressEvent(event);
		} else if (qgraphicstextitem_mousepressevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicstextitem_mousepressevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::mousePressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicstextitem_mousemoveevent_isbase) {
			qgraphicstextitem_mousemoveevent_isbase = false;
			QGraphicsTextItem::mouseMoveEvent(event);
		} else if (qgraphicstextitem_mousemoveevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicstextitem_mousemoveevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::mouseMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicstextitem_mousereleaseevent_isbase) {
			qgraphicstextitem_mousereleaseevent_isbase = false;
			QGraphicsTextItem::mouseReleaseEvent(event);
		} else if (qgraphicstextitem_mousereleaseevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicstextitem_mousereleaseevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::mouseReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (qgraphicstextitem_mousedoubleclickevent_isbase) {
			qgraphicstextitem_mousedoubleclickevent_isbase = false;
			QGraphicsTextItem::mouseDoubleClickEvent(event);
		} else if (qgraphicstextitem_mousedoubleclickevent_callback != nullptr) {
			QGraphicsSceneMouseEvent* cbval1 = event;
			qgraphicstextitem_mousedoubleclickevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::mouseDoubleClickEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (qgraphicstextitem_contextmenuevent_isbase) {
			qgraphicstextitem_contextmenuevent_isbase = false;
			QGraphicsTextItem::contextMenuEvent(event);
		} else if (qgraphicstextitem_contextmenuevent_callback != nullptr) {
			QGraphicsSceneContextMenuEvent* cbval1 = event;
			qgraphicstextitem_contextmenuevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::contextMenuEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (qgraphicstextitem_keypressevent_isbase) {
			qgraphicstextitem_keypressevent_isbase = false;
			QGraphicsTextItem::keyPressEvent(event);
		} else if (qgraphicstextitem_keypressevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicstextitem_keypressevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::keyPressEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (qgraphicstextitem_keyreleaseevent_isbase) {
			qgraphicstextitem_keyreleaseevent_isbase = false;
			QGraphicsTextItem::keyReleaseEvent(event);
		} else if (qgraphicstextitem_keyreleaseevent_callback != nullptr) {
			QKeyEvent* cbval1 = event;
			qgraphicstextitem_keyreleaseevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::keyReleaseEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusInEvent(QFocusEvent* event) override {
		if (qgraphicstextitem_focusinevent_isbase) {
			qgraphicstextitem_focusinevent_isbase = false;
			QGraphicsTextItem::focusInEvent(event);
		} else if (qgraphicstextitem_focusinevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicstextitem_focusinevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::focusInEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (qgraphicstextitem_focusoutevent_isbase) {
			qgraphicstextitem_focusoutevent_isbase = false;
			QGraphicsTextItem::focusOutEvent(event);
		} else if (qgraphicstextitem_focusoutevent_callback != nullptr) {
			QFocusEvent* cbval1 = event;
			qgraphicstextitem_focusoutevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::focusOutEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicstextitem_dragenterevent_isbase) {
			qgraphicstextitem_dragenterevent_isbase = false;
			QGraphicsTextItem::dragEnterEvent(event);
		} else if (qgraphicstextitem_dragenterevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicstextitem_dragenterevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::dragEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicstextitem_dragleaveevent_isbase) {
			qgraphicstextitem_dragleaveevent_isbase = false;
			QGraphicsTextItem::dragLeaveEvent(event);
		} else if (qgraphicstextitem_dragleaveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicstextitem_dragleaveevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::dragLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicstextitem_dragmoveevent_isbase) {
			qgraphicstextitem_dragmoveevent_isbase = false;
			QGraphicsTextItem::dragMoveEvent(event);
		} else if (qgraphicstextitem_dragmoveevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicstextitem_dragmoveevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::dragMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (qgraphicstextitem_dropevent_isbase) {
			qgraphicstextitem_dropevent_isbase = false;
			QGraphicsTextItem::dropEvent(event);
		} else if (qgraphicstextitem_dropevent_callback != nullptr) {
			QGraphicsSceneDragDropEvent* cbval1 = event;
			qgraphicstextitem_dropevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (qgraphicstextitem_inputmethodevent_isbase) {
			qgraphicstextitem_inputmethodevent_isbase = false;
			QGraphicsTextItem::inputMethodEvent(event);
		} else if (qgraphicstextitem_inputmethodevent_callback != nullptr) {
			QInputMethodEvent* cbval1 = event;
			qgraphicstextitem_inputmethodevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::inputMethodEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicstextitem_hoverenterevent_isbase) {
			qgraphicstextitem_hoverenterevent_isbase = false;
			QGraphicsTextItem::hoverEnterEvent(event);
		} else if (qgraphicstextitem_hoverenterevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicstextitem_hoverenterevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::hoverEnterEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicstextitem_hovermoveevent_isbase) {
			qgraphicstextitem_hovermoveevent_isbase = false;
			QGraphicsTextItem::hoverMoveEvent(event);
		} else if (qgraphicstextitem_hovermoveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicstextitem_hovermoveevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::hoverMoveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (qgraphicstextitem_hoverleaveevent_isbase) {
			qgraphicstextitem_hoverleaveevent_isbase = false;
			QGraphicsTextItem::hoverLeaveEvent(event);
		} else if (qgraphicstextitem_hoverleaveevent_callback != nullptr) {
			QGraphicsSceneHoverEvent* cbval1 = event;
			qgraphicstextitem_hoverleaveevent_callback(this, cbval1);
		} else {
			QGraphicsTextItem::hoverLeaveEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (qgraphicstextitem_inputmethodquery_isbase) {
			qgraphicstextitem_inputmethodquery_isbase = false;
			return QGraphicsTextItem::inputMethodQuery(query);
		} else if (qgraphicstextitem_inputmethodquery_callback != nullptr) {
			int cbval1 = static_cast<int>(query);
			QVariant* callback_ret = qgraphicstextitem_inputmethodquery_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsTextItem::inputMethodQuery(query);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicstextitem_supportsextension_isbase) {
			qgraphicstextitem_supportsextension_isbase = false;
			return QGraphicsTextItem::supportsExtension(extension);
		} else if (qgraphicstextitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicstextitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsTextItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicstextitem_setextension_isbase) {
			qgraphicstextitem_setextension_isbase = false;
			QGraphicsTextItem::setExtension(extension, variant);
		} else if (qgraphicstextitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicstextitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsTextItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicstextitem_extension_isbase) {
			qgraphicstextitem_extension_isbase = false;
			return QGraphicsTextItem::extension(variant);
		} else if (qgraphicstextitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicstextitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsTextItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsTextItem_SceneEvent(QGraphicsTextItem* self, QEvent* event);
	friend bool QGraphicsTextItem_QBaseSceneEvent(QGraphicsTextItem* self, QEvent* event);
	friend void QGraphicsTextItem_MousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_QBaseMousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_MouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_QBaseMouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_MouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_QBaseMouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_MouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_QBaseMouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event);
	friend void QGraphicsTextItem_ContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsTextItem_QBaseContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event);
	friend void QGraphicsTextItem_KeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event);
	friend void QGraphicsTextItem_QBaseKeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event);
	friend void QGraphicsTextItem_KeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event);
	friend void QGraphicsTextItem_QBaseKeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event);
	friend void QGraphicsTextItem_FocusInEvent(QGraphicsTextItem* self, QFocusEvent* event);
	friend void QGraphicsTextItem_QBaseFocusInEvent(QGraphicsTextItem* self, QFocusEvent* event);
	friend void QGraphicsTextItem_FocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event);
	friend void QGraphicsTextItem_QBaseFocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event);
	friend void QGraphicsTextItem_DragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_QBaseDragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_DragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_QBaseDragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_DragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_QBaseDragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_DropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_QBaseDropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event);
	friend void QGraphicsTextItem_InputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event);
	friend void QGraphicsTextItem_QBaseInputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event);
	friend void QGraphicsTextItem_HoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsTextItem_QBaseHoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsTextItem_HoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsTextItem_QBaseHoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsTextItem_HoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend void QGraphicsTextItem_QBaseHoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event);
	friend QVariant* QGraphicsTextItem_InputMethodQuery(const QGraphicsTextItem* self, int query);
	friend QVariant* QGraphicsTextItem_QBaseInputMethodQuery(const QGraphicsTextItem* self, int query);
	friend bool QGraphicsTextItem_SupportsExtension(const QGraphicsTextItem* self, int extension);
	friend bool QGraphicsTextItem_QBaseSupportsExtension(const QGraphicsTextItem* self, int extension);
	friend void QGraphicsTextItem_SetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant);
	friend void QGraphicsTextItem_QBaseSetExtension(QGraphicsTextItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsTextItem_Extension(const QGraphicsTextItem* self, const QVariant* variant);
	friend QVariant* QGraphicsTextItem_QBaseExtension(const QGraphicsTextItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsSimpleTextItem so that we can call protected methods
class VirtualQGraphicsSimpleTextItem final : public QGraphicsSimpleTextItem {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsSimpleTextItem= true;

	// Virtual class public types (including callbacks)
	using QGraphicsSimpleTextItem_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsSimpleTextItem_Shape_Callback = QPainterPath* (*)();
	using QGraphicsSimpleTextItem_Contains_Callback = bool (*)(const QGraphicsSimpleTextItem*, const QPointF*);
	using QGraphicsSimpleTextItem_Paint_Callback = void (*)(QGraphicsSimpleTextItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsSimpleTextItem_IsObscuredBy_Callback = bool (*)(const QGraphicsSimpleTextItem*, const QGraphicsItem*);
	using QGraphicsSimpleTextItem_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsSimpleTextItem_Type_Callback = int (*)();
	using QGraphicsSimpleTextItem_SupportsExtension_Callback = bool (*)(const QGraphicsSimpleTextItem*, int);
	using QGraphicsSimpleTextItem_SetExtension_Callback = void (*)(QGraphicsSimpleTextItem*, int, const QVariant*);
	using QGraphicsSimpleTextItem_Extension_Callback = QVariant* (*)(const QGraphicsSimpleTextItem*, const QVariant*);

protected:
	// Instance callback storage
	mutable QGraphicsSimpleTextItem_BoundingRect_Callback qgraphicssimpletextitem_boundingrect_callback = nullptr;
	mutable QGraphicsSimpleTextItem_Shape_Callback qgraphicssimpletextitem_shape_callback = nullptr;
	mutable QGraphicsSimpleTextItem_Contains_Callback qgraphicssimpletextitem_contains_callback = nullptr;
	mutable QGraphicsSimpleTextItem_Paint_Callback qgraphicssimpletextitem_paint_callback = nullptr;
	mutable QGraphicsSimpleTextItem_IsObscuredBy_Callback qgraphicssimpletextitem_isobscuredby_callback = nullptr;
	mutable QGraphicsSimpleTextItem_OpaqueArea_Callback qgraphicssimpletextitem_opaquearea_callback = nullptr;
	mutable QGraphicsSimpleTextItem_Type_Callback qgraphicssimpletextitem_type_callback = nullptr;
	mutable QGraphicsSimpleTextItem_SupportsExtension_Callback qgraphicssimpletextitem_supportsextension_callback = nullptr;
	mutable QGraphicsSimpleTextItem_SetExtension_Callback qgraphicssimpletextitem_setextension_callback = nullptr;
	mutable QGraphicsSimpleTextItem_Extension_Callback qgraphicssimpletextitem_extension_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicssimpletextitem_boundingrect_isbase = false;
    mutable bool qgraphicssimpletextitem_shape_isbase = false;
    mutable bool qgraphicssimpletextitem_contains_isbase = false;
    mutable bool qgraphicssimpletextitem_paint_isbase = false;
    mutable bool qgraphicssimpletextitem_isobscuredby_isbase = false;
    mutable bool qgraphicssimpletextitem_opaquearea_isbase = false;
    mutable bool qgraphicssimpletextitem_type_isbase = false;
    mutable bool qgraphicssimpletextitem_supportsextension_isbase = false;
    mutable bool qgraphicssimpletextitem_setextension_isbase = false;
    mutable bool qgraphicssimpletextitem_extension_isbase = false;

public:
	VirtualQGraphicsSimpleTextItem(): QGraphicsSimpleTextItem() {};
	VirtualQGraphicsSimpleTextItem(const QString& text): QGraphicsSimpleTextItem(text) {};
	VirtualQGraphicsSimpleTextItem(QGraphicsItem* parent): QGraphicsSimpleTextItem(parent) {};
	VirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent): QGraphicsSimpleTextItem(text, parent) {};

	~VirtualQGraphicsSimpleTextItem() {
		qgraphicssimpletextitem_boundingrect_callback = nullptr;
		qgraphicssimpletextitem_shape_callback = nullptr;
		qgraphicssimpletextitem_contains_callback = nullptr;
		qgraphicssimpletextitem_paint_callback = nullptr;
		qgraphicssimpletextitem_isobscuredby_callback = nullptr;
		qgraphicssimpletextitem_opaquearea_callback = nullptr;
		qgraphicssimpletextitem_type_callback = nullptr;
		qgraphicssimpletextitem_supportsextension_callback = nullptr;
		qgraphicssimpletextitem_setextension_callback = nullptr;
		qgraphicssimpletextitem_extension_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsSimpleTextItem_BoundingRect_Callback(QGraphicsSimpleTextItem_BoundingRect_Callback cb) const { qgraphicssimpletextitem_boundingrect_callback = cb; }
	inline void setQGraphicsSimpleTextItem_Shape_Callback(QGraphicsSimpleTextItem_Shape_Callback cb) const { qgraphicssimpletextitem_shape_callback = cb; }
	inline void setQGraphicsSimpleTextItem_Contains_Callback(QGraphicsSimpleTextItem_Contains_Callback cb) const { qgraphicssimpletextitem_contains_callback = cb; }
	inline void setQGraphicsSimpleTextItem_Paint_Callback(QGraphicsSimpleTextItem_Paint_Callback cb) const { qgraphicssimpletextitem_paint_callback = cb; }
	inline void setQGraphicsSimpleTextItem_IsObscuredBy_Callback(QGraphicsSimpleTextItem_IsObscuredBy_Callback cb) const { qgraphicssimpletextitem_isobscuredby_callback = cb; }
	inline void setQGraphicsSimpleTextItem_OpaqueArea_Callback(QGraphicsSimpleTextItem_OpaqueArea_Callback cb) const { qgraphicssimpletextitem_opaquearea_callback = cb; }
	inline void setQGraphicsSimpleTextItem_Type_Callback(QGraphicsSimpleTextItem_Type_Callback cb) const { qgraphicssimpletextitem_type_callback = cb; }
	inline void setQGraphicsSimpleTextItem_SupportsExtension_Callback(QGraphicsSimpleTextItem_SupportsExtension_Callback cb) const { qgraphicssimpletextitem_supportsextension_callback = cb; }
	inline void setQGraphicsSimpleTextItem_SetExtension_Callback(QGraphicsSimpleTextItem_SetExtension_Callback cb) const { qgraphicssimpletextitem_setextension_callback = cb; }
	inline void setQGraphicsSimpleTextItem_Extension_Callback(QGraphicsSimpleTextItem_Extension_Callback cb) const { qgraphicssimpletextitem_extension_callback = cb; }

// Base flag setters
	inline void setQGraphicsSimpleTextItem_BoundingRect_IsBase(bool value) const { qgraphicssimpletextitem_boundingrect_isbase = value; }
	inline void setQGraphicsSimpleTextItem_Shape_IsBase(bool value) const { qgraphicssimpletextitem_shape_isbase = value; }
	inline void setQGraphicsSimpleTextItem_Contains_IsBase(bool value) const { qgraphicssimpletextitem_contains_isbase = value; }
	inline void setQGraphicsSimpleTextItem_Paint_IsBase(bool value) const { qgraphicssimpletextitem_paint_isbase = value; }
	inline void setQGraphicsSimpleTextItem_IsObscuredBy_IsBase(bool value) const { qgraphicssimpletextitem_isobscuredby_isbase = value; }
	inline void setQGraphicsSimpleTextItem_OpaqueArea_IsBase(bool value) const { qgraphicssimpletextitem_opaquearea_isbase = value; }
	inline void setQGraphicsSimpleTextItem_Type_IsBase(bool value) const { qgraphicssimpletextitem_type_isbase = value; }
	inline void setQGraphicsSimpleTextItem_SupportsExtension_IsBase(bool value) const { qgraphicssimpletextitem_supportsextension_isbase = value; }
	inline void setQGraphicsSimpleTextItem_SetExtension_IsBase(bool value) const { qgraphicssimpletextitem_setextension_isbase = value; }
	inline void setQGraphicsSimpleTextItem_Extension_IsBase(bool value) const { qgraphicssimpletextitem_extension_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicssimpletextitem_boundingrect_isbase) {
			qgraphicssimpletextitem_boundingrect_isbase = false;
			return QGraphicsSimpleTextItem::boundingRect();
		} else if (qgraphicssimpletextitem_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicssimpletextitem_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsSimpleTextItem::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath shape() const override {
		if (qgraphicssimpletextitem_shape_isbase) {
			qgraphicssimpletextitem_shape_isbase = false;
			return QGraphicsSimpleTextItem::shape();
		} else if (qgraphicssimpletextitem_shape_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicssimpletextitem_shape_callback();
			return *callback_ret;
		} else {
			return QGraphicsSimpleTextItem::shape();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool contains(const QPointF& point) const override {
		if (qgraphicssimpletextitem_contains_isbase) {
			qgraphicssimpletextitem_contains_isbase = false;
			return QGraphicsSimpleTextItem::contains(point);
		} else if (qgraphicssimpletextitem_contains_callback != nullptr) {
			const QPointF* cbval1 = (const QPointF*)&point;
			bool callback_ret = qgraphicssimpletextitem_contains_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsSimpleTextItem::contains(point);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicssimpletextitem_paint_isbase) {
			qgraphicssimpletextitem_paint_isbase = false;
			QGraphicsSimpleTextItem::paint(painter, option, widget);
		} else if (qgraphicssimpletextitem_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicssimpletextitem_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsSimpleTextItem::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicssimpletextitem_isobscuredby_isbase) {
			qgraphicssimpletextitem_isobscuredby_isbase = false;
			return QGraphicsSimpleTextItem::isObscuredBy(item);
		} else if (qgraphicssimpletextitem_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicssimpletextitem_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsSimpleTextItem::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicssimpletextitem_opaquearea_isbase) {
			qgraphicssimpletextitem_opaquearea_isbase = false;
			return QGraphicsSimpleTextItem::opaqueArea();
		} else if (qgraphicssimpletextitem_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicssimpletextitem_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsSimpleTextItem::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicssimpletextitem_type_isbase) {
			qgraphicssimpletextitem_type_isbase = false;
			return QGraphicsSimpleTextItem::type();
		} else if (qgraphicssimpletextitem_type_callback != nullptr) {
			int callback_ret = qgraphicssimpletextitem_type_callback();
			return callback_ret;
		} else {
			return QGraphicsSimpleTextItem::type();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsExtension(Extension extension) const override {
		if (qgraphicssimpletextitem_supportsextension_isbase) {
			qgraphicssimpletextitem_supportsextension_isbase = false;
			return QGraphicsSimpleTextItem::supportsExtension(extension);
		} else if (qgraphicssimpletextitem_supportsextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			bool callback_ret = qgraphicssimpletextitem_supportsextension_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsSimpleTextItem::supportsExtension(extension);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setExtension(Extension extension, const QVariant& variant) override {
		if (qgraphicssimpletextitem_setextension_isbase) {
			qgraphicssimpletextitem_setextension_isbase = false;
			QGraphicsSimpleTextItem::setExtension(extension, variant);
		} else if (qgraphicssimpletextitem_setextension_callback != nullptr) {
			int cbval1 = static_cast<int>(extension);
			const QVariant* cbval2 = (const QVariant*)&variant;
			qgraphicssimpletextitem_setextension_callback(this, cbval1, cbval2);
		} else {
			QGraphicsSimpleTextItem::setExtension(extension, variant);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant extension(const QVariant& variant) const override {
		if (qgraphicssimpletextitem_extension_isbase) {
			qgraphicssimpletextitem_extension_isbase = false;
			return QGraphicsSimpleTextItem::extension(variant);
		} else if (qgraphicssimpletextitem_extension_callback != nullptr) {
			const QVariant* cbval1 = (const QVariant*)&variant;
			QVariant* callback_ret = qgraphicssimpletextitem_extension_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsSimpleTextItem::extension(variant);
		}
	}

	// Friend functions
	friend bool QGraphicsSimpleTextItem_SupportsExtension(const QGraphicsSimpleTextItem* self, int extension);
	friend bool QGraphicsSimpleTextItem_QBaseSupportsExtension(const QGraphicsSimpleTextItem* self, int extension);
	friend void QGraphicsSimpleTextItem_SetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant);
	friend void QGraphicsSimpleTextItem_QBaseSetExtension(QGraphicsSimpleTextItem* self, int extension, const QVariant* variant);
	friend QVariant* QGraphicsSimpleTextItem_Extension(const QGraphicsSimpleTextItem* self, const QVariant* variant);
	friend QVariant* QGraphicsSimpleTextItem_QBaseExtension(const QGraphicsSimpleTextItem* self, const QVariant* variant);
};

// This class is a subclass of QGraphicsItemGroup so that we can call protected methods
class VirtualQGraphicsItemGroup final : public QGraphicsItemGroup {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsItemGroup= true;

	// Virtual class public types (including callbacks)
	using QGraphicsItemGroup_BoundingRect_Callback = QRectF* (*)();
	using QGraphicsItemGroup_Paint_Callback = void (*)(QGraphicsItemGroup*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
	using QGraphicsItemGroup_IsObscuredBy_Callback = bool (*)(const QGraphicsItemGroup*, const QGraphicsItem*);
	using QGraphicsItemGroup_OpaqueArea_Callback = QPainterPath* (*)();
	using QGraphicsItemGroup_Type_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QGraphicsItemGroup_BoundingRect_Callback qgraphicsitemgroup_boundingrect_callback = nullptr;
	mutable QGraphicsItemGroup_Paint_Callback qgraphicsitemgroup_paint_callback = nullptr;
	mutable QGraphicsItemGroup_IsObscuredBy_Callback qgraphicsitemgroup_isobscuredby_callback = nullptr;
	mutable QGraphicsItemGroup_OpaqueArea_Callback qgraphicsitemgroup_opaquearea_callback = nullptr;
	mutable QGraphicsItemGroup_Type_Callback qgraphicsitemgroup_type_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsitemgroup_boundingrect_isbase = false;
    mutable bool qgraphicsitemgroup_paint_isbase = false;
    mutable bool qgraphicsitemgroup_isobscuredby_isbase = false;
    mutable bool qgraphicsitemgroup_opaquearea_isbase = false;
    mutable bool qgraphicsitemgroup_type_isbase = false;

public:
	VirtualQGraphicsItemGroup(): QGraphicsItemGroup() {};
	VirtualQGraphicsItemGroup(QGraphicsItem* parent): QGraphicsItemGroup(parent) {};

	~VirtualQGraphicsItemGroup() {
		qgraphicsitemgroup_boundingrect_callback = nullptr;
		qgraphicsitemgroup_paint_callback = nullptr;
		qgraphicsitemgroup_isobscuredby_callback = nullptr;
		qgraphicsitemgroup_opaquearea_callback = nullptr;
		qgraphicsitemgroup_type_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsItemGroup_BoundingRect_Callback(QGraphicsItemGroup_BoundingRect_Callback cb) const { qgraphicsitemgroup_boundingrect_callback = cb; }
	inline void setQGraphicsItemGroup_Paint_Callback(QGraphicsItemGroup_Paint_Callback cb) const { qgraphicsitemgroup_paint_callback = cb; }
	inline void setQGraphicsItemGroup_IsObscuredBy_Callback(QGraphicsItemGroup_IsObscuredBy_Callback cb) const { qgraphicsitemgroup_isobscuredby_callback = cb; }
	inline void setQGraphicsItemGroup_OpaqueArea_Callback(QGraphicsItemGroup_OpaqueArea_Callback cb) const { qgraphicsitemgroup_opaquearea_callback = cb; }
	inline void setQGraphicsItemGroup_Type_Callback(QGraphicsItemGroup_Type_Callback cb) const { qgraphicsitemgroup_type_callback = cb; }

// Base flag setters
	inline void setQGraphicsItemGroup_BoundingRect_IsBase(bool value) const { qgraphicsitemgroup_boundingrect_isbase = value; }
	inline void setQGraphicsItemGroup_Paint_IsBase(bool value) const { qgraphicsitemgroup_paint_isbase = value; }
	inline void setQGraphicsItemGroup_IsObscuredBy_IsBase(bool value) const { qgraphicsitemgroup_isobscuredby_isbase = value; }
	inline void setQGraphicsItemGroup_OpaqueArea_IsBase(bool value) const { qgraphicsitemgroup_opaquearea_isbase = value; }
	inline void setQGraphicsItemGroup_Type_IsBase(bool value) const { qgraphicsitemgroup_type_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRect() const override {
		if (qgraphicsitemgroup_boundingrect_isbase) {
			qgraphicsitemgroup_boundingrect_isbase = false;
			return QGraphicsItemGroup::boundingRect();
		} else if (qgraphicsitemgroup_boundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicsitemgroup_boundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsItemGroup::boundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (qgraphicsitemgroup_paint_isbase) {
			qgraphicsitemgroup_paint_isbase = false;
			QGraphicsItemGroup::paint(painter, option, widget);
		} else if (qgraphicsitemgroup_paint_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QStyleOptionGraphicsItem* cbval2 = option;
			QWidget* cbval3 = widget;
			qgraphicsitemgroup_paint_callback(this, cbval1, cbval2, cbval3);
		} else {
			QGraphicsItemGroup::paint(painter, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (qgraphicsitemgroup_isobscuredby_isbase) {
			qgraphicsitemgroup_isobscuredby_isbase = false;
			return QGraphicsItemGroup::isObscuredBy(item);
		} else if (qgraphicsitemgroup_isobscuredby_callback != nullptr) {
			const QGraphicsItem* cbval1 = item;
			bool callback_ret = qgraphicsitemgroup_isobscuredby_callback(this, cbval1);
			return callback_ret;
		} else {
			return QGraphicsItemGroup::isObscuredBy(item);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPainterPath opaqueArea() const override {
		if (qgraphicsitemgroup_opaquearea_isbase) {
			qgraphicsitemgroup_opaquearea_isbase = false;
			return QGraphicsItemGroup::opaqueArea();
		} else if (qgraphicsitemgroup_opaquearea_callback != nullptr) {
			QPainterPath* callback_ret = qgraphicsitemgroup_opaquearea_callback();
			return *callback_ret;
		} else {
			return QGraphicsItemGroup::opaqueArea();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int type() const override {
		if (qgraphicsitemgroup_type_isbase) {
			qgraphicsitemgroup_type_isbase = false;
			return QGraphicsItemGroup::type();
		} else if (qgraphicsitemgroup_type_callback != nullptr) {
			int callback_ret = qgraphicsitemgroup_type_callback();
			return callback_ret;
		} else {
			return QGraphicsItemGroup::type();
		}
	}
};

#endif


