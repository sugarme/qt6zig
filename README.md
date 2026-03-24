# qt6zig

Pure Zig bindings for Qt 6.8.3. Build standalone desktop applications with Zig and Qt6, no system Qt installation required.

## Features

- **570 generated bindings** across 13 Qt modules
- **Static linking**: Produces standalone executables with no Qt6 DLL dependencies
- **Self-contained**: Qt 6.8.3 source bundled in submodule — no external Qt installation needed
- **Three-layer binding**: Zig wrappers → C ABI wrappers → Qt6 C++ (static libs)
- **Zig-native build**: Uses `zig build` for everything, including C++ compilation
- **Pre-generated bindings**: No Clang needed to build — bindings are checked in
- **Pure Zig generator**: Binding generator written in Zig with streaming AST filter
- **Signal/slot support**: Connect Qt signals to Zig callback functions
- **Virtual method overrides**: Override Qt virtual methods from Zig code
- **Zig 0.16-dev compatible**: Works with latest Zig development builds

## Quick Start

### Prerequisites

- [Zig 0.16-dev](https://ziglang.org/download/) (or compatible version)

### Clone and Build

```bash
git clone --recursive https://github.com/sugarme/qt6zig.git
cd qt6zig

# Build qt6-zig-build first (one-time, produces static Qt libs)
cd qt6-zig-build
zig build -Doptimize=ReleaseFast
cd ..

# Build and run an example
zig build example-hello_window
./zig-out/bin/hello_window.exe
```

### Examples

**hello_window** — Minimal Qt window:
```zig
const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qwidget = qt6.qwidget;

pub fn main() !void {
    const dummy_arg: [*:0]u8 = @constCast(@ptrCast("qt6zig"));
    var argv = [_][*:0]u8{dummy_arg};
    const app = qapplication.New(1, &argv);
    defer qapplication.QDelete(app);

    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Hello Qt6 from Zig!");
    qwidget.SetFixedSize2(window, 400, 300);
    qwidget.ShowNormal(window);

    _ = qapplication.Exec();
}
```

**hello_button** — Button with click callback:
```zig
const button = qpushbutton.New5("Click me!", window);
qpushbutton.OnClicked(button, &onButtonClicked);

fn onButtonClicked(_: ?*anyopaque) callconv(.c) void {
    std.debug.print("Button clicked!\n", .{});
}
```

## Architecture

```
User Zig Code
    ↓ @import("qt6zig")
Zig Wrappers (binding/src/*.zig)
    ↓ @import("qt6c") via translate_c
C ABI Wrappers (binding/src/*.cpp)
    ↓ links against
Qt6 Static Libraries (qt6-zig-build/zig-out/lib/)
```

### Binding Structure

```
binding/
├── libqt6.zig              # Root Zig module (re-exports all)
├── src/                    # Per-class files (.cpp, .h, .hxx, .zig)
│   ├── qtlibc.h            # Base C structures (libqt_string, etc.)
│   ├── libqwidget.cpp/.h/.hxx/.zig   # Per-class bindings (4 files each)
│   ├── qt_static_plugins.cpp          # Platform plugin registration
│   ├── qt_rhi_stubs.cpp              # OpenGL/RHI symbol stubs
│   ├── ubsan_stubs.c                 # UBSAN runtime stubs
│   ├── network/            # QtNetwork module bindings
│   ├── concurrent/         # QtConcurrent module bindings
│   ├── charts/             # QtCharts module bindings
│   ├── multimedia/         # QtMultimedia module bindings
│   ├── opengl/             # QtOpenGL module bindings
│   ├── sql/                # QtSql module bindings
│   ├── xml/                # QtXml module bindings
│   ├── svg/                # QtSvg module bindings
│   ├── printsupport/       # QtPrintSupport module bindings
│   ├── webchannel/         # QtWebChannel module bindings
│   └── spatialaudio/       # QtSpatialAudio module bindings
└── include/                # Module aggregators
    ├── libqtc.zig          # Type aliases
    └── libqt6c.h           # Aggregate C header
```

## Qt Modules

### Generated Bindings: 570 classes across 13 modules

| Module | Bindings | Description |
|--------|----------|-------------|
| **QtCore + QtGui + QtWidgets** | 367 | Core, GUI, and widget classes |
| **QtOpenGL** | 42 | OpenGL wrappers, paint engine, shader programs |
| **QtCharts** | 39 | Charts (line, bar, pie, scatter, area, box plot, candlestick) |
| **QtNetwork** | 33 | Networking (HTTP, TCP/UDP sockets, DNS, SSL, cookies) |
| **QtMultimedia** | 24 | Audio/video playback, capture, devices |
| **QtConcurrent** | 17 | Thread pool and parallel execution |
| **QtSql** | 13 | SQL database abstraction and models |
| **QtPrintSupport** | 11 | Printing, print dialogs, print preview |
| **QtSvg + QtSvgWidgets** | 9 | SVG rendering and widget integration |
| **QtSpatialAudio** | 7 | 3D spatial audio (Resonance Audio engine) |
| **QtWebChannel** | 4 | Qt/web bridge communication |
| **QtXml** | 4 | XML DOM parser |

All 570 bindings compile successfully.

### Key Classes by Category

**Core**: QObject, QCoreApplication, QTimer, QEventLoop, QDir, QFile, QProcess, QThread, QSettings, QJsonDocument, QRegularExpression, QUrl, QDateTime, QVariant, QStringList, QByteArray

**GUI**: QGuiApplication, QColor, QFont, QIcon, QImage, QPixmap, QPainter, QPalette, QScreen, QWindow, QClipboard, QCursor, QEvent (30+ subclasses), QValidator

**Widgets**: QApplication, QWidget, QPushButton, QLabel, QLineEdit, QTextEdit, QComboBox, QCheckBox, QRadioButton, QSpinBox, QSlider, QProgressBar, QTableWidget, QTreeWidget, QListWidget, QMainWindow, QDialog, QFileDialog, QMessageBox, QMenuBar, QMenu, QToolBar, QStatusBar, QDockWidget, QTabWidget, QSplitter, QScrollArea, QGroupBox, QBoxLayout, QGridLayout, QFormLayout, QGraphicsView, QGraphicsScene

**Network**: QNetworkAccessManager, QNetworkReply, QNetworkRequest, QTcpSocket, QTcpServer, QUdpSocket, QHostAddress, QNetworkProxy, QSslSocket

**Charts**: QChart, QChartView, QLineSeries, QBarSeries, QPieSeries, QScatterSeries, QAreaSeries, QValueAxis, QBarCategoryAxis

**Multimedia**: QMediaPlayer, QAudioOutput, QCamera, QMediaRecorder, QVideoSink, QSoundEffect

**SQL**: QSqlDatabase, QSqlQuery, QSqlTableModel, QSqlRecord

### Static Libraries

| Library | Description |
|---------|-------------|
| Qt6Core, Qt6Gui, Qt6Widgets | Core Qt modules |
| Qt6Network, Qt6Concurrent, Qt6OpenGL | Networking, threading, OpenGL |
| Qt6Xml, Qt6Sql, Qt6PrintSupport | Data, database, printing |
| Qt6Svg, Qt6SvgWidgets | SVG rendering |
| Qt6WebChannel, Qt6Charts | Web bridge, charting |
| Qt6Multimedia, Qt6SpatialAudio | Media and 3D audio |
| Qt6FFmpegMediaPlugin | FFmpeg media backend |
| qwindows | Windows platform plugin |
| qtHarfbuzz, qtFreetype | Text shaping, font rendering |
| qtLibpng, qtLibjpeg | Image codecs |
| qtZlib, qtPcre2, qtDoubleConversion | Compression, regex, float conversion |

## Build Options

| Option | Default | Description |
|--------|---------|-------------|
| `qt6-build-path` | `qt6-zig-build` | Path to qt6-zig-build directory |
| `optimize` | `Debug` (→`ReleaseFast`) | Optimization level |

## Binding Generator

The `gen/` directory contains a Zig-based binding generator that parses Qt headers via Clang AST JSON output and generates four files per class (.h, .cpp, .hxx, .zig).

```bash
# Build the generator
zig build gen

# Run it to regenerate bindings (uses cached AST from cachedir/)
zig-out/bin/qt6zig-gen
```

### Key Features

- **Streaming AST filter**: Processes 500-800 MB clang JSON per header without loading entire DOM into memory. Writes clang output to temp file, scans for top-level AST nodes matching the target header, keeps only relevant nodes (~100KB-5MB per header)
- **AST caching**: Filtered results cached in `cachedir/` — first run takes ~45 min, subsequent runs are instant
- **zig cc backend**: Uses `zig cc -target x86_64-windows-msvc` as clang for AST dumping (bundled with Zig, no separate clang installation needed)
- **13 Qt modules**: Processes QtCore, QtGui, QtWidgets, QtNetwork, QtConcurrent, QtXml, QtSql, QtOpenGL, QtPrintSupport, QtSvg, QtWebChannel, QtCharts, QtMultimedia, QtSpatialAudio

### Generator Architecture

```
Qt Headers (qt6-zig-build/Qt/6.8.3/include/)
    ↓ zig cc -Xclang -ast-dump=json (via gen/run-clang.bat)
Raw JSON AST (~500-800 MB per header)
    ↓ streaming filter (gen/clang.zig)
Filtered JSON (~100KB-5MB, only target header nodes)
    ↓ parse (gen/ast_parser.zig)
Intermediate Representation (gen/intermediate.zig)
    ↓ transform passes (gen/transforms/*.zig)
    │  - child_classes: nested class detection
    │  - enums: scope resolution
    │  - structs: struct processing
    │  - overloads: method renaming (operators, collisions)
    │  - blocklist: filter blocked methods/types
    ↓ emit (gen/emit/*.zig)
    │  - cabi_header.zig  → .h   (C ABI declarations)
    │  - cabi_impl.zig    → .cpp (C ABI implementations)
    │  - cabi_virtual.zig → .hxx (virtual method callbacks)
    │  - zig_wrapper.zig  → .zig (idiomatic Zig wrappers)
binding/src/*.{h,cpp,hxx,zig}
```

### Known Generator Limitations

- **QList/QMap parameter round-trip**: Parameters accepting QList/QMap pass a default-constructed container (data not forwarded from C ABI struct yet).

Resolved issues:
- QUrl incomplete type, QGenericRunnable references (removed from bindings)
- OpenGL versioned function files (blocked at header filter level)
- Iterator types (blocked in config)
- QBindable/QProperty templates (blocked in config)
- Operator naming (+=, -=, etc. properly renamed)
- Virtual callback type mismatches (const, QString, enum, QList/QMap)
- Protected member access (skipped in C ABI, handled via virtual callbacks)
- metaObject/qt_metacast/qt_metacall overloads (blocked in transform)

## Platform Support

Currently targets **Windows x86_64** only. The build uses:
- Zig/Clang compiler toolchain (no MSVC or MinGW required)
- DirectWrite for font rendering
- Direct3D 11/12 for RHI backend (primary), OpenGL as fallback
- Windows UI Automation for accessibility
- Windows Media Foundation for multimedia
- FFmpeg 7.0.1 bundled for media codecs

## License

MIT License - see [LICENSE](LICENSE) for details.

Qt is licensed under LGPL-3.0 / GPL-2.0 / GPL-3.0 or commercial license.
See [Qt Licensing](https://www.qt.io/licensing/) for details.

## Related Projects

- [qt6-zig-build](https://github.com/sugarme/qt6-zig-build) — Build Qt6 from source with Zig
- [libqt6zig](https://github.com/nicholasgasior/libqt6zig) — Original Qt6 Zig bindings (Go-based generator)
