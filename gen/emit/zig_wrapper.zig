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
const CppEnumEntry = ir.CppEnumEntry;
const CppParsedHeader = ir.CppParsedHeader;
const GlobalState = state_mod.GlobalState;

/// File-level state for tracking imports and current context during
/// Zig wrapper emission.
const ZigFileState = struct {
    imports: std.StringHashMap(void),
    alloc: Allocator,
    current_package_name: []const u8 = "",
    current_header_name: []const u8 = "",
    current_class_name: []const u8 = "",
    current_method_name: []const u8 = "",

    fn init(a: Allocator) ZigFileState {
        return .{
            .imports = std.StringHashMap(void).init(a),
            .alloc = a,
        };
    }

    fn addImport(self: *ZigFileState, key: []const u8) !void {
        try self.imports.put(key, {});
    }
};

// ===========================================================================
// Public entry point
// ===========================================================================

/// Emit a Zig wrapper (.zig) file with idiomatic Zig types wrapping the C ABI.
/// Returns the generated source as a slice owned by `allocator`.
pub fn emit(allocator: Allocator, parsed: *const CppParsedHeader, state: *const GlobalState) ![]const u8 {
    var arena = std.heap.ArenaAllocator.init(allocator);
    defer arena.deinit();
    const tmp = arena.allocator();

    if (parsed.classes.len == 0 and parsed.enums.len == 0) {
        return "";
    }

    var buf: ArrayList(u8) = .empty;
    var w = compat.arrayListWriter(allocator, &buf);

    const src_filename = std.fs.path.basename(parsed.filename);
    _ = src_filename;

    // Derive header name (strip leading 'q'/'Q' prefix for 3+ char names, strip .h)
    const basename = std.fs.path.stem(parsed.filename);
    var header_name: []const u8 = basename;
    if (header_name.len > 3 and (header_name[0] == 'q' or header_name[0] == 'Q')) {
        header_name = header_name[1..];
    }

    var zfs = ZigFileState.init(tmp);
    zfs.current_header_name = header_name;

    // Imports placeholder - we'll fill in actual imports at the end
    try w.writeAll("const QtC = @import(\"qt6zig\");\nconst qtc = @import(\"qt6c\");%%_IMPORTLIBS_%%\n%%_STRUCTDEFS_%%\n");

    // Emit class wrappers
    for (parsed.classes) |c| {
        const zig_struct_name = try cabi_header.cabiClassName(tmp, c.class_name);
        const zig_struct_lower = try toLowerStr(tmp, zig_struct_name);
        zfs.current_class_name = c.class_name;

        const virtual_methods_raw = try getVirtualMethods(tmp, &c);
        const virtual_eligible = config.allowVirtualForClass(c.class_name) and virtual_methods_raw.len > 0;

        // Check if we need a struct at all
        const has_content = c.ctors.len > 0 or c.methods.len > 0 or
            virtual_methods_raw.len > 0 or c.direct_inherits.len > 0;
        if (!has_content) continue;

        // Page URL for documentation
        const page_name = try getPageName(tmp, zig_struct_name);

        try w.print("\n/// https://doc.qt.io/qt-6/{s}.html\npub const {s} = struct {{\n", .{ page_name, zig_struct_lower });

        // Constructors
        for (c.ctors, 0..) |ctor, i| {
            const suffix = try util.maybeSuffix(tmp, i);
            const zig_params = try emitParametersZig(tmp, ctor.parameters, false, state, &zfs);
            const forwarding = try emitParametersZig2CabiForwarding(tmp, ctor, state, &zfs);

            try w.print(
                \\
                \\    /// New{s} constructs a new {s} object.
                \\    pub fn New{s}({s}) QtC.{s} {{
                \\        {s}return qtc.{s}_new{s}({s});
                \\    }}
                \\
                \\
            , .{
                suffix,
                c.class_name,
                suffix,
                zig_params,
                zig_struct_name,
                forwarding.preamble,
                zig_struct_name,
                suffix,
                forwarding.args,
            });
        }

        // CopyAssign / MoveAssign
        if (c.has_trivial_copy_assign) {
            try w.print(
                \\    /// CopyAssign shallow copies `other` into `self`.
                \\    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {{
                \\        qtc.{s}_CopyAssign(@ptrCast(self), @ptrCast(other));
                \\    }}
                \\
                \\
            , .{zig_struct_name});
        }
        if (c.has_trivial_move_assign) {
            try w.print(
                \\    /// MoveAssign moves `other` into `self` and invalidates `other`.
                \\    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {{
                \\        qtc.{s}_MoveAssign(@ptrCast(self), @ptrCast(other));
                \\    }}
                \\
                \\
            , .{zig_struct_name});
        }

        // Build combined virtual methods list
        var all_virtual: ArrayList(CppMethod) = .empty;
        try all_virtual.appendSlice(tmp, virtual_methods_raw);
        if (virtual_eligible) {
            const protected = try getProtectedMethods(tmp, &c);
            try all_virtual.appendSlice(tmp, protected);
        }

        // Regular methods
        var previous_methods = std.StringHashMap(void).init(tmp);
        var seen_method_variants = std.StringHashMap(bool).init(tmp);

        for (c.methods) |m| {
            if (m.is_protected and !virtual_eligible) continue;

            const safe_name = m.method_name;

            if (cabi_header.isSkippedMethod(try std.fmt.allocPrint(tmp, "{s}_{s}", .{ c.class_name, safe_name }))) continue;

            if (seen_method_variants.get(safe_name)) |_| {
                continue;
            }
            try seen_method_variants.put(safe_name, false);

            if (previous_methods.contains(safe_name)) continue;
            try previous_methods.put(safe_name, {});
            try previous_methods.put(m.method_name, {});

            zfs.current_method_name = safe_name;

            const cmd_struct = if (m.inherited_from.len > 0)
                try cabi_header.cabiClassName(tmp, m.inherited_from)
            else
                zig_struct_name;

            const forwarding = try emitParametersZig2CabiForwarding(tmp, m, state, &zfs);
            const return_type_decl = try renderReturnTypeZig(tmp, m.return_type, false, state, &zfs);
            const rvalue = try std.fmt.allocPrint(tmp, "qtc.{s}_{s}({s})", .{ cmd_struct, safe_name, forwarding.args });
            const return_func = try emitCabiToZig(tmp, "return ", m.return_type, rvalue, state, &zfs);

            // Parameters
            const zig_params = try emitParametersZig(tmp, m.parameters, false, state, &zfs);
            const fn_method = if (m.is_static and !m.is_protected)
                try std.fmt.allocPrint(tmp, "{s}({s}", .{ safe_name, zig_params })
            else
                try std.fmt.allocPrint(tmp, "{s}(self: ?*anyopaque, {s}", .{ safe_name, zig_params });

            const maybe_alloc = if (std.mem.indexOf(u8, return_func, "allocator") != null) ", allocator: std.mem.Allocator" else "";

            try w.print(
                \\
                \\    pub fn {s}{s}) {s} {{
                \\        {s}{s}
                \\    }}
                \\
            , .{ fn_method, maybe_alloc, return_type_decl, forwarding.preamble, return_func });

            // Signal connection
            if (m.is_signal) {
                if (!cabi_header.isNoQtConnect(cmd_struct) and !cabi_header.isSkipQtConnect(cmd_struct, m.method_name)) {
                    const slot_params = try emitParametersZig(tmp, m.parameters, true, state, &zfs);
                    const slot_comma = if (m.parameters.len != 0) ", " else "";
                    try w.print(
                        \\
                        \\    pub fn On{s}(self: ?*anyopaque, callback: *const fn (?*anyopaque{s}{s}) callconv(.c) void) void {{
                        \\        qtc.{s}_Connect_{s}(@ptrCast(self), @intCast(@intFromPtr(callback)));
                        \\    }}
                        \\
                    , .{ safe_name, slot_comma, slot_params, cmd_struct, safe_name });
                }
            }

            // Virtual method override registration
            if ((m.is_virtual or m.is_protected) and all_virtual.items.len > 0 and virtual_eligible) {
                if (!isSkipFunction(cmd_struct, safe_name)) {
                    const slot_params = try emitParametersZig(tmp, m.parameters, true, state, &zfs);
                    const slot_comma = if (m.parameters.len != 0) ", " else "";
                    const slot_ret = try renderReturnTypeZig(tmp, m.return_type, true, state, &zfs);

                    // OnMethod override
                    try w.print(
                        \\
                        \\    /// Allows for overriding the related default method
                        \\    pub fn On{s}(self: ?*anyopaque, callback: *const fn (?*anyopaque{s}{s}) callconv(.c) {s}) void {{
                        \\        qtc.{s}_On{s}(@ptrCast(self), @intCast(@intFromPtr(callback)));
                        \\    }}
                        \\
                    , .{ safe_name, slot_comma, slot_params, slot_ret, cmd_struct, safe_name });

                    // QBaseMethod
                    const maybe_self = if (m.is_static and !m.is_protected) "" else "self: ?*anyopaque, ";
                    const base_rvalue = try std.fmt.allocPrint(tmp, "qtc.{s}_QBase{s}({s})", .{ cmd_struct, safe_name, forwarding.args });
                    const base_return = try emitCabiToZig(tmp, "return ", m.return_type, base_rvalue, state, &zfs);

                    try w.print(
                        \\
                        \\    /// Base class method implementation
                        \\    pub fn QBase{s}({s}{s}{s}) {s} {{
                        \\        {s}{s}
                        \\    }}
                        \\
                    , .{ safe_name, maybe_self, zig_params, maybe_alloc, return_type_decl, forwarding.preamble, base_return });
                }
            }
        }

        // Virtual-only methods (not already emitted above)
        for (all_virtual.items) |m| {
            if (!virtual_eligible) continue;

            const safe_name = m.method_name;
            if (cabi_header.isSkippedMethod(try std.fmt.allocPrint(tmp, "{s}_{s}", .{ c.class_name, safe_name }))) continue;

            if (previous_methods.contains(safe_name)) continue;
            try previous_methods.put(safe_name, {});

            zfs.current_method_name = safe_name;

            const cmd_struct = zig_struct_name;
            const forwarding = try emitParametersZig2CabiForwarding(tmp, m, state, &zfs);
            const return_type_decl = try renderReturnTypeZig(tmp, m.return_type, false, state, &zfs);
            const zig_params = try emitParametersZig(tmp, m.parameters, false, state, &zfs);
            const rvalue = try std.fmt.allocPrint(tmp, "qtc.{s}_{s}({s})", .{ cmd_struct, safe_name, forwarding.args });
            const return_func = try emitCabiToZig(tmp, "return ", m.return_type, rvalue, state, &zfs);
            const maybe_alloc = if (std.mem.indexOf(u8, return_func, "allocator") != null) ", allocator: std.mem.Allocator" else "";

            // Call method
            try w.print(
                \\
                \\    /// Wrapper to allow calling virtual or protected method
                \\    pub fn {s}(self: ?*anyopaque, {s}{s}) {s} {{
                \\        {s}{s}
                \\    }}
                \\
            , .{ safe_name, zig_params, maybe_alloc, return_type_decl, forwarding.preamble, return_func });

            // QBase
            const base_rvalue = try std.fmt.allocPrint(tmp, "qtc.{s}_QBase{s}({s})", .{ cmd_struct, safe_name, forwarding.args });
            const base_return = try emitCabiToZig(tmp, "return ", m.return_type, base_rvalue, state, &zfs);

            try w.print(
                \\
                \\    /// Base class method implementation
                \\    pub fn QBase{s}(self: ?*anyopaque, {s}{s}) {s} {{
                \\        {s}{s}
                \\    }}
                \\
            , .{ safe_name, zig_params, maybe_alloc, return_type_decl, forwarding.preamble, base_return });

            // OnMethod
            if (!isSkipFunction(cmd_struct, safe_name)) {
                const slot_params = try emitParametersZig(tmp, m.parameters, true, state, &zfs);
                const slot_comma = if (m.parameters.len != 0) ", " else "";
                const slot_ret = try renderReturnTypeZig(tmp, m.return_type, true, state, &zfs);

                try w.print(
                    \\
                    \\    /// Allows for overriding the related default method
                    \\    pub fn On{s}(self: ?*anyopaque, callback: *const fn (?*anyopaque{s}{s}) callconv(.c) {s}) void {{
                    \\        qtc.{s}_On{s}(@ptrCast(self), @intCast(@intFromPtr(callback)));
                    \\    }}
                    \\
                , .{ safe_name, slot_comma, slot_params, slot_ret, cmd_struct, safe_name });
            }
        }

        // Private signal connections
        for (c.private_signals) |m| {
            const safe_name = m.method_name;
            zfs.current_method_name = safe_name;

            const cmd_struct = if (m.inherited_from.len > 0)
                try cabi_header.cabiClassName(tmp, m.inherited_from)
            else
                zig_struct_name;

            const slot_params = try emitParametersZig(tmp, m.parameters, true, state, &zfs);
            const slot_comma = if (m.parameters.len != 0) ", " else "";

            try w.print(
                \\
                \\    /// Wrapper to allow calling private signal
                \\    pub fn On{s}(self: ?*anyopaque, callback: *const fn (?*anyopaque{s}{s}) callconv(.c) void) void {{
                \\        qtc.{s}_Connect_{s}(@ptrCast(self), @intCast(@intFromPtr(callback)));
                \\    }}
                \\
            , .{ safe_name, slot_comma, slot_params, cmd_struct, safe_name });
        }

        // Destructor
        if (c.can_delete and (c.methods.len > 0 or virtual_methods_raw.len > 0 or c.ctors.len > 0)) {
            try w.print(
                \\
                \\    /// Delete this object from C++ memory.
                \\    pub fn QDelete(self: ?*anyopaque) void {{
                \\        qtc.{s}_Delete(@ptrCast(self));
                \\    }}
                \\
            , .{zig_struct_name});
        }

        try w.writeAll("};\n");
    }

    // Enum definitions
    if (parsed.enums.len > 0) {
        const page_name = try getPageName(tmp, zfs.current_header_name);
        try w.print("\n/// https://doc.qt.io/qt-6/{s}.html#types\npub const enums = struct {{\n", .{page_name});

        var seen_enums = std.StringHashMap(void).init(tmp);

        for (parsed.enums) |e| {
            if (e.enum_name.len == 0) continue;

            const zig_enum_name = try cabi_header.cabiEnumName(tmp, e.enum_name);
            if (zig_enum_name.len == 0) continue;

            if (seen_enums.contains(zig_enum_name)) continue;
            try seen_enums.put(zig_enum_name, {});

            if (e.entries.len > 0) {
                // Named constants (non-sequential enum)
                try w.print("    pub const {s} = enum {{\n", .{zig_enum_name});

                for (e.entries) |ee| {
                    const entry_name = try util.titleCase(tmp, try cabi_header.cabiClassName(tmp, ee.entry_name));
                    const enum_type = try renderEnumUnderlyingType(tmp, e, state, &zfs);
                    try w.print("        pub const {s}: {s} = {s};\n", .{ entry_name, enum_type, ee.entry_value });
                }
            } else {
                // Sequential enum
                const enum_type = try renderEnumUnderlyingType(tmp, e, state, &zfs);
                try w.print("    pub const {s} = enum({s}) {{\n", .{ zig_enum_name, enum_type });
            }
            try w.writeAll("    };\n\n");
        }

        try w.writeAll("};\n");
    }

    // Finalize: replace import/struct placeholders
    var final_buf: ArrayList(u8) = .empty;
    var final_writer = compat.arrayListWriter(allocator, &final_buf);

    var imports_buf: ArrayList(u8) = .empty;
    var imports_w = compat.arrayListWriter(tmp, &imports_buf);

    if (zfs.imports.contains("std")) {
        try imports_w.writeAll("\nconst std = @import(\"std\");");
    }
    if (zfs.imports.contains("builtin")) {
        try imports_w.writeAll("\nconst builtin = @import(\"builtin\");");
    }

    // Write final output, replacing placeholders
    const source = buf.items;
    var pos: usize = 0;
    while (pos < source.len) {
        if (pos + 17 <= source.len and std.mem.eql(u8, source[pos .. pos + 17], "%%_IMPORTLIBS_%%")) {
            try final_writer.writeAll(imports_buf.items);
            pos += 17;
        } else if (pos + 17 <= source.len and std.mem.eql(u8, source[pos .. pos + 17], "%%_STRUCTDEFS_%%")) {
            // Struct definitions would go here (maps, pairs, sets)
            pos += 17;
        } else {
            try final_writer.writeByte(source[pos]);
            pos += 1;
        }
    }

    return final_buf.items;
}

