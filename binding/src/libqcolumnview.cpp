#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QColumnView>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qcolumnview.h>
#include "libqcolumnview.h"
#include "libqcolumnview.hxx"

QColumnView* QColumnView_new(QWidget* parent) {
	 return new VirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
	 return new VirtualQColumnView();
}

libqt_string QColumnView_Tr(const char* s) {
	QString _ret = QColumnView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, const QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot) {
    void (*slotFunc)(QColumnView*, const QModelIndex*) = reinterpret_cast<void (*)(QColumnView*, const QModelIndex*)>(slot);
    QColumnView::connect(self, &QColumnView::updatePreviewWidget, [self, slotFunc](const QModelIndex& index) {
	slotFunc(self, index);
    });
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
	return new QSize(self->sizeHint());
}

QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_SelectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, const libqt_list list) {
	self->setColumnWidths(QList<int>());
}

libqt_list QColumnView_ColumnWidths(const QColumnView* self) {
	auto _ret = self->columnWidths();
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

libqt_string QColumnView_Tr2(const char* s, const char* c) {
	QString _ret = QColumnView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QColumnView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColumnView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, const QPoint* point) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IndexAt_IsBase(true);
	return new QModelIndex(vqcolumnview->indexAt(*point));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_IndexAt_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IndexAt_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollTo_IsBase(true);
	vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_ScrollTo_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollTo_Callback>(slot));
}
}

// Base class handler implementation
QSize* QColumnView_QBaseSizeHint(const QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SizeHint_IsBase(true);
	return new QSize(vqcolumnview->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRect_IsBase(true);
	return new QRect(vqcolumnview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_VisualRect_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRect_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetModel_IsBase(true);
	vqcolumnview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelectionModel_IsBase(true);
	vqcolumnview->setSelectionModel(selectionModel);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetSelectionModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelectionModel_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSetRootIndex(QColumnView* self, const QModelIndex* index) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetRootIndex_IsBase(true);
	vqcolumnview->setRootIndex(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SetRootIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetRootIndex_Callback>(slot));
}
}

// Base class handler implementation
void QColumnView_QBaseSelectAll(QColumnView* self) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SelectAll_IsBase(true);
	vqcolumnview->selectAll();
}
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot) {
	auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
	if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
vqcolumnview->setQColumnView_SelectAll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectAll_Callback>(slot));
}
}

void QColumnView_Delete(QColumnView* self) {
    delete self;
}

