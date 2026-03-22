# Development Notes

## Architecture Overview

qt6zig uses a three-layer binding architecture:

```
User Zig Code → Zig Wrappers → C ABI Wrappers (.cpp) → Qt6 C++ (static libs)
```

### Layer 1: Qt6 Static Libraries (qt6-zig-build)

The `qt6-zig-build` submodule compiles Qt6 6.8.3 from source into static `.lib` files using Zig's C++ compiler. This eliminates runtime Qt6 dependencies.

Qt source is bundled at `qt6-zig-build/Qt/6.8.3/` (no junctions/symlinks).

Static libraries produced (25 total):
- **Qt modules**: Qt6Core, Qt6Gui, Qt6Widgets, Qt6Network, Qt6Concurrent, Qt6Xml, Qt6Sql, Qt6OpenGL, Qt6PrintSupport, Qt6Svg, Qt6SvgWidgets, Qt6WebChannel, Qt6Charts, Qt6Multimedia, Qt6SpatialAudio, Qt6FFmpegMediaPlugin
- **Platform**: qwindows (Windows platform plugin)
- **3rd party**: qtHarfbuzz, qtFreetype, qtLibpng, qtLibjpeg, qtPcre2, qtZlib, qtDoubleConversion, qtBootstrap
- **Tools**: moc.exe, rcc.exe, uic.exe, syncqt.exe

### Layer 2: C ABI Wrappers (binding/src/*.cpp)

For each Qt class, four files are generated:

- **`.h`** - C function declarations (`extern "C"`)
- **`.cpp`** - C function implementations that call Qt C++ methods
- **`.hxx`** - Virtual subclass definitions for callback support
- **`.zig`** - Zig wrapper struct with idiomatic API

The C ABI layer handles:
- Type conversion: `QString` ↔ `libqt_string`, `QList<T>` ↔ `libqt_list`, `QMap<K,V>` ↔ `libqt_map`
- Memory management: allocation/deallocation of Qt objects
- Virtual dispatch: `Virtual<ClassName>` subclass stores mutable function pointers
- Signal connection: exposes Qt signals as callback registration
- Enum qualification: resolves short enum names to fully qualified C++ names

### Layer 3: Zig Wrappers (binding/src/*.zig)

Zig wrappers provide:
- Type-safe constructors (`New`, `New2`, etc.)
- Method wrappers that convert Zig types to/from C ABI types
- Virtual method override registration (`OnPaintEvent`, etc.)
- Enum definitions as Zig tagged constants

## Build System

`build.zig` does the following:

1. **Discovers Qt include paths**: Scans `qt6-zig-build/Qt/6.8.3/include/` for 16 Qt module directories
2. **Discovers C++ sources**: Scans `binding/src/` (including subdirectories) for `.cpp` and `.c` files
3. **Compiles each as static library**: One `.lib` per class for incremental builds
4. **Runs translate_c**: Converts `binding/include/libqt6c.h` → Zig FFI module
5. **Creates Zig modules**: qt6zig, qt6c, qtzig
6. **Links everything**: Binding libs + Qt6 static libs (25) + Windows system libs (45+)
7. **Sets Windows GUI subsystem**: `exe.subsystem = .windows`

## Binding Generator (gen/)

The generator is a Zig port of the Go-based `genbindings` tool from libqt6zig.

### Pipeline

```
Qt Headers (qt6-zig-build/Qt/6.8.3/include/)
    ↓ zig cc -target x86_64-windows-msvc -Xclang -ast-dump=json
Raw JSON AST (~500-800 MB per header)
    ↓ streaming filter (gen/clang.zig)
Filtered JSON (~100KB-5MB, only target header nodes)
    ↓ parse (gen/ast_parser.zig)
Intermediate Representation (gen/intermediate.zig)
    ↓ transform passes (gen/transforms/*.zig)
Filtered/Transformed IR
    ↓ emit (gen/emit/*.zig)
binding/src/*.{h,cpp,hxx,zig}
```

### Key Components

