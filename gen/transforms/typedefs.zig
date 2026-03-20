const std = @import("std");
const ir = @import("../intermediate.zig");
const state_mod = @import("../state.zig");

/// Qt container type prefixes.
const qt_containers = [_][]const u8{
    "QHash<",
    "QList<",
    "QMap<",
    "QPair<",
    "QQueue<",
    "QSet<",
    "QStack<",
    "QVector<",
};

/// Recursively apply typedef resolution to a single parameter.
/// Mirrors Go's `applyTypedefs`.
fn applyTypedefs(
    alloc: std.mem.Allocator,
    p: ir.CppParameter,
    class_name: []const u8,
    state: *const state_mod.GlobalState,
) ir.CppParameter {
    var result = p;

    const namespace: []const u8 = blk: {
        if (std.mem.indexOf(u8, class_name, "::")) |sep| {
            break :blk class_name[0..sep];
        }
        break :blk "Qt";
    };

    // Handle QtAudio:: -> QAudio:: prefix replacement
    if (std.mem.startsWith(u8, result.parameter_type, "QtAudio::")) {
        const replaced = std.fmt.allocPrint(alloc, "QAudio::{s}", .{
            result.parameter_type["QtAudio::".len..],
        }) catch result.parameter_type;
        result.parameter_type = replaced;
    }

    // Check class-scoped enum
    {
        const scoped = std.fmt.allocPrint(alloc, "{s}::{s}", .{
            class_name, result.parameter_type,
        }) catch "";
        if (scoped.len > 0) {
            if (state.isKnownEnum(scoped)) {
                result.parameter_type = resolveEnumType(
                    result.parameter_type,
                    class_name,
                    namespace,
                    state,
                );
            }
        }
    }

    // Check if it's an enum with "Flag" suffix
    if (std.mem.indexOf(u8, result.parameter_type, "::") == null) {
        const flag_name = std.fmt.allocPrint(alloc, "{s}Flag", .{
            result.parameter_type,
        }) catch "";
        if (flag_name.len > 0) {
            if (state.getEnum(flag_name)) |ft| {
                // Trim "Flag" suffix from the enum name
                const en = ft.enum_.enum_name;
                if (std.mem.endsWith(u8, en, "Flag")) {
                    result.parameter_type = en[0 .. en.len - "Flag".len];
                }
            }
        }
    }

    // Iteratively resolve typedefs
    {
        // First check class-scoped typedef
        const class_scoped = std.fmt.allocPrint(alloc, "{s}::{s}", .{
            class_name, result.parameter_type,
        }) catch "";
        if (class_scoped.len > 0) {
            if (state.getTypedef(class_scoped)) |tdd| {
                if (tdd.typedef.alias.len > 0) {
                    result.applyTypedef(alloc, tdd.typedef.underlying_type) catch {};
                    result.parameter_type = tdd.typedef.alias;
                    if (result.qt_cpp_original_type) |orig| {
                        if (std.mem.indexOf(u8, orig.parameter_type, "::") == null) {
                            orig.parameter_type = tdd.typedef.underlying_type.parameter_type;
                        }
                    }
                } else {
                    result.applyTypedef(alloc, tdd.typedef.underlying_type) catch {};
                }
            }
        }

        // Then iteratively resolve remaining typedefs
        var iterations: usize = 0;
        while (iterations < 32) : (iterations += 1) {
            if (state.getTypedef(result.parameter_type)) |td| {
                result.applyTypedef(alloc, td.typedef.underlying_type) catch {};
            } else {
                break;
            }
        }
    }

    // Final class-scoped typedef check for alias
    {
        const class_scoped = std.fmt.allocPrint(alloc, "{s}::{s}", .{
            class_name, result.parameter_type,
        }) catch "";
        if (class_scoped.len > 0) {
            if (state.getTypedef(class_scoped)) |fd| {
                if (fd.typedef.alias.len > 0) {
                    result.parameter_type = fd.typedef.alias;
                }
            }
        }
    }

    // Handle container types (QList, QMap, QPair, QSet)
    if (tryResolveQList(alloc, &result, class_name, namespace, state)) {
        // resolved
    } else if (tryResolveQMap(alloc, &result, class_name, namespace, state)) {
        // resolved
    } else if (tryResolveQPair(alloc, &result, class_name, namespace, state)) {
        // resolved
    } else if (tryResolveQSet(alloc, &result, class_name, namespace, state)) {
        // resolved
    }

    // Final class name resolution
    if (state.getClass(result.parameter_type)) |ctd| {
        result.parameter_type = resolveStructType(
            ctd.class.class_name,
            class_name,
            namespace,
            state,
        );
    }

    return result;
}

