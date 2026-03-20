const std = @import("std");
const ir = @import("intermediate.zig");
const state = @import("state.zig");

const Allocator = std.mem.Allocator;
const Value = std.json.Value;

// -------------------------------------------------------------------------
// Errors
// -------------------------------------------------------------------------

pub const ParseError = error{
    TooComplex,
    NoContent,
    MissingKind,
    MissingName,
    MissingAccess,
    BadInnerType,
    MissingBrackets,
    UnexpectedEnumKind,
    ComplexEnumValue,
    NonParseableEnumValue,
    UnknownNodeKind,
    OutOfMemory,
    Overflow,
};

// -------------------------------------------------------------------------
// Visibility
// -------------------------------------------------------------------------

pub const VisibilityState = enum {
    public,
    protected,
    private,
};

// -------------------------------------------------------------------------
// Static configuration tables
// -------------------------------------------------------------------------

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

/// Classes that should not get a copy assignment operator binding.
fn isNoCopyAssign(class_name: []const u8) bool {
    const names = [_][]const u8{
        "KStandardActions::RawStringData",
        "KTextEditor::InlineNote",
        "QCborValueConstRef",
        "QDirListing::const_iterator",
        "QJsonValueConstRef",
    };
    for (names) |n| {
        if (std.mem.eql(u8, class_name, n)) return true;
    }
    return false;
}

/// Classes that should not get a move assignment operator binding.
fn isNoMoveAssign(class_name: []const u8) bool {
    const names = [_][]const u8{
        "KStandardActions::RawStringData",
        "KTextEditor::InlineNote",
    };
    for (names) |n| {
        if (std.mem.eql(u8, class_name, n)) return true;
    }
    return false;
}

/// Reserved words in Zig that cannot be used as parameter names.
pub fn zigReservedWord(s: []const u8) bool {
    // Block Zig arbitrary-width integer type names like i8, u16, etc.
    if (s.len >= 2 and s.len <= 3 and (s[0] == 'i' or s[0] == 'u')) {
        _ = std.fmt.parseInt(i32, s[1..], 10) catch return false;
        return true;
    }

    const reserved = [_][]const u8{
        "default",   "const",     "fn",        "var",     "type",
        "len",       "new",       "copy",      "import",  "error",
        "string",    "map",       "int",       "select",  "pub",
        "ret",       "suspend",   "opaque",    "align",   "self",
        "allocator", "URLs",
    };
    for (reserved) |r| {
        if (std.mem.eql(u8, s, r)) return true;
    }
    return false;
}

// -------------------------------------------------------------------------
// JSON helpers
// -------------------------------------------------------------------------

/// Get a string field from a JSON object; returns null if absent or wrong type.
fn jsonStr(obj: Value, key: []const u8) ?[]const u8 {
    if (obj != .object) return null;
    const val = obj.object.get(key) orelse return null;
    return switch (val) {
        .string => |s| s,
        else => null,
    };
}

/// Get a bool field from a JSON object; returns null if absent or wrong type.
fn jsonBool(obj: Value, key: []const u8) ?bool {
    if (obj != .object) return null;
    const val = obj.object.get(key) orelse return null;
    return switch (val) {
        .bool => |b| b,
        else => null,
    };
}

/// Get a JSON sub-object. Returns null if absent or not an object.
fn jsonObj(obj: Value, key: []const u8) ?Value {
    if (obj != .object) return null;
    const val = obj.object.get(key) orelse return null;
    return switch (val) {
        .object => val,
        else => null,
    };
}

/// Get a JSON array. Returns null if absent or not an array.
fn jsonArray(obj: Value, key: []const u8) ?[]Value {
    if (obj != .object) return null;
    const val = obj.object.get(key) orelse return null;
    return switch (val) {
        .array => |a| a.items,
        else => null,
    };
}

// -------------------------------------------------------------------------
// shouldPreferQualType / getPreferredType
// -------------------------------------------------------------------------

/// Returns true if we should use the qualType instead of the desugared type.
fn shouldPreferQualType(qual_type: []const u8) bool {
    if (contains(qual_type, "intptr") or contains(qual_type, "_t") or
        startsWith(qual_type, "uint") or contains(qual_type, "ushort") or
        contains(qual_type, "quint") or contains(qual_type, "qint") or
        contains(qual_type, "qptrdiff") or startsWith(qual_type, "qsize") or
        startsWith(qual_type, "QList<") or startsWith(qual_type, "QPair<") or
        startsWith(qual_type, "QIntegerForSizeof<"))
    {
        return true;
    }
    return false;
}

/// Returns the preferred type string from a type JSON node, applying
/// desugaring heuristics.
fn getPreferredType(alloc: Allocator, node: Value) ![]const u8 {
    if (node != .object) return "";

    var desugared: []const u8 = jsonStr(node, "desugaredQualType") orelse "";
    var qual_type: []const u8 = jsonStr(node, "qualType") orelse "";

    desugared = try replaceAll(alloc, desugared, "enum ", "");
    desugared = try replaceAll(alloc, desugared, "::enum_type", "");
    qual_type = try replaceAll(alloc, qual_type, "enum ", "");
    qual_type = try replaceAll(alloc, qual_type, "::enum_type", "");

    if (contains(desugared, "::") and !contains(qual_type, "::")) {
        return desugared;
    }

    if (qual_type.len > 0 and shouldPreferQualType(qual_type)) {
        return qual_type;
    }
    if (desugared.len > 0) {
        return desugared;
    }
    return qual_type;
}

// -------------------------------------------------------------------------
// parseHeader - top-level AST → CppParsedHeader
// -------------------------------------------------------------------------

/// Parse a complete JSON string (from `clang -ast-dump=json`) into a
/// `CppParsedHeader`. The caller should pass an ArenaAllocator that will own
/// all returned memory.
pub fn parseJsonAst(alloc: Allocator, json_bytes: []const u8) !ir.CppParsedHeader {
    const parsed = try std.json.parseFromSlice(Value, alloc, json_bytes, .{
        .allocate = .alloc_always,
    });
    const root = parsed.value;

    const top_inner = jsonArray(root, "inner") orelse return ir.CppParsedHeader{};
    return try parseHeader(alloc, top_inner, "");
}

