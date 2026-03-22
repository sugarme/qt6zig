const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qloggingcategory.html
pub const qloggingcategory = struct {

    /// New constructs a new QLoggingCategory object.
    pub fn New(category: []const u8) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_new(@ptrCast(category));
    }


    /// New2 constructs a new QLoggingCategory object.
    pub fn New2(category: []const u8, severityLevel: i32) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_new2(@ptrCast(category), @intCast(severityLevel));
    }


    pub fn IsEnabled(self: ?*anyopaque, typeVal: i32) bool {
        return qtc.QLoggingCategory_IsEnabled(@ptrCast(self), @intCast(typeVal));
    }

    pub fn SetEnabled(self: ?*anyopaque, typeVal: i32, enable: bool) void {
        qtc.QLoggingCategory_SetEnabled(@ptrCast(self), @intCast(typeVal), enable);
    }

    pub fn IsDebugEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLoggingCategory_IsDebugEnabled(@ptrCast(self));
    }

    pub fn IsInfoEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLoggingCategory_IsInfoEnabled(@ptrCast(self));
    }

    pub fn IsWarningEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLoggingCategory_IsWarningEnabled(@ptrCast(self));
    }

    pub fn IsCriticalEnabled(self: ?*anyopaque, ) bool {
        return qtc.QLoggingCategory_IsCriticalEnabled(@ptrCast(self));
    }

    pub fn CategoryName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QLoggingCategory_CategoryName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn OperatorCall(self: ?*anyopaque, ) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_OperatorCall(@ptrCast(self));
    }

    pub fn OperatorCall2(self: ?*anyopaque, ) QtC.QLoggingCategory {
        return qtc.QLoggingCategory_OperatorCall2(@ptrCast(self));
    }

    pub fn DefaultCategory() QtC.QLoggingCategory {
        return qtc.QLoggingCategory_DefaultCategory();
    }

    pub fn SetFilterRules(rules: []const u8) void {
        const rules_str = qtc.libqt_string{
    .len = rules.len,
    .data = rules.ptr,
};
qtc.QLoggingCategory_SetFilterRules(rules_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLoggingCategory_Delete(@ptrCast(self));
    }
};
