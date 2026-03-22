#pragma once
#ifndef QWIZARD_H_C_LIBVIRTUAL
#define QWIZARD_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QWizard so that we can call protected methods
class VirtualQWizard final : public QWizard {

public:
	// Virtual class boolean flag
	bool isVirtualQWizard= true;

	// Virtual class public types (including callbacks)
	using QWizard_ValidateCurrentPage_Callback = bool (*)();
	using QWizard_NextId_Callback = int (*)();
	using QWizard_SetVisible_Callback = void (*)(QWizard*, bool);
	using QWizard_SizeHint_Callback = QSize* (*)();
	using QWizard_Event_Callback = bool (*)(QWizard*, QEvent*);
	using QWizard_ResizeEvent_Callback = void (*)(QWizard*, QResizeEvent*);
	using QWizard_PaintEvent_Callback = void (*)(QWizard*, QPaintEvent*);
	using QWizard_NativeEvent_Callback = bool (*)(QWizard*, libqt_string, void*, intptr_t*);
	using QWizard_Done_Callback = void (*)(QWizard*, int);
	using QWizard_InitializePage_Callback = void (*)(QWizard*, int);
	using QWizard_CleanupPage_Callback = void (*)(QWizard*, int);

protected:
	// Instance callback storage
	mutable QWizard_ValidateCurrentPage_Callback qwizard_validatecurrentpage_callback = nullptr;
	mutable QWizard_NextId_Callback qwizard_nextid_callback = nullptr;
	mutable QWizard_SetVisible_Callback qwizard_setvisible_callback = nullptr;
	mutable QWizard_SizeHint_Callback qwizard_sizehint_callback = nullptr;
	mutable QWizard_Event_Callback qwizard_event_callback = nullptr;
	mutable QWizard_ResizeEvent_Callback qwizard_resizeevent_callback = nullptr;
	mutable QWizard_PaintEvent_Callback qwizard_paintevent_callback = nullptr;
	mutable QWizard_NativeEvent_Callback qwizard_nativeevent_callback = nullptr;
	mutable QWizard_Done_Callback qwizard_done_callback = nullptr;
	mutable QWizard_InitializePage_Callback qwizard_initializepage_callback = nullptr;
	mutable QWizard_CleanupPage_Callback qwizard_cleanuppage_callback = nullptr;

	// Instance base flags
    mutable bool qwizard_validatecurrentpage_isbase = false;
    mutable bool qwizard_nextid_isbase = false;
    mutable bool qwizard_setvisible_isbase = false;
    mutable bool qwizard_sizehint_isbase = false;
    mutable bool qwizard_event_isbase = false;
    mutable bool qwizard_resizeevent_isbase = false;
    mutable bool qwizard_paintevent_isbase = false;
    mutable bool qwizard_nativeevent_isbase = false;
    mutable bool qwizard_done_isbase = false;
    mutable bool qwizard_initializepage_isbase = false;
    mutable bool qwizard_cleanuppage_isbase = false;

public:
	VirtualQWizard(QWidget* parent): QWizard(parent) {};
	VirtualQWizard(): QWizard() {};
	VirtualQWizard(QWidget* parent, Qt::WindowFlags flags): QWizard(parent, flags) {};

