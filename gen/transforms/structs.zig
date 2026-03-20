const std = @import("std");
const ir = @import("../intermediate.zig");
const state_mod = @import("../state.zig");

/// Qt container type prefixes for template parameter resolution.
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

// -------------------------------------------------------------------------
// Scratch buffer for building scoped names used only as lookup keys.
// -------------------------------------------------------------------------
const ScopeBuf = struct {
    threadlocal var buf: [1024]u8 = undefined;
};

fn scopedKey(scope: []const u8, name: []const u8) ?[]const u8 {
    const total = scope.len + 2 + name.len;
    if (total > ScopeBuf.buf.len) return null;
    @memcpy(ScopeBuf.buf[0..scope.len], scope);
    ScopeBuf.buf[scope.len] = ':';
    ScopeBuf.buf[scope.len + 1] = ':';
    @memcpy(ScopeBuf.buf[scope.len + 2 ..][0..name.len], name);
    return ScopeBuf.buf[0..total];
}

/// Look up a scoped class name and return the persistent class_name from the
/// state's registry.
fn lookupClassPersistent(key: []const u8, state: *const state_mod.GlobalState) ?[]const u8 {
    if (state.getClass(key)) |result| {
        return result.class.class_name;
    }
    return null;
}

fn lookupTypedefPersistent(key: []const u8, state: *const state_mod.GlobalState) ?[]const u8 {
    if (state.getTypedef(key)) |result| {
        return result.typedef.alias;
    }
    return null;
}

/// Resolve a struct/class type name, including inner classes and types nested
/// inside Qt containers.  Mirrors the Go `resolveStructType` function.
///
/// Returns a persistent string (either the input or from the state registry).
fn resolveStructType(
    alloc: std.mem.Allocator,
    type_name: []const u8,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) []const u8 {
    // Already fully qualified with Qt:: prefix
    if (std.mem.startsWith(u8, type_name, "Qt::")) {
        return type_name;
    }

    // Compute local type name (last component after ::)
    const local_type_name = blk: {
        if (std.mem.lastIndexOf(u8, class_name, "::")) |idx| {
            break :blk class_name[idx + 2 ..];
        }
        break :blk class_name;
    };

    // Check containers
    for (&qt_containers) |container| {
        if (std.mem.startsWith(u8, type_name, container)) {
            const open_pos = std.mem.indexOf(u8, type_name, "<") orelse continue;
            const close_pos = std.mem.lastIndexOf(u8, type_name, ">") orelse continue;
            const inner_type = type_name[open_pos + 1 .. close_pos];

            // Check if inner type matches local type name (self-reference)
            if (std.mem.eql(u8, inner_type, local_type_name)) {
                return std.fmt.allocPrint(alloc, "{s}{s}>", .{ container, class_name }) catch type_name;
            }

            // Try class scope
            if (scopedKey(class_name, inner_type)) |key| {
                if (lookupClassPersistent(key, state)) |found| {
                    return std.fmt.allocPrint(alloc, "{s}{s}>", .{ container, found }) catch type_name;
                }
            }
            if (namespace.len > 0) {
                if (scopedKey(namespace, inner_type)) |key| {
                    if (lookupClassPersistent(key, state)) |found| {
                        return std.fmt.allocPrint(alloc, "{s}{s}>", .{ container, found }) catch type_name;
                    }
                }
            }

            if (scopedKey(class_name, inner_type)) |key| {
                if (lookupTypedefPersistent(key, state)) |found| {
                    return std.fmt.allocPrint(alloc, "{s}{s}>", .{ container, found }) catch type_name;
                }
            }
            if (namespace.len > 0) {
                if (scopedKey(namespace, inner_type)) |key| {
                    if (lookupTypedefPersistent(key, state)) |found| {
                        return std.fmt.allocPrint(alloc, "{s}{s}>", .{ container, found }) catch type_name;
                    }
                }
            }
        }
    }

    // Already-qualified names
    if (std.mem.indexOf(u8, type_name, "::") != null) {
        if (state.isKnownClass(type_name) or state.isKnownTypedef(type_name)) {
            return type_name;
        }
    }

    // Try class scope
    if (scopedKey(class_name, type_name)) |key| {
        if (lookupClassPersistent(key, state)) |found| return found;
        if (lookupTypedefPersistent(key, state)) |found| return found;
    }

    // Try namespace scope
    if (namespace.len > 0) {
        if (scopedKey(namespace, type_name)) |key| {
            if (lookupClassPersistent(key, state)) |found| return found;
            if (lookupTypedefPersistent(key, state)) |found| return found;
        }
    }

    return type_name;
}

