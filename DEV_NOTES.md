# Development Notes

## Architecture Overview

qt6zig uses a three-layer binding architecture:

```
User Zig Code → Zig Wrappers → C ABI Wrappers (.cpp) → Qt6 C++ (static libs)
```

### Layer 1: Qt6 Static Libraries (qt6-zig-build)

The `qt6-zig-build` submodule compiles Qt6 from source into static `.lib` files using Zig's C++ compiler. This eliminates runtime Qt6 dependencies.

Static libraries produced:
- `Qt6Core.lib`, `Qt6Gui.lib`, `Qt6Widgets.lib`
- `qtHarfbuzz.lib`, `qtFreetype.lib`, `qtLibpng.lib`, `qtLibjpeg.lib`
- `qtPcre2.lib`, `qtZlib.lib`, `qtDoubleConversion.lib`
- `qwindows.lib` (Windows platform plugin)

### Layer 2: C ABI Wrappers (binding/src/*.cpp)

For each Qt class, four files are generated:

- **`.h`** - C function declarations (`extern "C"`)
- **`.cpp`** - C function implementations that call Qt C++ methods
- **`.hxx`** - Virtual subclass definitions for callback support
- **`.zig`** - Zig wrapper struct with idiomatic API

The C ABI layer handles:
- Type conversion: `QString` ↔ `libqt_string`, `QList<T>` ↔ `libqt_list`
- Memory management: allocation/deallocation of Qt objects
- Virtual dispatch: `Virtual<ClassName>` subclass stores function pointers
- Signal connection: exposes Qt signals as callback registration

### Layer 3: Zig Wrappers (binding/src/*.zig)

Zig wrappers provide:
- Type-safe constructors (`New`, `New2`, etc.)
- Method wrappers that convert Zig types to/from C ABI types
- Virtual method override registration (`OnPaintEvent`, etc.)
- Enum definitions as Zig tagged constants

## Build System

`build.zig` does the following:

1. **Discovers C++ sources**: Scans `binding/src/` for `.cpp` and `.c` files
2. **Compiles each as static library**: One `.lib` per class for incremental builds (C files get C-only flags, C++ files get `-std=c++17`)
3. **Runs translate_c**: Converts `binding/include/libqt6c.h` → Zig FFI module
4. **Creates Zig modules**:
   - `qt6zig` → `binding/libqt6.zig` (root re-export module)
   - `qt6c` → translate_c output (raw C FFI)
   - `qtzig` → `binding/include/libqtc.zig` (type aliases)
5. **Links everything**: Binding libs + Qt6 static libs + Windows system libs
6. **Sets Windows GUI subsystem**: Executables use `subsystem = .windows` to hide the console window

## Issues Fixed & Solutions

### 1. Platform Plugin Initialization ("no Qt platform plugin could be initialized")

**Problem**: Qt6 static builds require explicit registration of the platform plugin. Without it, `QApplication` fails at startup with a dialog: "This application failed to start because no Qt platform plugin could be initialized."

**Root cause**: When Qt is linked statically, platform plugins (like `qwindows`) are not discovered dynamically. They must be registered via `qRegisterStaticPluginFunction()` before `QApplication` is created.

**Failed approaches**:
- `Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)` - requires a `qt_static_plugin_QWindowsIntegrationPlugin()` function that doesn't exist in `qwindows.lib`
- Static constructor in a separate `.lib` file - dead-stripped by the linker since nothing references the object file from the main code
- Calling `qt_plugin_query_metadata_v2()` directly - causes a segfault due to ABI mismatch between compilation units

**Solution** (`binding/src/libqapplication.cpp`):
- Extracted the raw `.qtmetadata` section bytes (127 bytes) from `qwindows.lib` using `objdump -s -j .qtmetadata`
- Embedded the metadata as a `static const unsigned char[]` array
- Created a `QPluginMetaData` wrapper that returns the embedded data, **skipping the first 12 bytes** ("QTMETADATA !" magic header) since `QStaticPlugin` expects the `Header` struct, not the magic prefix
- Called `qRegisterStaticPluginFunction()` inside `QApplication_new()` before creating the `VirtualQApplication` instance
- This ensures the plugin is always registered, regardless of what the user code does

### 2. UBSAN Undefined Symbols

**Problem**: The Qt6 static libraries from qt6-zig-build were compiled with undefined behavior sanitizer enabled, causing ~20 undefined `__ubsan_handle_*` symbols at link time.

