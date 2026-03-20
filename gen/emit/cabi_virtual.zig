const std = @import("std");
const ir = @import("../intermediate.zig");
const state_mod = @import("../state.zig");
const config = @import("../config.zig");
const util = @import("../util.zig");
const cabi_header = @import("cabi_header.zig");
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

/// Emit a virtual callback header (.hxx) file containing C++ subclass
/// definitions that inherit from Qt classes and dispatch virtual method
/// calls through C function pointers. Returns the generated source as a
/// slice owned by `allocator`.
pub fn emit(allocator: Allocator, parsed: *const CppParsedHeader, state: *const GlobalState) ![]const u8 {
    var arena = std.heap.ArenaAllocator.init(allocator);
    defer arena.deinit();
    const tmp = arena.allocator();

    var buf: ArrayList(u8) = .empty;
    var w = compat.arrayListWriter(allocator, &buf);

    const src_filename = std.fs.path.basename(parsed.filename);

    // Include guard
    const include_guard = try makeIncludeGuard(tmp, src_filename, "C_LIBVIRTUAL");

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
        \\
        \\
    , .{ include_guard, include_guard });

    for (parsed.classes) |c| {
        const cpp_class_name = c.class_name;
        const method_prefix = try cabi_header.cabiClassName(tmp, cpp_class_name);
        const virtual_methods_raw = try getVirtualMethods(tmp, &c);
        const protected_methods_raw = try getProtectedMethods(tmp, &c);

        if (virtual_methods_raw.len == 0) continue;

        const overridden_class = try std.fmt.allocPrint(tmp, "Virtual{s}", .{
            try util.replaceAll(tmp, cpp_class_name, "::", ""),
        });

        // Merge virtual + protected methods
        var all_virtual: ArrayList(CppMethod) = .empty;
        try all_virtual.appendSlice(tmp, virtual_methods_raw);
        try all_virtual.appendSlice(tmp, protected_methods_raw);

        const maybe_final = if (c.abstract) "" else " final";

        try w.print("// This class is a subclass of {s} so that we can call protected methods\n", .{cpp_class_name});
        try w.print("class {s}{s} : public {s} {{\n\n", .{ overridden_class, maybe_final, cpp_class_name });

        // Collect public types, callback storage, setters, etc.
        var public_types: ArrayList([]const u8) = .empty;
        var private_callbacks: ArrayList([]const u8) = .empty;
        var callback_setters: ArrayList([]const u8) = .empty;
        var base_setters: ArrayList([]const u8) = .empty;
        var private_callback_vars: ArrayList([]const u8) = .empty;
        var private_base_flags: ArrayList([]const u8) = .empty;
        var friend_funcs: ArrayList([]const u8) = .empty;

        // Protected enum using declarations
        for (c.child_enums) |e| {
            if (e.is_protected) {
                try public_types.append(tmp, try std.fmt.allocPrint(tmp, "\tusing {s};\n", .{e.enum_name}));
            }
        }

        var seen_callbacks = std.StringHashMap(void).init(tmp);

        for (all_virtual.items) |m| {
            const base_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, m.method_name });

            if (cabi_header.isSkippedMethod(base_name)) continue;

            const callback_type = try std.fmt.allocPrint(tmp, "{s}_Callback", .{base_name});
            const callback_name = try toLowerStr(tmp, callback_type);
            const is_base_name = try std.fmt.allocPrint(tmp, "{s}_isbase", .{try toLowerStr(tmp, base_name)});

            if (seen_callbacks.contains(callback_type)) continue;
            try seen_callbacks.put(callback_type, {});

            const maybe_const = if (m.is_const) "const " else "";

            // Build self type for callback
            var maybe_self: []const u8 = "";
            if (m.parameters.len != 0) {
                maybe_self = try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, method_prefix });
            }

            // Callback type definition
            const return_cabi = try cabi_header.renderTypeCabi(tmp, m.return_type, true, state);
            const param_types = try emitParameterTypesCabi(tmp, m, maybe_self, state);

            try public_types.append(tmp, try std.fmt.allocPrint(tmp, "\tusing {s} = {s} (*)({s});\n", .{
                callback_type, return_cabi, param_types,
            }));

            // Instance callback storage
            try private_callbacks.append(tmp, try std.fmt.allocPrint(tmp, "\t{s} {s} = nullptr;\n", .{
                callback_type, callback_name,
            }));

            // Callback setter
            try callback_setters.append(tmp, try std.fmt.allocPrint(tmp, "\tinline void set{s}({s} cb) {{ {s} = cb; }}\n", .{
                callback_type, callback_type, callback_name,
            }));

            // Base flag setter
            try base_setters.append(tmp, try std.fmt.allocPrint(tmp, "\tinline void set{s}_IsBase(bool value) const {{ {s} = value; }}\n", .{
                base_name, is_base_name,
            }));

            try private_callback_vars.append(tmp, callback_name);
            try private_base_flags.append(tmp, try std.fmt.allocPrint(tmp, "    mutable bool {s} = false;\n", .{is_base_name}));

            // Friend functions for protected methods
            if (m.is_protected) {
                const c_class_name = try cabi_header.cabiClassName(tmp, cpp_class_name);
                const params = try cabi_header.emitParametersCabi(tmp, m, try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, cpp_class_name }), state);
                const ret_type = try cabi_header.renderTypeCabi(tmp, m.return_type, false, state);
                try friend_funcs.append(tmp, try std.fmt.allocPrint(tmp, "\tfriend {s} {s}_{s}({s});\n", .{
                    ret_type, c_class_name, m.method_name, params,
                }));
                try friend_funcs.append(tmp, try std.fmt.allocPrint(tmp, "\tfriend {s} {s}_QBase{s}({s});\n", .{
                    ret_type, c_class_name, m.method_name, params,
                }));
            }
        }

        // Write public section with boolean flag and types
        try w.print("public:\n\t// Virtual class boolean flag\n", .{});
        try w.print("\tbool is{s}= true;\n\n", .{overridden_class});
        try w.writeAll("\t// Virtual class public types (including callbacks)\n");
        for (public_types.items) |pt| {
            try w.writeAll(pt);
        }
        try w.writeByte('\n');

        // Protected section: callback storage and base flags
        try w.writeAll("protected:\n\t// Instance callback storage\n");
        for (private_callbacks.items) |pc| {
            try w.writeAll(pc);
        }
        try w.writeAll("\n\t// Instance base flags\n");
        for (private_base_flags.items) |bf| {
            try w.writeAll(bf);
        }
        try w.writeByte('\n');

        // Public constructors
        try w.writeAll("public:\n");

        var seen_ctors = std.StringHashMap(void).init(tmp);
        for (c.ctors) |ctor| {
            const cpp_params = try emitParametersCpp(tmp, ctor, false);
            const param_names = try emitParameterNamesList(tmp, ctor, false);

            if (seen_ctors.contains(cpp_params)) continue;
            try seen_ctors.put(cpp_params, {});

            try w.print("\t{s}({s}): {s}({s}) {{}};\n", .{
                overridden_class, cpp_params, cpp_class_name, param_names,
            });
        }
        try w.writeByte('\n');

        // Destructor
        if (private_callback_vars.items.len > 0) {
            try w.print("\t~{s}() {{", .{overridden_class});
            for (private_callback_vars.items) |cv| {
                try w.print("\n\t\t{s} = nullptr;", .{cv});
            }
            try w.writeAll("\n\t}\n\n");
        } else {
            if (!c.can_delete) {
                try w.writeAll("protected:\n");
            }
            try w.print("\tvirtual ~{s}() = default;\n\n", .{overridden_class});
            if (!c.can_delete) {
                try w.writeAll("public:\n");
            }
        }

        // Callback setters
        try w.writeAll("// Callback setters\n");
        for (callback_setters.items) |cs| {
            try w.writeAll(cs);
        }
        try w.writeByte('\n');

        // Base flag setters
        try w.writeAll("// Base flag setters\n");
        for (base_setters.items) |bs| {
            try w.writeAll(bs);
        }
        try w.writeByte('\n');

        // Virtual method overrides with callback dispatch
        var seen_virtuals = std.StringHashMap(bool).init(tmp);

        for (all_virtual.items) |m| {
            const base_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, m.method_name });

            if (cabi_header.isSkippedMethod(base_name)) continue;

            // Track duplicate method names
            if (seen_virtuals.get(m.method_name)) |already_seen| {
                if (already_seen) continue;
                try seen_virtuals.put(m.method_name, true);
            } else {
                try seen_virtuals.put(m.method_name, false);
            }

            const maybe_return = if (!m.return_type.isVoid()) "return " else "";
            const maybe_override = if (m.is_virtual) "override " else "";
            const maybe_virtual = if (m.is_virtual) "virtual " else "";
            const maybe_const = if (m.is_const) "const " else "";
            const cpp_params = try emitParametersCpp(tmp, m, false);
            const param_names = try emitParameterNamesList(tmp, m, false);

            const method_exec = try std.fmt.allocPrint(tmp, "{s}{s}::{s}({s});", .{
                maybe_return, method_prefix, m.cppCallTarget(), param_names,
            });
            const callback_name = try toLowerStr(tmp, try std.fmt.allocPrint(tmp, "{s}_callback", .{base_name}));
            const is_base_name_str = try std.fmt.allocPrint(tmp, "{s}_isbase", .{try toLowerStr(tmp, base_name)});

            try w.print("\n\t// Virtual method for C ABI access and custom callback\n", .{});
            try w.print("\t{s}{s} {s}({s}) {s}{s}{{\n", .{
                maybe_virtual,
                try renderReturnTypeQtCpp(tmp, m.return_type),
                m.cppCallTarget(),
                cpp_params,
                maybe_const,
                maybe_override,
            });

            // Dispatch logic: check isBase flag, then callback, then base
            if (!m.is_pure_virtual and !m.is_private) {
                try w.print("\t\tif ({s}) {{\n", .{is_base_name_str});
                try w.print("\t\t\t{s} = false;\n", .{is_base_name_str});
                try w.print("\t\t\t{s}\n", .{method_exec});
                try w.print("\t\t}} else if ({s} != nullptr) {{\n", .{callback_name});
            } else {
                try w.print("\t\tif ({s} != nullptr) {{\n", .{callback_name});
            }

            // Build callback invocation arguments
            var callback_args: ArrayList([]const u8) = .empty;
            if (m.parameters.len != 0) {
                try callback_args.append(tmp, "this");
            }
            for (m.parameters, 0..) |_, pidx| {
                try callback_args.append(tmp, try std.fmt.allocPrint(tmp, "cbval{d}", .{pidx + 1}));
            }

            // Emit parameter conversions for callback
            for (m.parameters, 0..) |p, pidx| {
                const p_type = try cabi_header.renderTypeCabi(tmp, p, false, state);
                try w.print("\t\t\t{s} cbval{d} = {s};\n", .{ p_type, pidx + 1, p.parameter_name });
            }

            // Call callback and handle return
            if (!m.return_type.isVoid()) {
                const ret_cabi = try cabi_header.renderTypeCabi(tmp, m.return_type, true, state);
                try w.print("\t\t\t{s} callback_ret = {s}({s});\n", .{
                    ret_cabi,
                    callback_name,
                    try joinSlice(tmp, callback_args.items, ", "),
                });
                try w.writeAll("\t\t\treturn callback_ret;\n");
            } else {
                try w.print("\t\t\t{s}({s});\n", .{
                    callback_name,
                    try joinSlice(tmp, callback_args.items, ", "),
                });
            }

            if (!m.is_pure_virtual and !m.is_private) {
                try w.writeAll("\t\t} else {\n");
                try w.print("\t\t\t{s}\n", .{method_exec});
                try w.writeAll("\t\t}\n");
            } else {
                if (!m.return_type.isVoid()) {
                    try w.writeAll("\t\t} else {\n");
                    try w.writeAll("\t\t\treturn {};\n");
                }
                try w.writeAll("\t\t}\n");
            }

            try w.writeAll("\t}\n");
        }

        // Friend functions
        if (friend_funcs.items.len > 0) {
            try w.writeAll("\n\t// Friend functions\n");
            for (friend_funcs.items) |ff| {
                try w.writeAll(ff);
            }
        }

        try w.writeAll("};\n\n");
    }

    try w.writeAll("#endif\n\n\n");

    return buf.items;
}

