const std = @import("std");
const ir = @import("../intermediate.zig");
const state_mod = @import("../state.zig");
const config = @import("../config.zig");
const util = @import("../util.zig");
const compat = @import("../compat.zig");

const Allocator = std.mem.Allocator;
const ArrayList = std.ArrayList;
const CppParameter = ir.CppParameter;
const CppMethod = ir.CppMethod;
const CppClass = ir.CppClass;
const CppEnum = ir.CppEnum;
const CppParsedHeader = ir.CppParsedHeader;
const GlobalState = state_mod.GlobalState;

// ===========================================================================
// Public entry point
// ===========================================================================

/// Emit a C ABI header (.h) file with function declarations for the given
/// parsed header. Returns the generated source as a slice owned by `allocator`.
pub fn emit(allocator: Allocator, parsed: *const CppParsedHeader, state: *const GlobalState) ![]const u8 {
    var arena = std.heap.ArenaAllocator.init(allocator);
    defer arena.deinit();
    const tmp = arena.allocator();

    var buf: ArrayList(u8) = .empty;
    var w = compat.arrayListWriter(allocator, &buf);

    const src_filename = std.fs.path.basename(parsed.filename);

    // Include guard
    const include_guard = try makeIncludeGuard(tmp, src_filename, "C_LIB");

    try w.print(
        \\#pragma once
        \\#ifndef {s}
        \\#define {s}
        \\
        \\#include <stdbool.h>
        \\#include <stddef.h>
        \\
        \\#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
        \\
        \\#include "qtlibc.h"
        \\
        \\#ifdef __cplusplus
        \\extern "C" {{
        \\#endif
        \\
        \\
    , .{ include_guard, include_guard });

    // QT_VERSION_CHECK macro for qobject.h
    if (std.mem.eql(u8, src_filename, "qobject.h")) {
        try w.writeAll(
            \\// Based on the macro from Qt (LGPLv3), see https://www.qt.io/qt-licensing/
            \\// Macro is trivial and used here under fair use
            \\// Usage does not imply derivation
            \\#ifndef QT_VERSION_CHECK
            \\#define QT_VERSION_CHECK(major, minor, patch) ((major<<16)|(minor<<8)|(patch))
            \\#endif
            \\
            \\
        );
    }

    // Collect referenced types
    const found_types = try getReferencedTypes(tmp, parsed, state);

    // C++ forward declarations (inner classes as typedefs)
    try w.writeAll("#ifdef __cplusplus\n");
    for (found_types) |ft| {
        if (cabiPreventStructDeclaration(ft)) continue;
        if (std.mem.indexOf(u8, ft, "::") != null) {
            const cabi_name = try cabiClassName(tmp, ft);
            if (config.allowInnerClassDef(ft)) {
                try w.print("typedef {s} {s};\n", .{ ft, cabi_name });
            } else {
                try w.print("#if defined(WORKAROUND_INNER_CLASS_DEFINITION_{s})\n", .{cabi_name});
                try w.print("typedef {s} {s};\n", .{ ft, cabi_name });
                try w.writeAll("#endif\n");
            }
        }
    }

    // C opaque struct typedefs
    try w.writeAll("#else\n");

    // OpenGL typedefs for specific headers
    if (std.mem.eql(u8, src_filename, "qopenglextrafunctions.h") or
        std.mem.startsWith(u8, src_filename, "qopenglfunctions"))
    {
        try w.writeAll("typedef char GLchar;\n");
        try w.writeAll("typedef float GLclampf;\n");
    }

    var seen_types = std.StringHashMap(void).init(tmp);
    for (found_types) |ft| {
        if (cabiPreventStructDeclaration(ft)) continue;

        const f_type = try cabiClassName(tmp, ft);

        if (isCType(f_type)) continue;
        if (seen_types.contains(f_type)) continue;
        try seen_types.put(f_type, {});

        try w.print("typedef struct {s} {s};\n", .{ f_type, f_type });
    }
    try w.writeAll("#endif\n\n");

    // Per-class declarations
    for (parsed.classes) |c| {
        const method_prefix = try cabiClassName(tmp, c.class_name);
        const virtual_methods = try getVirtualMethods(tmp, &c, state);
        const protected_methods = try getProtectedMethods(tmp, &c);
        const virtual_eligible = config.allowVirtualForClass(c.class_name) and virtual_methods.len > 0;
        var seen_class_methods = std.StringHashMap(bool).init(tmp);

        // Merge protected methods into virtual list for tracking
        var all_virtual: ArrayList(CppMethod) = .empty;
        try all_virtual.appendSlice(tmp, virtual_methods);
        if (virtual_eligible and virtual_methods.len > 0) {
            try all_virtual.appendSlice(tmp, protected_methods);
        }

        // Track protected/pure virtual method names
        var seen_virtuals_map = std.StringHashMap(void).init(tmp);
        for (c.methods) |m| {
            if (!m.is_protected) continue;
            try seen_virtuals_map.put(m.method_name, {});
        }
        if (virtual_eligible) {
            for (c.methods) |m| {
                if (!m.is_protected and !m.is_pure_virtual) continue;
                _ = try seen_virtuals_map.getOrPut(m.method_name);
            }
        }

        // Constructors
        for (c.ctors, 0..) |ctor, i| {
            const suffix = try util.maybeSuffix(tmp, i);
            const params = try emitParametersCabi(tmp, ctor, "", state);
            try w.print("{s}* {s}_new{s}({s});\n", .{ method_prefix, method_prefix, suffix, params });
        }

        // Copy/Move assign
        if (c.has_trivial_copy_assign) {
            try w.print("void {s}_CopyAssign({s}* self, {s}* other);\n", .{ method_prefix, method_prefix, method_prefix });
        }
        if (c.has_trivial_move_assign) {
            try w.print("void {s}_MoveAssign({s}* self, {s}* other);\n", .{ method_prefix, method_prefix, method_prefix });
        }

        // Regular methods
        for (c.methods) |m| {
            if (m.is_protected and !m.is_virtual) continue;

            const safe_name = try safeMethodName(tmp, m);
            const full_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, safe_name });

            if (isSkippedMethod(full_name)) continue;
            if ((m.is_protected or m.is_private) and !virtual_eligible) continue;

            if (seen_class_methods.get(full_name)) |_| {
                continue;
            }
            try seen_class_methods.put(full_name, true);
            if ((m.is_virtual or m.is_protected) and all_virtual.items.len > 0 and virtual_eligible) {
                try seen_class_methods.put(full_name, false);
            }

            const return_cabi = try renderTypeCabi(tmp, m.return_type, false, state);
            const maybe_const = if (m.is_const) "const " else "";
            const self_type = try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, method_prefix });
            const params = try emitParametersCabi(tmp, m, self_type, state);

            try w.print("{s} {s}_{s}({s});\n", .{ return_cabi, method_prefix, safe_name, params });

            // Signal connection
            if (m.is_signal) {
                if (!isNoQtConnect(method_prefix) and !isSkipQtConnect(method_prefix, m.method_name)) {
                    try w.print("{s} {s}_Connect_{s}({s}* self, intptr_t slot);\n", .{
                        return_cabi, method_prefix, safe_name, method_prefix,
                    });
                }
            }
        }

        // Virtual method declarations
        for (all_virtual.items) |m| {
            if (!virtual_eligible) continue;

            const safe_name = try safeMethodName(tmp, m);
            const full_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, safe_name });

            if (isSkippedMethod(full_name)) continue;

            var base_method = false;
            if (seen_class_methods.get(full_name)) |seen| {
                if (seen) continue;
                try seen_class_methods.put(full_name, true);
                base_method = true;
            } else {
                try seen_class_methods.put(full_name, true);
            }

            const maybe_const = if (m.is_const) "const " else "";
            const return_cabi = try renderTypeCabi(tmp, m.return_type, false, state);
            const self_type = try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, method_prefix });
            const params = try emitParametersCabi(tmp, m, self_type, state);

            if (!base_method) {
                try w.print("{s} {s}_{s}({s});\n", .{ return_cabi, method_prefix, safe_name, params });
            }

            // OnMethod and QBaseMethod
            try w.print("void {s}_On{s}({s}{s}* self, intptr_t slot);\n", .{ method_prefix, safe_name, maybe_const, method_prefix });
            try w.print("{s} {s}_QBase{s}({s});\n", .{ return_cabi, method_prefix, safe_name, params });
        }

        // Private signals
        for (c.private_signals) |m| {
            const safe_name = try safeMethodName(tmp, m);
            const return_cabi = try renderTypeCabi(tmp, m.return_type, false, state);
            try w.print("{s} {s}_Connect_{s}({s}* self, intptr_t slot);\n", .{
                return_cabi, method_prefix, safe_name, method_prefix,
            });
        }

        // Destructor
        if (c.can_delete and (c.methods.len > 0 or virtual_methods.len > 0 or c.ctors.len > 0)) {
            try w.print("void {s}_Delete({s}* self);\n", .{ method_prefix, method_prefix });
        }

        try w.writeByte('\n');
    }

    // Footer
    try w.writeAll(
        \\#ifdef __cplusplus
        \\} /* extern C */
        \\#endif
        \\
        \\#endif
        \\
    );

    return buf.items;
}

