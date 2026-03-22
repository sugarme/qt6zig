const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsvgwidget.html
pub const qsvgwidget = struct {

    /// New constructs a new QSvgWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QSvgWidget {
        return qtc.QSvgWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QSvgWidget object.
    pub fn New2() QtC.QSvgWidget {
        return qtc.QSvgWidget_new2();
    }


    /// New3 constructs a new QSvgWidget object.
    pub fn New3(file: []const u8) QtC.QSvgWidget {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QSvgWidget_new3(file_str);
    }


    /// New4 constructs a new QSvgWidget object.
    pub fn New4(file: []const u8, parent: ?*anyopaque) QtC.QSvgWidget {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
return qtc.QSvgWidget_new4(file_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Renderer(self: ?*anyopaque, ) QtC.QSvgRenderer {
        return qtc.QSvgWidget_Renderer(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSvgWidget_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSvgWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QSvgWidget_QBaseSizeHint(@ptrCast(self));
    }

    pub fn Options(self: ?*anyopaque, ) u32 {
        return qtc.QSvgWidget_Options(@ptrCast(self));
    }

    pub fn SetOptions(self: ?*anyopaque, options: u32) void {
        qtc.QSvgWidget_SetOptions(@ptrCast(self), @intCast(options));
    }

    pub fn Load(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
    .len = file.len,
    .data = file.ptr,
};
qtc.QSvgWidget_Load(@ptrCast(self), file_str);
    }

    pub fn Load2(self: ?*anyopaque, contents: []u8) void {
        const contents_str = qtc.libqt_string{
    .len = contents.len,
    .data = contents.ptr,
};
qtc.QSvgWidget_Load2(@ptrCast(self), contents_str);
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSvgWidget_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSvgWidget_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSvgWidget_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSvgWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsvgwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSvgWidget_Delete(@ptrCast(self));
    }
};
