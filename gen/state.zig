const std = @import("std");
const intermediate = @import("intermediate.zig");

const CppClass = intermediate.CppClass;
const CppTypedef = intermediate.CppTypedef;
const CppEnum = intermediate.CppEnum;
const CppEnumEntry = intermediate.CppEnumEntry;
const CppParameter = intermediate.CppParameter;
const CppParsedHeader = intermediate.CppParsedHeader;

/// Corresponds to Go's lookupResultClass.
pub const LookupResultClass = struct {
    package_name: []const u8 = "",
    class: CppClass = .{},
};

/// Corresponds to Go's lookupResultTypedef.
pub const LookupResultTypedef = struct {
    package_name: []const u8 = "",
    typedef: CppTypedef = .{},
};

/// Corresponds to Go's lookupResultEnum.
pub const LookupResultEnum = struct {
    package_name: []const u8 = "",
    enum_: CppEnum = .{},
    enum_type_cabi: []const u8 = "",
    enum_type_zig: []const u8 = "",
};

/// Corresponds to Go's lookupResultImport.
pub const LookupResultImport = struct {
    package_name: []const u8 = "",
    filename: []const u8 = "",
};

/// Global state tracker that mirrors the Go package-level variables
/// KnownClassnames, KnownTypedefs, KnownEnums, and KnownImports.
///
/// All memory is expected to be owned by an ArenaAllocator passed to init().
pub const StateTracker = struct {
    /// Entries of the form QFoo::Bar if it is an inner class.
    known_classnames: std.StringHashMapUnmanaged(LookupResultClass),

    known_typedefs: std.StringHashMapUnmanaged(LookupResultTypedef),

    known_enums: std.StringHashMapUnmanaged(LookupResultEnum),

    known_imports: std.StringHashMapUnmanaged(LookupResultImport),

    allocator: std.mem.Allocator,

    pub fn init(allocator: std.mem.Allocator) StateTracker {
        return .{
            .known_classnames = std.StringHashMapUnmanaged(LookupResultClass){},
            .known_typedefs = std.StringHashMapUnmanaged(LookupResultTypedef){},
            .known_enums = std.StringHashMapUnmanaged(LookupResultEnum){},
            .known_imports = std.StringHashMapUnmanaged(LookupResultImport){},
            .allocator = allocator,
        };
    }

    pub fn deinit(self: *StateTracker) void {
        self.known_classnames.deinit(self.allocator);
        self.known_typedefs.deinit(self.allocator);
        self.known_enums.deinit(self.allocator);
        self.known_imports.deinit(self.allocator);
    }

    // -----------------------------------------------------------------
    // Lookup helpers (mirror the Go free-standing functions)
    // -----------------------------------------------------------------

    pub fn isKnownClass(self: *const StateTracker, class_name: []const u8) bool {
        return self.known_classnames.contains(class_name);
    }

    pub fn isKnownTypedef(self: *const StateTracker, name: []const u8) bool {
        return self.known_typedefs.contains(name);
    }

    pub fn isKnownEnum(self: *const StateTracker, name: []const u8) bool {
        return self.known_enums.contains(name);
    }

    pub fn getClass(self: *const StateTracker, class_name: []const u8) ?LookupResultClass {
        return self.known_classnames.get(class_name);
    }

    pub fn getTypedef(self: *const StateTracker, name: []const u8) ?LookupResultTypedef {
        return self.known_typedefs.get(name);
    }

    pub fn getEnum(self: *const StateTracker, name: []const u8) ?LookupResultEnum {
        return self.known_enums.get(name);
    }

    pub fn getImport(self: *const StateTracker, name: []const u8) ?LookupResultImport {
        return self.known_imports.get(name);
    }

    // -----------------------------------------------------------------
    // Registration (mirrors addKnownTypes)
    // -----------------------------------------------------------------

    /// Register all types from a parsed header into global state.
    pub fn addKnownTypes(self: *StateTracker, package_name: []const u8, parsed: *const CppParsedHeader) !void {
        for (parsed.classes) |class| {
            try self.known_classnames.put(self.allocator, class.class_name, .{
                .package_name = package_name,
                .class = class,
            });

            // If it's a nested class, also register its local name
            if (std.mem.indexOf(u8, class.class_name, "::")) |idx| {
                const local_name = class.class_name[idx + 2 ..];
                try self.known_classnames.put(self.allocator, local_name, .{
                    .package_name = package_name,
                    .class = class,
                });
                if (std.mem.lastIndexOf(u8, class.class_name, "::")) |last_idx| {
                    const last_name = class.class_name[last_idx + 2 ..];
                    if (!std.mem.eql(u8, last_name, local_name)) {
                        try self.known_classnames.put(self.allocator, last_name, .{
                            .package_name = package_name,
                            .class = class,
                        });
                    }
                }
            }

            // Register child typedefs
            for (class.child_typedefs) |td| {
                try self.known_typedefs.put(self.allocator, td.alias, .{
                    .package_name = package_name,
                    .typedef = td,
                });
                if (std.mem.indexOf(u8, td.alias, "::")) |idx| {
                    const local_name = td.alias[idx + 2 ..];
                    try self.known_typedefs.put(self.allocator, local_name, .{
                        .package_name = package_name,
                        .typedef = td,
                    });
                    if (std.mem.lastIndexOf(u8, td.alias, "::")) |last_idx| {
                        const last_name = td.alias[last_idx + 2 ..];
                        if (!std.mem.eql(u8, last_name, local_name)) {
                            try self.known_typedefs.put(self.allocator, last_name, .{
                                .package_name = package_name,
                                .typedef = td,
                            });
                        }
                    }
                }
            }

            // Register child classes
            for (class.child_classdefs) |child_class| {
                try self.known_classnames.put(self.allocator, child_class.class_name, .{
                    .package_name = package_name,
                    .class = child_class,
                });
                try self.registerChildClasses(child_class, package_name);
            }

            // Register child enums
            for (class.child_enums) |en| {
                try self.registerEnum(package_name, en);
            }
        }

        // Top-level typedefs
        for (parsed.typedefs) |td| {
            try self.known_typedefs.put(self.allocator, td.alias, .{
                .package_name = package_name,
                .typedef = td,
            });
        }

        // Top-level enums
        for (parsed.enums) |en| {
            try self.registerEnum(package_name, en);

            // Register imports for top-level enums
            if (parsed.filename.len > 0 and en.enum_name.len > 0) {
                const basename = std.fs.path.basename(parsed.filename);
                if (std.mem.lastIndexOf(u8, basename, ".")) |dot_idx| {
                    const filename = basename[0..dot_idx];
                    try self.known_imports.put(self.allocator, en.enum_name, .{
                        .package_name = package_name,
                        .filename = filename,
                    });
                }
            }
        }

        // Register import entries for enum value names
        if (parsed.enums.len > 0 and parsed.filename.len > 0) {
            const basename = std.fs.path.basename(parsed.filename);
            if (std.mem.lastIndexOf(u8, basename, ".")) |dot_idx| {
                const filename = basename[0..dot_idx];
                for (parsed.enums) |en| {
                    const import_name = enumValueName(en.enum_name);
                    try self.known_imports.put(self.allocator, import_name, .{
                        .package_name = package_name,
                        .filename = filename,
                    });
                }
            }
        }
    }

    /// Recursively register child classes.
    fn registerChildClasses(self: *StateTracker, class: CppClass, package_name: []const u8) !void {
        for (class.child_classdefs) |child_class| {
            try self.known_classnames.put(self.allocator, child_class.class_name, .{
                .package_name = package_name,
                .class = child_class,
            });
            try self.registerChildClasses(child_class, package_name);
        }
    }

    /// Register an enum (and its QFlags variant) into the known enums map.
    fn registerEnum(self: *StateTracker, package_name: []const u8, en: CppEnum) !void {
        const enum_type_cabi = en.underlying_type.parameter_type;
        const enum_type_zig = getEnumTypeZig(en);

        try self.known_enums.put(self.allocator, en.enum_name, .{
            .package_name = package_name,
            .enum_ = en,
            .enum_type_cabi = enum_type_cabi,
            .enum_type_zig = enum_type_zig,
        });

        // Register short name if it's a scoped enum
        if (std.mem.lastIndexOf(u8, en.enum_name, "::")) |last_idx| {
            const short_name = en.enum_name[last_idx + 2 ..];
            try self.known_enums.put(self.allocator, short_name, .{
                .package_name = package_name,
                .enum_ = en,
                .enum_type_cabi = enum_type_cabi,
                .enum_type_zig = enum_type_zig,
            });
        }

        // Flags version: QFlags<EnumName>
        // We store it with a modified enum_name but same entries.
        // The key itself encodes the QFlags wrapper.
        var flags_enum = en;
        // Build QFlags<...> key - requires allocator-backed string
        const flags_key = try std.fmt.allocPrint(self.allocator, "QFlags<{s}>", .{en.enum_name});
        flags_enum.enum_name = flags_key;

        const flag_zig = getEnumFlagTypeZig(en);

        try self.known_enums.put(self.allocator, flags_key, .{
            .package_name = package_name,
            .enum_ = flags_enum,
            .enum_type_cabi = enum_type_cabi,
            .enum_type_zig = flag_zig,
        });

        // Also register short name + "s" for flags
        if (std.mem.lastIndexOf(u8, en.enum_name, "::")) |last_idx| {
            const short_plus_s = try std.fmt.allocPrint(self.allocator, "{s}s", .{en.enum_name[last_idx + 2 ..]});
            try self.known_enums.put(self.allocator, short_plus_s, .{
                .package_name = package_name,
                .enum_ = flags_enum,
                .enum_type_cabi = enum_type_cabi,
                .enum_type_zig = flag_zig,
            });
        }
    }
};

