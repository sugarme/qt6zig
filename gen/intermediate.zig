const std = @import("std");
const Allocator = std.mem.Allocator;

/// Corresponds to Go's CppParameter.
pub const CppParameter = struct {
    parameter_name: []const u8 = "",
    parameter_type: []const u8 = "",
    is_const: bool = false,
    pointer: bool = false,
    pointer_count: i32 = 0,
    by_ref: bool = false,
    optional: bool = false,

    /// If we rewrote QStringList->QList<String>, this field contains the
    /// original QStringList. Otherwise, it's null.
    qt_cpp_original_type: ?*CppParameter = null,

    /// e.g. "6,9" - version at which parameter becomes const.
    becomes_const_in_version: ?[]const u8 = null,

    /// Apply a resolved typedef onto this parameter, preserving pointer/ref/const
    /// qualifiers from both sides.
    pub fn applyTypedef(self: *CppParameter, alloc: Allocator, matched: CppParameter) !void {
        if (self.qt_cpp_original_type == null) {
            const copy = try alloc.create(CppParameter);
            copy.* = self.*;
            self.qt_cpp_original_type = copy;
        }
        self.parameter_type = matched.parameter_type;
        self.is_const = self.is_const or matched.is_const;
        self.pointer = self.pointer or matched.pointer;
        self.pointer_count += matched.pointer_count;
        self.by_ref = self.by_ref or matched.by_ref;
        self.optional = self.optional or matched.optional;
    }

    pub fn pointerTo(self: CppParameter) CppParameter {
        var ret = self;
        ret.pointer = true;
        ret.pointer_count += 1;
        return ret;
    }

    pub fn constCast(self: CppParameter, is_const: bool) CppParameter {
        var ret = self;
        ret.is_const = is_const;
        return ret;
    }

    pub fn getQtCppType(self: *const CppParameter) *const CppParameter {
        if (self.qt_cpp_original_type) |orig| {
            if (!containsStr(orig.parameter_type, "::") and containsStr(self.parameter_type, "::") and
                orig.parameter_type.len > 0 and std.ascii.isUpper(orig.parameter_type[0]) and
                !startsWithStr(self.parameter_type, "QInt"))
            {
                return self;
            }
            if (containsStr(self.parameter_type, orig.parameter_type) and
                !startsWithStr(self.parameter_type, "QFlags<"))
            {
                return self;
            }
            if (!containsStr(self.parameter_type, "<") and
                countStr(self.parameter_type, "::") > countStr(orig.parameter_type, "::"))
            {
                return self;
            }
            return orig;
        }
        return self;
    }

    pub fn isVoid(self: CppParameter) bool {
        return (std.mem.eql(u8, self.parameter_type, "void") or
            std.mem.eql(u8, self.parameter_type, "GLvoid")) and !self.pointer;
    }
};

/// Corresponds to Go's QFlagsInfo.
pub const QFlagsInfo = struct {
    underlying_enum: CppParameter,
    cabi_type: []const u8,
};

/// Corresponds to Go's CppProperty.
pub const CppProperty = struct {
    property_name: []const u8 = "",
    property_type: []const u8 = "",
    visibility: []const u8 = "",
};

/// Corresponds to Go's CppFlagProperty.
pub const CppFlagProperty = struct {
    property_name: []const u8 = "",
    property_type: CppParameter = .{},
};

/// Corresponds to Go's CppMethod.
pub const CppMethod = struct {
    /// C++ method name, unless override_method_name is set, in which case a
    /// nice alternative name.
    method_name: []const u8 = "",

    /// C++ method name, present only if we changed the target.
    override_method_name: []const u8 = "",

    /// Return type (name field not used).
    return_type: CppParameter = .{},

    parameters: []CppParameter = &.{},

    is_static: bool = false,
    is_move_ctor: bool = false,
    is_signal: bool = false,
    is_const: bool = false,
    is_variable: bool = false,
    is_private: bool = false,
    is_virtual: bool = false,

    /// Virtual method was declared with = 0 i.e. there is no base method to call.
    is_pure_virtual: bool = false,

    /// If true, we can't call this method but may still be able to overload it.
    is_protected: bool = false,

    /// Populated if there is an overload with more parameters.
    hidden_params: []CppParameter = &.{},

    inherited_from: []const u8 = "",
    inherited_in_class: []const u8 = "",
    variable_field_name: []const u8 = "",

    // Special quirks
    linux_only: bool = false,

    /// e.g. "6,7" - version at which method becomes non-const.
    becomes_non_const_in_version: ?[]const u8 = null,

    /// Returns the actual C++ call target name.
    pub fn cppCallTarget(self: CppMethod) []const u8 {
        if (self.override_method_name.len > 0) {
            return self.override_method_name;
        }
        return self.method_name;
    }

    /// Rename the method, preserving the original C++ name in override_method_name.
    pub fn rename(self: *CppMethod, new_name: []const u8) void {
        if (self.override_method_name.len == 0) {
            self.override_method_name = self.method_name;
        }
        self.method_name = new_name;
    }
};