// ===========================================================================
// Zig type rendering
// ===========================================================================

/// Render a CppParameter as a Zig type for function signatures.
fn renderTypeZig(alloc: Allocator, p: CppParameter, is_return: bool, state: *const GlobalState, zfs: *ZigFileState) ![]const u8 {
    const pt = p.parameter_type;
    _ = zfs;

    // String types
    if (p.pointer and std.mem.eql(u8, pt, "char")) return "[]const u8";
    if (std.mem.eql(u8, pt, "QString") or std.mem.eql(u8, pt, "QAnyStringView") or
        std.mem.eql(u8, pt, "QByteArrayView") or std.mem.eql(u8, pt, "QStringView"))
    {
        return "[]const u8";
    }
    if (std.mem.eql(u8, pt, "QByteArray")) return "[]u8";

    // Container types
    if (std.mem.startsWith(u8, pt, "QList<") or std.mem.startsWith(u8, pt, "QVector<")) {
        // Extract inner type and render as slice
        return "[]const u8"; // Simplified - full implementation would parse inner type
    }

    // Void pointer
    if ((std.mem.eql(u8, pt, "void") or std.mem.eql(u8, pt, "GLvoid")) and p.pointer) {
        return "?*anyopaque";
    }

    // Primitive types
    var ret = mapPrimitiveTypeZig(pt);

    // Enum types
    if (state.isKnownEnum(pt)) {
        if (state.getEnum(pt)) |e| {
            ret = e.enum_type_zig;
        }
    }

    // Qt class types -> opaque pointer
    if (state.isKnownClass(pt)) {
        if (p.by_ref or p.pointer) {
            if (is_return) {
                return try std.fmt.allocPrint(alloc, "QtC.{s}", .{try cabi_header.cabiClassName(alloc, pt)});
            }
            return "?*anyopaque";
        }
        return try std.fmt.allocPrint(alloc, "QtC.{s}", .{try cabi_header.cabiClassName(alloc, pt)});
    }

    // Pointer/ref handling for non-class types
    if (p.by_ref or p.pointer) {
        if (is_return) {
            // Return types
        } else {
            const stars = try repeatChar(alloc, '*', @max(1, @as(usize, @intCast(p.pointer_count))));
            const maybe_const = if (p.is_const) "const " else "";
            return try std.fmt.allocPrint(alloc, "{s}{s}{s}", .{ stars, maybe_const, ret });
        }
    }

    return ret;
}

