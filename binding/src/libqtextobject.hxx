#pragma once
#ifndef QTEXTOBJECT_H_C_LIBVIRTUAL
#define QTEXTOBJECT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTextBlockGroup so that we can call protected methods
class VirtualQTextBlockGroup final : public QTextBlockGroup {

public:
	// Virtual class boolean flag
	bool isVirtualQTextBlockGroup= true;

	// Virtual class public types (including callbacks)
	using QTextBlockGroup_BlockInserted_Callback = void (*)(QTextBlockGroup*, const QTextBlock*);
	using QTextBlockGroup_BlockRemoved_Callback = void (*)(QTextBlockGroup*, const QTextBlock*);
	using QTextBlockGroup_BlockFormatChanged_Callback = void (*)(QTextBlockGroup*, const QTextBlock*);
	using QTextBlockGroup_BlockList_Callback = libqt_list (*)();

protected:
	// Instance callback storage
	mutable QTextBlockGroup_BlockInserted_Callback qtextblockgroup_blockinserted_callback = nullptr;
	mutable QTextBlockGroup_BlockRemoved_Callback qtextblockgroup_blockremoved_callback = nullptr;
	mutable QTextBlockGroup_BlockFormatChanged_Callback qtextblockgroup_blockformatchanged_callback = nullptr;
	mutable QTextBlockGroup_BlockList_Callback qtextblockgroup_blocklist_callback = nullptr;

	// Instance base flags
    mutable bool qtextblockgroup_blockinserted_isbase = false;
    mutable bool qtextblockgroup_blockremoved_isbase = false;
    mutable bool qtextblockgroup_blockformatchanged_isbase = false;
    mutable bool qtextblockgroup_blocklist_isbase = false;

public:

	~VirtualQTextBlockGroup() {
		qtextblockgroup_blockinserted_callback = nullptr;
		qtextblockgroup_blockremoved_callback = nullptr;
		qtextblockgroup_blockformatchanged_callback = nullptr;
		qtextblockgroup_blocklist_callback = nullptr;
	}

// Callback setters
	inline void setQTextBlockGroup_BlockInserted_Callback(QTextBlockGroup_BlockInserted_Callback cb) const { qtextblockgroup_blockinserted_callback = cb; }
	inline void setQTextBlockGroup_BlockRemoved_Callback(QTextBlockGroup_BlockRemoved_Callback cb) const { qtextblockgroup_blockremoved_callback = cb; }
	inline void setQTextBlockGroup_BlockFormatChanged_Callback(QTextBlockGroup_BlockFormatChanged_Callback cb) const { qtextblockgroup_blockformatchanged_callback = cb; }
	inline void setQTextBlockGroup_BlockList_Callback(QTextBlockGroup_BlockList_Callback cb) const { qtextblockgroup_blocklist_callback = cb; }

// Base flag setters
	inline void setQTextBlockGroup_BlockInserted_IsBase(bool value) const { qtextblockgroup_blockinserted_isbase = value; }
	inline void setQTextBlockGroup_BlockRemoved_IsBase(bool value) const { qtextblockgroup_blockremoved_isbase = value; }
	inline void setQTextBlockGroup_BlockFormatChanged_IsBase(bool value) const { qtextblockgroup_blockformatchanged_isbase = value; }
	inline void setQTextBlockGroup_BlockList_IsBase(bool value) const { qtextblockgroup_blocklist_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void blockInserted(const QTextBlock& block) override {
		if (qtextblockgroup_blockinserted_isbase) {
			qtextblockgroup_blockinserted_isbase = false;
			QTextBlockGroup::blockInserted(block);
		} else if (qtextblockgroup_blockinserted_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			qtextblockgroup_blockinserted_callback(this, cbval1);
		} else {
			QTextBlockGroup::blockInserted(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void blockRemoved(const QTextBlock& block) override {
		if (qtextblockgroup_blockremoved_isbase) {
			qtextblockgroup_blockremoved_isbase = false;
			QTextBlockGroup::blockRemoved(block);
		} else if (qtextblockgroup_blockremoved_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			qtextblockgroup_blockremoved_callback(this, cbval1);
		} else {
			QTextBlockGroup::blockRemoved(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void blockFormatChanged(const QTextBlock& block) override {
		if (qtextblockgroup_blockformatchanged_isbase) {
			qtextblockgroup_blockformatchanged_isbase = false;
			QTextBlockGroup::blockFormatChanged(block);
		} else if (qtextblockgroup_blockformatchanged_callback != nullptr) {
			const QTextBlock* cbval1 = (const QTextBlock*)&block;
			qtextblockgroup_blockformatchanged_callback(this, cbval1);
		} else {
			QTextBlockGroup::blockFormatChanged(block);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QTextBlock> blockList() const {
		if (qtextblockgroup_blocklist_isbase) {
			qtextblockgroup_blocklist_isbase = false;
			return QTextBlockGroup::blockList();
		} else if (qtextblockgroup_blocklist_callback != nullptr) {
			libqt_list callback_ret = qtextblockgroup_blocklist_callback();
			return QList<QTextBlock>();
		} else {
			return QTextBlockGroup::blockList();
		}
	}

	// Friend functions
	friend void QTextBlockGroup_BlockInserted(QTextBlockGroup* self, const QTextBlock* block);
	friend void QTextBlockGroup_QBaseBlockInserted(QTextBlockGroup* self, const QTextBlock* block);
	friend void QTextBlockGroup_BlockRemoved(QTextBlockGroup* self, const QTextBlock* block);
	friend void QTextBlockGroup_QBaseBlockRemoved(QTextBlockGroup* self, const QTextBlock* block);
	friend void QTextBlockGroup_BlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block);
	friend void QTextBlockGroup_QBaseBlockFormatChanged(QTextBlockGroup* self, const QTextBlock* block);
	friend libqt_list QTextBlockGroup_BlockList(const QTextBlockGroup* self);
	friend libqt_list QTextBlockGroup_QBaseBlockList(const QTextBlockGroup* self);
};

#endif


