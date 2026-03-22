const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpagelayout.html
pub const qpagelayout = struct {

    /// New constructs a new QPageLayout object.
    pub fn New() QtC.QPageLayout {
        return qtc.QPageLayout_new();
    }


    /// New2 constructs a new QPageLayout object.
    pub fn New2(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new2(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins));
    }


    /// New3 constructs a new QPageLayout object.
    pub fn New3(other: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new3(@ptrCast(other));
    }


    /// New4 constructs a new QPageLayout object.
    pub fn New4(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque, units: i32) QtC.QPageLayout {
        return qtc.QPageLayout_new4(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins), @intCast(units));
    }


    /// New5 constructs a new QPageLayout object.
    pub fn New5(pageSize: ?*anyopaque, orientation: i32, margins: ?*anyopaque, units: i32, minMargins: ?*anyopaque) QtC.QPageLayout {
        return qtc.QPageLayout_new5(@ptrCast(pageSize), @intCast(orientation), @ptrCast(margins), @intCast(units), @ptrCast(minMargins));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPageLayout_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsEquivalentTo(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPageLayout_IsEquivalentTo(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QPageLayout_IsValid(@ptrCast(self));
    }

    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QPageLayout_SetMode(@ptrCast(self), @intCast(mode));
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QPageLayout_Mode(@ptrCast(self));
    }

    pub fn SetPageSize(self: ?*anyopaque, pageSize: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize(@ptrCast(self), @ptrCast(pageSize));
    }

    pub fn PageSize(self: ?*anyopaque, ) QtC.QPageSize {
        return qtc.QPageLayout_PageSize(@ptrCast(self));
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QPageLayout_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QPageLayout_Orientation(@ptrCast(self));
    }

    pub fn SetUnits(self: ?*anyopaque, units: i32) void {
        qtc.QPageLayout_SetUnits(@ptrCast(self), @intCast(units));
    }

    pub fn Units(self: ?*anyopaque, ) i32 {
        return qtc.QPageLayout_Units(@ptrCast(self));
    }

    pub fn SetMargins(self: ?*anyopaque, margins: ?*anyopaque) bool {
        return qtc.QPageLayout_SetMargins(@ptrCast(self), @ptrCast(margins));
    }

    pub fn SetLeftMargin(self: ?*anyopaque, leftMargin: f64) bool {
        return qtc.QPageLayout_SetLeftMargin(@ptrCast(self), leftMargin);
    }

    pub fn SetRightMargin(self: ?*anyopaque, rightMargin: f64) bool {
        return qtc.QPageLayout_SetRightMargin(@ptrCast(self), rightMargin);
    }

    pub fn SetTopMargin(self: ?*anyopaque, topMargin: f64) bool {
        return qtc.QPageLayout_SetTopMargin(@ptrCast(self), topMargin);
    }

    pub fn SetBottomMargin(self: ?*anyopaque, bottomMargin: f64) bool {
        return qtc.QPageLayout_SetBottomMargin(@ptrCast(self), bottomMargin);
    }

    pub fn Margins(self: ?*anyopaque, ) QtC.QMarginsF {
        return qtc.QPageLayout_Margins(@ptrCast(self));
    }

    pub fn Margins2(self: ?*anyopaque, units: i32) QtC.QMarginsF {
        return qtc.QPageLayout_Margins2(@ptrCast(self), @intCast(units));
    }

    pub fn MarginsPoints(self: ?*anyopaque, ) QtC.QMargins {
        return qtc.QPageLayout_MarginsPoints(@ptrCast(self));
    }

    pub fn MarginsPixels(self: ?*anyopaque, resolution: i32) QtC.QMargins {
        return qtc.QPageLayout_MarginsPixels(@ptrCast(self), resolution);
    }

    pub fn SetMinimumMargins(self: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetMinimumMargins(@ptrCast(self), @ptrCast(minMargins));
    }

    pub fn MinimumMargins(self: ?*anyopaque, ) QtC.QMarginsF {
        return qtc.QPageLayout_MinimumMargins(@ptrCast(self));
    }

    pub fn MaximumMargins(self: ?*anyopaque, ) QtC.QMarginsF {
        return qtc.QPageLayout_MaximumMargins(@ptrCast(self));
    }

    pub fn FullRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPageLayout_FullRect(@ptrCast(self));
    }

    pub fn FullRect2(self: ?*anyopaque, units: i32) QtC.QRectF {
        return qtc.QPageLayout_FullRect2(@ptrCast(self), @intCast(units));
    }

    pub fn FullRectPoints(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPageLayout_FullRectPoints(@ptrCast(self));
    }

    pub fn FullRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_FullRectPixels(@ptrCast(self), resolution);
    }

    pub fn PaintRect(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QPageLayout_PaintRect(@ptrCast(self));
    }

    pub fn PaintRect2(self: ?*anyopaque, units: i32) QtC.QRectF {
        return qtc.QPageLayout_PaintRect2(@ptrCast(self), @intCast(units));
    }

    pub fn PaintRectPoints(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QPageLayout_PaintRectPoints(@ptrCast(self));
    }

    pub fn PaintRectPixels(self: ?*anyopaque, resolution: i32) QtC.QRect {
        return qtc.QPageLayout_PaintRectPixels(@ptrCast(self), resolution);
    }

    pub fn SetPageSize2(self: ?*anyopaque, pageSize: ?*anyopaque, minMargins: ?*anyopaque) void {
        qtc.QPageLayout_SetPageSize2(@ptrCast(self), @ptrCast(pageSize), @ptrCast(minMargins));
    }

    pub fn SetMargins2(self: ?*anyopaque, margins: ?*anyopaque, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetMargins2(@ptrCast(self), @ptrCast(margins), @intCast(outOfBoundsPolicy));
    }

    pub fn SetLeftMargin2(self: ?*anyopaque, leftMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetLeftMargin2(@ptrCast(self), leftMargin, @intCast(outOfBoundsPolicy));
    }

    pub fn SetRightMargin2(self: ?*anyopaque, rightMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetRightMargin2(@ptrCast(self), rightMargin, @intCast(outOfBoundsPolicy));
    }

    pub fn SetTopMargin2(self: ?*anyopaque, topMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetTopMargin2(@ptrCast(self), topMargin, @intCast(outOfBoundsPolicy));
    }

    pub fn SetBottomMargin2(self: ?*anyopaque, bottomMargin: f64, outOfBoundsPolicy: i32) bool {
        return qtc.QPageLayout_SetBottomMargin2(@ptrCast(self), bottomMargin, @intCast(outOfBoundsPolicy));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPageLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pagelayout.html#types
pub const enums = struct {
    pub const Unit = enum {
        pub const Millimeter: i32 = 0;
        pub const Point: i32 = 1;
        pub const Inch: i32 = 2;
        pub const Pica: i32 = 3;
        pub const Didot: i32 = 4;
        pub const Cicero: i32 = 5;
    };

    pub const Orientation = enum {
        pub const Portrait: i32 = 0;
        pub const Landscape: i32 = 1;
    };

    pub const Mode = enum {
        pub const StandardMode: i32 = 0;
        pub const FullPageMode: i32 = 1;
    };

    pub const OutOfBoundsPolicy = enum {
        pub const Reject: i32 = 0;
        pub const Clamp: i32 = 1;
    };

};
