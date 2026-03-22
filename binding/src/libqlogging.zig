const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmessagelogcontext.html
pub const qmessagelogcontext = struct {

    /// New constructs a new QMessageLogContext object.
    pub fn New() QtC.QMessageLogContext {
        return qtc.QMessageLogContext_new();
    }


    /// New2 constructs a new QMessageLogContext object.
    pub fn New2(fileName: []const u8, lineNumber: i32, functionName: []const u8, categoryName: []const u8) QtC.QMessageLogContext {
        return qtc.QMessageLogContext_new2(@ptrCast(fileName), lineNumber, @ptrCast(functionName), @ptrCast(categoryName));
    }


    pub fn Version(self: ?*anyopaque, ) i32 {
        return qtc.QMessageLogContext_Version(@ptrCast(self));
    }

    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QMessageLogContext_SetVersion(@ptrCast(self), version);
    }

    pub fn Line(self: ?*anyopaque, ) i32 {
        return qtc.QMessageLogContext_Line(@ptrCast(self));
    }

    pub fn SetLine(self: ?*anyopaque, line: i32) void {
        qtc.QMessageLogContext_SetLine(@ptrCast(self), line);
    }

    pub fn File(self: ?*anyopaque, ) []const u8 {
        const file_ret = qtc.QMessageLogContext_File(@ptrCast(self));
return  std.mem.span(file_ret);
    }

    pub fn SetFile(self: ?*anyopaque, file: []const u8) void {
        qtc.QMessageLogContext_SetFile(@ptrCast(self), @ptrCast(file));
    }

    pub fn Function(self: ?*anyopaque, ) []const u8 {
        const function_ret = qtc.QMessageLogContext_Function(@ptrCast(self));
return  std.mem.span(function_ret);
    }

    pub fn SetFunction(self: ?*anyopaque, function: []const u8) void {
        qtc.QMessageLogContext_SetFunction(@ptrCast(self), @ptrCast(function));
    }

    pub fn Category(self: ?*anyopaque, ) []const u8 {
        const category_ret = qtc.QMessageLogContext_Category(@ptrCast(self));
return  std.mem.span(category_ret);
    }

    pub fn SetCategory(self: ?*anyopaque, category: []const u8) void {
        qtc.QMessageLogContext_SetCategory(@ptrCast(self), @ptrCast(category));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageLogContext_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmessagelogger.html
pub const qmessagelogger = struct {

    /// New constructs a new QMessageLogger object.
    pub fn New() QtC.QMessageLogger {
        return qtc.QMessageLogger_new();
    }


    /// New2 constructs a new QMessageLogger object.
    pub fn New2(file: []const u8, line: i32, function: []const u8) QtC.QMessageLogger {
        return qtc.QMessageLogger_new2(@ptrCast(file), line, @ptrCast(function));
    }


    /// New3 constructs a new QMessageLogger object.
    pub fn New3(file: []const u8, line: i32, function: []const u8, category: []const u8) QtC.QMessageLogger {
        return qtc.QMessageLogger_new3(@ptrCast(file), line, @ptrCast(function), @ptrCast(category));
    }


    pub fn Debug(self: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Debug(@ptrCast(self), @ptrCast(msg), );
    }

    pub fn NoDebug(self: ?*anyopaque, param1: []const u8, : ...) void {
        qtc.QMessageLogger_NoDebug(@ptrCast(self), @ptrCast(param1), );
    }

    pub fn Info(self: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Info(@ptrCast(self), @ptrCast(msg), );
    }

    pub fn Warning(self: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Warning(@ptrCast(self), @ptrCast(msg), );
    }

    pub fn Critical(self: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Critical(@ptrCast(self), @ptrCast(msg), );
    }

    pub fn Fatal(self: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Fatal(@ptrCast(self), @ptrCast(msg), );
    }

    pub fn Debug2(self: ?*anyopaque, cat: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Debug2(@ptrCast(self), @ptrCast(cat), @ptrCast(msg), );
    }

    pub fn Info2(self: ?*anyopaque, cat: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Info2(@ptrCast(self), @ptrCast(cat), @ptrCast(msg), );
    }

    pub fn Warning2(self: ?*anyopaque, cat: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Warning2(@ptrCast(self), @ptrCast(cat), @ptrCast(msg), );
    }

    pub fn Critical2(self: ?*anyopaque, cat: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Critical2(@ptrCast(self), @ptrCast(cat), @ptrCast(msg), );
    }

    pub fn Fatal2(self: ?*anyopaque, cat: ?*anyopaque, msg: []const u8, : ...) void {
        qtc.QMessageLogger_Fatal2(@ptrCast(self), @ptrCast(cat), @ptrCast(msg), );
    }

    pub fn Debug4(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QMessageLogger_Debug4(@ptrCast(self));
    }

    pub fn Debug5(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Debug5(@ptrCast(self), @ptrCast(cat));
    }

    pub fn Info4(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QMessageLogger_Info4(@ptrCast(self));
    }

    pub fn Info5(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Info5(@ptrCast(self), @ptrCast(cat));
    }

    pub fn Warning4(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QMessageLogger_Warning4(@ptrCast(self));
    }

    pub fn Warning5(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Warning5(@ptrCast(self), @ptrCast(cat));
    }

    pub fn Critical4(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QMessageLogger_Critical4(@ptrCast(self));
    }

    pub fn Critical5(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Critical5(@ptrCast(self), @ptrCast(cat));
    }

    pub fn Fatal4(self: ?*anyopaque, ) QtC.QDebug {
        return qtc.QMessageLogger_Fatal4(@ptrCast(self));
    }

    pub fn Fatal5(self: ?*anyopaque, cat: ?*anyopaque) QtC.QDebug {
        return qtc.QMessageLogger_Fatal5(@ptrCast(self), @ptrCast(cat));
    }

    pub fn NoDebug2(self: ?*anyopaque, ) QtC.QNoDebug {
        return qtc.QMessageLogger_NoDebug2(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMessageLogger_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/logging.html#types
pub const enums = struct {
    pub const QtMsgType = enum {
        pub const QtDebugMsg: i32 = 0;
        pub const QtWarningMsg: i32 = 1;
        pub const QtCriticalMsg: i32 = 2;
        pub const QtFatalMsg: i32 = 3;
        pub const QtInfoMsg: i32 = 4;
        pub const QtSystemMsg: i32 = 2;
    };

};