/// Render the return type for a Zig function signature.
fn renderReturnTypeZig(alloc: Allocator, p: CppParameter, is_slot: bool, state: *const GlobalState, zfs: *ZigFileState) ![]const u8 {
    var ret = try renderTypeZig(alloc, p, true, state, zfs);

    if (std.mem.eql(u8, ret, "void") or std.mem.eql(u8, ret, "GLvoid")) {
        if (p.pointer or p.by_ref) return "?*anyopaque";
        return "void";
    }

    if (is_slot) {
        // C calling convention adjustments
        ret = try slotTypeAdjust(alloc, ret);
    }

    return ret;
}

fn slotTypeAdjust(alloc: Allocator, ret: []const u8) ![]const u8 {
    if (std.mem.eql(u8, ret, "[]const u8")) return "[*:0]const u8";
    if (std.mem.eql(u8, ret, "[]u8")) return "[*:0]u8";
    _ = alloc;
    return ret;
}

// ===========================================================================
// Parameter forwarding: Zig -> C ABI
// ===========================================================================

const ForwardingResult = struct {
    preamble: []const u8,
    args: []const u8,
};

/// Build forwarding expressions for all parameters of a method.
fn emitParametersZig2CabiForwarding(
    alloc: Allocator,
    m: CppMethod,
    state: *const GlobalState,
    zfs: *ZigFileState,
) !ForwardingResult {
    var preamble_buf: ArrayList(u8) = .empty;
    const pw = compat.arrayListWriter(alloc, &preamble_buf);

    var args: ArrayList([]const u8) = .empty;

    // Add self for non-static methods
    if (!(m.is_static and !m.is_protected)) {
        try args.append(alloc, "@ptrCast(self)");
    }

    for (m.parameters) |p| {
        const fwd = try emitSingleZig2CabiForwarding(alloc, p, state, zfs, pw);
        try args.append(alloc, fwd);
    }

    return .{
        .preamble = preamble_buf.items,
        .args = try joinSlice(alloc, args.items, ", "),
    };
}

