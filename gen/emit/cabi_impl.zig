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
const CppParsedHeader = ir.CppParsedHeader;
const GlobalState = state_mod.GlobalState;

// ===========================================================================
// Public entry point
// ===========================================================================

/// Emit a C ABI implementation (.cpp) file with extern "C" wrapper functions
/// that bridge between the C ABI and the Qt C++ API. Returns the generated
/// source as a slice owned by `allocator`.
pub fn emit(allocator: Allocator, parsed: *const CppParsedHeader, state: *const GlobalState) ![]const u8 {
    var arena = std.heap.ArenaAllocator.init(allocator);
    defer arena.deinit();
    const tmp = arena.allocator();

    var buf: ArrayList(u8) = .empty;
    var w = compat.arrayListWriter(allocator, &buf);

    if (parsed.classes.len == 0) return buf.items;

    const src_filename = std.fs.path.basename(parsed.filename);

    // Emit #include directives for referenced types
    const found_types = try getReferencedTypes(tmp, parsed, state);
    var seen_refs = std.StringHashMap(void).init(tmp);

    for (found_types) |ref| {
        if (std.mem.eql(u8, ref, "QString")) {
            try w.writeAll("#include <QString>\n");
            try w.writeAll("#include <QByteArray>\n");
            try w.writeAll("#include <cstring>\n");
            try w.writeAll("#include <type_traits>\n");
            continue;
        }

        if (std.mem.indexOf(u8, ref, "::") != null) {
            const cabi_name = try cabi_header.cabiClassName(tmp, ref);
            if (config.allowInnerClassDef(ref)) {
                const include_path = try util.replaceAll(tmp, ref, "::", "/");
                try w.print("#include <{s}>\n", .{include_path});
            } else {
                try w.print("#define WORKAROUND_INNER_CLASS_DEFINITION_{s}\n", .{cabi_name});
            }
            continue;
        }

        if (!config.importHeaderForClass(ref)) continue;

        const clean_ref = util.trimPrefix(util.trimSuffix(ref, "*"), "const ");
        if (seen_refs.contains(clean_ref)) continue;
        try seen_refs.put(clean_ref, {});
        try w.print("#include <{s}>\n", .{clean_ref});
    }

    // Include the source header and CABI header/virtual header
    try w.print("#include <{s}>\n", .{src_filename});
    const base_name = std.fs.path.stem(parsed.filename);
    try w.print("#include \"lib{s}.h\"\n", .{base_name});
    try w.print("#include \"lib{s}.hxx\"\n\n", .{base_name});

    var seen_class_methods = std.StringHashMap(bool).init(tmp);

    // Per-class implementations
    for (parsed.classes) |c| {
        const method_prefix = try cabi_header.cabiClassName(tmp, c.class_name);
        const virtual_methods_raw = try getVirtualMethods(tmp, &c);
        const protected_methods_raw = try getProtectedMethods(tmp, &c);
        const cpp_class_name = try util.replaceAll(tmp, c.class_name, "::", "");
        const virtual_eligible = config.allowVirtualForClass(c.class_name) and virtual_methods_raw.len > 0;

        // Build complete virtual methods list
        var all_virtual: ArrayList(CppMethod) = .empty;
        try all_virtual.appendSlice(tmp, virtual_methods_raw);
        if (virtual_eligible and virtual_methods_raw.len > 0) {
            try all_virtual.appendSlice(tmp, protected_methods_raw);
        }

        // Track seen method variants for overloading
        const seen_variants = std.StringHashMap(bool).init(tmp);
        var seen_virtuals_map = std.StringHashMap(void).init(tmp);

        for (c.methods) |m| {
            if (!m.is_protected) continue;
            try seen_virtuals_map.put(m.method_name, {});
        }

        // Constructors
        for (c.ctors, 0..) |ctor, i| {
            const suffix = try util.maybeSuffix(tmp, i);
            const params_cabi = try cabi_header.emitParametersCabi(tmp, ctor, "", state);
            const forwarding = try emitParameterForwardingList(tmp, ctor.parameters, state);

            // Determine if we should use Virtual prefix
            var use_virtual = false;
            if (virtual_eligible) {
                for (all_virtual.items) |vm| {
                    if ((vm.is_protected or vm.is_virtual) and all_virtual.items.len > 0) {
                        use_virtual = true;
                        break;
                    }
                }
            }

            const virtual_prefix = if (use_virtual) "Virtual" else "";
            const ctor_class = if (use_virtual)
                cpp_class_name
            else
                c.class_name;

            if (ctor.linux_only) {
                try w.print(
                    \\{s}* {s}_new{s}({s}) {{
                    \\#ifdef Q_OS_LINUX
                    \\    return new {s}{s}({s});
                    \\#else
                    \\    return nullptr;
                    \\#endif
                    \\}}
                    \\
                    \\
                , .{ method_prefix, method_prefix, suffix, params_cabi, virtual_prefix, ctor_class, forwarding });
            } else {
                try w.print("{s}* {s}_new{s}({s}) {{\n", .{ method_prefix, method_prefix, suffix, params_cabi });
                try w.print("\t return new {s}{s}({s});\n", .{ virtual_prefix, ctor_class, forwarding });
                try w.writeAll("}\n\n");
            }
        }

        // Copy/Move assign
        if (c.has_trivial_copy_assign) {
            try w.print(
                \\void {s}_CopyAssign({s}* self, {s}* other) {{
                \\    *self = *other;
                \\}}
                \\
                \\
            , .{ method_prefix, method_prefix, method_prefix });
        }
        if (c.has_trivial_move_assign) {
            try w.print(
                \\void {s}_MoveAssign({s}* self, {s}* other) {{
                \\    *self = std::move(*other);
                \\}}
                \\
                \\
            , .{ method_prefix, method_prefix, method_prefix });
        }

        // Regular methods
        for (c.methods) |m| {
            if (m.is_protected) continue; // Protected methods handled via virtual callbacks

            const safe_name = try cabi_header.safeMethodName(tmp, m);
            const full_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ c.class_name, safe_name });
            const cabi_full_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, safe_name });

            if (cabi_header.isSkippedMethod(cabi_full_name)) continue;
            if ((m.is_protected or m.is_private) and !virtual_eligible) continue;

            if (seen_class_methods.get(cabi_full_name)) |_| {
                continue;
            }
            try seen_class_methods.put(cabi_full_name, true);
            if ((m.is_virtual or m.is_protected) and all_virtual.items.len > 0 and virtual_eligible) {
                try seen_class_methods.put(cabi_full_name, false);
            }

            _ = full_name;
            _ = seen_variants;

            const maybe_const = if (m.is_const) "const " else "";
            const self_type = try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, method_prefix });
            const params_cabi = try cabi_header.emitParametersCabi(tmp, m, self_type, state);
            const return_cabi = try cabi_header.renderTypeCabi(tmp, m.return_type, false, state);
            const forwarding = try emitParameterForwardingList(tmp, m.parameters, state);

            // Build the call target
            var call_target: []const u8 = undefined;
            if (m.is_static) {
                call_target = try std.fmt.allocPrint(tmp, "{s}::{s}({s})", .{ c.class_name, m.cppCallTarget(), forwarding });
            } else {
                call_target = try std.fmt.allocPrint(tmp, "self->{s}({s})", .{ m.cppCallTarget(), forwarding });
            }

            // Handle variable fields
            if (m.is_variable) {
                try w.print("{s} {s}_{s}({s}) {{\n", .{ return_cabi, method_prefix, safe_name, params_cabi });
                if (std.mem.startsWith(u8, m.method_name, "set")) {
                    try w.print("self->{s} = {s};\n}}\n\n", .{ m.variable_field_name, forwarding });
                } else {
                    try emitReturnStatement(w, tmp, m.return_type, try std.fmt.allocPrint(tmp, "self->{s}", .{m.variable_field_name}), state);
                    try w.writeAll("}\n\n");
                }
                continue;
            }

            // Write method implementation
            try w.print("{s} {s}_{s}({s}) {{\n", .{ return_cabi, method_prefix, safe_name, params_cabi });
            try emitReturnStatement(w, tmp, m.return_type, call_target, state);
            try w.writeAll("}\n\n");

            // Signal connection
            if (m.is_signal) {
                if (cabi_header.isNoQtConnect(method_prefix)) continue;
                if (cabi_header.isSkipQtConnect(method_prefix, m.method_name)) continue;

                try emitSignalConnection(w, tmp, &c, method_prefix, safe_name, m, state);
            }
        }

        // Virtual method implementations
        for (all_virtual.items) |m| {
            if (!virtual_eligible) continue;
            if (m.is_protected) continue; // Protected virtual methods handled via .hxx callbacks

            const safe_name = try cabi_header.safeMethodName(tmp, m);
            const cabi_full_name = try std.fmt.allocPrint(tmp, "{s}_{s}", .{ method_prefix, safe_name });

            if (cabi_header.isSkippedMethod(cabi_full_name)) continue;

            var base_method = false;
            if (seen_class_methods.get(cabi_full_name)) |seen| {
                if (seen) continue;
                try seen_class_methods.put(cabi_full_name, true);
                base_method = true;
            } else {
                try seen_class_methods.put(cabi_full_name, true);
            }

            const maybe_const = if (m.is_const) "const " else "";
            const self_type = try std.fmt.allocPrint(tmp, "{s}{s}*", .{ maybe_const, method_prefix });
            const params_cabi = try cabi_header.emitParametersCabi(tmp, m, self_type, state);
            const return_cabi = try cabi_header.renderTypeCabi(tmp, m.return_type, false, state);
            const forwarding = try emitParameterForwardingList(tmp, m.parameters, state);

            const v_var = try std.fmt.allocPrint(tmp, "v{s}", .{try toLowerStr(tmp, method_prefix)});
            const stripped_prefix = try util.replaceAll(tmp, method_prefix, "__", "");
            const virtual_target = try std.fmt.allocPrint(tmp, "dynamic_cast<{s}Virtual{s}*>(self)", .{ maybe_const, cpp_class_name });
            const vb_call = try std.fmt.allocPrint(tmp, "{s}({s})", .{ m.cppCallTarget(), forwarding });

            // Derived class handler
            if (!base_method) {
                try w.print("// Derived class handler implementation\n", .{});
                try w.print("{s} {s}({s}) {{\n", .{ return_cabi, cabi_full_name, params_cabi });
                try w.print("\tauto* {s} = {s};\n", .{ v_var, virtual_target });
                try w.print("\tif ({s} && {s}->isVirtual{s}) {{\n", .{ v_var, v_var, stripped_prefix });
                try emitReturnStatement(w, tmp, m.return_type, try std.fmt.allocPrint(tmp, "{s}->{s}", .{ v_var, vb_call }), state);
                try w.print("\t}} else {{\n", .{});
                try emitReturnStatement(w, tmp, m.return_type, try std.fmt.allocPrint(tmp, "self->{s}::{s}", .{ c.class_name, vb_call }), state);
                try w.writeAll("}\n}\n\n");
            }

            // Base class handler
            try w.writeAll("// Base class handler implementation\n");
            try w.print("{s} {s}_QBase{s}({s}) {{\n", .{ return_cabi, method_prefix, safe_name, params_cabi });
            try w.print("\tauto* {s} = {s};\n", .{ v_var, virtual_target });
            try w.print("\tif ({s} && {s}->isVirtual{s}) {{\n", .{ v_var, v_var, stripped_prefix });
            const is_base_name = try std.fmt.allocPrint(tmp, "{s}_{s}_IsBase", .{ method_prefix, safe_name });
            try w.print("{s}->set{s}(true);\n", .{ v_var, is_base_name });
            try emitReturnStatement(w, tmp, m.return_type, try std.fmt.allocPrint(tmp, "{s}->{s}", .{ v_var, vb_call }), state);
            try w.writeAll("}\n}\n\n");

            // Callback setter (OnMethod)
            const callback_name = try std.fmt.allocPrint(tmp, "{s}_{s}_Callback", .{ method_prefix, safe_name });
            try w.writeAll("// Auxiliary method to allow providing re-implementation\n");
            try w.print("void {s}_On{s}({s}{s}* self, intptr_t slot) {{\n", .{ method_prefix, safe_name, maybe_const, method_prefix });
            try w.print("\tauto* {s} = {s};\n", .{ v_var, virtual_target });
            try w.print("\tif ({s} && {s}->isVirtual{s}) {{\n", .{ v_var, v_var, stripped_prefix });
            try w.print("{s}->set{s}(reinterpret_cast<Virtual{s}::{s}>(slot));\n", .{ v_var, callback_name, stripped_prefix, callback_name });
            try w.writeAll("}\n}\n\n");
        }

        // Private signals
        for (c.private_signals) |m| {
            const safe_name = try cabi_header.safeMethodName(tmp, m);
            try emitSignalConnection(w, tmp, &c, method_prefix, safe_name, m, state);
        }

        // Destructor
        if (c.can_delete and (c.methods.len > 0 or virtual_methods_raw.len > 0 or c.ctors.len > 0)) {
            try w.print(
                \\void {s}_Delete({s}* self) {{
                \\    delete self;
                \\}}
                \\
                \\
            , .{ method_prefix, method_prefix });
        }
    }

    return buf.items;
}