/// Resolve struct/class types in a method's return type and parameters.
fn resolveMethodStructTypes(
    alloc: std.mem.Allocator,
    method: *ir.CppMethod,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) void {
    const local_type_name = blk: {
        if (std.mem.lastIndexOf(u8, class_name, "::")) |idx| {
            break :blk class_name[idx + 2 ..];
        }
        break :blk class_name;
    };

    // --- Return type: resolve containers ---
    for (&qt_containers) |container| {
        if (std.mem.startsWith(u8, method.return_type.parameter_type, container)) {
            const open_pos = std.mem.indexOf(u8, method.return_type.parameter_type, "<") orelse continue;
            const close_pos = std.mem.lastIndexOf(u8, method.return_type.parameter_type, ">") orelse continue;
            const inner_type = method.return_type.parameter_type[open_pos + 1 .. close_pos];

            if (std.mem.eql(u8, inner_type, local_type_name)) {
                method.return_type.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                    container, class_name,
                }) catch method.return_type.parameter_type;
                continue;
            }

            if (state.isKnownClass(inner_type)) {
                method.return_type.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                    container, inner_type,
                }) catch method.return_type.parameter_type;
            }

            // Try class scope
            if (scopedKey(class_name, inner_type)) |key| {
                if (lookupClassPersistent(key, state)) |found| {
                    method.return_type.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                        container, found,
                    }) catch method.return_type.parameter_type;
                }
            }
            if (namespace.len > 0) {
                if (scopedKey(namespace, inner_type)) |key| {
                    if (lookupClassPersistent(key, state)) |found| {
                        method.return_type.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                            container, found,
                        }) catch method.return_type.parameter_type;
                    }
                }
            }
        }
    }

    // --- Parameters: resolve containers and direct types ---
    for (method.parameters) |*param| {
        // Check self-reference
        if (std.mem.eql(u8, param.parameter_type, local_type_name)) {
            param.parameter_type = class_name;
            continue;
        }

        for (&qt_containers) |container| {
            if (std.mem.startsWith(u8, param.parameter_type, container)) {
                const open_pos = std.mem.indexOf(u8, param.parameter_type, "<") orelse continue;
                const close_pos = std.mem.lastIndexOf(u8, param.parameter_type, ">") orelse continue;
                const inner_type = param.parameter_type[open_pos + 1 .. close_pos];

                if (scopedKey(class_name, inner_type)) |key| {
                    if (lookupClassPersistent(key, state)) |found| {
                        param.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                            container, found,
                        }) catch param.parameter_type;
                    }
                }
                if (namespace.len > 0) {
                    if (scopedKey(namespace, inner_type)) |key| {
                        if (lookupClassPersistent(key, state)) |found| {
                            param.parameter_type = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                                container, found,
                            }) catch param.parameter_type;
                        }
                    }
                }
            }
        }
    }

    // Also handle direct struct types via resolveStructType
    method.return_type.parameter_type = resolveStructType(
        alloc,
        method.return_type.parameter_type,
        class_name,
        namespace,
        state,
    );
    if (method.return_type.qt_cpp_original_type) |orig| {
        orig.parameter_type = resolveStructType(
            alloc,
            orig.parameter_type,
            class_name,
            namespace,
            state,
        );
    }

    for (method.parameters) |*param| {
        param.parameter_type = resolveStructType(
            alloc,
            param.parameter_type,
            class_name,
            namespace,
            state,
        );
        if (param.qt_cpp_original_type) |orig| {
            orig.parameter_type = resolveStructType(
                alloc,
                orig.parameter_type,
                class_name,
                namespace,
                state,
            );
        }
    }
}

/// Resolve struct types in all class constructors and methods.
pub fn transform(parsed: *ir.CppParsedHeader, state: *state_mod.GlobalState) void {
    // Arena is intentionally leaked -- rebuilt type strings are stored back
    // into method structs and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    for (parsed.classes) |*class| {
        var namespace: []const u8 = "";
        if (std.mem.indexOf(u8, class.class_name, "::")) |sep| {
            namespace = class.class_name[0..sep];
        }

        for (class.ctors) |*ctor| {
            resolveMethodStructTypes(alloc, ctor, class.class_name, namespace, state);
        }
        for (class.methods) |*method| {
            resolveMethodStructTypes(alloc, method, class.class_name, namespace, state);
        }
    }
}