// ---------------------------------------------------------------------------
// Enum type mapping helpers (mirrors Go's getEnumTypeZig)
// ---------------------------------------------------------------------------

/// Returns the Zig type string for an enum's value type.
pub fn getEnumTypeZig(en: CppEnum) []const u8 {
    if (en.entries.len > 0) {
        const last_val = en.entries[en.entries.len - 1].entry_value;
        if (parseInt(last_val)) |num| {
            if (num > std.math.maxInt(i32) or num < std.math.minInt(i32)) {
                return "i64";
            }
        }
    }

    return mapUnderlyingType(en.underlying_type.parameter_type);
}

/// Returns the Zig type string for a QFlags version of the enum.
pub fn getEnumFlagTypeZig(en: CppEnum) []const u8 {
    if (en.entries.len > 0) {
        const last_val = en.entries[en.entries.len - 1].entry_value;
        if (parseInt(last_val)) |num| {
            if (num > std.math.maxInt(i32) or num < std.math.minInt(i32)) {
                return "i64";
            }
            if (num >= std.math.minInt(i16) and num <= std.math.maxInt(i32)) {
                return mapUnderlyingTypeFlag(en.underlying_type.parameter_type);
            }
        }
    }

    return mapUnderlyingTypeFlag(en.underlying_type.parameter_type);
}

