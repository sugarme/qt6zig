#include <QClipboard>
#include <QCoreApplication>
#include <QCursor>
#include <QEvent>
#include <QFont>
#include <QGuiApplication>
#include <QIcon>
#include <QInputMethod>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QScreen>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleHints>
#include <QWindow>
#include <qguiapplication.h>
#include "libqguiapplication.h"
#include "libqguiapplication.hxx"

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
	 return new VirtualQGuiApplication(*argc, argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
	 return new VirtualQGuiApplication(*argc, argv, param3);
}

libqt_string QGuiApplication_Tr(const char* s) {
	QString _ret = QGuiApplication::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGuiApplication_SetApplicationDisplayName(const libqt_string name) {
	QGuiApplication::setApplicationDisplayName(QString::fromUtf8(name.data, name.len));
}

libqt_string QGuiApplication_ApplicationDisplayName() {
	QString _ret = QGuiApplication::applicationDisplayName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGuiApplication_SetBadgeNumber(QGuiApplication* self, long long number) {
	self->setBadgeNumber(number);
}

void QGuiApplication_SetDesktopFileName(const libqt_string name) {
	QGuiApplication::setDesktopFileName(QString::fromUtf8(name.data, name.len));
}

libqt_string QGuiApplication_DesktopFileName() {
	QString _ret = QGuiApplication::desktopFileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QGuiApplication_AllWindows() {
	auto _ret = QGuiApplication::allWindows();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

libqt_list QGuiApplication_TopLevelWindows() {
	auto _ret = QGuiApplication::topLevelWindows();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QWindow* QGuiApplication_TopLevelAt(const QPoint* pos) {
	return QGuiApplication::topLevelAt(*pos);
}

void QGuiApplication_SetWindowIcon(const QIcon* icon) {
	QGuiApplication::setWindowIcon(*icon);
}

QIcon* QGuiApplication_WindowIcon() {
	return new QIcon(QGuiApplication::windowIcon());
}

libqt_string QGuiApplication_PlatformName() {
	QString _ret = QGuiApplication::platformName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QWindow* QGuiApplication_ModalWindow() {
	return QGuiApplication::modalWindow();
}

QWindow* QGuiApplication_FocusWindow() {
	return QGuiApplication::focusWindow();
}

QObject* QGuiApplication_FocusObject() {
	return QGuiApplication::focusObject();
}

QScreen* QGuiApplication_PrimaryScreen() {
	return QGuiApplication::primaryScreen();
}

libqt_list QGuiApplication_Screens() {
	auto _ret = QGuiApplication::screens();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QScreen* QGuiApplication_ScreenAt(const QPoint* point) {
	return QGuiApplication::screenAt(*point);
}

double QGuiApplication_DevicePixelRatio(const QGuiApplication* self) {
	return self->devicePixelRatio();
}

QCursor* QGuiApplication_OverrideCursor() {
	return QGuiApplication::overrideCursor();
}

void QGuiApplication_SetOverrideCursor(const QCursor* overrideCursor) {
	QGuiApplication::setOverrideCursor(*overrideCursor);
}

void QGuiApplication_ChangeOverrideCursor(const QCursor* param1) {
	QGuiApplication::changeOverrideCursor(*param1);
}

void QGuiApplication_RestoreOverrideCursor() {
	QGuiApplication::restoreOverrideCursor();
}

QFont* QGuiApplication_Font() {
	return new QFont(QGuiApplication::font());
}

void QGuiApplication_SetFont(const QFont* font) {
	QGuiApplication::setFont(*font);
}

QClipboard* QGuiApplication_Clipboard() {
	return QGuiApplication::clipboard();
}

QPalette* QGuiApplication_Palette() {
	return new QPalette(QGuiApplication::palette());
}

void QGuiApplication_SetPalette(const QPalette* pal) {
	QGuiApplication::setPalette(*pal);
}

int QGuiApplication_KeyboardModifiers() {
	return QGuiApplication::keyboardModifiers();
}

int QGuiApplication_QueryKeyboardModifiers() {
	return QGuiApplication::queryKeyboardModifiers();
}

int QGuiApplication_MouseButtons() {
	return QGuiApplication::mouseButtons();
}

void QGuiApplication_SetLayoutDirection(int direction) {
	QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QGuiApplication_LayoutDirection() {
	return QGuiApplication::layoutDirection();
}

bool QGuiApplication_IsRightToLeft() {
	return QGuiApplication::isRightToLeft();
}

bool QGuiApplication_IsLeftToRight() {
	return QGuiApplication::isLeftToRight();
}

QStyleHints* QGuiApplication_StyleHints() {
	return QGuiApplication::styleHints();
}

void QGuiApplication_SetDesktopSettingsAware(bool on) {
	QGuiApplication::setDesktopSettingsAware(on);
}

bool QGuiApplication_DesktopSettingsAware() {
	return QGuiApplication::desktopSettingsAware();
}

QInputMethod* QGuiApplication_InputMethod() {
	return QGuiApplication::inputMethod();
}

void QGuiApplication_SetQuitOnLastWindowClosed(bool quit) {
	QGuiApplication::setQuitOnLastWindowClosed(quit);
}

bool QGuiApplication_QuitOnLastWindowClosed() {
	return QGuiApplication::quitOnLastWindowClosed();
}

int QGuiApplication_ApplicationState() {
	return QGuiApplication::applicationState();
}

void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy) {
	QGuiApplication::setHighDpiScaleFactorRoundingPolicy(static_cast<Qt::HighDpiScaleFactorRoundingPolicy>(policy));
}

int QGuiApplication_HighDpiScaleFactorRoundingPolicy() {
	return QGuiApplication::highDpiScaleFactorRoundingPolicy();
}

int QGuiApplication_Exec() {
	return QGuiApplication::exec();
}

bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QGuiApplication_IsSessionRestored(const QGuiApplication* self) {
	return self->isSessionRestored();
}

libqt_string QGuiApplication_SessionId(const QGuiApplication* self) {
	QString _ret = self->sessionId();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGuiApplication_SessionKey(const QGuiApplication* self) {
	QString _ret = self->sessionKey();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QGuiApplication_IsSavingSession(const QGuiApplication* self) {
	return self->isSavingSession();
}

void QGuiApplication_Sync() {
	QGuiApplication::sync();
}

void QGuiApplication_FontDatabaseChanged(QGuiApplication* self) {
	self->fontDatabaseChanged();
}

void QGuiApplication_Connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::fontDatabaseChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
	self->screenAdded(screen);
}

void QGuiApplication_Connect_ScreenAdded(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::screenAdded, [self, slotFunc](QScreen* screen) {
	slotFunc(self, screen);
    });
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
	self->screenRemoved(screen);
}

void QGuiApplication_Connect_ScreenRemoved(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::screenRemoved, [self, slotFunc](QScreen* screen) {
	slotFunc(self, screen);
    });
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
	self->primaryScreenChanged(screen);
}

void QGuiApplication_Connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QScreen*) = reinterpret_cast<void (*)(QGuiApplication*, QScreen*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::primaryScreenChanged, [self, slotFunc](QScreen* screen) {
	slotFunc(self, screen);
    });
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
	self->lastWindowClosed();
}

void QGuiApplication_Connect_LastWindowClosed(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::lastWindowClosed, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
	self->focusObjectChanged(focusObject);
}

void QGuiApplication_Connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QObject*) = reinterpret_cast<void (*)(QGuiApplication*, QObject*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::focusObjectChanged, [self, slotFunc](QObject* focusObject) {
	slotFunc(self, focusObject);
    });
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
	self->focusWindowChanged(focusWindow);
}

void QGuiApplication_Connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QWindow*) = reinterpret_cast<void (*)(QGuiApplication*, QWindow*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::focusWindowChanged, [self, slotFunc](QWindow* focusWindow) {
	slotFunc(self, focusWindow);
    });
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state) {
	self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_Connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::applicationStateChanged, [self, slotFunc](Qt::ApplicationState state) {
	slotFunc(self, state);
    });
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction) {
	self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_Connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, int) = reinterpret_cast<void (*)(QGuiApplication*, int)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::layoutDirectionChanged, [self, slotFunc](Qt::LayoutDirection direction) {
	slotFunc(self, direction);
    });
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->commitDataRequest(*sessionManager);
}

