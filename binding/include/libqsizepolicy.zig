const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsizepolicy.html
pub const qsizepolicy = struct {

    /// New constructs a new QSizePolicy object.
    pub fn New(other: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new(@ptrCast(other));
    }


    /// New2 constructs a new QSizePolicy object.
    pub fn New2(other: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSizePolicy object.
    pub fn New3() QtC.QSizePolicy {
        return qtc.QSizePolicy_new3();
    }


    /// New4 constructs a new QSizePolicy object.
    pub fn New4(horizontal: i32, vertical: i32) QtC.QSizePolicy {
        return qtc.QSizePolicy_new4(@intCast(horizontal), @intCast(vertical));
    }


    /// New5 constructs a new QSizePolicy object.
    pub fn New5(param1: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QSizePolicy_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QSizePolicy object.
    pub fn New6(horizontal: i32, vertical: i32, typeVal: i32) QtC.QSizePolicy {
        return qtc.QSizePolicy_new6(@intCast(horizontal), @intCast(vertical), @intCast(typeVal));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizePolicy_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSizePolicy_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn HorizontalPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_HorizontalPolicy(@ptrCast(self));
    }

    pub fn VerticalPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_VerticalPolicy(@ptrCast(self));
    }

    pub fn ControlType(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_ControlType(@ptrCast(self));
    }

    pub fn SetHorizontalPolicy(self: ?*anyopaque, d: i32) void {
        qtc.QSizePolicy_SetHorizontalPolicy(@ptrCast(self), @intCast(d));
    }

    pub fn SetVerticalPolicy(self: ?*anyopaque, d: i32) void {
        qtc.QSizePolicy_SetVerticalPolicy(@ptrCast(self), @intCast(d));
    }

    pub fn SetControlType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSizePolicy_SetControlType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn ExpandingDirections(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_ExpandingDirections(@ptrCast(self));
    }

    pub fn SetHeightForWidth(self: ?*anyopaque, b: bool) void {
        qtc.QSizePolicy_SetHeightForWidth(@ptrCast(self), b);
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QSizePolicy_HasHeightForWidth(@ptrCast(self));
    }

    pub fn SetWidthForHeight(self: ?*anyopaque, b: bool) void {
        qtc.QSizePolicy_SetWidthForHeight(@ptrCast(self), b);
    }

    pub fn HasWidthForHeight(self: ?*anyopaque, ) bool {
        return qtc.QSizePolicy_HasWidthForHeight(@ptrCast(self));
    }

    pub fn OperatorEqual(self: ?*anyopaque, s: ?*anyopaque) bool {
        return qtc.QSizePolicy_OperatorEqual(@ptrCast(self), @ptrCast(s));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, s: ?*anyopaque) bool {
        return qtc.QSizePolicy_OperatorNotEqual(@ptrCast(self), @ptrCast(s));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QSizePolicy_OperatorQVariant(@ptrCast(self));
    }

    pub fn HorizontalStretch(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_HorizontalStretch(@ptrCast(self));
    }

    pub fn VerticalStretch(self: ?*anyopaque, ) i32 {
        return qtc.QSizePolicy_VerticalStretch(@ptrCast(self));
    }

    pub fn SetHorizontalStretch(self: ?*anyopaque, stretchFactor: i32) void {
        qtc.QSizePolicy_SetHorizontalStretch(@ptrCast(self), stretchFactor);
    }

    pub fn SetVerticalStretch(self: ?*anyopaque, stretchFactor: i32) void {
        qtc.QSizePolicy_SetVerticalStretch(@ptrCast(self), stretchFactor);
    }

    pub fn RetainSizeWhenHidden(self: ?*anyopaque, ) bool {
        return qtc.QSizePolicy_RetainSizeWhenHidden(@ptrCast(self));
    }

    pub fn SetRetainSizeWhenHidden(self: ?*anyopaque, retainSize: bool) void {
        qtc.QSizePolicy_SetRetainSizeWhenHidden(@ptrCast(self), retainSize);
    }

    pub fn Transpose(self: ?*anyopaque, ) void {
        qtc.QSizePolicy_Transpose(@ptrCast(self));
    }

    pub fn Transposed(self: ?*anyopaque, ) QtC.QSizePolicy {
        return qtc.QSizePolicy_Transposed(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSizePolicy_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sizepolicy.html#types
pub const enums = struct {
    pub const PolicyFlag = enum {
        pub const GrowFlag: i32 = 1;
        pub const ExpandFlag: i32 = 2;
        pub const ShrinkFlag: i32 = 4;
        pub const IgnoreFlag: i32 = 8;
    };

    pub const Policy = enum {
        pub const Fixed: i32 = 0;
        pub const Minimum: i32 = 1;
        pub const Maximum: i32 = 4;
        pub const Preferred: i32 = 5;
        pub const MinimumExpanding: i32 = 3;
        pub const Expanding: i32 = 7;
        pub const Ignored: i32 = 13;
    };

    pub const ControlType = enum {
        pub const DefaultType: i32 = 1;
        pub const ButtonBox: i32 = 2;
        pub const CheckBox: i32 = 4;
        pub const ComboBox: i32 = 8;
        pub const Frame: i32 = 16;
        pub const GroupBox: i32 = 32;
        pub const Label: i32 = 64;
        pub const Line: i32 = 128;
        pub const LineEdit: i32 = 256;
        pub const PushButton: i32 = 512;
        pub const RadioButton: i32 = 1024;
        pub const Slider: i32 = 2048;
        pub const SpinBox: i32 = 4096;
        pub const TabWidget: i32 = 8192;
        pub const ToolButton: i32 = 16384;
    };

};
