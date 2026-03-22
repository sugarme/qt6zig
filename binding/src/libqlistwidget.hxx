#pragma once
#ifndef QLISTWIDGET_H_C_LIBVIRTUAL
#define QLISTWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QListWidgetItem so that we can call protected methods
class VirtualQListWidgetItem final : public QListWidgetItem {

public:
	// Virtual class boolean flag
	bool isVirtualQListWidgetItem= true;

	// Virtual class public types (including callbacks)
	using QListWidgetItem_Data_Callback = QVariant* (*)(const QListWidgetItem*, int);
	using QListWidgetItem_SetData_Callback = void (*)(QListWidgetItem*, int, const QVariant*);
	using QListWidgetItem_OperatorLesser_Callback = bool (*)(const QListWidgetItem*, const QListWidgetItem*);
	using QListWidgetItem_Read_Callback = void (*)(QListWidgetItem*, QDataStream*);
	using QListWidgetItem_Write_Callback = void (*)(const QListWidgetItem*, QDataStream*);

protected:
	// Instance callback storage
	mutable QListWidgetItem_Data_Callback qlistwidgetitem_data_callback = nullptr;
	mutable QListWidgetItem_SetData_Callback qlistwidgetitem_setdata_callback = nullptr;
	mutable QListWidgetItem_OperatorLesser_Callback qlistwidgetitem_operatorlesser_callback = nullptr;
	mutable QListWidgetItem_Read_Callback qlistwidgetitem_read_callback = nullptr;
	mutable QListWidgetItem_Write_Callback qlistwidgetitem_write_callback = nullptr;

	// Instance base flags
    mutable bool qlistwidgetitem_data_isbase = false;
    mutable bool qlistwidgetitem_setdata_isbase = false;
    mutable bool qlistwidgetitem_operatorlesser_isbase = false;
    mutable bool qlistwidgetitem_read_isbase = false;
    mutable bool qlistwidgetitem_write_isbase = false;

public:
	VirtualQListWidgetItem(): QListWidgetItem() {};
	VirtualQListWidgetItem(const QString& text): QListWidgetItem(text) {};
	VirtualQListWidgetItem(const QIcon& icon, const QString& text): QListWidgetItem(icon, text) {};
	VirtualQListWidgetItem(const QListWidgetItem& other): QListWidgetItem(other) {};
	VirtualQListWidgetItem(QListWidget* listview): QListWidgetItem(listview) {};
	VirtualQListWidgetItem(QListWidget* listview, int typeVal): QListWidgetItem(listview, typeVal) {};
	VirtualQListWidgetItem(const QString& text, QListWidget* listview): QListWidgetItem(text, listview) {};
	VirtualQListWidgetItem(const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(text, listview, typeVal) {};
	VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview): QListWidgetItem(icon, text, listview) {};
	VirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int typeVal): QListWidgetItem(icon, text, listview, typeVal) {};

	~VirtualQListWidgetItem() {
		qlistwidgetitem_data_callback = nullptr;
		qlistwidgetitem_setdata_callback = nullptr;
		qlistwidgetitem_operatorlesser_callback = nullptr;
		qlistwidgetitem_read_callback = nullptr;
		qlistwidgetitem_write_callback = nullptr;
	}

// Callback setters
	inline void setQListWidgetItem_Data_Callback(QListWidgetItem_Data_Callback cb) const { qlistwidgetitem_data_callback = cb; }
	inline void setQListWidgetItem_SetData_Callback(QListWidgetItem_SetData_Callback cb) const { qlistwidgetitem_setdata_callback = cb; }
	inline void setQListWidgetItem_OperatorLesser_Callback(QListWidgetItem_OperatorLesser_Callback cb) const { qlistwidgetitem_operatorlesser_callback = cb; }
	inline void setQListWidgetItem_Read_Callback(QListWidgetItem_Read_Callback cb) const { qlistwidgetitem_read_callback = cb; }
	inline void setQListWidgetItem_Write_Callback(QListWidgetItem_Write_Callback cb) const { qlistwidgetitem_write_callback = cb; }

