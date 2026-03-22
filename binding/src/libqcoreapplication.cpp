#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QCoreApplication>
#include <QDeadlineTimer>
#include <QEvent>
#include <QObject>
#include <QPermission>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTranslator>
#include <qcoreapplication.h>
#include "libqcoreapplication.h"
#include "libqcoreapplication.hxx"

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
	 return new VirtualQCoreApplication(*argc, argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
	 return new VirtualQCoreApplication(*argc, argv, param3);
}

libqt_string QCoreApplication_Tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QCoreApplication_Arguments() {
	auto _ret = QCoreApplication::arguments();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QCoreApplication_SetAttribute(int attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_TestAttribute(int attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_SetOrganizationDomain(const libqt_string orgDomain) {
	QCoreApplication::setOrganizationDomain(QString::fromUtf8(orgDomain.data, orgDomain.len));
}

libqt_string QCoreApplication_OrganizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_SetOrganizationName(const libqt_string orgName) {
	QCoreApplication::setOrganizationName(QString::fromUtf8(orgName.data, orgName.len));
}

libqt_string QCoreApplication_OrganizationName() {
	QString _ret = QCoreApplication::organizationName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_SetApplicationName(const libqt_string application) {
	QCoreApplication::setApplicationName(QString::fromUtf8(application.data, application.len));
}

libqt_string QCoreApplication_ApplicationName() {
	QString _ret = QCoreApplication::applicationName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_SetApplicationVersion(const libqt_string version) {
	QCoreApplication::setApplicationVersion(QString::fromUtf8(version.data, version.len));
}

libqt_string QCoreApplication_ApplicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_SetSetuidAllowed(bool allow) {
	QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_IsSetuidAllowed() {
	return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_Instance() {
	return QCoreApplication::instance();
}

int QCoreApplication_Exec() {
	return QCoreApplication::exec();
}

void QCoreApplication_ProcessEvents() {
	QCoreApplication::processEvents();
}

void QCoreApplication_ProcessEvents2(int flags, int maxtime) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), maxtime);
}

void QCoreApplication_ProcessEvents3(int flags, QDeadlineTimer* deadline) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), *deadline);
}

bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event) {
	return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_PostEvent(QObject* receiver, QEvent* event) {
	QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_SendPostedEvents() {
	QCoreApplication::sendPostedEvents();
}

void QCoreApplication_RemovePostedEvents(QObject* receiver) {
	QCoreApplication::removePostedEvents(receiver);
}

QAbstractEventDispatcher* QCoreApplication_EventDispatcher() {
	return QCoreApplication::eventDispatcher();
}

void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
	QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QCoreApplication_StartingUp() {
	return QCoreApplication::startingUp();
}

bool QCoreApplication_ClosingDown() {
	return QCoreApplication::closingDown();
}

libqt_string QCoreApplication_ApplicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCoreApplication_ApplicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

long long QCoreApplication_ApplicationPid() {
	return QCoreApplication::applicationPid();
}

int QCoreApplication_CheckPermission(QCoreApplication* self, const QPermission* permission) {
	return self->checkPermission(*permission);
}

void QCoreApplication_SetLibraryPaths(const libqt_list libraryPaths) {
	QCoreApplication::setLibraryPaths(QList<QString>());
}

libqt_list QCoreApplication_LibraryPaths() {
	auto _ret = QCoreApplication::libraryPaths();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QCoreApplication_AddLibraryPath(const libqt_string param1) {
	QCoreApplication::addLibraryPath(QString::fromUtf8(param1.data, param1.len));
}

void QCoreApplication_RemoveLibraryPath(const libqt_string param1) {
	QCoreApplication::removeLibraryPath(QString::fromUtf8(param1.data, param1.len));
}

bool QCoreApplication_InstallTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_RemoveTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

libqt_string QCoreApplication_Translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QCoreApplication_Connect_InstallNativeEventFilter(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*, QAbstractNativeEventFilter*) = reinterpret_cast<void (*)(QCoreApplication*, QAbstractNativeEventFilter*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::installNativeEventFilter, [self, slotFunc](QAbstractNativeEventFilter* filterObj) {
	slotFunc(self, filterObj);
    });
}

void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

void QCoreApplication_Connect_RemoveNativeEventFilter(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*, QAbstractNativeEventFilter*) = reinterpret_cast<void (*)(QCoreApplication*, QAbstractNativeEventFilter*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::removeNativeEventFilter, [self, slotFunc](QAbstractNativeEventFilter* filterObj) {
	slotFunc(self, filterObj);
    });
}

bool QCoreApplication_IsQuitLockEnabled() {
	return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_SetQuitLockEnabled(bool enabled) {
	QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_Quit() {
	QCoreApplication::quit();
}

void QCoreApplication_Exit() {
	QCoreApplication::exit();
}

void QCoreApplication_OrganizationNameChanged(QCoreApplication* self) {
	self->organizationNameChanged();
}

void QCoreApplication_Connect_OrganizationNameChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::organizationNameChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_Connect_OrganizationDomainChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::organizationDomainChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCoreApplication_ApplicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_Connect_ApplicationNameChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::applicationNameChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_Connect_ApplicationVersionChanged(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::applicationVersionChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QCoreApplication_Tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCoreApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_SetAttribute2(int attribute, bool on) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_ProcessEvents1(int flags) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority) {
	QCoreApplication::postEvent(receiver, event, priority);
}

void QCoreApplication_SendPostedEvents1(QObject* receiver) {
	QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type) {
	QCoreApplication::sendPostedEvents(receiver, event_type);
}

void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType) {
	QCoreApplication::removePostedEvents(receiver, eventType);
}

libqt_string QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCoreApplication_Exit1(int retcode) {
	QCoreApplication::exit(retcode);
}

// Base class handler implementation
bool QCoreApplication_QBaseNotify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_Notify_IsBase(true);
	return vqcoreapplication->notify(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnNotify(QCoreApplication* self, intptr_t slot) {
	auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_Notify_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Notify_Callback>(slot));
}
}

// Derived class handler implementation
bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1) {
	auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
	return vqcoreapplication->event(param1);
	} else {
	return self->QCoreApplication::event(param1);
}
}

