const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvideoframe.html
pub const qvideoframe = struct {

    /// New constructs a new QVideoFrame object.
    pub fn New() QtC.QVideoFrame {
        return qtc.QVideoFrame_new();
    }


    /// New2 constructs a new QVideoFrame object.
    pub fn New2(format: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new2(@ptrCast(format));
    }


    /// New3 constructs a new QVideoFrame object.
    pub fn New3(image: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new3(@ptrCast(image));
    }


    /// New4 constructs a new QVideoFrame object.
    pub fn New4(other: ?*anyopaque) QtC.QVideoFrame {
        return qtc.QVideoFrame_new4(@ptrCast(other));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QVideoFrame_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrame_IsValid(@ptrCast(self));
    }

    pub fn PixelFormat(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_PixelFormat(@ptrCast(self));
    }

    pub fn SurfaceFormat(self: ?*anyopaque, ) QtC.QVideoFrameFormat {
        return qtc.QVideoFrame_SurfaceFormat(@ptrCast(self));
    }

    pub fn HandleType(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_HandleType(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QVideoFrame_Size(@ptrCast(self));
    }

    pub fn Width(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_Width(@ptrCast(self));
    }

    pub fn Height(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_Height(@ptrCast(self));
    }

    pub fn IsMapped(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrame_IsMapped(@ptrCast(self));
    }

    pub fn IsReadable(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrame_IsReadable(@ptrCast(self));
    }

    pub fn IsWritable(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrame_IsWritable(@ptrCast(self));
    }

    pub fn MapMode(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_MapMode(@ptrCast(self));
    }

    pub fn Map(self: ?*anyopaque, mode: i32) bool {
        return qtc.QVideoFrame_Map(@ptrCast(self), @intCast(mode));
    }

    pub fn Unmap(self: ?*anyopaque, ) void {
        qtc.QVideoFrame_Unmap(@ptrCast(self));
    }

    pub fn BytesPerLine(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_BytesPerLine(@ptrCast(self), plane);
    }

    pub fn Bits(self: ?*anyopaque, plane: i32) u8 {
        return @ptrCast(qtc.QVideoFrame_Bits(@ptrCast(self), plane));
    }

    pub fn Bits2(self: ?*anyopaque, plane: i32) u8 {
        return @ptrCast(qtc.QVideoFrame_Bits2(@ptrCast(self), plane));
    }

    pub fn MappedBytes(self: ?*anyopaque, plane: i32) i32 {
        return qtc.QVideoFrame_MappedBytes(@ptrCast(self), plane);
    }

    pub fn PlaneCount(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_PlaneCount(@ptrCast(self));
    }

    pub fn StartTime(self: ?*anyopaque, ) i64 {
        return qtc.QVideoFrame_StartTime(@ptrCast(self));
    }

    pub fn SetStartTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetStartTime(@ptrCast(self), time);
    }

    pub fn EndTime(self: ?*anyopaque, ) i64 {
        return qtc.QVideoFrame_EndTime(@ptrCast(self));
    }

    pub fn SetEndTime(self: ?*anyopaque, time: i64) void {
        qtc.QVideoFrame_SetEndTime(@ptrCast(self), time);
    }

    pub fn SetRotationAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QVideoFrame_SetRotationAngle(@ptrCast(self), @intCast(angle));
    }

    pub fn RotationAngle(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_RotationAngle(@ptrCast(self));
    }

    pub fn SetRotation(self: ?*anyopaque, angle: i32) void {
        qtc.QVideoFrame_SetRotation(@ptrCast(self), @intCast(angle));
    }

    pub fn Rotation(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame_Rotation(@ptrCast(self));
    }

    pub fn SetMirrored(self: ?*anyopaque, mirrored: bool) void {
        qtc.QVideoFrame_SetMirrored(@ptrCast(self), mirrored);
    }

    pub fn Mirrored(self: ?*anyopaque, ) bool {
        return qtc.QVideoFrame_Mirrored(@ptrCast(self));
    }

    pub fn SetStreamFrameRate(self: ?*anyopaque, rate: f64) void {
        qtc.QVideoFrame_SetStreamFrameRate(@ptrCast(self), rate);
    }

    pub fn StreamFrameRate(self: ?*anyopaque, ) f64 {
        return qtc.QVideoFrame_StreamFrameRate(@ptrCast(self));
    }

    pub fn ToImage(self: ?*anyopaque, ) QtC.QImage {
        return qtc.QVideoFrame_ToImage(@ptrCast(self));
    }

    pub fn SubtitleText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVideoFrame_SubtitleText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvideoframe.SubtitleText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSubtitleText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QVideoFrame_SetSubtitleText(@ptrCast(self), text_str);
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QVideoFrame_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(options));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvideoframe-paintoptions.html
pub const qvideoframe__paintoptions = struct {

    /// New constructs a new QVideoFrame::PaintOptions object.
    pub fn New(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new(@ptrCast(other));
    }


    /// New2 constructs a new QVideoFrame::PaintOptions object.
    pub fn New2(other: ?*anyopaque) QtC.QVideoFrame__PaintOptions {
        return qtc.QVideoFrame__PaintOptions_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn BackgroundColor(self: ?*anyopaque, ) QtC.QColor {
        return qtc.QVideoFrame__PaintOptions_BackgroundColor(@ptrCast(self));
    }

    pub fn SetBackgroundColor(self: ?*anyopaque, backgroundColor: QtC.QColor) void {
        qtc.QVideoFrame__PaintOptions_SetBackgroundColor(@ptrCast(self), @ptrCast(backgroundColor));
    }

    pub fn AspectRatioMode(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame__PaintOptions_AspectRatioMode(@ptrCast(self));
    }

    pub fn SetAspectRatioMode(self: ?*anyopaque, aspectRatioMode: i32) void {
        qtc.QVideoFrame__PaintOptions_SetAspectRatioMode(@ptrCast(self), @intCast(aspectRatioMode));
    }

    pub fn PaintFlags(self: ?*anyopaque, ) i32 {
        return qtc.QVideoFrame__PaintOptions_PaintFlags(@ptrCast(self));
    }

    pub fn SetPaintFlags(self: ?*anyopaque, paintFlags: i32) void {
        qtc.QVideoFrame__PaintOptions_SetPaintFlags(@ptrCast(self), @intCast(paintFlags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVideoFrame__PaintOptions_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/videoframe.html#types
pub const enums = struct {
    pub const HandleType = enum {
        pub const NoHandle: i32 = 0;
        pub const RhiTextureHandle: i32 = 1;
    };

    pub const MapMode = enum {
        pub const NotMapped: i32 = 0;
        pub const ReadOnly: i32 = 1;
        pub const WriteOnly: i32 = 2;
        pub const ReadWrite: i32 = 3;
    };

    pub const RotationAngle = enum {
        pub const Rotation0: i32 = 0;
        pub const Rotation90: i32 = 90;
        pub const Rotation180: i32 = 180;
        pub const Rotation270: i32 = 270;
    };

    pub const PaintFlag = enum {
        pub const DontDrawSubtitles: i32 = 1;
    };

};
