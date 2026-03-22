#pragma once
#ifndef QUNDOSTACK_H_C_LIBVIRTUAL
#define QUNDOSTACK_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QUndoCommand so that we can call protected methods
class VirtualQUndoCommand final : public QUndoCommand {

public:
	// Virtual class boolean flag
	bool isVirtualQUndoCommand= true;

	// Virtual class public types (including callbacks)
	using QUndoCommand_Undo_Callback = void (*)();
	using QUndoCommand_Redo_Callback = void (*)();
	using QUndoCommand_Id_Callback = int (*)();
	using QUndoCommand_MergeWith_Callback = bool (*)(QUndoCommand*, const QUndoCommand*);

protected:
	// Instance callback storage
	mutable QUndoCommand_Undo_Callback qundocommand_undo_callback = nullptr;
	mutable QUndoCommand_Redo_Callback qundocommand_redo_callback = nullptr;
	mutable QUndoCommand_Id_Callback qundocommand_id_callback = nullptr;
	mutable QUndoCommand_MergeWith_Callback qundocommand_mergewith_callback = nullptr;

	// Instance base flags
    mutable bool qundocommand_undo_isbase = false;
    mutable bool qundocommand_redo_isbase = false;
    mutable bool qundocommand_id_isbase = false;
    mutable bool qundocommand_mergewith_isbase = false;

public:
	VirtualQUndoCommand(): QUndoCommand() {};
	VirtualQUndoCommand(const QString& text): QUndoCommand(text) {};
	VirtualQUndoCommand(QUndoCommand* parent): QUndoCommand(parent) {};
	VirtualQUndoCommand(const QString& text, QUndoCommand* parent): QUndoCommand(text, parent) {};

	~VirtualQUndoCommand() {
		qundocommand_undo_callback = nullptr;
		qundocommand_redo_callback = nullptr;
		qundocommand_id_callback = nullptr;
		qundocommand_mergewith_callback = nullptr;
	}

// Callback setters
	inline void setQUndoCommand_Undo_Callback(QUndoCommand_Undo_Callback cb) const { qundocommand_undo_callback = cb; }
	inline void setQUndoCommand_Redo_Callback(QUndoCommand_Redo_Callback cb) const { qundocommand_redo_callback = cb; }
	inline void setQUndoCommand_Id_Callback(QUndoCommand_Id_Callback cb) const { qundocommand_id_callback = cb; }
	inline void setQUndoCommand_MergeWith_Callback(QUndoCommand_MergeWith_Callback cb) const { qundocommand_mergewith_callback = cb; }

// Base flag setters
	inline void setQUndoCommand_Undo_IsBase(bool value) const { qundocommand_undo_isbase = value; }
	inline void setQUndoCommand_Redo_IsBase(bool value) const { qundocommand_redo_isbase = value; }
	inline void setQUndoCommand_Id_IsBase(bool value) const { qundocommand_id_isbase = value; }
	inline void setQUndoCommand_MergeWith_IsBase(bool value) const { qundocommand_mergewith_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void undo() override {
		if (qundocommand_undo_isbase) {
			qundocommand_undo_isbase = false;
			QUndoCommand::undo();
		} else if (qundocommand_undo_callback != nullptr) {
			qundocommand_undo_callback();
		} else {
			QUndoCommand::undo();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void redo() override {
		if (qundocommand_redo_isbase) {
			qundocommand_redo_isbase = false;
			QUndoCommand::redo();
		} else if (qundocommand_redo_callback != nullptr) {
			qundocommand_redo_callback();
		} else {
			QUndoCommand::redo();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int id() const override {
		if (qundocommand_id_isbase) {
			qundocommand_id_isbase = false;
			return QUndoCommand::id();
		} else if (qundocommand_id_callback != nullptr) {
			int callback_ret = qundocommand_id_callback();
			return callback_ret;
		} else {
			return QUndoCommand::id();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool mergeWith(const QUndoCommand* other) override {
		if (qundocommand_mergewith_isbase) {
			qundocommand_mergewith_isbase = false;
			return QUndoCommand::mergeWith(other);
		} else if (qundocommand_mergewith_callback != nullptr) {
			const QUndoCommand* cbval1 = other;
			bool callback_ret = qundocommand_mergewith_callback(this, cbval1);
			return callback_ret;
		} else {
			return QUndoCommand::mergeWith(other);
		}
	}
};

#endif