// Base class handler implementation
bool QCoreApplication_QBaseEvent(QCoreApplication* self, QEvent* param1) {
	auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_Event_IsBase(true);
	return vqcoreapplication->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnEvent(QCoreApplication* self, intptr_t slot) {
	auto* vqcoreapplication = dynamic_cast<VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_Event_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_Event_Callback>(slot));
}
}

// Derived class handler implementation
void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision) {
	auto* vqcoreapplication = dynamic_cast<const VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
	return vqcoreapplication->resolveInterface(name, revision);
	} else {
	return self->QCoreApplication::resolveInterface(name, revision);
}
}

// Base class handler implementation
void* QCoreApplication_QBaseResolveInterface(const QCoreApplication* self, const char* name, int revision) {
	auto* vqcoreapplication = dynamic_cast<const VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_ResolveInterface_IsBase(true);
	return vqcoreapplication->resolveInterface(name, revision);
}
}

// Auxiliary method to allow providing re-implementation
void QCoreApplication_OnResolveInterface(const QCoreApplication* self, intptr_t slot) {
	auto* vqcoreapplication = dynamic_cast<const VirtualQCoreApplication*>(self);
	if (vqcoreapplication && vqcoreapplication->isVirtualQCoreApplication) {
vqcoreapplication->setQCoreApplication_ResolveInterface_Callback(reinterpret_cast<VirtualQCoreApplication::QCoreApplication_ResolveInterface_Callback>(slot));
}
}

void QCoreApplication_Connect_aboutToQuit(QCoreApplication* self, intptr_t slot) {
    void (*slotFunc)(QCoreApplication*) = reinterpret_cast<void (*)(QCoreApplication*)>(slot);
    QCoreApplication::connect(self, &QCoreApplication::aboutToQuit, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QCoreApplication_Delete(QCoreApplication* self) {
    delete self;
}

