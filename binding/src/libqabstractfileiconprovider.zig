const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html
pub const qabstractfileiconprovider = struct {

    /// New constructs a new QAbstractFileIconProvider object.
    pub fn New() QtC.QAbstractFileIconProvider {
        return qtc.QAbstractFileIconProvider_new();
    }


    pub fn Icon(self: ?*anyopaque, param1: i32) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_Icon(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIcon(self: ?*anyopaque, param1: i32) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_QBaseIcon(@ptrCast(self), @intCast(param1));
    }

    pub fn Icon2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_Icon2(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnIcon2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QIcon) void {
        qtc.QAbstractFileIconProvider_OnIcon2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIcon2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QIcon {
        return qtc.QAbstractFileIconProvider_QBaseIcon2(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Type(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractFileIconProvider_Type(@ptrCast(self), @ptrCast(param1));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QAbstractFileIconProvider_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractFileIconProvider_QBaseType(@ptrCast(self), @ptrCast(param1));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractfileiconprovider.Type: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QAbstractFileIconProvider_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractFileIconProvider_OnSetOptions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QAbstractFileIconProvider_QBaseSetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractFileIconProvider_Options(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnOptions(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractFileIconProvider_OnOptions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOptions(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractFileIconProvider_QBaseOptions(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractFileIconProvider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractfileiconprovider.html#types
pub const enums = struct {
    pub const IconType = enum {
        pub const Computer: i32 = 0;
        pub const Desktop: i32 = 1;
        pub const Trashcan: i32 = 2;
        pub const Network: i32 = 3;
        pub const Drive: i32 = 4;
        pub const Folder: i32 = 5;
        pub const File: i32 = 6;
    };

    pub const Option = enum {
        pub const DontUseCustomDirectoryIcons: i32 = 1;
    };

};
