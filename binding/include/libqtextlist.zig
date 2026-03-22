const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextlist.html
pub const qtextlist = struct {

    /// New constructs a new QTextList object.
    pub fn New(doc: ?*anyopaque) QtC.QTextList {
        return qtc.QTextList_new(@ptrCast(doc));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextList_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlist.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QTextList_Count(@ptrCast(self));
    }

    pub fn Item(self: ?*anyopaque, i: i32) QtC.QTextBlock {
        return qtc.QTextList_Item(@ptrCast(self), i);
    }

    pub fn ItemNumber(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QTextList_ItemNumber(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ItemText(self: ?*anyopaque, param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextList_ItemText(@ptrCast(self), @ptrCast(param1));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlist.ItemText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RemoveItem(self: ?*anyopaque, i: i32) void {
        qtc.QTextList_RemoveItem(@ptrCast(self), i);
    }

    pub fn Remove(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextList_Remove(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Add(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QTextList_Add(@ptrCast(self), @ptrCast(block));
    }

    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QTextList_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QTextListFormat {
        return qtc.QTextList_Format(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextList_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlist.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTextList_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextlist.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextList_Delete(@ptrCast(self));
    }
};
