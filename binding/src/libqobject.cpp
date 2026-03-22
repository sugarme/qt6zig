#include <QBindingStorage>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectData>
#include <QSignalBlocker>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qobject.h>
#include "libqobject.h"
#include "libqobject.hxx"

QObjectData* QObjectData_new() {
	 return new QObjectData();
}

QObject* QObjectData_QPtr(const QObjectData* self) {
	return self->q_ptr;
}

void QObjectData_SetQPtr(QObjectData* self, QObject* q_ptr) {
	self->q_ptr;
}

QObject* QObjectData_Parent(const QObjectData* self) {
	return self->parent;
}

void QObjectData_SetParent(QObjectData* self, QObject* parent) {
	self->parent;
}

libqt_list QObjectData_Children(const QObjectData* self) {
	auto _ret = self->children;
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QObjectData_SetChildren(QObjectData* self, libqt_list children) {
	self->children;
}

unsigned int QObjectData_IsWidget(const QObjectData* self) {
	return self->isWidget;
}

void QObjectData_SetIsWidget(QObjectData* self, unsigned int isWidget) {
	self->isWidget;
}

unsigned int QObjectData_BlockSig(const QObjectData* self) {
	return self->blockSig;
}

void QObjectData_SetBlockSig(QObjectData* self, unsigned int blockSig) {
	self->blockSig;
}

unsigned int QObjectData_WasDeleted(const QObjectData* self) {
	return self->wasDeleted;
}

void QObjectData_SetWasDeleted(QObjectData* self, unsigned int wasDeleted) {
	self->wasDeleted;
}

unsigned int QObjectData_IsDeletingChildren(const QObjectData* self) {
	return self->isDeletingChildren;
}

void QObjectData_SetIsDeletingChildren(QObjectData* self, unsigned int isDeletingChildren) {
	self->isDeletingChildren;
}

unsigned int QObjectData_SendChildEvents(const QObjectData* self) {
	return self->sendChildEvents;
}

void QObjectData_SetSendChildEvents(QObjectData* self, unsigned int sendChildEvents) {
	self->sendChildEvents;
}

unsigned int QObjectData_ReceiveChildEvents(const QObjectData* self) {
	return self->receiveChildEvents;
}

void QObjectData_SetReceiveChildEvents(QObjectData* self, unsigned int receiveChildEvents) {
	self->receiveChildEvents;
}

unsigned int QObjectData_IsWindow(const QObjectData* self) {
	return self->isWindow;
}

void QObjectData_SetIsWindow(QObjectData* self, unsigned int isWindow) {
	self->isWindow;
}

unsigned int QObjectData_DeleteLaterCalled(const QObjectData* self) {
	return self->deleteLaterCalled;
}

void QObjectData_SetDeleteLaterCalled(QObjectData* self, unsigned int deleteLaterCalled) {
	self->deleteLaterCalled;
}

unsigned int QObjectData_IsQuickItem(const QObjectData* self) {
	return self->isQuickItem;
}

void QObjectData_SetIsQuickItem(QObjectData* self, unsigned int isQuickItem) {
	self->isQuickItem;
}

unsigned int QObjectData_WillBeWidget(const QObjectData* self) {
	return self->willBeWidget;
}

void QObjectData_SetWillBeWidget(QObjectData* self, unsigned int willBeWidget) {
	self->willBeWidget;
}

unsigned int QObjectData_WasWidget(const QObjectData* self) {
	return self->wasWidget;
}

void QObjectData_SetWasWidget(QObjectData* self, unsigned int wasWidget) {
	self->wasWidget;
}

unsigned int QObjectData_ReceiveParentEvents(const QObjectData* self) {
	return self->receiveParentEvents;
}

void QObjectData_SetReceiveParentEvents(QObjectData* self, unsigned int receiveParentEvents) {
	self->receiveParentEvents;
}

unsigned int QObjectData_Unused(const QObjectData* self) {
	return self->unused;
}

void QObjectData_SetUnused(QObjectData* self, unsigned int unused) {
	self->unused;
}

QBindingStorage* QObjectData_BindingStorage(const QObjectData* self) {
	return new QBindingStorage(self->bindingStorage);
}

void QObjectData_SetBindingStorage(QObjectData* self, QBindingStorage* bindingStorage) {
	self->bindingStorage;
}

QMetaObject* QObjectData_DynamicMetaObject(const QObjectData* self) {
	return self->dynamicMetaObject();
}

void QObjectData_Delete(QObjectData* self) {
    delete self;
}

QObject* QObject_new() {
	 return new VirtualQObject();
}

QObject* QObject_new2(QObject* parent) {
	 return new VirtualQObject(parent);
}

libqt_string QObject_Tr(const char* s) {
	QString _ret = QObject::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QObject_Event(QObject* self, QEvent* event) {
	return self->event(event);
}

bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

libqt_string QObject_ObjectName(const QObject* self) {
	QString _ret = self->objectName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QObject_IsWidgetType(const QObject* self) {
	return self->isWidgetType();
}

bool QObject_IsWindowType(const QObject* self) {
	return self->isWindowType();
}

bool QObject_IsQuickItemType(const QObject* self) {
	return self->isQuickItemType();
}

bool QObject_SignalsBlocked(const QObject* self) {
	return self->signalsBlocked();
}

bool QObject_BlockSignals(QObject* self, bool b) {
	return self->blockSignals(b);
}

QThread* QObject_Thread(const QObject* self) {
	return self->thread();
}

bool QObject_MoveToThread(QObject* self, QThread* thread) {
	return self->moveToThread(thread);
}

int QObject_StartTimer(QObject* self, int interval) {
	return self->startTimer(interval);
}

void QObject_KillTimer(QObject* self, int id) {
	self->killTimer(id);
}

libqt_list QObject_Children(const QObject* self) {
	auto _ret = self->children();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

void QObject_SetParent(QObject* self, QObject* parent) {
	self->setParent(parent);
}

void QObject_InstallEventFilter(QObject* self, QObject* filterObj) {
	self->installEventFilter(filterObj);
}

void QObject_RemoveEventFilter(QObject* self, QObject* obj) {
	self->removeEventFilter(obj);
}

bool QObject_Disconnect(const QObject* sender, const char* signal, const QObject* receiver, const char* member) {
	return QObject::disconnect(sender, signal, receiver, member);
}

bool QObject_Disconnect2(const QObject* sender, const QMetaMethod* signal, const QObject* receiver, const QMetaMethod* member) {
	return QObject::disconnect(sender, *signal, receiver, *member);
}

bool QObject_Disconnect3(const QObject* self) {
	return self->disconnect();
}

bool QObject_Disconnect4(const QObject* self, const QObject* receiver) {
	return self->disconnect(receiver);
}

void QObject_DumpObjectTree(const QObject* self) {
	self->dumpObjectTree();
}

void QObject_DumpObjectInfo(const QObject* self) {
	self->dumpObjectInfo();
}

bool QObject_SetProperty(QObject* self, const char* name, const QVariant* value) {
	return self->setProperty(name, *value);
}

QVariant* QObject_Property(const QObject* self, const char* name) {
	return new QVariant(self->property(name));
}

libqt_list QObject_DynamicPropertyNames(const QObject* self) {
	auto _ret = self->dynamicPropertyNames();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

QBindingStorage* QObject_BindingStorage(QObject* self) {
	return self->bindingStorage();
}

const QBindingStorage* QObject_BindingStorage2(const QObject* self) {
	return self->bindingStorage();
}

void QObject_Destroyed(QObject* self) {
	self->destroyed();
}

void QObject_Connect_Destroyed(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*) = reinterpret_cast<void (*)(QObject*)>(slot);
    QObject::connect(self, &QObject::destroyed, [self, slotFunc]() {
	slotFunc(self);
    });
}

QObject* QObject_Parent(const QObject* self) {
	return self->parent();
}

bool QObject_Inherits(const QObject* self, const char* classname) {
	return self->inherits(classname);
}

void QObject_DeleteLater(QObject* self) {
	self->deleteLater();
}

libqt_string QObject_Tr2(const char* s, const char* c) {
	QString _ret = QObject::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QObject::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QObject_MoveToThread2(QObject* self, QThread* thread, Disambiguated_t* param2) {
	return self->moveToThread(thread, *param2);
}

int QObject_StartTimer22(QObject* self, int interval, int timerType) {
	return self->startTimer(interval, static_cast<Qt::TimerType>(timerType));
}

bool QObject_Disconnect1(const QObject* self, const char* signal) {
	return self->disconnect(signal);
}

bool QObject_Disconnect22(const QObject* self, const char* signal, const QObject* receiver) {
	return self->disconnect(signal, receiver);
}

bool QObject_Disconnect32(const QObject* self, const char* signal, const QObject* receiver, const char* member) {
	return self->disconnect(signal, receiver, member);
}

bool QObject_Disconnect23(const QObject* self, const QObject* receiver, const char* member) {
	return self->disconnect(receiver, member);
}

void QObject_Destroyed1(QObject* self, QObject* param1) {
	self->destroyed(param1);
}

void QObject_Connect_Destroyed1(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*, QObject*) = reinterpret_cast<void (*)(QObject*, QObject*)>(slot);
    QObject::connect(self, &QObject::destroyed, [self, slotFunc](QObject* param1) {
	slotFunc(self, param1);
    });
}

// Base class handler implementation
bool QObject_QBaseEvent(QObject* self, QEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Event_IsBase(true);
	return vqobject->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnEvent(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Event_Callback(reinterpret_cast<VirtualQObject::QObject_Event_Callback>(slot));
}
}

// Base class handler implementation
bool QObject_QBaseEventFilter(QObject* self, QObject* watched, QEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_EventFilter_IsBase(true);
	return vqobject->eventFilter(watched, event);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnEventFilter(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_EventFilter_Callback(reinterpret_cast<VirtualQObject::QObject_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QObject_TimerEvent(QObject* self, QTimerEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	vqobject->timerEvent(event);
	} else {
	self->QObject::timerEvent(event);
}
}

// Base class handler implementation
void QObject_QBaseTimerEvent(QObject* self, QTimerEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_TimerEvent_IsBase(true);
	vqobject->timerEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnTimerEvent(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_TimerEvent_Callback(reinterpret_cast<VirtualQObject::QObject_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QObject_ChildEvent(QObject* self, QChildEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	vqobject->childEvent(event);
	} else {
	self->QObject::childEvent(event);
}
}

// Base class handler implementation
void QObject_QBaseChildEvent(QObject* self, QChildEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_ChildEvent_IsBase(true);
	vqobject->childEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnChildEvent(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_ChildEvent_Callback(reinterpret_cast<VirtualQObject::QObject_ChildEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QObject_CustomEvent(QObject* self, QEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	vqobject->customEvent(event);
	} else {
	self->QObject::customEvent(event);
}
}

// Base class handler implementation
void QObject_QBaseCustomEvent(QObject* self, QEvent* event) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_CustomEvent_IsBase(true);
	vqobject->customEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnCustomEvent(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_CustomEvent_Callback(reinterpret_cast<VirtualQObject::QObject_CustomEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QObject_ConnectNotify(QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	vqobject->connectNotify(*signal);
	} else {
	self->QObject::connectNotify(*signal);
}
}

// Base class handler implementation
void QObject_QBaseConnectNotify(QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_ConnectNotify_IsBase(true);
	vqobject->connectNotify(*signal);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnConnectNotify(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_ConnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_ConnectNotify_Callback>(slot));
}
}

// Derived class handler implementation
void QObject_DisconnectNotify(QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	vqobject->disconnectNotify(*signal);
	} else {
	self->QObject::disconnectNotify(*signal);
}
}

// Base class handler implementation
void QObject_QBaseDisconnectNotify(QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_DisconnectNotify_IsBase(true);
	vqobject->disconnectNotify(*signal);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnDisconnectNotify(QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_DisconnectNotify_Callback>(slot));
}
}

// Derived class handler implementation
QObject* QObject_Sender(const QObject* self) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	return vqobject->sender();
	} else {
	return self->QObject::sender();
}
}

// Base class handler implementation
QObject* QObject_QBaseSender(const QObject* self) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Sender_IsBase(true);
	return vqobject->sender();
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSender(const QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Sender_Callback(reinterpret_cast<VirtualQObject::QObject_Sender_Callback>(slot));
}
}

// Derived class handler implementation
int QObject_SenderSignalIndex(const QObject* self) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	return vqobject->senderSignalIndex();
	} else {
	return self->QObject::senderSignalIndex();
}
}

// Base class handler implementation
int QObject_QBaseSenderSignalIndex(const QObject* self) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_SenderSignalIndex_IsBase(true);
	return vqobject->senderSignalIndex();
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSenderSignalIndex(const QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQObject::QObject_SenderSignalIndex_Callback>(slot));
}
}

// Derived class handler implementation
int QObject_Receivers(const QObject* self, const char* signal) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	return vqobject->receivers(signal);
	} else {
	return self->QObject::receivers(signal);
}
}

