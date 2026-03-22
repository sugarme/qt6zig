const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstylepainter.html
pub const qstylepainter = struct {

    /// New constructs a new QStylePainter object.
    pub fn New(w: ?*anyopaque) QtC.QStylePainter {
        return qtc.QStylePainter_new(@ptrCast(w));
    }


    /// New2 constructs a new QStylePainter object.
    pub fn New2() QtC.QStylePainter {
        return qtc.QStylePainter_new2();
    }


    /// New3 constructs a new QStylePainter object.
    pub fn New3(pd: ?*anyopaque, w: ?*anyopaque) QtC.QStylePainter {
        return qtc.QStylePainter_new3(@ptrCast(pd), @ptrCast(w));
    }


    pub fn Begin(self: ?*anyopaque, w: ?*anyopaque) bool {
        return qtc.QStylePainter_Begin(@ptrCast(self), @ptrCast(w));
    }

    pub fn Begin2(self: ?*anyopaque, pd: ?*anyopaque, w: ?*anyopaque) bool {
        return qtc.QStylePainter_Begin2(@ptrCast(self), @ptrCast(pd), @ptrCast(w));
    }

    pub fn DrawPrimitive(self: ?*anyopaque, pe: i32, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawPrimitive(@ptrCast(self), @intCast(pe), @ptrCast(opt));
    }

    pub fn DrawControl(self: ?*anyopaque, ce: i64, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawControl(@ptrCast(self), @intCast(ce), @ptrCast(opt));
    }

    pub fn DrawComplexControl(self: ?*anyopaque, cc: i64, opt: ?*anyopaque) void {
        qtc.QStylePainter_DrawComplexControl(@ptrCast(self), @intCast(cc), @ptrCast(opt));
    }

    pub fn DrawItemText(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStylePainter_DrawItemText(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pal), enabled, text_str);
    }

    pub fn DrawItemPixmap(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pixmap: ?*anyopaque) void {
        qtc.QStylePainter_DrawItemPixmap(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pixmap));
    }

    pub fn Style(self: ?*anyopaque, ) QtC.QStyle {
        return qtc.QStylePainter_Style(@ptrCast(self));
    }

    pub fn DrawItemText6(self: ?*anyopaque, r: ?*anyopaque, flags: i32, pal: ?*anyopaque, enabled: bool, text: []const u8, textRole: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStylePainter_DrawItemText6(@ptrCast(self), @ptrCast(r), flags, @ptrCast(pal), enabled, text_str, @intCast(textRole));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStylePainter_Delete(@ptrCast(self));
    }
};