/// Parse a list of top-level AST nodes into a CppParsedHeader.
pub fn parseHeader(alloc: Allocator, top_level: []Value, add_name_prefix: []const u8) ParseError!ir.CppParsedHeader {
    var ret = ir.CppParsedHeader{};
    var classes_list: std.ArrayList(ir.CppClass) = .empty;
    var enums_list: std.ArrayList(ir.CppEnum) = .empty;
    var typedefs_list: std.ArrayList(ir.CppTypedef) = .empty;

    // addNamePrefix may be extended in-place for bare NamespaceDecls
    var current_prefix = add_name_prefix;

    for (top_level) |node_val| {
        if (node_val != .object) return ParseError.BadInnerType;

        const kind = jsonStr(node_val, "kind") orelse return ParseError.MissingKind;

        if (std.mem.eql(u8, kind, "CXXRecordDecl")) {
            const obj = processClassType(alloc, node_val, current_prefix) catch |err| {
                if (err == ParseError.NoContent) continue;
                return err;
            };
            try classes_list.append(alloc, obj);
        } else if (std.mem.eql(u8, kind, "StaticAssertDecl") or
            std.mem.eql(u8, kind, "ClassTemplateDecl") or
            std.mem.eql(u8, kind, "ClassTemplateSpecializationDecl") or
            std.mem.eql(u8, kind, "ClassTemplatePartialSpecializationDecl") or
            std.mem.eql(u8, kind, "FunctionTemplateDecl") or
            std.mem.eql(u8, kind, "BuiltinTemplateDecl") or
            std.mem.eql(u8, kind, "VarTemplatePartialSpecializationDecl") or
            std.mem.eql(u8, kind, "VarTemplateSpecializationDecl") or
            std.mem.eql(u8, kind, "TypeAliasTemplateDecl") or
            std.mem.eql(u8, kind, "VarTemplateDecl") or
            std.mem.eql(u8, kind, "FileScopeAsmDecl") or
            std.mem.eql(u8, kind, "EmptyDecl") or
            std.mem.eql(u8, kind, "CXXDestructorDecl") or
            std.mem.eql(u8, kind, "CXXConversionDecl") or
            std.mem.eql(u8, kind, "LinkageSpecDecl") or
            std.mem.eql(u8, kind, "AbiTagAttr") or
            std.mem.eql(u8, kind, "VisibilityAttr") or
            std.mem.eql(u8, kind, "UsingDirectiveDecl") or
            std.mem.eql(u8, kind, "UsingDecl") or
            std.mem.eql(u8, kind, "UsingShadowDecl") or
            std.mem.eql(u8, kind, "CXXConstructorDecl") or
            std.mem.eql(u8, kind, "VarDecl") or
            std.mem.eql(u8, kind, "CXXMethodDecl") or
            std.mem.eql(u8, kind, "FullComment"))
        {
            // Ignored or TODO nodes
            continue;
        } else if (std.mem.eql(u8, kind, "NamespaceDecl") or
            std.mem.eql(u8, kind, "NamespaceAliasDecl"))
        {
            const namespace = jsonStr(node_val, "name") orelse continue;
            const ns_prefix = try std.fmt.allocPrint(alloc, "{s}{s}::", .{ current_prefix, namespace });

            if (jsonArray(node_val, "inner")) |namespace_inner| {
                const contents = try parseHeader(alloc, namespace_inner, ns_prefix);
                try addContentToLists(alloc, &classes_list, &enums_list, &typedefs_list, contents);
            } else {
                // Bare namespace declaration - affects prefix for rest of file
                current_prefix = ns_prefix;
            }
        } else if (std.mem.eql(u8, kind, "FunctionDecl")) {
            const fn_info = parseFunctionDecl(alloc, node_val) catch continue;
            if (fn_info) |info| {
                const class_name = getClassFromMangledName(alloc, info.mangled_name, info.name) catch continue;
                if (class_name.len > 0) {
                    if (shouldSkipClass(class_name)) continue;
                    const method = createMethodFromFunctionInfo(alloc, info) catch continue;
                    addMethodToClassList(alloc, &classes_list, class_name, method) catch continue;
                }
            }
        } else if (std.mem.eql(u8, kind, "EnumDecl")) {
            const en = try processEnum(alloc, node_val, current_prefix, .public);
            try enums_list.append(alloc, en);
        } else if (std.mem.eql(u8, kind, "TypeAliasDecl") or
            std.mem.eql(u8, kind, "TypedefDecl"))
        {
            const td = try processTypedef(alloc, node_val, current_prefix);
            try typedefs_list.append(alloc, td);
        } else {
            // Unknown node kind - skip rather than error, for forward compatibility
            continue;
        }
    }

    ret.classes = try classes_list.toOwnedSlice(alloc);
    ret.enums = try enums_list.toOwnedSlice(alloc);
    ret.typedefs = try typedefs_list.toOwnedSlice(alloc);
    return ret;
}

/// Helper: merge parsed sub-header content into running array lists.
fn addContentToLists(
    alloc: Allocator,
    classes: *std.ArrayList(ir.CppClass),
    enums: *std.ArrayList(ir.CppEnum),
    typedefs: *std.ArrayList(ir.CppTypedef),
    other: ir.CppParsedHeader,
) !void {
    try classes.appendSlice(alloc, other.classes);
    try enums.appendSlice(alloc, other.enums);
    try typedefs.appendSlice(alloc, other.typedefs);
}

// -------------------------------------------------------------------------
// processTypedef
// -------------------------------------------------------------------------

/// Parse a single C++ typedef/type-alias node.
fn processTypedef(alloc: Allocator, node: Value, add_name_prefix: []const u8) ParseError!ir.CppTypedef {
    const nodename = jsonStr(node, "name") orelse return ParseError.MissingName;

    if (jsonObj(node, "type")) |typ| {
        const qual_type = try getPreferredType(alloc, typ);
        if (qual_type.len > 0) {
            return ir.CppTypedef{
                .alias = try std.fmt.allocPrint(alloc, "{s}{s}", .{ add_name_prefix, nodename }),
                .underlying_type = parseSingleTypeString(alloc, qual_type, add_name_prefix),
            };
        }
    }

    return ParseError.MissingName;
}

// -------------------------------------------------------------------------
// processEnum
// -------------------------------------------------------------------------

