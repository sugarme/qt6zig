#pragma once
#ifndef QTREEWIDGET_H_C_LIBVIRTUAL
#define QTREEWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTreeWidgetItem so that we can call protected methods
class VirtualQTreeWidgetItem final : public QTreeWidgetItem {

public:
	// Virtual class boolean flag
	bool isVirtualQTreeWidgetItem= true;

	// Virtual class public types (including callbacks)
	using QTreeWidgetItem_Data_Callback = QVariant* (*)(const QTreeWidgetItem*, int, int);
	using QTreeWidgetItem_SetData_Callback = void (*)(QTreeWidgetItem*, int, int, const QVariant*);
	using QTreeWidgetItem_OperatorLesser_Callback = bool (*)(const QTreeWidgetItem*, const QTreeWidgetItem*);
	using QTreeWidgetItem_Read_Callback = void (*)(QTreeWidgetItem*, QDataStream*);
	using QTreeWidgetItem_Write_Callback = void (*)(const QTreeWidgetItem*, QDataStream*);
	using QTreeWidgetItem_EmitDataChanged_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QTreeWidgetItem_Data_Callback qtreewidgetitem_data_callback = nullptr;
	mutable QTreeWidgetItem_SetData_Callback qtreewidgetitem_setdata_callback = nullptr;
	mutable QTreeWidgetItem_OperatorLesser_Callback qtreewidgetitem_operatorlesser_callback = nullptr;
	mutable QTreeWidgetItem_Read_Callback qtreewidgetitem_read_callback = nullptr;
	mutable QTreeWidgetItem_Write_Callback qtreewidgetitem_write_callback = nullptr;
	mutable QTreeWidgetItem_EmitDataChanged_Callback qtreewidgetitem_emitdatachanged_callback = nullptr;

	// Instance base flags
    mutable bool qtreewidgetitem_data_isbase = false;
    mutable bool qtreewidgetitem_setdata_isbase = false;
    mutable bool qtreewidgetitem_operatorlesser_isbase = false;
    mutable bool qtreewidgetitem_read_isbase = false;
    mutable bool qtreewidgetitem_write_isbase = false;
    mutable bool qtreewidgetitem_emitdatachanged_isbase = false;

public:
	VirtualQTreeWidgetItem(): QTreeWidgetItem() {};
	VirtualQTreeWidgetItem(const QList<QString>& strings): QTreeWidgetItem(strings) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview): QTreeWidgetItem(treeview) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview, const QList<QString>& strings): QTreeWidgetItem(treeview, strings) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after): QTreeWidgetItem(treeview, after) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent): QTreeWidgetItem(parent) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QList<QString>& strings): QTreeWidgetItem(parent, strings) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after): QTreeWidgetItem(parent, after) {};
	VirtualQTreeWidgetItem(const QTreeWidgetItem& other): QTreeWidgetItem(other) {};
	VirtualQTreeWidgetItem(int typeVal): QTreeWidgetItem(typeVal) {};
	VirtualQTreeWidgetItem(const QList<QString>& strings, int typeVal): QTreeWidgetItem(strings, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview, int typeVal): QTreeWidgetItem(treeview, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview, const QList<QString>& strings, int typeVal): QTreeWidgetItem(treeview, strings, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal): QTreeWidgetItem(treeview, after, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent, int typeVal): QTreeWidgetItem(parent, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent, const QList<QString>& strings, int typeVal): QTreeWidgetItem(parent, strings, typeVal) {};
	VirtualQTreeWidgetItem(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal): QTreeWidgetItem(parent, after, typeVal) {};

	~VirtualQTreeWidgetItem() {
		qtreewidgetitem_data_callback = nullptr;
		qtreewidgetitem_setdata_callback = nullptr;
		qtreewidgetitem_operatorlesser_callback = nullptr;
		qtreewidgetitem_read_callback = nullptr;
		qtreewidgetitem_write_callback = nullptr;
		qtreewidgetitem_emitdatachanged_callback = nullptr;
	}

