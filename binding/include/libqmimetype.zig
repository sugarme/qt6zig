const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmimetype.html
pub const qmimetype = struct {

    /// New constructs a new QMimeType object.
    pub fn New() QtC.QMimeType {
        return qtc.QMimeType_new();
    }


    /// New2 constructs a new QMimeType object.
    pub fn New2(other: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeType_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMimeType object.
    pub fn New3(dd: *const QMimeTypePrivate) QtC.QMimeType {
        return qtc.QMimeType_new3(@ptrCast(dd));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMimeType_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QMimeType_IsValid(@ptrCast(self));
    }

    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QMimeType_IsDefault(@ptrCast(self));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Comment(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_Comment(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.Comment: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GenericIconName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_GenericIconName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.GenericIconName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IconName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_IconName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.IconName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn GlobPatterns(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeType_GlobPatterns(@ptrCast(self));
    }

    pub fn ParentMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeType_ParentMimeTypes(@ptrCast(self));
    }

    pub fn AllAncestors(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeType_AllAncestors(@ptrCast(self));
    }

    pub fn Aliases(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeType_Aliases(@ptrCast(self));
    }

    pub fn Suffixes(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeType_Suffixes(@ptrCast(self));
    }

    pub fn PreferredSuffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_PreferredSuffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.PreferredSuffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Inherits(self: ?*anyopaque, mimeTypeName: []const u8) bool {
        const mimeTypeName_str = qtc.libqt_string{
    .len = mimeTypeName.len,
    .data = mimeTypeName.ptr,
};
return qtc.QMimeType_Inherits(@ptrCast(self), mimeTypeName_str);
    }

    pub fn FilterString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMimeType_FilterString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimetype.FilterString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeType_Delete(@ptrCast(self));
    }
};
