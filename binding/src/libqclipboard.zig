const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qclipboard.html
pub const qclipboard = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QClipboard_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QClipboard_Clear(@ptrCast(self));
    }

    pub fn SupportsSelection(self: ?*anyopaque, ) bool {
        return qtc.QClipboard_SupportsSelection(@ptrCast(self));
    }

    pub fn SupportsFindBuffer(self: ?*anyopaque, ) bool {
        return qtc.QClipboard_SupportsFindBuffer(@ptrCast(self));
    }

    pub fn OwnsSelection(self: ?*anyopaque, ) bool {
        return qtc.QClipboard_OwnsSelection(@ptrCast(self));
    }

    pub fn OwnsClipboard(self: ?*anyopaque, ) bool {
        return qtc.QClipboard_OwnsClipboard(@ptrCast(self));
    }

    pub fn OwnsFindBuffer(self: ?*anyopaque, ) bool {
        return qtc.QClipboard_OwnsFindBuffer(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QClipboard_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Text2(self: ?*anyopaque, subtype: []const u8, allocator: std.mem.Allocator) []const u8 {
        const subtype_str = qtc.libqt_string{
    .len = subtype.len,
    .data = subtype.ptr,
};
const _str = qtc.QClipboard_Text2(@ptrCast(self), subtype_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QClipboard_SetText(@ptrCast(self), param1_str);
    }

    pub fn MimeData(self: ?*anyopaque, ) QtC.QMimeData {
        return qtc.QClipboard_MimeData(@ptrCast(self));
    }

    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QClipboard_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    pub fn Image(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QClipboard_Image(@ptrCast(self));
    }

    pub fn Pixmap(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QClipboard_Pixmap(@ptrCast(self));
    }

    pub fn SetImage(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QClipboard_SetImage(@ptrCast(self), @ptrCast(param1));
    }

    pub fn SetPixmap(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QClipboard_SetPixmap(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Changed(self: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_Changed(@ptrCast(self), @intCast(mode));
    }

    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QClipboard_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QClipboard_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FindBufferChanged(self: ?*anyopaque, ) void {
        qtc.QClipboard_FindBufferChanged(@ptrCast(self));
    }

    pub fn OnFindBufferChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_FindBufferChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DataChanged(self: ?*anyopaque, ) void {
        qtc.QClipboard_DataChanged(@ptrCast(self));
    }

    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QClipboard_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QClipboard_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Clear1(self: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_Clear1(@ptrCast(self), @intCast(mode));
    }

    pub fn Text1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QClipboard_Text1(@ptrCast(self), @intCast(mode));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Text22(self: ?*anyopaque, subtype: []const u8, mode: i32, allocator: std.mem.Allocator) []const u8 {
        const subtype_str = qtc.libqt_string{
    .len = subtype.len,
    .data = subtype.ptr,
};
const _str = qtc.QClipboard_Text22(@ptrCast(self), subtype_str, @intCast(mode));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text22: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText2(self: ?*anyopaque, param1: []const u8, mode: i32) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QClipboard_SetText2(@ptrCast(self), param1_str, @intCast(mode));
    }

    pub fn MimeData1(self: ?*anyopaque, mode: i32) QtC.QMimeData {
        return qtc.QClipboard_MimeData1(@ptrCast(self), @intCast(mode));
    }

    pub fn SetMimeData2(self: ?*anyopaque, data: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetMimeData2(@ptrCast(self), @ptrCast(data), @intCast(mode));
    }

    pub fn Image1(self: ?*anyopaque, mode: i32) QtC.QImage {
        return qtc.QClipboard_Image1(@ptrCast(self), @intCast(mode));
    }

    pub fn Pixmap1(self: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QClipboard_Pixmap1(@ptrCast(self), @intCast(mode));
    }

    pub fn SetImage2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetImage2(@ptrCast(self), @ptrCast(param1), @intCast(mode));
    }

    pub fn SetPixmap2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetPixmap2(@ptrCast(self), @ptrCast(param1), @intCast(mode));
    }
};

/// https://doc.qt.io/qt-6/clipboard.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Clipboard: i32 = 0;
        pub const Selection: i32 = 1;
        pub const FindBuffer: i32 = 2;
        pub const LastMode: i32 = 2;
    };

};
