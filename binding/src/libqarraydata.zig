const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qarraydata.html
pub const qarraydata = struct {

    pub fn Ref_(self: ?*anyopaque, ) QBasicAtomicInteger<int> {
        return qtc.QArrayData_Ref_(@ptrCast(self));
    }

    pub fn SetRef_(self: ?*anyopaque, ref_: QBasicAtomicInteger<int>) void {
        qtc.QArrayData_SetRef_(@ptrCast(self), ref_);
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QArrayData_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QArrayData_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Alloc(self: ?*anyopaque, ) i64 {
        return qtc.QArrayData_Alloc(@ptrCast(self));
    }

    pub fn SetAlloc(self: ?*anyopaque, alloc: i64) void {
        qtc.QArrayData_SetAlloc(@ptrCast(self), alloc);
    }

    pub fn AllocatedCapacity(self: ?*anyopaque, ) i64 {
        return qtc.QArrayData_AllocatedCapacity(@ptrCast(self));
    }

    pub fn ConstAllocatedCapacity(self: ?*anyopaque, ) i64 {
        return qtc.QArrayData_ConstAllocatedCapacity(@ptrCast(self));
    }

    pub fn Ref(self: ?*anyopaque, ) bool {
        return qtc.QArrayData_Ref(@ptrCast(self));
    }

    pub fn Deref(self: ?*anyopaque, ) bool {
        return qtc.QArrayData_Deref(@ptrCast(self));
    }

    pub fn IsShared(self: ?*anyopaque, ) bool {
        return qtc.QArrayData_IsShared(@ptrCast(self));
    }

    pub fn NeedsDetach(self: ?*anyopaque, ) bool {
        return qtc.QArrayData_NeedsDetach(@ptrCast(self));
    }

    pub fn DetachCapacity(self: ?*anyopaque, newSize: i64) i64 {
        return qtc.QArrayData_DetachCapacity(@ptrCast(self), newSize);
    }

    pub fn Allocate(pdata: ?*anyopaque, objectSize: i64, alignment: i64, capacity: i64) ?*anyopaque {
        return qtc.QArrayData_Allocate(@ptrCast(pdata), objectSize, alignment, capacity);
    }

    pub fn Allocate1(pdata: ?*anyopaque, capacity: i64) ?*anyopaque {
        return qtc.QArrayData_Allocate1(@ptrCast(pdata), capacity);
    }

    pub fn Allocate2(pdata: ?*anyopaque, capacity: i64) ?*anyopaque {
        return qtc.QArrayData_Allocate2(@ptrCast(pdata), capacity);
    }

    pub fn ReallocateUnaligned(data: ?*anyopaque, dataPointer: ?*anyopaque, objectSize: i64, newCapacity: i64, option: i32) QPair<QArrayData *, void *> {
        return qtc.QArrayData_ReallocateUnaligned(@ptrCast(data), @ptrCast(dataPointer), objectSize, newCapacity, @intCast(option));
    }

    pub fn Deallocate(data: ?*anyopaque, objectSize: i64, alignment: i64) void {
        qtc.QArrayData_Deallocate(@ptrCast(data), objectSize, alignment);
    }

    pub fn Allocate5(pdata: ?*anyopaque, objectSize: i64, alignment: i64, capacity: i64, option: i32) ?*anyopaque {
        return qtc.QArrayData_Allocate5(@ptrCast(pdata), objectSize, alignment, capacity, @intCast(option));
    }

    pub fn Allocate13(pdata: ?*anyopaque, capacity: i64, option: i32) ?*anyopaque {
        return qtc.QArrayData_Allocate13(@ptrCast(pdata), capacity, @intCast(option));
    }

    pub fn Allocate23(pdata: ?*anyopaque, capacity: i64, option: i32) ?*anyopaque {
        return qtc.QArrayData_Allocate23(@ptrCast(pdata), capacity, @intCast(option));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QArrayData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/arraydata.html#types
pub const enums = struct {
    pub const AllocationOption = enum {
        pub const Grow: i32 = 0;
        pub const KeepSize: i32 = 1;
    };

    pub const GrowthPosition = enum {
        pub const GrowsAtEnd: i32 = 0;
        pub const GrowsAtBeginning: i32 = 1;
    };

    pub const ArrayOption = enum {
        pub const ArrayOptionDefault: i32 = 0;
        pub const CapacityReserved: i32 = 1;
    };

    pub const CutResult = enum {
        pub const Null: i32 = 0;
        pub const Empty: i32 = 1;
        pub const Full: i32 = 2;
        pub const Subset: i32 = 3;
    };

};