/// Try to resolve a QList<T> or QVector<T> or QQueue<T> or QStack<T> typedef.
fn tryResolveQList(
    alloc: std.mem.Allocator,
    p: *ir.CppParameter,
    class_name: []const u8,
    _: []const u8,
    state: *const state_mod.GlobalState,
) bool {
    const prefixes = [_]struct { prefix: []const u8, container: []const u8 }{
        .{ .prefix = "QList<", .container = "QList" },
        .{ .prefix = "QVector<", .container = "QVector" },
        .{ .prefix = "QQueue<", .container = "QQueue" },
        .{ .prefix = "QStack<", .container = "QStack" },
    };

    for (&prefixes) |entry| {
        if (std.mem.startsWith(u8, p.parameter_type, entry.prefix) and
            std.mem.endsWith(u8, p.parameter_type, ">"))
        {
            const inner = p.parameter_type[entry.prefix.len .. p.parameter_type.len - 1];
            const inner_param = ir.CppParameter{ .parameter_type = inner };
            var resolved_inner = applyTypedefs(alloc, inner_param, class_name, state);
            resolved_inner.qt_cpp_original_type = null;

            const resolved_type = resolveStructType(
                resolved_inner.parameter_type,
                class_name,
                "",
                state,
            );
            p.parameter_type = std.fmt.allocPrint(alloc, "{s}<{s}>", .{
                entry.container, resolved_type,
            }) catch return false;

            if (p.qt_cpp_original_type == null) {
                const copy = alloc.create(ir.CppParameter) catch return true;
                copy.* = p.*;
                copy.parameter_type = p.parameter_type;
                p.qt_cpp_original_type = copy;
            } else {
                if (state.isKnownTypedef(p.qt_cpp_original_type.?.parameter_type)) {
                    p.qt_cpp_original_type.?.parameter_type = p.parameter_type;
                }
            }
            return true;
        }
    }
    return false;
}

/// Try to resolve a QMap<K,V> or QHash<K,V> typedef.
fn tryResolveQMap(
    alloc: std.mem.Allocator,
    p: *ir.CppParameter,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) bool {
    const prefixes = [_]struct { prefix: []const u8, container: []const u8 }{
        .{ .prefix = "QMap<", .container = "QMap" },
        .{ .prefix = "QHash<", .container = "QHash" },
    };

    for (&prefixes) |entry| {
        if (std.mem.startsWith(u8, p.parameter_type, entry.prefix) and
            std.mem.endsWith(u8, p.parameter_type, ">"))
        {
            const inner = p.parameter_type[entry.prefix.len .. p.parameter_type.len - 1];
            // Split on ", " to get key and value types
            const comma_pos = std.mem.indexOf(u8, inner, ", ") orelse continue;
            const key_str = inner[0..comma_pos];
            const val_str = inner[comma_pos + 2 ..];

            const key_param = ir.CppParameter{ .parameter_type = key_str };
            const val_param = ir.CppParameter{ .parameter_type = val_str };

            var k2 = applyTypedefs(alloc, key_param, class_name, state);
            k2.qt_cpp_original_type = null;
            var v2 = applyTypedefs(alloc, val_param, class_name, state);
            v2.qt_cpp_original_type = null;

            const rk = resolveStructType(k2.parameter_type, class_name, namespace, state);
            const rv = resolveStructType(v2.parameter_type, class_name, namespace, state);

            p.parameter_type = std.fmt.allocPrint(alloc, "{s}<{s}, {s}>", .{
                entry.container, rk, rv,
            }) catch return false;

            if (p.qt_cpp_original_type == null) {
                const copy = alloc.create(ir.CppParameter) catch return true;
                copy.* = p.*;
                copy.parameter_type = p.parameter_type;
                p.qt_cpp_original_type = copy;
            } else {
                if (state.isKnownTypedef(p.qt_cpp_original_type.?.parameter_type)) {
                    p.qt_cpp_original_type.?.parameter_type = p.parameter_type;
                }
            }
            return true;
        }
    }
    return false;
}