	~VirtualQWizard() {
		qwizard_validatecurrentpage_callback = nullptr;
		qwizard_nextid_callback = nullptr;
		qwizard_setvisible_callback = nullptr;
		qwizard_sizehint_callback = nullptr;
		qwizard_event_callback = nullptr;
		qwizard_resizeevent_callback = nullptr;
		qwizard_paintevent_callback = nullptr;
		qwizard_nativeevent_callback = nullptr;
		qwizard_done_callback = nullptr;
		qwizard_initializepage_callback = nullptr;
		qwizard_cleanuppage_callback = nullptr;
	}

// Callback setters
	inline void setQWizard_ValidateCurrentPage_Callback(QWizard_ValidateCurrentPage_Callback cb) const { qwizard_validatecurrentpage_callback = cb; }
	inline void setQWizard_NextId_Callback(QWizard_NextId_Callback cb) const { qwizard_nextid_callback = cb; }
	inline void setQWizard_SetVisible_Callback(QWizard_SetVisible_Callback cb) const { qwizard_setvisible_callback = cb; }
	inline void setQWizard_SizeHint_Callback(QWizard_SizeHint_Callback cb) const { qwizard_sizehint_callback = cb; }
	inline void setQWizard_Event_Callback(QWizard_Event_Callback cb) const { qwizard_event_callback = cb; }
	inline void setQWizard_ResizeEvent_Callback(QWizard_ResizeEvent_Callback cb) const { qwizard_resizeevent_callback = cb; }
	inline void setQWizard_PaintEvent_Callback(QWizard_PaintEvent_Callback cb) const { qwizard_paintevent_callback = cb; }
	inline void setQWizard_NativeEvent_Callback(QWizard_NativeEvent_Callback cb) const { qwizard_nativeevent_callback = cb; }
	inline void setQWizard_Done_Callback(QWizard_Done_Callback cb) const { qwizard_done_callback = cb; }
	inline void setQWizard_InitializePage_Callback(QWizard_InitializePage_Callback cb) const { qwizard_initializepage_callback = cb; }
	inline void setQWizard_CleanupPage_Callback(QWizard_CleanupPage_Callback cb) const { qwizard_cleanuppage_callback = cb; }

// Base flag setters
	inline void setQWizard_ValidateCurrentPage_IsBase(bool value) const { qwizard_validatecurrentpage_isbase = value; }
	inline void setQWizard_NextId_IsBase(bool value) const { qwizard_nextid_isbase = value; }
	inline void setQWizard_SetVisible_IsBase(bool value) const { qwizard_setvisible_isbase = value; }
	inline void setQWizard_SizeHint_IsBase(bool value) const { qwizard_sizehint_isbase = value; }
	inline void setQWizard_Event_IsBase(bool value) const { qwizard_event_isbase = value; }
	inline void setQWizard_ResizeEvent_IsBase(bool value) const { qwizard_resizeevent_isbase = value; }
	inline void setQWizard_PaintEvent_IsBase(bool value) const { qwizard_paintevent_isbase = value; }
	inline void setQWizard_NativeEvent_IsBase(bool value) const { qwizard_nativeevent_isbase = value; }
	inline void setQWizard_Done_IsBase(bool value) const { qwizard_done_isbase = value; }
	inline void setQWizard_InitializePage_IsBase(bool value) const { qwizard_initializepage_isbase = value; }
	inline void setQWizard_CleanupPage_IsBase(bool value) const { qwizard_cleanuppage_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool validateCurrentPage() override {
		if (qwizard_validatecurrentpage_isbase) {
			qwizard_validatecurrentpage_isbase = false;
			return QWizard::validateCurrentPage();
		} else if (qwizard_validatecurrentpage_callback != nullptr) {
			bool callback_ret = qwizard_validatecurrentpage_callback();
			return callback_ret;
		} else {
			return QWizard::validateCurrentPage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int nextId() const override {
		if (qwizard_nextid_isbase) {
			qwizard_nextid_isbase = false;
			return QWizard::nextId();
		} else if (qwizard_nextid_callback != nullptr) {
			int callback_ret = qwizard_nextid_callback();
			return callback_ret;
		} else {
			return QWizard::nextId();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setVisible(bool visible) override {
		if (qwizard_setvisible_isbase) {
			qwizard_setvisible_isbase = false;
			QWizard::setVisible(visible);
		} else if (qwizard_setvisible_callback != nullptr) {
			bool cbval1 = visible;
			qwizard_setvisible_callback(this, cbval1);
		} else {
			QWizard::setVisible(visible);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qwizard_sizehint_isbase) {
			qwizard_sizehint_isbase = false;
			return QWizard::sizeHint();
		} else if (qwizard_sizehint_callback != nullptr) {
			QSize* callback_ret = qwizard_sizehint_callback();
			return *callback_ret;
		} else {
			return QWizard::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* event) override {
		if (qwizard_event_isbase) {
			qwizard_event_isbase = false;
			return QWizard::event(event);
		} else if (qwizard_event_callback != nullptr) {
			QEvent* cbval1 = event;
			bool callback_ret = qwizard_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QWizard::event(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* event) override {
		if (qwizard_resizeevent_isbase) {
			qwizard_resizeevent_isbase = false;
			QWizard::resizeEvent(event);
		} else if (qwizard_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = event;
			qwizard_resizeevent_callback(this, cbval1);
		} else {
			QWizard::resizeEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* event) override {
		if (qwizard_paintevent_isbase) {
			qwizard_paintevent_isbase = false;
			QWizard::paintEvent(event);
		} else if (qwizard_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = event;
			qwizard_paintevent_callback(this, cbval1);
		} else {
			QWizard::paintEvent(event);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (qwizard_nativeevent_isbase) {
			qwizard_nativeevent_isbase = false;
			return QWizard::nativeEvent(eventType, message, result);
		} else if (qwizard_nativeevent_callback != nullptr) {
			QByteArray eventType_qb = eventType.toUtf8();
			libqt_string cbval1;
			cbval1.len = eventType_qb.length();
			cbval1.data = static_cast<const char*>(eventType_qb.constData());
			void* cbval2 = message;
			intptr_t* cbval3 = result;
			bool callback_ret = qwizard_nativeevent_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QWizard::nativeEvent(eventType, message, result);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void done(int result) override {
		if (qwizard_done_isbase) {
			qwizard_done_isbase = false;
			QWizard::done(result);
		} else if (qwizard_done_callback != nullptr) {
			int cbval1 = result;
			qwizard_done_callback(this, cbval1);
		} else {
			QWizard::done(result);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void initializePage(int id) override {
		if (qwizard_initializepage_isbase) {
			qwizard_initializepage_isbase = false;
			QWizard::initializePage(id);
		} else if (qwizard_initializepage_callback != nullptr) {
			int cbval1 = id;
			qwizard_initializepage_callback(this, cbval1);
		} else {
			QWizard::initializePage(id);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void cleanupPage(int id) override {
		if (qwizard_cleanuppage_isbase) {
			qwizard_cleanuppage_isbase = false;
			QWizard::cleanupPage(id);
		} else if (qwizard_cleanuppage_callback != nullptr) {
			int cbval1 = id;
			qwizard_cleanuppage_callback(this, cbval1);
		} else {
			QWizard::cleanupPage(id);
		}
	}

	// Friend functions
	friend bool QWizard_Event(QWizard* self, QEvent* event);
	friend bool QWizard_QBaseEvent(QWizard* self, QEvent* event);
	friend void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event);
	friend void QWizard_QBaseResizeEvent(QWizard* self, QResizeEvent* event);
	friend void QWizard_PaintEvent(QWizard* self, QPaintEvent* event);
	friend void QWizard_QBasePaintEvent(QWizard* self, QPaintEvent* event);
	friend bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
	friend bool QWizard_QBaseNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result);
	friend void QWizard_Done(QWizard* self, int result);
	friend void QWizard_QBaseDone(QWizard* self, int result);
	friend void QWizard_InitializePage(QWizard* self, int id);
	friend void QWizard_QBaseInitializePage(QWizard* self, int id);
	friend void QWizard_CleanupPage(QWizard* self, int id);
	friend void QWizard_QBaseCleanupPage(QWizard* self, int id);
};

// This class is a subclass of QWizardPage so that we can call protected methods
class VirtualQWizardPage final : public QWizardPage {

public:
	// Virtual class boolean flag
	bool isVirtualQWizardPage= true;

	// Virtual class public types (including callbacks)
	using QWizardPage_InitializePage_Callback = void (*)();
	using QWizardPage_CleanupPage_Callback = void (*)();
	using QWizardPage_ValidatePage_Callback = bool (*)();
	using QWizardPage_IsComplete_Callback = bool (*)();
	using QWizardPage_NextId_Callback = int (*)();
	using QWizardPage_SetField_Callback = void (*)(QWizardPage*, libqt_string, const QVariant*);
	using QWizardPage_Field_Callback = QVariant* (*)(const QWizardPage*, libqt_string);
	using QWizardPage_RegisterField_Callback = void (*)(QWizardPage*, libqt_string, QWidget*);
	using QWizardPage_Wizard_Callback = QWizard* (*)();
	using QWizardPage_RegisterField3_Callback = void (*)(QWizardPage*, libqt_string, QWidget*, const char*);
	using QWizardPage_RegisterField4_Callback = void (*)(QWizardPage*, libqt_string, QWidget*, const char*, const char*);

protected:
	// Instance callback storage
	mutable QWizardPage_InitializePage_Callback qwizardpage_initializepage_callback = nullptr;
	mutable QWizardPage_CleanupPage_Callback qwizardpage_cleanuppage_callback = nullptr;
	mutable QWizardPage_ValidatePage_Callback qwizardpage_validatepage_callback = nullptr;
	mutable QWizardPage_IsComplete_Callback qwizardpage_iscomplete_callback = nullptr;
	mutable QWizardPage_NextId_Callback qwizardpage_nextid_callback = nullptr;
	mutable QWizardPage_SetField_Callback qwizardpage_setfield_callback = nullptr;
	mutable QWizardPage_Field_Callback qwizardpage_field_callback = nullptr;
	mutable QWizardPage_RegisterField_Callback qwizardpage_registerfield_callback = nullptr;
	mutable QWizardPage_Wizard_Callback qwizardpage_wizard_callback = nullptr;
	mutable QWizardPage_RegisterField3_Callback qwizardpage_registerfield3_callback = nullptr;
	mutable QWizardPage_RegisterField4_Callback qwizardpage_registerfield4_callback = nullptr;

	// Instance base flags
    mutable bool qwizardpage_initializepage_isbase = false;
    mutable bool qwizardpage_cleanuppage_isbase = false;
    mutable bool qwizardpage_validatepage_isbase = false;
    mutable bool qwizardpage_iscomplete_isbase = false;
    mutable bool qwizardpage_nextid_isbase = false;
    mutable bool qwizardpage_setfield_isbase = false;
    mutable bool qwizardpage_field_isbase = false;
    mutable bool qwizardpage_registerfield_isbase = false;
    mutable bool qwizardpage_wizard_isbase = false;
    mutable bool qwizardpage_registerfield3_isbase = false;
    mutable bool qwizardpage_registerfield4_isbase = false;

public:
	VirtualQWizardPage(QWidget* parent): QWizardPage(parent) {};
	VirtualQWizardPage(): QWizardPage() {};

	~VirtualQWizardPage() {
		qwizardpage_initializepage_callback = nullptr;
		qwizardpage_cleanuppage_callback = nullptr;
		qwizardpage_validatepage_callback = nullptr;
		qwizardpage_iscomplete_callback = nullptr;
		qwizardpage_nextid_callback = nullptr;
		qwizardpage_setfield_callback = nullptr;
		qwizardpage_field_callback = nullptr;
		qwizardpage_registerfield_callback = nullptr;
		qwizardpage_wizard_callback = nullptr;
		qwizardpage_registerfield3_callback = nullptr;
		qwizardpage_registerfield4_callback = nullptr;
	}

// Callback setters
	inline void setQWizardPage_InitializePage_Callback(QWizardPage_InitializePage_Callback cb) const { qwizardpage_initializepage_callback = cb; }
	inline void setQWizardPage_CleanupPage_Callback(QWizardPage_CleanupPage_Callback cb) const { qwizardpage_cleanuppage_callback = cb; }
	inline void setQWizardPage_ValidatePage_Callback(QWizardPage_ValidatePage_Callback cb) const { qwizardpage_validatepage_callback = cb; }
	inline void setQWizardPage_IsComplete_Callback(QWizardPage_IsComplete_Callback cb) const { qwizardpage_iscomplete_callback = cb; }
	inline void setQWizardPage_NextId_Callback(QWizardPage_NextId_Callback cb) const { qwizardpage_nextid_callback = cb; }
	inline void setQWizardPage_SetField_Callback(QWizardPage_SetField_Callback cb) const { qwizardpage_setfield_callback = cb; }
	inline void setQWizardPage_Field_Callback(QWizardPage_Field_Callback cb) const { qwizardpage_field_callback = cb; }
	inline void setQWizardPage_RegisterField_Callback(QWizardPage_RegisterField_Callback cb) const { qwizardpage_registerfield_callback = cb; }
	inline void setQWizardPage_Wizard_Callback(QWizardPage_Wizard_Callback cb) const { qwizardpage_wizard_callback = cb; }
	inline void setQWizardPage_RegisterField3_Callback(QWizardPage_RegisterField3_Callback cb) const { qwizardpage_registerfield3_callback = cb; }
	inline void setQWizardPage_RegisterField4_Callback(QWizardPage_RegisterField4_Callback cb) const { qwizardpage_registerfield4_callback = cb; }

// Base flag setters
	inline void setQWizardPage_InitializePage_IsBase(bool value) const { qwizardpage_initializepage_isbase = value; }
	inline void setQWizardPage_CleanupPage_IsBase(bool value) const { qwizardpage_cleanuppage_isbase = value; }
	inline void setQWizardPage_ValidatePage_IsBase(bool value) const { qwizardpage_validatepage_isbase = value; }
	inline void setQWizardPage_IsComplete_IsBase(bool value) const { qwizardpage_iscomplete_isbase = value; }
	inline void setQWizardPage_NextId_IsBase(bool value) const { qwizardpage_nextid_isbase = value; }
	inline void setQWizardPage_SetField_IsBase(bool value) const { qwizardpage_setfield_isbase = value; }
	inline void setQWizardPage_Field_IsBase(bool value) const { qwizardpage_field_isbase = value; }
	inline void setQWizardPage_RegisterField_IsBase(bool value) const { qwizardpage_registerfield_isbase = value; }
	inline void setQWizardPage_Wizard_IsBase(bool value) const { qwizardpage_wizard_isbase = value; }
	inline void setQWizardPage_RegisterField3_IsBase(bool value) const { qwizardpage_registerfield3_isbase = value; }
	inline void setQWizardPage_RegisterField4_IsBase(bool value) const { qwizardpage_registerfield4_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void initializePage() override {
		if (qwizardpage_initializepage_isbase) {
			qwizardpage_initializepage_isbase = false;
			QWizardPage::initializePage();
		} else if (qwizardpage_initializepage_callback != nullptr) {
			qwizardpage_initializepage_callback();
		} else {
			QWizardPage::initializePage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void cleanupPage() override {
		if (qwizardpage_cleanuppage_isbase) {
			qwizardpage_cleanuppage_isbase = false;
			QWizardPage::cleanupPage();
		} else if (qwizardpage_cleanuppage_callback != nullptr) {
			qwizardpage_cleanuppage_callback();
		} else {
			QWizardPage::cleanupPage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool validatePage() override {
		if (qwizardpage_validatepage_isbase) {
			qwizardpage_validatepage_isbase = false;
			return QWizardPage::validatePage();
		} else if (qwizardpage_validatepage_callback != nullptr) {
			bool callback_ret = qwizardpage_validatepage_callback();
			return callback_ret;
		} else {
			return QWizardPage::validatePage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isComplete() const override {
		if (qwizardpage_iscomplete_isbase) {
			qwizardpage_iscomplete_isbase = false;
			return QWizardPage::isComplete();
		} else if (qwizardpage_iscomplete_callback != nullptr) {
			bool callback_ret = qwizardpage_iscomplete_callback();
			return callback_ret;
		} else {
			return QWizardPage::isComplete();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int nextId() const override {
		if (qwizardpage_nextid_isbase) {
			qwizardpage_nextid_isbase = false;
			return QWizardPage::nextId();
		} else if (qwizardpage_nextid_callback != nullptr) {
			int callback_ret = qwizardpage_nextid_callback();
			return callback_ret;
		} else {
			return QWizardPage::nextId();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setField(const QString& name, const QVariant& value) {
		if (qwizardpage_setfield_isbase) {
			qwizardpage_setfield_isbase = false;
			QWizardPage::setField(name, value);
		} else if (qwizardpage_setfield_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			const QVariant* cbval2 = (const QVariant*)&value;
			qwizardpage_setfield_callback(this, cbval1, cbval2);
		} else {
			QWizardPage::setField(name, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	QVariant field(const QString& name) const {
		if (qwizardpage_field_isbase) {
			qwizardpage_field_isbase = false;
			return QWizardPage::field(name);
		} else if (qwizardpage_field_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			QVariant* callback_ret = qwizardpage_field_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QWizardPage::field(name);
		}
	}

	// Virtual method for C ABI access and custom callback
	void registerField(const QString& name, QWidget* widget) {
		if (qwizardpage_registerfield_isbase) {
			qwizardpage_registerfield_isbase = false;
			QWizardPage::registerField(name, widget);
		} else if (qwizardpage_registerfield_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			QWidget* cbval2 = widget;
			qwizardpage_registerfield_callback(this, cbval1, cbval2);
		} else {
			QWizardPage::registerField(name, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	QWizard* wizard() const {
		if (qwizardpage_wizard_isbase) {
			qwizardpage_wizard_isbase = false;
			return QWizardPage::wizard();
		} else if (qwizardpage_wizard_callback != nullptr) {
			QWizard* callback_ret = qwizardpage_wizard_callback();
			return callback_ret;
		} else {
			return QWizardPage::wizard();
		}
	}

	// Virtual method for C ABI access and custom callback
	void registerField(const QString& name, QWidget* widget, const char* property) {
		if (qwizardpage_registerfield3_isbase) {
			qwizardpage_registerfield3_isbase = false;
			QWizardPage::registerField(name, widget, property);
		} else if (qwizardpage_registerfield3_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			QWidget* cbval2 = widget;
			const char* cbval3 = property;
			qwizardpage_registerfield3_callback(this, cbval1, cbval2, cbval3);
		} else {
			QWizardPage::registerField(name, widget, property);
		}
	}

	// Virtual method for C ABI access and custom callback
	void registerField(const QString& name, QWidget* widget, const char* property, const char* changedSignal) {
		if (qwizardpage_registerfield4_isbase) {
			qwizardpage_registerfield4_isbase = false;
			QWizardPage::registerField(name, widget, property, changedSignal);
		} else if (qwizardpage_registerfield4_callback != nullptr) {
			QByteArray name_qb = name.toUtf8();
			libqt_string cbval1;
			cbval1.len = name_qb.length();
			cbval1.data = static_cast<const char*>(name_qb.constData());
			QWidget* cbval2 = widget;
			const char* cbval3 = property;
			const char* cbval4 = changedSignal;
			qwizardpage_registerfield4_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QWizardPage::registerField(name, widget, property, changedSignal);
		}
	}

	// Friend functions
	friend void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value);
	friend void QWizardPage_QBaseSetField(QWizardPage* self, const libqt_string name, const QVariant* value);
	friend QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name);
	friend QVariant* QWizardPage_QBaseField(const QWizardPage* self, const libqt_string name);
	friend void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
	friend void QWizardPage_QBaseRegisterField(QWizardPage* self, const libqt_string name, QWidget* widget);
	friend QWizard* QWizardPage_Wizard(const QWizardPage* self);
	friend QWizard* QWizardPage_QBaseWizard(const QWizardPage* self);
	friend void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
	friend void QWizardPage_QBaseRegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property);
	friend void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
	friend void QWizardPage_QBaseRegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal);
};

#endif


