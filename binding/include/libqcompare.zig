const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/partial_ordering.html
pub const partial_ordering = struct {

    /// New constructs a new Qt::partial_ordering object.
    pub fn New(other: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new(@ptrCast(other));
    }


    /// New2 constructs a new Qt::partial_ordering object.
    pub fn New2(other: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new2(@ptrCast(other));
    }


    /// New3 constructs a new Qt::partial_ordering object.
    pub fn New3(param1: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.partial_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.partial_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.partial_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/weak_ordering.html
pub const weak_ordering = struct {

    /// New constructs a new Qt::weak_ordering object.
    pub fn New(other: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new(@ptrCast(other));
    }


    /// New2 constructs a new Qt::weak_ordering object.
    pub fn New2(other: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new2(@ptrCast(other));
    }


    /// New3 constructs a new Qt::weak_ordering object.
    pub fn New3(param1: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.weak_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.weak_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorpartialOrdering(self: ?*anyopaque, ) QtC.partial_ordering {
        return qtc.weak_ordering_OperatorpartialOrdering(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.weak_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/strong_ordering.html
pub const strong_ordering = struct {

    /// New constructs a new Qt::strong_ordering object.
    pub fn New(other: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new(@ptrCast(other));
    }


    /// New2 constructs a new Qt::strong_ordering object.
    pub fn New2(other: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new2(@ptrCast(other));
    }


    /// New3 constructs a new Qt::strong_ordering object.
    pub fn New3(param1: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.strong_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.strong_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorpartialOrdering(self: ?*anyopaque, ) QtC.partial_ordering {
        return qtc.strong_ordering_OperatorpartialOrdering(@ptrCast(self));
    }

    pub fn OperatorweakOrdering(self: ?*anyopaque, ) QtC.weak_ordering {
        return qtc.strong_ordering_OperatorweakOrdering(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.strong_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpartialordering.html
pub const qpartialordering = struct {

    /// New constructs a new QPartialOrdering object.
    pub fn New(other: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new(@ptrCast(other));
    }


    /// New2 constructs a new QPartialOrdering object.
    pub fn New2(other: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPartialOrdering object.
    pub fn New3(order: QtC.partial_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new3(@ptrCast(order));
    }


    /// New4 constructs a new QPartialOrdering object.
    pub fn New4(stdorder: QtC.weak_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new4(@ptrCast(stdorder));
    }


    /// New5 constructs a new QPartialOrdering object.
    pub fn New5(stdorder: QtC.strong_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new5(@ptrCast(stdorder));
    }


    /// New6 constructs a new QPartialOrdering object.
    pub fn New6(param1: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPartialOrdering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPartialOrdering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorpartialOrdering(self: ?*anyopaque, ) QtC.partial_ordering {
        return qtc.QPartialOrdering_OperatorpartialOrdering(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPartialOrdering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/compare.html#types
pub const enums = struct {
    pub const Ordering = enum {
        pub const Equal: i8 = 0;
        pub const Equivalent: i8 = 0;
        pub const Less: i8 = -1;
        pub const Greater: i8 = 1;
    };

    pub const Uncomparable = enum {
        pub const Unordered: i8 = -128;
    };

    pub const LegacyUncomparable = enum {
        pub const Unordered: i8 = -127;
    };

};
