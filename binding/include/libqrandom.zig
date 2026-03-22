const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrandomgenerator.html
pub const qrandomgenerator = struct {

    /// New constructs a new QRandomGenerator object.
    pub fn New() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new();
    }


    /// New2 constructs a new QRandomGenerator object.
    pub fn New2(seedBuffer: *const u32, lenVal: i64) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new2(@ptrCast(seedBuffer), lenVal);
    }


    /// New3 constructs a new QRandomGenerator object.
    pub fn New3(begin: *const u32, end: *const u32) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new3(@ptrCast(begin), @ptrCast(end));
    }


    /// New4 constructs a new QRandomGenerator object.
    pub fn New4(other: ?*anyopaque) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new4(@ptrCast(other));
    }


    /// New5 constructs a new QRandomGenerator object.
    pub fn New5(seedValue: u32) QtC.QRandomGenerator {
        return qtc.QRandomGenerator_new5(seedValue);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRandomGenerator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Generate(self: ?*anyopaque, ) u32 {
        return qtc.QRandomGenerator_Generate(@ptrCast(self));
    }

    pub fn Generate64(self: ?*anyopaque, ) u64 {
        return qtc.QRandomGenerator_Generate64(@ptrCast(self));
    }

    pub fn GenerateDouble(self: ?*anyopaque, ) f64 {
        return qtc.QRandomGenerator_GenerateDouble(@ptrCast(self));
    }

    pub fn Bounded(self: ?*anyopaque, highest: f64) f64 {
        return qtc.QRandomGenerator_Bounded(@ptrCast(self), highest);
    }

    pub fn Bounded2(self: ?*anyopaque, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded2(@ptrCast(self), highest);
    }

    pub fn Bounded3(self: ?*anyopaque, lowest: u32, highest: u32) u32 {
        return qtc.QRandomGenerator_Bounded3(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded4(self: ?*anyopaque, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded4(@ptrCast(self), highest);
    }

    pub fn Bounded5(self: ?*anyopaque, lowest: i32, highest: i32) i32 {
        return qtc.QRandomGenerator_Bounded5(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded6(self: ?*anyopaque, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded6(@ptrCast(self), highest);
    }

    pub fn Bounded7(self: ?*anyopaque, lowest: u64, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded7(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded8(self: ?*anyopaque, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded8(@ptrCast(self), highest);
    }

    pub fn Bounded9(self: ?*anyopaque, lowest: i64, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded9(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded10(self: ?*anyopaque, lowest: i32, highest: i64) i64 {
        return qtc.QRandomGenerator_Bounded10(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded11(self: ?*anyopaque, lowest: i64, highest: i32) i64 {
        return qtc.QRandomGenerator_Bounded11(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded12(self: ?*anyopaque, lowest: u32, highest: u64) u64 {
        return qtc.QRandomGenerator_Bounded12(@ptrCast(self), lowest, highest);
    }

    pub fn Bounded13(self: ?*anyopaque, lowest: u64, highest: u32) u64 {
        return qtc.QRandomGenerator_Bounded13(@ptrCast(self), lowest, highest);
    }

    pub fn Generate2(self: ?*anyopaque, begin: *u32, end: *u32) void {
        qtc.QRandomGenerator_Generate2(@ptrCast(self), @ptrCast(begin), @ptrCast(end));
    }

    pub fn OperatorCall(self: ?*anyopaque, ) u32 {
        return qtc.QRandomGenerator_OperatorCall(@ptrCast(self));
    }

    pub fn Seed(self: ?*anyopaque, ) void {
        qtc.QRandomGenerator_Seed(@ptrCast(self));
    }

    pub fn Discard(self: ?*anyopaque, z: u64) void {
        qtc.QRandomGenerator_Discard(@ptrCast(self), z);
    }

    pub fn Min() u32 {
        return qtc.QRandomGenerator_Min();
    }

    pub fn Max() u32 {
        return qtc.QRandomGenerator_Max();
    }

    pub fn System() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_System();
    }

    pub fn Global() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_Global();
    }

    pub fn SecurelySeeded() QtC.QRandomGenerator {
        return qtc.QRandomGenerator_SecurelySeeded();
    }

    pub fn Seed1(self: ?*anyopaque, s: u32) void {
        qtc.QRandomGenerator_Seed1(@ptrCast(self), s);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRandomGenerator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qrandomgenerator64.html
pub const qrandomgenerator64 = struct {

    /// New constructs a new QRandomGenerator64 object.
    pub fn New() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new();
    }


    /// New2 constructs a new QRandomGenerator64 object.
    pub fn New2(seedBuffer: *const u32, lenVal: i64) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new2(@ptrCast(seedBuffer), lenVal);
    }


    /// New3 constructs a new QRandomGenerator64 object.
    pub fn New3(begin: *const u32, end: *const u32) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new3(@ptrCast(begin), @ptrCast(end));
    }


    /// New4 constructs a new QRandomGenerator64 object.
    pub fn New4(other: ?*anyopaque) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new4(@ptrCast(other));
    }


    /// New5 constructs a new QRandomGenerator64 object.
    pub fn New5(param1: ?*anyopaque) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QRandomGenerator64 object.
    pub fn New6(seedValue: u32) QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_new6(seedValue);
    }


    pub fn Generate(self: ?*anyopaque, ) u64 {
        return qtc.QRandomGenerator64_Generate(@ptrCast(self));
    }

    pub fn OperatorCall(self: ?*anyopaque, ) u64 {
        return qtc.QRandomGenerator64_OperatorCall(@ptrCast(self));
    }

    pub fn Discard(self: ?*anyopaque, z: u64) void {
        qtc.QRandomGenerator64_Discard(@ptrCast(self), z);
    }

    pub fn Min() u64 {
        return qtc.QRandomGenerator64_Min();
    }

    pub fn Max() u64 {
        return qtc.QRandomGenerator64_Max();
    }

    pub fn System() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_System();
    }

    pub fn Global() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_Global();
    }

    pub fn SecurelySeeded() QtC.QRandomGenerator64 {
        return qtc.QRandomGenerator64_SecurelySeeded();
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRandomGenerator64_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRandomGenerator64_Delete(@ptrCast(self));
    }
};
