const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qfileselector.html
pub const qfileselector = struct {

    /// New constructs a new QFileSelector object.
    pub fn New() QtC.QFileSelector {
        return qtc.QFileSelector_new();
    }


    /// New2 constructs a new QFileSelector object.
    pub fn New2(parent: ?*anyopaque) QtC.QFileSelector {
        return qtc.QFileSelector_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSelector_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileselector.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Select(self: ?*anyopaque, filePath: []const u8, allocator: std.mem.Allocator) []const u8 {
        const filePath_str = qtc.libqt_string{
    .len = filePath.len,
    .data = filePath.ptr,
};
const _str = qtc.QFileSelector_Select(@ptrCast(self), filePath_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileselector.Select: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Select2(self: ?*anyopaque, filePath: ?*anyopaque) QtC.QUrl {
        return qtc.QFileSelector_Select2(@ptrCast(self), @ptrCast(filePath));
    }

    pub fn ExtraSelectors(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSelector_ExtraSelectors(@ptrCast(self));
    }

    pub fn SetExtraSelectors(self: ?*anyopaque, list: []const u8) void {
        qtc.QFileSelector_SetExtraSelectors(@ptrCast(self), @ptrCast(list));
    }

    pub fn AllSelectors(self: ?*anyopaque, ) []const u8 {
        return qtc.QFileSelector_AllSelectors(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSelector_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileselector.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFileSelector_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qfileselector.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFileSelector_Delete(@ptrCast(self));
    }
};
