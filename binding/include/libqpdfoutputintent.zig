const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpdfoutputintent.html
pub const qpdfoutputintent = struct {

    /// New constructs a new QPdfOutputIntent object.
    pub fn New() QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new();
    }


    /// New2 constructs a new QPdfOutputIntent object.
    pub fn New2(other: ?*anyopaque) QtC.QPdfOutputIntent {
        return qtc.QPdfOutputIntent_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OutputConditionIdentifier(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfOutputIntent_OutputConditionIdentifier(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputConditionIdentifier: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOutputConditionIdentifier(self: ?*anyopaque, identifier: []const u8) void {
        const identifier_str = qtc.libqt_string{
    .len = identifier.len,
    .data = identifier.ptr,
};
qtc.QPdfOutputIntent_SetOutputConditionIdentifier(@ptrCast(self), identifier_str);
    }

    pub fn OutputCondition(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPdfOutputIntent_OutputCondition(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfoutputintent.OutputCondition: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOutputCondition(self: ?*anyopaque, condition: []const u8) void {
        const condition_str = qtc.libqt_string{
    .len = condition.len,
    .data = condition.ptr,
};
qtc.QPdfOutputIntent_SetOutputCondition(@ptrCast(self), condition_str);
    }

    pub fn RegistryName(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QPdfOutputIntent_RegistryName(@ptrCast(self));
    }

    pub fn SetRegistryName(self: ?*anyopaque, name: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetRegistryName(@ptrCast(self), @ptrCast(name));
    }

    pub fn OutputProfile(self: ?*anyopaque, ) QtC.QColorSpace {
        return qtc.QPdfOutputIntent_OutputProfile(@ptrCast(self));
    }

    pub fn SetOutputProfile(self: ?*anyopaque, profile: ?*anyopaque) void {
        qtc.QPdfOutputIntent_SetOutputProfile(@ptrCast(self), @ptrCast(profile));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfOutputIntent_Delete(@ptrCast(self));
    }
};