void QGuiApplication_Connect_CommitDataRequest(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QSessionManager*) = reinterpret_cast<void (*)(QGuiApplication*, QSessionManager*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::commitDataRequest, [self, slotFunc](QSessionManager& sessionManager) {
	slotFunc(self, sessionManager);
    });
}

void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->saveStateRequest(*sessionManager);
}

void QGuiApplication_Connect_SaveStateRequest(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, QSessionManager*) = reinterpret_cast<void (*)(QGuiApplication*, QSessionManager*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::saveStateRequest, [self, slotFunc](QSessionManager& sessionManager) {
	slotFunc(self, sessionManager);
    });
}

void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self) {
	self->applicationDisplayNameChanged();
}

void QGuiApplication_Connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*) = reinterpret_cast<void (*)(QGuiApplication*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::applicationDisplayNameChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGuiApplication_PaletteChanged(QGuiApplication* self, const QPalette* pal) {
	self->paletteChanged(*pal);
}

void QGuiApplication_Connect_PaletteChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, const QPalette*) = reinterpret_cast<void (*)(QGuiApplication*, const QPalette*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::paletteChanged, [self, slotFunc](const QPalette& pal) {
	slotFunc(self, pal);
    });
}

void QGuiApplication_FontChanged(QGuiApplication* self, const QFont* font) {
	self->fontChanged(*font);
}

void QGuiApplication_Connect_FontChanged(QGuiApplication* self, intptr_t slot) {
    void (*slotFunc)(QGuiApplication*, const QFont*) = reinterpret_cast<void (*)(QGuiApplication*, const QFont*)>(slot);
    QGuiApplication::connect(self, &QGuiApplication::fontChanged, [self, slotFunc](const QFont& font) {
	slotFunc(self, font);
    });
}

libqt_string QGuiApplication_Tr2(const char* s, const char* c) {
	QString _ret = QGuiApplication::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGuiApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
bool QGuiApplication_QBaseNotify(QGuiApplication* self, QObject* param1, QEvent* param2) {
	auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
	if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
vqguiapplication->setQGuiApplication_Notify_IsBase(true);
	return vqguiapplication->notify(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QGuiApplication_OnNotify(QGuiApplication* self, intptr_t slot) {
	auto* vqguiapplication = dynamic_cast<VirtualQGuiApplication*>(self);
	if (vqguiapplication && vqguiapplication->isVirtualQGuiApplication) {
vqguiapplication->setQGuiApplication_Notify_Callback(reinterpret_cast<VirtualQGuiApplication::QGuiApplication_Notify_Callback>(slot));
}
}

void QGuiApplication_Delete(QGuiApplication* self) {
    delete self;
}

