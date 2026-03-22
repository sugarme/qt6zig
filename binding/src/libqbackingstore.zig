const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbackingstore.html
pub const qbackingstore = struct {

    /// New constructs a new QBackingStore object.
    pub fn New(window: ?*anyopaque) QtC.QBackingStore {
        return qtc.QBackingStore_new(@ptrCast(window));
    }


    pub fn Window(self: ?*anyopaque, ) QtC.QWindow {
        return qtc.QBackingStore_Window(@ptrCast(self));
    }

    pub fn PaintDevice(self: ?*anyopaque, ) QtC.QPaintDevice {
        return qtc.QBackingStore_PaintDevice(@ptrCast(self));
    }

    pub fn Flush(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_Flush(@ptrCast(self), @ptrCast(region));
    }

    pub fn Resize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QBackingStore_Resize(@ptrCast(self), @ptrCast(size));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QBackingStore_Size(@ptrCast(self));
    }

    pub fn Scroll(self: ?*anyopaque, area: ?*anyopaque, dx: i32, dy: i32) bool {
        return qtc.QBackingStore_Scroll(@ptrCast(self), @ptrCast(area), dx, dy);
    }

    pub fn BeginPaint(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBackingStore_BeginPaint(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EndPaint(self: ?*anyopaque, ) void {
        qtc.QBackingStore_EndPaint(@ptrCast(self));
    }

    pub fn SetStaticContents(self: ?*anyopaque, region: ?*anyopaque) void {
        qtc.QBackingStore_SetStaticContents(@ptrCast(self), @ptrCast(region));
    }

    pub fn StaticContents(self: ?*anyopaque, ) QtC.QRegion {
        return qtc.QBackingStore_StaticContents(@ptrCast(self));
    }

    pub fn HasStaticContents(self: ?*anyopaque, ) bool {
        return qtc.QBackingStore_HasStaticContents(@ptrCast(self));
    }

    pub fn Handle(self: ?*anyopaque, ) QPlatformBackingStore {
        return @ptrCast(qtc.QBackingStore_Handle(@ptrCast(self)));
    }

    pub fn Flush2(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque) void {
        qtc.QBackingStore_Flush2(@ptrCast(self), @ptrCast(region), @ptrCast(window));
    }

    pub fn Flush3(self: ?*anyopaque, region: ?*anyopaque, window: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QBackingStore_Flush3(@ptrCast(self), @ptrCast(region), @ptrCast(window), @ptrCast(offset));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBackingStore_Delete(@ptrCast(self));
    }
};
