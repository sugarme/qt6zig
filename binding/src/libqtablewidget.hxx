#pragma once
#ifndef QTABLEWIDGET_H_C_LIBVIRTUAL
#define QTABLEWIDGET_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTableWidgetItem so that we can call protected methods
class VirtualQTableWidgetItem final : public QTableWidgetItem {

public:
	// Virtual class boolean flag
	bool isVirtualQTableWidgetItem= true;

	// Virtual class public types (including callbacks)
	using QTableWidgetItem_Data_Callback = QVariant* (*)(const QTableWidgetItem*, int);
	using QTableWidgetItem_SetData_Callback = void (*)(QTableWidgetItem*, int, const QVariant*);
	using QTableWidgetItem_OperatorLesser_Callback = bool (*)(const QTableWidgetItem*, const QTableWidgetItem*);
	using QTableWidgetItem_Read_Callback = void (*)(QTableWidgetItem*, QDataStream*);
	using QTableWidgetItem_Write_Callback = void (*)(const QTableWidgetItem*, QDataStream*);

protected:
	// Instance callback storage
	mutable QTableWidgetItem_Data_Callback qtablewidgetitem_data_callback = nullptr;
	mutable QTableWidgetItem_SetData_Callback qtablewidgetitem_setdata_callback = nullptr;
	mutable QTableWidgetItem_OperatorLesser_Callback qtablewidgetitem_operatorlesser_callback = nullptr;
	mutable QTableWidgetItem_Read_Callback qtablewidgetitem_read_callback = nullptr;
	mutable QTableWidgetItem_Write_Callback qtablewidgetitem_write_callback = nullptr;

	// Instance base flags
    mutable bool qtablewidgetitem_data_isbase = false;
    mutable bool qtablewidgetitem_setdata_isbase = false;
    mutable bool qtablewidgetitem_operatorlesser_isbase = false;
    mutable bool qtablewidgetitem_read_isbase = false;
    mutable bool qtablewidgetitem_write_isbase = false;

public:
	VirtualQTableWidgetItem(): QTableWidgetItem() {};
	VirtualQTableWidgetItem(const QString& text): QTableWidgetItem(text) {};
	VirtualQTableWidgetItem(const QIcon& icon, const QString& text): QTableWidgetItem(icon, text) {};
	VirtualQTableWidgetItem(const QTableWidgetItem& other): QTableWidgetItem(other) {};
	VirtualQTableWidgetItem(int typeVal): QTableWidgetItem(typeVal) {};
	VirtualQTableWidgetItem(const QString& text, int typeVal): QTableWidgetItem(text, typeVal) {};
	VirtualQTableWidgetItem(const QIcon& icon, const QString& text, int typeVal): QTableWidgetItem(icon, text, typeVal) {};