// ===========================================================================
// Shared helpers (also used by other emitter modules)
// ===========================================================================

/// Render a CppParameter as a C ABI type string.
pub fn renderTypeCabi(alloc: Allocator, p: CppParameter, is_slot: bool, state: *const GlobalState) ![]const u8 {
    const pt = p.parameter_type;

    // QString / QByteArray / QAnyStringView
    if (std.mem.eql(u8, pt, "QString") or std.mem.eql(u8, pt, "QByteArray") or
        std.mem.eql(u8, pt, "QAnyStringView"))
    {
        if (is_slot) return "const char*";
        return "libqt_string";
    }

    // QList<T>
    if (isQListOf(pt)) {
        return "libqt_list";
    }

    // QSet<T>
    if (isQSetOf(pt)) {
        return "libqt_list";
    }

    // QMap / QHash
    if (isQMapOf(pt)) {
        if (p.pointer) return "libqt_map*";
        return "libqt_map";
    }

    // QPair
    if (isQPairOf(pt)) {
        return "libqt_pair";
    }

    // Qt class types
    if (state.isKnownClass(pt)) {
        const cabi_name = try cabiClassName(alloc, pt);
        const const_prefix: []const u8 = if (p.is_const) "const " else "";
        if (p.pointer or p.by_ref) {
            if (p.pointer_count > 1) {
                return try std.fmt.allocPrint(alloc, "{s}{s}{s}", .{
                    const_prefix,
                    cabi_name,
                    try repeatChar(alloc, '*', @intCast(p.pointer_count)),
                });
            }
            return try std.fmt.allocPrint(alloc, "{s}{s}*", .{ const_prefix, cabi_name });
        }
        // Even by-value returns become heap-allocated pointers in CABI
        return try std.fmt.allocPrint(alloc, "{s}*", .{cabi_name});
    }

    // Primitive type mapping
    var ret = mapPrimitiveType(pt);

    // Enum / flag types
    if (state.isKnownEnum(pt)) {
        if (state.getEnum(pt)) |e| {
            ret = e.enum_type_cabi;
        }
    }

    // Const qualifier
    if (p.is_const and !std.mem.startsWith(u8, ret, "const ")) {
        ret = try std.fmt.allocPrint(alloc, "const {s}", .{ret});
    }

    // Pointer / reference
    if (p.pointer) {
        const stars = try repeatChar(alloc, '*', @intCast(p.pointer_count));
        ret = try std.fmt.allocPrint(alloc, "{s}{s}", .{ ret, stars });
    } else if (p.by_ref) {
        ret = try std.fmt.allocPrint(alloc, "{s}*", .{ret});
    }

    return ret;
}

