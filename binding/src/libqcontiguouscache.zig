const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html
pub const qcontiguouscachedata = struct {

    /// New constructs a new QContiguousCacheData object.
    pub fn New() QtC.QContiguousCacheData {
        return qtc.QContiguousCacheData_new();
    }


    pub fn Ref(self: ?*anyopaque, ) QBasicAtomicInteger<int> {
        return qtc.QContiguousCacheData_Ref(@ptrCast(self));
    }

    pub fn SetRef(self: ?*anyopaque, ref: QBasicAtomicInteger<int>) void {
        qtc.QContiguousCacheData_SetRef(@ptrCast(self), ref);
    }

    pub fn Alloc(self: ?*anyopaque, ) i64 {
        return qtc.QContiguousCacheData_Alloc(@ptrCast(self));
    }

    pub fn SetAlloc(self: ?*anyopaque, alloc: i64) void {
        qtc.QContiguousCacheData_SetAlloc(@ptrCast(self), alloc);
    }

    pub fn Count(self: ?*anyopaque, ) i64 {
        return qtc.QContiguousCacheData_Count(@ptrCast(self));
    }

    pub fn SetCount(self: ?*anyopaque, count: i64) void {
        qtc.QContiguousCacheData_SetCount(@ptrCast(self), count);
    }

    pub fn Start(self: ?*anyopaque, ) i64 {
        return qtc.QContiguousCacheData_Start(@ptrCast(self));
    }

    pub fn SetStart(self: ?*anyopaque, start: i64) void {
        qtc.QContiguousCacheData_SetStart(@ptrCast(self), start);
    }

    pub fn Offset(self: ?*anyopaque, ) i64 {
        return qtc.QContiguousCacheData_Offset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QContiguousCacheData_SetOffset(@ptrCast(self), offset);
    }

    pub fn AllocateData(size: i64, alignment: i64) QtC.QContiguousCacheData {
        return qtc.QContiguousCacheData_AllocateData(size, alignment);
    }

    pub fn FreeData(data: ?*anyopaque) void {
        qtc.QContiguousCacheData_FreeData(@ptrCast(data));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContiguousCacheData_Delete(@ptrCast(self));
    }
};