// ===========================================================================
// Internal helpers
// ===========================================================================

fn makeIncludeGuard(alloc: Allocator, filename: []const u8, suffix: []const u8) ![]const u8 {
    var buf: ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(alloc, &buf);
    for (filename) |ch| {
        if (ch == '.' or ch == '-' or ch == '/') {
            try writer.writeByte('_');
        } else {
            try writer.writeByte(std.ascii.toUpper(ch));
        }
    }
    try writer.print("_{s}", .{suffix});
    return buf.items;
}

/// Emit parameter types only (no names) for callback type definitions.
fn emitParameterTypesCabi(alloc: Allocator, m: CppMethod, self_type: []const u8, state: *const GlobalState) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    if (!(m.is_static and !m.is_protected) and self_type.len > 0) {
        try parts.append(alloc, self_type);
    }

    for (m.parameters) |p| {
        try parts.append(alloc, try cabi_header.renderTypeCabi(alloc, p, false, state));
    }

    return try joinSlice(alloc, parts.items, ", ");
}

/// Emit C++ parameter declarations (type + name) for constructor forwarding.
fn emitParametersCpp(alloc: Allocator, m: CppMethod, include_hidden: bool) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    for (m.parameters) |p| {
        const qt_type = try renderQtCppParamDecl(alloc, p);
        try parts.append(alloc, qt_type);
    }

    if (include_hidden) {
        for (m.hidden_params) |p| {
            const qt_type = try renderQtCppParamDecl(alloc, p);
            try parts.append(alloc, qt_type);
        }
    }

    return try joinSlice(alloc, parts.items, ", ");
}