/// Convert a single Zig parameter to C ABI representation.
fn emitSingleZig2CabiForwarding(
    alloc: Allocator,
    p: CppParameter,
    state: *const GlobalState,
    zfs: *ZigFileState,
    preamble_writer: anytype,
) ![]const u8 {
    const pt = p.parameter_type;
    const name = if (cabi_header.isZigReservedWord(p.parameter_name))
        try std.fmt.allocPrint(alloc, "_{s}", .{p.parameter_name})
    else
        p.parameter_name;

    // QString / QByteArray / QAnyStringView
    if (std.mem.eql(u8, pt, "QString") or std.mem.eql(u8, pt, "QByteArray") or
        std.mem.eql(u8, pt, "QAnyStringView"))
    {
        const prefix = try makeNamePrefix(alloc, p.parameter_name);
        try preamble_writer.print("const {s}_str = qtc.libqt_string{{\n", .{prefix});
        try preamble_writer.print("    .len = {s}.len,\n", .{name});
        try preamble_writer.print("    .data = {s}.ptr,\n", .{name});
        try preamble_writer.writeAll("};\n");
        return try std.fmt.allocPrint(alloc, "{s}_str", .{prefix});
    }

    // Qt class types -> @ptrCast
    if (state.isKnownClass(pt)) {
        return try std.fmt.allocPrint(alloc, "@ptrCast({s})", .{name});
    }

    // Enum / flag / integer types -> @intCast
    if (state.isKnownEnum(pt)) {
        return try std.fmt.allocPrint(alloc, "@intCast({s})", .{name});
    }

    // Pointer types for int-like params
    if (p.pointer or p.by_ref) {
        return try std.fmt.allocPrint(alloc, "@ptrCast({s})", .{name});
    }

    _ = zfs;
    return name;
}

