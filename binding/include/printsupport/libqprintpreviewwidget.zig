const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprintpreviewwidget.html
pub const qprintpreviewwidget = struct {

    /// New constructs a new QPrintPreviewWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QPrintPreviewWidget object.
    pub fn New2(printer: ?*anyopaque) QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new2(@ptrCast(printer));
    }


    /// New3 constructs a new QPrintPreviewWidget object.
    pub fn New3() QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new3();
    }


    /// New4 constructs a new QPrintPreviewWidget object.
    pub fn New4(printer: ?*anyopaque, parent: ?*anyopaque) QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new4(@ptrCast(printer), @ptrCast(parent));
    }


    /// New5 constructs a new QPrintPreviewWidget object.
    pub fn New5(printer: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new5(@ptrCast(printer), @ptrCast(parent), @intCast(flags));
    }


    /// New6 constructs a new QPrintPreviewWidget object.
    pub fn New6(parent: ?*anyopaque, flags: i64) QtC.QPrintPreviewWidget {
        return qtc.QPrintPreviewWidget_new6(@ptrCast(parent), @intCast(flags));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ZoomFactor(self: ?*anyopaque, ) f64 {
        return qtc.QPrintPreviewWidget_ZoomFactor(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QPrintPreviewWidget_Orientation(@ptrCast(self));
    }

    pub fn ViewMode(self: ?*anyopaque, ) i32 {
        return qtc.QPrintPreviewWidget_ViewMode(@ptrCast(self));
    }

    pub fn ZoomMode(self: ?*anyopaque, ) i32 {
        return qtc.QPrintPreviewWidget_ZoomMode(@ptrCast(self));
    }

    pub fn CurrentPage(self: ?*anyopaque, ) i32 {
        return qtc.QPrintPreviewWidget_CurrentPage(@ptrCast(self));
    }

    pub fn PageCount(self: ?*anyopaque, ) i32 {
        return qtc.QPrintPreviewWidget_PageCount(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintPreviewWidget_SetVisible(@ptrCast(self), visible);
    }

    /// Allows for overriding the related default method
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPrintPreviewWidget_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QPrintPreviewWidget_QBaseSetVisible(@ptrCast(self), visible);
    }

    pub fn Print(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_Print(@ptrCast(self));
    }

    pub fn ZoomIn(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_ZoomIn(@ptrCast(self));
    }

    pub fn ZoomOut(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_ZoomOut(@ptrCast(self));
    }

    pub fn SetZoomFactor(self: ?*anyopaque, zoomFactor: f64) void {
        qtc.QPrintPreviewWidget_SetZoomFactor(@ptrCast(self), zoomFactor);
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QPrintPreviewWidget_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn SetViewMode(self: ?*anyopaque, viewMode: i32) void {
        qtc.QPrintPreviewWidget_SetViewMode(@ptrCast(self), @intCast(viewMode));
    }

    pub fn SetZoomMode(self: ?*anyopaque, zoomMode: i32) void {
        qtc.QPrintPreviewWidget_SetZoomMode(@ptrCast(self), @intCast(zoomMode));
    }

    pub fn SetCurrentPage(self: ?*anyopaque, pageNumber: i32) void {
        qtc.QPrintPreviewWidget_SetCurrentPage(@ptrCast(self), pageNumber);
    }

    pub fn FitToWidth(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_FitToWidth(@ptrCast(self));
    }

    pub fn FitInView(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_FitInView(@ptrCast(self));
    }

    pub fn SetLandscapeOrientation(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_SetLandscapeOrientation(@ptrCast(self));
    }

    pub fn SetPortraitOrientation(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_SetPortraitOrientation(@ptrCast(self));
    }

    pub fn SetSinglePageViewMode(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_SetSinglePageViewMode(@ptrCast(self));
    }

    pub fn SetFacingPagesViewMode(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_SetFacingPagesViewMode(@ptrCast(self));
    }

    pub fn SetAllPagesViewMode(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_SetAllPagesViewMode(@ptrCast(self));
    }

    pub fn UpdatePreview(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_UpdatePreview(@ptrCast(self));
    }

    pub fn PaintRequested(self: ?*anyopaque, printer: ?*anyopaque) void {
        qtc.QPrintPreviewWidget_PaintRequested(@ptrCast(self), @ptrCast(printer));
    }

    pub fn OnPaintRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPrintPreviewWidget_Connect_PaintRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PreviewChanged(self: ?*anyopaque, ) void {
        qtc.QPrintPreviewWidget_PreviewChanged(@ptrCast(self));
    }

    pub fn OnPreviewChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPrintPreviewWidget_Connect_PreviewChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPrintPreviewWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprintpreviewwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ZoomIn1(self: ?*anyopaque, zoom: f64) void {
        qtc.QPrintPreviewWidget_ZoomIn1(@ptrCast(self), zoom);
    }

    pub fn ZoomOut1(self: ?*anyopaque, zoom: f64) void {
        qtc.QPrintPreviewWidget_ZoomOut1(@ptrCast(self), zoom);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPrintPreviewWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/printpreviewwidget.html#types
pub const enums = struct {
    pub const ViewMode = enum {
        pub const SinglePageView: i32 = 0;
        pub const FacingPagesView: i32 = 1;
        pub const AllPagesView: i32 = 2;
    };

    pub const ZoomMode = enum {
        pub const CustomZoom: i32 = 0;
        pub const FitToWidth: i32 = 1;
        pub const FitInView: i32 = 2;
    };

};