/// Emit only the parameter names for constructor forwarding.
fn emitParameterNamesList(alloc: Allocator, m: CppMethod, include_hidden: bool) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    for (m.parameters) |p| {
        try parts.append(alloc, p.parameter_name);
    }

    if (include_hidden) {
        for (m.hidden_params) |p| {
            try parts.append(alloc, p.parameter_name);
        }
    }

    return try joinSlice(alloc, parts.items, ", ");
}

fn renderQtCppParamDecl(alloc: Allocator, p: CppParameter) ![]const u8 {
    var result: ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(alloc, &result);

    const orig = p.getQtCppType();

    if (orig.is_const) try writer.writeAll("const ");
    try writer.writeAll(orig.parameter_type);
    if (orig.pointer) {
        var count: usize = @intCast(orig.pointer_count);
        while (count > 0) : (count -= 1) {
            try writer.writeByte('*');
        }
    }
    if (orig.by_ref) try writer.writeByte('&');
    try writer.writeByte(' ');
    try writer.writeAll(p.parameter_name);

    return result.items;
}

fn renderReturnTypeQtCpp(alloc: Allocator, p: CppParameter) ![]const u8 {
    var result: ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(alloc, &result);

    if (p.is_const) try writer.writeAll("const ");
    try writer.writeAll(p.parameter_type);
    if (p.pointer) {
        var count: usize = @intCast(p.pointer_count);
        while (count > 0) : (count -= 1) {
            try writer.writeByte('*');
        }
    }
    if (p.by_ref) try writer.writeByte('&');

    return result.items;
}

fn getVirtualMethods(alloc: Allocator, c: *const CppClass) ![]CppMethod {
    var result: ArrayList(CppMethod) = .empty;
    for (c.methods) |m| {
        if (m.is_virtual) try result.append(alloc, m);
    }
    return result.items;
}

fn getProtectedMethods(alloc: Allocator, c: *const CppClass) ![]CppMethod {
    var result: ArrayList(CppMethod) = .empty;
    for (c.methods) |m| {
        if (m.is_protected and !m.is_virtual) try result.append(alloc, m);
    }
    return result.items;
}

fn toLowerStr(alloc: Allocator, s: []const u8) ![]const u8 {
    const buf = try alloc.alloc(u8, s.len);
    for (s, 0..) |ch, i| {
        buf[i] = std.ascii.toLower(ch);
    }
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