/// Parse a Clang enum node into our CppEnum intermediate format.
fn processEnum(alloc: Allocator, node: Value, add_name_prefix: []const u8, visibility: VisibilityState) ParseError!ir.CppEnum {
    var ret = ir.CppEnum{};
    ret.is_protected = (visibility == .protected);

    // Underlying type
    ret.underlying_type = parseSingleTypeString(alloc, "int", add_name_prefix);
    if (jsonObj(node, "fixedUnderlyingType")) |nodefut| {
        const qual_type = try getPreferredType(alloc, nodefut);
        if (qual_type.len > 0) {
            ret.underlying_type = parseSingleTypeString(alloc, qual_type, add_name_prefix);
        }
    }

    // Name
    if (jsonStr(node, "name")) |nodename| {
        ret.enum_name = try std.fmt.allocPrint(alloc, "{s}{s}", .{ add_name_prefix, nodename });
    } else {
        // Unnamed enum - constants in current scope
        ret.enum_name = add_name_prefix;
    }

    // Entries
    const inner = jsonArray(node, "inner") orelse return ret;

    var entries_list: std.ArrayList(ir.CppEnumEntry) = .empty;
    var last_implicit_value: i64 = -1;

    for (inner) |entry_val| {
        if (entry_val != .object) return ParseError.BadInnerType;

        const kind = jsonStr(entry_val, "kind") orelse continue;

        if (std.mem.eql(u8, kind, "DeprecatedAttr") or std.mem.eql(u8, kind, "FullComment")) {
            continue;
        }
        if (!std.mem.eql(u8, kind, "EnumConstantDecl")) {
            return ParseError.UnexpectedEnumKind;
        }

        const entryname = jsonStr(entry_val, "name") orelse return ParseError.MissingName;

        var cee = ir.CppEnumEntry{
            .entry_name = entryname,
            .entry_value = "",
        };

        // Try to find the enum value from inner nodes
        const ei1 = jsonArray(entry_val, "inner");

        var found_valid_inner = false;
        var found_value = false;

        if (ei1) |ei1_items| {
            for (ei1_items) |ei1_0_val| {
                if (ei1_0_val != .object) continue;
                const ei1_kind = jsonStr(ei1_0_val, "kind") orelse continue;

                if (std.mem.eql(u8, ei1_kind, "FullComment")) continue;

                if (std.mem.eql(u8, ei1_kind, "DeprecatedAttr")) {
                    // Skip deprecated enum entries
                    found_value = true; // Signal to skip this entry
                    break;
                }

                found_valid_inner = true;

                // Best case: ConstantExpr with value
                if (std.mem.eql(u8, ei1_kind, "ConstantExpr")) {
                    if (jsonStr(ei1_0_val, "value")) |val| {
                        cee.entry_value = val;
                        found_value = true;
                        break;
                    }
                }

                // ImplicitCastExpr -> ConstantExpr with value
                if (std.mem.eql(u8, ei1_kind, "ImplicitCastExpr")) {
                    if (jsonArray(ei1_0_val, "inner")) |ei2| {
                        if (ei2.len > 0) {
                            const ei2_0 = ei2[0];
                            const ei2_kind = jsonStr(ei2_0, "kind") orelse continue;
                            if (std.mem.eql(u8, ei2_kind, "ConstantExpr")) {
                                if (jsonStr(ei2_0, "value")) |val| {
                                    cee.entry_value = val;
                                    found_value = true;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }

        // DeprecatedAttr was found - skip this entry entirely
        if (found_value and cee.entry_value.len == 0 and !found_valid_inner) continue;
        if (found_value and cee.entry_value.len == 0) {
            // DeprecatedAttr case - skip
            continue;
        }

        if (!found_value and !found_valid_inner) {
            // Auto-increment
            cee.entry_value = try std.fmt.allocPrint(alloc, "{d}", .{last_implicit_value + 1});
        }

        if (cee.entry_value.len == 0) {
            return ParseError.ComplexEnumValue;
        }

        if (std.mem.eql(u8, cee.entry_value, "true") or std.mem.eql(u8, cee.entry_value, "false")) {
            ret.underlying_type = parseSingleTypeString(alloc, "bool", add_name_prefix);
        } else {
            last_implicit_value = std.fmt.parseInt(i64, cee.entry_value, 10) catch {
                return ParseError.NonParseableEnumValue;
            };
        }

        try entries_list.append(alloc, cee);
    }

    ret.entries = try entries_list.toOwnedSlice(alloc);
    return ret;
}

// -------------------------------------------------------------------------
// processClassType
// -------------------------------------------------------------------------

/// Parse a single C++ class definition into our intermediate format.
fn processClassType(alloc: Allocator, node: Value, add_name_prefix: []const u8) ParseError!ir.CppClass {
    var ret = ir.CppClass{};
    ret.can_delete = true;

    // Must have a name
    var nodename = jsonStr(node, "name") orelse return ParseError.NoContent;
    nodename = try std.fmt.allocPrint(alloc, "{s}{s}", .{ add_name_prefix, nodename });

    // Hacks for specific classes
    if (std.mem.eql(u8, nodename, "FromBase64Result")) {
        nodename = "QByteArray::FromBase64Result";
    }
    if (std.mem.eql(u8, nodename, "Connection")) {
        nodename = "QMetaObject::Connection";
    }
    if (std.mem.eql(u8, nodename, "QBrushData")) {
        ret.can_delete = false;
    }

    ret.class_name = nodename;

    // Skip forward declarations (no inner nodes)
    const inner = jsonArray(node, "inner") orelse return ParseError.NoContent;

    // Skip if only one inner entry that is VisibilityAttr
    if (inner.len == 1) {
        if (inner[0] == .object) {
            const k = jsonStr(inner[0], "kind");
            if (k != null and std.mem.eql(u8, k.?, "VisibilityAttr")) {
                return ParseError.NoContent;
            }
        }
    }

    // Check struct vs class default visibility
    var visibility: VisibilityState = .public;
    if (jsonStr(node, "tagUsed")) |tag_used| {
        if (std.mem.eql(u8, tag_used, "class")) {
            visibility = .private;
        }
    }

    // Polymorphic check
    if (jsonBool(node, "isPolymorphic")) |poly| {
        ret.is_polymorphic = poly;
    }

    // Check for abstract, copy/move ctors, assignment operators
    if (jsonObj(node, "definitionData")) |def_data| {
        if (jsonBool(def_data, "isAbstract")) |is_abstract| {
            if (is_abstract) ret.abstract = true;
        }

        const can_const_default_init = jsonBool(def_data, "canConstDefaultInit") orelse false;
        const can_pass_in_registers = jsonBool(def_data, "canPassInRegisters") orelse false;

        if (can_const_default_init and can_pass_in_registers) {
            // Copy constructor
            if (jsonObj(def_data, "copyCtor")) |copy_ctor| {
                const trivial = jsonBool(copy_ctor, "trivial") orelse false;
                if (trivial) {
                    const has_const_param = jsonBool(copy_ctor, "hasConstParam") orelse false;
                    const implicit_has_const_param = jsonBool(copy_ctor, "implicitHasConstParam") orelse false;

                    var copy_ctor_method = ir.CppMethod{
                        .is_static = true,
                        .return_type = ir.CppParameter{
                            .parameter_type = ret.class_name,
                            .pointer = true,
                            .pointer_count = 1,
                        },
                    };
                    const param = ir.CppParameter{
                        .parameter_name = "other",
                        .parameter_type = ret.class_name,
                        .is_const = has_const_param or implicit_has_const_param,
                        .by_ref = true,
                    };
                    const params = try alloc.alloc(ir.CppParameter, 1);
                    params[0] = param;
                    copy_ctor_method.parameters = params;

                    var ctors_list: std.ArrayList(ir.CppMethod) = .empty;
                    if (ret.ctors.len > 0) try ctors_list.appendSlice(alloc, ret.ctors);
                    try ctors_list.append(alloc, copy_ctor_method);
                    ret.ctors = try ctors_list.toOwnedSlice(alloc);
                }
            }

            // Move constructor
            if (jsonObj(def_data, "moveCtor")) |move_ctor| {
                const trivial = jsonBool(move_ctor, "trivial") orelse false;
                if (trivial) {
                    var move_ctor_method = ir.CppMethod{
                        .is_static = true,
                        .is_move_ctor = true,
                        .return_type = ir.CppParameter{
                            .parameter_type = ret.class_name,
                            .pointer = true,
                            .pointer_count = 1,
                        },
                    };
                    const param = ir.CppParameter{
                        .parameter_name = "other",
                        .parameter_type = ret.class_name,
                        .by_ref = true,
                    };
                    const params = try alloc.alloc(ir.CppParameter, 1);
                    params[0] = param;
                    move_ctor_method.parameters = params;

                    var ctors_list: std.ArrayList(ir.CppMethod) = .empty;
                    if (ret.ctors.len > 0) try ctors_list.appendSlice(alloc, ret.ctors);
                    try ctors_list.append(alloc, move_ctor_method);
                    ret.ctors = try ctors_list.toOwnedSlice(alloc);
                }
            }

            // Copy assignment
            if (jsonObj(def_data, "copyAssign")) |copy_assign| {
                const trivial = jsonBool(copy_assign, "trivial") orelse false;
                if (trivial and !isNoCopyAssign(ret.class_name)) {
                    ret.has_trivial_copy_assign = true;
                }
            }

            // Move assignment
            if (jsonObj(def_data, "moveAssign")) |move_assign| {
                const trivial = jsonBool(move_assign, "trivial") orelse false;
                if (trivial and !isNoMoveAssign(ret.class_name)) {
                    ret.has_trivial_move_assign = true;
                }
            }
        }
    }

    // Check for public base classes
    {
        var inherits_list: std.ArrayList([]const u8) = .empty;
        if (jsonArray(node, "bases")) |bases| {
            for (bases) |base| {
                if (base != .object) continue;
                const access = jsonStr(base, "access") orelse continue;
                if (!std.mem.eql(u8, access, "public")) continue;

                if (jsonObj(base, "type")) |typ| {
                    const qual_type = try getPreferredType(alloc, typ);
                    if (qual_type.len > 0) {
                        try inherits_list.append(alloc, qual_type);
                    }
                }
            }
        }
        if (inherits_list.items.len > 0) {
            ret.direct_inherits = try inherits_list.toOwnedSlice(alloc);
        }
    }

    // Parse inner class members
    var is_signal = false;

    var methods_list: std.ArrayList(ir.CppMethod) = .empty;
    var ctors_list: std.ArrayList(ir.CppMethod) = .empty;
    if (ret.ctors.len > 0) try ctors_list.appendSlice(alloc, ret.ctors);
    var child_classdefs_list: std.ArrayList(ir.CppClass) = .empty;
    var child_typedefs_list: std.ArrayList(ir.CppTypedef) = .empty;
    var child_enums_list: std.ArrayList(ir.CppEnum) = .empty;
    var private_methods_list: std.ArrayList([]const u8) = .empty;
    var private_signals_list: std.ArrayList(ir.CppMethod) = .empty;

    for (inner) |inner_node_val| {
        if (inner_node_val != .object) return ParseError.BadInnerType;

        const kind = jsonStr(inner_node_val, "kind") orelse return ParseError.MissingKind;

        if (std.mem.eql(u8, kind, "AccessSpecDecl")) {
            const access = jsonStr(inner_node_val, "access") orelse return ParseError.MissingAccess;

            if (std.mem.eql(u8, access, "public")) {
                visibility = .public;
            } else if (std.mem.eql(u8, access, "protected")) {
                visibility = .protected;
            } else if (std.mem.eql(u8, access, "private")) {
                visibility = .private;
            } else {
                return ParseError.MissingAccess;
            }

            // Signal detection: if AccessSpecDecl has an expansion location,
            // it was likely produced by Q_SIGNALS / signals macro
            is_signal = false;
            if (jsonObj(inner_node_val, "loc")) |loc| {
                if (jsonObj(loc, "expansionLoc") != null) {
                    is_signal = true;
                }
            }
        } else if (std.mem.eql(u8, kind, "FriendDecl") or
            std.mem.eql(u8, kind, "FullComment") or
            std.mem.eql(u8, kind, "VisibilityAttr"))
        {
            continue;
        } else if (std.mem.eql(u8, kind, "CXXRecordDecl")) {
            // Child class
            if (visibility != .public) continue;

            const child_prefix = try std.fmt.allocPrint(alloc, "{s}::", .{nodename});
            const child = processClassType(alloc, inner_node_val, child_prefix) catch |err| {
                if (err == ParseError.NoContent) continue;
                return err;
            };
            try child_classdefs_list.append(alloc, child);
        } else if (std.mem.eql(u8, kind, "TypeAliasDecl") or std.mem.eql(u8, kind, "TypedefDecl")) {
            const child_prefix = try std.fmt.allocPrint(alloc, "{s}::", .{nodename});
            const td = try processTypedef(alloc, inner_node_val, child_prefix);
            try child_typedefs_list.append(alloc, td);
        } else if (std.mem.eql(u8, kind, "EnumDecl")) {
            if (visibility == .private) continue;

            const child_prefix = try std.fmt.allocPrint(alloc, "{s}::", .{nodename});
            const en = try processEnum(alloc, inner_node_val, child_prefix, visibility);
            if (en.entries.len > 0) {
                try child_enums_list.append(alloc, en);
            }
        } else if (std.mem.eql(u8, kind, "CXXConstructorDecl")) {
            const is_implicit = jsonBool(inner_node_val, "isImplicit") orelse false;
            if (!is_implicit and visibility != .public) continue;
            if (isExplicitlyDeleted(inner_node_val)) continue;

            var mm = ir.CppMethod{};
            parseMethod(alloc, inner_node_val, &mm, ret.class_name) catch continue;
            mm.is_static = true;

            try ctors_list.append(alloc, mm);
        } else if (std.mem.eql(u8, kind, "CXXDestructorDecl")) {
            const is_implicit = jsonBool(inner_node_val, "isImplicit") orelse false;
            if (is_implicit) {
                ret.can_delete = true;
                continue;
            }
            if (visibility != .public) {
                ret.can_delete = false;
                continue;
            }
            if (isExplicitlyDeleted(inner_node_val)) {
                ret.can_delete = false;
                continue;
            }
        } else if (std.mem.eql(u8, kind, "CXXMethodDecl") or
            std.mem.eql(u8, kind, "CXXConversionDecl"))
        {
            const method_name = jsonStr(inner_node_val, "name") orelse return ParseError.MissingName;

            var mm = ir.CppMethod{};

            if (visibility == .private) {
                mm.is_private = true;
                try private_methods_list.append(alloc, method_name);
                continue;
            }

            if (isExplicitlyDeleted(inner_node_val) or std.mem.eql(u8, ret.class_name, "QBrushData")) {
                continue;
            }

            mm.method_name = method_name;

            parseMethod(alloc, inner_node_val, &mm, ret.class_name) catch |err| {
                if (err == ParseError.TooComplex) continue;
                return err;
            };

            // Check for private signal (QPrivateSignal parameter)
            if (isPrivateSignal(mm)) |priv_idx| {
                // Remove the QPrivateSignal parameter
                var new_params: std.ArrayList(ir.CppParameter) = .empty;
                for (mm.parameters, 0..) |param, i| {
                    if (i != priv_idx) {
                        try new_params.append(alloc, param);
                    }
                }
                mm.parameters = try new_params.toOwnedSlice(alloc);
                mm.is_signal = true;
                try private_signals_list.append(alloc, mm);
                continue;
            }

            mm.is_signal = is_signal and !mm.is_static;
            mm.is_protected = (visibility == .protected);

            try methods_list.append(alloc, mm);
        } else if (std.mem.eql(u8, kind, "FieldDecl")) {
            const field_name = jsonStr(inner_node_val, "name") orelse continue;

            if (visibility == .private or visibility == .protected) continue;

            if (jsonObj(inner_node_val, "type")) |typobj| {
                const qual_type = try getPreferredType(alloc, typobj);
                if (qual_type.len > 0) {
                    var field_type = parseSingleTypeString(alloc, qual_type, add_name_prefix);
                    field_type.parameter_name = field_name;

                    if (contains(field_type.parameter_type, "unnamed") or
                        contains(field_type.parameter_type, "struct ") or
                        contains(field_type.parameter_type, "void"))
                    {
                        continue;
                    }

                    const skip_setter = endsWith(qual_type, "const");

                    // Getter
                    const getter = ir.CppMethod{
                        .method_name = field_name,
                        .return_type = field_type,
                        .parameters = &.{},
                        .is_const = true,
                        .is_variable = true,
                        .variable_field_name = field_name,
                    };
                    try methods_list.append(alloc, getter);

                    // Setter
                    if (!skip_setter) {
                        const setter_name = try std.fmt.allocPrint(alloc, "set{c}{s}", .{
                            std.ascii.toUpper(field_name[0]),
                            field_name[1..],
                        });
                        const setter_params = try alloc.alloc(ir.CppParameter, 1);
                        setter_params[0] = field_type;
                        const setter = ir.CppMethod{
                            .method_name = setter_name,
                            .return_type = ir.CppParameter{ .parameter_type = "void" },
                            .parameters = setter_params,
                            .is_variable = true,
                            .variable_field_name = field_name,
                        };
                        try methods_list.append(alloc, setter);
                    }
                }
            }
        } else {
            // Unknown inner node kind - skip
            continue;
        }
    }

    ret.ctors = try ctors_list.toOwnedSlice(alloc);
    ret.methods = try methods_list.toOwnedSlice(alloc);
    ret.child_classdefs = try child_classdefs_list.toOwnedSlice(alloc);
    ret.child_typedefs = try child_typedefs_list.toOwnedSlice(alloc);
    ret.child_enums = try child_enums_list.toOwnedSlice(alloc);
    ret.private_methods = try private_methods_list.toOwnedSlice(alloc);
    ret.private_signals = try private_signals_list.toOwnedSlice(alloc);
    return ret;
}

// -------------------------------------------------------------------------
// isExplicitlyDeleted
// -------------------------------------------------------------------------

/// Check if a node is marked `= delete`.
fn isExplicitlyDeleted(node: Value) bool {
    if (jsonBool(node, "explicitlyDeleted")) |del| {
        if (del) return true;
    }
    if (jsonStr(node, "explicitlyDefaulted")) |def| {
        if (std.mem.eql(u8, def, "deleted")) return true;
    }
    return false;
}

// -------------------------------------------------------------------------
// isPrivateSignal
// -------------------------------------------------------------------------

/// Check if a method has a QPrivateSignal parameter. Returns the index if found.
fn isPrivateSignal(mm: ir.CppMethod) ?usize {
    for (mm.parameters, 0..) |param, i| {
        if (endsWith(param.parameter_type, "::QPrivateSignal")) {
            return i;
        }
    }
    return null;
}

// -------------------------------------------------------------------------
// parseMethod
// -------------------------------------------------------------------------

/// Parse a Clang method node, filling in return type, parameters, and flags.
fn parseMethod(alloc: Allocator, node: Value, mm: *ir.CppMethod, class_name: []const u8) ParseError!void {
    if (jsonObj(node, "type")) |typobj| {
        const qual_type = try getPreferredType(alloc, typobj);
        if (qual_type.len > 0) {
            const result = try parseTypeString(alloc, qual_type, class_name);
            mm.return_type = result.return_type;
            mm.parameters = result.params;
            mm.is_const = result.is_const;
        }
    }

    // Static
    if (jsonStr(node, "storageClass")) |sc| {
        if (std.mem.eql(u8, sc, "static")) {
            mm.is_static = true;
        }
    }

    // Virtual
    if (jsonBool(node, "virtual")) |v| {
        if (v) mm.is_virtual = true;
    }

    // Pure virtual
    if (jsonBool(node, "pure")) |p| {
        if (p) mm.is_pure_virtual = true;
    }

    // Process inner parameter declarations
    if (jsonArray(node, "inner")) |method_inner| {
        var param_counter: usize = 0;
        for (method_inner) |method_obj_val| {
            if (method_obj_val != .object) continue;

            const obj_kind = jsonStr(method_obj_val, "kind") orelse continue;

            if (std.mem.eql(u8, obj_kind, "ParmVarDecl")) {
                if (param_counter >= mm.parameters.len) {
                    param_counter += 1;
                    continue;
                }

                var parm_name: []const u8 = jsonStr(method_obj_val, "name") orelse "";

                if (parm_name.len == 0) {
                    // Update parameter type with desugared version if available
                    if (jsonObj(method_obj_val, "type")) |typ| {
                        if (jsonStr(typ, "desugaredQualType")) |desugared| {
                            mm.parameters[param_counter].parameter_type = desugared;
                        }
                    }

                    // Generate a default parameter name
                    if (mm.parameters.len == 1 and mm.method_name.len >= 4 and startsWith(mm.method_name, "set")) {
                        // Q_PROPERTY setter naming
                        const first_char = std.ascii.toLower(mm.method_name[3]);
                        parm_name = try std.fmt.allocPrint(alloc, "{c}{s}", .{ first_char, mm.method_name[4..] });
                    } else {
                        parm_name = try std.fmt.allocPrint(alloc, "param{d}", .{param_counter + 1});
                    }
                }

                // Block reserved words
                if (zigReservedWord(parm_name)) {
                    parm_name = try std.fmt.allocPrint(alloc, "{s}Val", .{parm_name});
                }

                mm.parameters[param_counter].parameter_name = parm_name;

                // If the parameter has inner nodes, it has a default value (optional)
                if (jsonArray(method_obj_val, "inner") != null) {
                    mm.parameters[param_counter].optional = true;
                }

                param_counter += 1;
            } else if (std.mem.eql(u8, obj_kind, "OverrideAttr")) {
                mm.is_virtual = true;
            }
            // FullComment and others: skip
        }
    }

    // Fixups: QDataStream operator<< / operator>> return self-reference
    if ((std.mem.eql(u8, mm.method_name, "operator<<") or
        std.mem.eql(u8, mm.method_name, "operator>>") or
        std.mem.eql(u8, mm.method_name, "writeBytes")) and
        std.mem.eql(u8, mm.return_type.parameter_type, "QDataStream") and
        mm.return_type.by_ref)
    {
        mm.return_type = ir.CppParameter{ .parameter_type = "void" };
    }

    // operator= / operator&= etc. always return void
    if (std.mem.eql(u8, mm.method_name, "operator=") or
        std.mem.eql(u8, mm.method_name, "operator&=") or
        std.mem.eql(u8, mm.method_name, "operator|=") or
        std.mem.eql(u8, mm.method_name, "operator^="))
    {
        mm.return_type = ir.CppParameter{ .parameter_type = "void" };
    }
}

// -------------------------------------------------------------------------
// parseTypeString
// -------------------------------------------------------------------------

const TypeStringResult = struct {
    return_type: ir.CppParameter,
    params: []ir.CppParameter,
    is_const: bool,
};

/// Parse a complete method type string like "QString (const char *, int) const"
/// into return type + parameter types.
fn parseTypeString(alloc: Allocator, type_string: []const u8, class_name: []const u8) ParseError!TypeStringResult {
    // Rvalue references not supported
    if (contains(type_string, "&&")) {
        return ParseError.TooComplex;
    }

    // Find outermost ( and )
    const opos = std.mem.indexOf(u8, type_string, "(") orelse return ParseError.MissingBrackets;
    const epos = std.mem.lastIndexOf(u8, type_string, ")") orelse return ParseError.MissingBrackets;

    const is_const = contains(type_string[epos..], "const");

    const return_type_str = std.mem.trim(u8, type_string[0..opos], " ");
    const return_type = parseSingleTypeString(alloc, return_type_str, class_name);

    const inner_str = type_string[opos + 1 .. epos];

    // Should be no more brackets
    if (std.mem.indexOf(u8, inner_str, "(") != null or std.mem.indexOf(u8, inner_str, ")") != null) {
        return ParseError.TooComplex;
    }

    // Tokenize parameters
    const param_tokens = try tokenizeMultipleParameters(alloc, inner_str);

    var params_list: std.ArrayList(ir.CppParameter) = .empty;
    for (param_tokens) |p| {
        const insert = parseSingleTypeString(alloc, p, class_name);
        if (insert.parameter_type.len > 0) {
            try params_list.append(alloc, insert);
        }
    }

    return TypeStringResult{
        .return_type = return_type,
        .params = try params_list.toOwnedSlice(alloc),
        .is_const = is_const,
    };
}

// -------------------------------------------------------------------------
// tokenizeMultipleParameters
// -------------------------------------------------------------------------

/// Split a parameter list string by commas, respecting template brackets.
fn tokenizeMultipleParameters(alloc: Allocator, p: []const u8) ![][]const u8 {
    var template_depth: i32 = 0;
    var tokens: std.ArrayList([]const u8) = .empty;
    var wip: std.ArrayList(u8) = .empty;

    const trimmed = std.mem.trim(u8, p, " ");

    for (trimmed) |c| {
        if (c == '<') {
            try wip.append(alloc, c);
            template_depth += 1;
        } else if (c == '>') {
            try wip.append(alloc, c);
            template_depth -= 1;
        } else if (c == ',' and template_depth == 0) {
            try tokens.append(alloc, try wip.toOwnedSlice(alloc));
            wip = .empty;
        } else {
            try wip.append(alloc, c);
        }
    }

    try tokens.append(alloc, try wip.toOwnedSlice(alloc));
    return try tokens.toOwnedSlice(alloc);
}

// -------------------------------------------------------------------------
// tokenizeSingleParameter
// -------------------------------------------------------------------------

/// Tokenize a single Clang qualType into separate tokens, keeping template/bracket
/// contents as single tokens.
fn tokenizeSingleParameter(alloc: Allocator, p: []const u8) ![][]const u8 {
    var template_depth: i32 = 0;
    var tokens: std.ArrayList([]const u8) = .empty;
    var wip: std.ArrayList(u8) = .empty;

    const trimmed = std.mem.trim(u8, p, " ");

    for (trimmed) |c| {
        if (c == '<' or c == '(') {
            try wip.append(alloc, c);
            template_depth += 1;
        } else if (c == '>' or c == ')') {
            try wip.append(alloc, c);
            template_depth -= 1;
        } else if ((c == '*' or c == '&') and template_depth == 0) {
            if (wip.items.len > 0) {
                try tokens.append(alloc, try wip.toOwnedSlice(alloc));
                wip = .empty;
            }
            const single = try alloc.alloc(u8, 1);
            single[0] = c;
            try tokens.append(alloc, single);
        } else if (c == ' ' and template_depth == 0) {
            if (wip.items.len > 0) {
                try tokens.append(alloc, try wip.toOwnedSlice(alloc));
                wip = .empty;
            }
        } else {
            try wip.append(alloc, c);
        }
    }

    if (wip.items.len > 0) {
        try tokens.append(alloc, try wip.toOwnedSlice(alloc));
    }

    return try tokens.toOwnedSlice(alloc);
}

// -------------------------------------------------------------------------
// parseSingleTypeString
// -------------------------------------------------------------------------

/// Parse a single Clang qualType string into a CppParameter.
pub fn parseSingleTypeString(alloc: Allocator, p: []const u8, class_name: []const u8) ir.CppParameter {
    const tokens = tokenizeSingleParameter(alloc, p) catch return ir.CppParameter{};
    var insert = ir.CppParameter{};
    var is_signed = false;

    var type_parts: std.ArrayList(u8) = .empty;

    for (tokens) |tok| {
        if (tok.len == 0) {
            continue;
        } else if (std.mem.eql(u8, tok, "const")) {
            insert.is_const = true;
        } else if (std.mem.eql(u8, tok, "class")) {
            // Flatten "class QFoo" → "QFoo"
            continue;
        } else if (std.mem.eql(u8, tok, "&")) {
            insert.by_ref = true;
        } else if (std.mem.eql(u8, tok, "signed")) {
            is_signed = true;
        } else if (std.mem.eql(u8, tok, "*")) {
            insert.pointer = true;
            insert.pointer_count += 1;
        } else {
            // Part of the type name
            var actual_tok = tok;
            if (std.mem.eql(u8, tok, "char") and is_signed) {
                actual_tok = "signed char";
                is_signed = false;
            }
            if (type_parts.items.len > 0) {
                type_parts.append(alloc, ' ') catch {};
            }
            type_parts.appendSlice(alloc, actual_tok) catch {};
        }
    }

    var param_type: []const u8 = type_parts.toOwnedSlice(alloc) catch "";

    // Trim leading spaces
    param_type = std.mem.trim(u8, param_type, " ");

    // Trim leading ::
    if (startsWith(param_type, "::")) {
        param_type = param_type[2..];
    }

    // Remove "enum " prefix
    param_type = removeAllOccurrences(alloc, param_type, "enum ") catch param_type;

    // Remove "::enum_type"
    param_type = removeAllOccurrences(alloc, param_type, "::enum_type") catch param_type;

    insert.parameter_type = param_type;

    _ = class_name;

    return insert;
}

// -------------------------------------------------------------------------
// parseFunctionDecl
// -------------------------------------------------------------------------

const FunctionInfo = struct {
    name: []const u8,
    mangled_name: []const u8,
    return_type: ir.CppParameter,
    params: []ir.CppParameter,
    is_const: bool,
};

/// Parse a top-level function declaration node.
fn parseFunctionDecl(alloc: Allocator, node: Value) !?FunctionInfo {
    const name = jsonStr(node, "name") orelse return null;

    if (startsWith(name, "operator")) return null;

    const mangled_name = jsonStr(node, "mangledName") orelse return null;

    const type_info = jsonObj(node, "type") orelse return null;
    var qual_type = jsonStr(type_info, "qualType") orelse return null;

    qual_type = try replaceAll(alloc, qual_type, "enum ", "");
    qual_type = try replaceAll(alloc, qual_type, "::enum_type", "");

    const fn_class_name = try getClassFromMangledName(alloc, mangled_name, name);
    const result = parseTypeString(alloc, qual_type, fn_class_name) catch return null;

    return FunctionInfo{
        .name = name,
        .mangled_name = mangled_name,
        .return_type = result.return_type,
        .params = result.params,
        .is_const = result.is_const,
    };
}

// -------------------------------------------------------------------------
// getClassFromMangledName
// -------------------------------------------------------------------------

/// Extract the class name from a C++ mangled name.
/// Format: _ZN<length><classname><length><methodname>E...
fn getClassFromMangledName(alloc: Allocator, mangled_name: []const u8, method_name: []const u8) ![]const u8 {
    if (!contains(mangled_name, "ZN")) return "";
    if (std.mem.indexOf(u8, mangled_name, "E") == null) return "";

    // Find "ZN" and take everything after it
    const zn_pos = std.mem.indexOf(u8, mangled_name, "ZN") orelse return "";
    var rest = mangled_name[zn_pos + 2 ..];

    var result: std.ArrayList([]const u8) = .empty;

    while (rest.len > 0) {
        // Skip non-digit characters
        if (rest[0] < '0' or rest[0] > '9') {
            rest = rest[1..];
            continue;
        }

        // Read the length prefix
        var digit_end: usize = 0;
        while (digit_end < rest.len and rest[digit_end] >= '0' and rest[digit_end] <= '9') {
            digit_end += 1;
        }

        const name_len = std.fmt.parseInt(usize, rest[0..digit_end], 10) catch return "";
        rest = rest[digit_end..];

        if (name_len == 0 or rest.len < name_len) return "";

        const name_part = rest[0..name_len];
        rest = rest[name_len..];

        if (std.mem.eql(u8, name_part, method_name)) break;

        try result.append(alloc, name_part);
    }

    if (result.items.len == 0) return "";

    // Join with "::"
    var total_len: usize = 0;
    for (result.items, 0..) |part, i| {
        total_len += part.len;
        if (i > 0) total_len += 2;
    }

    var buf = try alloc.alloc(u8, total_len);
    var pos: usize = 0;
    for (result.items, 0..) |part, i| {
        if (i > 0) {
            buf[pos] = ':';
            buf[pos + 1] = ':';
            pos += 2;
        }
        @memcpy(buf[pos .. pos + part.len], part);
        pos += part.len;
    }

    return buf;
}

/// Check if a class should be skipped during function processing.
fn shouldSkipClass(class_name: []const u8) bool {
    return std.mem.eql(u8, class_name, "Qt") or std.mem.eql(u8, class_name, "QTest");
}

/// Create a CppMethod from a FunctionInfo.
fn createMethodFromFunctionInfo(alloc: Allocator, info: FunctionInfo) !ir.CppMethod {
    const params = try alloc.alloc(ir.CppParameter, info.params.len);
    for (info.params, 0..) |param, i| {
        params[i] = param;
        params[i].parameter_name = try std.fmt.allocPrint(alloc, "param{d}", .{i + 1});
    }

    return ir.CppMethod{
        .method_name = info.name,
        .return_type = info.return_type,
        .parameters = params,
        .is_const = info.is_const,
        .is_static = true,
    };
}

/// Add a method to a class in the class list, or create a new class entry.
fn addMethodToClassList(
    alloc: Allocator,
    classes: *std.ArrayList(ir.CppClass),
    class_name: []const u8,
    method: ir.CppMethod,
) !void {
    // Find existing class
    for (classes.items, 0..) |_, i| {
        if (std.mem.eql(u8, classes.items[i].class_name, class_name)) {
            var methods: std.ArrayList(ir.CppMethod) = .empty;
            try methods.appendSlice(alloc, classes.items[i].methods);
            try methods.append(alloc, method);
            classes.items[i].methods = try methods.toOwnedSlice(alloc);
            return;
        }
    }

    // Create new class
    const method_slice = try alloc.alloc(ir.CppMethod, 1);
    method_slice[0] = method;
    try classes.append(alloc, ir.CppClass{
        .class_name = class_name,
        .methods = method_slice,
    });
}

// -------------------------------------------------------------------------
// String helpers
// -------------------------------------------------------------------------

fn contains(haystack: []const u8, needle: []const u8) bool {
    return std.mem.indexOf(u8, haystack, needle) != null;
}

fn startsWith(haystack: []const u8, prefix: []const u8) bool {
    return std.mem.startsWith(u8, haystack, prefix);
}

fn endsWith(haystack: []const u8, suffix: []const u8) bool {
    return std.mem.endsWith(u8, haystack, suffix);
}

fn replaceAll(alloc: Allocator, haystack: []const u8, needle: []const u8, replacement: []const u8) ![]const u8 {
    if (needle.len == 0) {
        const dup = try alloc.alloc(u8, haystack.len);
        @memcpy(dup, haystack);
        return dup;
    }

    var buf: std.ArrayList(u8) = .empty;
    var i: usize = 0;
    while (i < haystack.len) {
        if (i + needle.len <= haystack.len and std.mem.eql(u8, haystack[i .. i + needle.len], needle)) {
            try buf.appendSlice(alloc, replacement);
            i += needle.len;
        } else {
            try buf.append(alloc, haystack[i]);
            i += 1;
        }
    }
    return try buf.toOwnedSlice(alloc);
}

/// Remove all occurrences of `needle` from `haystack`.
fn removeAllOccurrences(alloc: Allocator, haystack: []const u8, needle: []const u8) ![]const u8 {
    return replaceAll(alloc, haystack, needle, "");
}

// -------------------------------------------------------------------------
// Tests
// -------------------------------------------------------------------------

test "tokenizeSingleParameter basic" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const tokens = try tokenizeSingleParameter(alloc, "const QString &");
    try std.testing.expectEqual(@as(usize, 3), tokens.len);
    try std.testing.expectEqualStrings("const", tokens[0]);
    try std.testing.expectEqualStrings("QString", tokens[1]);
    try std.testing.expectEqualStrings("&", tokens[2]);
}

test "tokenizeMultipleParameters template" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const tokens = try tokenizeMultipleParameters(alloc, "QMap<int, QString>, int");
    try std.testing.expectEqual(@as(usize, 2), tokens.len);
    try std.testing.expectEqualStrings("QMap<int, QString>", tokens[0]);
    try std.testing.expectEqualStrings(" int", tokens[1]);
}

test "parseSingleTypeString const pointer" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const p = parseSingleTypeString(alloc, "const char *", "");
    try std.testing.expectEqualStrings("char", p.parameter_type);
    try std.testing.expect(p.is_const);
    try std.testing.expect(p.pointer);
    try std.testing.expectEqual(@as(i32, 1), p.pointer_count);
}

test "parseSingleTypeString reference" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const p = parseSingleTypeString(alloc, "const QString &", "");
    try std.testing.expectEqualStrings("QString", p.parameter_type);
    try std.testing.expect(p.is_const);
    try std.testing.expect(p.by_ref);
}

test "parseTypeString method" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const result = try parseTypeString(alloc, "QString (const char *, int) const", "");
    try std.testing.expectEqualStrings("QString", result.return_type.parameter_type);
    try std.testing.expect(result.is_const);
    try std.testing.expectEqual(@as(usize, 2), result.params.len);
    try std.testing.expectEqualStrings("char", result.params[0].parameter_type);
    try std.testing.expect(result.params[0].is_const);
    try std.testing.expect(result.params[0].pointer);
    try std.testing.expectEqualStrings("int", result.params[1].parameter_type);
}

test "parseTypeString rvalue reference" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const result = parseTypeString(alloc, "void (QString &&)", "");
    try std.testing.expectError(ParseError.TooComplex, result);
}

