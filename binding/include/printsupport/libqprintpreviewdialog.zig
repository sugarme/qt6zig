const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprintpreviewdialog.html
pub const qprintpreviewdialog = struct {

    /// New constructs a new QPrintPreviewDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPrintPreviewDialog object.
    pub fn New2() QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new2();
    }


    /// New3 constructs a new QPrintPreviewDialog object.
    pub fn New3(printer: ?*anyopaque) QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new3(@ptrCast(printer));
    }


    /// New4 constructs a new QPrintPreviewDialog object.
    pub fn New4(parent: ?*anyopaque, flags: i64) QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new4(@ptrCast(parent), @intCast(flags));
    }


    /// New5 constructs a new QPrintPreviewDialog object.
    pub fn New5(printer: ?*anyopaque, parent: ?*anyopaque) QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new5(@ptrCast(printer), @ptrCast(parent));
    }


    /// New6 constructs a new QPrintPreviewDialog object.
    pub fn New6(printer: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QPrintPreviewDialog {
        return qtc.QPrintPreviewDialog_new6(@ptrCast(printer), @ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QPrintPreviewDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Printer(self: ?*anyopaque, ) QtC.QPrinter {
        return qtc.QPrintPreviewDialog_Printer(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintPreviewDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPrintPreviewDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintPreviewDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QPrintPreviewDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPrintPreviewDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QPrintPreviewDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn PaintRequested(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QPrintPreviewDialog_PaintRequested(@ptrCast(self), @ptrCast(printer));
    }

    pub fn OnPaintRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrintPreviewDialog_Connect_PaintRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrintPreviewDialog_Delete(@ptrCast(self));
    }
};
