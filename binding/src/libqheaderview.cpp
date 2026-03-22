#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QByteArray>
#include <QEvent>
#include <QHeaderView>
#include <QItemSelection>
#include <QModelIndex>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionHeader>
#include <QWidget>
#include <qheaderview.h>
#include "libqheaderview.h"
#include "libqheaderview.hxx"

QHeaderView* QHeaderView_new(int orientation) {
	 return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation));
}

QHeaderView* QHeaderView_new2(int orientation, QWidget* parent) {
	 return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation), parent);
}

libqt_string QHeaderView_Tr(const char* s) {
	QString _ret = QHeaderView::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

int QHeaderView_Orientation(const QHeaderView* self) {
	return self->orientation();
}

int QHeaderView_Offset(const QHeaderView* self) {
	return self->offset();
}

int QHeaderView_Length(const QHeaderView* self) {
	return self->length();
}

QSize* QHeaderView_SizeHint(const QHeaderView* self) {
	return new QSize(self->sizeHint());
}

void QHeaderView_SetVisible(QHeaderView* self, bool v) {
	self->setVisible(v);
}

int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex) {
	return self->sectionSizeHint(logicalIndex);
}

int QHeaderView_VisualIndexAt(const QHeaderView* self, int position) {
	return self->visualIndexAt(position);
}

int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position) {
	return self->logicalIndexAt(position);
}

int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y) {
	return self->logicalIndexAt(x, y);
}

int QHeaderView_LogicalIndexAt3(const QHeaderView* self, const QPoint* pos) {
	return self->logicalIndexAt(*pos);
}

int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex) {
	return self->sectionSize(logicalIndex);
}

int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionPosition(logicalIndex);
}

int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex) {
	return self->sectionViewportPosition(logicalIndex);
}

void QHeaderView_MoveSection(QHeaderView* self, int from, int to) {
	self->moveSection(from, to);
}

void QHeaderView_SwapSections(QHeaderView* self, int first, int second) {
	self->swapSections(first, second);
}

void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size) {
	self->resizeSection(logicalIndex, size);
}

void QHeaderView_ResizeSections(QHeaderView* self, int mode) {
	self->resizeSections(static_cast<QHeaderView::ResizeMode>(mode));
}

bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex) {
	return self->isSectionHidden(logicalIndex);
}

void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
	self->setSectionHidden(logicalIndex, hide);
}

int QHeaderView_HiddenSectionCount(const QHeaderView* self) {
	return self->hiddenSectionCount();
}

void QHeaderView_HideSection(QHeaderView* self, int logicalIndex) {
	self->hideSection(logicalIndex);
}

void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex) {
	self->showSection(logicalIndex);
}

int QHeaderView_Count(const QHeaderView* self) {
	return self->count();
}

int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex) {
	return self->visualIndex(logicalIndex);
}

int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex) {
	return self->logicalIndex(visualIndex);
}

void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable) {
	self->setSectionsMovable(movable);
}

bool QHeaderView_SectionsMovable(const QHeaderView* self) {
	return self->sectionsMovable();
}

void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable) {
	self->setFirstSectionMovable(movable);
}

bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self) {
	return self->isFirstSectionMovable();
}

void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable) {
	self->setSectionsClickable(clickable);
}

bool QHeaderView_SectionsClickable(const QHeaderView* self) {
	return self->sectionsClickable();
}

void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight) {
	self->setHighlightSections(highlight);
}

bool QHeaderView_HighlightSections(const QHeaderView* self) {
	return self->highlightSections();
}

int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex) {
	return self->sectionResizeMode(logicalIndex);
}

void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode) {
	self->setSectionResizeMode(static_cast<QListView::ResizeMode>(mode));
}

void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode) {
	self->setSectionResizeMode(logicalIndex, static_cast<QListView::ResizeMode>(mode));
}

void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision) {
	self->setResizeContentsPrecision(precision);
}

int QHeaderView_ResizeContentsPrecision(const QHeaderView* self) {
	return self->resizeContentsPrecision();
}

int QHeaderView_StretchSectionCount(const QHeaderView* self) {
	return self->stretchSectionCount();
}

void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show) {
	self->setSortIndicatorShown(show);
}

bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self) {
	return self->isSortIndicatorShown();
}

void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order) {
	self->setSortIndicator(logicalIndex, static_cast<Qt::SortOrder>(order));
}

int QHeaderView_SortIndicatorSection(const QHeaderView* self) {
	return self->sortIndicatorSection();
}