// ===========================================================================
// Internal helpers
// ===========================================================================

/// Build a forwarding expression list for parameter names, applying C ABI to C++ conversions.
fn emitParameterForwardingList(alloc: Allocator, params: []const CppParameter, state: *const GlobalState) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;

    for (params) |p| {
        const fwd = try emitSingleParamForwarding(alloc, p, state);
        try parts.append(alloc, fwd);
    }

    return try joinSlice(alloc, parts.items, ", ");
}

/// Convert a single parameter from C ABI representation to the C++ form expected by Qt.
fn emitSingleParamForwarding(alloc: Allocator, p: CppParameter, state: *const GlobalState) ![]const u8 {
    const pt = p.parameter_type;

    // QString: convert libqt_string -> QString
    if (std.mem.eql(u8, pt, "QString")) {
        return try std.fmt.allocPrint(alloc, "QString::fromUtf8({s}.data, {s}.len)", .{ p.parameter_name, p.parameter_name });
    }

    // QByteArray: convert libqt_string -> QByteArray
    if (std.mem.eql(u8, pt, "QByteArray")) {
        return try std.fmt.allocPrint(alloc, "QByteArray({s}.data, {s}.len)", .{ p.parameter_name, p.parameter_name });
    }

    // QAnyStringView: convert libqt_string -> QAnyStringView via QString
    if (std.mem.eql(u8, pt, "QAnyStringView")) {
        return try std.fmt.allocPrint(alloc, "QAnyStringView(QString::fromUtf8({s}.data, {s}.len))", .{ p.parameter_name, p.parameter_name });
    }

    // Enum / flag types need a static_cast with fully qualified name
    if (state.isKnownEnum(pt)) {
        // Resolve the full qualified enum name (e.g., "StandardPixmap" -> "QStyle::StandardPixmap")
        const qualified_name = if (state.getEnum(pt)) |e| e.enum_.enum_name else pt;
        return try std.fmt.allocPrint(alloc, "static_cast<{s}>({s})", .{ qualified_name, p.parameter_name });
    }

    // QList/QStringList: C ABI receives libqt_list, need to reconstruct QList
    if (cabi_header.isQListType(pt)) {
        // For now, pass a default-constructed list (full conversion TODO)
        return try std.fmt.allocPrint(alloc, "{s}()", .{pt});
    }

    // QMap/QHash: C ABI receives libqt_map
    if (cabi_header.isQMapType(pt)) {
        return try std.fmt.allocPrint(alloc, "{s}()", .{pt});
    }

    // By-reference: dereference the pointer we received
    if (p.by_ref and !p.pointer) {
        if (state.isKnownClass(pt)) {
            return try std.fmt.allocPrint(alloc, "*{s}", .{p.parameter_name});
        }
        return try std.fmt.allocPrint(alloc, "*{s}", .{p.parameter_name});
    }

    // Qt class by value: dereference the pointer
    if (state.isKnownClass(pt) and !p.pointer) {
        return try std.fmt.allocPrint(alloc, "*{s}", .{p.parameter_name});
    }

    return p.parameter_name;
}

