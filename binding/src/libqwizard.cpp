#include <QAbstractButton>
#include <QByteArray>
#include <QDialog>
#include <QEvent>
#include <QPaintEvent>
#include <QPixmap>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "libqwizard.h"
#include "libqwizard.hxx"

QWizard* QWizard_new(QWidget* parent) {
	 return new VirtualQWizard(parent);
}

QWizard* QWizard_new2() {
	 return new VirtualQWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
	 return new VirtualQWizard(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QWizard_Tr(const char* s) {
	QString _ret = QWizard::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QWizard_AddPage(QWizard* self, QWizardPage* page) {
	return self->addPage(page);
}

void QWizard_SetPage(QWizard* self, int id, QWizardPage* page) {
	self->setPage(id, page);
}

void QWizard_RemovePage(QWizard* self, int id) {
	self->removePage(id);
}

QWizardPage* QWizard_Page(const QWizard* self, int id) {
	return self->page(id);
}

bool QWizard_HasVisitedPage(const QWizard* self, int id) {
	return self->hasVisitedPage(id);
}

libqt_list QWizard_VisitedIds(const QWizard* self) {
	return self->visitedIds();
}

libqt_list QWizard_PageIds(const QWizard* self) {
	return self->pageIds();
}

void QWizard_SetStartId(QWizard* self, int id) {
	self->setStartId(id);
}

int QWizard_StartId(const QWizard* self) {
	return self->startId();
}

QWizardPage* QWizard_CurrentPage(const QWizard* self) {
	return self->currentPage();
}

int QWizard_CurrentId(const QWizard* self) {
	return self->currentId();
}

bool QWizard_ValidateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_NextId(const QWizard* self) {
	return self->nextId();
}

void QWizard_SetField(QWizard* self, const libqt_string name, const QVariant* value) {
	self->setField(QString::fromUtf8(name.data, name.len), *value);
}

QVariant* QWizard_Field(const QWizard* self, const libqt_string name) {
	return new QVariant(self->field(QString::fromUtf8(name.data, name.len)));
}

void QWizard_SetWizardStyle(QWizard* self, int style) {
	self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_WizardStyle(const QWizard* self) {
	return self->wizardStyle();
}

void QWizard_SetOption(QWizard* self, int option) {
	self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(const QWizard* self, int option) {
	return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
	self->setOptions(static_cast<QFlags<QWizard::WizardOption>>(options));
}

int QWizard_Options(const QWizard* self) {
	return self->options();
}

void QWizard_SetButtonText(QWizard* self, int which, const libqt_string text) {
	self->setButtonText(static_cast<QWizard::WizardButton>(which), QString::fromUtf8(text.data, text.len));
}

libqt_string QWizard_ButtonText(const QWizard* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizard_SetButtonLayout(QWizard* self, const libqt_list layout) {
	self->setButtonLayout(*layout);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
	self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(const QWizard* self, int which) {
	return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, int format) {
	self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_TitleFormat(const QWizard* self) {
	return self->titleFormat();
}

void QWizard_SetSubTitleFormat(QWizard* self, int format) {
	self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_SubTitleFormat(const QWizard* self) {
	return self->subTitleFormat();
}

void QWizard_SetPixmap(QWizard* self, int which, const QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(const QWizard* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(const QWizard* self) {
	return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_SetVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_SizeHint(const QWizard* self) {
	return new QSize(self->sizeHint());
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
	self->currentIdChanged(id);
}

void QWizard_Connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::currentIdChanged, [self, slotFunc](int id) {
	slotFunc(self, id);
    });
}

void QWizard_HelpRequested(QWizard* self) {
	self->helpRequested();
}

void QWizard_Connect_HelpRequested(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*) = reinterpret_cast<void (*)(QWizard*)>(slot);
    QWizard::connect(self, &QWizard::helpRequested, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
	self->customButtonClicked(which);
}

void QWizard_Connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::customButtonClicked, [self, slotFunc](int which) {
	slotFunc(self, which);
    });
}

void QWizard_PageAdded(QWizard* self, int id) {
	self->pageAdded(id);
}

void QWizard_Connect_PageAdded(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageAdded, [self, slotFunc](int id) {
	slotFunc(self, id);
    });
}

void QWizard_PageRemoved(QWizard* self, int id) {
	self->pageRemoved(id);
}

void QWizard_Connect_PageRemoved(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageRemoved, [self, slotFunc](int id) {
	slotFunc(self, id);
    });
}

void QWizard_Back(QWizard* self) {
	self->back();
}

void QWizard_Next(QWizard* self) {
	self->next();
}

void QWizard_SetCurrentId(QWizard* self, int id) {
	self->setCurrentId(id);
}

void QWizard_Restart(QWizard* self) {
	self->restart();
}

libqt_string QWizard_Tr2(const char* s, const char* c) {
	QString _ret = QWizard::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWizard_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizard::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
	self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

// Base class handler implementation
bool QWizard_QBaseValidateCurrentPage(QWizard* self) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_ValidateCurrentPage_IsBase(true);
	return vqwizard->validateCurrentPage();
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnValidateCurrentPage(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_ValidateCurrentPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_ValidateCurrentPage_Callback>(slot));
}
}

// Base class handler implementation
int QWizard_QBaseNextId(const QWizard* self) {
	auto* vqwizard = dynamic_cast<const VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_NextId_IsBase(true);
	return vqwizard->nextId();
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNextId(const QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<const VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_NextId_Callback(reinterpret_cast<VirtualQWizard::QWizard_NextId_Callback>(slot));
}
}

// Base class handler implementation
void QWizard_QBaseSetVisible(QWizard* self, bool visible) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_SetVisible_IsBase(true);
	vqwizard->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSetVisible(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_SetVisible_Callback(reinterpret_cast<VirtualQWizard::QWizard_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWizard_QBaseSizeHint(const QWizard* self) {
	auto* vqwizard = dynamic_cast<const VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_SizeHint_IsBase(true);
	return new QSize(vqwizard->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSizeHint(const QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<const VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_SizeHint_Callback(reinterpret_cast<VirtualQWizard::QWizard_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
bool QWizard_Event(QWizard* self, QEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	return vqwizard->event(event);
	} else {
	return self->QWizard::event(event);
}
}

// Base class handler implementation
bool QWizard_QBaseEvent(QWizard* self, QEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_Event_IsBase(true);
	return vqwizard->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEvent(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_Event_Callback(reinterpret_cast<VirtualQWizard::QWizard_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	vqwizard->resizeEvent(event);
	} else {
	self->QWizard::resizeEvent(event);
}
}

// Base class handler implementation
void QWizard_QBaseResizeEvent(QWizard* self, QResizeEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_ResizeEvent_IsBase(true);
	vqwizard->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnResizeEvent(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_ResizeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWizard_PaintEvent(QWizard* self, QPaintEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	vqwizard->paintEvent(event);
	} else {
	self->QWizard::paintEvent(event);
}
}

// Base class handler implementation
void QWizard_QBasePaintEvent(QWizard* self, QPaintEvent* event) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_PaintEvent_IsBase(true);
	vqwizard->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEvent(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_PaintEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	return vqwizard->nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
	} else {
	return self->QWizard::nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
}
}

// Base class handler implementation
bool QWizard_QBaseNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_NativeEvent_IsBase(true);
	return vqwizard->nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNativeEvent(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_NativeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_NativeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWizard_Done(QWizard* self, int result) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	vqwizard->done(result);
	} else {
	self->QWizard::done(result);
}
}

// Base class handler implementation
void QWizard_QBaseDone(QWizard* self, int result) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_Done_IsBase(true);
	vqwizard->done(result);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDone(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_Done_Callback(reinterpret_cast<VirtualQWizard::QWizard_Done_Callback>(slot));
}
}

// Derived class handler implementation
void QWizard_InitializePage(QWizard* self, int id) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	vqwizard->initializePage(id);
	} else {
	self->QWizard::initializePage(id);
}
}

// Base class handler implementation
void QWizard_QBaseInitializePage(QWizard* self, int id) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_InitializePage_IsBase(true);
	vqwizard->initializePage(id);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitializePage(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_InitializePage_Callback(reinterpret_cast<VirtualQWizard::QWizard_InitializePage_Callback>(slot));
}
}

// Derived class handler implementation
void QWizard_CleanupPage(QWizard* self, int id) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
	vqwizard->cleanupPage(id);
	} else {
	self->QWizard::cleanupPage(id);
}
}

// Base class handler implementation
void QWizard_QBaseCleanupPage(QWizard* self, int id) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_CleanupPage_IsBase(true);
	vqwizard->cleanupPage(id);
}
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCleanupPage(QWizard* self, intptr_t slot) {
	auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
	if (vqwizard && vqwizard->isVirtualQWizard) {
vqwizard->setQWizard_CleanupPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_CleanupPage_Callback>(slot));
}
}

void QWizard_Delete(QWizard* self) {
    delete self;
}

QWizardPage* QWizardPage_new(QWidget* parent) {
	 return new VirtualQWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
	 return new VirtualQWizardPage();
}

libqt_string QWizardPage_Tr(const char* s) {
	QString _ret = QWizardPage::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizardPage_SetTitle(QWizardPage* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

libqt_string QWizardPage_Title(const QWizardPage* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizardPage_SetSubTitle(QWizardPage* self, const libqt_string subTitle) {
	self->setSubTitle(QString::fromUtf8(subTitle.data, subTitle.len));
}

libqt_string QWizardPage_SubTitle(const QWizardPage* self) {
	QString _ret = self->subTitle();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizardPage_SetPixmap(QWizardPage* self, int which, const QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(const QWizardPage* self) {
	return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(const QWizardPage* self) {
	return self->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, const libqt_string text) {
	self->setButtonText(static_cast<QWizard::WizardButton>(which), QString::fromUtf8(text.data, text.len));
}

libqt_string QWizardPage_ButtonText(const QWizardPage* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWizardPage_InitializePage(QWizardPage* self) {
	self->initializePage();
}

void QWizardPage_CleanupPage(QWizardPage* self) {
	self->cleanupPage();
}

bool QWizardPage_ValidatePage(QWizardPage* self) {
	return self->validatePage();
}

bool QWizardPage_IsComplete(const QWizardPage* self) {
	return self->isComplete();
}

int QWizardPage_NextId(const QWizardPage* self) {
	return self->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_Connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
    void (*slotFunc)(QWizardPage*) = reinterpret_cast<void (*)(QWizardPage*)>(slot);
    QWizardPage::connect(self, &QWizardPage::completeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QWizardPage_Tr2(const char* s, const char* c) {
	QString _ret = QWizardPage::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizardPage::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QWizardPage_QBaseInitializePage(QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_InitializePage_IsBase(true);
	vqwizardpage->initializePage();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitializePage(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_InitializePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InitializePage_Callback>(slot));
}
}

// Base class handler implementation
void QWizardPage_QBaseCleanupPage(QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_CleanupPage_IsBase(true);
	vqwizardpage->cleanupPage();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCleanupPage(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_CleanupPage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CleanupPage_Callback>(slot));
}
}

// Base class handler implementation
bool QWizardPage_QBaseValidatePage(QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_ValidatePage_IsBase(true);
	return vqwizardpage->validatePage();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnValidatePage(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_ValidatePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ValidatePage_Callback>(slot));
}
}

// Base class handler implementation
bool QWizardPage_QBaseIsComplete(const QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_IsComplete_IsBase(true);
	return vqwizardpage->isComplete();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsComplete(const QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_IsComplete_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_IsComplete_Callback>(slot));
}
}

// Base class handler implementation
int QWizardPage_QBaseNextId(const QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_NextId_IsBase(true);
	return vqwizardpage->nextId();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNextId(const QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_NextId_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_NextId_Callback>(slot));
}
}

// Derived class handler implementation
void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	vqwizardpage->setField(QString::fromUtf8(name.data, name.len), *value);
	} else {
	self->QWizardPage::setField(QString::fromUtf8(name.data, name.len), *value);
}
}

// Base class handler implementation
void QWizardPage_QBaseSetField(QWizardPage* self, const libqt_string name, const QVariant* value) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_SetField_IsBase(true);
	vqwizardpage->setField(QString::fromUtf8(name.data, name.len), *value);
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetField(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_SetField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SetField_Callback>(slot));
}
}

// Derived class handler implementation
QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	return new QVariant(vqwizardpage->field(QString::fromUtf8(name.data, name.len)));
	} else {
	return new QVariant(self->QWizardPage::field(QString::fromUtf8(name.data, name.len)));
}
}

// Base class handler implementation
QVariant* QWizardPage_QBaseField(const QWizardPage* self, const libqt_string name) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_Field_IsBase(true);
	return new QVariant(vqwizardpage->field(QString::fromUtf8(name.data, name.len)));
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnField(const QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_Field_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Field_Callback>(slot));
}
}