int QHeaderView_SortIndicatorOrder(const QHeaderView* self) {
	return self->sortIndicatorOrder();
}

void QHeaderView_SetSortIndicatorClearable(QHeaderView* self, bool clearable) {
	self->setSortIndicatorClearable(clearable);
}

bool QHeaderView_IsSortIndicatorClearable(const QHeaderView* self) {
	return self->isSortIndicatorClearable();
}

bool QHeaderView_StretchLastSection(const QHeaderView* self) {
	return self->stretchLastSection();
}

void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch) {
	self->setStretchLastSection(stretch);
}

bool QHeaderView_CascadingSectionResizes(const QHeaderView* self) {
	return self->cascadingSectionResizes();
}

void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable) {
	self->setCascadingSectionResizes(enable);
}

int QHeaderView_DefaultSectionSize(const QHeaderView* self) {
	return self->defaultSectionSize();
}

void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size) {
	self->setDefaultSectionSize(size);
}

void QHeaderView_ResetDefaultSectionSize(QHeaderView* self) {
	self->resetDefaultSectionSize();
}

int QHeaderView_MinimumSectionSize(const QHeaderView* self) {
	return self->minimumSectionSize();
}

void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size) {
	self->setMinimumSectionSize(size);
}

int QHeaderView_MaximumSectionSize(const QHeaderView* self) {
	return self->maximumSectionSize();
}

void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size) {
	self->setMaximumSectionSize(size);
}

int QHeaderView_DefaultAlignment(const QHeaderView* self) {
	return self->defaultAlignment();
}

void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment) {
	self->setDefaultAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QHeaderView_DoItemsLayout(QHeaderView* self) {
	self->doItemsLayout();
}

bool QHeaderView_SectionsMoved(const QHeaderView* self) {
	return self->sectionsMoved();
}

bool QHeaderView_SectionsHidden(const QHeaderView* self) {
	return self->sectionsHidden();
}

libqt_string QHeaderView_SaveState(const QHeaderView* self) {
	QByteArray _qb = self->saveState();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QHeaderView_RestoreState(QHeaderView* self, const libqt_string state) {
	return self->restoreState(QByteArray(state.data, state.len));
}

void QHeaderView_Reset(QHeaderView* self) {
	self->reset();
}

void QHeaderView_SetOffset(QHeaderView* self, int offset) {
	self->setOffset(offset);
}

void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
	self->setOffsetToSectionPosition(visualIndex);
}

void QHeaderView_SetOffsetToLastSection(QHeaderView* self) {
	self->setOffsetToLastSection();
}

void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), logicalFirst, logicalLast);
}

void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
	self->sectionMoved(logicalIndex, oldVisualIndex, newVisualIndex);
}

void QHeaderView_Connect_SectionMoved(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionMoved, [self, slotFunc](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
	slotFunc(self, logicalIndex, oldVisualIndex, newVisualIndex);
    });
}

void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
	self->sectionResized(logicalIndex, oldSize, newSize);
}

void QHeaderView_Connect_SectionResized(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionResized, [self, slotFunc](int logicalIndex, int oldSize, int newSize) {
	slotFunc(self, logicalIndex, oldSize, newSize);
    });
}

void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex) {
	self->sectionPressed(logicalIndex);
}

void QHeaderView_Connect_SectionPressed(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionPressed, [self, slotFunc](int logicalIndex) {
	slotFunc(self, logicalIndex);
    });
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
	self->sectionClicked(logicalIndex);
}

void QHeaderView_Connect_SectionClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionClicked, [self, slotFunc](int logicalIndex) {
	slotFunc(self, logicalIndex);
    });
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
	self->sectionEntered(logicalIndex);
}

void QHeaderView_Connect_SectionEntered(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionEntered, [self, slotFunc](int logicalIndex) {
	slotFunc(self, logicalIndex);
    });
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionDoubleClicked(logicalIndex);
}

void QHeaderView_Connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionDoubleClicked, [self, slotFunc](int logicalIndex) {
	slotFunc(self, logicalIndex);
    });
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
	self->sectionCountChanged(oldCount, newCount);
}

void QHeaderView_Connect_SectionCountChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionCountChanged, [self, slotFunc](int oldCount, int newCount) {
	slotFunc(self, oldCount, newCount);
    });
}

void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionHandleDoubleClicked(logicalIndex);
}

void QHeaderView_Connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionHandleDoubleClicked, [self, slotFunc](int logicalIndex) {
	slotFunc(self, logicalIndex);
    });
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
	self->geometriesChanged();
}

