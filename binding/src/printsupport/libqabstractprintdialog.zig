const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractprintdialog.html
pub const qabstractprintdialog = struct {

    /// New constructs a new QAbstractPrintDialog object.
    pub fn New(printer: ?*anyopaque) QtC.QAbstractPrintDialog {
        return qtc.QAbstractPrintDialog_new(@ptrCast(printer));
    }


    /// New2 constructs a new QAbstractPrintDialog object.
    pub fn New2(printer: ?*anyopaque, parent: ?*anyopaque) QtC.QAbstractPrintDialog {
        return qtc.QAbstractPrintDialog_new2(@ptrCast(printer), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractPrintDialog_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractprintdialog.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetOptionTabs(self: ?*anyopaque, tabs: []const u8) void {
        qtc.QAbstractPrintDialog_SetOptionTabs(@ptrCast(self), @ptrCast(tabs));
    }

    pub fn SetPrintRange(self: ?*anyopaque, range: i32) void {
        qtc.QAbstractPrintDialog_SetPrintRange(@ptrCast(self), @intCast(range));
    }

    pub fn PrintRange(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractPrintDialog_PrintRange(@ptrCast(self));
    }

    pub fn SetMinMax(self: ?*anyopaque, min: i32, max: i32) void {
        qtc.QAbstractPrintDialog_SetMinMax(@ptrCast(self), min, max);
    }

    pub fn MinPage(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractPrintDialog_MinPage(@ptrCast(self));
    }

    pub fn MaxPage(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractPrintDialog_MaxPage(@ptrCast(self));
    }

    pub fn SetFromTo(self: ?*anyopaque, fromPage: i32, toPage: i32) void {
        qtc.QAbstractPrintDialog_SetFromTo(@ptrCast(self), fromPage, toPage);
    }

    pub fn FromPage(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractPrintDialog_FromPage(@ptrCast(self));
    }

    pub fn ToPage(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractPrintDialog_ToPage(@ptrCast(self));
    }

    pub fn Printer(self: ?*anyopaque, ) QtC.QPrinter {
        return qtc.QAbstractPrintDialog_Printer(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractPrintDialog_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractprintdialog.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractPrintDialog_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractprintdialog.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractPrintDialog_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/abstractprintdialog.html#types
pub const enums = struct {
    pub const PrintRange = enum {
        pub const AllPages: i32 = 0;
        pub const Selection: i32 = 1;
        pub const PageRange: i32 = 2;
        pub const CurrentPage: i32 = 3;
    };

    pub const PrintDialogOption = enum {
        pub const PrintToFile: i32 = 1;
        pub const PrintSelection: i32 = 2;
        pub const PrintPageRange: i32 = 4;
        pub const PrintShowPageSize: i32 = 8;
        pub const PrintCollateCopies: i32 = 16;
        pub const PrintCurrentPage: i32 = 64;
    };

};
