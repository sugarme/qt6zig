const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/tvideo.html#types
pub const enums = struct {
    pub const Rotation = enum {
        pub const None: i32 = 0;
        pub const Clockwise90: i32 = 90;
        pub const Clockwise180: i32 = 180;
        pub const Clockwise270: i32 = 270;
    };

};
