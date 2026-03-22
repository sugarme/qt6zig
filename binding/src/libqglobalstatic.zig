const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/globalstatic.html#types
pub const enums = struct {
    pub const GuardValues = enum {
        pub const Destroyed: i32 = -2;
        pub const Initialized: i32 = -1;
        pub const Uninitialized: i32 = 0;
        pub const Initializing: i32 = 1;
    };

};
