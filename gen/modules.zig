const std = @import("std");

/// Represents a Qt/KDE module configuration for binding generation.
pub const Module = struct {
    /// Subpath for generated output (empty string for the base Qt module).
    path: []const u8,
    /// Directories to scan for headers.
    dirs: []const []const u8,
    /// Header filter function. Returns true if the header should be processed.
    allow_header: *const fn (fullpath: []const u8) bool,
    /// Compiler flags (C++ standard, pkg-config flags, include paths).
    cflags: []const u8,
};

// ---------------------------------------------------------------------------
// Header filter helpers
// ---------------------------------------------------------------------------

fn allowAllHeaders(_: []const u8) bool {
    return true;
}

fn basename(path: []const u8) []const u8 {
    if (std.mem.lastIndexOfScalar(u8, path, '/')) |pos| {
        return path[pos + 1 ..];
    }
    if (std.mem.lastIndexOfScalar(u8, path, '\\')) |pos| {
        return path[pos + 1 ..];
    }
    return path;
}

fn toLowerByte(c: u8) u8 {
    return if (c >= 'A' and c <= 'Z') c + 32 else c;
}

fn containsIgnoreCase(haystack: []const u8, needle: []const u8) bool {
    if (needle.len == 0) return true;
    if (haystack.len < needle.len) return false;
    var i: usize = 0;
    while (i <= haystack.len - needle.len) : (i += 1) {
        var match = true;
        for (needle, 0..) |nc, j| {
            if (toLowerByte(haystack[i + j]) != toLowerByte(nc)) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

fn widgetsAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);

    // Not meant to be imported
    if (std.mem.endsWith(u8, fname, "_impl.h")) return false;

    // Vulkan headers are too hard
    if (containsIgnoreCase(fname, "vulkan")) return false;

    const blocked_headers = [_][]const u8{
        "qatomic_bootstrap.h",
        "qatomic_cxx11.h",
        "qatomic_msvc.h",
        "qgenericatomic.h",
        "qt_windows.h",
        "qmaccocoaviewcontainer_mac.h",
        "qmacnativewidget_mac.h",
        "qstring.h",
        "qbytearray.h",
        "qlist.h",
        "qspan.h",
        "qvector.h",
        "qhash.h",
        "qmap.h",
        "qtcoreexports.h",
        "q20algorithm.h",
        "q20functional.h",
        "q20iterator.h",
        "q23functional.h",
        "qguiapplication_platform.h",
        "qcomparehelpers.h",
        "bus_interface.h",
        "cache_adaptor.h",
        "deviceeventcontroller_adaptor.h",
        "properties_interface.h",
        "socket_interface.h",
        "qatomic.h",
        "qrhiwidget.h",
        "qscreen_platform.h",
        "qopenglext.h",
    };
    for (blocked_headers) |blocked| {
        if (std.mem.eql(u8, fname, blocked)) return false;
    }

    return true;
}

fn coreWidgetsAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    // Block cbor headers -- generated separately
    if (std.mem.startsWith(u8, fname, "qcbor")) return false;
    return widgetsAllowHeader(fullpath);
}

fn cborAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    return std.mem.startsWith(u8, fname, "qcbor");
}

fn networkAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    return !std.mem.eql(u8, fname, "qtnetwork-config.h");
}

fn webengineAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    return !std.mem.eql(u8, fname, "qtwebenginewidgets-config.h");
}

fn kwindowsystemAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    return !std.mem.eql(u8, fname, "kx11extras.h");
}

fn qcustomplotAllowHeader(fullpath: []const u8) bool {
    const fname = basename(fullpath);
    return std.mem.eql(u8, fname, "qcustomplot.h");
}

// ---------------------------------------------------------------------------
// Module definitions
// ---------------------------------------------------------------------------

/// Returns the full list of module configurations for binding generation.
/// The caller must not free or modify the returned slice; the data is comptime.
pub fn getModules() []const Module {
    return &modules;
}

/// Returns only the core Qt modules (QtCore, QtGui, QtWidgets, and CBOR).
pub fn getCoreModules() []const Module {
    return modules[0..4];
}