// Callback setters
	inline void setQTreeWidgetItem_Data_Callback(QTreeWidgetItem_Data_Callback cb) const { qtreewidgetitem_data_callback = cb; }
	inline void setQTreeWidgetItem_SetData_Callback(QTreeWidgetItem_SetData_Callback cb) const { qtreewidgetitem_setdata_callback = cb; }
	inline void setQTreeWidgetItem_OperatorLesser_Callback(QTreeWidgetItem_OperatorLesser_Callback cb) const { qtreewidgetitem_operatorlesser_callback = cb; }
	inline void setQTreeWidgetItem_Read_Callback(QTreeWidgetItem_Read_Callback cb) const { qtreewidgetitem_read_callback = cb; }
	inline void setQTreeWidgetItem_Write_Callback(QTreeWidgetItem_Write_Callback cb) const { qtreewidgetitem_write_callback = cb; }
	inline void setQTreeWidgetItem_EmitDataChanged_Callback(QTreeWidgetItem_EmitDataChanged_Callback cb) const { qtreewidgetitem_emitdatachanged_callback = cb; }

// Base flag setters
	inline void setQTreeWidgetItem_Data_IsBase(bool value) const { qtreewidgetitem_data_isbase = value; }
	inline void setQTreeWidgetItem_SetData_IsBase(bool value) const { qtreewidgetitem_setdata_isbase = value; }
	inline void setQTreeWidgetItem_OperatorLesser_IsBase(bool value) const { qtreewidgetitem_operatorlesser_isbase = value; }
	inline void setQTreeWidgetItem_Read_IsBase(bool value) const { qtreewidgetitem_read_isbase = value; }
	inline void setQTreeWidgetItem_Write_IsBase(bool value) const { qtreewidgetitem_write_isbase = value; }
	inline void setQTreeWidgetItem_EmitDataChanged_IsBase(bool value) const { qtreewidgetitem_emitdatachanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(int column, int role) const override {
		if (qtreewidgetitem_data_isbase) {
			qtreewidgetitem_data_isbase = false;
			return QTreeWidgetItem::data(column, role);
		} else if (qtreewidgetitem_data_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = role;
			QVariant* callback_ret = qtreewidgetitem_data_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTreeWidgetItem::data(column, role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setData(int column, int role, const QVariant& value) override {
		if (qtreewidgetitem_setdata_isbase) {
			qtreewidgetitem_setdata_isbase = false;
			QTreeWidgetItem::setData(column, role, value);
		} else if (qtreewidgetitem_setdata_callback != nullptr) {
			int cbval1 = column;
			int cbval2 = role;
			const QVariant* cbval3 = (const QVariant*)&value;
			qtreewidgetitem_setdata_callback(this, cbval1, cbval2, cbval3);
		} else {
			QTreeWidgetItem::setData(column, role, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool operator<(const QTreeWidgetItem& other) const override {
		if (qtreewidgetitem_operatorlesser_isbase) {
			qtreewidgetitem_operatorlesser_isbase = false;
			return QTreeWidgetItem::operator<(other);
		} else if (qtreewidgetitem_operatorlesser_callback != nullptr) {
			const QTreeWidgetItem* cbval1 = (const QTreeWidgetItem*)&other;
			bool callback_ret = qtreewidgetitem_operatorlesser_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeWidgetItem::operator<(other);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void read(QDataStream& in) override {
		if (qtreewidgetitem_read_isbase) {
			qtreewidgetitem_read_isbase = false;
			QTreeWidgetItem::read(in);
		} else if (qtreewidgetitem_read_callback != nullptr) {
			QDataStream* cbval1 = &in;
			qtreewidgetitem_read_callback(this, cbval1);
		} else {
			QTreeWidgetItem::read(in);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void write(QDataStream& out) const override {
		if (qtreewidgetitem_write_isbase) {
			qtreewidgetitem_write_isbase = false;
			QTreeWidgetItem::write(out);
		} else if (qtreewidgetitem_write_callback != nullptr) {
			QDataStream* cbval1 = &out;
			qtreewidgetitem_write_callback(this, cbval1);
		} else {
			QTreeWidgetItem::write(out);
		}
	}

	// Virtual method for C ABI access and custom callback
	void emitDataChanged() {
		if (qtreewidgetitem_emitdatachanged_isbase) {
			qtreewidgetitem_emitdatachanged_isbase = false;
			QTreeWidgetItem::emitDataChanged();
		} else if (qtreewidgetitem_emitdatachanged_callback != nullptr) {
			qtreewidgetitem_emitdatachanged_callback();
		} else {
			QTreeWidgetItem::emitDataChanged();
		}
	}

	// Friend functions
	friend void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self);
	friend void QTreeWidgetItem_QBaseEmitDataChanged(QTreeWidgetItem* self);
};

// This class is a subclass of QTreeWidget so that we can call protected methods
class VirtualQTreeWidget final : public QTreeWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQTreeWidget= true;

	// Virtual class public types (including callbacks)
	using QTreeWidget_SetSelectionModel_Callback = void (*)(QTreeWidget*, QItemSelectionModel*);
	using QTreeWidget_Event_Callback = bool (*)(QTreeWidget*, QEvent*);
	using QTreeWidget_MimeTypes_Callback = libqt_list (*)();
	using QTreeWidget_MimeData_Callback = QMimeData* (*)(const QTreeWidget*, libqt_list);
	using QTreeWidget_DropMimeData_Callback = bool (*)(QTreeWidget*, QTreeWidgetItem*, int, const QMimeData*, int);
	using QTreeWidget_SupportedDropActions_Callback = int (*)();
	using QTreeWidget_DropEvent_Callback = void (*)(QTreeWidget*, QDropEvent*);

protected:
	// Instance callback storage
	mutable QTreeWidget_SetSelectionModel_Callback qtreewidget_setselectionmodel_callback = nullptr;
	mutable QTreeWidget_Event_Callback qtreewidget_event_callback = nullptr;
	mutable QTreeWidget_MimeTypes_Callback qtreewidget_mimetypes_callback = nullptr;
	mutable QTreeWidget_MimeData_Callback qtreewidget_mimedata_callback = nullptr;
	mutable QTreeWidget_DropMimeData_Callback qtreewidget_dropmimedata_callback = nullptr;
	mutable QTreeWidget_SupportedDropActions_Callback qtreewidget_supporteddropactions_callback = nullptr;
	mutable QTreeWidget_DropEvent_Callback qtreewidget_dropevent_callback = nullptr;

	// Instance base flags
    mutable bool qtreewidget_setselectionmodel_isbase = false;
    mutable bool qtreewidget_event_isbase = false;
    mutable bool qtreewidget_mimetypes_isbase = false;
    mutable bool qtreewidget_mimedata_isbase = false;
    mutable bool qtreewidget_dropmimedata_isbase = false;
    mutable bool qtreewidget_supporteddropactions_isbase = false;
    mutable bool qtreewidget_dropevent_isbase = false;

public:
	VirtualQTreeWidget(QWidget* parent): QTreeWidget(parent) {};
	VirtualQTreeWidget(): QTreeWidget() {};

	~VirtualQTreeWidget() {
		qtreewidget_setselectionmodel_callback = nullptr;
		qtreewidget_event_callback = nullptr;
		qtreewidget_mimetypes_callback = nullptr;
		qtreewidget_mimedata_callback = nullptr;
		qtreewidget_dropmimedata_callback = nullptr;
		qtreewidget_supporteddropactions_callback = nullptr;
		qtreewidget_dropevent_callback = nullptr;
	}

// Callback setters
	inline void setQTreeWidget_SetSelectionModel_Callback(QTreeWidget_SetSelectionModel_Callback cb) const { qtreewidget_setselectionmodel_callback = cb; }
	inline void setQTreeWidget_Event_Callback(QTreeWidget_Event_Callback cb) const { qtreewidget_event_callback = cb; }
	inline void setQTreeWidget_MimeTypes_Callback(QTreeWidget_MimeTypes_Callback cb) const { qtreewidget_mimetypes_callback = cb; }
	inline void setQTreeWidget_MimeData_Callback(QTreeWidget_MimeData_Callback cb) const { qtreewidget_mimedata_callback = cb; }
	inline void setQTreeWidget_DropMimeData_Callback(QTreeWidget_DropMimeData_Callback cb) const { qtreewidget_dropmimedata_callback = cb; }
	inline void setQTreeWidget_SupportedDropActions_Callback(QTreeWidget_SupportedDropActions_Callback cb) const { qtreewidget_supporteddropactions_callback = cb; }
	inline void setQTreeWidget_DropEvent_Callback(QTreeWidget_DropEvent_Callback cb) const { qtreewidget_dropevent_callback = cb; }

// Base flag setters
	inline void setQTreeWidget_SetSelectionModel_IsBase(bool value) const { qtreewidget_setselectionmodel_isbase = value; }
	inline void setQTreeWidget_Event_IsBase(bool value) const { qtreewidget_event_isbase = value; }
	inline void setQTreeWidget_MimeTypes_IsBase(bool value) const { qtreewidget_mimetypes_isbase = value; }
	inline void setQTreeWidget_MimeData_IsBase(bool value) const { qtreewidget_mimedata_isbase = value; }
	inline void setQTreeWidget_DropMimeData_IsBase(bool value) const { qtreewidget_dropmimedata_isbase = value; }
	inline void setQTreeWidget_SupportedDropActions_IsBase(bool value) const { qtreewidget_supporteddropactions_isbase = value; }
	inline void setQTreeWidget_DropEvent_IsBase(bool value) const { qtreewidget_dropevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qtreewidget_setselectionmodel_isbase) {
			qtreewidget_setselectionmodel_isbase = false;
			QTreeWidget::setSelectionModel(selectionModel);
		} else if (qtreewidget_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qtreewidget_setselectionmodel_callback(this, cbval1);
		} else {
			QTreeWidget::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtreewidget_event_isbase) {
			qtreewidget_event_isbase = false;
			return QTreeWidget::event(e);
		} else if (qtreewidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtreewidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeWidget::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qtreewidget_mimetypes_isbase) {
			qtreewidget_mimetypes_isbase = false;
			return QTreeWidget::mimeTypes();
		} else if (qtreewidget_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qtreewidget_mimetypes_callback();
			return QList<QString>();
		} else {
			return QTreeWidget::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QTreeWidgetItem *>& items) const override {
		if (qtreewidget_mimedata_isbase) {
			qtreewidget_mimedata_isbase = false;
			return QTreeWidget::mimeData(items);
		} else if (qtreewidget_mimedata_callback != nullptr) {
			libqt_list cbval1;
			cbval1.len = items.size();
			cbval1.data = nullptr;
			QMimeData* callback_ret = qtreewidget_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTreeWidget::mimeData(items);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(QTreeWidgetItem* parent, int index, const QMimeData* data, Qt::DropAction action) override {
		if (qtreewidget_dropmimedata_isbase) {
			qtreewidget_dropmimedata_isbase = false;
			return QTreeWidget::dropMimeData(parent, index, data, action);
		} else if (qtreewidget_dropmimedata_callback != nullptr) {
			QTreeWidgetItem* cbval1 = parent;
			int cbval2 = index;
			const QMimeData* cbval3 = data;
			int cbval4 = static_cast<int>(action);
			bool callback_ret = qtreewidget_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QTreeWidget::dropMimeData(parent, index, data, action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qtreewidget_supporteddropactions_isbase) {
			qtreewidget_supporteddropactions_isbase = false;
			return QTreeWidget::supportedDropActions();
		} else if (qtreewidget_supporteddropactions_callback != nullptr) {
			int callback_ret = qtreewidget_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QTreeWidget::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qtreewidget_dropevent_isbase) {
			qtreewidget_dropevent_isbase = false;
			QTreeWidget::dropEvent(event);
		} else if (qtreewidget_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qtreewidget_dropevent_callback(this, cbval1);
		} else {
			QTreeWidget::dropEvent(event);
		}
	}

	// Friend functions
	friend bool QTreeWidget_Event(QTreeWidget* self, QEvent* e);
	friend bool QTreeWidget_QBaseEvent(QTreeWidget* self, QEvent* e);
	friend libqt_list QTreeWidget_MimeTypes(const QTreeWidget* self);
	friend libqt_list QTreeWidget_QBaseMimeTypes(const QTreeWidget* self);
	friend QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, const libqt_list items);
	friend QMimeData* QTreeWidget_QBaseMimeData(const QTreeWidget* self, const libqt_list items);
	friend bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action);
	friend bool QTreeWidget_QBaseDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action);
	friend int QTreeWidget_SupportedDropActions(const QTreeWidget* self);
	friend int QTreeWidget_QBaseSupportedDropActions(const QTreeWidget* self);
	friend void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event);
	friend void QTreeWidget_QBaseDropEvent(QTreeWidget* self, QDropEvent* event);
};

#endif