// ===========================================================================
// Return value conversion: C ABI -> Zig
// ===========================================================================

/// Convert a C ABI return value to the Zig representation.
fn emitCabiToZig(
    alloc: Allocator,
    assign_expr: []const u8,
    rt: CppParameter,
    rvalue: []const u8,
    state: *const GlobalState,
    zfs: *ZigFileState,
) ![]const u8 {
    const pt = rt.parameter_type;

    if (rt.isVoid()) {
        return try std.fmt.allocPrint(alloc, "{s};", .{rvalue});
    }

    if ((std.mem.eql(u8, pt, "void") or std.mem.eql(u8, pt, "GLvoid")) and rt.pointer) {
        return try std.fmt.allocPrint(alloc, "{s}{s};", .{ assign_expr, rvalue });
    }

    // char* -> span
    if (std.mem.eql(u8, pt, "char") and rt.pointer) {
        try zfs.addImport("std");
        const prefix = try makeNamePrefix(alloc, rt.parameter_name);
        return try std.fmt.allocPrint(alloc,
            \\const {s}_ret = {s};
            \\{s} std.mem.span({s}_ret);
        , .{ prefix, rvalue, assign_expr, prefix });
    }

    // QString / QAnyStringView -> []const u8
    if (std.mem.eql(u8, pt, "QString") or std.mem.eql(u8, pt, "QAnyStringView") or
        std.mem.eql(u8, pt, "QByteArrayView") or std.mem.eql(u8, pt, "QStringView"))
    {
        try zfs.addImport("std");
        const prefix = try makeNamePrefix(alloc, rt.parameter_name);
        const lower_class = try toLowerStr(alloc, zfs.current_class_name);
        return try std.fmt.allocPrint(alloc,
            \\const {s}_str = {s};
            \\defer qtc.libqt_string_free(&{s}_str);
            \\const {s}_ret = allocator.alloc(u8, {s}_str.len) catch @panic("{s}.{s}: Memory allocation failed");
            \\@memcpy({s}_ret, {s}_str.data[0..{s}_str.len]);
            \\{s} {s}_ret;
        , .{
            prefix,     rvalue,     prefix,
            prefix,     prefix,     lower_class,
            zfs.current_method_name,
            prefix,     prefix,     prefix,
            assign_expr, prefix,
        });
    }

    // QByteArray -> []u8
    if (std.mem.eql(u8, pt, "QByteArray")) {
        try zfs.addImport("std");
        const prefix = try makeNamePrefix(alloc, rt.parameter_name);
        const lower_class = try toLowerStr(alloc, zfs.current_class_name);
        return try std.fmt.allocPrint(alloc,
            \\const {s}_bytearray: qtc.libqt_string = {s};
            \\defer qtc.libqt_string_free(&{s}_bytearray);
            \\const {s}_ret = allocator.alloc(u8, {s}_bytearray.len) catch @panic("{s}.{s}: Memory allocation failed");
            \\@memcpy({s}_ret, {s}_bytearray.data[0..{s}_bytearray.len]);
            \\{s} {s}_ret;
        , .{
            prefix,     rvalue,     prefix,
            prefix,     prefix,     lower_class,
            zfs.current_method_name,
            prefix,     prefix,     prefix,
            assign_expr, prefix,
        });
    }

    // Qt class types
    if (state.isKnownClass(pt)) {
        if (rt.pointer or rt.by_ref) {
            return try std.fmt.allocPrint(alloc, "{s}{s};", .{ assign_expr, rvalue });
        }
        return try std.fmt.allocPrint(alloc, "return {s};", .{rvalue});
    }

    // Enum/flag/int types with pointer -> ptrCast
    if ((state.isKnownEnum(pt) or rt.pointer or rt.by_ref) and
        (rt.pointer or rt.by_ref))
    {
        return try std.fmt.allocPrint(alloc, "{s}@ptrCast({s});", .{ assign_expr, rvalue });
    }

    // Default: direct assignment
    return try std.fmt.allocPrint(alloc, "{s}{s};", .{ assign_expr, rvalue });
}