/// Build the C ABI parameter list string for a method.
pub fn emitParametersCabi(alloc: Allocator, m: CppMethod, self_type: []const u8, state: *const GlobalState) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    // Add self parameter unless static (and not protected)
    if (!(m.is_static and !m.is_protected) and self_type.len > 0) {
        try parts.append(alloc, try std.fmt.allocPrint(alloc, "{s} self", .{self_type}));
    }

    for (m.parameters) |p| {
        const p_type = try renderTypeCabi(alloc, p, false, state);
        const maybe_const = if (p.is_const and !std.mem.startsWith(u8, p_type, "const ")) "const " else "";
        const name = cParameterName(p);
        try parts.append(alloc, try std.fmt.allocPrint(alloc, "{s}{s} {s}", .{ maybe_const, p_type, name }));
    }

    return try joinSlice(alloc, parts.items, ", ");
}

/// Return the CABI class name for a Qt C++ class.
/// Strips "Qt::" prefix and replaces "::" with "__".
pub fn cabiClassName(alloc: Allocator, class_name: []const u8) ![]const u8 {
    const name = util.trimPrefix(class_name, "Qt::");
    return try util.replaceAll(alloc, name, "::", "__");
}

/// Return the CABI enum name (short form).
pub fn cabiEnumName(alloc: Allocator, enum_name: []const u8) ![]const u8 {
    // Take the last segment after ::
    if (std.mem.lastIndexOf(u8, enum_name, "::")) |idx| {
        const short = enum_name[idx + 2 ..];
        return try util.replaceAll(alloc, short, "::", "__");
    }
    return try util.replaceAll(alloc, enum_name, "::", "__");
}

