#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QObject>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qdialog.h>
#include "libqdialog.h"
#include "libqdialog.hxx"

QDialog* QDialog_new(QWidget* parent) {
	 return new VirtualQDialog(parent);
}

QDialog* QDialog_new2() {
	 return new VirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
	 return new VirtualQDialog(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QDialog_Tr(const char* s) {
	QString _ret = QDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QDialog_Result(const QDialog* self) {
	return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

QSize* QDialog_SizeHint(const QDialog* self) {
	return new QSize(self->sizeHint());
}

QSize* QDialog_MinimumSizeHint(const QDialog* self) {
	return new QSize(self->minimumSizeHint());
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
	self->setResult(r);
}

void QDialog_Finished(QDialog* self, int result) {
	self->finished(result);
}

void QDialog_Connect_Finished(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*, int) = reinterpret_cast<void (*)(QDialog*, int)>(slot);
    QDialog::connect(self, &QDialog::finished, [self, slotFunc](int result) {
	slotFunc(self, result);
    });
}

void QDialog_Accepted(QDialog* self) {
	self->accepted();
}

void QDialog_Connect_Accepted(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::accepted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QDialog_Rejected(QDialog* self) {
	self->rejected();
}

void QDialog_Connect_Rejected(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::rejected, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QDialog_Open(QDialog* self) {
	self->open();
}

int QDialog_Exec(QDialog* self) {
	return self->exec();
}

void QDialog_Done(QDialog* self, int param1) {
	self->done(param1);
}

void QDialog_Accept(QDialog* self) {
	self->accept();
}

void QDialog_Reject(QDialog* self) {
	self->reject();
}

libqt_string QDialog_Tr2(const char* s, const char* c) {
	QString _ret = QDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QDialog_QBaseSetVisible(QDialog* self, bool visible) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_SetVisible_IsBase(true);
	vqdialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSetVisible(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_SetVisible_Callback(reinterpret_cast<VirtualQDialog::QDialog_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
QSize* QDialog_QBaseSizeHint(const QDialog* self) {
	auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_SizeHint_IsBase(true);
	return new QSize(vqdialog->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSizeHint(const QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_SizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QDialog_QBaseMinimumSizeHint(const QDialog* self) {
	auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_MinimumSizeHint_IsBase(true);
	return new QSize(vqdialog->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMinimumSizeHint(const QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<const VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QDialog_QBaseOpen(QDialog* self) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Open_IsBase(true);
	vqdialog->open();
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnOpen(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Open_Callback(reinterpret_cast<VirtualQDialog::QDialog_Open_Callback>(slot));
}
}

// Base class handler implementation
int QDialog_QBaseExec(QDialog* self) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Exec_IsBase(true);
	return vqdialog->exec();
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnExec(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Exec_Callback(reinterpret_cast<VirtualQDialog::QDialog_Exec_Callback>(slot));
}
}

// Base class handler implementation
void QDialog_QBaseDone(QDialog* self, int param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Done_IsBase(true);
	vqdialog->done(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDone(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Done_Callback(reinterpret_cast<VirtualQDialog::QDialog_Done_Callback>(slot));
}
}

// Base class handler implementation
void QDialog_QBaseAccept(QDialog* self) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Accept_IsBase(true);
	vqdialog->accept();
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAccept(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Accept_Callback(reinterpret_cast<VirtualQDialog::QDialog_Accept_Callback>(slot));
}
}

// Base class handler implementation
void QDialog_QBaseReject(QDialog* self) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Reject_IsBase(true);
	vqdialog->reject();
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReject(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_Reject_Callback(reinterpret_cast<VirtualQDialog::QDialog_Reject_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->keyPressEvent(param1);
	} else {
	self->QDialog::keyPressEvent(param1);
}
}

// Base class handler implementation
void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_KeyPressEvent_IsBase(true);
	vqdialog->keyPressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->closeEvent(param1);
	} else {
	self->QDialog::closeEvent(param1);
}
}

// Base class handler implementation
void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_CloseEvent_IsBase(true);
	vqdialog->closeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_CloseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_ShowEvent(QDialog* self, QShowEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->showEvent(param1);
	} else {
	self->QDialog::showEvent(param1);
}
}

// Base class handler implementation
void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ShowEvent_IsBase(true);
	vqdialog->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnShowEvent(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ShowEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->resizeEvent(param1);
	} else {
	self->QDialog::resizeEvent(param1);
}
}

// Base class handler implementation
void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ResizeEvent_IsBase(true);
	vqdialog->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->contextMenuEvent(param1);
	} else {
	self->QDialog::contextMenuEvent(param1);
}
}

// Base class handler implementation
void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ContextMenuEvent_IsBase(true);
	vqdialog->contextMenuEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	return vqdialog->eventFilter(param1, param2);
	} else {
	return self->QDialog::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_EventFilter_IsBase(true);
	return vqdialog->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEventFilter(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_EventFilter_Callback(reinterpret_cast<VirtualQDialog::QDialog_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QDialog_AdjustPosition(QDialog* self, QWidget* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
	vqdialog->adjustPosition(param1);
	} else {
	self->QDialog::adjustPosition(param1);
}
}

// Base class handler implementation
void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_AdjustPosition_IsBase(true);
	vqdialog->adjustPosition(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAdjustPosition(QDialog* self, intptr_t slot) {
	auto* vqdialog = dynamic_cast<VirtualQDialog*>(self);
	if (vqdialog && vqdialog->isVirtualQDialog) {
vqdialog->setQDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQDialog::QDialog_AdjustPosition_Callback>(slot));
}
}

void QDialog_Delete(QDialog* self) {
    delete self;
}

