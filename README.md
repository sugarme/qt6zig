# qt6zig

Pure Zig bindings for Qt 6.8.3. Build standalone desktop applications with Zig and Qt6, no system Qt installation required.

## Features

- **Static linking**: Produces standalone executables with no Qt6 DLL dependencies
- **Self-contained**: Qt 6.8.3 source bundled in submodule — no external Qt installation needed
- **15 Qt modules**: Core, Gui, Widgets, Network, Concurrent, Xml, Sql, OpenGL, PrintSupport, Svg, WebChannel, Charts, Multimedia, SpatialAudio, and more
- **Three-layer binding**: Zig wrappers → C ABI wrappers → Qt6 C++ (static libs)
- **Zig-native build**: Uses `zig build` for everything, including C++ compilation
- **Pre-generated bindings**: No Clang needed to build — bindings are checked in
- **Pure Zig generator**: Binding generator written in Zig (replaces Go-based tool)
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
├── libqt6.zig    # Root Zig module (re-exports all)
├── src/          # Per-class files (.cpp, .h, .hxx, .zig)
│   ├── qtlibc.h              # Base C structures (libqt_string, etc.)
│   ├── libqwidget.cpp/.h/.hxx/.zig   # Per-class bindings
│   ├── qt_static_plugins.cpp # Platform plugin registration
│   └── ubsan_stubs.c         # UBSAN runtime stubs
└── include/      # Module aggregators
    ├── libqtc.zig      # Type aliases
    └── libqt6c.h       # Aggregate C header
```

## Qt Modules

### Generated Bindings (760 classes across 13 modules)

**QtCore**
- QCoreApplication, QObject, QTimer, QDir, QEventLoop, QKeySequence, QItemSelectionModel, QIODeviceBase, QNamespace, QObjectDefs, QCoreEvent

**QtGui**
- QGuiApplication, QColor, QFont, QIcon, QImage, QPaintDevice, QPalette, QPixmap, QPointingDevice, QInputDevice, QEventPoint
- Events: QEvent (and 30+ event subclasses including QKeyEvent, QMouseEvent, QPaintEvent, etc.)
- Validators: QValidator, QIntValidator, QDoubleValidator, QRegularExpressionValidator

**QtWidgets**
- Application: QApplication
- Buttons: QAbstractButton, QPushButton, QCheckBox
- Input: QLineEdit, QComboBox, QSpinBox, QDoubleSpinBox, QAbstractSpinBox
- Text: QTextEdit, QTextCursor, QTextDocument, QTextFormat, QTextOption
- Layout: QBoxLayout, QHBoxLayout, QVBoxLayout, QGridLayout, QLayout
- Containers: QFrame, QScrollArea, QSplitter, QStackedWidget, QTabWidget
- Dialogs: QDialog, QFileDialog, QMessageBox
- Views: QAbstractItemView, QAbstractItemDelegate, QAbstractScrollArea, QTableWidget
- Display: QLabel, QProgressBar, QSizePolicy
- Actions: QAction, QWidgetAction

| Module | Bindings | Description |
|--------|----------|-------------|
| **QtCore + QtGui + QtWidgets** | 495 | Core, GUI, and widget classes |
| **QtCharts** | 57 | Charts (line, bar, pie, scatter, area, box plot, candlestick) |
| **QtNetwork** | 49 | Networking (HTTP, TCP/UDP sockets, DNS, cookies) |
| **QtOpenGL** | 47 | OpenGL wrappers, paint engine, shader programs |
| **QtMultimedia** | 37 | Audio/video playback, capture, devices |
| **QtConcurrent** | 18 | Thread pool and parallel execution |
| **QtSql** | 17 | SQL database abstraction and models |
| **QtPrintSupport** | 12 | Printing, print dialogs, print preview |
| **QtSvg + QtSvgWidgets** | 10 | SVG rendering and widget integration |
| **QtSpatialAudio** | 8 | 3D spatial audio (Resonance Audio engine) |
| **QtWebChannel** | 5 | Qt/web bridge communication |
| **QtXml** | 5 | XML DOM parser |

### Static Libraries Linked

| Library | Description |
|---------|-------------|
| Qt6Core, Qt6Gui, Qt6Widgets | Core Qt modules |
| Qt6Network, Qt6Concurrent | Networking and threading |
| Qt6Xml, Qt6Sql, Qt6OpenGL | Data and graphics |
| Qt6PrintSupport, Qt6Svg, Qt6SvgWidgets | Output and SVG |
| Qt6WebChannel, Qt6Charts | Communication and charting |
| Qt6Multimedia, Qt6SpatialAudio | Media and audio |
| Qt6FFmpegMediaPlugin | FFmpeg media backend |
| qwindows | Windows platform plugin |
| qtHarfbuzz, qtFreetype | Text shaping and font rendering |
| qtLibpng, qtLibjpeg | Image codecs |
| qtZlib, qtPcre2, qtDoubleConversion | Compression, regex, float conversion |

## Build Options

| Option | Default | Description |
|--------|---------|-------------|
| `qt6-build-path` | `qt6-zig-build` | Path to qt6-zig-build directory |
| `optimize` | `Debug` (→`ReleaseFast`) | Optimization level |

## Binding Generator

The `gen/` directory contains a Zig-based binding generator that parses Qt headers via Clang AST JSON output and generates the four-file-per-class binding set (.h, .cpp, .hxx, .zig).

```bash
# Build the generator
zig build gen

# Run it to regenerate bindings (requires clang or zig cc)
./zig-out/bin/qt6zig-gen
```

The generator processes all Qt modules defined in `gen/modules.zig` and outputs to `binding/src/`. On Windows, it uses `gen/zig-cc.bat` as a clang wrapper (sets `ZIG_GLOBAL_CACHE_DIR` and uses MSVC target for C++ headers).

### Generator Architecture

```
Qt Headers (qt6-zig-build/Qt/6.8.3/include/)
    ↓ clang -ast-dump=json
JSON AST
    ↓ parse (gen/ast_parser.zig)
Intermediate Representation (gen/intermediate.zig)
    ↓ transform passes (gen/transforms/*.zig)
Filtered/Transformed IR
    ↓ emit (gen/emit/*.zig)
binding/src/*.{h,cpp,hxx,zig}
```

## Platform Support

Currently targets **Windows x86_64** only. The build uses:
- Zig/Clang compiler toolchain (no MSVC or MinGW required)
- DirectWrite for font rendering
- Direct3D 11/12 for RHI backend
- Windows UI Automation for accessibility
- OpenGL (desktop, dynamic GL)
- Windows Media Foundation for multimedia
- FFmpeg 7.0.1 bundled for media codecs

## License

MIT License - see [LICENSE](LICENSE) for details.

Qt is licensed under LGPL-3.0 / GPL-2.0 / GPL-3.0 or commercial license.
See [Qt Licensing](https://www.qt.io/licensing/) for details.

## Related Projects

- [qt6-zig-build](https://github.com/sugarme/qt6-zig-build) — Build Qt6 from source with Zig
- [libqt6zig](https://github.com/nicholasgasior/libqt6zig) — Original Qt6 Zig bindings (Go-based generator)
