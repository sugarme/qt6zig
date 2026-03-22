#include <QApplication>
#include <QEvent>
#include <QEventLoop>
#include <QFont>
#include <QFontMetrics>
#include <QGuiApplication>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QWidget>
#include <qapplication.h>
#include "libqapplication.h"
#include "libqapplication.hxx"

QApplication* QApplication_new(int* argc, char** argv) {
	 return new VirtualQApplication(*argc, argv);
}

QApplication* QApplication_new2(int* argc, char** argv, int param3) {
	 return new VirtualQApplication(*argc, argv, param3);
}

libqt_string QApplication_Tr(const char* s) {
	QString _ret = QApplication::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QStyle* QApplication_Style() {
	return QApplication::style();
}

void QApplication_SetStyle(QStyle* style) {
	QApplication::setStyle(style);
}

QStyle* QApplication_SetStyle2(const libqt_string style) {
	return QApplication::setStyle(QString::fromUtf8(style.data, style.len));
}

QPalette* QApplication_Palette(const QWidget* param1) {
	return new QPalette(QApplication::palette(param1));
}

QPalette* QApplication_Palette2(const char* className) {
	return new QPalette(QApplication::palette(className));
}

void QApplication_SetPalette(const QPalette* param1) {
	QApplication::setPalette(*param1);
}

QFont* QApplication_Font() {
	return new QFont(QApplication::font());
}

QFont* QApplication_Font2(const QWidget* param1) {
	return new QFont(QApplication::font(param1));
}

QFont* QApplication_Font3(const char* className) {
	return new QFont(QApplication::font(className));
}

void QApplication_SetFont(const QFont* param1) {
	QApplication::setFont(*param1);
}

QFontMetrics* QApplication_FontMetrics() {
	return new QFontMetrics(QApplication::fontMetrics());
}

libqt_list QApplication_AllWidgets() {
	return QApplication::allWidgets();
}

libqt_list QApplication_TopLevelWidgets() {
	return QApplication::topLevelWidgets();
}

QWidget* QApplication_ActivePopupWidget() {
	return QApplication::activePopupWidget();
}

QWidget* QApplication_ActiveModalWidget() {
	return QApplication::activeModalWidget();
}

QWidget* QApplication_FocusWidget() {
	return QApplication::focusWidget();
}

QWidget* QApplication_ActiveWindow() {
	return QApplication::activeWindow();
}

void QApplication_SetActiveWindow(QWidget* act) {
	QApplication::setActiveWindow(act);
}

QWidget* QApplication_WidgetAt(const QPoint* p) {
	return QApplication::widgetAt(*p);
}

QWidget* QApplication_WidgetAt2(int x, int y) {
	return QApplication::widgetAt(x, y);
}

QWidget* QApplication_TopLevelAt(const QPoint* p) {
	return QApplication::topLevelAt(*p);
}

QWidget* QApplication_TopLevelAt2(int x, int y) {
	return QApplication::topLevelAt(x, y);
}

void QApplication_Beep() {
	QApplication::beep();
}

void QApplication_Alert(QWidget* widget) {
	QApplication::alert(widget);
}

void QApplication_SetCursorFlashTime(int cursorFlashTime) {
	QApplication::setCursorFlashTime(cursorFlashTime);
}

int QApplication_CursorFlashTime() {
	return QApplication::cursorFlashTime();
}

void QApplication_SetDoubleClickInterval(int doubleClickInterval) {
	QApplication::setDoubleClickInterval(doubleClickInterval);
}

int QApplication_DoubleClickInterval() {
	return QApplication::doubleClickInterval();
}

void QApplication_SetKeyboardInputInterval(int keyboardInputInterval) {
	QApplication::setKeyboardInputInterval(keyboardInputInterval);
}

int QApplication_KeyboardInputInterval() {
	return QApplication::keyboardInputInterval();
}

void QApplication_SetWheelScrollLines(int wheelScrollLines) {
	QApplication::setWheelScrollLines(wheelScrollLines);
}

int QApplication_WheelScrollLines() {
	return QApplication::wheelScrollLines();
}

void QApplication_SetStartDragTime(int ms) {
	QApplication::setStartDragTime(ms);
}

int QApplication_StartDragTime() {
	return QApplication::startDragTime();
}

void QApplication_SetStartDragDistance(int l) {
	QApplication::setStartDragDistance(l);
}

int QApplication_StartDragDistance() {
	return QApplication::startDragDistance();
}

bool QApplication_IsEffectEnabled(int param1) {
	return QApplication::isEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

void QApplication_SetEffectEnabled(int param1) {
	QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

int QApplication_Exec() {
	return QApplication::exec();
}

bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now) {
	self->focusChanged(old, now);
}

void QApplication_Connect_FocusChanged(QApplication* self, intptr_t slot) {
    void (*slotFunc)(QApplication*, QWidget*, QWidget*) = reinterpret_cast<void (*)(QApplication*, QWidget*, QWidget*)>(slot);
    QApplication::connect(self, &QApplication::focusChanged, [self, slotFunc](QWidget* old, QWidget* now) {
	slotFunc(self, old, now);
    });
}

libqt_string QApplication_StyleSheet(const QApplication* self) {
	QString _ret = self->styleSheet();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QApplication_AutoSipEnabled(const QApplication* self) {
	return self->autoSipEnabled();
}

void QApplication_SetStyleSheet(QApplication* self, const libqt_string sheet) {
	self->setStyleSheet(QString::fromUtf8(sheet.data, sheet.len));
}

void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled) {
	self->setAutoSipEnabled(enabled);
}

void QApplication_CloseAllWindows() {
	QApplication::closeAllWindows();
}

void QApplication_AboutQt() {
	QApplication::aboutQt();
}

libqt_string QApplication_Tr2(const char* s, const char* c) {
	QString _ret = QApplication::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QApplication::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QApplication_SetPalette2(const QPalette* param1, const char* className) {
	QApplication::setPalette(*param1, className);
}

void QApplication_SetFont2(const QFont* param1, const char* className) {
	QApplication::setFont(*param1, className);
}

void QApplication_Alert2(QWidget* widget, int duration) {
	QApplication::alert(widget, duration);
}

void QApplication_SetEffectEnabled2(int param1, bool enable) {
	QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1), enable);
}

// Base class handler implementation
bool QApplication_QBaseNotify(QApplication* self, QObject* param1, QEvent* param2) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_Notify_IsBase(true);
	return vqapplication->notify(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnNotify(QApplication* self, intptr_t slot) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_Notify_Callback(reinterpret_cast<VirtualQApplication::QApplication_Notify_Callback>(slot));
}
}

