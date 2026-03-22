#include <QAction>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUndoCommand>
#include <QUndoStack>
#include <qundostack.h>
#include "libqundostack.h"
#include "libqundostack.hxx"

QUndoCommand* QUndoCommand_new() {
	 return new VirtualQUndoCommand();
}

QUndoCommand* QUndoCommand_new2(const libqt_string text) {
	 return new VirtualQUndoCommand(QString::fromUtf8(text.data, text.len));
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
	 return new VirtualQUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(const libqt_string text, QUndoCommand* parent) {
	 return new VirtualQUndoCommand(QString::fromUtf8(text.data, text.len), parent);
}

void QUndoCommand_Undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_Redo(QUndoCommand* self) {
	self->redo();
}

libqt_string QUndoCommand_Text(const QUndoCommand* self) {
	QString _ret = self->text();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoCommand_ActionText(const QUndoCommand* self) {
	QString _ret = self->actionText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUndoCommand_SetText(QUndoCommand* self, const libqt_string text) {
	self->setText(QString::fromUtf8(text.data, text.len));
}

bool QUndoCommand_IsObsolete(const QUndoCommand* self) {
	return self->isObsolete();
}

void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_Id(const QUndoCommand* self) {
	return self->id();
}

bool QUndoCommand_MergeWith(QUndoCommand* self, const QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_ChildCount(const QUndoCommand* self) {
	return self->childCount();
}

const QUndoCommand* QUndoCommand_Child(const QUndoCommand* self, int index) {
	return self->child(index);
}

// Base class handler implementation
void QUndoCommand_QBaseUndo(QUndoCommand* self) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Undo_IsBase(true);
	vqundocommand->undo();
}
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnUndo(QUndoCommand* self, intptr_t slot) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Undo_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Undo_Callback>(slot));
}
}

// Base class handler implementation
void QUndoCommand_QBaseRedo(QUndoCommand* self) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Redo_IsBase(true);
	vqundocommand->redo();
}
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnRedo(QUndoCommand* self, intptr_t slot) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Redo_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Redo_Callback>(slot));
}
}

// Base class handler implementation
int QUndoCommand_QBaseId(const QUndoCommand* self) {
	auto* vqundocommand = dynamic_cast<const VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Id_IsBase(true);
	return vqundocommand->id();
}
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnId(const QUndoCommand* self, intptr_t slot) {
	auto* vqundocommand = dynamic_cast<const VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_Id_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_Id_Callback>(slot));
}
}

// Base class handler implementation
bool QUndoCommand_QBaseMergeWith(QUndoCommand* self, const QUndoCommand* other) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_MergeWith_IsBase(true);
	return vqundocommand->mergeWith(other);
}
}

// Auxiliary method to allow providing re-implementation
void QUndoCommand_OnMergeWith(QUndoCommand* self, intptr_t slot) {
	auto* vqundocommand = dynamic_cast<VirtualQUndoCommand*>(self);
	if (vqundocommand && vqundocommand->isVirtualQUndoCommand) {
vqundocommand->setQUndoCommand_MergeWith_Callback(reinterpret_cast<VirtualQUndoCommand::QUndoCommand_MergeWith_Callback>(slot));
}
}

void QUndoCommand_Delete(QUndoCommand* self) {
    delete self;
}

QUndoStack* QUndoStack_new() {
	 return new QUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
	 return new QUndoStack(parent);
}

