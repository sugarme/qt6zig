# qt6zig

Pure Zig bindings for Qt6. Build standalone desktop applications with Zig and Qt6, no system Qt installation required.

## Features

- **Static linking**: Produces standalone executables with no Qt6 DLL dependencies
- **Three-layer binding**: Zig wrappers → C ABI wrappers → Qt6 C++ (static libs)
- **Zig-native build**: Uses `zig build` for everything, including C++ compilation
- **Pre-generated bindings**: No Clang needed to build - bindings are checked in
- **Pure Zig generator**: Binding generator written in Zig (replaces Go-based tool)

## Quick Start

### Prerequisites

1. [Zig 0.14+](https://ziglang.org/download/)
2. Build [qt6-zig-build](https://github.com/sugarme/qt6-zig-build) to get static Qt6 libraries

### Clone and Build

```bash
git clone --recursive https://github.com/nicholasgasior/qt6zig.git
cd qt6zig

# Build qt6-zig-build first (one-time, takes a while)
cd qt6-zig-build
zig build
cd ..

# Build and run an example
zig build example-hello_window
./zig-out/bin/hello_window
```

### Examples

**hello_window** - Minimal Qt window:
```zig
const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qwidget = qt6.qwidget;

pub fn main() !void {
    const app = qapplication.New(argc, argv);
    defer qapplication.Delete(app);

    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Hello from Zig!");
    qwidget.Resize(window, 400, 300);
    qwidget.Show(window);

    _ = qapplication.Exec();
}
```

**hello_button** - Button with click callback:
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
├── src/          # Per-class files (.cpp, .h, .hxx, .zig)
│   ├── qtlibc.h        # Base C structures (libqt_string, etc.)
│   ├── libqwidget.cpp  # C ABI implementation
│   ├── libqwidget.h    # C ABI declarations
│   ├── libqwidget.hxx  # Virtual callback header
│   └── libqwidget.zig  # Zig wrapper
└── include/      # Module aggregators
    ├── libqt6.zig      # Root Zig module
    ├── libqtc.zig      # Type aliases
    └── libqt6c.h       # Aggregate C header
```

## Qt Modules

Currently supported: **QtCore**, **QtGui**, **QtWidgets**

Available classes:
- QApplication, QCoreApplication, QGuiApplication
- QWidget, QPushButton, QAbstractButton
- QWidgetAction, QEvent, QTimerEvent

## Binding Generator

The `gen/` directory contains a Zig-based binding generator that replaces the Go-based `genbindings` tool from libqt6zig. It parses Qt headers via Clang AST JSON output and generates the four-file-per-class binding set.

```bash
# Build the generator
zig build gen

# Run it to regenerate bindings
./zig-out/bin/qt6zig-gen --out-dir binding
```

## License

MIT License - see [LICENSE](LICENSE) for details.

## Related Projects

- [libqt6zig](https://github.com/nicholasgasior/libqt6zig) - Original Qt6 Zig bindings (Go-based generator)
- [qt6-zig-build](https://github.com/sugarme/qt6-zig-build) - Build Qt6 from source with Zig
