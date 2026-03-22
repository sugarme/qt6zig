const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html
pub const qopenglpixeltransferoptions = struct {

    /// New constructs a new QOpenGLPixelTransferOptions object.
    pub fn New() QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new();
    }


    /// New2 constructs a new QOpenGLPixelTransferOptions object.
    pub fn New2(param1: ?*anyopaque) QtC.QOpenGLPixelTransferOptions {
        return qtc.QOpenGLPixelTransferOptions_new2(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetAlignment(@ptrCast(self), alignment);
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_Alignment(@ptrCast(self));
    }

    pub fn SetSkipImages(self: ?*anyopaque, skipImages: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipImages(@ptrCast(self), skipImages);
    }

    pub fn SkipImages(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipImages(@ptrCast(self));
    }

    pub fn SetSkipRows(self: ?*anyopaque, skipRows: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipRows(@ptrCast(self), skipRows);
    }

    pub fn SkipRows(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipRows(@ptrCast(self));
    }

    pub fn SetSkipPixels(self: ?*anyopaque, skipPixels: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetSkipPixels(@ptrCast(self), skipPixels);
    }

    pub fn SkipPixels(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_SkipPixels(@ptrCast(self));
    }

    pub fn SetImageHeight(self: ?*anyopaque, imageHeight: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetImageHeight(@ptrCast(self), imageHeight);
    }

    pub fn ImageHeight(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_ImageHeight(@ptrCast(self));
    }

    pub fn SetRowLength(self: ?*anyopaque, rowLength: i32) void {
        qtc.QOpenGLPixelTransferOptions_SetRowLength(@ptrCast(self), rowLength);
    }

    pub fn RowLength(self: ?*anyopaque, ) i32 {
        return qtc.QOpenGLPixelTransferOptions_RowLength(@ptrCast(self));
    }

    pub fn SetLeastSignificantByteFirst(self: ?*anyopaque, lsbFirst: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(@ptrCast(self), lsbFirst);
    }

    pub fn IsLeastSignificantBitFirst(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(@ptrCast(self));
    }

    pub fn SetSwapBytesEnabled(self: ?*anyopaque, swapBytes: bool) void {
        qtc.QOpenGLPixelTransferOptions_SetSwapBytesEnabled(@ptrCast(self), swapBytes);
    }

    pub fn IsSwapBytesEnabled(self: ?*anyopaque, ) bool {
        return qtc.QOpenGLPixelTransferOptions_IsSwapBytesEnabled(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLPixelTransferOptions_Delete(@ptrCast(self));
    }
};
