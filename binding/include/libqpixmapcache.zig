const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpixmapcache.html
pub const qpixmapcache = struct {

    /// New constructs a new QPixmapCache object.
    pub fn New(other: ?*anyopaque) QtC.QPixmapCache {
        return qtc.QPixmapCache_new(@ptrCast(other));
    }


    /// New2 constructs a new QPixmapCache object.
    pub fn New2(other: ?*anyopaque) QtC.QPixmapCache {
        return qtc.QPixmapCache_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPixmapCache object.
    pub fn New3() QtC.QPixmapCache {
        return qtc.QPixmapCache_new3();
    }


    /// New4 constructs a new QPixmapCache object.
    pub fn New4(param1: ?*anyopaque) QtC.QPixmapCache {
        return qtc.QPixmapCache_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn CacheLimit() i32 {
        return qtc.QPixmapCache_CacheLimit();
    }

    pub fn SetCacheLimit(cacheLimit: i32) void {
        qtc.QPixmapCache_SetCacheLimit(cacheLimit);
    }

    pub fn Find(key: []const u8, pixmap: ?*anyopaque) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QPixmapCache_Find(key_str, @ptrCast(pixmap));
    }

    pub fn Find2(key: ?*anyopaque, pixmap: ?*anyopaque) bool {
        return qtc.QPixmapCache_Find2(@ptrCast(key), @ptrCast(pixmap));
    }

    pub fn Insert(key: []const u8, pixmap: ?*anyopaque) bool {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QPixmapCache_Insert(key_str, @ptrCast(pixmap));
    }

    pub fn Insert2(pixmap: ?*anyopaque) QtC.QPixmapCache__Key {
        return qtc.QPixmapCache_Insert2(@ptrCast(pixmap));
    }

    pub fn Replace(key: ?*anyopaque, pixmap: ?*anyopaque) bool {
        return qtc.QPixmapCache_Replace(@ptrCast(key), @ptrCast(pixmap));
    }

    pub fn Remove(key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QPixmapCache_Remove(key_str);
    }

    pub fn Remove2(key: ?*anyopaque) void {
        qtc.QPixmapCache_Remove2(@ptrCast(key));
    }

    pub fn Clear() void {
        qtc.QPixmapCache_Clear();
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QPixmapCache_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmapCache_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpixmapcache-key.html
pub const qpixmapcache__key = struct {

    /// New constructs a new QPixmapCache::Key object.
    pub fn New() QtC.QPixmapCache__Key {
        return qtc.QPixmapCache__Key_new();
    }


    /// New2 constructs a new QPixmapCache::Key object.
    pub fn New2(other: ?*anyopaque) QtC.QPixmapCache__Key {
        return qtc.QPixmapCache__Key_new2(@ptrCast(other));
    }


    pub fn OperatorEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QPixmapCache__Key_OperatorEqual(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QPixmapCache__Key_OperatorNotEqual(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache__Key_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPixmapCache__Key_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QPixmapCache__Key_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPixmapCache__Key_Delete(@ptrCast(self));
    }
};