	~VirtualQTableWidgetItem() {
		qtablewidgetitem_data_callback = nullptr;
		qtablewidgetitem_setdata_callback = nullptr;
		qtablewidgetitem_operatorlesser_callback = nullptr;
		qtablewidgetitem_read_callback = nullptr;
		qtablewidgetitem_write_callback = nullptr;
	}

// Callback setters
	inline void setQTableWidgetItem_Data_Callback(QTableWidgetItem_Data_Callback cb) const { qtablewidgetitem_data_callback = cb; }
	inline void setQTableWidgetItem_SetData_Callback(QTableWidgetItem_SetData_Callback cb) const { qtablewidgetitem_setdata_callback = cb; }
	inline void setQTableWidgetItem_OperatorLesser_Callback(QTableWidgetItem_OperatorLesser_Callback cb) const { qtablewidgetitem_operatorlesser_callback = cb; }
	inline void setQTableWidgetItem_Read_Callback(QTableWidgetItem_Read_Callback cb) const { qtablewidgetitem_read_callback = cb; }
	inline void setQTableWidgetItem_Write_Callback(QTableWidgetItem_Write_Callback cb) const { qtablewidgetitem_write_callback = cb; }

// Base flag setters
	inline void setQTableWidgetItem_Data_IsBase(bool value) const { qtablewidgetitem_data_isbase = value; }
	inline void setQTableWidgetItem_SetData_IsBase(bool value) const { qtablewidgetitem_setdata_isbase = value; }
	inline void setQTableWidgetItem_OperatorLesser_IsBase(bool value) const { qtablewidgetitem_operatorlesser_isbase = value; }
	inline void setQTableWidgetItem_Read_IsBase(bool value) const { qtablewidgetitem_read_isbase = value; }
	inline void setQTableWidgetItem_Write_IsBase(bool value) const { qtablewidgetitem_write_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QVariant data(int role) const override {
		if (qtablewidgetitem_data_isbase) {
			qtablewidgetitem_data_isbase = false;
			return QTableWidgetItem::data(role);
		} else if (qtablewidgetitem_data_callback != nullptr) {
			int cbval1 = role;
			QVariant* callback_ret = qtablewidgetitem_data_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTableWidgetItem::data(role);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setData(int role, const QVariant& value) override {
		if (qtablewidgetitem_setdata_isbase) {
			qtablewidgetitem_setdata_isbase = false;
			QTableWidgetItem::setData(role, value);
		} else if (qtablewidgetitem_setdata_callback != nullptr) {
			int cbval1 = role;
			const QVariant* cbval2 = (const QVariant*)&value;
			qtablewidgetitem_setdata_callback(this, cbval1, cbval2);
		} else {
			QTableWidgetItem::setData(role, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool operator<(const QTableWidgetItem& other) const override {
		if (qtablewidgetitem_operatorlesser_isbase) {
			qtablewidgetitem_operatorlesser_isbase = false;
			return QTableWidgetItem::operator<(other);
		} else if (qtablewidgetitem_operatorlesser_callback != nullptr) {
			const QTableWidgetItem* cbval1 = (const QTableWidgetItem*)&other;
			bool callback_ret = qtablewidgetitem_operatorlesser_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableWidgetItem::operator<(other);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void read(QDataStream& in) override {
		if (qtablewidgetitem_read_isbase) {
			qtablewidgetitem_read_isbase = false;
			QTableWidgetItem::read(in);
		} else if (qtablewidgetitem_read_callback != nullptr) {
			QDataStream* cbval1 = &in;
			qtablewidgetitem_read_callback(this, cbval1);
		} else {
			QTableWidgetItem::read(in);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void write(QDataStream& out) const override {
		if (qtablewidgetitem_write_isbase) {
			qtablewidgetitem_write_isbase = false;
			QTableWidgetItem::write(out);
		} else if (qtablewidgetitem_write_callback != nullptr) {
			QDataStream* cbval1 = &out;
			qtablewidgetitem_write_callback(this, cbval1);
		} else {
			QTableWidgetItem::write(out);
		}
	}
};

// This class is a subclass of QTableWidget so that we can call protected methods
class VirtualQTableWidget final : public QTableWidget {

public:
	// Virtual class boolean flag
	bool isVirtualQTableWidget= true;

	// Virtual class public types (including callbacks)
	using QTableWidget_Event_Callback = bool (*)(QTableWidget*, QEvent*);
	using QTableWidget_MimeTypes_Callback = libqt_list (*)();
	using QTableWidget_MimeData_Callback = QMimeData* (*)(const QTableWidget*, libqt_list);
	using QTableWidget_DropMimeData_Callback = bool (*)(QTableWidget*, int, int, const QMimeData*, int);
	using QTableWidget_SupportedDropActions_Callback = int (*)();
	using QTableWidget_DropEvent_Callback = void (*)(QTableWidget*, QDropEvent*);

protected:
	// Instance callback storage
	mutable QTableWidget_Event_Callback qtablewidget_event_callback = nullptr;
	mutable QTableWidget_MimeTypes_Callback qtablewidget_mimetypes_callback = nullptr;
	mutable QTableWidget_MimeData_Callback qtablewidget_mimedata_callback = nullptr;
	mutable QTableWidget_DropMimeData_Callback qtablewidget_dropmimedata_callback = nullptr;
	mutable QTableWidget_SupportedDropActions_Callback qtablewidget_supporteddropactions_callback = nullptr;
	mutable QTableWidget_DropEvent_Callback qtablewidget_dropevent_callback = nullptr;

	// Instance base flags
    mutable bool qtablewidget_event_isbase = false;
    mutable bool qtablewidget_mimetypes_isbase = false;
    mutable bool qtablewidget_mimedata_isbase = false;
    mutable bool qtablewidget_dropmimedata_isbase = false;
    mutable bool qtablewidget_supporteddropactions_isbase = false;
    mutable bool qtablewidget_dropevent_isbase = false;

public:
	VirtualQTableWidget(QWidget* parent): QTableWidget(parent) {};
	VirtualQTableWidget(): QTableWidget() {};
	VirtualQTableWidget(int rows, int columns): QTableWidget(rows, columns) {};
	VirtualQTableWidget(int rows, int columns, QWidget* parent): QTableWidget(rows, columns, parent) {};

	~VirtualQTableWidget() {
		qtablewidget_event_callback = nullptr;
		qtablewidget_mimetypes_callback = nullptr;
		qtablewidget_mimedata_callback = nullptr;
		qtablewidget_dropmimedata_callback = nullptr;
		qtablewidget_supporteddropactions_callback = nullptr;
		qtablewidget_dropevent_callback = nullptr;
	}

// Callback setters
	inline void setQTableWidget_Event_Callback(QTableWidget_Event_Callback cb) const { qtablewidget_event_callback = cb; }
	inline void setQTableWidget_MimeTypes_Callback(QTableWidget_MimeTypes_Callback cb) const { qtablewidget_mimetypes_callback = cb; }
	inline void setQTableWidget_MimeData_Callback(QTableWidget_MimeData_Callback cb) const { qtablewidget_mimedata_callback = cb; }
	inline void setQTableWidget_DropMimeData_Callback(QTableWidget_DropMimeData_Callback cb) const { qtablewidget_dropmimedata_callback = cb; }
	inline void setQTableWidget_SupportedDropActions_Callback(QTableWidget_SupportedDropActions_Callback cb) const { qtablewidget_supporteddropactions_callback = cb; }
	inline void setQTableWidget_DropEvent_Callback(QTableWidget_DropEvent_Callback cb) const { qtablewidget_dropevent_callback = cb; }

// Base flag setters
	inline void setQTableWidget_Event_IsBase(bool value) const { qtablewidget_event_isbase = value; }
	inline void setQTableWidget_MimeTypes_IsBase(bool value) const { qtablewidget_mimetypes_isbase = value; }
	inline void setQTableWidget_MimeData_IsBase(bool value) const { qtablewidget_mimedata_isbase = value; }
	inline void setQTableWidget_DropMimeData_IsBase(bool value) const { qtablewidget_dropmimedata_isbase = value; }
	inline void setQTableWidget_SupportedDropActions_IsBase(bool value) const { qtablewidget_supporteddropactions_isbase = value; }
	inline void setQTableWidget_DropEvent_IsBase(bool value) const { qtablewidget_dropevent_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qtablewidget_event_isbase) {
			qtablewidget_event_isbase = false;
			return QTableWidget::event(e);
		} else if (qtablewidget_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qtablewidget_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableWidget::event(e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> mimeTypes() const override {
		if (qtablewidget_mimetypes_isbase) {
			qtablewidget_mimetypes_isbase = false;
			return QTableWidget::mimeTypes();
		} else if (qtablewidget_mimetypes_callback != nullptr) {
			libqt_list callback_ret = qtablewidget_mimetypes_callback();
			return QList<QString>();
		} else {
			return QTableWidget::mimeTypes();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QMimeData* mimeData(const QList<QTableWidgetItem *>& items) const override {
		if (qtablewidget_mimedata_isbase) {
			qtablewidget_mimedata_isbase = false;
			return QTableWidget::mimeData(items);
		} else if (qtablewidget_mimedata_callback != nullptr) {
			libqt_list cbval1;
			cbval1.len = items.size();
			cbval1.data = nullptr;
			QMimeData* callback_ret = qtablewidget_mimedata_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTableWidget::mimeData(items);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
		if (qtablewidget_dropmimedata_isbase) {
			qtablewidget_dropmimedata_isbase = false;
			return QTableWidget::dropMimeData(row, column, data, action);
		} else if (qtablewidget_dropmimedata_callback != nullptr) {
			int cbval1 = row;
			int cbval2 = column;
			const QMimeData* cbval3 = data;
			int cbval4 = static_cast<int>(action);
			bool callback_ret = qtablewidget_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QTableWidget::dropMimeData(row, column, data, action);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QFlags<Qt::DropAction> supportedDropActions() const override {
		if (qtablewidget_supporteddropactions_isbase) {
			qtablewidget_supporteddropactions_isbase = false;
			return QTableWidget::supportedDropActions();
		} else if (qtablewidget_supporteddropactions_callback != nullptr) {
			int callback_ret = qtablewidget_supporteddropactions_callback();
			return static_cast<QFlags<Qt::DropAction>>(callback_ret);
		} else {
			return QTableWidget::supportedDropActions();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void dropEvent(QDropEvent* event) override {
		if (qtablewidget_dropevent_isbase) {
			qtablewidget_dropevent_isbase = false;
			QTableWidget::dropEvent(event);
		} else if (qtablewidget_dropevent_callback != nullptr) {
			QDropEvent* cbval1 = event;
			qtablewidget_dropevent_callback(this, cbval1);
		} else {
			QTableWidget::dropEvent(event);
		}
	}

	// Friend functions
	friend bool QTableWidget_Event(QTableWidget* self, QEvent* e);
	friend bool QTableWidget_QBaseEvent(QTableWidget* self, QEvent* e);
	friend libqt_list QTableWidget_MimeTypes(const QTableWidget* self);
	friend libqt_list QTableWidget_QBaseMimeTypes(const QTableWidget* self);
	friend QMimeData* QTableWidget_MimeData(const QTableWidget* self, const libqt_list items);
	friend QMimeData* QTableWidget_QBaseMimeData(const QTableWidget* self, const libqt_list items);
	friend bool QTableWidget_DropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
	friend bool QTableWidget_QBaseDropMimeData(QTableWidget* self, int row, int column, const QMimeData* data, int action);
	friend int QTableWidget_SupportedDropActions(const QTableWidget* self);
	friend int QTableWidget_QBaseSupportedDropActions(const QTableWidget* self);
	friend void QTableWidget_DropEvent(QTableWidget* self, QDropEvent* event);
	friend void QTableWidget_QBaseDropEvent(QTableWidget* self, QDropEvent* event);
};

#endif


