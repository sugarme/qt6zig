const std = @import("std");
const ir = @import("../intermediate.zig");
const config = @import("../config.zig");

/// Types that are too complex or unsupported for binding generation.
/// If a method's parameter or return type matches any of these, the
/// method is excluded.
const blocked_types = [_][]const u8{
    "QGenericArgument",
    "QGenericReturnArgument",
    "QMetaObject::Connection",
    "va_list",
    "QFunctionPointer",
    "QJsonValueConstRef",
    "QJsonValueRef",
    "char16_t",
    "char32_t",
    "wchar_t",
    "std::chrono",
    "std::function",
    "std::initializer_list",
    "std::optional",
    "std::nullptr_t",
    "std::string",
    "std::string_view",
    "std::variant",
    "std::vector",
};

/// Class name patterns that are always blocked from binding generation.
const blocked_class_suffixes = [_][]const u8{
    "Private",
    "PrivateShared",
};

/// Check if a parameter type is allowed for binding.
fn allowType(p: ir.CppParameter, is_return_type: bool) bool {
    _ = is_return_type;

    const ptype = p.parameter_type;

    // Check for blocked types (exact match or prefix match for template types)
    for (&blocked_types) |blocked| {
        if (std.mem.eql(u8, ptype, blocked)) {
            return false;
        }
        // Also block if it appears inside a container
        if (std.mem.indexOf(u8, ptype, blocked) != null) {
            return false;
        }
    }

    // Block function pointers (types containing "(*)")
    if (std.mem.indexOf(u8, ptype, "(*)") != null) {
        return false;
    }

    // Block rvalue references (&&)
    if (std.mem.indexOf(u8, ptype, "&&") != null) {
        return false;
    }

    // Block array types (types containing "[")
    if (std.mem.indexOf(u8, ptype, "[") != null) {
        return false;
    }

    return true;
}

/// Check if a class is allowed for binding generation.
fn allowClass(class_name: []const u8) bool {
    // Block classes ending with "Private" or "PrivateShared"
    for (&blocked_class_suffixes) |suffix| {
        if (std.mem.endsWith(u8, class_name, suffix)) {
            return false;
        }
    }

    // Block classes containing "Private::"
    if (std.mem.indexOf(u8, class_name, "Private::") != null) {
        return false;
    }

    return true;
}

/// Check if virtual methods are allowed for a class.
fn allowVirtualForClass(class_name: []const u8) bool {
    // QFutureWatcherBase has pure virtual method returning unprojectable template
    if (std.mem.eql(u8, class_name, "QFutureWatcherBase")) {
        return false;
    }
    return true;
}

/// Methods that are always blocked regardless of class.
const globally_blocked_methods = [_][]const u8{
    "metaObject",
    "qt_metacast",
    "qt_metacall",
    "clone",
    "qt_check_for_QGADGET_macro",
};

/// Check if all parameters and return type of a method are allowed.
fn methodAllowed(class_name: []const u8, m: ir.CppMethod) bool {
    _ = class_name;
    // Block globally problematic methods
    for (&globally_blocked_methods) |blocked| {
        if (std.mem.eql(u8, m.method_name, blocked)) return false;
    }
    // Block methods containing QGADGET in name
    if (std.mem.indexOf(u8, m.method_name, "QGADGET") != null) return false;
    if (!allowType(m.return_type, true)) {
        return false;
    }
    for (m.parameters) |p| {
        if (!allowType(p, false)) {
            return false;
        }
    }
    return true;
}

/// Filters out methods using too-complex parameter types, and entire classes
/// that may be disallowed.
///
/// Mirrors Go's `astTransformBlocklist`.
pub fn transform(parsed: *ir.CppParsedHeader) void {
    // Arena is intentionally leaked -- filtered slices are stored back
    // into parsed.* and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    // --- Filter whole classes ---
    var kept_classes: std.ArrayList(ir.CppClass) = .empty;
    for (parsed.classes) |c| {
        if (!allowClass(c.class_name)) {
            continue;
        }

        var class = c;

        // If abstract but we don't allow virtual for this class, remove ctors
        if (class.abstract and !allowVirtualForClass(class.class_name)) {
            class.ctors = &.{};
        }

        // --- Filter constructors ---
        var kept_ctors: std.ArrayList(ir.CppMethod) = .empty;
        for (class.ctors) |ctor| {
            if (methodAllowed(class.class_name, ctor)) {
                kept_ctors.append(alloc, ctor) catch {};
            }
        }
        class.ctors = kept_ctors.toOwnedSlice(alloc) catch class.ctors;

        // --- Filter methods ---
        var kept_methods: std.ArrayList(ir.CppMethod) = .empty;
        for (class.methods) |method| {
            if (methodAllowed(class.class_name, method)) {
                kept_methods.append(alloc, method) catch {};
            }
        }
        class.methods = kept_methods.toOwnedSlice(alloc) catch class.methods;

        kept_classes.append(alloc, class) catch {};
    }

    parsed.classes = kept_classes.toOwnedSlice(alloc) catch parsed.classes;
}
