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

void QHeaderView_Delete(QHeaderView* self) {
    delete self;
}

