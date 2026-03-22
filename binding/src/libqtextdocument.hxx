#pragma once
#ifndef QTEXTDOCUMENT_H_C_LIBVIRTUAL
#define QTEXTDOCUMENT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAbstractUndoItem so that we can call protected methods
class VirtualQAbstractUndoItem : public QAbstractUndoItem {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractUndoItem= true;

	// Virtual class public types (including callbacks)
	using QAbstractUndoItem_Undo_Callback = void (*)();
	using QAbstractUndoItem_Redo_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QAbstractUndoItem_Undo_Callback qabstractundoitem_undo_callback = nullptr;
	mutable QAbstractUndoItem_Redo_Callback qabstractundoitem_redo_callback = nullptr;

	// Instance base flags
    mutable bool qabstractundoitem_undo_isbase = false;
    mutable bool qabstractundoitem_redo_isbase = false;

public:
	VirtualQAbstractUndoItem(): QAbstractUndoItem() {};
	VirtualQAbstractUndoItem(const QAbstractUndoItem& param1): QAbstractUndoItem(param1) {};

	~VirtualQAbstractUndoItem() {
		qabstractundoitem_undo_callback = nullptr;
		qabstractundoitem_redo_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractUndoItem_Undo_Callback(QAbstractUndoItem_Undo_Callback cb) const { qabstractundoitem_undo_callback = cb; }
	inline void setQAbstractUndoItem_Redo_Callback(QAbstractUndoItem_Redo_Callback cb) const { qabstractundoitem_redo_callback = cb; }

// Base flag setters
	inline void setQAbstractUndoItem_Undo_IsBase(bool value) const { qabstractundoitem_undo_isbase = value; }
	inline void setQAbstractUndoItem_Redo_IsBase(bool value) const { qabstractundoitem_redo_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void undo() override {
		if (qabstractundoitem_undo_callback != nullptr) {
			qabstractundoitem_undo_callback();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void redo() override {
		if (qabstractundoitem_redo_callback != nullptr) {
			qabstractundoitem_redo_callback();
		}
	}
};

// This class is a subclass of QTextDocument so that we can call protected methods
class VirtualQTextDocument final : public QTextDocument {

public:
	// Virtual class boolean flag
	bool isVirtualQTextDocument= true;

	// Virtual class public types (including callbacks)
	using QTextDocument_Clear_Callback = void (*)();
	using QTextDocument_CreateObject_Callback = QTextObject* (*)(QTextDocument*, const QTextFormat*);
	using QTextDocument_LoadResource_Callback = QVariant* (*)(QTextDocument*, int, const QUrl*);

protected:
	// Instance callback storage
	mutable QTextDocument_Clear_Callback qtextdocument_clear_callback = nullptr;
	mutable QTextDocument_CreateObject_Callback qtextdocument_createobject_callback = nullptr;
	mutable QTextDocument_LoadResource_Callback qtextdocument_loadresource_callback = nullptr;

	// Instance base flags
    mutable bool qtextdocument_clear_isbase = false;
    mutable bool qtextdocument_createobject_isbase = false;
    mutable bool qtextdocument_loadresource_isbase = false;

public:
	VirtualQTextDocument(): QTextDocument() {};
	VirtualQTextDocument(const QString& text): QTextDocument(text) {};
	VirtualQTextDocument(QObject* parent): QTextDocument(parent) {};
	VirtualQTextDocument(const QString& text, QObject* parent): QTextDocument(text, parent) {};

	~VirtualQTextDocument() {
		qtextdocument_clear_callback = nullptr;
		qtextdocument_createobject_callback = nullptr;
		qtextdocument_loadresource_callback = nullptr;
	}

// Callback setters
	inline void setQTextDocument_Clear_Callback(QTextDocument_Clear_Callback cb) const { qtextdocument_clear_callback = cb; }
	inline void setQTextDocument_CreateObject_Callback(QTextDocument_CreateObject_Callback cb) const { qtextdocument_createobject_callback = cb; }
	inline void setQTextDocument_LoadResource_Callback(QTextDocument_LoadResource_Callback cb) const { qtextdocument_loadresource_callback = cb; }

// Base flag setters
	inline void setQTextDocument_Clear_IsBase(bool value) const { qtextdocument_clear_isbase = value; }
	inline void setQTextDocument_CreateObject_IsBase(bool value) const { qtextdocument_createobject_isbase = value; }
	inline void setQTextDocument_LoadResource_IsBase(bool value) const { qtextdocument_loadresource_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qtextdocument_clear_isbase) {
			qtextdocument_clear_isbase = false;
			QTextDocument::clear();
		} else if (qtextdocument_clear_callback != nullptr) {
			qtextdocument_clear_callback();
		} else {
			QTextDocument::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QTextObject* createObject(const QTextFormat& f) override {
		if (qtextdocument_createobject_isbase) {
			qtextdocument_createobject_isbase = false;
			return QTextDocument::createObject(f);
		} else if (qtextdocument_createobject_callback != nullptr) {
			const QTextFormat* cbval1 = (const QTextFormat*)&f;
			QTextObject* callback_ret = qtextdocument_createobject_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTextDocument::createObject(f);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (qtextdocument_loadresource_isbase) {
			qtextdocument_loadresource_isbase = false;
			return QTextDocument::loadResource(typeVal, name);
		} else if (qtextdocument_loadresource_callback != nullptr) {
			int cbval1 = typeVal;
			const QUrl* cbval2 = (const QUrl*)&name;
			QVariant* callback_ret = qtextdocument_loadresource_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTextDocument::loadResource(typeVal, name);
		}
	}

	// Friend functions
	friend QTextObject* QTextDocument_CreateObject(QTextDocument* self, const QTextFormat* f);
	friend QTextObject* QTextDocument_QBaseCreateObject(QTextDocument* self, const QTextFormat* f);
	friend QVariant* QTextDocument_LoadResource(QTextDocument* self, int typeVal, const QUrl* name);
	friend QVariant* QTextDocument_QBaseLoadResource(QTextDocument* self, int typeVal, const QUrl* name);
};

#endif