void QHeaderView_Connect_GeometriesChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*) = reinterpret_cast<void (*)(QHeaderView*)>(slot);
    QHeaderView::connect(self, &QHeaderView::geometriesChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
	self->sortIndicatorChanged(logicalIndex, static_cast<Qt::SortOrder>(order));
}

void QHeaderView_Connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorChanged, [self, slotFunc](int logicalIndex, Qt::SortOrder order) {
	slotFunc(self, logicalIndex, order);
    });
}

void QHeaderView_SortIndicatorClearableChanged(QHeaderView* self, bool clearable) {
	self->sortIndicatorClearableChanged(clearable);
}

void QHeaderView_Connect_SortIndicatorClearableChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, bool) = reinterpret_cast<void (*)(QHeaderView*, bool)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorClearableChanged, [self, slotFunc](bool clearable) {
	slotFunc(self, clearable);
    });
}

libqt_string QHeaderView_Tr2(const char* s, const char* c) {
	QString _ret = QHeaderView::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHeaderView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHeaderView::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
void QHeaderView_QBaseSetModel(QHeaderView* self, QAbstractItemModel* model) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetModel_IsBase(true);
	vqheaderview->setModel(model);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetModel(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetModel_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetModel_Callback>(slot));
}
}

// Base class handler implementation
QSize* QHeaderView_QBaseSizeHint(const QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SizeHint_IsBase(true);
	return new QSize(vqheaderview->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHint(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QHeaderView_QBaseSetVisible(QHeaderView* self, bool v) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetVisible_IsBase(true);
	vqheaderview->setVisible(v);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetVisible(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetVisible_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
void QHeaderView_QBaseDoItemsLayout(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_DoItemsLayout_IsBase(true);
	vqheaderview->doItemsLayout();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDoItemsLayout(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_DoItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DoItemsLayout_Callback>(slot));
}
}

// Base class handler implementation
void QHeaderView_QBaseReset(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Reset_IsBase(true);
	vqheaderview->reset();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnReset(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Reset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Reset_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_CurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->currentChanged(*current, *old);
	} else {
	self->QHeaderView::currentChanged(*current, *old);
}
}

// Base class handler implementation
void QHeaderView_QBaseCurrentChanged(QHeaderView* self, const QModelIndex* current, const QModelIndex* old) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_CurrentChanged_IsBase(true);
	vqheaderview->currentChanged(*current, *old);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCurrentChanged(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_CurrentChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CurrentChanged_Callback>(slot));
}
}

// Derived class handler implementation
bool QHeaderView_Event(QHeaderView* self, QEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return vqheaderview->event(e);
	} else {
	return self->QHeaderView::event(e);
}
}

// Base class handler implementation
bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Event_IsBase(true);
	return vqheaderview->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Event_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->paintEvent(e);
	} else {
	self->QHeaderView::paintEvent(e);
}
}

// Base class handler implementation
void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_PaintEvent_IsBase(true);
	vqheaderview->paintEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_PaintEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->mousePressEvent(e);
	} else {
	self->QHeaderView::mousePressEvent(e);
}
}

// Base class handler implementation
void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MousePressEvent_IsBase(true);
	vqheaderview->mousePressEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMousePressEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MousePressEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->mouseMoveEvent(e);
	} else {
	self->QHeaderView::mouseMoveEvent(e);
}
}

// Base class handler implementation
void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseMoveEvent_IsBase(true);
	vqheaderview->mouseMoveEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseMoveEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->mouseReleaseEvent(e);
	} else {
	self->QHeaderView::mouseReleaseEvent(e);
}
}

// Base class handler implementation
void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseReleaseEvent_IsBase(true);
	vqheaderview->mouseReleaseEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseReleaseEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->mouseDoubleClickEvent(e);
	} else {
	self->QHeaderView::mouseDoubleClickEvent(e);
}
}

// Base class handler implementation
void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseDoubleClickEvent_IsBase(true);
	vqheaderview->mouseDoubleClickEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseDoubleClickEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return vqheaderview->viewportEvent(e);
	} else {
	return self->QHeaderView::viewportEvent(e);
}
}

// Base class handler implementation
bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ViewportEvent_IsBase(true);
	return vqheaderview->viewportEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportEvent(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ViewportEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->paintSection(painter, *rect, logicalIndex);
	} else {
	self->QHeaderView::paintSection(painter, *rect, logicalIndex);
}
}

