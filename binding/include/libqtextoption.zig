const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtextoption.html
pub const qtextoption = struct {

    /// New constructs a new QTextOption object.
    pub fn New() QtC.QTextOption {
        return qtc.QTextOption_new();
    }


    /// New2 constructs a new QTextOption object.
    pub fn New2(alignment: i32) QtC.QTextOption {
        return qtc.QTextOption_new2(@intCast(alignment));
    }


    /// New3 constructs a new QTextOption object.
    pub fn New3(o: ?*anyopaque) QtC.QTextOption {
        return qtc.QTextOption_new3(@ptrCast(o));
    }


    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        qtc.QTextOption_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QTextOption_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QTextOption_Alignment(@ptrCast(self));
    }

    pub fn SetTextDirection(self: ?*anyopaque, aDirection: i32) void {
        qtc.QTextOption_SetTextDirection(@ptrCast(self), @intCast(aDirection));
    }

    pub fn TextDirection(self: ?*anyopaque, ) i32 {
        return qtc.QTextOption_TextDirection(@ptrCast(self));
    }

    pub fn SetWrapMode(self: ?*anyopaque, wrap: i32) void {
        qtc.QTextOption_SetWrapMode(@ptrCast(self), @intCast(wrap));
    }

    pub fn WrapMode(self: ?*anyopaque, ) i32 {
        return qtc.QTextOption_WrapMode(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: i64) void {
        qtc.QTextOption_SetFlags(@ptrCast(self), @intCast(flags));
    }

    pub fn Flags(self: ?*anyopaque, ) i64 {
        return qtc.QTextOption_Flags(@ptrCast(self));
    }

    pub fn SetTabStopDistance(self: ?*anyopaque, tabStopDistance: f64) void {
        qtc.QTextOption_SetTabStopDistance(@ptrCast(self), tabStopDistance);
    }

    pub fn TabStopDistance(self: ?*anyopaque, ) f64 {
        return qtc.QTextOption_TabStopDistance(@ptrCast(self));
    }

    pub fn SetTabArray(self: ?*anyopaque, tabStops: []const u8) void {
        qtc.QTextOption_SetTabArray(@ptrCast(self), @ptrCast(tabStops));
    }

    pub fn TabArray(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextOption_TabArray(@ptrCast(self));
    }

    pub fn SetTabs(self: ?*anyopaque, tabStops: []const u8) void {
        qtc.QTextOption_SetTabs(@ptrCast(self), @ptrCast(tabStops));
    }

    pub fn Tabs(self: ?*anyopaque, ) []const u8 {
        return qtc.QTextOption_Tabs(@ptrCast(self));
    }

    pub fn SetUseDesignMetrics(self: ?*anyopaque, b: bool) void {
        qtc.QTextOption_SetUseDesignMetrics(@ptrCast(self), b);
    }

    pub fn UseDesignMetrics(self: ?*anyopaque, ) bool {
        return qtc.QTextOption_UseDesignMetrics(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextoption-tab.html
pub const qtextoption__tab = struct {

    /// New constructs a new QTextOption::Tab object.
    pub fn New(other: ?*anyopaque) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new(@ptrCast(other));
    }


    /// New2 constructs a new QTextOption::Tab object.
    pub fn New2(other: ?*anyopaque) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new2(@ptrCast(other));
    }


    /// New3 constructs a new QTextOption::Tab object.
    pub fn New3() QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new3();
    }


    /// New4 constructs a new QTextOption::Tab object.
    pub fn New4(pos: f64, tabType: i32) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new4(pos, @intCast(tabType));
    }


    /// New5 constructs a new QTextOption::Tab object.
    pub fn New5(param1: ?*anyopaque) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QTextOption::Tab object.
    pub fn New6(pos: f64, tabType: i32, delim: QtC.QChar) QtC.QTextOption__Tab {
        return qtc.QTextOption__Tab_new6(pos, @intCast(tabType), @ptrCast(delim));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextOption__Tab_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QTextOption__Tab_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextOption__Tab_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QTextOption__Tab_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn Position(self: ?*anyopaque, ) f64 {
        return qtc.QTextOption__Tab_Position(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: f64) void {
        qtc.QTextOption__Tab_SetPosition(@ptrCast(self), position);
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QTextOption__Tab_Type(@ptrCast(self));
    }

    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QTextOption__Tab_SetType(@ptrCast(self), @intCast(_type));
    }

    pub fn Delimiter(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QTextOption__Tab_Delimiter(@ptrCast(self));
    }

    pub fn SetDelimiter(self: ?*anyopaque, delimiter: QtC.QChar) void {
        qtc.QTextOption__Tab_SetDelimiter(@ptrCast(self), @ptrCast(delimiter));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QTextOption__Tab_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTextOption__Tab_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/textoption.html#types
pub const enums = struct {
    pub const TabType = enum {
        pub const LeftTab: i32 = 0;
        pub const RightTab: i32 = 1;
        pub const CenterTab: i32 = 2;
        pub const DelimiterTab: i32 = 3;
    };

    pub const WrapMode = enum {
        pub const NoWrap: i32 = 0;
        pub const WordWrap: i32 = 1;
        pub const ManualWrap: i32 = 2;
        pub const WrapAnywhere: i32 = 3;
        pub const WrapAtWordBoundaryOrAnywhere: i32 = 4;
    };

    pub const Flag = enum {
        pub const ShowTabsAndSpaces: i64 = 1;
        pub const ShowLineAndParagraphSeparators: i64 = 2;
        pub const AddSpaceForLineAndParagraphSeparators: i64 = 4;
        pub const SuppressColors: i64 = 8;
        pub const ShowDocumentTerminator: i64 = 16;
        pub const IncludeTrailingSpaces: i64 = 2147483648;
    };

};
