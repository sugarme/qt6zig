const std = @import("std");
const ir = @import("../intermediate.zig");
const state_mod = @import("../state.zig");

/// Qt container type prefixes used when checking for enums inside
/// container template parameters.
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

// Thread-local scratch buffer for building scoped names (e.g. "Foo::Bar").
// The result is only used as a lookup key -- the actual string returned
// to callers comes from the state's persistent storage.
const ScopeBuf = struct {
    threadlocal var buf: [1024]u8 = undefined;
};

/// Build "scope::name" in the scratch buffer.  Returns null if it would
/// exceed the buffer.  The returned slice is only valid until the next call.
fn scopedName(scope: []const u8, name: []const u8) ?[]const u8 {
    const total = scope.len + 2 + name.len;
    if (total > ScopeBuf.buf.len) return null;
    @memcpy(ScopeBuf.buf[0..scope.len], scope);
    ScopeBuf.buf[scope.len] = ':';
    ScopeBuf.buf[scope.len + 1] = ':';
    @memcpy(ScopeBuf.buf[scope.len + 2 ..][0..name.len], name);
    return ScopeBuf.buf[0..total];
}

/// Look up a scoped enum name and, if found, return the *persistent* enum
/// name from the state's registry (not the scratch buffer).
fn lookupEnumPersistent(key: []const u8, state: *const state_mod.GlobalState) ?[]const u8 {
    if (state.getEnum(key)) |result| {
        return result.enum_.enum_name;
    }
    return null;
}

/// Attempt to resolve an unqualified enum name to its fully-qualified form.
///
/// Resolution order mirrors the Go code:
///   1. Current class scope  (ClassName::EnumName)
///   2. Parent class scopes  (via direct_inherits)
///   3. Current namespace    (Namespace::EnumName)
///   4. Included classes     (IncludedClass::EnumName)
fn resolveEnumType(
    enum_name: []const u8,
    current_class: []const u8,
    current_namespace: []const u8,
    state: *const state_mod.GlobalState,
) []const u8 {
    // If the enum is not known at all, return as-is
    if (!state.isKnownEnum(enum_name)) {
        return enum_name;
    }

    // 1. Try current class scope
    if (current_class.len > 0) {
        if (scopedName(current_class, enum_name)) |key| {
            if (lookupEnumPersistent(key, state)) |name| {
                return name;
            }
        }

        // 2. Try parent class scopes
        if (state.getClass(current_class)) |class_info| {
            for (class_info.class.direct_inherits) |parent_name| {
                if (scopedName(parent_name, enum_name)) |key| {
                    if (lookupEnumPersistent(key, state)) |name| {
                        return name;
                    }
                }
            }
        }
    }

    // 3. Try current namespace scope
    if (current_namespace.len > 0) {
        if (scopedName(current_namespace, enum_name)) |key| {
            if (lookupEnumPersistent(key, state)) |name| {
                return name;
            }
        }
    }

    // 4. Try included classes
    if (current_class.len > 0) {
        if (state.getClass(current_class)) |class_info| {
            for (class_info.class.included_classes) |included_class| {
                if (scopedName(included_class, enum_name)) |key| {
                    if (lookupEnumPersistent(key, state)) |name| {
                        return name;
                    }
                }
            }
            for (class_info.class.direct_inherits) |inherit| {
                if (scopedName(inherit, enum_name)) |key| {
                    if (lookupEnumPersistent(key, state)) |name| {
                        return name;
                    }
                }
            }
        }
    }

    return enum_name;
}

/// Resolve enum types in a method's return type and parameters.
fn resolveMethodEnumTypes(
    alloc: std.mem.Allocator,
    method: *ir.CppMethod,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) void {
    // --- Return type ---
    if (state.isKnownEnum(method.return_type.parameter_type)) {
        method.return_type.parameter_type = resolveEnumType(
            method.return_type.parameter_type,
            class_name,
            namespace,
            state,
        );
    } else {
        resolveContainerEnum(alloc, &method.return_type, class_name, namespace, state);
    }

    // --- Parameters ---
    for (method.parameters) |*param| {
        if (state.isKnownEnum(param.parameter_type)) {
            param.parameter_type = resolveEnumType(
                param.parameter_type,
                class_name,
                namespace,
                state,
            );
        } else {
            resolveContainerEnum(alloc, param, class_name, namespace, state);
        }
    }
}

/// If `param` is a container type (e.g. QList<EnumName>), resolve the inner
/// enum type and rebuild the type string.
fn resolveContainerEnum(
    alloc: std.mem.Allocator,
    param: *ir.CppParameter,
    class_name: []const u8,
    namespace: []const u8,
    state: *const state_mod.GlobalState,
) void {
    for (&qt_containers) |container| {
        if (std.mem.startsWith(u8, param.parameter_type, container)) {
            const open_pos = std.mem.indexOf(u8, param.parameter_type, "<") orelse break;
            const close_pos = std.mem.lastIndexOf(u8, param.parameter_type, ">") orelse break;
            const inner_type = param.parameter_type[open_pos + 1 .. close_pos];
            if (state.isKnownEnum(inner_type)) {
                const resolved = resolveEnumType(inner_type, class_name, namespace, state);
                // Rebuild: "Container<resolved>"  -- allocate persistent string
                const rebuilt = std.fmt.allocPrint(alloc, "{s}{s}>", .{
                    container, resolved,
                }) catch return;
                param.parameter_type = rebuilt;
            }
            break;
        }
    }
}

/// Resolve enum types in all class constructors and methods.
pub fn transform(parsed: *ir.CppParsedHeader, state: *state_mod.GlobalState) void {
    // Arena is intentionally leaked -- rebuilt type strings are stored back
    // into method structs and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    for (parsed.classes) |*class| {
        // Extract namespace from class name (e.g. "Foo::Bar" -> "Foo")
        var namespace: []const u8 = "";
        if (std.mem.indexOf(u8, class.class_name, "::")) |sep| {
            namespace = class.class_name[0..sep];
        }

        for (class.ctors) |*ctor| {
            resolveMethodEnumTypes(alloc, ctor, class.class_name, namespace, state);
        }
        for (class.methods) |*method| {
            resolveMethodEnumTypes(alloc, method, class.class_name, namespace, state);
        }
    }
}
