#pragma once
#ifndef QT6ZIG_LIBQT6C_H
#define QT6ZIG_LIBQT6C_H

// Aggregate C header for translate_c
// Includes all C ABI binding headers

#include "../src/qtlibc.h"

// Qt Core
#include "../src/libqcoreevent.h"
#include "../src/libqcoreapplication.h"
#include "../src/libqeventloop.h"
#include "../src/libqkeysequence.h"
#include "../src/libqnamespace.h"
#include "../src/libqobject.h"
#include "../src/libqobjectdefs.h"
#include "../src/libqtimer.h"

// Qt GUI
#include "../src/libqcolor.h"
#include "../src/libqevent.h"
#include "../src/libqeventpoint.h"
#include "../src/libqfont.h"
#include "../src/libqguiapplication.h"
#include "../src/libqicon.h"
#include "../src/libqimage.h"
#include "../src/libqinputdevice.h"
#include "../src/libqiodevicebase.h"
#include "../src/libqpaintdevice.h"
#include "../src/libqpalette.h"
#include "../src/libqpixmap.h"
#include "../src/libqpointingdevice.h"
#include "../src/libqvalidator.h"

// Qt Widgets
#include "../src/libqabstractbutton.h"
#include "../src/libqabstractitemdelegate.h"
#include "../src/libqabstractitemview.h"
#include "../src/libqabstractscrollarea.h"
#include "../src/libqabstractspinbox.h"
#include "../src/libqaction.h"
#include "../src/libqapplication.h"
#include "../src/libqboxlayout.h"
#include "../src/libqcheckbox.h"
#include "../src/libqcombobox.h"
#include "../src/libqdialog.h"
#include "../src/libqfiledialog.h"
#include "../src/libqframe.h"
#include "../src/libqgridlayout.h"
#include "../src/libqitemselectionmodel.h"
#include "../src/libqlabel.h"
#include "../src/libqlayout.h"
#include "../src/libqlineedit.h"
#include "../src/libqmessagebox.h"
#include "../src/libqprogressbar.h"
#include "../src/libqpushbutton.h"
#include "../src/libqscrollarea.h"
#include "../src/libqsizepolicy.h"
#include "../src/libqspinbox.h"
#include "../src/libqsplitter.h"
#include "../src/libqstackedwidget.h"
#include "../src/libqtablewidget.h"
#include "../src/libqtextcursor.h"
#include "../src/libqtextdocument.h"
#include "../src/libqtextedit.h"
#include "../src/libqtextformat.h"
#include "../src/libqtextoption.h"
#include "../src/libqwidget.h"
#include "../src/libqwidgetaction.h"

// Static plugin registration (must be called before QApplication)
void qt6zig_register_platform_plugins(void);

#endif
