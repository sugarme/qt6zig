const std = @import("std");
const ir = @import("../intermediate.zig");

/// Recursively collects all nested child classes from a class, clearing
/// child_classdefs as it goes.  The returned slice is arena-allocated.
fn takeChildren(alloc: std.mem.Allocator, c: *ir.CppClass) []ir.CppClass {
    if (c.child_classdefs.len == 0) {
        return &.{};
    }

    var ret: std.ArrayList(ir.CppClass) = .empty;

    // We need a mutable copy of child_classdefs since we modify each child.
    const children = alloc.alloc(ir.CppClass, c.child_classdefs.len) catch return &.{};
    @memcpy(children, c.child_classdefs);

    for (children) |*child| {
        // Recurse into grandchildren first
        const grandchildren = takeChildren(alloc, child);
        ret.appendSlice(alloc, grandchildren) catch {};

        // Clear child's nested classes and add the child itself
        child.child_classdefs = &.{};
        ret.append(alloc, child.*) catch {};
    }

    // Clear our own children
    c.child_classdefs = &.{};

    return ret.toOwnedSlice(alloc) catch &.{};
}

/// Expands all classes with child class definitions into new top-level
/// entries within the header.  Also lifts child typedefs and enums to
/// the top level.
pub fn transform(parsed: *ir.CppParsedHeader) void {
    // Allocate from an arena that is intentionally NOT freed -- the slices
    // produced here are assigned back into `parsed.*` and must outlive this
    // function.  The top-level ArenaAllocator in main owns the program
    // lifetime; this secondary arena simply provides a convenient growable
    // allocator for the transform.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    // Note: arena is intentionally leaked (no defer deinit).
    const alloc = arena.allocator();

    var taken: std.ArrayList(ir.CppClass) = .empty;
    var new_typedefs: std.ArrayList(ir.CppTypedef) = .empty;
    var new_enums: std.ArrayList(ir.CppEnum) = .empty;

    // Collect existing top-level typedefs and enums so we can append to them
    new_typedefs.appendSlice(alloc, parsed.typedefs) catch {};
    new_enums.appendSlice(alloc, parsed.enums) catch {};

    for (parsed.classes, 0..) |c, i| {
        const nested_classes = takeChildren(alloc, &parsed.classes[i]);
        taken.appendSlice(alloc, nested_classes) catch {};

        // Lift child typedefs and enums from the original class
        new_typedefs.appendSlice(alloc, c.child_typedefs) catch {};
        new_enums.appendSlice(alloc, c.child_enums) catch {};

        // Also lift typedefs/enums from newly-extracted nested classes
        for (nested_classes) |nc| {
            new_typedefs.appendSlice(alloc, nc.child_typedefs) catch {};
            new_enums.appendSlice(alloc, nc.child_enums) catch {};
        }
    }

    // Append all taken classes to the top-level class list
    if (taken.items.len > 0) {
        var all_classes: std.ArrayList(ir.CppClass) = .empty;
        all_classes.appendSlice(alloc, parsed.classes) catch {};
        all_classes.appendSlice(alloc, taken.items) catch {};
        parsed.classes = all_classes.toOwnedSlice(alloc) catch parsed.classes;
    }

    parsed.typedefs = new_typedefs.toOwnedSlice(alloc) catch parsed.typedefs;
    parsed.enums = new_enums.toOwnedSlice(alloc) catch parsed.enums;
}
