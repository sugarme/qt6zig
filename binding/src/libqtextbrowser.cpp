#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextBrowser>
#include <QTextEdit>
#include <QUrl>
#include <QVariant>
#include <QWidget>
#include <qtextbrowser.h>
#include "libqtextbrowser.h"
#include "libqtextbrowser.hxx"

QTextBrowser* QTextBrowser_new(QWidget* parent) {
	 return new VirtualQTextBrowser(parent);
}

QTextBrowser* QTextBrowser_new2() {
	 return new VirtualQTextBrowser();
}

libqt_string QTextBrowser_Tr(const char* s) {
	QString _ret = QTextBrowser::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
	return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
	return self->sourceType();
}

libqt_list QTextBrowser_SearchPaths(const QTextBrowser* self) {
	auto _ret = self->searchPaths();
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, const libqt_list paths) {
	self->setSearchPaths(QList<QString>());
}

QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
	return new QVariant(self->loadResource(typeVal, *name));
}

bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self) {
	return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self) {
	return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
	self->clearHistory();
}

libqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1) {
	QString _ret = self->historyTitle(param1);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1) {
	return new QUrl(self->historyUrl(param1));
}

int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self) {
	return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self) {
	return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self) {
	return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(const QTextBrowser* self) {
	return self->openLinks();
}

void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open) {
	self->setOpenLinks(open);
}

void QTextBrowser_SetSource(QTextBrowser* self, const QUrl* name) {
	self->setSource(*name);
}

void QTextBrowser_Backward(QTextBrowser* self) {
	self->backward();
}

void QTextBrowser_Forward(QTextBrowser* self) {
	self->forward();
}

void QTextBrowser_Home(QTextBrowser* self) {
	self->home();
}

void QTextBrowser_Reload(QTextBrowser* self) {
	self->reload();
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
	self->backwardAvailable(param1);
}

void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::backwardAvailable, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
	self->forwardAvailable(param1);
}

void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::forwardAvailable, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
	self->historyChanged();
}

void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*) = reinterpret_cast<void (*)(QTextBrowser*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::historyChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QTextBrowser_SourceChanged(QTextBrowser* self, const QUrl* param1) {
	self->sourceChanged(*param1);
}

void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, const QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, const QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::sourceChanged, [self, slotFunc](const QUrl& param1) {
	slotFunc(self, param1);
    });
}

void QTextBrowser_Highlighted(QTextBrowser* self, const QUrl* param1) {
	self->highlighted(*param1);
}

void QTextBrowser_Connect_Highlighted(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, const QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, const QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::highlighted, [self, slotFunc](const QUrl& param1) {
	slotFunc(self, param1);
    });
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, const QUrl* param1) {
	self->anchorClicked(*param1);
}

void QTextBrowser_Connect_AnchorClicked(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, const QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, const QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::anchorClicked, [self, slotFunc](const QUrl& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QTextBrowser_Tr2(const char* s, const char* c) {
	QString _ret = QTextBrowser::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBrowser::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QTextBrowser_SetSource2(QTextBrowser* self, const QUrl* name, int typeVal) {
	self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

// Base class handler implementation
QVariant* QTextBrowser_QBaseLoadResource(QTextBrowser* self, int typeVal, const QUrl* name) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_LoadResource_IsBase(true);
	return new QVariant(vqtextbrowser->loadResource(typeVal, *name));
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_LoadResource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LoadResource_Callback>(slot));
}
}

// Base class handler implementation
void QTextBrowser_QBaseBackward(QTextBrowser* self) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Backward_IsBase(true);
	vqtextbrowser->backward();
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Backward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Backward_Callback>(slot));
}
}

// Base class handler implementation
void QTextBrowser_QBaseForward(QTextBrowser* self) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Forward_IsBase(true);
	vqtextbrowser->forward();
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Forward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Forward_Callback>(slot));
}
}

// Base class handler implementation
void QTextBrowser_QBaseHome(QTextBrowser* self) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Home_IsBase(true);
	vqtextbrowser->home();
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Home_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Home_Callback>(slot));
}
}

// Base class handler implementation
void QTextBrowser_QBaseReload(QTextBrowser* self) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Reload_IsBase(true);
	vqtextbrowser->reload();
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Reload_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Reload_Callback>(slot));
}
}

// Derived class handler implementation
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	return vqtextbrowser->event(e);
	} else {
	return self->QTextBrowser::event(e);
}
}

// Base class handler implementation
bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Event_IsBase(true);
	return vqtextbrowser->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_Event_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->keyPressEvent(ev);
	} else {
	self->QTextBrowser::keyPressEvent(ev);
}
}

// Base class handler implementation
void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_KeyPressEvent_IsBase(true);
	vqtextbrowser->keyPressEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_KeyPressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->mouseMoveEvent(ev);
	} else {
	self->QTextBrowser::mouseMoveEvent(ev);
}
}

// Base class handler implementation
void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MouseMoveEvent_IsBase(true);
	vqtextbrowser->mouseMoveEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->mousePressEvent(ev);
	} else {
	self->QTextBrowser::mousePressEvent(ev);
}
}

// Base class handler implementation
void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MousePressEvent_IsBase(true);
	vqtextbrowser->mousePressEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MousePressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->mouseReleaseEvent(ev);
	} else {
	self->QTextBrowser::mouseReleaseEvent(ev);
}
}

// Base class handler implementation
void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MouseReleaseEvent_IsBase(true);
	vqtextbrowser->mouseReleaseEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->focusOutEvent(ev);
	} else {
	self->QTextBrowser::focusOutEvent(ev);
}
}

// Base class handler implementation
void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_FocusOutEvent_IsBase(true);
	vqtextbrowser->focusOutEvent(ev);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_FocusOutEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	return vqtextbrowser->focusNextPrevChild(next);
	} else {
	return self->QTextBrowser::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_FocusNextPrevChild_IsBase(true);
	return vqtextbrowser->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->paintEvent(e);
	} else {
	self->QTextBrowser::paintEvent(e);
}
}

// Base class handler implementation
void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_PaintEvent_IsBase(true);
	vqtextbrowser->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_PaintEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
	vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
	} else {
	self->QTextBrowser::doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}
}

// Base class handler implementation
void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_DoSetSource_IsBase(true);
	vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot) {
	auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self);
	if (vqtextbrowser && vqtextbrowser->isVirtualQTextBrowser) {
vqtextbrowser->setQTextBrowser_DoSetSource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetSource_Callback>(slot));
}
}

void QTextBrowser_Delete(QTextBrowser* self) {
    delete self;
}