/// Map a C++ parameter name, escaping Zig reserved words.
pub fn cParameterName(p: CppParameter) []const u8 {
    if (isZigReservedWord(p.parameter_name)) {
        // In the Go code this appends "_val" but since we can't allocate here,
        // return the raw name - the caller should handle allocation if needed
        return p.parameter_name;
    }
    return p.parameter_name;
}

/// Produce a safe method name for use in the C ABI.
pub fn safeMethodName(alloc: Allocator, m: CppMethod) ![]const u8 {
    // If override_method_name is set, use method_name (which was already renamed)
    _ = alloc;
    return m.method_name;
}

/// Check if a word is reserved in Zig bindings.
pub fn isZigReservedWord(s: []const u8) bool {
    if (s.len == 0) return false;

    // Block Zig arbitrary width integers like i8, u16
    if (s.len < 3 and (s[0] == 'i' or s[0] == 'u')) {
        if (s.len > 1) {
            var all_digits = true;
            for (s[1..]) |c| {
                if (!std.ascii.isDigit(c)) {
                    all_digits = false;
                    break;
                }
            }
            if (all_digits) return true;
        }
    }

    const reserved = [_][]const u8{
        "default", "const", "fn",     "var",       "type",    "len",
        "new",     "copy",  "import", "error",     "string",  "map",
        "int",     "select", "pub",   "ret",       "suspend", "opaque",
        "align",   "self",  "allocator", "URLs",
    };
    for (reserved) |r| {
        if (std.mem.eql(u8, s, r)) return true;
    }
    return false;
}

// ===========================================================================
// Internal helpers
// ===========================================================================

fn makeIncludeGuard(alloc: Allocator, filename: []const u8, suffix: []const u8) ![]const u8 {
    var buf: ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(alloc, &buf);
    for (filename) |c| {
        if (c == '.' or c == '-' or c == '/') {
            try writer.writeByte('_');
        } else {
            try writer.writeByte(std.ascii.toUpper(c));
        }
    }
    try writer.print("_{s}", .{suffix});
    return buf.items;
}

fn repeatChar(alloc: Allocator, ch: u8, count: usize) ![]const u8 {
    const buf = try alloc.alloc(u8, count);
    @memset(buf, ch);
    return buf;
}

fn joinSlice(alloc: Allocator, items: []const []const u8, sep: []const u8) ![]const u8 {
    if (items.len == 0) return "";
    var buf: ArrayList(u8) = .empty;
    for (items, 0..) |item, i| {
        if (i > 0) try buf.appendSlice(alloc, sep);
        try buf.appendSlice(alloc, item);
    }
    return buf.items;
}

fn getReferencedTypes(alloc: Allocator, src: *const CppParsedHeader, state: *const GlobalState) ![][]const u8 {
    var found = std.StringHashMap(void).init(alloc);

    for (src.classes) |c| {
        try found.put(c.class_name, {});

        for (c.ctors) |ctor| {
            for (ctor.parameters) |p| {
                try maybeAddType(alloc, &found, p, state);
            }
        }
        for (c.methods) |m| {
            for (m.parameters) |p| {
                try maybeAddType(alloc, &found, p, state);
            }
            try maybeAddType(alloc, &found, m.return_type, state);
        }

        for (c.direct_inherits) |base| {
            if (state.isKnownClass(base)) {
                try found.put(base, {});
            }
        }
    }

    // Remove typedefs
    for (src.typedefs) |td| {
        _ = found.fetchRemove(td.alias);
    }

    // Convert to sorted list, filtering disallowed classes
    var result: ArrayList([]const u8) = .empty;
    var iter = found.iterator();
    while (iter.next()) |entry| {
        if (!config.allowClass(entry.key_ptr.*)) continue;
        try result.append(alloc, entry.key_ptr.*);
    }

    // Sort
    std.mem.sort([]const u8, result.items, {}, struct {
        fn lessThan(_: void, a: []const u8, b: []const u8) bool {
            return std.mem.order(u8, a, b) == .lt;
        }
    }.lessThan);

    return result.items;
}