/// Render the Qt C++ type for use in casts and type declarations.
fn renderTypeQtCpp(alloc: Allocator, p: CppParameter) ![]const u8 {
    const orig = p.getQtCppType();
    var result: ArrayList(u8) = .empty;
    var writer = compat.arrayListWriter(alloc, &result);

    if (orig.is_const) {
        try writer.writeAll("const ");
    }
    try writer.writeAll(orig.parameter_type);
    if (orig.pointer) {
        var count: usize = @intCast(orig.pointer_count);
        while (count > 0) : (count -= 1) {
            try writer.writeByte('*');
        }
    }
    if (orig.by_ref) {
        try writer.writeByte('&');
    }

    return result.items;
}

/// Emit a return statement that converts a C++ rvalue to C ABI form.
fn emitReturnStatement(
    w: anytype,
    alloc: Allocator,
    return_type: CppParameter,
    rvalue: []const u8,
    state: *const GlobalState,
) !void {
    const pt = return_type.parameter_type;

    if (return_type.isVoid()) {
        try w.print("\t{s};\n", .{rvalue});
        return;
    }

    // QString -> libqt_string
    if (std.mem.eql(u8, pt, "QString")) {
        const deref = if (return_type.pointer) "->" else ".";
        try w.print("\tQString _ret = {s};\n", .{rvalue});
        try w.print("\tQByteArray _b = _ret{s}toUtf8();\n", .{deref});
        try w.writeAll("\tlibqt_string _str;\n");
        try w.writeAll("\t_str.len = _b.length();\n");
        try w.writeAll("\t_str.data = static_cast<const char*>(malloc(_str.len + 1));\n");
        try w.writeAll("\tmemcpy((void*)_str.data, _b.data(), _str.len);\n");
        try w.writeAll("\t((char*)_str.data)[_str.len] = '\\0';\n");
        try w.writeAll("\treturn _str;\n");
        return;
    }

    // QByteArray -> libqt_string
    if (std.mem.eql(u8, pt, "QByteArray")) {
        try w.print("\tQByteArray _qb = {s};\n", .{rvalue});
        try w.writeAll("\tlibqt_string _str;\n");
        try w.writeAll("\t_str.len = _qb.length();\n");
        try w.writeAll("\t_str.data = static_cast<const char*>(malloc(_str.len + 1));\n");
        try w.writeAll("\tmemcpy((void*)_str.data, _qb.data(), _str.len);\n");
        try w.writeAll("\t((char*)_str.data)[_str.len] = '\\0';\n");
        try w.writeAll("\treturn _str;\n");
        return;
    }

    // QList<T> / QStringList -> libqt_list
    if (cabi_header.isQListType(pt)) {
        try w.print("\tauto _ret = {s};\n", .{rvalue});
        try w.writeAll("\tlibqt_list _arr;\n");
        try w.writeAll("\t_arr.len = _ret.length();\n");
        try w.writeAll("\t_arr.data = malloc(_arr.len * sizeof(void*));\n");
        try w.writeAll("\tvoid** _data = static_cast<void**>(_arr.data);\n");
        try w.writeAll("\tfor (int _i = 0; _i < _arr.len; ++_i) {\n");
        // For QString lists, convert each element to libqt_string
        if (std.mem.eql(u8, pt, "QStringList") or std.mem.indexOf(u8, pt, "QString") != null) {
            try w.writeAll("\t\tQByteArray _b = _ret[_i].toUtf8();\n");
            try w.writeAll("\t\tlibqt_string* _str = new libqt_string();\n");
            try w.writeAll("\t\t_str->len = _b.length();\n");
            try w.writeAll("\t\t_str->data = static_cast<const char*>(malloc(_str->len + 1));\n");
            try w.writeAll("\t\tmemcpy((void*)_str->data, _b.data(), _str->len);\n");
            try w.writeAll("\t\t((char*)_str->data)[_str->len] = '\\0';\n");
            try w.writeAll("\t\t_data[_i] = _str;\n");
        } else if (std.mem.indexOf(u8, pt, "*") != null) {
            // For pointer element types (e.g., QList<QGraphicsItem*>), store directly
            try w.writeAll("\t\t_data[_i] = _ret[_i];\n");
        } else {
            // For value element types, use auto& to avoid reference-to-reference
            try w.writeAll("\t\tauto& _elem = _ret[_i];\n");
            try w.writeAll("\t\t_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);\n");
        }
        try w.writeAll("\t}\n");
        try w.writeAll("\treturn _arr;\n");
        return;
    }

    // QMap<K,V> / QHash<K,V> -> libqt_map
    if (cabi_header.isQMapType(pt)) {
        try w.print("\tauto _ret = {s};\n", .{rvalue});
        try w.writeAll("\tlibqt_map _map;\n");
        try w.writeAll("\t_map.len = _ret.size();\n");
        try w.writeAll("\t_map.keys = nullptr;\n");
        try w.writeAll("\t_map.values = nullptr;\n");
        try w.writeAll("\treturn _map;\n");
        return;
    }

    // Qt class by value -> heap allocate
    if (state.isKnownClass(pt) and !return_type.pointer and !return_type.by_ref) {
        try w.print("\treturn new {s}({s});\n", .{ pt, rvalue });
        return;
    }

    // Qt class by reference -> return pointer
    if (state.isKnownClass(pt) and return_type.by_ref) {
        if (return_type.is_const) {
            const qt_type = try renderTypeQtCpp(alloc, return_type);
            try w.print("\t{s} _ret = {s};\n", .{ qt_type, rvalue });
            try w.writeAll("\t// Cast returned reference into pointer\n");
            try w.writeAll("\treturn const_cast<");
            try w.print("{s}*>(&_ret);\n", .{pt});
        } else {
            try w.print("\treturn new {s}({s});\n", .{ pt, rvalue });
        }
        return;
    }

    // Default: direct return
    try w.print("\treturn {s};\n", .{rvalue});
}