/// Try to resolve a QPair<K,V> or std::pair<K,V> typedef.
fn tryResolveQPair(
    alloc: std.mem.Allocator,
    p: *ir.CppParameter,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) bool {
    const prefixes = [_][]const u8{ "QPair<", "std::pair<" };
    for (&prefixes) |prefix| {
        if (std.mem.startsWith(u8, p.parameter_type, prefix) and
            std.mem.endsWith(u8, p.parameter_type, ">"))
        {
            const inner = p.parameter_type[prefix.len .. p.parameter_type.len - 1];
            const comma_pos = std.mem.indexOf(u8, inner, ", ") orelse continue;
            const key_str = inner[0..comma_pos];
            const val_str = inner[comma_pos + 2 ..];

            const key_param = ir.CppParameter{ .parameter_type = key_str };
            const val_param = ir.CppParameter{ .parameter_type = val_str };

            var k2 = applyTypedefs(alloc, key_param, class_name, state);
            k2.qt_cpp_original_type = null;
            var v2 = applyTypedefs(alloc, val_param, class_name, state);
            v2.qt_cpp_original_type = null;

            const rk = resolveStructType(k2.parameter_type, class_name, namespace, state);
            const rv = resolveStructType(v2.parameter_type, class_name, namespace, state);

            p.parameter_type = std.fmt.allocPrint(alloc, "QPair<{s}, {s}>", .{
                rk, rv,
            }) catch return false;

            if (p.qt_cpp_original_type == null) {
                const copy = alloc.create(ir.CppParameter) catch return true;
                copy.* = p.*;
                copy.parameter_type = p.parameter_type;
                p.qt_cpp_original_type = copy;
            } else {
                if (state.isKnownTypedef(p.qt_cpp_original_type.?.parameter_type)) {
                    p.qt_cpp_original_type.?.parameter_type = p.parameter_type;
                }
            }
            return true;
        }
    }
    return false;
}

/// Try to resolve a QSet<T> typedef.
fn tryResolveQSet(
    alloc: std.mem.Allocator,
    p: *ir.CppParameter,
    class_name: []const u8,
    _: []const u8,
    state: *const state_mod.GlobalState,
) bool {
    if (std.mem.startsWith(u8, p.parameter_type, "QSet<") and
        std.mem.endsWith(u8, p.parameter_type, ">"))
    {
        const inner = p.parameter_type["QSet<".len .. p.parameter_type.len - 1];
        const inner_param = ir.CppParameter{ .parameter_type = inner };
        var resolved_inner = applyTypedefs(alloc, inner_param, class_name, state);
        resolved_inner.qt_cpp_original_type = null;

        const resolved_type = resolveStructType(
            resolved_inner.parameter_type,
            class_name,
            "",
            state,
        );
        p.parameter_type = std.fmt.allocPrint(alloc, "QSet<{s}>", .{
            resolved_type,
        }) catch return false;

        if (p.qt_cpp_original_type == null) {
            const copy = alloc.create(ir.CppParameter) catch return true;
            copy.* = p.*;
            copy.parameter_type = p.parameter_type;
            p.qt_cpp_original_type = copy;
        } else {
            if (state.isKnownTypedef(p.qt_cpp_original_type.?.parameter_type)) {
                p.qt_cpp_original_type.?.parameter_type = p.parameter_type;
            }
        }
        return true;
    }
    return false;
}