1. **clang.zig**: Runs clang via `gen/run-clang.bat` wrapper, writes AST to temp file, streams through it extracting only nodes from the target header. Caches filtered results in `cachedir/`.
2. **ast_parser.zig**: Parses filtered JSON AST into intermediate representation (IR)
3. **intermediate.zig**: IR types (CppClass, CppMethod, CppParameter, CppEnum, etc.)
4. **state.zig**: Global type registries (known classes, typedefs, enums)
5. **config.zig**: Allowlists, blocklists for classes/methods/types
6. **modules.zig**: 13 Qt module definitions with per-module header filters
7. **transforms/**: 9 transformation passes including:
   - `overloads.zig`: Renames ALL methods to safe names (operators → OperatorPlusAssign etc.), resolves collisions with numeric suffixes
   - `blocklist.zig`: Filters blocked methods (metaObject, qt_metacall, etc.) using both renamed and original names, calls config.isBlockedType for parameter types
   - `enums.zig`, `structs.zig`, `typedefs.zig`, `child_classes.zig`, `optional.zig`, `ctors.zig`, `redundant.zig`
8. **emit/**: 4 code emitters:
   - `cabi_header.zig` → .h (C ABI declarations, const-aware class pointer types)
   - `cabi_impl.zig` → .cpp (C ABI implementations, QList/QMap return conversion, enum qualification, `#include <type_traits>`)
   - `cabi_virtual.zig` → .hxx (virtual callbacks with mutable callback storage, const setters, QString/QByteArray/QList/QMap/enum type conversions)
   - `zig_wrapper.zig` → .zig (idiomatic Zig wrappers)
9. **compat.zig**: Compatibility wrapper for Zig 0.16-dev API changes

### Streaming AST Filter

The generator processes Qt headers that produce 500-800 MB of clang JSON AST each. Instead of loading the entire JSON into memory (which would require 2-4 GB for DOM parsing), the streaming filter:

1. Runs `zig cc` via batch wrapper that sets `ZIG_GLOBAL_CACHE_DIR` and uses MSVC target for C++ headers
2. Redirects stdout to a temp file
3. Reads the file using `page_allocator` (virtual memory, OS can page to disk)
4. Scans for the `"inner"` array, tracks brace depth to find element boundaries
5. For each element, checks the `"loc"` field to determine if it's from the target header
6. Keeps only matching elements (~100KB-5MB out of ~500-800MB)

### Module Configuration

13 Qt modules are configured in `gen/modules.zig`:

| Module | Path | Dirs | Notes |
|--------|------|------|-------|
| Core/Gui/Widgets | `""` | QtCore, QtGui, QtWidgets | Main module, blocks cbor/vulkan headers |
| CBOR | `"cbor"` | QtCore (cbor only) | C++20 |
| Network | `"network"` | QtNetwork | Blocks SSL headers |
| Concurrent | `"concurrent"` | QtConcurrent | |
| XML | `"xml"` | QtXml | |
| SQL | `"sql"` | QtSql | |
| OpenGL | `"opengl"` | QtOpenGL, QtOpenGLWidgets | Blocks versioned function files |
| PrintSupport | `"printsupport"` | QtPrintSupport | |
| SVG | `"svg"` | QtSvg, QtSvgWidgets | |
| WebChannel | `"webchannel"` | QtWebChannel | |
| Charts | `"charts"` | QtCharts | |
| Multimedia | `"multimedia"` | QtMultimedia | |
| SpatialAudio | `"spatialaudio"` | QtSpatialAudio | |

### Generator Emitter Fixes Applied

| Fix | File | Description |
|-----|------|-------------|
| Enum qualification | cabi_impl.zig | Resolve short enum names via state tracker |
| Signal params | cabi_impl.zig | Use param1/param2 not sigval1/sigval2 |
| Const class pointers | cabi_header.zig | Preserve const on class pointer return types |
| Protected methods | cabi_impl.zig | Skip in C ABI (handled via virtual callbacks) |
| QList return | cabi_impl.zig | Convert QList<T> → libqt_list with per-element copy |
| QList/QMap params | cabi_impl.zig | Pass default-constructed container |
| QMap return | cabi_impl.zig | Convert QMap<K,V> → libqt_map stub |
| Mutable callbacks | cabi_virtual.zig | Callback vars and setters marked mutable/const |
| Virtual QString | cabi_virtual.zig | toUtf8/fromUtf8 conversion in callbacks |
| Virtual QByteArray | cabi_virtual.zig | QByteArray() constructor for return |
| Virtual enum cast | cabi_virtual.zig | static_cast for enum returns |
| Virtual class deref | cabi_virtual.zig | Dereference pointer for value type returns |
| Virtual QList/QMap | cabi_virtual.zig | Default-construct for returns, size/nullptr for params |
| Operator naming | overloads.zig | Handle operator+=, operator== etc. with space insertion |
| Always rename | overloads.zig | Rename all methods to safe names, not just collisions |
| Method blocklist | blocklist.zig | Check original AND renamed method names |
| Config integration | blocklist.zig | Call config.isBlockedType in allowType |
| GL functions blocked | modules.zig | Block qopenglfunctions_* header files |
| Iterator types blocked | config.zig | Block const_iterator, iterator type names |
| _GUID/type_info blocked | config.zig | Block MSVC built-in types from includes |

## Issues Fixed & Solutions

### 1. Platform Plugin Initialization ("no Qt platform plugin could be initialized")

**Problem**: Qt6 static builds require explicit registration of the platform plugin.

**Solution** (`binding/src/qt_rhi_stubs.cpp`):
- Extracted raw `.qtmetadata` section bytes from `qwindows.lib`
- Created `QPluginMetaData` wrapper skipping 12-byte magic header
- `qRegisterStaticPluginFunction()` called inside `QApplication_new()`

### 2. OpenGL/RHI Stubs

**Problem**: qwindows.lib and Qt6Gui.lib reference OpenGL symbols (`QOpenGLStaticContext::create`, `QRhiGles2` constructor) not defined in the static libs.

**Solution** (`binding/src/qt_rhi_stubs.cpp`):
- Provide GCC-mangled no-op stubs for `QOpenGLStaticContext::create`, `::opengl32`, and `QRhiGles2` constructor
- D3D11 is the primary rendering backend; OpenGL stubs prevent link errors without affecting functionality

### 3. Zig 0.16-dev API Migration

Key changes: `ArrayList.init()` → `.empty`, `fs.cwd()` → `Io.Dir.cwd()`, `dir.close()` → `dir.close(io)`, `process.Child.init()` → `process.spawn(io, .{})`, etc. See `gen/compat.zig` for ArrayList writer compatibility.

### 4. FFmpeg Hash Mismatch

**Problem**: Zig package hash format changed between versions, causing `hash mismatch` errors for ffmpeg dependencies (libmp3lame, libogg).

**Solution**: Updated hashes in `qt6-zig-build/ffmpeg/build.zig.zon` and transitive dependency `.zon` files from named format to raw format (`N-V-__8AA...`).

## Windows System Libraries

Qt6 on Windows requires 45+ system libraries:
- Graphics: `gdi32`, `d3d9`, `d3d11`, `d3d12`, `dxgi`, `dxguid`, `dwrite`, `d2d1`, `dwmapi`, `opengl32`
- System: `kernel32`, `user32`, `shell32`, `advapi32`, `ntdll`, `shcore`
- COM: `ole32`, `oleaut32`, `uuid`, `propsys`
- UI: `uxtheme`, `imm32`, `comdlg32`
- Network: `ws2_32`, `crypt32`, `dnsapi`, `iphlpapi`, `secur32`, `winhttp`
- Security: `authz`, `bcrypt`
- Multimedia: `mf`, `mfplat`, `mfreadwrite`, `mfuuid`, `strmiids`, `dxva2`, `evr`, `wmcodecdspuuid`
- Synchronization: `api-ms-win-core-synch-l1-2-0`
- Other: `winmm`, `setupapi`, `winspool`, `version`, `shlwapi`, `userenv`, `netapi32`, `wtsapi32`, `mpr`
