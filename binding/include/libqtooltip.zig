const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtooltip.html
pub const qtooltip = struct {

    /// New constructs a new QToolTip object.
    pub fn New(other: ?*anyopaque) QtC.QToolTip {
        return qtc.QToolTip_new(@ptrCast(other));
    }


    /// New2 constructs a new QToolTip object.
    pub fn New2(other: ?*anyopaque) QtC.QToolTip {
        return qtc.QToolTip_new2(@ptrCast(other));
    }


    /// New3 constructs a new QToolTip object.
    pub fn New3(param1: ?*anyopaque) QtC.QToolTip {
        return qtc.QToolTip_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QToolTip_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QToolTip_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ShowText(pos: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QToolTip_ShowText(@ptrCast(pos), text_str);
    }

    pub fn HideText() void {
        qtc.QToolTip_HideText();
    }

    pub fn IsVisible() bool {
        return qtc.QToolTip_IsVisible();
    }

    pub fn Text(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolTip_Text();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtooltip.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Palette() QtC.QPalette {
        return qtc.QToolTip_Palette();
    }

    pub fn SetPalette(palette: ?*anyopaque) void {
        qtc.QToolTip_SetPalette(@ptrCast(palette));
    }

    pub fn Font() QtC.QFont {
        return qtc.QToolTip_Font();
    }

    pub fn SetFont(font: ?*anyopaque) void {
        qtc.QToolTip_SetFont(@ptrCast(font));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolTip_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ShowText3(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QToolTip_ShowText3(@ptrCast(pos), text_str, @ptrCast(w));
    }

    pub fn ShowText4(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque, rect: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QToolTip_ShowText4(@ptrCast(pos), text_str, @ptrCast(w), @ptrCast(rect));
    }

    pub fn ShowText5(pos: ?*anyopaque, text: []const u8, w: ?*anyopaque, rect: ?*anyopaque, msecShowTime: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QToolTip_ShowText5(@ptrCast(pos), text_str, @ptrCast(w), @ptrCast(rect), msecShowTime);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolTip_Delete(@ptrCast(self));
    }
};