/// Apply typedef resolution to all parameters and return type of a method.
/// Also marks methods as linux_only if a resolved type is platform-incompatible.
fn applyTypedefsMethod(
    alloc: std.mem.Allocator,
    m: *ir.CppMethod,
    class_name: []const u8,
    state: *const state_mod.GlobalState,
) void {
    for (m.parameters, 0..) |param, k| {
        const transformed = applyTypedefs(alloc, param, class_name, state);
        m.parameters[k] = transformed;

        if (linuxWindowsCompatCheck(transformed)) {
            m.linux_only = true;
        }
    }

    m.return_type = applyTypedefs(alloc, m.return_type, class_name, state);

    if (linuxWindowsCompatCheck(m.return_type)) {
        m.linux_only = true;
    }
}

/// Check if a resolved parameter is incompatible between Linux/Windows.
/// Mirrors Go's `LinuxWindowsCompatCheck`.
fn linuxWindowsCompatCheck(p: ir.CppParameter) bool {
    const qt_type = if (p.qt_cpp_original_type) |orig| orig else &p;
    if (std.mem.eql(u8, qt_type.parameter_type, "Q_PID")) {
        return true;
    }
    return false;
}

/// Minimal enum type resolution used during typedef pass.
fn resolveEnumType(
    enum_name: []const u8,
    current_class: []const u8,
    current_namespace: []const u8,
    state: *const state_mod.GlobalState,
) []const u8 {
    _ = current_namespace;
    _ = current_class;
    // Simple: if it's already known, return it
    if (state.isKnownEnum(enum_name)) {
        return enum_name;
    }
    return enum_name;
}

/// Minimal struct type resolution used during typedef pass.
/// Returns a persistent string from the state registry, or the input unchanged.
fn resolveStructType(
    type_name: []const u8,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) []const u8 {
    if (std.mem.startsWith(u8, type_name, "Qt::")) {
        return type_name;
    }

    if (std.mem.indexOf(u8, type_name, "::") != null) {
        if (state.isKnownClass(type_name) or state.isKnownTypedef(type_name)) {
            return type_name;
        }
    }

    // Scratch buffer for building scoped lookup keys
    const S = struct {
        threadlocal var buf: [1024]u8 = undefined;
    };

    // Try class scope
    {
        const total = class_name.len + 2 + type_name.len;
        if (total <= S.buf.len) {
            @memcpy(S.buf[0..class_name.len], class_name);
            S.buf[class_name.len] = ':';
            S.buf[class_name.len + 1] = ':';
            @memcpy(S.buf[class_name.len + 2 ..][0..type_name.len], type_name);
            const key = S.buf[0..total];
            if (state.getClass(key)) |res| return res.class.class_name;
            if (state.getTypedef(key)) |res| return res.typedef.alias;
        }
    }

    // Try namespace scope
    if (namespace.len > 0) {
        const total = namespace.len + 2 + type_name.len;
        if (total <= S.buf.len) {
            @memcpy(S.buf[0..namespace.len], namespace);
            S.buf[namespace.len] = ':';
            S.buf[namespace.len + 1] = ':';
            @memcpy(S.buf[namespace.len + 2 ..][0..type_name.len], type_name);
            const key = S.buf[0..total];
            if (state.getClass(key)) |res| return res.class.class_name;
            if (state.getTypedef(key)) |res| return res.typedef.alias;
        }
    }

    return type_name;
}

/// Replace the ParameterType with any known typedef value.
/// Mirrors Go's `astTransformTypedefs`.
pub fn transform(parsed: *ir.CppParsedHeader, state: *state_mod.GlobalState) void {
    // Arena is intentionally leaked -- resolved types are stored back
    // into parsed.* and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    for (parsed.classes) |*c| {
        for (c.methods) |*m| {
            applyTypedefsMethod(alloc, m, c.class_name, state);
        }
        for (c.ctors) |*ctor| {
            applyTypedefsMethod(alloc, ctor, c.class_name, state);
        }
    }

    // Enum underlying types
    for (parsed.enums) |*e| {
        e.underlying_type = applyTypedefs(alloc, e.underlying_type, "", state);
    }
}
