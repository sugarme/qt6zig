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

void QTextBrowser_Delete(QTextBrowser* self) {
    delete self;
}