// Base flag setters
	inline void setQListWidgetItem_Data_IsBase(bool value) const { qlistwidgetitem_data_isbase = value; }
	inline void setQListWidgetItem_SetData_IsBase(bool value) const { qlistwidgetitem_setdata_isbase = value; }
	inline void setQListWidgetItem_OperatorLesser_IsBase(bool value) const { qlistwidgetitem_operatorlesser_isbase = value; }
	inline void setQListWidgetItem_Read_IsBase(bool value) const { qlistwidgetitem_read_isbase = value; }
	inline void setQListWidgetItem_Write_IsBase(bool value) const { qlistwidgetitem_write_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(int role) const override {
		if (qlistwidgetitem_data_isbase) {
			qlistwidgetitem_data_isbase = false;
			return QListWidgetItem::data(role);
		} else if (qlistwidgetitem_data_callback != nullptr) {
			int cbval1 = role;
			QVariant* callback_ret = qlistwidgetitem_data_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QListWidgetItem::data(role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setData(int role, const QVariant& value) override {
		if (qlistwidgetitem_setdata_isbase) {
			qlistwidgetitem_setdata_isbase = false;
			QListWidgetItem::setData(role, value);
		} else if (qlistwidgetitem_setdata_callback != nullptr) {
			int cbval1 = role;
			const QVariant* cbval2 = (const QVariant*)&value;
			qlistwidgetitem_setdata_callback(this, cbval1, cbval2);
		} else {
			QListWidgetItem::setData(role, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool operator<(const QListWidgetItem& other) const override {
		if (qlistwidgetitem_operatorlesser_isbase) {
			qlistwidgetitem_operatorlesser_isbase = false;
			return QListWidgetItem::operator<(other);
		} else if (qlistwidgetitem_operatorlesser_callback != nullptr) {
			const QListWidgetItem* cbval1 = (const QListWidgetItem*)&other;
			bool callback_ret = qlistwidgetitem_operatorlesser_callback(this, cbval1);
			return callback_ret;
		} else {
			return QListWidgetItem::operator<(other);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void read(QDataStream& in) override {
		if (qlistwidgetitem_read_isbase) {
			qlistwidgetitem_read_isbase = false;
			QListWidgetItem::read(in);
		} else if (qlistwidgetitem_read_callback != nullptr) {
			QDataStream* cbval1 = &in;
			qlistwidgetitem_read_callback(this, cbval1);
		} else {
			QListWidgetItem::read(in);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void write(QDataStream& out) const override {
		if (qlistwidgetitem_write_isbase) {
			qlistwidgetitem_write_isbase = false;
			QListWidgetItem::write(out);
		} else if (qlistwidgetitem_write_callback != nullptr) {
			QDataStream* cbval1 = &out;
			qlistwidgetitem_write_callback(this, cbval1);
		} else {
			QListWidgetItem::write(out);
		}
	}
};

// This class is a subclass of QListWidget so that we can call protected methods
class VirtualQListWidget final : public QListWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQListWidget= true;

	// Virtual class public types (including callbacks)
	using QListWidget_SetSelectionModel_Callback = void (*)(QListWidget*, QItemSelectionModel*);
	using QListWidget_DropEvent_Callback = void (*)(QListWidget*, QDropEvent*);
	using QListWidget_Event_Callback = bool (*)(QListWidget*, QEvent*);
	using QListWidget_MimeTypes_Callback = libqt_list (*)();
	using QListWidget_MimeData_Callback = QMimeData* (*)(const QListWidget*, libqt_list);
	using QListWidget_DropMimeData_Callback = bool (*)(QListWidget*, int, const QMimeData*, int);
	using QListWidget_SupportedDropActions_Callback = int (*)();

protected:
	// Instance callback storage
	mutable QListWidget_SetSelectionModel_Callback qlistwidget_setselectionmodel_callback = nullptr;
	mutable QListWidget_DropEvent_Callback qlistwidget_dropevent_callback = nullptr;
	mutable QListWidget_Event_Callback qlistwidget_event_callback = nullptr;
	mutable QListWidget_MimeTypes_Callback qlistwidget_mimetypes_callback = nullptr;
	mutable QListWidget_MimeData_Callback qlistwidget_mimedata_callback = nullptr;
	mutable QListWidget_DropMimeData_Callback qlistwidget_dropmimedata_callback = nullptr;
	mutable QListWidget_SupportedDropActions_Callback qlistwidget_supporteddropactions_callback = nullptr;

	// Instance base flags
    mutable bool qlistwidget_setselectionmodel_isbase = false;
    mutable bool qlistwidget_dropevent_isbase = false;
    mutable bool qlistwidget_event_isbase = false;
    mutable bool qlistwidget_mimetypes_isbase = false;
    mutable bool qlistwidget_mimedata_isbase = false;
    mutable bool qlistwidget_dropmimedata_isbase = false;
    mutable bool qlistwidget_supporteddropactions_isbase = false;

public:
	VirtualQListWidget(QWidget* parent): QListWidget(parent) {};
	VirtualQListWidget(): QListWidget() {};

	~VirtualQListWidget() {
		qlistwidget_setselectionmodel_callback = nullptr;
		qlistwidget_dropevent_callback = nullptr;
		qlistwidget_event_callback = nullptr;
		qlistwidget_mimetypes_callback = nullptr;
		qlistwidget_mimedata_callback = nullptr;
		qlistwidget_dropmimedata_callback = nullptr;
		qlistwidget_supporteddropactions_callback = nullptr;
	}

// Callback setters
	inline void setQListWidget_SetSelectionModel_Callback(QListWidget_SetSelectionModel_Callback cb) const { qlistwidget_setselectionmodel_callback = cb; }
	inline void setQListWidget_DropEvent_Callback(QListWidget_DropEvent_Callback cb) const { qlistwidget_dropevent_callback = cb; }
	inline void setQListWidget_Event_Callback(QListWidget_Event_Callback cb) const { qlistwidget_event_callback = cb; }
	inline void setQListWidget_MimeTypes_Callback(QListWidget_MimeTypes_Callback cb) const { qlistwidget_mimetypes_callback = cb; }
	inline void setQListWidget_MimeData_Callback(QListWidget_MimeData_Callback cb) const { qlistwidget_mimedata_callback = cb; }
	inline void setQListWidget_DropMimeData_Callback(QListWidget_DropMimeData_Callback cb) const { qlistwidget_dropmimedata_callback = cb; }
	inline void setQListWidget_SupportedDropActions_Callback(QListWidget_SupportedDropActions_Callback cb) const { qlistwidget_supporteddropactions_callback = cb; }

// Base flag setters
	inline void setQListWidget_SetSelectionModel_IsBase(bool value) const { qlistwidget_setselectionmodel_isbase = value; }
	inline void setQListWidget_DropEvent_IsBase(bool value) const { qlistwidget_dropevent_isbase = value; }
	inline void setQListWidget_Event_IsBase(bool value) const { qlistwidget_event_isbase = value; }
	inline void setQListWidget_MimeTypes_IsBase(bool value) const { qlistwidget_mimetypes_isbase = value; }
	inline void setQListWidget_MimeData_IsBase(bool value) const { qlistwidget_mimedata_isbase = value; }
	inline void setQListWidget_DropMimeData_IsBase(bool value) const { qlistwidget_dropmimedata_isbase = value; }
	inline void setQListWidget_SupportedDropActions_IsBase(bool value) const { qlistwidget_supporteddropactions_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (qlistwidget_setselectionmodel_isbase) {
			qlistwidget_setselectionmodel_isbase = false;
			QListWidget::setSelectionModel(selectionModel);
		} else if (qlistwidget_setselectionmodel_callback != nullptr) {
			QItemSelectionModel* cbval1 = selectionModel;
			qlistwidget_setselectionmodel_callback(this, cbval1);
		} else {
			QListWidget::setSelectionModel(selectionModel);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qlistwidget_dropevent_isbase) {
			qlistwidget_dropevent_isbase = false;
			QListWidget::dropEvent(event);
		} else if (qlistwidget_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qlistwidget_dropevent_callback(this, cbval1);
		} else {
			QListWidget::dropEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qlistwidget_event_isbase) {
			qlistwidget_event_isbase = false;
			return QListWidget::event(e);
		} else if (qlistwidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qlistwidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QListWidget::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qlistwidget_mimetypes_isbase) {
			qlistwidget_mimetypes_isbase = false;
			return QListWidget::mimeTypes();
		} else if (qlistwidget_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qlistwidget_mimetypes_callback();
			return callback_ret;
		} else {
			return QListWidget::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QListWidgetItem *>& items) const override {
		if (qlistwidget_mimedata_isbase) {
			qlistwidget_mimedata_isbase = false;
			return QListWidget::mimeData(items);
		} else if (qlistwidget_mimedata_callback != nullptr) {
			libqt_list cbval1 = items;
			QMimeData* callback_ret = qlistwidget_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QListWidget::mimeData(items);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
		if (qlistwidget_dropmimedata_isbase) {
			qlistwidget_dropmimedata_isbase = false;
			return QListWidget::dropMimeData(index, data, action);
		} else if (qlistwidget_dropmimedata_callback != nullptr) {
			int cbval1 = index;
			const QMimeData* cbval2 = data;
			int cbval3 = static_cast<int>(action);
			bool callback_ret = qlistwidget_dropmimedata_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QListWidget::dropMimeData(index, data, action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qlistwidget_supporteddropactions_isbase) {
			qlistwidget_supporteddropactions_isbase = false;
			return QListWidget::supportedDropActions();
		} else if (qlistwidget_supporteddropactions_callback != nullptr) {
			int callback_ret = qlistwidget_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QListWidget::supportedDropActions();
		}
	}

	// Friend functions
	friend void QListWidget_DropEvent(QListWidget* self, QDropEvent* event);
	friend void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event);
	friend bool QListWidget_Event(QListWidget* self, QEvent* e);
	friend bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e);
	friend libqt_list QListWidget_MimeTypes(const QListWidget* self);
	friend libqt_list QListWidget_QBaseMimeTypes(const QListWidget* self);
	friend QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list items);
	friend QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, const libqt_list items);
	friend bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
	friend bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, const QMimeData* data, int action);
	friend int QListWidget_SupportedDropActions(const QListWidget* self);
	friend int QListWidget_QBaseSupportedDropActions(const QListWidget* self);
};

#endif