// Base class handler implementation
void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, const QRect* rect, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_PaintSection_IsBase(true);
	vqheaderview->paintSection(painter, *rect, logicalIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintSection(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_PaintSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintSection_Callback>(slot));
}
}

// Derived class handler implementation
QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return new QSize(vqheaderview->sectionSizeFromContents(logicalIndex));
	} else {
	return new QSize(self->QHeaderView::sectionSizeFromContents(logicalIndex));
}
}

// Base class handler implementation
QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionSizeFromContents_IsBase(true);
	return new QSize(vqheaderview->sectionSizeFromContents(logicalIndex));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionSizeFromContents(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionSizeFromContents_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionSizeFromContents_Callback>(slot));
}
}

// Derived class handler implementation
int QHeaderView_HorizontalOffset(const QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return vqheaderview->horizontalOffset();
	} else {
	return self->QHeaderView::horizontalOffset();
}
}

// Base class handler implementation
int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_HorizontalOffset_IsBase(true);
	return vqheaderview->horizontalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalOffset(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_HorizontalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalOffset_Callback>(slot));
}
}

// Derived class handler implementation
int QHeaderView_VerticalOffset(const QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return vqheaderview->verticalOffset();
	} else {
	return self->QHeaderView::verticalOffset();
}
}

// Base class handler implementation
int QHeaderView_QBaseVerticalOffset(const QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VerticalOffset_IsBase(true);
	return vqheaderview->verticalOffset();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalOffset(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VerticalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalOffset_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_UpdateGeometries(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->updateGeometries();
	} else {
	self->QHeaderView::updateGeometries();
}
}

// Base class handler implementation
void QHeaderView_QBaseUpdateGeometries(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_UpdateGeometries_IsBase(true);
	vqheaderview->updateGeometries();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateGeometries(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_UpdateGeometries_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateGeometries_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->scrollContentsBy(dx, dy);
	} else {
	self->QHeaderView::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ScrollContentsBy_IsBase(true);
	vqheaderview->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollContentsBy(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollContentsBy_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_DataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->dataChanged(*topLeft, *bottomRight, QList<int>());
	} else {
	self->QHeaderView::dataChanged(*topLeft, *bottomRight, QList<int>());
}
}

// Base class handler implementation
void QHeaderView_QBaseDataChanged(QHeaderView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list roles) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_DataChanged_IsBase(true);
	vqheaderview->dataChanged(*topLeft, *bottomRight, QList<int>());
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDataChanged(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_DataChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DataChanged_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_RowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->rowsInserted(*parent, start, end);
	} else {
	self->QHeaderView::rowsInserted(*parent, start, end);
}
}

// Base class handler implementation
void QHeaderView_QBaseRowsInserted(QHeaderView* self, const QModelIndex* parent, int start, int end) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_RowsInserted_IsBase(true);
	vqheaderview->rowsInserted(*parent, start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsInserted(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_RowsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsInserted_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QHeaderView_VisualRect(const QHeaderView* self, const QModelIndex* index) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return new QRect(vqheaderview->visualRect(*index));
	} else {
	return new QRect(self->QHeaderView::visualRect(*index));
}
}

// Base class handler implementation
QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, const QModelIndex* index) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VisualRect_IsBase(true);
	return new QRect(vqheaderview->visualRect(*index));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRect(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VisualRect_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRect_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_ScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
	} else {
	self->QHeaderView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Base class handler implementation
void QHeaderView_QBaseScrollTo(QHeaderView* self, const QModelIndex* index, int hint) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ScrollTo_IsBase(true);
	vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollTo(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ScrollTo_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollTo_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, const QPoint* p) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return new QModelIndex(vqheaderview->indexAt(*p));
	} else {
	return new QModelIndex(self->QHeaderView::indexAt(*p));
}
}

// Base class handler implementation
QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, const QPoint* p) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_IndexAt_IsBase(true);
	return new QModelIndex(vqheaderview->indexAt(*p));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIndexAt(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_IndexAt_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IndexAt_Callback>(slot));
}
}

// Derived class handler implementation
bool QHeaderView_IsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return vqheaderview->isIndexHidden(*index);
	} else {
	return self->QHeaderView::isIndexHidden(*index);
}
}

// Base class handler implementation
bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, const QModelIndex* index) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_IsIndexHidden_IsBase(true);
	return vqheaderview->isIndexHidden(*index);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIsIndexHidden(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_IsIndexHidden_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IsIndexHidden_Callback>(slot));
}
}