test "zigReservedWord" {
    try std.testing.expect(zigReservedWord("const"));
    try std.testing.expect(zigReservedWord("fn"));
    try std.testing.expect(zigReservedWord("type"));
    try std.testing.expect(zigReservedWord("self"));
    try std.testing.expect(zigReservedWord("i8"));
    try std.testing.expect(zigReservedWord("u16"));
    try std.testing.expect(!zigReservedWord("widget"));
    try std.testing.expect(!zigReservedWord("button"));
}

test "getClassFromMangledName" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const result = try getClassFromMangledName(alloc, "_ZN7QWidget4showEv", "show");
    try std.testing.expectEqualStrings("QWidget", result);
}

test "getClassFromMangledName nested" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const result = try getClassFromMangledName(alloc, "_ZN11QMetaObject10ConnectionD1Ev", "Connection");
    try std.testing.expectEqualStrings("QMetaObject", result);
}

test "shouldSkipClass" {
    try std.testing.expect(shouldSkipClass("Qt"));
    try std.testing.expect(shouldSkipClass("QTest"));
    try std.testing.expect(!shouldSkipClass("QWidget"));
}

test "shouldPreferQualType" {
    try std.testing.expect(shouldPreferQualType("intptr_t"));
    try std.testing.expect(shouldPreferQualType("uint32_t"));
    try std.testing.expect(shouldPreferQualType("quint64"));
    try std.testing.expect(shouldPreferQualType("qint32"));
    try std.testing.expect(shouldPreferQualType("QList<int>"));
    try std.testing.expect(!shouldPreferQualType("QString"));
}