// ===========================================================================
// Parameter list rendering for Zig signatures
// ===========================================================================

/// Emit Zig parameter list for a function signature.
fn emitParametersZig(
    alloc: Allocator,
    params: []const CppParameter,
    is_slot: bool,
    state: *const GlobalState,
    zfs: *ZigFileState,
) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    for (params) |p| {
        const name = if (cabi_header.isZigReservedWord(p.parameter_name))
            try std.fmt.allocPrint(alloc, "_{s}", .{p.parameter_name})
        else
            p.parameter_name;

        var param_type = try renderTypeZig(alloc, p, false, state, zfs);

        if (is_slot) {
            param_type = try slotTypeAdjust(alloc, param_type);
            try parts.append(alloc, param_type);
        } else {
            try parts.append(alloc, try std.fmt.allocPrint(alloc, "{s}: {s}", .{ name, param_type }));
        }
    }

    return try joinSlice(alloc, parts.items, ", ");
}

// ===========================================================================
// Enum helpers
// ===========================================================================

fn renderEnumUnderlyingType(alloc: Allocator, e: CppEnum, state: *const GlobalState, zfs: *ZigFileState) ![]const u8 {
    _ = state;
    _ = zfs;
    _ = alloc;

    // Check if any entry value overflows i32
    for (e.entries) |ee| {
        if (std.fmt.parseInt(i64, ee.entry_value, 10)) |num| {
            if (num > std.math.maxInt(i32) or num < std.math.minInt(i32)) {
                return "i64";
            }
        } else |_| {}
    }

    return mapPrimitiveTypeZig(e.underlying_type.parameter_type);
}