// Derived class handler implementation
QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return new QModelIndex(vqheaderview->moveCursor(static_cast<QAbstractItemView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
	} else {
	return new QModelIndex(self->QHeaderView::moveCursor(static_cast<QAbstractItemView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
}
}

// Base class handler implementation
QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MoveCursor_IsBase(true);
	return new QModelIndex(vqheaderview->moveCursor(static_cast<QAbstractItemView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveCursor(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_MoveCursor_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveCursor_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_SetSelection(QHeaderView* self, const QRect* rect, int flags) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(flags));
	} else {
	self->QHeaderView::setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(flags));
}
}

// Base class handler implementation
void QHeaderView_QBaseSetSelection(QHeaderView* self, const QRect* rect, int flags) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetSelection_IsBase(true);
	vqheaderview->setSelection(*rect, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(flags));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelection(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SetSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelection_Callback>(slot));
}
}

// Derived class handler implementation
QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	return new QRegion(vqheaderview->visualRegionForSelection(*selection));
	} else {
	return new QRegion(self->QHeaderView::visualRegionForSelection(*selection));
}
}

// Base class handler implementation
QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, const QItemSelection* selection) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VisualRegionForSelection_IsBase(true);
	return new QRegion(vqheaderview->visualRegionForSelection(*selection));
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRegionForSelection(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRegionForSelection_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->initStyleOptionForIndex(option, logicalIndex);
	} else {
	self->QHeaderView::initStyleOptionForIndex(option, logicalIndex);
}
}

// Base class handler implementation
void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitStyleOptionForIndex_IsBase(true);
	vqheaderview->initStyleOptionForIndex(option, logicalIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOptionForIndex(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitStyleOptionForIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOptionForIndex_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->initStyleOption(option);
	} else {
	self->QHeaderView::initStyleOption(option);
}
}

// Base class handler implementation
void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitStyleOption_IsBase(true);
	vqheaderview->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOption(const QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<const VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitStyleOption_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOption_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->updateSection(logicalIndex);
	} else {
	self->QHeaderView::updateSection(logicalIndex);
}
}

// Base class handler implementation
void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_UpdateSection_IsBase(true);
	vqheaderview->updateSection(logicalIndex);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateSection(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_UpdateSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateSection_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_ResizeSections2(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->resizeSections();
	} else {
	self->QHeaderView::resizeSections();
}
}

// Base class handler implementation
void QHeaderView_QBaseResizeSections2(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ResizeSections2_IsBase(true);
	vqheaderview->resizeSections();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeSections2(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_ResizeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeSections2_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_SectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->sectionsInserted(*parent, logicalFirst, logicalLast);
	} else {
	self->QHeaderView::sectionsInserted(*parent, logicalFirst, logicalLast);
}
}

// Base class handler implementation
void QHeaderView_QBaseSectionsInserted(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionsInserted_IsBase(true);
	vqheaderview->sectionsInserted(*parent, logicalFirst, logicalLast);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsInserted(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->sectionsAboutToBeRemoved(*parent, logicalFirst, logicalLast);
	} else {
	self->QHeaderView::sectionsAboutToBeRemoved(*parent, logicalFirst, logicalLast);
}
}

// Base class handler implementation
void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, const QModelIndex* parent, int logicalFirst, int logicalLast) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_IsBase(true);
	vqheaderview->sectionsAboutToBeRemoved(*parent, logicalFirst, logicalLast);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsAboutToBeRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_Initialize(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->initialize();
	} else {
	self->QHeaderView::initialize();
}
}

// Base class handler implementation
void QHeaderView_QBaseInitialize(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Initialize_IsBase(true);
	vqheaderview->initialize();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitialize(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_Initialize_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Initialize_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_InitializeSections(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->initializeSections();
	} else {
	self->QHeaderView::initializeSections();
}
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections(QHeaderView* self) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitializeSections_IsBase(true);
	vqheaderview->initializeSections();
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitializeSections_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections_Callback>(slot));
}
}

// Derived class handler implementation
void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
	vqheaderview->initializeSections(start, end);
	} else {
	self->QHeaderView::initializeSections(start, end);
}
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitializeSections2_IsBase(true);
	vqheaderview->initializeSections(start, end);
}
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections2(QHeaderView* self, intptr_t slot) {
	auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self);
	if (vqheaderview && vqheaderview->isVirtualQHeaderView) {
vqheaderview->setQHeaderView_InitializeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections2_Callback>(slot));
}
}

void QHeaderView_Delete(QHeaderView* self) {
    delete self;
}