fn mapUnderlyingType(param_type: []const u8) []const u8 {
    // signed types
    if (eql(param_type, "char") or eql(param_type, "qint8") or eql(param_type, "signed char"))
        return "i8";
    if (eql(param_type, "int") or eql(param_type, "qint32"))
        return "i32";

    // unsigned types
    if (eql(param_type, "uchar") or eql(param_type, "quint8") or eql(param_type, "uint8_t") or eql(param_type, "unsigned char"))
        return "u8";
    if (eql(param_type, "ushort") or eql(param_type, "quint16"))
        return "u16";
    if (eql(param_type, "quint32") or eql(param_type, "unsigned int"))
        return "u32";
    if (eql(param_type, "quint64"))
        return "u64";

    // Default / unknown - the Go code panics here, but we return i32 as a
    // safe fallback so callers can decide how to handle it.
    return "i32";
}

fn mapUnderlyingTypeFlag(param_type: []const u8) []const u8 {
    // For flags, signed int maps to i32 (the "flagType" path in Go).
    if (eql(param_type, "char") or eql(param_type, "qint8") or eql(param_type, "signed char"))
        return "i8";
    if (eql(param_type, "int") or eql(param_type, "qint32"))
        return "i32";
    if (eql(param_type, "uchar") or eql(param_type, "quint8") or eql(param_type, "uint8_t") or eql(param_type, "unsigned char"))
        return "u8";
    if (eql(param_type, "ushort") or eql(param_type, "quint16"))
        return "u16";
    if (eql(param_type, "quint32") or eql(param_type, "unsigned int"))
        return "u32";
    if (eql(param_type, "quint64"))
        return "u64";

    return "i32";
}

/// Strip back one :: pair from the enum name to get the value name prefix.
/// Mirrors Go's CppEnum.EnumValueName().
fn enumValueName(enum_name: []const u8) []const u8 {
    if (std.mem.lastIndexOf(u8, enum_name, "::")) |idx| {
        return enum_name[0..idx];
    }
    return enum_name;
}

fn eql(a: []const u8, b: []const u8) bool {
    return std.mem.eql(u8, a, b);
}

fn parseInt(s: []const u8) ?i64 {
    return std.fmt.parseInt(i64, s, 10) catch null;
}

/// Convenience alias used by transform passes and main.
pub const GlobalState = StateTracker;