/// Emit a signal connection function body.
fn emitSignalConnection(
    w: anytype,
    alloc: Allocator,
    c: *const CppClass,
    method_prefix: []const u8,
    safe_name: []const u8,
    m: CppMethod,
    state: *const GlobalState,
) !void {
    // Build signal parameter type list
    var sig_params: ArrayList([]const u8) = .empty;
    for (m.parameters) |p| {
        const p_type = try cabi_header.renderTypeCabi(alloc, p, true, state);
        try sig_params.append(alloc, p_type);
    }

    var sig_ret: []const u8 = "";
    if (sig_params.items.len > 0) {
        sig_ret = try std.fmt.allocPrint(alloc, ", {s}", .{try joinSlice(alloc, sig_params.items, ", ")});
    }

    // Build parameter forwarding inside the lambda
    var param_names: ArrayList([]const u8) = .empty;
    var param_defs: ArrayList([]const u8) = .empty;
    var callback_args: ArrayList([]const u8) = .empty;

    for (m.parameters) |p| {
        // Use same name for lambda param and callback arg (param1, param2, etc.)
        try callback_args.append(alloc, p.parameter_name);

        const p_type = try cabi_header.renderTypeCabi(alloc, p, true, state);
        try param_names.append(alloc, p.parameter_name);
        try param_defs.append(alloc, try std.fmt.allocPrint(alloc, "{s} {s}", .{ p_type, p.parameter_name }));
    }

    var binding_func = try std.fmt.allocPrint(alloc, "\tslotFunc(self", .{});
    if (callback_args.items.len > 0) {
        binding_func = try std.fmt.allocPrint(alloc, "{s}, {s}", .{ binding_func, try joinSlice(alloc, callback_args.items, ", ") });
    }

    // Emit the parameter forwarding in the lambda
    const cpp_params = try emitParameterNamesCpp(alloc, m);

    try w.print(
        \\void {s}_Connect_{s}({s}* self, intptr_t slot) {{
        \\    void (*slotFunc)({s}*{s}) = reinterpret_cast<void (*)({s}*{s})>(slot);
        \\    {s}::connect(self, &{s}::{s}, [self, slotFunc]({s}) {{
        \\{s});
        \\    }});
        \\}}
        \\
        \\
    , .{
        method_prefix,
        safe_name,
        method_prefix,
        method_prefix,
        sig_ret,
        method_prefix,
        sig_ret,
        c.class_name,
        c.class_name,
        m.cppCallTarget(),
        cpp_params,
        binding_func,
    });
}