// Base class handler implementation
int QObject_QBaseReceivers(const QObject* self, const char* signal) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Receivers_IsBase(true);
	return vqobject->receivers(signal);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnReceivers(const QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_Receivers_Callback(reinterpret_cast<VirtualQObject::QObject_Receivers_Callback>(slot));
}
}

// Derived class handler implementation
bool QObject_IsSignalConnected(const QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
	return vqobject->isSignalConnected(*signal);
	} else {
	return self->QObject::isSignalConnected(*signal);
}
}

// Base class handler implementation
bool QObject_QBaseIsSignalConnected(const QObject* self, const QMetaMethod* signal) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_IsSignalConnected_IsBase(true);
	return vqobject->isSignalConnected(*signal);
}
}

// Auxiliary method to allow providing re-implementation
void QObject_OnIsSignalConnected(const QObject* self, intptr_t slot) {
	auto* vqobject = dynamic_cast<const VirtualQObject*>(self);
	if (vqobject && vqobject->isVirtualQObject) {
vqobject->setQObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQObject::QObject_IsSignalConnected_Callback>(slot));
}
}

void QObject_Connect_objectNameChanged(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*, const char*) = reinterpret_cast<void (*)(QObject*, const char*)>(slot);
    QObject::connect(self, &QObject::objectNameChanged, [self, slotFunc](const QString& objectName) {
	slotFunc(self, objectName);
    });
}

void QObject_Delete(QObject* self) {
    delete self;
}

QSignalBlocker* QSignalBlocker_new(QObject* o) {
	 return new QSignalBlocker(o);
}

QSignalBlocker* QSignalBlocker_new2(QObject* o) {
	 return new QSignalBlocker(*o);
}

void QSignalBlocker_Reblock(QSignalBlocker* self) {
	self->reblock();
}

void QSignalBlocker_Unblock(QSignalBlocker* self) {
	self->unblock();
}

void QSignalBlocker_Dismiss(QSignalBlocker* self) {
	self->dismiss();
}

void QSignalBlocker_Delete(QSignalBlocker* self) {
    delete self;
}