**Solution** (`binding/src/ubsan_stubs.c`):
- Provided no-op stub implementations for all UBSAN handler functions
- Compiled as a C file (not C++) to avoid `-std=c++17` flag issues
- Build system detects `.c` vs `.cpp` files and applies appropriate compiler flags

### 3. Missing Qt RHI Symbols (QBackingStoreRhiSupport)

**Problem**: `qt6-zig-build` didn't compile `qbackingstorerhisupport.cpp` and `qbackingstoredefaultcompositor.cpp`, causing undefined symbols for QBackingStoreRhiSupport and QBackingStoreDefaultCompositor.

**Solution**: Two-pronged fix:
- Added the missing source files to `qt6-zig-build/source_lists_extra.zig` in the `qtgui_common_sources` array
- Added `qt6-zig-build/source_lists_extra.zig` freetype sources wiring in `build.zig` (the array existed but wasn't compiled)
- Provided `extern "C"` stubs using exact mangled symbol names in `binding/src/qt_rhi_stubs.cpp` as fallback

### 4. Missing qwindows Plugin Dependencies

**Problem**: The qwindows platform plugin references many symbols from source files not compiled by qt6-zig-build, including `GpuDescription`, `QWindowsInputContext`, `QWindowsMenu*`, `QWindowsUia*`, and Qt resource init functions.

**Solution**:
- Added `qwindowsopengltester.cpp` to `qt6-zig-build/source_lists_extra.zig` (provides `GpuDescription` with proper `QVersionNumber`, `QByteArray`, `QString` members - cannot be trivially stubbed)
- Added moc-generated files compilation to `qt6-zig-build/build.zig` for qwindows plugin classes (`moc_qwindowsinputcontext.cpp`, `moc_qwindowsmenu.cpp`, `moc_qwindowsgdinativeinterface.cpp`, etc.)
- Fixed moc file include paths (original relative paths `../../../../../../../qtbase/src/...` didn't match our source tree - patched to use direct includes)
- Provided stubs for Qt resource init functions (`qInitResources_cursors`, `qInitResources_openglblacklists`, etc.) and `QPlatformScreen::staticMetaObject`
- Added WinRT stubs (`WindowsCreateStringReference`, `RoGetActivationFactory`)

### 5. Windows System Libraries

**Problem**: Qt6 requires many Windows SDK libraries beyond the obvious ones. Missing libraries caused undefined symbol errors for Windows API functions.

**Solution**: Added the following to `build.zig` link list:
- `api-ms-win-core-synch-l1-2-0` - for `WaitOnAddress`/`WakeByAddress*` (futex operations)
- `shcore` - for `GetDpiForMonitor` (high-DPI support)
- `d3d9` - for `Direct3DCreate9` (GPU detection in `qwindowsopengltester.cpp`)
- `d3d12` - for `D3D12CreateDevice`, `D3D12SerializeVersionedRootSignature`
- `authz` - for `AuthzInitializeResourceManager` etc. (security/access checks)
- `bcrypt` - for cryptographic operations
- `opengl32` - for OpenGL context creation
- `ntdll`, `wtsapi32`, `propsys` - various system APIs

Full Windows library list: `gdi32`, `user32`, `shell32`, `ole32`, `oleaut32`, `uuid`, `advapi32`, `ws2_32`, `winmm`, `imm32`, `dwmapi`, `uxtheme`, `d3d11`, `dxgi`, `dwrite`, `d2d1`, `setupapi`, `comdlg32`, `winspool`, `version`, `shlwapi`, `kernel32`, `userenv`, `netapi32`, `crypt32`, `dxguid`, `api-ms-win-core-synch-l1-2-0`, `authz`, `d3d12`, `propsys`, `ntdll`, `bcrypt`, `wtsapi32`, `opengl32`, `shcore`, `d3d9`

### 6. Zig 0.16-dev API Migration

**Problem**: Zig 0.16.0-dev introduced breaking API changes across the standard library.

**Key changes applied**:
- `std.ArrayList(T).init(allocator)` → `var list: std.ArrayList(T) = .empty;` with allocator passed to each `append(allocator, item)`, `appendSlice(allocator, items)`, `toOwnedSlice(allocator)` call
- `std.StringHashMap(T)` (managed) still uses `.init(allocator)` and `.put(key, val)` (no allocator in put)
- `std.StringHashMapUnmanaged(T)` uses `= .empty` or `{}` and `.put(allocator, key, val)` (allocator in put)
- `std.fs.cwd()` → `std.Io.Dir.cwd()` with `io: std.Io` parameter required for all Dir operations
- `dir.close()` → `dir.close(io)`
- `walker.next()` → `walker.next(io)`
- `dir.makePath()` → `dir.createDirPath()`
- `file.writeAll()` → `file.writeStreamingAll(io, data)`
- `std.process.Child.init()` → `std.process.run(allocator, io, opts)`
- `std.process.argsAlloc()` → removed; use `std.process.Args`
- `ArrayList(u8).writer()` → removed; created `gen/compat.zig` with `ArrayListWriter` compatibility wrapper
- `b.graph.io` provides the `Io` context in build.zig; standalone programs use `std.Io.Threaded.init_single_threaded` then `.io()`

### 7. Windows Fullscreen / Console Window

**Problem**: Qt windows opened fullscreen and a console window appeared behind them.

**Solution**:
- Use `qwidget.SetFixedSize2(window, w, h)` + `qwidget.Move(window, x, y)` instead of `qwidget.Resize()` / `qwidget.SetGeometry()` to set explicit window size and position
- Use `qwidget.ShowNormal(window)` instead of `qwidget.Show(window)` to ensure the window opens in normal (non-maximized) state
- Set `exe.subsystem = .windows` in `build.zig` to use the Windows GUI subsystem instead of console subsystem, hiding the console window

### 8. Zig Module Path Restrictions

**Problem**: `binding/include/libqt6.zig` couldn't import `../src/libqwidget.zig` because Zig's module system doesn't allow imports outside the module root directory.

**Solution**: Moved the root module file from `binding/include/libqt6.zig` to `binding/libqt6.zig` (parent of both `src/` and `include/`) so it can import from both subdirectories using `src/libqwidget.zig`.

## Binding Generator (gen/)

The generator is a Zig port of the Go-based `genbindings` tool from libqt6zig.

### Pipeline

```
Qt Headers (.h) → Clang AST JSON → Parse → IR → Transforms → Emit → Output Files
```

1. **clang.zig**: Runs `clang -ast-dump=json -fsyntax-only` on each header, caches results
2. **ast_parser.zig**: Parses JSON AST into intermediate representation (IR)
3. **intermediate.zig**: IR types (CppClass, CppMethod, CppParameter, CppEnum, etc.)
4. **state.zig**: Global type registries (known classes, typedefs, enums)
5. **config.zig + modules.zig**: Allowlists, blocklists, module definitions
6. **transforms/**: 9 transformation passes on the IR
7. **emit/**: 4 code emitters (cabi_header, cabi_impl, cabi_virtual, zig_wrapper)
8. **compat.zig**: Compatibility wrapper for Zig 0.16-dev `ArrayList(u8).writer()` removal

### Multi-Pass Processing

- **Pass 0**: Gather types from all headers to build global type registry
- **Pass 1**: Parse headers, apply structural transforms, register types
- **Pass 2**: Apply type-dependent transforms, emit code

### Key Design Decisions

- **ArenaAllocator**: All allocations use arena — allocate freely, free at exit
- **Pre-generated bindings checked in**: Users don't need Clang to build
- **Per-class static libraries**: Enables incremental compilation
- **Virtual subclassing**: Polymorphic classes get `Virtual*` wrapper for Zig callbacks

## Adding New Qt Classes

1. Ensure the class header is in the Qt module's include directory
2. Run the generator: `zig build gen && ./zig-out/bin/qt6zig-gen`
3. The generator will create the four binding files
4. Update `binding/include/libqt6c.h` to include the new `.h`
5. Update `binding/include/libqtc.zig` with new type aliases
6. Update `binding/libqt6.zig` with new re-exports

## Windows System Libraries

Qt6 on Windows requires linking against:
- Graphics: `gdi32`, `d3d9`, `d3d11`, `d3d12`, `dxgi`, `dxguid`, `dwrite`, `d2d1`, `dwmapi`, `opengl32`
- System: `kernel32`, `user32`, `shell32`, `advapi32`, `ntdll`, `shcore`
- COM: `ole32`, `oleaut32`, `uuid`, `propsys`
- UI: `uxtheme`, `imm32`, `comdlg32`
- Network: `ws2_32`, `crypt32`
- Security: `authz`, `bcrypt`
- Synchronization: `api-ms-win-core-synch-l1-2-0`
- Other: `winmm`, `setupapi`, `winspool`, `version`, `shlwapi`, `userenv`, `netapi32`, `wtsapi32`
