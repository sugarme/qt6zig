const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprintdialog.html
pub const qprintdialog = struct {

    /// New constructs a new QPrintDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QPrintDialog {
        return qtc.QPrintDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPrintDialog object.
    pub fn New2(printer: ?*anyopaque) QtC.QPrintDialog {
        return qtc.QPrintDialog_new2(@ptrCast(printer));
    }


    /// New3 constructs a new QPrintDialog object.
    pub fn New3() QtC.QPrintDialog {
        return qtc.QPrintDialog_new3();
    }


    /// New4 constructs a new QPrintDialog object.
    pub fn New4(printer: ?*anyopaque, parent: ?*anyopaque) QtC.QPrintDialog {
        return qtc.QPrintDialog_new4(@ptrCast(printer), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QPrintDialog_Exec(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPrintDialog_OnExec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExec(self: ?*anyopaque, ) i32 {
        return qtc.QPrintDialog_QBaseExec(@ptrCast(self));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QPrintDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPrintDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QPrintDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn SetOption(self: ?*anyopaque, option: i32) void {
        qtc.QPrintDialog_SetOption(@ptrCast(self), @intCast(option));
    }

    pub fn TestOption(self: ?*anyopaque, option: i32) bool {
        return qtc.QPrintDialog_TestOption(@ptrCast(self), @intCast(option));
    }

    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.QPrintDialog_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Options(self: ?*anyopaque, ) i32 {
        return qtc.QPrintDialog_Options(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPrintDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QPrintDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Accepted(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QPrintDialog_Accepted(@ptrCast(self), @ptrCast(printer));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOption2(self: ?*anyopaque, option: i32, on: bool) void {
        qtc.QPrintDialog_SetOption2(@ptrCast(self), @intCast(option), on);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrintDialog_Delete(@ptrCast(self));
    }
};