fn emitParameterNamesCpp(alloc: Allocator, m: CppMethod) ![]const u8 {
    var parts: ArrayList([]const u8) = .empty;
    for (m.parameters) |p| {
        const qt_type = try renderTypeQtCpp(alloc, p);
        try parts.append(alloc, try std.fmt.allocPrint(alloc, "{s} {s}", .{ qt_type, p.parameter_name }));
    }
    return try joinSlice(alloc, parts.items, ", ");
}

fn getReferencedTypes(alloc: Allocator, src: *const CppParsedHeader, state: *const GlobalState) ![][]const u8 {
    var found = std.StringHashMap(void).init(alloc);

    for (src.classes) |c| {
        try found.put(c.class_name, {});
        for (c.ctors) |ctor| {
            for (ctor.parameters) |p| {
                if (state.isKnownClass(p.parameter_type))
                    try found.put(p.parameter_type, {});
            }
        }
        for (c.methods) |m| {
            for (m.parameters) |p| {
                if (state.isKnownClass(p.parameter_type))
                    try found.put(p.parameter_type, {});
            }
            if (state.isKnownClass(m.return_type.parameter_type))
                try found.put(m.return_type.parameter_type, {});
        }
        for (c.direct_inherits) |base| {
            if (state.isKnownClass(base))
                try found.put(base, {});
        }
    }

    // Remove typedefs
    for (src.typedefs) |td| {
        _ = found.fetchRemove(td.alias);
    }

    var result: ArrayList([]const u8) = .empty;
    var iter = found.iterator();
    while (iter.next()) |entry| {
        if (!config.allowClass(entry.key_ptr.*)) continue;
        try result.append(alloc, entry.key_ptr.*);
    }

    std.mem.sort([]const u8, result.items, {}, struct {
        fn lessThan(_: void, a: []const u8, b: []const u8) bool {
            return std.mem.order(u8, a, b) == .lt;
        }
    }.lessThan);

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
    for (s, 0..) |c, i| {
        buf[i] = std.ascii.toLower(c);
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

fn isNoQtConnect(method_prefix: []const u8) bool {
    return cabi_header.isNoQtConnect(method_prefix);
}

fn isSkipQtConnect(method_prefix: []const u8, method_name: []const u8) bool {
    return cabi_header.isSkipQtConnect(method_prefix, method_name);
}
