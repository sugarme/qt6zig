const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpixmap.html
pub const qpixmap = struct {

    /// New constructs a new QPixmap object.
    pub fn New() QtC.QPixmap {
        return qtc.QPixmap_new();
    }


    /// New2 constructs a new QPixmap object.
    pub fn New2(w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_new2(w, h);
    }


    /// New3 constructs a new QPixmap object.
    pub fn New3(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QPixmap object.
    pub fn New4(fileName: []const u8) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_new4(fileName_str);
    }


    /// New5 constructs a new QPixmap object.
    pub fn New5(xpm: []const u8) QtC.QPixmap {
        return qtc.QPixmap_new5(@ptrCast(xpm));
    }


    /// New6 constructs a new QPixmap object.
    pub fn New6(param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_new6(@ptrCast(param1));
    }


    /// New7 constructs a new QPixmap object.
    pub fn New7(fileName: []const u8, format: []const u8) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_new7(fileName_str, @ptrCast(format));
    }


    /// New8 constructs a new QPixmap object.
    pub fn New8(fileName: []const u8, format: []const u8, flags: i32) QtC.QPixmap {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_new8(fileName_str, @ptrCast(format), @intCast(flags));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPixmap_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmap_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QPixmap_OperatorQVariant(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_IsNull(@ptrCast(self));
    }

    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QPixmap_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPixmap_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QPixmap_QBaseDevType(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QPixmap_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QPixmap_Height(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QPixmap_Size(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPixmap_Rect(@ptrCast(self));
    }

    pub fn Depth(self: ?*anyopaque, ) i32 {
        return qtc.QPixmap_Depth(@ptrCast(self));
    }

    pub fn DefaultDepth() i32 {
        return qtc.QPixmap_DefaultDepth();
    }

    pub fn Fill(self: ?*anyopaque, ) void {
        qtc.QPixmap_Fill(@ptrCast(self));
    }

    pub fn Mask(self: ?*anyopaque, ) QtC.QBitmap {
        return qtc.QPixmap_Mask(@ptrCast(self));
    }

    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QPixmap_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QPixmap_DevicePixelRatio(@ptrCast(self));
    }

    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QPixmap_SetDevicePixelRatio(@ptrCast(self), scaleFactor);
    }

    pub fn DeviceIndependentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QPixmap_DeviceIndependentSize(@ptrCast(self));
    }

    pub fn HasAlpha(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_HasAlpha(@ptrCast(self));
    }

    pub fn HasAlphaChannel(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_HasAlphaChannel(@ptrCast(self));
    }

    pub fn CreateHeuristicMask(self: ?*anyopaque, ) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask(@ptrCast(self));
    }

    pub fn CreateMaskFromColor(self: ?*anyopaque, maskColor: ?*anyopaque) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor(@ptrCast(self), @ptrCast(maskColor));
    }

    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled(@ptrCast(self), w, h);
    }

    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth(@ptrCast(self), w);
    }

    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight(@ptrCast(self), h);
    }

    pub fn Transformed(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Transformed(@ptrCast(self), @ptrCast(param1));
    }

    pub fn TrueMatrix(m: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QPixmap_TrueMatrix(@ptrCast(m), w, h);
    }

    pub fn ToImage(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QPixmap_ToImage(@ptrCast(self));
    }

    pub fn FromImage(image: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImage(@ptrCast(image));
    }

    pub fn FromImageReader(imageReader: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader(@ptrCast(imageReader));
    }

    pub fn Load(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Load(@ptrCast(self), fileName_str);
    }

    pub fn LoadFromData(self: ?*anyopaque, buf: *const u8, lenVal: u32) bool {
        return qtc.QPixmap_LoadFromData(@ptrCast(self), @ptrCast(buf), lenVal);
    }

    pub fn LoadFromData2(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QPixmap_LoadFromData2(@ptrCast(self), data_str);
    }

    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Save(@ptrCast(self), fileName_str);
    }

    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QPixmap_Save2(@ptrCast(self), @ptrCast(device));
    }

    pub fn ConvertFromImage(self: ?*anyopaque, img: ?*anyopaque) bool {
        return qtc.QPixmap_ConvertFromImage(@ptrCast(self), @ptrCast(img));
    }

    pub fn Copy(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) QtC.QPixmap {
        return qtc.QPixmap_Copy(@ptrCast(self), x, y, width, height);
    }

    pub fn Copy2(self: ?*anyopaque, ) QtC.QPixmap {
        return qtc.QPixmap_Copy2(@ptrCast(self));
    }

    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QPixmap_Scroll(@ptrCast(self), dx, dy, x, y, width, height);
    }

    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque) void {
        qtc.QPixmap_Scroll2(@ptrCast(self), dx, dy, @ptrCast(rect));
    }

    pub fn CacheKey(self: ?*anyopaque, ) i64 {
        return qtc.QPixmap_CacheKey(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_IsDetached(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QPixmap_Detach(@ptrCast(self));
    }

    pub fn IsQBitmap(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_IsQBitmap(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPixmap_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QPixmap_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPixmap_QBasePaintEngine(@ptrCast(self));
    }

    pub fn OperatorNot(self: ?*anyopaque, ) bool {
        return qtc.QPixmap_OperatorNot(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPixmap_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPixmap_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QPixmap_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    pub fn FromImageInPlace(self: ?*anyopaque, image: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_FromImageInPlace(@ptrCast(self), @ptrCast(image));
    }

    /// Allows for overriding the related default method
    pub fn OnFromImageInPlace(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QPixmap_OnFromImageInPlace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFromImageInPlace(self: ?*anyopaque, image: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_QBaseFromImageInPlace(@ptrCast(self), @ptrCast(image));
    }

    pub fn Fill1(self: ?*anyopaque, fillColor: ?*anyopaque) void {
        qtc.QPixmap_Fill1(@ptrCast(self), @ptrCast(fillColor));
    }

    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QBitmap {
        return qtc.QPixmap_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    pub fn CreateMaskFromColor2(self: ?*anyopaque, maskColor: ?*anyopaque, mode: i32) QtC.QBitmap {
        return qtc.QPixmap_CreateMaskFromColor2(@ptrCast(self), @ptrCast(maskColor), @intCast(mode));
    }

    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled3(@ptrCast(self), w, h, @intCast(aspectMode));
    }

    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled4(@ptrCast(self), w, h, @intCast(aspectMode), @intCast(mode));
    }

    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled22(@ptrCast(self), @ptrCast(s), @intCast(aspectMode));
    }

    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Scaled32(@ptrCast(self), @ptrCast(s), @intCast(aspectMode), @intCast(mode));
    }

    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToWidth2(@ptrCast(self), w, @intCast(mode));
    }

    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_ScaledToHeight2(@ptrCast(self), h, @intCast(mode));
    }

    pub fn Transformed2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QPixmap_Transformed2(@ptrCast(self), @ptrCast(param1), @intCast(mode));
    }

    pub fn FromImage2(image: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_FromImage2(@ptrCast(image), @intCast(flags));
    }

    pub fn FromImageReader2(imageReader: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_FromImageReader2(@ptrCast(imageReader), @intCast(flags));
    }

    pub fn Load2(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Load2(@ptrCast(self), fileName_str, @ptrCast(format));
    }

    pub fn Load3(self: ?*anyopaque, fileName: []const u8, format: []const u8, flags: i32) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Load3(@ptrCast(self), fileName_str, @ptrCast(format), @intCast(flags));
    }

    pub fn LoadFromData3(self: ?*anyopaque, buf: *const u8, lenVal: u32, format: []const u8) bool {
        return qtc.QPixmap_LoadFromData3(@ptrCast(self), @ptrCast(buf), lenVal, @ptrCast(format));
    }

    pub fn LoadFromData4(self: ?*anyopaque, buf: *const u8, lenVal: u32, format: []const u8, flags: i32) bool {
        return qtc.QPixmap_LoadFromData4(@ptrCast(self), @ptrCast(buf), lenVal, @ptrCast(format), @intCast(flags));
    }

    pub fn LoadFromData22(self: ?*anyopaque, data: []u8, format: []const u8) bool {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QPixmap_LoadFromData22(@ptrCast(self), data_str, @ptrCast(format));
    }

    pub fn LoadFromData32(self: ?*anyopaque, data: []u8, format: []const u8, flags: i32) bool {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QPixmap_LoadFromData32(@ptrCast(self), data_str, @ptrCast(format), @intCast(flags));
    }

    pub fn Save22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Save22(@ptrCast(self), fileName_str, @ptrCast(format));
    }

    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: []const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPixmap_Save3(@ptrCast(self), fileName_str, @ptrCast(format), quality);
    }

    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        return qtc.QPixmap_Save23(@ptrCast(self), @ptrCast(device), @ptrCast(format));
    }

    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: []const u8, quality: i32) bool {
        return qtc.QPixmap_Save32(@ptrCast(self), @ptrCast(device), @ptrCast(format), quality);
    }

    pub fn ConvertFromImage2(self: ?*anyopaque, img: ?*anyopaque, flags: i32) bool {
        return qtc.QPixmap_ConvertFromImage2(@ptrCast(self), @ptrCast(img), @intCast(flags));
    }

    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QPixmap {
        return qtc.QPixmap_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn Scroll7(self: ?*anyopaque, dx: i32, dy: i32, x: i32, y: i32, width: i32, height: i32, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll7(@ptrCast(self), dx, dy, x, y, width, height, @ptrCast(exposed));
    }

    pub fn Scroll4(self: ?*anyopaque, dx: i32, dy: i32, rect: ?*anyopaque, exposed: ?*anyopaque) void {
        qtc.QPixmap_Scroll4(@ptrCast(self), dx, dy, @ptrCast(rect), @ptrCast(exposed));
    }

    pub fn FromImageInPlace2(self: ?*anyopaque, image: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_FromImageInPlace2(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnFromImageInPlace2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QPixmap_OnFromImageInPlace2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFromImageInPlace2(self: ?*anyopaque, image: ?*anyopaque, flags: i32) QtC.QPixmap {
        return qtc.QPixmap_QBaseFromImageInPlace2(@ptrCast(self), @ptrCast(image), @intCast(flags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmap_Delete(@ptrCast(self));
    }
};
