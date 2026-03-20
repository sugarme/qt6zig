const std = @import("std");
const ir = @import("../intermediate.zig");

/// Expands all methods with optional parameters into explicit additional
/// versions.  A method with N optional parameters (all trailing) produces
/// N+1 variants: one with only the mandatory parameters, and one for each
/// additional optional parameter included.
///
/// Mirrors Go's `astTransformOptional`.
pub fn transform(parsed: *ir.CppParsedHeader) void {
    // Arena is intentionally leaked -- the slices produced here are stored
    // back into parsed.* and must outlive this function call.
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    const alloc = arena.allocator();

    for (parsed.classes) |*c| {
        // -- Methods --
        expandMethods(alloc, c);

        // -- Constructors --
        expandCtors(alloc, c);
    }
}

/// Expand methods with optional parameters into explicit overloads.
fn expandMethods(alloc: std.mem.Allocator, c: *ir.CppClass) void {
    // We need a separate list for new methods because we can't append to the
    // slice we're iterating over.
    var new_methods: std.ArrayList(ir.CppMethod) = .empty;

    // First collect expanded copies, then fixup originals
    const original_len = c.methods.len;
    for (0..original_len) |j| {
        var m = &c.methods[j];

        // Virtual methods: treat all parameters as mandatory
        if (m.is_virtual) continue;

        // Find first optional parameter (they must all be trailing)
        const optional_start = findOptionalStart(m.parameters);
        if (optional_start == null) continue;

        const opt_start = optional_start.?;

        // Create expanded copies: one for each count of included optional params
        for (opt_start..m.parameters.len) |x| {
            var dup = m.*;

            // Rename: append (x+1) as a numeric suffix
            const suffix = std.fmt.allocPrint(alloc, "{d}", .{x + 1}) catch continue;
            const base_name = m.method_name;
            const new_name = std.fmt.allocPrint(alloc, "{s}{s}", .{ base_name, suffix }) catch continue;
            dup.rename(new_name);

            // Slice parameters: [0..x+1] are the included params
            const kept = alloc.alloc(ir.CppParameter, x + 1) catch continue;
            @memcpy(kept, m.parameters[0 .. x + 1]);
            dup.parameters = kept;

            // Hidden params: [x+1..]
            if (x + 1 < m.parameters.len) {
                const hidden = alloc.alloc(ir.CppParameter, m.parameters.len - x - 1) catch continue;
                @memcpy(hidden, m.parameters[x + 1 ..]);
                dup.hidden_params = hidden;
            } else {
                dup.hidden_params = &.{};
            }

            new_methods.append(alloc, dup) catch {};
        }

        // Truncate original to mandatory-only
        if (opt_start < m.parameters.len) {
            const hidden = alloc.alloc(ir.CppParameter, m.parameters.len - opt_start) catch continue;
            @memcpy(hidden, m.parameters[opt_start..]);
            m.hidden_params = hidden;
        }
        if (opt_start > 0) {
            const mandatory = alloc.alloc(ir.CppParameter, opt_start) catch continue;
            @memcpy(mandatory, m.parameters[0..opt_start]);
            m.parameters = mandatory;
        } else {
            m.parameters = &.{};
        }
    }

    // Append new methods
    if (new_methods.items.len > 0) {
        var all: std.ArrayList(ir.CppMethod) = .empty;
        all.appendSlice(alloc, c.methods) catch {};
        all.appendSlice(alloc, new_methods.items) catch {};
        c.methods = all.toOwnedSlice(alloc) catch c.methods;
    }
}

/// Expand constructors with optional parameters into explicit overloads.
fn expandCtors(alloc: std.mem.Allocator, c: *ir.CppClass) void {
    var new_ctors: std.ArrayList(ir.CppMethod) = .empty;

    const original_len = c.ctors.len;
    for (0..original_len) |j| {
        var m = &c.ctors[j];

        const optional_start = findOptionalStart(m.parameters);
        if (optional_start == null) continue;

        const opt_start = optional_start.?;

        for (opt_start..m.parameters.len) |x| {
            var dup = m.*;

            const kept = alloc.alloc(ir.CppParameter, x + 1) catch continue;
            @memcpy(kept, m.parameters[0 .. x + 1]);
            dup.parameters = kept;

            if (x + 1 < m.parameters.len) {
                const hidden = alloc.alloc(ir.CppParameter, m.parameters.len - x - 1) catch continue;
                @memcpy(hidden, m.parameters[x + 1 ..]);
                dup.hidden_params = hidden;
            } else {
                dup.hidden_params = &.{};
            }

            new_ctors.append(alloc, dup) catch {};
        }

        // Truncate original
        if (opt_start < m.parameters.len) {
            const hidden = alloc.alloc(ir.CppParameter, m.parameters.len - opt_start) catch continue;
            @memcpy(hidden, m.parameters[opt_start..]);
            m.hidden_params = hidden;
        }
        if (opt_start > 0) {
            const mandatory = alloc.alloc(ir.CppParameter, opt_start) catch continue;
            @memcpy(mandatory, m.parameters[0..opt_start]);
            m.parameters = mandatory;
        } else {
            m.parameters = &.{};
        }
    }

    if (new_ctors.items.len > 0) {
        var all: std.ArrayList(ir.CppMethod) = .empty;
        all.appendSlice(alloc, c.ctors) catch {};
        all.appendSlice(alloc, new_ctors.items) catch {};
        c.ctors = all.toOwnedSlice(alloc) catch c.ctors;
    }
}

/// Find the index of the first optional parameter.  Returns null if there
/// are no optional parameters.
fn findOptionalStart(params: []const ir.CppParameter) ?usize {
    for (params, 0..) |p, k| {
        if (p.optional) return k;
    }
    return null;
}