libqt_string QUndoStack_Tr(const char* s) {
	QString _ret = QUndoStack::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUndoStack_Clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_CanUndo(const QUndoStack* self) {
	return self->canUndo();
}

bool QUndoStack_CanRedo(const QUndoStack* self) {
	return self->canRedo();
}

libqt_string QUndoStack_UndoText(const QUndoStack* self) {
	QString _ret = self->undoText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoStack_RedoText(const QUndoStack* self) {
	QString _ret = self->redoText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QUndoStack_Count(const QUndoStack* self) {
	return self->count();
}

int QUndoStack_Index(const QUndoStack* self) {
	return self->index();
}

libqt_string QUndoStack_Text(const QUndoStack* self, int idx) {
	QString _ret = self->text(idx);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QUndoStack_CreateUndoAction(const QUndoStack* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoStack_CreateRedoAction(const QUndoStack* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoStack_IsActive(const QUndoStack* self) {
	return self->isActive();
}

bool QUndoStack_IsClean(const QUndoStack* self) {
	return self->isClean();
}

int QUndoStack_CleanIndex(const QUndoStack* self) {
	return self->cleanIndex();
}

void QUndoStack_BeginMacro(QUndoStack* self, const libqt_string text) {
	self->beginMacro(QString::fromUtf8(text.data, text.len));
}

void QUndoStack_EndMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_SetUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(limit);
}

int QUndoStack_UndoLimit(const QUndoStack* self) {
	return self->undoLimit();
}

const QUndoCommand* QUndoStack_Command(const QUndoStack* self, int index) {
	return self->command(index);
}

void QUndoStack_SetClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_ResetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_SetIndex(QUndoStack* self, int idx) {
	self->setIndex(idx);
}

void QUndoStack_Undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_Redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_SetActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_IndexChanged(QUndoStack* self, int idx) {
	self->indexChanged(idx);
}

void QUndoStack_Connect_IndexChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, int) = reinterpret_cast<void (*)(QUndoStack*, int)>(slot);
    QUndoStack::connect(self, &QUndoStack::indexChanged, [self, slotFunc](int idx) {
	slotFunc(self, idx);
    });
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_Connect_CleanChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::cleanChanged, [self, slotFunc](bool clean) {
	slotFunc(self, clean);
    });
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_Connect_CanUndoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::canUndoChanged, [self, slotFunc](bool canUndo) {
	slotFunc(self, canUndo);
    });
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_Connect_CanRedoChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, bool) = reinterpret_cast<void (*)(QUndoStack*, bool)>(slot);
    QUndoStack::connect(self, &QUndoStack::canRedoChanged, [self, slotFunc](bool canRedo) {
	slotFunc(self, canRedo);
    });
}

void QUndoStack_UndoTextChanged(QUndoStack* self, const libqt_string undoText) {
	self->undoTextChanged(QString::fromUtf8(undoText.data, undoText.len));
}

void QUndoStack_Connect_UndoTextChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, const char*) = reinterpret_cast<void (*)(QUndoStack*, const char*)>(slot);
    QUndoStack::connect(self, &QUndoStack::undoTextChanged, [self, slotFunc](const QString& undoText) {
	slotFunc(self, undoText);
    });
}

void QUndoStack_RedoTextChanged(QUndoStack* self, const libqt_string redoText) {
	self->redoTextChanged(QString::fromUtf8(redoText.data, redoText.len));
}

void QUndoStack_Connect_RedoTextChanged(QUndoStack* self, intptr_t slot) {
    void (*slotFunc)(QUndoStack*, const char*) = reinterpret_cast<void (*)(QUndoStack*, const char*)>(slot);
    QUndoStack::connect(self, &QUndoStack::redoTextChanged, [self, slotFunc](const QString& redoText) {
	slotFunc(self, redoText);
    });
}

libqt_string QUndoStack_Tr2(const char* s, const char* c) {
	QString _ret = QUndoStack::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoStack_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QUndoStack_CreateUndoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix) {
	return self->createUndoAction(parent, QString::fromUtf8(prefix.data, prefix.len));
}

QAction* QUndoStack_CreateRedoAction2(const QUndoStack* self, QObject* parent, const libqt_string prefix) {
	return self->createRedoAction(parent, QString::fromUtf8(prefix.data, prefix.len));
}

void QUndoStack_SetActive1(QUndoStack* self, bool active) {
	self->setActive(active);
}

void QUndoStack_Delete(QUndoStack* self) {
    delete self;
}

