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

1. **Discovers C++ sources**: Scans `binding/src/` for `.cpp` files
2. **Compiles each as static library**: One `.lib` per class for incremental builds
3. **Runs translate_c**: Converts `binding/include/libqt6c.h` → Zig FFI module
4. **Creates Zig modules**:
   - `qt6zig` → `binding/include/libqt6.zig` (root re-export module)
   - `qt6c` → translate_c output (raw C FFI)
   - `qtzig` → `binding/include/libqtc.zig` (type aliases)
5. **Links everything**: Binding libs + Qt6 static libs + Windows system libs

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
6. **transforms/**: 9 transformation passes on the IR:
   - `child_classes`: Lift nested classes to top-level
   - `enums`: Resolve enum scopes
   - `structs`: Resolve template parameters in containers
   - `optional`: Expand optional parameters into overloads
   - `overloads`: Rename colliding methods
   - `ctors`: Sort constructors (QWidget* parent first)
   - `redundant`: Merge duplicate enums
   - `typedefs`: Apply typedef resolution
   - `blocklist`: Filter unsafe/unsupported types
7. **emit/**: 4 code emitters:
   - `cabi_header`: `.h` files
   - `cabi_impl`: `.cpp` files
   - `cabi_virtual`: `.hxx` files
   - `zig_wrapper`: `.zig` files

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
6. Update `binding/include/libqt6.zig` with new re-exports

## Windows System Libraries

Qt6 on Windows requires linking against:
- Graphics: `gdi32`, `d3d11`, `dxgi`, `dwrite`, `d2d1`, `dwmapi`
- System: `kernel32`, `user32`, `shell32`, `advapi32`
- COM: `ole32`, `oleaut32`, `uuid`
- UI: `uxtheme`, `imm32`, `comdlg32`
- Network: `ws2_32`, `crypt32`
- Other: `winmm`, `setupapi`, `winspool`, `version`, `shlwapi`, `userenv`, `netapi32`
