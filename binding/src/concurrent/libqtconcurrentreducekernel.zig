const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/tconcurrentreducekernel.html#types
pub const enums = struct {
    pub const ReduceOption = enum {
        pub const UnorderedReduce: i32 = 1;
        pub const OrderedReduce: i32 = 2;
        pub const SequentialReduce: i32 = 4;
    };

};
