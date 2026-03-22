#include <QAction>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoGroup>
#include <QUndoStack>
#include <qundogroup.h>
#include "libqundogroup.h"
#include "libqundogroup.hxx"

QUndoGroup* QUndoGroup_new() {
	 return new QUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
	 return new QUndoGroup(parent);
}

libqt_string QUndoGroup_Tr(const char* s) {
	QString _ret = QUndoGroup::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUndoGroup_AddStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_RemoveStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

libqt_list QUndoGroup_Stacks(const QUndoGroup* self) {
	return self->stacks();
}

QUndoStack* QUndoGroup_ActiveStack(const QUndoGroup* self) {
	return self->activeStack();
}

QAction* QUndoGroup_CreateUndoAction(const QUndoGroup* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoGroup_CreateRedoAction(const QUndoGroup* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoGroup_CanUndo(const QUndoGroup* self) {
	return self->canUndo();
}

bool QUndoGroup_CanRedo(const QUndoGroup* self) {
	return self->canRedo();
}

libqt_string QUndoGroup_UndoText(const QUndoGroup* self) {
	QString _ret = self->undoText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoGroup_RedoText(const QUndoGroup* self) {
	QString _ret = self->redoText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUndoGroup_IsClean(const QUndoGroup* self) {
	return self->isClean();
}

void QUndoGroup_Undo(QUndoGroup* self) {
	self->undo();
}

void QUndoGroup_Redo(QUndoGroup* self) {
	self->redo();
}

void QUndoGroup_SetActiveStack(QUndoGroup* self, QUndoStack* stack) {
	self->setActiveStack(stack);
}

void QUndoGroup_ActiveStackChanged(QUndoGroup* self, QUndoStack* stack) {
	self->activeStackChanged(stack);
}

void QUndoGroup_Connect_ActiveStackChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, QUndoStack*) = reinterpret_cast<void (*)(QUndoGroup*, QUndoStack*)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::activeStackChanged, [self, slotFunc](QUndoStack* stack) {
	slotFunc(self, stack);
    });
}

void QUndoGroup_IndexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(idx);
}

void QUndoGroup_Connect_IndexChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, int) = reinterpret_cast<void (*)(QUndoGroup*, int)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::indexChanged, [self, slotFunc](int idx) {
	slotFunc(self, idx);
    });
}

void QUndoGroup_CleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_Connect_CleanChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::cleanChanged, [self, slotFunc](bool clean) {
	slotFunc(self, clean);
    });
}

void QUndoGroup_CanUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_Connect_CanUndoChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::canUndoChanged, [self, slotFunc](bool canUndo) {
	slotFunc(self, canUndo);
    });
}

void QUndoGroup_CanRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_Connect_CanRedoChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, bool) = reinterpret_cast<void (*)(QUndoGroup*, bool)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::canRedoChanged, [self, slotFunc](bool canRedo) {
	slotFunc(self, canRedo);
    });
}

void QUndoGroup_UndoTextChanged(QUndoGroup* self, const libqt_string undoText) {
	self->undoTextChanged(QString::fromUtf8(undoText.data, undoText.len));
}

void QUndoGroup_Connect_UndoTextChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, const char*) = reinterpret_cast<void (*)(QUndoGroup*, const char*)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::undoTextChanged, [self, slotFunc](const QString& undoText) {
	slotFunc(self, undoText);
    });
}

void QUndoGroup_RedoTextChanged(QUndoGroup* self, const libqt_string redoText) {
	self->redoTextChanged(QString::fromUtf8(redoText.data, redoText.len));
}

void QUndoGroup_Connect_RedoTextChanged(QUndoGroup* self, intptr_t slot) {
    void (*slotFunc)(QUndoGroup*, const char*) = reinterpret_cast<void (*)(QUndoGroup*, const char*)>(slot);
    QUndoGroup::connect(self, &QUndoGroup::redoTextChanged, [self, slotFunc](const QString& redoText) {
	slotFunc(self, redoText);
    });
}

libqt_string QUndoGroup_Tr2(const char* s, const char* c) {
	QString _ret = QUndoGroup::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUndoGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAction* QUndoGroup_CreateUndoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix) {
	return self->createUndoAction(parent, QString::fromUtf8(prefix.data, prefix.len));
}

QAction* QUndoGroup_CreateRedoAction2(const QUndoGroup* self, QObject* parent, const libqt_string prefix) {
	return self->createRedoAction(parent, QString::fromUtf8(prefix.data, prefix.len));
}

void QUndoGroup_Delete(QUndoGroup* self) {
    delete self;
}