// ===========================================================================
// Misc helpers
// ===========================================================================

fn mapPrimitiveTypeZig(pt: []const u8) []const u8 {
    if (std.mem.eql(u8, pt, "bool")) return "bool";
    if (std.mem.eql(u8, pt, "unsigned char") or std.mem.eql(u8, pt, "uchar") or std.mem.eql(u8, pt, "quint8") or std.mem.eql(u8, pt, "uint8_t") or std.mem.eql(u8, pt, "GLboolean") or std.mem.eql(u8, pt, "GLubyte")) return "u8";
    if (std.mem.eql(u8, pt, "char") or std.mem.eql(u8, pt, "qint8") or std.mem.eql(u8, pt, "signed char") or std.mem.eql(u8, pt, "GLbyte") or std.mem.eql(u8, pt, "GLchar")) return "i8";
    if (std.mem.eql(u8, pt, "short") or std.mem.eql(u8, pt, "qint16") or std.mem.eql(u8, pt, "int16_t") or std.mem.eql(u8, pt, "GLshort")) return "i16";
    if (std.mem.eql(u8, pt, "ushort") or std.mem.eql(u8, pt, "quint16") or std.mem.eql(u8, pt, "unsigned short") or std.mem.eql(u8, pt, "uint16_t") or std.mem.eql(u8, pt, "GLushort")) return "u16";
    if (std.mem.eql(u8, pt, "unsigned int") or std.mem.eql(u8, pt, "quint32") or std.mem.eql(u8, pt, "uint32_t") or std.mem.eql(u8, pt, "uint") or std.mem.eql(u8, pt, "GLbitfield") or std.mem.eql(u8, pt, "GLenum") or std.mem.eql(u8, pt, "GLuint")) return "u32";
    if (std.mem.eql(u8, pt, "qint32") or std.mem.eql(u8, pt, "int") or std.mem.eql(u8, pt, "int32_t") or std.mem.eql(u8, pt, "GLint") or std.mem.eql(u8, pt, "GLsizei")) return "i32";
    if (std.mem.eql(u8, pt, "qlonglong") or std.mem.eql(u8, pt, "qint64") or std.mem.eql(u8, pt, "long long") or std.mem.eql(u8, pt, "GLint64") or std.mem.eql(u8, pt, "GLintptr") or std.mem.eql(u8, pt, "GLsizeiptr")) return "i64";
    if (std.mem.eql(u8, pt, "qulonglong") or std.mem.eql(u8, pt, "quint64") or std.mem.eql(u8, pt, "unsigned long long") or std.mem.eql(u8, pt, "GLuint64")) return "u64";
    if (std.mem.eql(u8, pt, "float") or std.mem.eql(u8, pt, "GLclampf") or std.mem.eql(u8, pt, "GLfloat")) return "f32";
    if (std.mem.eql(u8, pt, "const double") or std.mem.eql(u8, pt, "double") or std.mem.eql(u8, pt, "qreal") or std.mem.eql(u8, pt, "GLdouble")) return "f64";
    if (std.mem.eql(u8, pt, "size_t")) return "u64"; // Assume 64-bit
    if (std.mem.eql(u8, pt, "qsizetype") or std.mem.eql(u8, pt, "QIntegerForSizeof<std::size_t>::Signed") or std.mem.eql(u8, pt, "qptrdiff") or std.mem.eql(u8, pt, "ptrdiff_t")) return "i64";
    if (std.mem.eql(u8, pt, "qintptr") or std.mem.eql(u8, pt, "intptr_t") or std.mem.eql(u8, pt, "QIntegerForSizeof<void *>::Signed")) return "isize";
    if (std.mem.eql(u8, pt, "uintptr_t") or std.mem.eql(u8, pt, "quintptr") or std.mem.eql(u8, pt, "QIntegerForSizeof<void *>::Unsigned")) return "usize";
    if (std.mem.eql(u8, pt, "void") or std.mem.eql(u8, pt, "GLvoid")) return "void";
    return pt;
}

