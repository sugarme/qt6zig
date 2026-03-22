const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html
pub const qpagedpaintdevice = struct {

    pub fn NewPage(self: ?*anyopaque, ) bool {
        return qtc.QPagedPaintDevice_NewPage(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNewPage(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QPagedPaintDevice_OnNewPage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNewPage(self: ?*anyopaque, ) bool {
        return qtc.QPagedPaintDevice_QBaseNewPage(@ptrCast(self));
    }

    pub fn SetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPageLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPagedPaintDevice_OnSetPageLayout(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPageLayout(self: ?*anyopaque, pageLayout: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_QBaseSetPageLayout(@ptrCast(self), @ptrCast(pageLayout));
    }

    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPageSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPagedPaintDevice_OnSetPageSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) bool {
        return qtc.QPagedPaintDevice_QBaseSetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    pub fn SetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QPagedPaintDevice_SetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPageOrientation(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPagedPaintDevice_OnSetPageOrientation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPageOrientation(self: ?*anyopaque, orientation: i32) bool {
        return qtc.QPagedPaintDevice_QBaseSetPageOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn SetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QPagedPaintDevice_SetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPageMargins(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPagedPaintDevice_OnSetPageMargins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPageMargins(self: ?*anyopaque, margins: ?*anyopaque, units: i32) bool {
        return qtc.QPagedPaintDevice_QBaseSetPageMargins(@ptrCast(self), @ptrCast(margins), @intCast(units));
    }

    pub fn PageLayout(self: ?*anyopaque, ) QtC.QPageLayout {
        return qtc.QPagedPaintDevice_PageLayout(@ptrCast(self));
    }

    pub fn SetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPagedPaintDevice_SetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    /// Allows for overriding the related default method
    pub fn OnSetPageRanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPagedPaintDevice_OnSetPageRanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetPageRanges(self: ?*anyopaque, ranges: ?*anyopaque) void {
        qtc.QPagedPaintDevice_QBaseSetPageRanges(@ptrCast(self), @ptrCast(ranges));
    }

    pub fn PageRanges(self: ?*anyopaque, ) QtC.QPageRanges {
        return qtc.QPagedPaintDevice_PageRanges(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPagedPaintDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pagedpaintdevice.html#types
pub const enums = struct {
    pub const PdfVersion = enum {
        pub const PdfVersion_1_4: i32 = 0;
        pub const PdfVersion_A1b: i32 = 1;
        pub const PdfVersion_1_6: i32 = 2;
        pub const PdfVersion_X4: i32 = 3;
    };

};
