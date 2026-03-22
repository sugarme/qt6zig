const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/taskbuilder.html#types
pub const enums = struct {
    pub const FutureResult = enum {
        pub const Ignore: i32 = 0;
    };

};