// Derived class handler implementation
bool QApplication_Event(QApplication* self, QEvent* param1) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
	return vqapplication->event(param1);
	} else {
	return self->QApplication::event(param1);
}
}

// Base class handler implementation
bool QApplication_QBaseEvent(QApplication* self, QEvent* param1) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_Event_IsBase(true);
	return vqapplication->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnEvent(QApplication* self, intptr_t slot) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_Event_Callback(reinterpret_cast<VirtualQApplication::QApplication_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QApplication_CompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
	return vqapplication->compressEvent(param1, receiver, param3);
	} else {
	return self->QApplication::compressEvent(param1, receiver, param3);
}
}

// Base class handler implementation
bool QApplication_QBaseCompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_CompressEvent_IsBase(true);
	return vqapplication->compressEvent(param1, receiver, param3);
}
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnCompressEvent(QApplication* self, intptr_t slot) {
	auto* vqapplication = dynamic_cast<VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_CompressEvent_Callback(reinterpret_cast<VirtualQApplication::QApplication_CompressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision) {
	auto* vqapplication = dynamic_cast<const VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
	return vqapplication->resolveInterface(name, revision);
	} else {
	return self->QApplication::resolveInterface(name, revision);
}
}

// Base class handler implementation
void* QApplication_QBaseResolveInterface(const QApplication* self, const char* name, int revision) {
	auto* vqapplication = dynamic_cast<const VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_ResolveInterface_IsBase(true);
	return vqapplication->resolveInterface(name, revision);
}
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnResolveInterface(const QApplication* self, intptr_t slot) {
	auto* vqapplication = dynamic_cast<const VirtualQApplication*>(self);
	if (vqapplication && vqapplication->isVirtualQApplication) {
vqapplication->setQApplication_ResolveInterface_Callback(reinterpret_cast<VirtualQApplication::QApplication_ResolveInterface_Callback>(slot));
}
}

void QApplication_Delete(QApplication* self) {
    delete self;
}

