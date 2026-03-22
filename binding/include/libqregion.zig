const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qregion.html
pub const qregion = struct {

    /// New constructs a new QRegion object.
    pub fn New() QtC.QRegion {
        return qtc.QRegion_new();
    }


    /// New2 constructs a new QRegion object.
    pub fn New2(x: i32, y: i32, w: i32, h: i32) QtC.QRegion {
        return qtc.QRegion_new2(x, y, w, h);
    }


    /// New3 constructs a new QRegion object.
    pub fn New3(r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new3(@ptrCast(r));
    }


    /// New4 constructs a new QRegion object.
    pub fn New4(pa: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new4(@ptrCast(pa));
    }


    /// New5 constructs a new QRegion object.
    pub fn New5(region: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new5(@ptrCast(region));
    }


    /// New6 constructs a new QRegion object.
    pub fn New6(bitmap: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_new6(@ptrCast(bitmap));
    }


    /// New7 constructs a new QRegion object.
    pub fn New7(x: i32, y: i32, w: i32, h: i32, t: i32) QtC.QRegion {
        return qtc.QRegion_new7(x, y, w, h, @intCast(t));
    }


    /// New8 constructs a new QRegion object.
    pub fn New8(r: ?*anyopaque, t: i32) QtC.QRegion {
        return qtc.QRegion_new8(@ptrCast(r), @intCast(t));
    }


    /// New9 constructs a new QRegion object.
    pub fn New9(pa: ?*anyopaque, fillRule: i32) QtC.QRegion {
        return qtc.QRegion_new9(@ptrCast(pa), @intCast(fillRule));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QRegion_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QRegion_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QRegion_IsEmpty(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QRegion_IsNull(@ptrCast(self));
    }

    pub fn Begin(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRegion_Begin(@ptrCast(self));
    }

    pub fn Cbegin(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRegion_Cbegin(@ptrCast(self));
    }

    pub fn End(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRegion_End(@ptrCast(self));
    }

    pub fn Cend(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRegion_Cend(@ptrCast(self));
    }

    pub fn Rbegin(self: ?*anyopaque, ) std::reverse_iterator<const QRect *> {
        return qtc.QRegion_Rbegin(@ptrCast(self));
    }

    pub fn Crbegin(self: ?*anyopaque, ) std::reverse_iterator<const QRect *> {
        return qtc.QRegion_Crbegin(@ptrCast(self));
    }

    pub fn Rend(self: ?*anyopaque, ) std::reverse_iterator<const QRect *> {
        return qtc.QRegion_Rend(@ptrCast(self));
    }

    pub fn Crend(self: ?*anyopaque, ) std::reverse_iterator<const QRect *> {
        return qtc.QRegion_Crend(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.QRegion_Contains(@ptrCast(self), @ptrCast(p));
    }

    pub fn Contains2(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_Contains2(@ptrCast(self), @ptrCast(r));
    }

    pub fn Translate(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QRegion_Translate(@ptrCast(self), dx, dy);
    }

    pub fn Translate2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.QRegion_Translate2(@ptrCast(self), @ptrCast(p));
    }

    pub fn Translated(self: ?*anyopaque, dx: i32, dy: i32) QtC.QRegion {
        return qtc.QRegion_Translated(@ptrCast(self), dx, dy);
    }

    pub fn Translated2(self: ?*anyopaque, p: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Translated2(@ptrCast(self), @ptrCast(p));
    }

    pub fn United(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_United(@ptrCast(self), @ptrCast(r));
    }

    pub fn United2(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_United2(@ptrCast(self), @ptrCast(r));
    }

    pub fn Intersected(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Intersected(@ptrCast(self), @ptrCast(r));
    }

    pub fn Intersected2(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Intersected2(@ptrCast(self), @ptrCast(r));
    }

    pub fn Subtracted(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Subtracted(@ptrCast(self), @ptrCast(r));
    }

    pub fn Xored(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_Xored(@ptrCast(self), @ptrCast(r));
    }

    pub fn Intersects(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_Intersects(@ptrCast(self), @ptrCast(r));
    }

    pub fn Intersects2(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_Intersects2(@ptrCast(self), @ptrCast(r));
    }

    pub fn BoundingRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QRegion_BoundingRect(@ptrCast(self));
    }

    pub fn SetRects(self: ?*anyopaque, rect: ?*anyopaque, num: i32) void {
        qtc.QRegion_SetRects(@ptrCast(self), @ptrCast(rect), num);
    }

    pub fn SetRects2(self: ?*anyopaque, r: QSpan<const QRect>) void {
        qtc.QRegion_SetRects2(@ptrCast(self), r);
    }

    pub fn Rects(self: ?*anyopaque, ) QSpan<const QRect> {
        return qtc.QRegion_Rects(@ptrCast(self));
    }

    pub fn RectCount(self: ?*anyopaque, ) i32 {
        return qtc.QRegion_RectCount(@ptrCast(self));
    }

    pub fn OperatorBitwiseOr(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseOr(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorPlus(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlus(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorPlus2(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlus2(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAnd(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseAnd(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAnd2(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseAnd2(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorMinus(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorMinus(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseNot(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorBitwiseNot(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorPlusAssign(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlusAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorPlusAssign2(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorPlusAssign2(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseAndAssign2(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseAndAssign2(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorMinusAssign(self: ?*anyopaque, r: ?*anyopaque) QtC.QRegion {
        return qtc.QRegion_OperatorMinusAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorBitwiseXorAssign(self: ?*anyopaque, r: ?*anyopaque) void {
        qtc.QRegion_OperatorBitwiseXorAssign(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorEqual(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_OperatorEqual(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, r: ?*anyopaque) bool {
        return qtc.QRegion_OperatorNotEqual(@ptrCast(self), @ptrCast(r));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QRegion_OperatorQVariant(@ptrCast(self));
    }

    pub fn ToHRGN(self: ?*anyopaque, ) struct HRGN__ {
        return @ptrCast(qtc.QRegion_ToHRGN(@ptrCast(self)));
    }

    pub fn FromHRGN(hrgn: *struct HRGN__) QtC.QRegion {
        return qtc.QRegion_FromHRGN(@ptrCast(hrgn));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegion_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/region.html#types
pub const enums = struct {
    pub const RegionType = enum {
        pub const Rectangle: i32 = 0;
        pub const Ellipse: i32 = 1;
    };

};
