const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qimage.html
pub const qimage = struct {

    /// New constructs a new QImage object.
    pub fn New() QtC.QImage {
        return qtc.QImage_new();
    }


    /// New2 constructs a new QImage object.
    pub fn New2(size: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_new2(@ptrCast(size), @intCast(format));
    }


    /// New3 constructs a new QImage object.
    pub fn New3(width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new3(width, height, @intCast(format));
    }


    /// New4 constructs a new QImage object.
    pub fn New4(data: *u8, width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new4(@ptrCast(data), width, height, @intCast(format));
    }


    /// New5 constructs a new QImage object.
    pub fn New5(data: *const u8, width: i32, height: i32, format: i32) QtC.QImage {
        return qtc.QImage_new5(@ptrCast(data), width, height, @intCast(format));
    }


    /// New6 constructs a new QImage object.
    pub fn New6(data: *u8, width: i32, height: i32, bytesPerLine: i64, format: i32) QtC.QImage {
        return qtc.QImage_new6(@ptrCast(data), width, height, bytesPerLine, @intCast(format));
    }


    /// New7 constructs a new QImage object.
    pub fn New7(data: *const u8, width: i32, height: i32, bytesPerLine: i64, format: i32) QtC.QImage {
        return qtc.QImage_new7(@ptrCast(data), width, height, bytesPerLine, @intCast(format));
    }


    /// New8 constructs a new QImage object.
    pub fn New8(xpm: []const u8) QtC.QImage {
        return qtc.QImage_new8(@ptrCast(xpm));
    }


    /// New9 constructs a new QImage object.
    pub fn New9(fileName: []const u8) QtC.QImage {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_new9(fileName_str);
    }


    /// New10 constructs a new QImage object.
    pub fn New10(param1: ?*anyopaque) QtC.QImage {
        return qtc.QImage_new10(@ptrCast(param1));
    }


    /// New11 constructs a new QImage object.
    pub fn New11(fileName: []const u8, format: []const u8) QtC.QImage {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_new11(fileName_str, @ptrCast(format));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QImage_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QImage_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QImage_IsNull(@ptrCast(self));
    }

    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QImage_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QImage_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QImage_QBaseDevType(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QImage_OperatorEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QImage_OperatorNotEqual(@ptrCast(self), @ptrCast(param1));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QImage_OperatorQVariant(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QImage_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QImage_IsDetached(@ptrCast(self));
    }

    pub fn Copy(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_Copy(@ptrCast(self));
    }

    pub fn Copy2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_Copy2(@ptrCast(self), x, y, w, h);
    }

    pub fn Format(self: ?*anyopaque, ) i32 {
        return qtc.QImage_Format(@ptrCast(self));
    }

    pub fn ConvertToFormat(self: ?*anyopaque, f: i32) QtC.QImage {
        return qtc.QImage_ConvertToFormat(@ptrCast(self), @intCast(f));
    }

    pub fn ConvertToFormat2(self: ?*anyopaque, f: i32, colorTable: []const u8) QtC.QImage {
        return qtc.QImage_ConvertToFormat2(@ptrCast(self), @intCast(f), @ptrCast(colorTable));
    }

    pub fn ReinterpretAsFormat(self: ?*anyopaque, f: i32) bool {
        return qtc.QImage_ReinterpretAsFormat(@ptrCast(self), @intCast(f));
    }

    pub fn ConvertedTo(self: ?*anyopaque, f: i32) QtC.QImage {
        return qtc.QImage_ConvertedTo(@ptrCast(self), @intCast(f));
    }

    pub fn ConvertTo(self: ?*anyopaque, f: i32) void {
        qtc.QImage_ConvertTo(@ptrCast(self), @intCast(f));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QImage_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QImage_Height(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QImage_Size(@ptrCast(self));
    }

    pub fn Rect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QImage_Rect(@ptrCast(self));
    }

    pub fn Depth(self: ?*anyopaque, ) i32 {
        return qtc.QImage_Depth(@ptrCast(self));
    }

    pub fn ColorCount(self: ?*anyopaque, ) i32 {
        return qtc.QImage_ColorCount(@ptrCast(self));
    }

    pub fn BitPlaneCount(self: ?*anyopaque, ) i32 {
        return qtc.QImage_BitPlaneCount(@ptrCast(self));
    }

    pub fn Color(self: ?*anyopaque, i: i32) u32 {
        return qtc.QImage_Color(@ptrCast(self), i);
    }

    pub fn SetColor(self: ?*anyopaque, i: i32, c: u32) void {
        qtc.QImage_SetColor(@ptrCast(self), i, c);
    }

    pub fn SetColorCount(self: ?*anyopaque, colorCount: i32) void {
        qtc.QImage_SetColorCount(@ptrCast(self), colorCount);
    }

    pub fn AllGray(self: ?*anyopaque, ) bool {
        return qtc.QImage_AllGray(@ptrCast(self));
    }

    pub fn IsGrayscale(self: ?*anyopaque, ) bool {
        return qtc.QImage_IsGrayscale(@ptrCast(self));
    }

    pub fn Bits(self: ?*anyopaque, ) u8 {
        return @ptrCast(qtc.QImage_Bits(@ptrCast(self)));
    }

    pub fn Bits2(self: ?*anyopaque, ) u8 {
        return @ptrCast(qtc.QImage_Bits2(@ptrCast(self)));
    }

    pub fn ConstBits(self: ?*anyopaque, ) u8 {
        return @ptrCast(qtc.QImage_ConstBits(@ptrCast(self)));
    }

    pub fn SizeInBytes(self: ?*anyopaque, ) i64 {
        return qtc.QImage_SizeInBytes(@ptrCast(self));
    }

    pub fn ScanLine(self: ?*anyopaque, param1: i32) u8 {
        return @ptrCast(qtc.QImage_ScanLine(@ptrCast(self), param1));
    }

    pub fn ScanLine2(self: ?*anyopaque, param1: i32) u8 {
        return @ptrCast(qtc.QImage_ScanLine2(@ptrCast(self), param1));
    }

    pub fn ConstScanLine(self: ?*anyopaque, param1: i32) u8 {
        return @ptrCast(qtc.QImage_ConstScanLine(@ptrCast(self), param1));
    }

    pub fn BytesPerLine(self: ?*anyopaque, ) i64 {
        return qtc.QImage_BytesPerLine(@ptrCast(self));
    }

    pub fn Valid(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QImage_Valid(@ptrCast(self), x, y);
    }

    pub fn Valid2(self: ?*anyopaque, pt: ?*anyopaque) bool {
        return qtc.QImage_Valid2(@ptrCast(self), @ptrCast(pt));
    }

    pub fn PixelIndex(self: ?*anyopaque, x: i32, y: i32) i32 {
        return qtc.QImage_PixelIndex(@ptrCast(self), x, y);
    }

    pub fn PixelIndex2(self: ?*anyopaque, pt: ?*anyopaque) i32 {
        return qtc.QImage_PixelIndex2(@ptrCast(self), @ptrCast(pt));
    }

    pub fn Pixel(self: ?*anyopaque, x: i32, y: i32) u32 {
        return qtc.QImage_Pixel(@ptrCast(self), x, y);
    }

    pub fn Pixel2(self: ?*anyopaque, pt: ?*anyopaque) u32 {
        return qtc.QImage_Pixel2(@ptrCast(self), @ptrCast(pt));
    }

    pub fn SetPixel(self: ?*anyopaque, x: i32, y: i32, index_or_rgb: u32) void {
        qtc.QImage_SetPixel(@ptrCast(self), x, y, index_or_rgb);
    }

    pub fn SetPixel2(self: ?*anyopaque, pt: ?*anyopaque, index_or_rgb: u32) void {
        qtc.QImage_SetPixel2(@ptrCast(self), @ptrCast(pt), index_or_rgb);
    }

    pub fn PixelColor(self: ?*anyopaque, x: i32, y: i32) QtC.QColor {
        return qtc.QImage_PixelColor(@ptrCast(self), x, y);
    }

    pub fn PixelColor2(self: ?*anyopaque, pt: ?*anyopaque) QtC.QColor {
        return qtc.QImage_PixelColor2(@ptrCast(self), @ptrCast(pt));
    }

    pub fn SetPixelColor(self: ?*anyopaque, x: i32, y: i32, c: ?*anyopaque) void {
        qtc.QImage_SetPixelColor(@ptrCast(self), x, y, @ptrCast(c));
    }

    pub fn SetPixelColor2(self: ?*anyopaque, pt: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QImage_SetPixelColor2(@ptrCast(self), @ptrCast(pt), @ptrCast(c));
    }

    pub fn ColorTable(self: ?*anyopaque, ) []const u8 {
        return qtc.QImage_ColorTable(@ptrCast(self));
    }

    pub fn SetColorTable(self: ?*anyopaque, colors: []const u8) void {
        qtc.QImage_SetColorTable(@ptrCast(self), @ptrCast(colors));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QImage_DevicePixelRatio(@ptrCast(self));
    }

    pub fn SetDevicePixelRatio(self: ?*anyopaque, scaleFactor: f64) void {
        qtc.QImage_SetDevicePixelRatio(@ptrCast(self), scaleFactor);
    }

    pub fn DeviceIndependentSize(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QImage_DeviceIndependentSize(@ptrCast(self));
    }

    pub fn Fill(self: ?*anyopaque, pixel: u32) void {
        qtc.QImage_Fill(@ptrCast(self), pixel);
    }

    pub fn Fill2(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QImage_Fill2(@ptrCast(self), @ptrCast(color));
    }

    pub fn Fill3(self: ?*anyopaque, color: i32) void {
        qtc.QImage_Fill3(@ptrCast(self), @intCast(color));
    }

    pub fn HasAlphaChannel(self: ?*anyopaque, ) bool {
        return qtc.QImage_HasAlphaChannel(@ptrCast(self));
    }

    pub fn SetAlphaChannel(self: ?*anyopaque, alphaChannel: ?*anyopaque) void {
        qtc.QImage_SetAlphaChannel(@ptrCast(self), @ptrCast(alphaChannel));
    }

    pub fn CreateAlphaMask(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_CreateAlphaMask(@ptrCast(self));
    }

    pub fn CreateHeuristicMask(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_CreateHeuristicMask(@ptrCast(self));
    }

    pub fn CreateMaskFromColor(self: ?*anyopaque, color: u32) QtC.QImage {
        return qtc.QImage_CreateMaskFromColor(@ptrCast(self), color);
    }

    pub fn Scaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_Scaled(@ptrCast(self), w, h);
    }

    pub fn Scaled2(self: ?*anyopaque, s: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Scaled2(@ptrCast(self), @ptrCast(s));
    }

    pub fn ScaledToWidth(self: ?*anyopaque, w: i32) QtC.QImage {
        return qtc.QImage_ScaledToWidth(@ptrCast(self), w);
    }

    pub fn ScaledToHeight(self: ?*anyopaque, h: i32) QtC.QImage {
        return qtc.QImage_ScaledToHeight(@ptrCast(self), h);
    }

    pub fn Transformed(self: ?*anyopaque, matrix: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Transformed(@ptrCast(self), @ptrCast(matrix));
    }

    pub fn TrueMatrix(param1: ?*anyopaque, w: i32, h: i32) QtC.QTransform {
        return qtc.QImage_TrueMatrix(@ptrCast(param1), w, h);
    }

    pub fn Mirrored(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_Mirrored(@ptrCast(self));
    }

    pub fn RgbSwapped(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_RgbSwapped(@ptrCast(self));
    }

    pub fn Mirror(self: ?*anyopaque, ) void {
        qtc.QImage_Mirror(@ptrCast(self));
    }

    pub fn RgbSwap(self: ?*anyopaque, ) void {
        qtc.QImage_RgbSwap(@ptrCast(self));
    }

    pub fn InvertPixels(self: ?*anyopaque, ) void {
        qtc.QImage_InvertPixels(@ptrCast(self));
    }

    pub fn ColorSpace(self: ?*anyopaque, ) QtC.QColorSpace {
        return qtc.QImage_ColorSpace(@ptrCast(self));
    }

    pub fn ConvertedToColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn ConvertedToColorSpace2(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace2(@ptrCast(self), @ptrCast(colorSpace), @intCast(format));
    }

    pub fn ConvertToColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QImage_ConvertToColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn ConvertToColorSpace2(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32) void {
        qtc.QImage_ConvertToColorSpace2(@ptrCast(self), @ptrCast(colorSpace), @intCast(format));
    }

    pub fn SetColorSpace(self: ?*anyopaque, colorSpace: ?*anyopaque) void {
        qtc.QImage_SetColorSpace(@ptrCast(self), @ptrCast(colorSpace));
    }

    pub fn ColorTransformed(self: ?*anyopaque, transform: ?*anyopaque) QtC.QImage {
        return qtc.QImage_ColorTransformed(@ptrCast(self), @ptrCast(transform));
    }

    pub fn ColorTransformed2(self: ?*anyopaque, transform: ?*anyopaque, format: i32) QtC.QImage {
        return qtc.QImage_ColorTransformed2(@ptrCast(self), @ptrCast(transform), @intCast(format));
    }

    pub fn ApplyColorTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QImage_ApplyColorTransform(@ptrCast(self), @ptrCast(transform));
    }

    pub fn ApplyColorTransform2(self: ?*anyopaque, transform: ?*anyopaque, format: i32) void {
        qtc.QImage_ApplyColorTransform2(@ptrCast(self), @ptrCast(transform), @intCast(format));
    }

    pub fn Load(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        return qtc.QImage_Load(@ptrCast(self), @ptrCast(device), @ptrCast(format));
    }

    pub fn Load2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_Load2(@ptrCast(self), fileName_str);
    }

    pub fn LoadFromData(self: ?*anyopaque, data: []const u8) bool {
        return qtc.QImage_LoadFromData(@ptrCast(self), @ptrCast(data));
    }

    pub fn LoadFromData2(self: ?*anyopaque, buf: *const u8, lenVal: i32) bool {
        return qtc.QImage_LoadFromData2(@ptrCast(self), @ptrCast(buf), lenVal);
    }

    pub fn LoadFromData3(self: ?*anyopaque, data: []u8) bool {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QImage_LoadFromData3(@ptrCast(self), data_str);
    }

    pub fn Save(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_Save(@ptrCast(self), fileName_str);
    }

    pub fn Save2(self: ?*anyopaque, device: ?*anyopaque) bool {
        return qtc.QImage_Save2(@ptrCast(self), @ptrCast(device));
    }

    pub fn FromData(data: []const u8) QtC.QImage {
        return qtc.QImage_FromData(@ptrCast(data));
    }

    pub fn FromData2(data: *const u8, size: i32) QtC.QImage {
        return qtc.QImage_FromData2(@ptrCast(data), size);
    }

    pub fn FromData3(data: []u8) QtC.QImage {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QImage_FromData3(data_str);
    }

    pub fn CacheKey(self: ?*anyopaque, ) i64 {
        return qtc.QImage_CacheKey(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QImage_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QImage_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QImage_QBasePaintEngine(@ptrCast(self));
    }

    pub fn DotsPerMeterX(self: ?*anyopaque, ) i32 {
        return qtc.QImage_DotsPerMeterX(@ptrCast(self));
    }

    pub fn DotsPerMeterY(self: ?*anyopaque, ) i32 {
        return qtc.QImage_DotsPerMeterY(@ptrCast(self));
    }

    pub fn SetDotsPerMeterX(self: ?*anyopaque, dotsPerMeterX: i32) void {
        qtc.QImage_SetDotsPerMeterX(@ptrCast(self), dotsPerMeterX);
    }

    pub fn SetDotsPerMeterY(self: ?*anyopaque, dotsPerMeterY: i32) void {
        qtc.QImage_SetDotsPerMeterY(@ptrCast(self), dotsPerMeterY);
    }

    pub fn Offset(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QImage_Offset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QImage_SetOffset(@ptrCast(self), @ptrCast(offset));
    }

    pub fn TextKeys(self: ?*anyopaque, ) []const u8 {
        return qtc.QImage_TextKeys(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QImage_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetText(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QImage_SetText(@ptrCast(self), key_str, value_str);
    }

    pub fn PixelFormat(self: ?*anyopaque, ) QtC.QPixelFormat {
        return qtc.QImage_PixelFormat(@ptrCast(self));
    }

    pub fn ToPixelFormat(format: i32) QtC.QPixelFormat {
        return qtc.QImage_ToPixelFormat(@intCast(format));
    }

    pub fn ToImageFormat(format: QtC.QPixelFormat) i32 {
        return qtc.QImage_ToImageFormat(@ptrCast(format));
    }

    pub fn ToHBITMAP(self: ?*anyopaque, ) struct HBITMAP__ {
        return @ptrCast(qtc.QImage_ToHBITMAP(@ptrCast(self)));
    }

    pub fn ToHICON(self: ?*anyopaque, ) struct HICON__ {
        return @ptrCast(qtc.QImage_ToHICON(@ptrCast(self)));
    }

    pub fn FromHBITMAP(hbitmap: *struct HBITMAP__) QtC.QImage {
        return qtc.QImage_FromHBITMAP(@ptrCast(hbitmap));
    }

    pub fn FromHICON(icon: *struct HICON__) QtC.QImage {
        return qtc.QImage_FromHICON(@ptrCast(icon));
    }

    pub fn Metric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QImage_Metric(@ptrCast(self), @intCast(metric));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QImage_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, metric: i32) i32 {
        return qtc.QImage_QBaseMetric(@ptrCast(self), @intCast(metric));
    }

    pub fn MirroredHelper(self: ?*anyopaque, horizontal: bool, vertical: bool) QtC.QImage {
        return qtc.QImage_MirroredHelper(@ptrCast(self), horizontal, vertical);
    }

    /// Allows for overriding the related default method
    pub fn OnMirroredHelper(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, bool) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnMirroredHelper(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMirroredHelper(self: ?*anyopaque, horizontal: bool, vertical: bool) QtC.QImage {
        return qtc.QImage_QBaseMirroredHelper(@ptrCast(self), horizontal, vertical);
    }

    pub fn RgbSwappedHelper(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_RgbSwappedHelper(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRgbSwappedHelper(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnRgbSwappedHelper(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRgbSwappedHelper(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QImage_QBaseRgbSwappedHelper(@ptrCast(self));
    }

    pub fn MirroredInplace(self: ?*anyopaque, horizontal: bool, vertical: bool) void {
        qtc.QImage_MirroredInplace(@ptrCast(self), horizontal, vertical);
    }

    /// Allows for overriding the related default method
    pub fn OnMirroredInplace(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool, bool) callconv(.c) void) void {
        qtc.QImage_OnMirroredInplace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMirroredInplace(self: ?*anyopaque, horizontal: bool, vertical: bool) void {
        qtc.QImage_QBaseMirroredInplace(@ptrCast(self), horizontal, vertical);
    }

    pub fn RgbSwappedInplace(self: ?*anyopaque, ) void {
        qtc.QImage_RgbSwappedInplace(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnRgbSwappedInplace(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImage_OnRgbSwappedInplace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseRgbSwappedInplace(self: ?*anyopaque, ) void {
        qtc.QImage_QBaseRgbSwappedInplace(@ptrCast(self));
    }

    pub fn ConvertToFormatHelper(self: ?*anyopaque, format: i32, flags: i32) QtC.QImage {
        return qtc.QImage_ConvertToFormatHelper(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnConvertToFormatHelper(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnConvertToFormatHelper(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConvertToFormatHelper(self: ?*anyopaque, format: i32, flags: i32) QtC.QImage {
        return qtc.QImage_QBaseConvertToFormatHelper(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    pub fn ConvertToFormatInplace(self: ?*anyopaque, format: i32, flags: i32) bool {
        return qtc.QImage_ConvertToFormatInplace(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    /// Allows for overriding the related default method
    pub fn OnConvertToFormatInplace(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) bool) void {
        qtc.QImage_OnConvertToFormatInplace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConvertToFormatInplace(self: ?*anyopaque, format: i32, flags: i32) bool {
        return qtc.QImage_QBaseConvertToFormatInplace(@ptrCast(self), @intCast(format), @intCast(flags));
    }

    pub fn SmoothScaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_SmoothScaled(@ptrCast(self), w, h);
    }

    /// Allows for overriding the related default method
    pub fn OnSmoothScaled(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QImage) void {
        qtc.QImage_OnSmoothScaled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSmoothScaled(self: ?*anyopaque, w: i32, h: i32) QtC.QImage {
        return qtc.QImage_QBaseSmoothScaled(@ptrCast(self), w, h);
    }

    pub fn DetachMetadata(self: ?*anyopaque, ) void {
        qtc.QImage_DetachMetadata(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDetachMetadata(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDetachMetadata(self: ?*anyopaque, ) void {
        qtc.QImage_QBaseDetachMetadata(@ptrCast(self));
    }

    pub fn DataPtr(self: ?*anyopaque, ) QImageData {
        return @ptrCast(qtc.QImage_DataPtr(@ptrCast(self)));
    }

    pub fn Copy1(self: ?*anyopaque, rect: ?*anyopaque) QtC.QImage {
        return qtc.QImage_Copy1(@ptrCast(self), @ptrCast(rect));
    }

    pub fn ConvertToFormat22(self: ?*anyopaque, f: i32, flags: i32) QtC.QImage {
        return qtc.QImage_ConvertToFormat22(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    pub fn ConvertToFormat3(self: ?*anyopaque, f: i32, colorTable: []const u8, flags: i32) QtC.QImage {
        return qtc.QImage_ConvertToFormat3(@ptrCast(self), @intCast(f), @ptrCast(colorTable), @intCast(flags));
    }

    pub fn ConvertedTo2(self: ?*anyopaque, f: i32, flags: i32) QtC.QImage {
        return qtc.QImage_ConvertedTo2(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    pub fn ConvertTo2(self: ?*anyopaque, f: i32, flags: i32) void {
        qtc.QImage_ConvertTo2(@ptrCast(self), @intCast(f), @intCast(flags));
    }

    pub fn CreateAlphaMask1(self: ?*anyopaque, flags: i32) QtC.QImage {
        return qtc.QImage_CreateAlphaMask1(@ptrCast(self), @intCast(flags));
    }

    pub fn CreateHeuristicMask1(self: ?*anyopaque, clipTight: bool) QtC.QImage {
        return qtc.QImage_CreateHeuristicMask1(@ptrCast(self), clipTight);
    }

    pub fn CreateMaskFromColor2(self: ?*anyopaque, color: u32, mode: i32) QtC.QImage {
        return qtc.QImage_CreateMaskFromColor2(@ptrCast(self), color, @intCast(mode));
    }

    pub fn Scaled3(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32) QtC.QImage {
        return qtc.QImage_Scaled3(@ptrCast(self), w, h, @intCast(aspectMode));
    }

    pub fn Scaled4(self: ?*anyopaque, w: i32, h: i32, aspectMode: i32, mode: i32) QtC.QImage {
        return qtc.QImage_Scaled4(@ptrCast(self), w, h, @intCast(aspectMode), @intCast(mode));
    }

    pub fn Scaled22(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32) QtC.QImage {
        return qtc.QImage_Scaled22(@ptrCast(self), @ptrCast(s), @intCast(aspectMode));
    }

    pub fn Scaled32(self: ?*anyopaque, s: ?*anyopaque, aspectMode: i32, mode: i32) QtC.QImage {
        return qtc.QImage_Scaled32(@ptrCast(self), @ptrCast(s), @intCast(aspectMode), @intCast(mode));
    }

    pub fn ScaledToWidth2(self: ?*anyopaque, w: i32, mode: i32) QtC.QImage {
        return qtc.QImage_ScaledToWidth2(@ptrCast(self), w, @intCast(mode));
    }

    pub fn ScaledToHeight2(self: ?*anyopaque, h: i32, mode: i32) QtC.QImage {
        return qtc.QImage_ScaledToHeight2(@ptrCast(self), h, @intCast(mode));
    }

    pub fn Transformed2(self: ?*anyopaque, matrix: ?*anyopaque, mode: i32) QtC.QImage {
        return qtc.QImage_Transformed2(@ptrCast(self), @ptrCast(matrix), @intCast(mode));
    }

    pub fn Mirrored1(self: ?*anyopaque, horizontally: bool) QtC.QImage {
        return qtc.QImage_Mirrored1(@ptrCast(self), horizontally);
    }

    pub fn Mirrored2(self: ?*anyopaque, horizontally: bool, vertically: bool) QtC.QImage {
        return qtc.QImage_Mirrored2(@ptrCast(self), horizontally, vertically);
    }

    pub fn Mirror1(self: ?*anyopaque, horizontally: bool) void {
        qtc.QImage_Mirror1(@ptrCast(self), horizontally);
    }

    pub fn Mirror2(self: ?*anyopaque, horizontally: bool, vertically: bool) void {
        qtc.QImage_Mirror2(@ptrCast(self), horizontally, vertically);
    }

    pub fn InvertPixels1(self: ?*anyopaque, param1: i32) void {
        qtc.QImage_InvertPixels1(@ptrCast(self), @intCast(param1));
    }

    pub fn ConvertedToColorSpace3(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32, flags: i32) QtC.QImage {
        return qtc.QImage_ConvertedToColorSpace3(@ptrCast(self), @ptrCast(colorSpace), @intCast(format), @intCast(flags));
    }

    pub fn ConvertToColorSpace3(self: ?*anyopaque, colorSpace: ?*anyopaque, format: i32, flags: i32) void {
        qtc.QImage_ConvertToColorSpace3(@ptrCast(self), @ptrCast(colorSpace), @intCast(format), @intCast(flags));
    }

    pub fn ColorTransformed3(self: ?*anyopaque, transform: ?*anyopaque, format: i32, flags: i32) QtC.QImage {
        return qtc.QImage_ColorTransformed3(@ptrCast(self), @ptrCast(transform), @intCast(format), @intCast(flags));
    }

    pub fn ApplyColorTransform3(self: ?*anyopaque, transform: ?*anyopaque, format: i32, flags: i32) void {
        qtc.QImage_ApplyColorTransform3(@ptrCast(self), @ptrCast(transform), @intCast(format), @intCast(flags));
    }

    pub fn Load22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_Load22(@ptrCast(self), fileName_str, @ptrCast(format));
    }

    pub fn LoadFromData22(self: ?*anyopaque, data: []const u8, format: []const u8) bool {
        return qtc.QImage_LoadFromData22(@ptrCast(self), @ptrCast(data), @ptrCast(format));
    }

    pub fn LoadFromData32(self: ?*anyopaque, buf: *const u8, lenVal: i32, format: []const u8) bool {
        return qtc.QImage_LoadFromData32(@ptrCast(self), @ptrCast(buf), lenVal, @ptrCast(format));
    }

    pub fn LoadFromData23(self: ?*anyopaque, data: []u8, format: []const u8) bool {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QImage_LoadFromData23(@ptrCast(self), data_str, @ptrCast(format));
    }

    pub fn Save22(self: ?*anyopaque, fileName: []const u8, format: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_Save22(@ptrCast(self), fileName_str, @ptrCast(format));
    }

    pub fn Save3(self: ?*anyopaque, fileName: []const u8, format: []const u8, quality: i32) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QImage_Save3(@ptrCast(self), fileName_str, @ptrCast(format), quality);
    }

    pub fn Save23(self: ?*anyopaque, device: ?*anyopaque, format: []const u8) bool {
        return qtc.QImage_Save23(@ptrCast(self), @ptrCast(device), @ptrCast(format));
    }

    pub fn Save32(self: ?*anyopaque, device: ?*anyopaque, format: []const u8, quality: i32) bool {
        return qtc.QImage_Save32(@ptrCast(self), @ptrCast(device), @ptrCast(format), quality);
    }

    pub fn FromData22(data: []const u8, format: []const u8) QtC.QImage {
        return qtc.QImage_FromData22(@ptrCast(data), @ptrCast(format));
    }

    pub fn FromData32(data: *const u8, size: i32, format: []const u8) QtC.QImage {
        return qtc.QImage_FromData32(@ptrCast(data), size, @ptrCast(format));
    }

    pub fn FromData23(data: []u8, format: []const u8) QtC.QImage {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QImage_FromData23(data_str, @ptrCast(format));
    }

    pub fn Text1(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
const _str = qtc.QImage_Text1(@ptrCast(self), key_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qimage.Text1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToHICON1(self: ?*anyopaque, mask: ?*anyopaque) struct HICON__ {
        return @ptrCast(qtc.QImage_ToHICON1(@ptrCast(self), @ptrCast(mask)));
    }

    pub fn DetachMetadata1(self: ?*anyopaque, invalidateCache: bool) void {
        qtc.QImage_DetachMetadata1(@ptrCast(self), invalidateCache);
    }

    /// Allows for overriding the related default method
    pub fn OnDetachMetadata1(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QImage_OnDetachMetadata1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDetachMetadata1(self: ?*anyopaque, invalidateCache: bool) void {
        qtc.QImage_QBaseDetachMetadata1(@ptrCast(self), invalidateCache);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QImage_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/image.html#types
pub const enums = struct {
    pub const InvertMode = enum {
        pub const InvertRgb: i32 = 0;
        pub const InvertRgba: i32 = 1;
    };

    pub const Format = enum {
        pub const Format_Invalid: i32 = 0;
        pub const Format_Mono: i32 = 1;
        pub const Format_MonoLSB: i32 = 2;
        pub const Format_Indexed8: i32 = 3;
        pub const Format_RGB32: i32 = 4;
        pub const Format_ARGB32: i32 = 5;
        pub const Format_ARGB32_Premultiplied: i32 = 6;
        pub const Format_RGB16: i32 = 7;
        pub const Format_ARGB8565_Premultiplied: i32 = 8;
        pub const Format_RGB666: i32 = 9;
        pub const Format_ARGB6666_Premultiplied: i32 = 10;
        pub const Format_RGB555: i32 = 11;
        pub const Format_ARGB8555_Premultiplied: i32 = 12;
        pub const Format_RGB888: i32 = 13;
        pub const Format_RGB444: i32 = 14;
        pub const Format_ARGB4444_Premultiplied: i32 = 15;
        pub const Format_RGBX8888: i32 = 16;
        pub const Format_RGBA8888: i32 = 17;
        pub const Format_RGBA8888_Premultiplied: i32 = 18;
        pub const Format_BGR30: i32 = 19;
        pub const Format_A2BGR30_Premultiplied: i32 = 20;
        pub const Format_RGB30: i32 = 21;
        pub const Format_A2RGB30_Premultiplied: i32 = 22;
        pub const Format_Alpha8: i32 = 23;
        pub const Format_Grayscale8: i32 = 24;
        pub const Format_RGBX64: i32 = 25;
        pub const Format_RGBA64: i32 = 26;
        pub const Format_RGBA64_Premultiplied: i32 = 27;
        pub const Format_Grayscale16: i32 = 28;
        pub const Format_BGR888: i32 = 29;
        pub const Format_RGBX16FPx4: i32 = 30;
        pub const Format_RGBA16FPx4: i32 = 31;
        pub const Format_RGBA16FPx4_Premultiplied: i32 = 32;
        pub const Format_RGBX32FPx4: i32 = 33;
        pub const Format_RGBA32FPx4: i32 = 34;
        pub const Format_RGBA32FPx4_Premultiplied: i32 = 35;
        pub const Format_CMYK8888: i32 = 36;
        pub const NImageFormats: i32 = 37;
    };

};
