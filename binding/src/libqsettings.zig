const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsettings.html
pub const qsettings = struct {

    /// New constructs a new QSettings object.
    pub fn New(organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
return qtc.QSettings_new(organization_str);
    }


    /// New2 constructs a new QSettings object.
    pub fn New2(scope: i32, organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
return qtc.QSettings_new2(@intCast(scope), organization_str);
    }


    /// New3 constructs a new QSettings object.
    pub fn New3(format: i32, scope: i32, organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
return qtc.QSettings_new3(@intCast(format), @intCast(scope), organization_str);
    }


    /// New4 constructs a new QSettings object.
    pub fn New4(fileName: []const u8, format: i32) QtC.QSettings {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QSettings_new4(fileName_str, @intCast(format));
    }


    /// New5 constructs a new QSettings object.
    pub fn New5() QtC.QSettings {
        return qtc.QSettings_new5();
    }


    /// New6 constructs a new QSettings object.
    pub fn New6(scope: i32) QtC.QSettings {
        return qtc.QSettings_new6(@intCast(scope));
    }


    /// New7 constructs a new QSettings object.
    pub fn New7(organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new7(organization_str, application_str);
    }


    /// New8 constructs a new QSettings object.
    pub fn New8(organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new8(organization_str, application_str, @ptrCast(parent));
    }


    /// New9 constructs a new QSettings object.
    pub fn New9(scope: i32, organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new9(@intCast(scope), organization_str, application_str);
    }


    /// New10 constructs a new QSettings object.
    pub fn New10(scope: i32, organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new10(@intCast(scope), organization_str, application_str, @ptrCast(parent));
    }


    /// New11 constructs a new QSettings object.
    pub fn New11(format: i32, scope: i32, organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new11(@intCast(format), @intCast(scope), organization_str, application_str);
    }


    /// New12 constructs a new QSettings object.
    pub fn New12(format: i32, scope: i32, organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
    .len = organization.len,
    .data = organization.ptr,
};
const application_str = qtc.libqt_string{
    .len = application.len,
    .data = application.ptr,
};
return qtc.QSettings_new12(@intCast(format), @intCast(scope), organization_str, application_str, @ptrCast(parent));
    }


    /// New13 constructs a new QSettings object.
    pub fn New13(fileName: []const u8, format: i32, parent: ?*anyopaque) QtC.QSettings {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QSettings_new13(fileName_str, @intCast(format), @ptrCast(parent));
    }


    /// New14 constructs a new QSettings object.
    pub fn New14(parent: ?*anyopaque) QtC.QSettings {
        return qtc.QSettings_new14(@ptrCast(parent));
    }


    /// New15 constructs a new QSettings object.
    pub fn New15(scope: i32, parent: ?*anyopaque) QtC.QSettings {
        return qtc.QSettings_new15(@intCast(scope), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QSettings_Clear(@ptrCast(self));
    }

    pub fn Sync(self: ?*anyopaque, ) void {
        qtc.QSettings_Sync(@ptrCast(self));
    }

    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QSettings_Status(@ptrCast(self));
    }

    pub fn IsAtomicSyncRequired(self: ?*anyopaque, ) bool {
        return qtc.QSettings_IsAtomicSyncRequired(@ptrCast(self));
    }

    pub fn SetAtomicSyncRequired(self: ?*anyopaque, enable: bool) void {
        qtc.QSettings_SetAtomicSyncRequired(@ptrCast(self), enable);
    }

    pub fn BeginGroup(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QSettings_BeginGroup(@ptrCast(self), prefix_str);
    }

    pub fn EndGroup(self: ?*anyopaque, ) void {
        qtc.QSettings_EndGroup(@ptrCast(self));
    }

    pub fn Group(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_Group(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Group: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BeginReadArray(self: ?*anyopaque, prefix: []const u8) i32 {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
return qtc.QSettings_BeginReadArray(@ptrCast(self), prefix_str);
    }

    pub fn BeginWriteArray(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QSettings_BeginWriteArray(@ptrCast(self), prefix_str);
    }

    pub fn EndArray(self: ?*anyopaque, ) void {
        qtc.QSettings_EndArray(@ptrCast(self));
    }

    pub fn SetArrayIndex(self: ?*anyopaque, i: i32) void {
        qtc.QSettings_SetArrayIndex(@ptrCast(self), i);
    }

    pub fn AllKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QSettings_AllKeys(@ptrCast(self));
    }

    pub fn ChildKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QSettings_ChildKeys(@ptrCast(self));
    }

    pub fn ChildGroups(self: ?*anyopaque, ) []const u8 {
        return qtc.QSettings_ChildGroups(@ptrCast(self));
    }

    pub fn IsWritable(self: ?*anyopaque, ) bool {
        return qtc.QSettings_IsWritable(@ptrCast(self));
    }

    pub fn SetValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QSettings_SetValue(@ptrCast(self), key_str, @ptrCast(value));
    }

    pub fn Value(self: ?*anyopaque, key: []const u8, defaultValue: ?*anyopaque) QtC.QVariant {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSettings_Value(@ptrCast(self), key_str, @ptrCast(defaultValue));
    }

    pub fn Value2(self: ?*anyopaque, key: []const u8) QtC.QVariant {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSettings_Value2(@ptrCast(self), key_str);
    }

    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QSettings_Remove(@ptrCast(self), key_str);
    }

    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSettings_Contains(@ptrCast(self), key_str);
    }

    pub fn SetFallbacksEnabled(self: ?*anyopaque, b: bool) void {
        qtc.QSettings_SetFallbacksEnabled(@ptrCast(self), b);
    }

    pub fn FallbacksEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSettings_FallbacksEnabled(@ptrCast(self));
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Format(self: ?*anyopaque, ) i32 {
        return qtc.QSettings_Format(@ptrCast(self));
    }

    pub fn Scope(self: ?*anyopaque, ) i32 {
        return qtc.QSettings_Scope(@ptrCast(self));
    }

    pub fn OrganizationName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_OrganizationName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.OrganizationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ApplicationName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_ApplicationName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.ApplicationName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDefaultFormat(format: i32) void {
        qtc.QSettings_SetDefaultFormat(@intCast(format));
    }

    pub fn DefaultFormat() i32 {
        return qtc.QSettings_DefaultFormat();
    }

    pub fn SetPath(format: i32, scope: i32, path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QSettings_SetPath(@intCast(format), @intCast(scope), path_str);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSettings_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BeginWriteArray2(self: ?*anyopaque, prefix: []const u8, size: i32) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QSettings_BeginWriteArray2(@ptrCast(self), prefix_str, size);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSettings_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/settings.html#types
pub const enums = struct {
    pub const Status = enum {
        pub const NoError: i32 = 0;
        pub const AccessError: i32 = 1;
        pub const FormatError: i32 = 2;
    };

    pub const Format = enum {
        pub const NativeFormat: i32 = 0;
        pub const IniFormat: i32 = 1;
        pub const Registry32Format: i32 = 2;
        pub const Registry64Format: i32 = 3;
        pub const InvalidFormat: i32 = 16;
        pub const CustomFormat1: i32 = 17;
        pub const CustomFormat2: i32 = 18;
        pub const CustomFormat3: i32 = 19;
        pub const CustomFormat4: i32 = 20;
        pub const CustomFormat5: i32 = 21;
        pub const CustomFormat6: i32 = 22;
        pub const CustomFormat7: i32 = 23;
        pub const CustomFormat8: i32 = 24;
        pub const CustomFormat9: i32 = 25;
        pub const CustomFormat10: i32 = 26;
        pub const CustomFormat11: i32 = 27;
        pub const CustomFormat12: i32 = 28;
        pub const CustomFormat13: i32 = 29;
        pub const CustomFormat14: i32 = 30;
        pub const CustomFormat15: i32 = 31;
        pub const CustomFormat16: i32 = 32;
    };

    pub const Scope = enum {
        pub const UserScope: i32 = 0;
        pub const SystemScope: i32 = 1;
    };

};
