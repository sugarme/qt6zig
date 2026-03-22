#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QComboBox>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineEdit>
#include <QModelIndex>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionComboBox>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcombobox.h>
#include "libqcombobox.h"
#include "libqcombobox.hxx"

QComboBox* QComboBox_new(QWidget* parent) {
	 return new VirtualQComboBox(parent);
}

QComboBox* QComboBox_new2() {
	 return new VirtualQComboBox();
}

libqt_string QComboBox_Tr(const char* s) {
	QString _ret = QComboBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QComboBox_MaxVisibleItems(const QComboBox* self) {
	return self->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
	self->setMaxVisibleItems(maxItems);
}

int QComboBox_Count(const QComboBox* self) {
	return self->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
	self->setMaxCount(max);
}

int QComboBox_MaxCount(const QComboBox* self) {
	return self->maxCount();
}

bool QComboBox_DuplicatesEnabled(const QComboBox* self) {
	return self->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
	self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
	self->setFrame(frame);
}

bool QComboBox_HasFrame(const QComboBox* self) {
	return self->hasFrame();
}

int QComboBox_FindText(const QComboBox* self, const libqt_string text) {
	return self->findText(QString::fromUtf8(text.data, text.len));
}

int QComboBox_FindData(const QComboBox* self, const QVariant* data) {
	return self->findData(*data);
}

int QComboBox_InsertPolicy(const QComboBox* self) {
	return self->insertPolicy();
}

void QComboBox_SetInsertPolicy(QComboBox* self, int policy) {
	self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_SizeAdjustPolicy(const QComboBox* self) {
	return self->sizeAdjustPolicy();
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy) {
	self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
	return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
	self->setMinimumContentsLength(characters);
}

QSize* QComboBox_IconSize(const QComboBox* self) {
	return new QSize(self->iconSize());
}

void QComboBox_SetIconSize(QComboBox* self, const QSize* size) {
	self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, const libqt_string placeholderText) {
	self->setPlaceholderText(QString::fromUtf8(placeholderText.data, placeholderText.len));
}

libqt_string QComboBox_PlaceholderText(const QComboBox* self) {
	QString _ret = self->placeholderText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QComboBox_IsEditable(const QComboBox* self) {
	return self->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
	self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
	self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(const QComboBox* self) {
	return self->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, const QValidator* v) {
	self->setValidator(v);
}

const QValidator* QComboBox_Validator(const QComboBox* self) {
	return self->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
	self->setCompleter(c);
}

QCompleter* QComboBox_Completer(const QComboBox* self) {
	return self->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self) {
	return self->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(const QComboBox* self) {
	return self->model();
}

void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QModelIndex* QComboBox_RootModelIndex(const QComboBox* self) {
	return new QModelIndex(self->rootModelIndex());
}

void QComboBox_SetRootModelIndex(QComboBox* self, const QModelIndex* index) {
	self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(const QComboBox* self) {
	return self->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
	self->setModelColumn(visibleColumn);
}

int QComboBox_CurrentIndex(const QComboBox* self) {
	return self->currentIndex();
}

libqt_string QComboBox_CurrentText(const QComboBox* self) {
	QString _ret = self->currentText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QVariant* QComboBox_CurrentData(const QComboBox* self) {
	return new QVariant(self->currentData());
}

libqt_string QComboBox_ItemText(const QComboBox* self, int index) {
	QString _ret = self->itemText(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
	return new QIcon(self->itemIcon(index));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
	return new QVariant(self->itemData(index));
}

void QComboBox_AddItem(QComboBox* self, const libqt_string text) {
	self->addItem(QString::fromUtf8(text.data, text.len));
}

void QComboBox_AddItem2(QComboBox* self, const QIcon* icon, const libqt_string text) {
	self->addItem(*icon, QString::fromUtf8(text.data, text.len));
}

void QComboBox_AddItems(QComboBox* self, const libqt_list texts) {
	self->addItems(*texts);
}

void QComboBox_InsertItem(QComboBox* self, int index, const libqt_string text) {
	self->insertItem(index, QString::fromUtf8(text.data, text.len));
}

void QComboBox_InsertItem2(QComboBox* self, int index, const QIcon* icon, const libqt_string text) {
	self->insertItem(index, *icon, QString::fromUtf8(text.data, text.len));
}

void QComboBox_InsertItems(QComboBox* self, int index, const libqt_list texts) {
	self->insertItems(index, *texts);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
	self->insertSeparator(index);
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
	self->removeItem(index);
}

void QComboBox_SetItemText(QComboBox* self, int index, const libqt_string text) {
	self->setItemText(index, QString::fromUtf8(text.data, text.len));
}

void QComboBox_SetItemIcon(QComboBox* self, int index, const QIcon* icon) {
	self->setItemIcon(index, *icon);
}

void QComboBox_SetItemData(QComboBox* self, int index, const QVariant* value) {
	self->setItemData(index, *value);
}

QAbstractItemView* QComboBox_View(const QComboBox* self) {
	return self->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
	self->setView(itemView);
}

QSize* QComboBox_SizeHint(const QComboBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QComboBox_ShowPopup(QComboBox* self) {
	self->showPopup();
}

void QComboBox_HidePopup(QComboBox* self) {
	self->hidePopup();
}

bool QComboBox_Event(QComboBox* self, QEvent* event) {
	return self->event(event);
}

QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, const QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_Clear(QComboBox* self) {
	self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
	self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, const libqt_string text) {
	self->setEditText(QString::fromUtf8(text.data, text.len));
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
	self->setCurrentIndex(index);
}

void QComboBox_SetCurrentText(QComboBox* self, const libqt_string text) {
	self->setCurrentText(QString::fromUtf8(text.data, text.len));
}

void QComboBox_EditTextChanged(QComboBox* self, const libqt_string param1) {
	self->editTextChanged(QString::fromUtf8(param1.data, param1.len));
}

void QComboBox_Connect_EditTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self, &QComboBox::editTextChanged, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QComboBox_Activated(QComboBox* self, int index) {
	self->activated(index);
}

void QComboBox_Connect_Activated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::activated, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QComboBox_TextActivated(QComboBox* self, const libqt_string param1) {
	self->textActivated(QString::fromUtf8(param1.data, param1.len));
}

void QComboBox_Connect_TextActivated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self, &QComboBox::textActivated, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QComboBox_Highlighted(QComboBox* self, int index) {
	self->highlighted(index);
}

void QComboBox_Connect_Highlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::highlighted, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QComboBox_TextHighlighted(QComboBox* self, const libqt_string param1) {
	self->textHighlighted(QString::fromUtf8(param1.data, param1.len));
}

void QComboBox_Connect_TextHighlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self, &QComboBox::textHighlighted, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
	self->currentIndexChanged(index);
}

void QComboBox_Connect_CurrentIndexChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::currentIndexChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QComboBox_CurrentTextChanged(QComboBox* self, const libqt_string param1) {
	self->currentTextChanged(QString::fromUtf8(param1.data, param1.len));
}

void QComboBox_Connect_CurrentTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self, &QComboBox::currentTextChanged, [self, slotFunc](const QString& param1) {
	slotFunc(self, param1);
    });
}

libqt_string QComboBox_Tr2(const char* s, const char* c) {
	QString _ret = QComboBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QComboBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QComboBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QComboBox_FindText2(const QComboBox* self, const libqt_string text, int flags) {
	return self->findText(QString::fromUtf8(text.data, text.len), static_cast<QFlags<Qt::MatchFlag>>(flags));
}

int QComboBox_FindData2(const QComboBox* self, const QVariant* data, int role) {
	return self->findData(*data, role);
}

int QComboBox_FindData3(const QComboBox* self, const QVariant* data, int role, int flags) {
	return self->findData(*data, role, static_cast<QFlags<Qt::MatchFlag>>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
	return new QVariant(self->currentData(role));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
	return new QVariant(self->itemData(index, role));
}

void QComboBox_AddItem22(QComboBox* self, const libqt_string text, const QVariant* userData) {
	self->addItem(QString::fromUtf8(text.data, text.len), *userData);
}

void QComboBox_AddItem3(QComboBox* self, const QIcon* icon, const libqt_string text, const QVariant* userData) {
	self->addItem(*icon, QString::fromUtf8(text.data, text.len), *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, const libqt_string text, const QVariant* userData) {
	self->insertItem(index, QString::fromUtf8(text.data, text.len), *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, const QIcon* icon, const libqt_string text, const QVariant* userData) {
	self->insertItem(index, *icon, QString::fromUtf8(text.data, text.len), *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, const QVariant* value, int role) {
	self->setItemData(index, *value, role);
}

// Base class handler implementation
void QComboBox_QBaseSetModel(QComboBox* self, QAbstractItemModel* model) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_SetModel_IsBase(true);
	vqcombobox->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSetModel(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_SetModel_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SetModel_Callback>(slot));
}
}

// Base class handler implementation
QSize* QComboBox_QBaseSizeHint(const QComboBox* self) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_SizeHint_IsBase(true);
	return new QSize(vqcombobox->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSizeHint(const QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_SizeHint_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QComboBox_QBaseMinimumSizeHint(const QComboBox* self) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MinimumSizeHint_IsBase(true);
	return new QSize(vqcombobox->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMinimumSizeHint(const QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QComboBox_QBaseShowPopup(QComboBox* self) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ShowPopup_IsBase(true);
	vqcombobox->showPopup();
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowPopup(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ShowPopup_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ShowPopup_Callback>(slot));
}
}

// Base class handler implementation
void QComboBox_QBaseHidePopup(QComboBox* self) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_HidePopup_IsBase(true);
	vqcombobox->hidePopup();
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHidePopup(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_HidePopup_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HidePopup_Callback>(slot));
}
}

// Base class handler implementation
bool QComboBox_QBaseEvent(QComboBox* self, QEvent* event) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_Event_IsBase(true);
	return vqcombobox->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_Event_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Event_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QComboBox_QBaseInputMethodQuery(const QComboBox* self, int param1) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InputMethodQuery_IsBase(true);
	return new QVariant(vqcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodQuery(const QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->focusInEvent(e);
	} else {
	self->QComboBox::focusInEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseFocusInEvent(QComboBox* self, QFocusEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_FocusInEvent_IsBase(true);
	vqcombobox->focusInEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusInEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->focusOutEvent(e);
	} else {
	self->QComboBox::focusOutEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseFocusOutEvent(QComboBox* self, QFocusEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_FocusOutEvent_IsBase(true);
	vqcombobox->focusOutEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusOutEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_ChangeEvent(QComboBox* self, QEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->changeEvent(e);
	} else {
	self->QComboBox::changeEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseChangeEvent(QComboBox* self, QEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ChangeEvent_IsBase(true);
	vqcombobox->changeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnChangeEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->resizeEvent(e);
	} else {
	self->QComboBox::resizeEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseResizeEvent(QComboBox* self, QResizeEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ResizeEvent_IsBase(true);
	vqcombobox->resizeEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnResizeEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->paintEvent(e);
	} else {
	self->QComboBox::paintEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBasePaintEvent(QComboBox* self, QPaintEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_PaintEvent_IsBase(true);
	vqcombobox->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnPaintEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_PaintEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->showEvent(e);
	} else {
	self->QComboBox::showEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseShowEvent(QComboBox* self, QShowEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ShowEvent_IsBase(true);
	vqcombobox->showEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ShowEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_HideEvent(QComboBox* self, QHideEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->hideEvent(e);
	} else {
	self->QComboBox::hideEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseHideEvent(QComboBox* self, QHideEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_HideEvent_IsBase(true);
	vqcombobox->hideEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHideEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_HideEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->mousePressEvent(e);
	} else {
	self->QComboBox::mousePressEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseMousePressEvent(QComboBox* self, QMouseEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MousePressEvent_IsBase(true);
	vqcombobox->mousePressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMousePressEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->mouseReleaseEvent(e);
	} else {
	self->QComboBox::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseMouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MouseReleaseEvent_IsBase(true);
	vqcombobox->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseReleaseEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->keyPressEvent(e);
	} else {
	self->QComboBox::keyPressEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseKeyPressEvent(QComboBox* self, QKeyEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_KeyPressEvent_IsBase(true);
	vqcombobox->keyPressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyPressEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->keyReleaseEvent(e);
	} else {
	self->QComboBox::keyReleaseEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseKeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_KeyReleaseEvent_IsBase(true);
	vqcombobox->keyReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyReleaseEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->wheelEvent(e);
	} else {
	self->QComboBox::wheelEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseWheelEvent(QComboBox* self, QWheelEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_WheelEvent_IsBase(true);
	vqcombobox->wheelEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnWheelEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_WheelEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->contextMenuEvent(e);
	} else {
	self->QComboBox::contextMenuEvent(e);
}
}

// Base class handler implementation
void QComboBox_QBaseContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ContextMenuEvent_IsBase(true);
	vqcombobox->contextMenuEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnContextMenuEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->inputMethodEvent(param1);
	} else {
	self->QComboBox::inputMethodEvent(param1);
}
}

// Base class handler implementation
void QComboBox_QBaseInputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InputMethodEvent_IsBase(true);
	vqcombobox->inputMethodEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodEvent(QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
	vqcombobox->initStyleOption(option);
	} else {
	self->QComboBox::initStyleOption(option);
}
}

// Base class handler implementation
void QComboBox_QBaseInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InitStyleOption_IsBase(true);
	vqcombobox->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInitStyleOption(const QComboBox* self, intptr_t slot) {
	auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
	if (vqcombobox && vqcombobox->isVirtualQComboBox) {
vqcombobox->setQComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InitStyleOption_Callback>(slot));
}
}

void QComboBox_Delete(QComboBox* self) {
    delete self;
}