fn maybeAddType(_: Allocator, found: *std.StringHashMap(void), p: CppParameter, state: *const GlobalState) !void {
    if (state.isKnownClass(p.parameter_type)) {
        try found.put(p.parameter_type, {});
    }
}

fn cabiPreventStructDeclaration(class_name: []const u8) bool {
    if (!config.allowStructDef(class_name)) return true;

    const prevented = [_][]const u8{
        "QList", "QString", "QSet", "QMap", "QHash", "QPair", "QVector", "QByteArray", "QSpan",
    };
    for (prevented) |p| {
        if (std.mem.eql(u8, class_name, p)) return true;
    }
    return false;
}

fn isCType(name: []const u8) bool {
    const c_types = [_][]const u8{
        "char",         "double",        "float",         "int",
        "long long",    "uint16_t",      "unsigned char",  "unsigned int",
    };
    for (c_types) |ct| {
        if (std.mem.eql(u8, name, ct)) return true;
    }
    return false;
}

fn mapPrimitiveType(pt: []const u8) []const u8 {
    if (std.mem.eql(u8, pt, "GLvoid")) return "void";
    if (std.mem.eql(u8, pt, "uchar") or std.mem.eql(u8, pt, "GLboolean")) return "unsigned char";
    if (std.mem.eql(u8, pt, "GLbyte")) return "signed char";
    if (std.mem.eql(u8, pt, "uint")) return "unsigned int";
    if (std.mem.eql(u8, pt, "ulong")) return "unsigned long";
    if (std.mem.eql(u8, pt, "qint8")) return "int8_t";
    if (std.mem.eql(u8, pt, "quint8") or std.mem.eql(u8, pt, "GLubyte")) return "uint8_t";
    if (std.mem.eql(u8, pt, "qint16") or std.mem.eql(u8, pt, "short") or std.mem.eql(u8, pt, "GLshort")) return "int16_t";
    if (std.mem.eql(u8, pt, "quint16") or std.mem.eql(u8, pt, "ushort") or std.mem.eql(u8, pt, "unsigned short") or std.mem.eql(u8, pt, "GLushort")) return "uint16_t";
    if (std.mem.eql(u8, pt, "qint32") or std.mem.eql(u8, pt, "GLint") or std.mem.eql(u8, pt, "GLsizei")) return "int32_t";
    if (std.mem.eql(u8, pt, "quint32") or std.mem.eql(u8, pt, "GLbitfield") or std.mem.eql(u8, pt, "GLenum") or std.mem.eql(u8, pt, "GLuint")) return "uint32_t";
    if (std.mem.eql(u8, pt, "qlonglong") or std.mem.eql(u8, pt, "qint64") or std.mem.eql(u8, pt, "GLint64") or std.mem.eql(u8, pt, "GLintptr") or std.mem.eql(u8, pt, "GLsizeiptr")) return "int64_t";
    if (std.mem.eql(u8, pt, "qulonglong") or std.mem.eql(u8, pt, "quint64") or std.mem.eql(u8, pt, "GLuint64")) return "uint64_t";
    if (std.mem.eql(u8, pt, "GLfloat")) return "float";
    if (std.mem.eql(u8, pt, "qfloat16")) return "_Float16";
    if (std.mem.eql(u8, pt, "const double") or std.mem.eql(u8, pt, "qreal") or std.mem.eql(u8, pt, "GLdouble")) return "double";
    if (std.mem.eql(u8, pt, "qintptr") or std.mem.eql(u8, pt, "QIntegerForSizeof<void *>::Signed")) return "intptr_t";
    if (std.mem.eql(u8, pt, "quintptr") or std.mem.eql(u8, pt, "uintptr") or std.mem.eql(u8, pt, "QIntegerForSizeof<void *>::Unsigned")) return "uintptr_t";
    if (std.mem.eql(u8, pt, "qsizetype") or std.mem.eql(u8, pt, "qptrdiff") or std.mem.eql(u8, pt, "QIntegerForSizeof<std::size_t>::Signed")) return "ptrdiff_t";
    return pt;
}

