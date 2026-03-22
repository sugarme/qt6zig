#include <QAction>
#include <QActionEvent>
#include <QBackingStore>
#include <QBitmap>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDebug>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QLocale>
#include <QMargins>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyle>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWidgetData>
#include <QWindow>
#include <qwidget.h>
#include "libqwidget.h"
#include "libqwidget.hxx"

QWidgetData* QWidgetData_new(const QWidgetData* param1) {
	 return new QWidgetData(*param1);
}

unsigned long long QWidgetData_Winid(const QWidgetData* self) {
	return self->winid;
}

void QWidgetData_SetWinid(QWidgetData* self, unsigned long long winid) {
	self->winid;
}

unsigned int QWidgetData_WidgetAttributes(const QWidgetData* self) {
	return self->widget_attributes;
}

void QWidgetData_SetWidgetAttributes(QWidgetData* self, unsigned int widget_attributes) {
	self->widget_attributes;
}

int QWidgetData_WindowFlags(const QWidgetData* self) {
	return self->window_flags;
}

void QWidgetData_SetWindowFlags(QWidgetData* self, int window_flags) {
	self->window_flags;
}

unsigned int QWidgetData_WindowState(const QWidgetData* self) {
	return self->window_state;
}

void QWidgetData_SetWindowState(QWidgetData* self, unsigned int window_state) {
	self->window_state;
}

unsigned int QWidgetData_FocusPolicy(const QWidgetData* self) {
	return self->focus_policy;
}

void QWidgetData_SetFocusPolicy(QWidgetData* self, unsigned int focus_policy) {
	self->focus_policy;
}

unsigned int QWidgetData_SizehintForced(const QWidgetData* self) {
	return self->sizehint_forced;
}

void QWidgetData_SetSizehintForced(QWidgetData* self, unsigned int sizehint_forced) {
	self->sizehint_forced;
}

unsigned int QWidgetData_IsClosing(const QWidgetData* self) {
	return self->is_closing;
}

void QWidgetData_SetIsClosing(QWidgetData* self, unsigned int is_closing) {
	self->is_closing;
}

unsigned int QWidgetData_InShow(const QWidgetData* self) {
	return self->in_show;
}

void QWidgetData_SetInShow(QWidgetData* self, unsigned int in_show) {
	self->in_show;
}

unsigned int QWidgetData_InSetWindowState(const QWidgetData* self) {
	return self->in_set_window_state;
}

void QWidgetData_SetInSetWindowState(QWidgetData* self, unsigned int in_set_window_state) {
	self->in_set_window_state;
}

unsigned int QWidgetData_FstrutDirty(const QWidgetData* self) {
	return self->fstrut_dirty;
}

void QWidgetData_SetFstrutDirty(QWidgetData* self, unsigned int fstrut_dirty) {
	self->fstrut_dirty;
}

unsigned int QWidgetData_ContextMenuPolicy(const QWidgetData* self) {
	return self->context_menu_policy;
}

void QWidgetData_SetContextMenuPolicy(QWidgetData* self, unsigned int context_menu_policy) {
	self->context_menu_policy;
}

unsigned int QWidgetData_WindowModality(const QWidgetData* self) {
	return self->window_modality;
}

void QWidgetData_SetWindowModality(QWidgetData* self, unsigned int window_modality) {
	self->window_modality;
}

unsigned int QWidgetData_InDestructor(const QWidgetData* self) {
	return self->in_destructor;
}

void QWidgetData_SetInDestructor(QWidgetData* self, unsigned int in_destructor) {
	self->in_destructor;
}

unsigned int QWidgetData_Unused(const QWidgetData* self) {
	return self->unused;
}

void QWidgetData_SetUnused(QWidgetData* self, unsigned int unused) {
	self->unused;
}

QRect* QWidgetData_Crect(const QWidgetData* self) {
	return new QRect(self->crect);
}

void QWidgetData_SetCrect(QWidgetData* self, QRect* crect) {
	self->crect;
}

QPalette* QWidgetData_Pal(const QWidgetData* self) {
	return new QPalette(self->pal);
}

void QWidgetData_SetPal(QWidgetData* self, QPalette* pal) {
	self->pal;
}

QFont* QWidgetData_Fnt(const QWidgetData* self) {
	return new QFont(self->fnt);
}

void QWidgetData_SetFnt(QWidgetData* self, QFont* fnt) {
	self->fnt;
}

QRect* QWidgetData_Wrect(const QWidgetData* self) {
	return new QRect(self->wrect);
}

void QWidgetData_SetWrect(QWidgetData* self, QRect* wrect) {
	self->wrect;
}

void QWidgetData_OperatorAssign(QWidgetData* self, const QWidgetData* param1) {
	self->operator=(*param1);
}

void QWidgetData_Delete(QWidgetData* self) {
    delete self;
}

QWidget* QWidget_new(QWidget* parent) {
	 return new VirtualQWidget(parent);
}

QWidget* QWidget_new2() {
	 return new VirtualQWidget();
}