const modules = [_]Module{
    // -----------------------------------------------------------------------
    // Qt 6 Core, GUI, Widgets
    // -----------------------------------------------------------------------
    .{
        .path = "",
        .dirs = &.{
            "QtCore",
            "QtGui",
            "QtWidgets",
        },
        .allow_header = &coreWidgetsAllowHeader,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 CBOR (depends on QtCore)
    // -----------------------------------------------------------------------
    .{
        .path = "cbor",
        .dirs = &.{
            "QtCore",
        },
        .allow_header = &cborAllowHeader,
        .cflags = "--std=c++20",
    },

    // -----------------------------------------------------------------------
    // Qt 6 Multimedia (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "multimedia",
        .dirs = &.{
            "QtMultimedia",
            "QtMultimediaWidgets",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 Network (depends on QtCore)
    // -----------------------------------------------------------------------
    .{
        .path = "network",
        .dirs = &.{
            "QtNetwork",
        },
        .allow_header = &networkAllowHeader,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 OpenGL (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "opengl",
        .dirs = &.{
            "QtOpenGL",
            "QtOpenGLWidgets",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 PDF (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "pdf",
        .dirs = &.{
            "QtPdf",
            "QtPdfWidgets",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 Print Support (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "printsupport",
        .dirs = &.{
            "QtPrintSupport",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 Spatial Audio (depends on QtCore, Multimedia)
    // -----------------------------------------------------------------------
    .{
        .path = "spatialaudio",
        .dirs = &.{
            "QtSpatialAudio",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 SQL (depends on QtCore)
    // -----------------------------------------------------------------------
    .{
        .path = "sql",
        .dirs = &.{
            "QtSql",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 SVG (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "svg",
        .dirs = &.{
            "QtSvg",
            "QtSvgWidgets",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 XML (depends on QtCore)
    // -----------------------------------------------------------------------
    .{
        .path = "xml",
        .dirs = &.{
            "QtXml",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 WebChannel (depends on QtCore)
    // -----------------------------------------------------------------------
    .{
        .path = "webchannel",
        .dirs = &.{
            "QtWebChannel",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 WebEngine (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "webengine",
        .dirs = &.{
            "QtWebEngineCore",
            "QtWebEngineWidgets",
        },
        .allow_header = &webengineAllowHeader,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 D-Bus (depends on QtCore) -- POSIX only
    // -----------------------------------------------------------------------
    .{
        .path = "posix-extras-dbus",
        .dirs = &.{
            "QtDBus",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // Qt 6 Charts (depends on QtCore, QtGui, QtWidgets) -- restricted
    // -----------------------------------------------------------------------
    .{
        .path = "restricted-extras-charts",
        .dirs = &.{
            "QtCharts",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // QScintilla (depends on QtCore, QtGui, QtWidgets, PrintSupport) -- restricted
    // -----------------------------------------------------------------------
    .{
        .path = "restricted-extras-qscintilla",
        .dirs = &.{
            "Qsci",
        },
        .allow_header = &allowAllHeaders,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // KF6 extras -- KWindowSystem (depends on QtCore, QtGui, QtWidgets)
    // -----------------------------------------------------------------------
    .{
        .path = "foss-extras-kwindowsystem",
        .dirs = &.{
            "KF6/KWindowSystem",
        },
        .allow_header = &kwindowsystemAllowHeader,
        .cflags = "--std=c++17",
    },

    // -----------------------------------------------------------------------
    // QCustomPlot (depends on QtCore, QtGui, QtWidgets) -- restricted
    // -----------------------------------------------------------------------
    .{
        .path = "restricted-extras-qcustomplot",
        .dirs = &.{
            "/usr/include/",
        },
        .allow_header = &qcustomplotAllowHeader,
        .cflags = "--std=c++17",
    },
};

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

test "basename extracts filename" {
    try std.testing.expectEqualStrings("foo.h", basename("/usr/include/foo.h"));
    try std.testing.expectEqualStrings("bar.h", basename("bar.h"));
    try std.testing.expectEqualStrings("baz.h", basename("some\\path\\baz.h"));
}

test "coreWidgetsAllowHeader blocks cbor" {
    try std.testing.expect(!coreWidgetsAllowHeader("/usr/include/qt6/QtCore/qcborarray.h"));
    try std.testing.expect(coreWidgetsAllowHeader("/usr/include/qt6/QtCore/qobject.h"));
}

test "cborAllowHeader only allows cbor" {
    try std.testing.expect(cborAllowHeader("/usr/include/qt6/QtCore/qcborarray.h"));
    try std.testing.expect(!cborAllowHeader("/usr/include/qt6/QtCore/qobject.h"));
}

test "widgetsAllowHeader blocks vulkan" {
    try std.testing.expect(!widgetsAllowHeader("/usr/include/qt6/QtGui/qvulkanwindow.h"));
}

test "widgetsAllowHeader blocks impl headers" {
    try std.testing.expect(!widgetsAllowHeader("/usr/include/qt6/QtCore/foo_impl.h"));
}

test "getModules returns all modules" {
    const mods = getModules();
    try std.testing.expect(mods.len > 0);
    try std.testing.expectEqualStrings("", mods[0].path);
}

test "getCoreModules returns first four" {
    const core = getCoreModules();
    try std.testing.expectEqual(@as(usize, 4), core.len);
    try std.testing.expectEqualStrings("", core[0].path);
    try std.testing.expectEqualStrings("cbor", core[1].path);
    try std.testing.expectEqualStrings("multimedia", core[2].path);
    try std.testing.expectEqualStrings("network", core[3].path);
}