test "parseSingleTypeString signed char" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const p = parseSingleTypeString(alloc, "signed char", "");
    try std.testing.expectEqualStrings("signed char", p.parameter_type);
}

test "parseSingleTypeString double pointer" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const p = parseSingleTypeString(alloc, "char **", "");
    try std.testing.expectEqualStrings("char", p.parameter_type);
    try std.testing.expect(p.pointer);
    try std.testing.expectEqual(@as(i32, 2), p.pointer_count);
}

test "isExplicitlyDeleted" {
    // Construct a JSON object with explicitlyDeleted=true
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const json_str = "{\"explicitlyDeleted\": true}";
    const parsed = try std.json.parseFromSlice(Value, alloc, json_str, .{ .allocate = .alloc_always });
    try std.testing.expect(isExplicitlyDeleted(parsed.value));

    const json_str2 = "{\"explicitlyDefaulted\": \"deleted\"}";
    const parsed2 = try std.json.parseFromSlice(Value, alloc, json_str2, .{ .allocate = .alloc_always });
    try std.testing.expect(isExplicitlyDeleted(parsed2.value));

    const json_str3 = "{\"name\": \"foo\"}";
    const parsed3 = try std.json.parseFromSlice(Value, alloc, json_str3, .{ .allocate = .alloc_always });
    try std.testing.expect(!isExplicitlyDeleted(parsed3.value));
}