/// Corresponds to Go's CppEnumEntry.
pub const CppEnumEntry = struct {
    entry_name: []const u8 = "",
    entry_value: []const u8 = "",
};

/// Corresponds to Go's CppEnum.
pub const CppEnum = struct {
    enum_name: []const u8 = "",
    underlying_type: CppParameter = .{},
    entries: []CppEnumEntry = &.{},
    is_protected: bool = false,
};

/// Corresponds to Go's CppTypedef.
pub const CppTypedef = struct {
    alias: []const u8 = "",
    underlying_type: CppParameter = .{},
};

/// Corresponds to Go's CppClass.
pub const CppClass = struct {
    class_name: []const u8 = "",
    abstract: bool = false,

    /// Constructors - only use the parameters.
    ctors: []CppMethod = &.{},

    /// Other class names. This only includes direct inheritance - use
    /// allInheritsClassInfo() to find recursive inheritance.
    direct_inherits: [][]const u8 = &.{},

    /// Classes included by this class.
    included_classes: [][]const u8 = &.{},

    methods: []CppMethod = &.{},
    props: []CppProperty = &.{},
    can_delete: bool = false,
    has_trivial_copy_assign: bool = false,
    has_trivial_move_assign: bool = false,

    child_typedefs: []CppTypedef = &.{},
    child_classdefs: []CppClass = &.{},
    child_enums: []CppEnum = &.{},
    private_methods: [][]const u8 = &.{},
    private_signals: []CppMethod = &.{},

    /// If true, this class is polymorphic and can be called on a pointer to a
    /// virtual base class.
    is_polymorphic: bool = false,
};

/// Corresponds to Go's CppParsedHeader.
pub const CppParsedHeader = struct {
    filename: []const u8 = "",
    typedefs: []CppTypedef = &.{},
    enums: []CppEnum = &.{},
    classes: []CppClass = &.{},

    pub fn empty(self: CppParsedHeader) bool {
        return self.enums.len == 0 and self.classes.len == 0;
    }

    /// Merge content from another parsed header into this one.
    /// Expects an ArenaAllocator so that old slices need not be freed.
    pub fn addContentFrom(self: *CppParsedHeader, alloc: Allocator, other: CppParsedHeader) !void {
        self.classes = try concatSlices(CppClass, alloc, self.classes, other.classes);
        self.enums = try concatSlices(CppEnum, alloc, self.enums, other.enums);
        self.typedefs = try concatSlices(CppTypedef, alloc, self.typedefs, other.typedefs);
    }
};

/// Corresponds to Go's InheritedMethod.
pub const InheritedMethod = struct {
    method: CppMethod = .{},
    source_class: []const u8 = "",
};

// ---------------------------------------------------------------------------
// Internal string helpers
// ---------------------------------------------------------------------------

fn containsStr(haystack: []const u8, needle: []const u8) bool {
    return std.mem.indexOf(u8, haystack, needle) != null;
}

fn startsWithStr(haystack: []const u8, prefix: []const u8) bool {
    return std.mem.startsWith(u8, haystack, prefix);
}

fn concatSlices(comptime T: type, alloc: Allocator, a: []const T, b: []const T) ![]T {
    const result = try alloc.alloc(T, a.len + b.len);
    @memcpy(result[0..a.len], a);
    @memcpy(result[a.len..], b);
    return result;
}

fn countStr(haystack: []const u8, needle: []const u8) usize {
    var n: usize = 0;
    var i: usize = 0;
    while (i < haystack.len) {
        if (std.mem.indexOf(u8, haystack[i..], needle)) |pos| {
            n += 1;
            i += pos + needle.len;
        } else {
            break;
        }
    }
    return n;
}