// Derived class handler implementation
void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget);
	} else {
	self->QWizardPage::registerField(QString::fromUtf8(name.data, name.len), widget);
}
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField(QWizardPage* self, const libqt_string name, QWidget* widget) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField_IsBase(true);
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget);
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField_Callback>(slot));
}
}

// Derived class handler implementation
QWizard* QWizardPage_Wizard(const QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	return vqwizardpage->wizard();
	} else {
	return self->QWizardPage::wizard();
}
}

// Base class handler implementation
QWizard* QWizardPage_QBaseWizard(const QWizardPage* self) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_Wizard_IsBase(true);
	return vqwizardpage->wizard();
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWizard(const QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<const VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_Wizard_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Wizard_Callback>(slot));
}
}

// Derived class handler implementation
void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget, property);
	} else {
	self->QWizardPage::registerField(QString::fromUtf8(name.data, name.len), widget, property);
}
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField3_IsBase(true);
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget, property);
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField3(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField3_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField3_Callback>(slot));
}
}

// Derived class handler implementation
void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget, property, changedSignal);
	} else {
	self->QWizardPage::registerField(QString::fromUtf8(name.data, name.len), widget, property, changedSignal);
}
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField4_IsBase(true);
	vqwizardpage->registerField(QString::fromUtf8(name.data, name.len), widget, property, changedSignal);
}
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField4(QWizardPage* self, intptr_t slot) {
	auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
	if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
vqwizardpage->setQWizardPage_RegisterField4_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField4_Callback>(slot));
}
}

void QWizardPage_Delete(QWizardPage* self) {
    delete self;
}

