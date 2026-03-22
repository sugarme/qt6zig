const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qabstractvideobuffer.html
pub const qabstractvideobuffer = struct {

    /// New constructs a new QAbstractVideoBuffer object.
    pub fn New() QtC.QAbstractVideoBuffer {
        return qtc.QAbstractVideoBuffer_new();
    }


    pub fn Map(self: ?*anyopaque, mode: i32) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer_Map(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnMap(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAbstractVideoBuffer__MapData) void {
        qtc.QAbstractVideoBuffer_OnMap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMap(self: ?*anyopaque, mode: i32) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer_QBaseMap(@ptrCast(self), @intCast(mode));
    }

    pub fn Unmap(self: ?*anyopaque, ) void {
        qtc.QAbstractVideoBuffer_Unmap(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUnmap(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractVideoBuffer_OnUnmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUnmap(self: ?*anyopaque, ) void {
        qtc.QAbstractVideoBuffer_QBaseUnmap(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, ) QtC.QVideoFrameFormat {
        return qtc.QAbstractVideoBuffer_Format(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QVideoFrameFormat) void {
        qtc.QAbstractVideoBuffer_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFormat(self: ?*anyopaque, ) QtC.QVideoFrameFormat {
        return qtc.QAbstractVideoBuffer_QBaseFormat(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html
pub const qabstractvideobuffer__mapdata = struct {

    /// New constructs a new QAbstractVideoBuffer::MapData object.
    pub fn New(other: ?*anyopaque) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer__MapData_new(@ptrCast(other));
    }


    /// New2 constructs a new QAbstractVideoBuffer::MapData object.
    pub fn New2(other: ?*anyopaque) QtC.QAbstractVideoBuffer__MapData {
        return qtc.QAbstractVideoBuffer__MapData_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn PlaneCount(self: ?*anyopaque, ) i32 {
        return qtc.QAbstractVideoBuffer__MapData_PlaneCount(@ptrCast(self));
    }

    pub fn SetPlaneCount(self: ?*anyopaque, planeCount: i32) void {
        qtc.QAbstractVideoBuffer__MapData_SetPlaneCount(@ptrCast(self), planeCount);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractVideoBuffer__MapData_Delete(@ptrCast(self));
    }
};
