const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpicture.html
pub const qpicture = struct {

    /// New constructs a new QPicture object.
    pub fn New() QtC.QPicture {
        return qtc.QPicture_new();
    }


    /// New2 constructs a new QPicture object.
    pub fn New2(param1: ?*anyopaque) QtC.QPicture {
        return qtc.QPicture_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QPicture object.
    pub fn New3(formatVersion: i32) QtC.QPicture {
        return qtc.QPicture_new3(formatVersion);
    }


    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QPicture_IsNull(@ptrCast(self));
    }

    pub fn DevType(self: ?*anyopaque, ) i32 {
        return qtc.QPicture_DevType(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QPicture_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDevType(self: ?*anyopaque, ) i32 {
        return qtc.QPicture_QBaseDevType(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) u32 {
        return qtc.QPicture_Size(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QPicture_Data(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn SetData(self: ?*anyopaque, data: []const u8, size: u32) void {
        qtc.QPicture_SetData(@ptrCast(self), @ptrCast(data), size);
    }

    /// Allows for overriding the related default method
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u32) callconv(.c) void) void {
        qtc.QPicture_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetData(self: ?*anyopaque, data: []const u8, size: u32) void {
        qtc.QPicture_QBaseSetData(@ptrCast(self), @ptrCast(data), size);
    }

    pub fn Play(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QPicture_Play(@ptrCast(self), @ptrCast(p));
    }

    pub fn Load(self: ?*anyopaque, dev: ?*anyopaque) bool {
        return qtc.QPicture_Load(@ptrCast(self), @ptrCast(dev));
    }

    pub fn Load2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPicture_Load2(@ptrCast(self), fileName_str);
    }

    pub fn Save(self: ?*anyopaque, dev: ?*anyopaque) bool {
        return qtc.QPicture_Save(@ptrCast(self), @ptrCast(dev));
    }

    pub fn Save2(self: ?*anyopaque, fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPicture_Save2(@ptrCast(self), fileName_str);
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPicture_BoundingRect(@ptrCast(self));
    }

    pub fn SetBoundingRect(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QPicture_SetBoundingRect(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorAssign(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QPicture_OperatorAssign(@ptrCast(self), @ptrCast(p));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPicture_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QPicture_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QPicture_IsDetached(@ptrCast(self));
    }

    pub fn PaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPicture_PaintEngine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QPaintEngine) void {
        qtc.QPicture_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEngine(self: ?*anyopaque, ) QtC.QPaintEngine {
        return qtc.QPicture_QBasePaintEngine(@ptrCast(self));
    }

    pub fn Metric(self: ?*anyopaque, m: i32) i32 {
        return qtc.QPicture_Metric(@ptrCast(self), @intCast(m));
    }

    /// Allows for overriding the related default method
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QPicture_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMetric(self: ?*anyopaque, m: i32) i32 {
        return qtc.QPicture_QBaseMetric(@ptrCast(self), @intCast(m));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPicture_Delete(@ptrCast(self));
    }
};
