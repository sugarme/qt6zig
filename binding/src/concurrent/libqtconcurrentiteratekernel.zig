const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtconcurrent-blocksizemanager.html
pub const qtconcurrent__blocksizemanager = struct {

    /// New constructs a new QtConcurrent::BlockSizeManager object.
    pub fn New(pool: ?*anyopaque, iterationCount: i32) QtC.QtConcurrent__BlockSizeManager {
        return qtc.QtConcurrent__BlockSizeManager_new(@ptrCast(pool), iterationCount);
    }


    pub fn TimeBeforeUser(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__BlockSizeManager_TimeBeforeUser(@ptrCast(self));
    }

    pub fn TimeAfterUser(self: ?*anyopaque, ) void {
        qtc.QtConcurrent__BlockSizeManager_TimeAfterUser(@ptrCast(self));
    }

    pub fn BlockSize(self: ?*anyopaque, ) i32 {
        return qtc.QtConcurrent__BlockSizeManager_BlockSize(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QtConcurrent__BlockSizeManager_Delete(@ptrCast(self));
    }
};
