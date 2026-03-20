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
#include "../src/libqobjectdefs.h"

// Qt GUI
#include "../src/libqguiapplication.h"
#include "../src/libqpaintdevice.h"
#include "../src/libqpalette.h"

// Qt Widgets
#include "../src/libqabstractbutton.h"
#include "../src/libqaction.h"
#include "../src/libqapplication.h"
#include "../src/libqpushbutton.h"
#include "../src/libqsizepolicy.h"
#include "../src/libqwidget.h"
#include "../src/libqwidgetaction.h"

// Static plugin registration (must be called before QApplication)
void qt6zig_register_platform_plugins(void);

#endif
