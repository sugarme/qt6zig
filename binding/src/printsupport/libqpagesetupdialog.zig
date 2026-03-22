const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpagesetupdialog.html
pub const qpagesetupdialog = struct {

    /// New constructs a new QPageSetupDialog object.
    pub fn New(parent: ?*anyopaque) QtC.QPageSetupDialog {
        return qtc.QPageSetupDialog_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPageSetupDialog object.
    pub fn New2(printer: ?*anyopaque) QtC.QPageSetupDialog {
        return qtc.QPageSetupDialog_new2(@ptrCast(printer));
    }


    /// New3 constructs a new QPageSetupDialog object.
    pub fn New3() QtC.QPageSetupDialog {
        return qtc.QPageSetupDialog_new3();
    }


    /// New4 constructs a new QPageSetupDialog object.
    pub fn New4(printer: ?*anyopaque, parent: ?*anyopaque) QtC.QPageSetupDialog {
        return qtc.QPageSetupDialog_new4(@ptrCast(printer), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSetupDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesetupdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPageSetupDialog_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPageSetupDialog_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPageSetupDialog_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn Exec(self: ?*anyopaque, ) i32 {
        return qtc.QPageSetupDialog_Exec(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnExec(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPageSetupDialog_OnExec(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseExec(self: ?*anyopaque, ) i32 {
        return qtc.QPageSetupDialog_QBaseExec(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, receiver: ?*anyopaque, member: []const u8) void {
        qtc.QPageSetupDialog_Open(@ptrCast(self), @ptrCast(receiver), @ptrCast(member));
    }

    pub fn Done(self: ?*anyopaque, result: i32) void {
        qtc.QPageSetupDialog_Done(@ptrCast(self), result);
    }

    /// Allows for overriding the related default method
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QPageSetupDialog_OnDone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDone(self: ?*anyopaque, result: i32) void {
        qtc.QPageSetupDialog_QBaseDone(@ptrCast(self), result);
    }

    pub fn Printer(self: ?*anyopaque, ) QtC.QPrinter {
        return qtc.QPageSetupDialog_Printer(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSetupDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesetupdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPageSetupDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpagesetupdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageSetupDialog_Delete(@ptrCast(self));
    }
};