test "processEnum simple" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const json_str =
        \\{
        \\  "kind": "EnumDecl",
        \\  "name": "Color",
        \\  "inner": [
        \\    {"kind": "EnumConstantDecl", "name": "Red", "inner": [{"kind": "ConstantExpr", "value": "0"}]},
        \\    {"kind": "EnumConstantDecl", "name": "Green", "inner": [{"kind": "ConstantExpr", "value": "1"}]},
        \\    {"kind": "EnumConstantDecl", "name": "Blue", "inner": [{"kind": "ConstantExpr", "value": "2"}]}
        \\  ]
        \\}
    ;

    const parsed = try std.json.parseFromSlice(Value, alloc, json_str, .{ .allocate = .alloc_always });
    const en = try processEnum(alloc, parsed.value, "Qt::", .public);

    try std.testing.expectEqualStrings("Qt::Color", en.enum_name);
    try std.testing.expectEqual(@as(usize, 3), en.entries.len);
    try std.testing.expectEqualStrings("Red", en.entries[0].entry_name);
    try std.testing.expectEqualStrings("0", en.entries[0].entry_value);
    try std.testing.expectEqualStrings("Green", en.entries[1].entry_name);
    try std.testing.expectEqualStrings("Blue", en.entries[2].entry_name);
}

test "processEnum auto-increment" {
    var arena = std.heap.ArenaAllocator.init(std.testing.allocator);
    defer arena.deinit();
    const alloc = arena.allocator();

    const json_str =
        \\{
        \\  "kind": "EnumDecl",
        \\  "name": "Fruit",
        \\  "inner": [
        \\    {"kind": "EnumConstantDecl", "name": "Apple"},
        \\    {"kind": "EnumConstantDecl", "name": "Banana"},
        \\    {"kind": "EnumConstantDecl", "name": "Cherry"}
        \\  ]
        \\}
    ;

    const parsed = try std.json.parseFromSlice(Value, alloc, json_str, .{ .allocate = .alloc_always });
    const en = try processEnum(alloc, parsed.value, "", .public);

    try std.testing.expectEqualStrings("Fruit", en.enum_name);
    try std.testing.expectEqual(@as(usize, 3), en.entries.len);
    try std.testing.expectEqualStrings("0", en.entries[0].entry_value);
    try std.testing.expectEqualStrings("1", en.entries[1].entry_value);
    try std.testing.expectEqualStrings("2", en.entries[2].entry_value);
}
