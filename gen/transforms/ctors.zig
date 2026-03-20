const std = @import("std");
const ir = @import("../intermediate.zig");

/// Creates a canonical ordering for constructors where the 0th entry is any
/// entry taking solely a `QWidget* parent` parameter.  This is so that UIC
/// can safely assume this for types.
///
/// Mirrors Go's `astTransformConstructorOrder`.
/// @ref https://github.com/mappu/miqt/issues/46
pub fn transform(parsed: *ir.CppParsedHeader) void {
    for (parsed.classes) |*c| {
        if (c.ctors.len <= 1) continue;

        // Stable-sort so the QWidget* parent ctor comes first while
        // preserving the relative order of all other constructors.
        std.mem.sort(ir.CppMethod, c.ctors, {}, lessThan);
    }
}

/// Check if a constructor is the "default" QWidget* parent ctor:
///   QFoo(QWidget* parent)
/// i.e. exactly one parameter of type QWidget that is a pointer.
fn isDefaultCtor(candidate: ir.CppMethod) bool {
    return candidate.parameters.len == 1 and
        std.mem.eql(u8, candidate.parameters[0].parameter_type, "QWidget") and
        candidate.parameters[0].pointer;
}

/// Comparison function for sorting: the QWidget* parent ctor sorts first.
fn lessThan(_: void, a: ir.CppMethod, b: ir.CppMethod) bool {
    const a_default = isDefaultCtor(a);
    const b_default = isDefaultCtor(b);

    if (a_default and !b_default) return true;
    return false;
}