QWidget* QWidget_new3(QWidget* parent, int f) {
	 return new VirtualQWidget(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QWidget_Tr(const char* s) {
	QString _ret = QWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QWidget_DevType(const QWidget* self) {
	return self->devType();
}

uintptr_t QWidget_WinId(const QWidget* self) {
	return self->winId();
}

void QWidget_CreateWinId(QWidget* self) {
	self->createWinId();
}

uintptr_t QWidget_InternalWinId(const QWidget* self) {
	return self->internalWinId();
}

uintptr_t QWidget_EffectiveWinId(const QWidget* self) {
	return self->effectiveWinId();
}

QStyle* QWidget_Style(const QWidget* self) {
	return self->style();
}

void QWidget_SetStyle(QWidget* self, QStyle* style) {
	self->setStyle(style);
}

bool QWidget_IsTopLevel(const QWidget* self) {
	return self->isTopLevel();
}

bool QWidget_IsWindow(const QWidget* self) {
	return self->isWindow();
}

bool QWidget_IsModal(const QWidget* self) {
	return self->isModal();
}

int QWidget_WindowModality(const QWidget* self) {
	return self->windowModality();
}

void QWidget_SetWindowModality(QWidget* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

bool QWidget_IsEnabled(const QWidget* self) {
	return self->isEnabled();
}

bool QWidget_IsEnabledTo(const QWidget* self, const QWidget* param1) {
	return self->isEnabledTo(param1);
}

void QWidget_SetEnabled(QWidget* self, bool enabled) {
	self->setEnabled(enabled);
}

void QWidget_SetDisabled(QWidget* self, bool disabled) {
	self->setDisabled(disabled);
}

void QWidget_SetWindowModified(QWidget* self, bool windowModified) {
	self->setWindowModified(windowModified);
}

QRect* QWidget_FrameGeometry(const QWidget* self) {
	return new QRect(self->frameGeometry());
}

const QRect* QWidget_Geometry(const QWidget* self) {
	const QRect& _ret = self->geometry();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRect* QWidget_NormalGeometry(const QWidget* self) {
	return new QRect(self->normalGeometry());
}

int QWidget_X(const QWidget* self) {
	return self->x();
}

int QWidget_Y(const QWidget* self) {
	return self->y();
}

QPoint* QWidget_Pos(const QWidget* self) {
	return new QPoint(self->pos());
}

QSize* QWidget_FrameSize(const QWidget* self) {
	return new QSize(self->frameSize());
}

QSize* QWidget_Size(const QWidget* self) {
	return new QSize(self->size());
}

int QWidget_Width(const QWidget* self) {
	return self->width();
}

int QWidget_Height(const QWidget* self) {
	return self->height();
}

QRect* QWidget_Rect(const QWidget* self) {
	return new QRect(self->rect());
}

QRect* QWidget_ChildrenRect(const QWidget* self) {
	return new QRect(self->childrenRect());
}

QRegion* QWidget_ChildrenRegion(const QWidget* self) {
	return new QRegion(self->childrenRegion());
}

QSize* QWidget_MinimumSize(const QWidget* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidget_MaximumSize(const QWidget* self) {
	return new QSize(self->maximumSize());
}

int QWidget_MinimumWidth(const QWidget* self) {
	return self->minimumWidth();
}

int QWidget_MinimumHeight(const QWidget* self) {
	return self->minimumHeight();
}

int QWidget_MaximumWidth(const QWidget* self) {
	return self->maximumWidth();
}

int QWidget_MaximumHeight(const QWidget* self) {
	return self->maximumHeight();
}

void QWidget_SetMinimumSize(QWidget* self, const QSize* minimumSize) {
	self->setMinimumSize(*minimumSize);
}

void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh) {
	self->setMinimumSize(minw, minh);
}

void QWidget_SetMaximumSize(QWidget* self, const QSize* maximumSize) {
	self->setMaximumSize(*maximumSize);
}

void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh) {
	self->setMaximumSize(maxw, maxh);
}

void QWidget_SetMinimumWidth(QWidget* self, int minw) {
	self->setMinimumWidth(minw);
}

void QWidget_SetMinimumHeight(QWidget* self, int minh) {
	self->setMinimumHeight(minh);
}

void QWidget_SetMaximumWidth(QWidget* self, int maxw) {
	self->setMaximumWidth(maxw);
}

void QWidget_SetMaximumHeight(QWidget* self, int maxh) {
	self->setMaximumHeight(maxh);
}

QSize* QWidget_SizeIncrement(const QWidget* self) {
	return new QSize(self->sizeIncrement());
}

void QWidget_SetSizeIncrement(QWidget* self, const QSize* sizeIncrement) {
	self->setSizeIncrement(*sizeIncrement);
}

void QWidget_SetSizeIncrement2(QWidget* self, int w, int h) {
	self->setSizeIncrement(w, h);
}

QSize* QWidget_BaseSize(const QWidget* self) {
	return new QSize(self->baseSize());
}

void QWidget_SetBaseSize(QWidget* self, const QSize* baseSize) {
	self->setBaseSize(*baseSize);
}

void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh) {
	self->setBaseSize(basew, baseh);
}

void QWidget_SetFixedSize(QWidget* self, const QSize* fixedSize) {
	self->setFixedSize(*fixedSize);
}

void QWidget_SetFixedSize2(QWidget* self, int w, int h) {
	self->setFixedSize(w, h);
}

void QWidget_SetFixedWidth(QWidget* self, int w) {
	self->setFixedWidth(w);
}

void QWidget_SetFixedHeight(QWidget* self, int h) {
	self->setFixedHeight(h);
}

QPointF* QWidget_MapToGlobal(const QWidget* self, const QPointF* param1) {
	return new QPointF(self->mapToGlobal(*param1));
}

QPoint* QWidget_MapToGlobal2(const QWidget* self, const QPoint* param1) {
	return new QPoint(self->mapToGlobal(*param1));
}

QPointF* QWidget_MapFromGlobal(const QWidget* self, const QPointF* param1) {
	return new QPointF(self->mapFromGlobal(*param1));
}

QPoint* QWidget_MapFromGlobal2(const QWidget* self, const QPoint* param1) {
	return new QPoint(self->mapFromGlobal(*param1));
}

QPointF* QWidget_MapToParent(const QWidget* self, const QPointF* param1) {
	return new QPointF(self->mapToParent(*param1));
}

QPoint* QWidget_MapToParent2(const QWidget* self, const QPoint* param1) {
	return new QPoint(self->mapToParent(*param1));
}

QPointF* QWidget_MapFromParent(const QWidget* self, const QPointF* param1) {
	return new QPointF(self->mapFromParent(*param1));
}

QPoint* QWidget_MapFromParent2(const QWidget* self, const QPoint* param1) {
	return new QPoint(self->mapFromParent(*param1));
}

QPointF* QWidget_MapTo(const QWidget* self, const QWidget* param1, const QPointF* param2) {
	return new QPointF(self->mapTo(param1, *param2));
}

QPoint* QWidget_MapTo2(const QWidget* self, const QWidget* param1, const QPoint* param2) {
	return new QPoint(self->mapTo(param1, *param2));
}

QPointF* QWidget_MapFrom(const QWidget* self, const QWidget* param1, const QPointF* param2) {
	return new QPointF(self->mapFrom(param1, *param2));
}

QPoint* QWidget_MapFrom2(const QWidget* self, const QWidget* param1, const QPoint* param2) {
	return new QPoint(self->mapFrom(param1, *param2));
}

QWidget* QWidget_Window(const QWidget* self) {
	return self->window();
}

QWidget* QWidget_NativeParentWidget(const QWidget* self) {
	return self->nativeParentWidget();
}

QWidget* QWidget_TopLevelWidget(const QWidget* self) {
	return self->topLevelWidget();
}

const QPalette* QWidget_Palette(const QWidget* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QWidget_SetPalette(QWidget* self, const QPalette* palette) {
	self->setPalette(*palette);
}

void QWidget_SetBackgroundRole(QWidget* self, int backgroundRole) {
	self->setBackgroundRole(static_cast<QPalette::ColorRole>(backgroundRole));
}

int QWidget_BackgroundRole(const QWidget* self) {
	return self->backgroundRole();
}

void QWidget_SetForegroundRole(QWidget* self, int foregroundRole) {
	self->setForegroundRole(static_cast<QPalette::ColorRole>(foregroundRole));
}

int QWidget_ForegroundRole(const QWidget* self) {
	return self->foregroundRole();
}

const QFont* QWidget_Font(const QWidget* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QWidget_SetFont(QWidget* self, const QFont* font) {
	self->setFont(*font);
}

QFontMetrics* QWidget_FontMetrics(const QWidget* self) {
	return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QWidget_FontInfo(const QWidget* self) {
	return new QFontInfo(self->fontInfo());
}

QCursor* QWidget_Cursor(const QWidget* self) {
	return new QCursor(self->cursor());
}

void QWidget_SetCursor(QWidget* self, const QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWidget_UnsetCursor(QWidget* self) {
	self->unsetCursor();
}

void QWidget_SetMouseTracking(QWidget* self, bool enable) {
	self->setMouseTracking(enable);
}

bool QWidget_HasMouseTracking(const QWidget* self) {
	return self->hasMouseTracking();
}

bool QWidget_UnderMouse(const QWidget* self) {
	return self->underMouse();
}

void QWidget_SetTabletTracking(QWidget* self, bool enable) {
	self->setTabletTracking(enable);
}

bool QWidget_HasTabletTracking(const QWidget* self) {
	return self->hasTabletTracking();
}

void QWidget_SetMask(QWidget* self, const QBitmap* mask) {
	self->setMask(*mask);
}

void QWidget_SetMask2(QWidget* self, const QRegion* mask) {
	self->setMask(*mask);
}

QRegion* QWidget_Mask(const QWidget* self) {
	return new QRegion(self->mask());
}

void QWidget_ClearMask(QWidget* self) {
	self->clearMask();
}

void QWidget_Render(QWidget* self, QPaintDevice* target) {
	self->render(target);
}

void QWidget_Render2(QWidget* self, QPainter* painter) {
	self->render(painter);
}

QPixmap* QWidget_Grab(QWidget* self) {
	return new QPixmap(self->grab());
}

QGraphicsEffect* QWidget_GraphicsEffect(const QWidget* self) {
	return self->graphicsEffect();
}

void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

void QWidget_GrabGesture(QWidget* self, int typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_UngrabGesture(QWidget* self, int typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_SetWindowTitle(QWidget* self, const libqt_string windowTitle) {
	self->setWindowTitle(QString::fromUtf8(windowTitle.data, windowTitle.len));
}

void QWidget_SetStyleSheet(QWidget* self, const libqt_string styleSheet) {
	self->setStyleSheet(QString::fromUtf8(styleSheet.data, styleSheet.len));
}

libqt_string QWidget_StyleSheet(const QWidget* self) {
	QString _ret = self->styleSheet();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWidget_WindowTitle(const QWidget* self) {
	QString _ret = self->windowTitle();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetWindowIcon(QWidget* self, const QIcon* icon) {
	self->setWindowIcon(*icon);
}

QIcon* QWidget_WindowIcon(const QWidget* self) {
	return new QIcon(self->windowIcon());
}

void QWidget_SetWindowIconText(QWidget* self, const libqt_string windowIconText) {
	self->setWindowIconText(QString::fromUtf8(windowIconText.data, windowIconText.len));
}

libqt_string QWidget_WindowIconText(const QWidget* self) {
	QString _ret = self->windowIconText();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetWindowRole(QWidget* self, const libqt_string windowRole) {
	self->setWindowRole(QString::fromUtf8(windowRole.data, windowRole.len));
}

libqt_string QWidget_WindowRole(const QWidget* self) {
	QString _ret = self->windowRole();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetWindowFilePath(QWidget* self, const libqt_string filePath) {
	self->setWindowFilePath(QString::fromUtf8(filePath.data, filePath.len));
}

libqt_string QWidget_WindowFilePath(const QWidget* self) {
	QString _ret = self->windowFilePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetWindowOpacity(QWidget* self, double level) {
	self->setWindowOpacity(level);
}

double QWidget_WindowOpacity(const QWidget* self) {
	return self->windowOpacity();
}

bool QWidget_IsWindowModified(const QWidget* self) {
	return self->isWindowModified();
}

void QWidget_SetToolTip(QWidget* self, const libqt_string toolTip) {
	self->setToolTip(QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QWidget_ToolTip(const QWidget* self) {
	QString _ret = self->toolTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetToolTipDuration(QWidget* self, int msec) {
	self->setToolTipDuration(msec);
}

int QWidget_ToolTipDuration(const QWidget* self) {
	return self->toolTipDuration();
}

void QWidget_SetStatusTip(QWidget* self, const libqt_string statusTip) {
	self->setStatusTip(QString::fromUtf8(statusTip.data, statusTip.len));
}

libqt_string QWidget_StatusTip(const QWidget* self) {
	QString _ret = self->statusTip();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetWhatsThis(QWidget* self, const libqt_string whatsThis) {
	self->setWhatsThis(QString::fromUtf8(whatsThis.data, whatsThis.len));
}

libqt_string QWidget_WhatsThis(const QWidget* self) {
	QString _ret = self->whatsThis();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWidget_AccessibleName(const QWidget* self) {
	QString _ret = self->accessibleName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetAccessibleName(QWidget* self, const libqt_string name) {
	self->setAccessibleName(QString::fromUtf8(name.data, name.len));
}

libqt_string QWidget_AccessibleDescription(const QWidget* self) {
	QString _ret = self->accessibleDescription();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_SetAccessibleDescription(QWidget* self, const libqt_string description) {
	self->setAccessibleDescription(QString::fromUtf8(description.data, description.len));
}

void QWidget_SetLayoutDirection(QWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QWidget_LayoutDirection(const QWidget* self) {
	return self->layoutDirection();
}

void QWidget_UnsetLayoutDirection(QWidget* self) {
	self->unsetLayoutDirection();
}

void QWidget_SetLocale(QWidget* self, const QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QWidget_Locale(const QWidget* self) {
	return new QLocale(self->locale());
}

void QWidget_UnsetLocale(QWidget* self) {
	self->unsetLocale();
}

bool QWidget_IsRightToLeft(const QWidget* self) {
	return self->isRightToLeft();
}

bool QWidget_IsLeftToRight(const QWidget* self) {
	return self->isLeftToRight();
}

void QWidget_SetFocus(QWidget* self) {
	self->setFocus();
}

bool QWidget_IsActiveWindow(const QWidget* self) {
	return self->isActiveWindow();
}

void QWidget_ActivateWindow(QWidget* self) {
	self->activateWindow();
}

void QWidget_ClearFocus(QWidget* self) {
	self->clearFocus();
}

void QWidget_SetFocus2(QWidget* self, int reason) {
	self->setFocus(static_cast<Qt::FocusReason>(reason));
}

int QWidget_FocusPolicy(const QWidget* self) {
	return self->focusPolicy();
}

void QWidget_SetFocusPolicy(QWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QWidget_HasFocus(const QWidget* self) {
	return self->hasFocus();
}

void QWidget_SetTabOrder(QWidget* param1, QWidget* param2) {
	QWidget::setTabOrder(param1, param2);
}

void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy) {
	self->setFocusProxy(focusProxy);
}

QWidget* QWidget_FocusProxy(const QWidget* self) {
	return self->focusProxy();
}

int QWidget_ContextMenuPolicy(const QWidget* self) {
	return self->contextMenuPolicy();
}

void QWidget_SetContextMenuPolicy(QWidget* self, int policy) {
	self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

void QWidget_GrabMouse(QWidget* self) {
	self->grabMouse();
}

void QWidget_GrabMouse2(QWidget* self, const QCursor* param1) {
	self->grabMouse(*param1);
}

void QWidget_ReleaseMouse(QWidget* self) {
	self->releaseMouse();
}

void QWidget_GrabKeyboard(QWidget* self) {
	self->grabKeyboard();
}

void QWidget_ReleaseKeyboard(QWidget* self) {
	self->releaseKeyboard();
}

int QWidget_GrabShortcut(QWidget* self, const QKeySequence* key) {
	return self->grabShortcut(*key);
}

void QWidget_ReleaseShortcut(QWidget* self, int id) {
	self->releaseShortcut(id);
}

void QWidget_SetShortcutEnabled(QWidget* self, int id) {
	self->setShortcutEnabled(id);
}

void QWidget_SetShortcutAutoRepeat(QWidget* self, int id) {
	self->setShortcutAutoRepeat(id);
}

QWidget* QWidget_MouseGrabber() {
	return QWidget::mouseGrabber();
}

QWidget* QWidget_KeyboardGrabber() {
	return QWidget::keyboardGrabber();
}

bool QWidget_UpdatesEnabled(const QWidget* self) {
	return self->updatesEnabled();
}

void QWidget_SetUpdatesEnabled(QWidget* self, bool enable) {
	self->setUpdatesEnabled(enable);
}

QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(const QWidget* self) {
	return self->graphicsProxyWidget();
}

void QWidget_Update(QWidget* self) {
	self->update();
}

void QWidget_Repaint(QWidget* self) {
	self->repaint();
}

void QWidget_Update2(QWidget* self, int x, int y, int w, int h) {
	self->update(x, y, w, h);
}

void QWidget_Update3(QWidget* self, const QRect* param1) {
	self->update(*param1);
}

void QWidget_Update4(QWidget* self, const QRegion* param1) {
	self->update(*param1);
}

void QWidget_Repaint2(QWidget* self, int x, int y, int w, int h) {
	self->repaint(x, y, w, h);
}

void QWidget_Repaint3(QWidget* self, const QRect* param1) {
	self->repaint(*param1);
}

void QWidget_Repaint4(QWidget* self, const QRegion* param1) {
	self->repaint(*param1);
}

void QWidget_SetVisible(QWidget* self, bool visible) {
	self->setVisible(visible);
}

void QWidget_SetHidden(QWidget* self, bool hidden) {
	self->setHidden(hidden);
}

void QWidget_Show(QWidget* self) {
	self->show();
}

void QWidget_Hide(QWidget* self) {
	self->hide();
}

void QWidget_ShowMinimized(QWidget* self) {
	self->showMinimized();
}

void QWidget_ShowMaximized(QWidget* self) {
	self->showMaximized();
}

void QWidget_ShowFullScreen(QWidget* self) {
	self->showFullScreen();
}

void QWidget_ShowNormal(QWidget* self) {
	self->showNormal();
}

bool QWidget_Close(QWidget* self) {
	return self->close();
}

void QWidget_Raise(QWidget* self) {
	self->raise();
}

void QWidget_Lower(QWidget* self) {
	self->lower();
}

void QWidget_StackUnder(QWidget* self, QWidget* param1) {
	self->stackUnder(param1);
}

void QWidget_Move(QWidget* self, int x, int y) {
	self->move(x, y);
}

void QWidget_Move2(QWidget* self, const QPoint* param1) {
	self->move(*param1);
}

void QWidget_Resize(QWidget* self, int w, int h) {
	self->resize(w, h);
}

void QWidget_Resize2(QWidget* self, const QSize* param1) {
	self->resize(*param1);
}

void QWidget_SetGeometry(QWidget* self, int x, int y, int w, int h) {
	self->setGeometry(x, y, w, h);
}

void QWidget_SetGeometry2(QWidget* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

libqt_string QWidget_SaveGeometry(const QWidget* self) {
	QByteArray _qb = self->saveGeometry();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QWidget_RestoreGeometry(QWidget* self, const libqt_string geometry) {
	return self->restoreGeometry(QByteArray(geometry.data, geometry.len));
}

void QWidget_AdjustSize(QWidget* self) {
	self->adjustSize();
}

bool QWidget_IsVisible(const QWidget* self) {
	return self->isVisible();
}

bool QWidget_IsVisibleTo(const QWidget* self, const QWidget* param1) {
	return self->isVisibleTo(param1);
}

bool QWidget_IsHidden(const QWidget* self) {
	return self->isHidden();
}

bool QWidget_IsMinimized(const QWidget* self) {
	return self->isMinimized();
}

bool QWidget_IsMaximized(const QWidget* self) {
	return self->isMaximized();
}

bool QWidget_IsFullScreen(const QWidget* self) {
	return self->isFullScreen();
}

int QWidget_WindowState(const QWidget* self) {
	return self->windowState();
}

void QWidget_SetWindowState(QWidget* self, int state) {
	self->setWindowState(static_cast<QFlags<Qt::WindowState>>(state));
}

void QWidget_OverrideWindowState(QWidget* self, int state) {
	self->overrideWindowState(static_cast<QFlags<Qt::WindowState>>(state));
}

QSize* QWidget_SizeHint(const QWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidget_MinimumSizeHint(const QWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QSizePolicy* QWidget_SizePolicy(const QWidget* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy) {
	self->setSizePolicy(*sizePolicy);
}

void QWidget_SetSizePolicy2(QWidget* self, int horizontal, int vertical) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

int QWidget_HeightForWidth(const QWidget* self, int param1) {
	return self->heightForWidth(param1);
}

bool QWidget_HasHeightForWidth(const QWidget* self) {
	return self->hasHeightForWidth();
}

QRegion* QWidget_VisibleRegion(const QWidget* self) {
	return new QRegion(self->visibleRegion());
}

void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(left, top, right, bottom);
}

void QWidget_SetContentsMargins2(QWidget* self, const QMargins* margins) {
	self->setContentsMargins(*margins);
}

QMargins* QWidget_ContentsMargins(const QWidget* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QWidget_ContentsRect(const QWidget* self) {
	return new QRect(self->contentsRect());
}

QLayout* QWidget_Layout(const QWidget* self) {
	return self->layout();
}

void QWidget_SetLayout(QWidget* self, QLayout* layout) {
	self->setLayout(layout);
}

void QWidget_UpdateGeometry(QWidget* self) {
	self->updateGeometry();
}

void QWidget_SetParent(QWidget* self, QWidget* parent) {
	self->setParent(parent);
}

void QWidget_SetParent2(QWidget* self, QWidget* parent, int f) {
	self->setParent(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

void QWidget_Scroll(QWidget* self, int dx, int dy) {
	self->scroll(dx, dy);
}

void QWidget_Scroll2(QWidget* self, int dx, int dy, const QRect* param3) {
	self->scroll(dx, dy, *param3);
}

QWidget* QWidget_FocusWidget(const QWidget* self) {
	return self->focusWidget();
}

QWidget* QWidget_NextInFocusChain(const QWidget* self) {
	return self->nextInFocusChain();
}

QWidget* QWidget_PreviousInFocusChain(const QWidget* self) {
	return self->previousInFocusChain();
}

bool QWidget_AcceptDrops(const QWidget* self) {
	return self->acceptDrops();
}

void QWidget_SetAcceptDrops(QWidget* self, bool on) {
	self->setAcceptDrops(on);
}

void QWidget_AddAction(QWidget* self, QAction* action) {
	self->addAction(action);
}

void QWidget_AddActions(QWidget* self, const libqt_list actions) {
	self->addActions(QList<QAction *>());
}

void QWidget_InsertActions(QWidget* self, QAction* before, const libqt_list actions) {
	self->insertActions(before, QList<QAction *>());
}

void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QWidget_RemoveAction(QWidget* self, QAction* action) {
	self->removeAction(action);
}

libqt_list QWidget_Actions(const QWidget* self) {
	auto _ret = self->actions();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

QAction* QWidget_AddAction2(QWidget* self, const libqt_string text) {
	return self->addAction(QString::fromUtf8(text.data, text.len));
}

QAction* QWidget_AddAction3(QWidget* self, const QIcon* icon, const libqt_string text) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len));
}

QAction* QWidget_AddAction4(QWidget* self, const libqt_string text, const QObject* receiver, const char* member) {
	return self->addAction(QString::fromUtf8(text.data, text.len), receiver, member);
}

QAction* QWidget_AddAction5(QWidget* self, const QIcon* icon, const libqt_string text, const QObject* receiver, const char* member) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), receiver, member);
}

QAction* QWidget_AddAction6(QWidget* self, const libqt_string text, const QKeySequence* shortcut) {
	return self->addAction(QString::fromUtf8(text.data, text.len), *shortcut);
}

QAction* QWidget_AddAction7(QWidget* self, const QIcon* icon, const libqt_string text, const QKeySequence* shortcut) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), *shortcut);
}

QAction* QWidget_AddAction8(QWidget* self, const libqt_string text, const QKeySequence* shortcut, const QObject* receiver, const char* member) {
	return self->addAction(QString::fromUtf8(text.data, text.len), *shortcut, receiver, member);
}

QAction* QWidget_AddAction9(QWidget* self, const QIcon* icon, const libqt_string text, const QKeySequence* shortcut, const QObject* receiver, const char* member) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), *shortcut, receiver, member);
}

QWidget* QWidget_ParentWidget(const QWidget* self) {
	return self->parentWidget();
}

void QWidget_SetWindowFlags(QWidget* self, int typeVal) {
	self->setWindowFlags(static_cast<QFlags<Qt::WindowType>>(typeVal));
}

int QWidget_WindowFlags(const QWidget* self) {
	return self->windowFlags();
}

void QWidget_SetWindowFlag(QWidget* self, int param1) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1));
}

void QWidget_OverrideWindowFlags(QWidget* self, int typeVal) {
	self->overrideWindowFlags(static_cast<QFlags<Qt::WindowType>>(typeVal));
}

int QWidget_WindowType(const QWidget* self) {
	return self->windowType();
}

QWidget* QWidget_Find(unsigned long long param1) {
	return QWidget::find(param1);
}

QWidget* QWidget_ChildAt(const QWidget* self, int x, int y) {
	return self->childAt(x, y);
}

QWidget* QWidget_ChildAt2(const QWidget* self, const QPoint* p) {
	return self->childAt(*p);
}

QWidget* QWidget_ChildAt3(const QWidget* self, const QPointF* p) {
	return self->childAt(*p);
}

void QWidget_SetAttribute(QWidget* self, int param1) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

bool QWidget_TestAttribute(const QWidget* self, int param1) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

QPaintEngine* QWidget_PaintEngine(const QWidget* self) {
	return self->paintEngine();
}

void QWidget_EnsurePolished(const QWidget* self) {
	self->ensurePolished();
}

bool QWidget_IsAncestorOf(const QWidget* self, const QWidget* child) {
	return self->isAncestorOf(child);
}

bool QWidget_AutoFillBackground(const QWidget* self) {
	return self->autoFillBackground();
}

void QWidget_SetAutoFillBackground(QWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

QBackingStore* QWidget_BackingStore(const QWidget* self) {
	return self->backingStore();
}

QWindow* QWidget_WindowHandle(const QWidget* self) {
	return self->windowHandle();
}

QScreen* QWidget_Screen(const QWidget* self) {
	return self->screen();
}

void QWidget_SetScreen(QWidget* self, QScreen* screen) {
	self->setScreen(screen);
}

QWidget* QWidget_CreateWindowContainer(QWindow* window) {
	return QWidget::createWindowContainer(window);
}

void QWidget_WindowTitleChanged(QWidget* self, const libqt_string title) {
	self->windowTitleChanged(QString::fromUtf8(title.data, title.len));
}

void QWidget_Connect_WindowTitleChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, const char*) = reinterpret_cast<void (*)(QWidget*, const char*)>(slot);
    QWidget::connect(self, &QWidget::windowTitleChanged, [self, slotFunc](const QString& title) {
	slotFunc(self, title);
    });
}

void QWidget_WindowIconChanged(QWidget* self, const QIcon* icon) {
	self->windowIconChanged(*icon);
}

void QWidget_Connect_WindowIconChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, const QIcon*) = reinterpret_cast<void (*)(QWidget*, const QIcon*)>(slot);
    QWidget::connect(self, &QWidget::windowIconChanged, [self, slotFunc](const QIcon& icon) {
	slotFunc(self, icon);
    });
}

void QWidget_WindowIconTextChanged(QWidget* self, const libqt_string iconText) {
	self->windowIconTextChanged(QString::fromUtf8(iconText.data, iconText.len));
}

void QWidget_Connect_WindowIconTextChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, const char*) = reinterpret_cast<void (*)(QWidget*, const char*)>(slot);
    QWidget::connect(self, &QWidget::windowIconTextChanged, [self, slotFunc](const QString& iconText) {
	slotFunc(self, iconText);
    });
}

void QWidget_CustomContextMenuRequested(QWidget* self, const QPoint* pos) {
	self->customContextMenuRequested(*pos);
}

void QWidget_Connect_CustomContextMenuRequested(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, const QPoint*) = reinterpret_cast<void (*)(QWidget*, const QPoint*)>(slot);
    QWidget::connect(self, &QWidget::customContextMenuRequested, [self, slotFunc](const QPoint& pos) {
	slotFunc(self, pos);
    });
}

QVariant* QWidget_InputMethodQuery(const QWidget* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QWidget_InputMethodHints(const QWidget* self) {
	return self->inputMethodHints();
}

void QWidget_SetInputMethodHints(QWidget* self, int hints) {
	self->setInputMethodHints(static_cast<QFlags<Qt::InputMethodHint>>(hints));
}

libqt_string QWidget_Tr2(const char* s, const char* c) {
	QString _ret = QWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidget_Render22(QWidget* self, QPaintDevice* target, const QPoint* targetOffset) {
	self->render(target, *targetOffset);
}

void QWidget_Render3(QWidget* self, QPaintDevice* target, const QPoint* targetOffset, const QRegion* sourceRegion) {
	self->render(target, *targetOffset, *sourceRegion);
}

void QWidget_Render4(QWidget* self, QPaintDevice* target, const QPoint* targetOffset, const QRegion* sourceRegion, int renderFlags) {
	self->render(target, *targetOffset, *sourceRegion, static_cast<QFlags<QWidget::RenderFlag>>(renderFlags));
}

void QWidget_Render23(QWidget* self, QPainter* painter, const QPoint* targetOffset) {
	self->render(painter, *targetOffset);
}

void QWidget_Render32(QWidget* self, QPainter* painter, const QPoint* targetOffset, const QRegion* sourceRegion) {
	self->render(painter, *targetOffset, *sourceRegion);
}

void QWidget_Render42(QWidget* self, QPainter* painter, const QPoint* targetOffset, const QRegion* sourceRegion, int renderFlags) {
	self->render(painter, *targetOffset, *sourceRegion, static_cast<QFlags<QWidget::RenderFlag>>(renderFlags));
}

QPixmap* QWidget_Grab1(QWidget* self, const QRect* rectangle) {
	return new QPixmap(self->grab(*rectangle));
}

void QWidget_GrabGesture2(QWidget* self, int typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<QFlags<Qt::GestureFlag>>(flags));
}

int QWidget_GrabShortcut2(QWidget* self, const QKeySequence* key, int context) {
	return self->grabShortcut(*key, static_cast<Qt::ShortcutContext>(context));
}

void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable) {
	self->setShortcutEnabled(id, enable);
}

void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable) {
	self->setShortcutAutoRepeat(id, enable);
}

QAction* QWidget_AddAction42(QWidget* self, const libqt_string text, const QObject* receiver, const char* member, int typeVal) {
	return self->addAction(QString::fromUtf8(text.data, text.len), receiver, member, static_cast<Qt::ConnectionType>(typeVal));
}

QAction* QWidget_AddAction52(QWidget* self, const QIcon* icon, const libqt_string text, const QObject* receiver, const char* member, int typeVal) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), receiver, member, static_cast<Qt::ConnectionType>(typeVal));
}

QAction* QWidget_AddAction53(QWidget* self, const libqt_string text, const QKeySequence* shortcut, const QObject* receiver, const char* member, int typeVal) {
	return self->addAction(QString::fromUtf8(text.data, text.len), *shortcut, receiver, member, static_cast<Qt::ConnectionType>(typeVal));
}

QAction* QWidget_AddAction62(QWidget* self, const QIcon* icon, const libqt_string text, const QKeySequence* shortcut, const QObject* receiver, const char* member, int typeVal) {
	return self->addAction(*icon, QString::fromUtf8(text.data, text.len), *shortcut, receiver, member, static_cast<Qt::ConnectionType>(typeVal));
}

void QWidget_SetWindowFlag2(QWidget* self, int param1, bool on) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1), on);
}

void QWidget_SetAttribute2(QWidget* self, int param1, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1), on);
}

QWidget* QWidget_CreateWindowContainer2(QWindow* window, QWidget* parent) {
	return QWidget::createWindowContainer(window, parent);
}

QWidget* QWidget_CreateWindowContainer3(QWindow* window, QWidget* parent, int flags) {
	return QWidget::createWindowContainer(window, parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

// Base class handler implementation
int QWidget_QBaseDevType(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DevType_IsBase(true);
	return vqwidget->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDevType(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DevType_Callback(reinterpret_cast<VirtualQWidget::QWidget_DevType_Callback>(slot));
}
}

// Base class handler implementation
void QWidget_QBaseSetVisible(QWidget* self, bool visible) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SetVisible_IsBase(true);
	vqwidget->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSetVisible(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SetVisible_Callback(reinterpret_cast<VirtualQWidget::QWidget_SetVisible_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidget_QBaseSizeHint(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SizeHint_IsBase(true);
	return new QSize(vqwidget->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSizeHint(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SizeHint_Callback(reinterpret_cast<VirtualQWidget::QWidget_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidget_QBaseMinimumSizeHint(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MinimumSizeHint_IsBase(true);
	return new QSize(vqwidget->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMinimumSizeHint(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWidget::QWidget_MinimumSizeHint_Callback>(slot));
}
}

// Base class handler implementation
int QWidget_QBaseHeightForWidth(const QWidget* self, int param1) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HeightForWidth_IsBase(true);
	return vqwidget->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHeightForWidth(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQWidget::QWidget_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
bool QWidget_QBaseHasHeightForWidth(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HasHeightForWidth_IsBase(true);
	return vqwidget->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHasHeightForWidth(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWidget::QWidget_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QWidget_QBasePaintEngine(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_PaintEngine_IsBase(true);
	return vqwidget->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEngine(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_PaintEngine_Callback(reinterpret_cast<VirtualQWidget::QWidget_PaintEngine_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidget_Event(QWidget* self, QEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->event(event);
	} else {
	return self->QWidget::event(event);
}
}

// Base class handler implementation
bool QWidget_QBaseEvent(QWidget* self, QEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Event_IsBase(true);
	return vqwidget->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Event_Callback(reinterpret_cast<VirtualQWidget::QWidget_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_MousePressEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->mousePressEvent(event);
	} else {
	self->QWidget::mousePressEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseMousePressEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MousePressEvent_IsBase(true);
	vqwidget->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMousePressEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_MouseReleaseEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->mouseReleaseEvent(event);
	} else {
	self->QWidget::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseMouseReleaseEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseReleaseEvent_IsBase(true);
	vqwidget->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseReleaseEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_MouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->mouseDoubleClickEvent(event);
	} else {
	self->QWidget::mouseDoubleClickEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseMouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseDoubleClickEvent_IsBase(true);
	vqwidget->mouseDoubleClickEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseDoubleClickEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseDoubleClickEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_MouseMoveEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->mouseMoveEvent(event);
	} else {
	self->QWidget::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseMouseMoveEvent(QWidget* self, QMouseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseMoveEvent_IsBase(true);
	vqwidget->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseMoveEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_WheelEvent(QWidget* self, QWheelEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->wheelEvent(event);
	} else {
	self->QWidget::wheelEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseWheelEvent(QWidget* self, QWheelEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_WheelEvent_IsBase(true);
	vqwidget->wheelEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnWheelEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_WheelEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_WheelEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_KeyPressEvent(QWidget* self, QKeyEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->keyPressEvent(event);
	} else {
	self->QWidget::keyPressEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseKeyPressEvent(QWidget* self, QKeyEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_KeyPressEvent_IsBase(true);
	vqwidget->keyPressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyPressEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_KeyPressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_KeyReleaseEvent(QWidget* self, QKeyEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->keyReleaseEvent(event);
	} else {
	self->QWidget::keyReleaseEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseKeyReleaseEvent(QWidget* self, QKeyEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_KeyReleaseEvent_IsBase(true);
	vqwidget->keyReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyReleaseEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_KeyReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_FocusInEvent(QWidget* self, QFocusEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->focusInEvent(event);
	} else {
	self->QWidget::focusInEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseFocusInEvent(QWidget* self, QFocusEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusInEvent_IsBase(true);
	vqwidget->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusInEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_FocusOutEvent(QWidget* self, QFocusEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->focusOutEvent(event);
	} else {
	self->QWidget::focusOutEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseFocusOutEvent(QWidget* self, QFocusEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusOutEvent_IsBase(true);
	vqwidget->focusOutEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusOutEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusOutEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_EnterEvent(QWidget* self, QEnterEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->enterEvent(event);
	} else {
	self->QWidget::enterEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseEnterEvent(QWidget* self, QEnterEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_EnterEvent_IsBase(true);
	vqwidget->enterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEnterEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_EnterEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_EnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_LeaveEvent(QWidget* self, QEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->leaveEvent(event);
	} else {
	self->QWidget::leaveEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseLeaveEvent(QWidget* self, QEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_LeaveEvent_IsBase(true);
	vqwidget->leaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnLeaveEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_LeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_PaintEvent(QWidget* self, QPaintEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->paintEvent(event);
	} else {
	self->QWidget::paintEvent(event);
}
}

// Base class handler implementation
void QWidget_QBasePaintEvent(QWidget* self, QPaintEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_PaintEvent_IsBase(true);
	vqwidget->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_PaintEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_MoveEvent(QWidget* self, QMoveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->moveEvent(event);
	} else {
	self->QWidget::moveEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseMoveEvent(QWidget* self, QMoveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MoveEvent_IsBase(true);
	vqwidget->moveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMoveEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_MoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_ResizeEvent(QWidget* self, QResizeEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->resizeEvent(event);
	} else {
	self->QWidget::resizeEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseResizeEvent(QWidget* self, QResizeEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ResizeEvent_IsBase(true);
	vqwidget->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnResizeEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_CloseEvent(QWidget* self, QCloseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->closeEvent(event);
	} else {
	self->QWidget::closeEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseCloseEvent(QWidget* self, QCloseEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_CloseEvent_IsBase(true);
	vqwidget->closeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCloseEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_CloseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_CloseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_ContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->contextMenuEvent(event);
	} else {
	self->QWidget::contextMenuEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ContextMenuEvent_IsBase(true);
	vqwidget->contextMenuEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnContextMenuEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ContextMenuEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_TabletEvent(QWidget* self, QTabletEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->tabletEvent(event);
	} else {
	self->QWidget::tabletEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseTabletEvent(QWidget* self, QTabletEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_TabletEvent_IsBase(true);
	vqwidget->tabletEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnTabletEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_TabletEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_TabletEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_ActionEvent(QWidget* self, QActionEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->actionEvent(event);
	} else {
	self->QWidget::actionEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseActionEvent(QWidget* self, QActionEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ActionEvent_IsBase(true);
	vqwidget->actionEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnActionEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ActionEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ActionEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_DragEnterEvent(QWidget* self, QDragEnterEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->dragEnterEvent(event);
	} else {
	self->QWidget::dragEnterEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseDragEnterEvent(QWidget* self, QDragEnterEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragEnterEvent_IsBase(true);
	vqwidget->dragEnterEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragEnterEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragEnterEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_DragMoveEvent(QWidget* self, QDragMoveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->dragMoveEvent(event);
	} else {
	self->QWidget::dragMoveEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseDragMoveEvent(QWidget* self, QDragMoveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragMoveEvent_IsBase(true);
	vqwidget->dragMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragMoveEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_DragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->dragLeaveEvent(event);
	} else {
	self->QWidget::dragLeaveEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseDragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragLeaveEvent_IsBase(true);
	vqwidget->dragLeaveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragLeaveEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragLeaveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_DropEvent(QWidget* self, QDropEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->dropEvent(event);
	} else {
	self->QWidget::dropEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseDropEvent(QWidget* self, QDropEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DropEvent_IsBase(true);
	vqwidget->dropEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDropEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_DropEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DropEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_ShowEvent(QWidget* self, QShowEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->showEvent(event);
	} else {
	self->QWidget::showEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseShowEvent(QWidget* self, QShowEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ShowEvent_IsBase(true);
	vqwidget->showEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnShowEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ShowEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_HideEvent(QWidget* self, QHideEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->hideEvent(event);
	} else {
	self->QWidget::hideEvent(event);
}
}

// Base class handler implementation
void QWidget_QBaseHideEvent(QWidget* self, QHideEvent* event) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HideEvent_IsBase(true);
	vqwidget->hideEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHideEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_HideEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_HideEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidget_NativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
	} else {
	return self->QWidget::nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
}
}

// Base class handler implementation
bool QWidget_QBaseNativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_NativeEvent_IsBase(true);
	return vqwidget->nativeEvent(QByteArray(eventType.data, eventType.len), message, result);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnNativeEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_NativeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_NativeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_ChangeEvent(QWidget* self, QEvent* param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->changeEvent(param1);
	} else {
	self->QWidget::changeEvent(param1);
}
}

// Base class handler implementation
void QWidget_QBaseChangeEvent(QWidget* self, QEvent* param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ChangeEvent_IsBase(true);
	vqwidget->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnChangeEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
int QWidget_Metric(const QWidget* self, int param1) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
	} else {
	return self->QWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Base class handler implementation
int QWidget_QBaseMetric(const QWidget* self, int param1) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Metric_IsBase(true);
	return vqwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetric(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Metric_Callback(reinterpret_cast<VirtualQWidget::QWidget_Metric_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_InitPainter(const QWidget* self, QPainter* painter) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->initPainter(painter);
	} else {
	self->QWidget::initPainter(painter);
}
}

// Base class handler implementation
void QWidget_QBaseInitPainter(const QWidget* self, QPainter* painter) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InitPainter_IsBase(true);
	vqwidget->initPainter(painter);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInitPainter(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InitPainter_Callback(reinterpret_cast<VirtualQWidget::QWidget_InitPainter_Callback>(slot));
}
}

// Derived class handler implementation
QPaintDevice* QWidget_Redirected(const QWidget* self, QPoint* offset) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->redirected(offset);
	} else {
	return self->QWidget::redirected(offset);
}
}

// Base class handler implementation
QPaintDevice* QWidget_QBaseRedirected(const QWidget* self, QPoint* offset) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Redirected_IsBase(true);
	return vqwidget->redirected(offset);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnRedirected(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Redirected_Callback(reinterpret_cast<VirtualQWidget::QWidget_Redirected_Callback>(slot));
}
}

// Derived class handler implementation
QPainter* QWidget_SharedPainter(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->sharedPainter();
	} else {
	return self->QWidget::sharedPainter();
}
}

// Base class handler implementation
QPainter* QWidget_QBaseSharedPainter(const QWidget* self) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SharedPainter_IsBase(true);
	return vqwidget->sharedPainter();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSharedPainter(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_SharedPainter_Callback(reinterpret_cast<VirtualQWidget::QWidget_SharedPainter_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_InputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->inputMethodEvent(param1);
	} else {
	self->QWidget::inputMethodEvent(param1);
}
}

// Base class handler implementation
void QWidget_QBaseInputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InputMethodEvent_IsBase(true);
	vqwidget->inputMethodEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodEvent(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_InputMethodEvent_Callback>(slot));
}
}

// Base class handler implementation
QVariant* QWidget_QBaseInputMethodQuery(const QWidget* self, int param1) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InputMethodQuery_IsBase(true);
	return new QVariant(vqwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodQuery(const QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQWidget::QWidget_InputMethodQuery_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidget_FocusNextPrevChild(QWidget* self, bool next) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->focusNextPrevChild(next);
	} else {
	return self->QWidget::focusNextPrevChild(next);
}
}

// Base class handler implementation
bool QWidget_QBaseFocusNextPrevChild(QWidget* self, bool next) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusNextPrevChild_IsBase(true);
	return vqwidget->focusNextPrevChild(next);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusNextPrevChild(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusNextPrevChild_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_UpdateMicroFocus(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->updateMicroFocus();
	} else {
	self->QWidget::updateMicroFocus();
}
}

// Base class handler implementation
void QWidget_QBaseUpdateMicroFocus(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_UpdateMicroFocus_IsBase(true);
	vqwidget->updateMicroFocus();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnUpdateMicroFocus(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWidget::QWidget_UpdateMicroFocus_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Create(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->create();
	} else {
	self->QWidget::create();
}
}

// Base class handler implementation
void QWidget_QBaseCreate(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create_IsBase(true);
	vqwidget->create();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Destroy(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->destroy();
	} else {
	self->QWidget::destroy();
}
}

// Base class handler implementation
void QWidget_QBaseDestroy(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy_IsBase(true);
	vqwidget->destroy();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidget_FocusNextChild(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->focusNextChild();
	} else {
	return self->QWidget::focusNextChild();
}
}

// Base class handler implementation
bool QWidget_QBaseFocusNextChild(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusNextChild_IsBase(true);
	return vqwidget->focusNextChild();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusNextChild(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusNextChild_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidget_FocusPreviousChild(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	return vqwidget->focusPreviousChild();
	} else {
	return self->QWidget::focusPreviousChild();
}
}

// Base class handler implementation
bool QWidget_QBaseFocusPreviousChild(QWidget* self) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusPreviousChild_IsBase(true);
	return vqwidget->focusPreviousChild();
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusPreviousChild(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusPreviousChild_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_UpdateMicroFocus1(QWidget* self, int query) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
	} else {
	self->QWidget::updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
}
}

// Base class handler implementation
void QWidget_QBaseUpdateMicroFocus1(QWidget* self, int query) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_UpdateMicroFocus1_IsBase(true);
	vqwidget->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnUpdateMicroFocus1(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_UpdateMicroFocus1_Callback(reinterpret_cast<VirtualQWidget::QWidget_UpdateMicroFocus1_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Create1(QWidget* self, unsigned long long param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->create(param1);
	} else {
	self->QWidget::create(param1);
}
}

// Base class handler implementation
void QWidget_QBaseCreate1(QWidget* self, unsigned long long param1) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create1_IsBase(true);
	vqwidget->create(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate1(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create1_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create1_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Create2(QWidget* self, unsigned long long param1, bool initializeWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->create(param1, initializeWindow);
	} else {
	self->QWidget::create(param1, initializeWindow);
}
}

// Base class handler implementation
void QWidget_QBaseCreate2(QWidget* self, unsigned long long param1, bool initializeWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create2_IsBase(true);
	vqwidget->create(param1, initializeWindow);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate2(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create2_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create2_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Create3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->create(param1, initializeWindow, destroyOldWindow);
	} else {
	self->QWidget::create(param1, initializeWindow, destroyOldWindow);
}
}

// Base class handler implementation
void QWidget_QBaseCreate3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create3_IsBase(true);
	vqwidget->create(param1, initializeWindow, destroyOldWindow);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate3(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Create3_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create3_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Destroy1(QWidget* self, bool destroyWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->destroy(destroyWindow);
	} else {
	self->QWidget::destroy(destroyWindow);
}
}

// Base class handler implementation
void QWidget_QBaseDestroy1(QWidget* self, bool destroyWindow) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy1_IsBase(true);
	vqwidget->destroy(destroyWindow);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy1(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy1_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy1_Callback>(slot));
}
}

// Derived class handler implementation
void QWidget_Destroy2(QWidget* self, bool destroyWindow, bool destroySubWindows) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
	vqwidget->destroy(destroyWindow, destroySubWindows);
	} else {
	self->QWidget::destroy(destroyWindow, destroySubWindows);
}
}

// Base class handler implementation
void QWidget_QBaseDestroy2(QWidget* self, bool destroyWindow, bool destroySubWindows) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy2_IsBase(true);
	vqwidget->destroy(destroyWindow, destroySubWindows);
}
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy2(QWidget* self, intptr_t slot) {
	auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
	if (vqwidget && vqwidget->isVirtualQWidget) {
vqwidget->setQWidget_Destroy2_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy2_Callback>(slot));
}
}

void QWidget_Delete(QWidget* self) {
    delete self;
}