fn isQListOf(pt: []const u8) bool {
    return std.mem.startsWith(u8, pt, "QList<") or
        std.mem.startsWith(u8, pt, "QVector<") or
        std.mem.startsWith(u8, pt, "QSpan<");
}

/// Check if type is QList/QStringList/QVector (public for use by cabi_impl)
pub fn isQListType(pt: []const u8) bool {
    return isQListOf(pt) or std.mem.eql(u8, pt, "QStringList");
}

fn isQSetOf(pt: []const u8) bool {
    return std.mem.startsWith(u8, pt, "QSet<");
}

fn isQMapOf(pt: []const u8) bool {
    return std.mem.startsWith(u8, pt, "QMap<") or
        std.mem.startsWith(u8, pt, "QHash<") or
        std.mem.startsWith(u8, pt, "QMultiMap<") or
        std.mem.startsWith(u8, pt, "QMultiHash<");
}

/// Check if type is QMap/QHash (public for use by cabi_impl)
pub fn isQMapType(pt: []const u8) bool {
    return isQMapOf(pt);
}

fn isQPairOf(pt: []const u8) bool {
    return std.mem.startsWith(u8, pt, "QPair<") or
        std.mem.startsWith(u8, pt, "std::pair<");
}

pub fn isNoQtConnect(method_prefix: []const u8) bool {
    const blocked = [_][]const u8{
        "KNSCore__EngineBase",
        "KParts__NavigationExtension",
        "QAudioDecoder",
        "QBluetoothPermission",
        "QCPAbstractPlottable",
        "QCPAxis",
        "QCPPolarAxisAngular",
        "QCPPolarAxisRadial",
        "QCPPolarGraph",
        "QCalendarPermission",
        "QCameraPermission",
        "QCompleter",
        "QContactsPermission",
        "QLocationPermission",
        "QMicrophonePermission",
        "QNativeInterface__QEGLContext",
        "QPrintDialog",
        "QsciScintillaBase",
    };
    for (blocked) |b| {
        if (std.mem.eql(u8, method_prefix, b)) return true;
    }
    return false;
}

pub fn isSkipQtConnect(method_prefix: []const u8, method_name: []const u8) bool {
    if (std.mem.eql(u8, method_prefix, "KCoreDirLister") and std.mem.eql(u8, method_name, "refreshItems"))
        return true;
    return false;
}

pub fn isSkippedMethod(full_name: []const u8) bool {
    const skipped = [_][]const u8{
        "KEncodingFileDialog_Tr",
        "KEncodingFileDialog_Tr2",
        "KEncodingFileDialog_Tr3",
        "KIO_FileCopy2",
        "KIO_FileMove2",
        "KTextEditor::DocumentCursor_ToCursor2",
        "KTextEditor::MovingCursor_ToCursor2",
        "KTextEditor::MovingRange_ToRange2",
        "KTextEditor_QHash",
        "KXmlGuiWindow_VirtualHook",
        "QHostAddress_IsInSubnet2",
    };
    for (skipped) |s| {
        if (std.mem.eql(u8, full_name, s)) return true;
    }
    return false;
}

fn getVirtualMethods(alloc: Allocator, c: *const CppClass, state: *const GlobalState) ![]CppMethod {
    _ = state;
    var result: ArrayList(CppMethod) = .empty;
    for (c.methods) |m| {
        if (m.is_virtual) {
            try result.append(alloc, m);
        }
    }
    return result.items;
}

fn getProtectedMethods(alloc: Allocator, c: *const CppClass) ![]CppMethod {
    var result: ArrayList(CppMethod) = .empty;
    for (c.methods) |m| {
        if (m.is_protected and !m.is_virtual) {
            try result.append(alloc, m);
        }
    }
    return result.items;
}