fn getPageName(alloc: Allocator, class_name: []const u8) ![]const u8 {
    const name = try toLowerStr(alloc, class_name);
    if (std.mem.eql(u8, name, "qnamespace")) return "qt";
    return try util.replaceAll(alloc, name, "__", "-");
}

fn makeNamePrefix(alloc: Allocator, name: []const u8) ![]const u8 {
    var buf: ArrayList(u8) = .empty;
    for (name) |c| {
        if (c == '[') {
            try buf.append(alloc, '_');
        } else if (c == ']') {
            // skip
        } else if (c == '.') {
            try buf.append(alloc, '_');
        } else {
            try buf.append(alloc, c);
        }
    }
    return buf.items;
}

fn isSkipFunction(struct_name: []const u8, method_name: []const u8) bool {
    if (std.mem.eql(u8, struct_name, "QFileDevice") and std.mem.eql(u8, method_name, "Close")) return true;
    if (std.mem.eql(u8, struct_name, "QPaintDevice") and std.mem.eql(u8, method_name, "PaintEngine")) return true;
    return false;
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
    for (s, 0..) |c, i| {
        buf[i] = std.ascii.toLower(c);
    }
    return buf;
}

fn repeatChar(alloc: Allocator, ch: u8, count: usize) ![]const u8 {
    if (count == 0) return "";
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
