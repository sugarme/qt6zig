const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhstspolicy.html
pub const qhstspolicy = struct {

    /// New constructs a new QHstsPolicy object.
    pub fn New() QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new();
    }


    /// New2 constructs a new QHstsPolicy object.
    pub fn New2(expiry: ?*anyopaque, flags: i32, host: []const u8) QtC.QHstsPolicy {
        const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
return qtc.QHstsPolicy_new2(@ptrCast(expiry), @intCast(flags), host_str);
    }


    /// New3 constructs a new QHstsPolicy object.
    pub fn New3(rhs: ?*anyopaque) QtC.QHstsPolicy {
        return qtc.QHstsPolicy_new3(@ptrCast(rhs));
    }


    /// New4 constructs a new QHstsPolicy object.
    pub fn New4(expiry: ?*anyopaque, flags: i32, host: []const u8, mode: i32) QtC.QHstsPolicy {
        const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
return qtc.QHstsPolicy_new4(@ptrCast(expiry), @intCast(flags), host_str, @intCast(mode));
    }


    pub fn OperatorAssign(self: ?*anyopaque, rhs: ?*anyopaque) void {
        qtc.QHstsPolicy_OperatorAssign(@ptrCast(self), @ptrCast(rhs));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHstsPolicy_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
qtc.QHstsPolicy_SetHost(@ptrCast(self), host_str);
    }

    pub fn Host(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHstsPolicy_Host(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetExpiry(self: ?*anyopaque, expiry: ?*anyopaque) void {
        qtc.QHstsPolicy_SetExpiry(@ptrCast(self), @ptrCast(expiry));
    }

    pub fn Expiry(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QHstsPolicy_Expiry(@ptrCast(self));
    }

    pub fn SetIncludesSubDomains(self: ?*anyopaque, include: bool) void {
        qtc.QHstsPolicy_SetIncludesSubDomains(@ptrCast(self), include);
    }

    pub fn IncludesSubDomains(self: ?*anyopaque, ) bool {
        return qtc.QHstsPolicy_IncludesSubDomains(@ptrCast(self));
    }

    pub fn IsExpired(self: ?*anyopaque, ) bool {
        return qtc.QHstsPolicy_IsExpired(@ptrCast(self));
    }

    pub fn SetHost2(self: ?*anyopaque, host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
    .len = host.len,
    .data = host.ptr,
};
qtc.QHstsPolicy_SetHost2(@ptrCast(self), host_str, @intCast(mode));
    }

    pub fn Host1(self: ?*anyopaque, options: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHstsPolicy_Host1(@ptrCast(self), @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhstspolicy.Host1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHstsPolicy_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/hstspolicy.html#types
pub const enums = struct {
    pub const PolicyFlag = enum {
        pub const IncludeSubDomains: i32 = 1;
    };

};
