const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcalendarwidget.html
pub const qcalendarwidget = struct {

    /// New constructs a new QCalendarWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QCalendarWidget {
        return qtc.QCalendarWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QCalendarWidget object.
    pub fn New2() QtC.QCalendarWidget {
        return qtc.QCalendarWidget_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendarWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendarwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCalendarWidget_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCalendarWidget_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCalendarWidget_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCalendarWidget_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCalendarWidget_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCalendarWidget_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SelectedDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QCalendarWidget_SelectedDate(@ptrCast(self));
    }

    pub fn YearShown(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_YearShown(@ptrCast(self));
    }

    pub fn MonthShown(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_MonthShown(@ptrCast(self));
    }

    pub fn MinimumDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QCalendarWidget_MinimumDate(@ptrCast(self));
    }

    pub fn SetMinimumDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_SetMinimumDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn ClearMinimumDate(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ClearMinimumDate(@ptrCast(self));
    }

    pub fn MaximumDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QCalendarWidget_MaximumDate(@ptrCast(self));
    }

    pub fn SetMaximumDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_SetMaximumDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn ClearMaximumDate(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ClearMaximumDate(@ptrCast(self));
    }

    pub fn FirstDayOfWeek(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_FirstDayOfWeek(@ptrCast(self));
    }

    pub fn SetFirstDayOfWeek(self: ?*anyopaque, dayOfWeek: i32) void {
        qtc.QCalendarWidget_SetFirstDayOfWeek(@ptrCast(self), @intCast(dayOfWeek));
    }

    pub fn IsNavigationBarVisible(self: ?*anyopaque, ) bool {
        return qtc.QCalendarWidget_IsNavigationBarVisible(@ptrCast(self));
    }

    pub fn IsGridVisible(self: ?*anyopaque, ) bool {
        return qtc.QCalendarWidget_IsGridVisible(@ptrCast(self));
    }

    pub fn Calendar(self: ?*anyopaque, ) QtC.QCalendar {
        return qtc.QCalendarWidget_Calendar(@ptrCast(self));
    }

    pub fn SetCalendar(self: ?*anyopaque, calendar: QtC.QCalendar) void {
        qtc.QCalendarWidget_SetCalendar(@ptrCast(self), @ptrCast(calendar));
    }

    pub fn SelectionMode(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_SelectionMode(@ptrCast(self));
    }

    pub fn SetSelectionMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCalendarWidget_SetSelectionMode(@ptrCast(self), @intCast(mode));
    }

    pub fn HorizontalHeaderFormat(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_HorizontalHeaderFormat(@ptrCast(self));
    }

    pub fn SetHorizontalHeaderFormat(self: ?*anyopaque, format: i32) void {
        qtc.QCalendarWidget_SetHorizontalHeaderFormat(@ptrCast(self), @intCast(format));
    }

    pub fn VerticalHeaderFormat(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_VerticalHeaderFormat(@ptrCast(self));
    }

    pub fn SetVerticalHeaderFormat(self: ?*anyopaque, format: i32) void {
        qtc.QCalendarWidget_SetVerticalHeaderFormat(@ptrCast(self), @intCast(format));
    }

    pub fn HeaderTextFormat(self: ?*anyopaque, ) QtC.QTextCharFormat {
        return qtc.QCalendarWidget_HeaderTextFormat(@ptrCast(self));
    }

    pub fn SetHeaderTextFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QCalendarWidget_SetHeaderTextFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn WeekdayTextFormat(self: ?*anyopaque, dayOfWeek: i32) QtC.QTextCharFormat {
        return qtc.QCalendarWidget_WeekdayTextFormat(@ptrCast(self), @intCast(dayOfWeek));
    }

    pub fn SetWeekdayTextFormat(self: ?*anyopaque, dayOfWeek: i32, format: ?*anyopaque) void {
        qtc.QCalendarWidget_SetWeekdayTextFormat(@ptrCast(self), @intCast(dayOfWeek), @ptrCast(format));
    }

    pub fn DateTextFormat(self: ?*anyopaque, ) QMap<QDate, QTextCharFormat> {
        return qtc.QCalendarWidget_DateTextFormat(@ptrCast(self));
    }

    pub fn DateTextFormat2(self: ?*anyopaque, date: QtC.QDate) QtC.QTextCharFormat {
        return qtc.QCalendarWidget_DateTextFormat2(@ptrCast(self), @ptrCast(date));
    }

    pub fn SetDateTextFormat(self: ?*anyopaque, date: QtC.QDate, format: ?*anyopaque) void {
        qtc.QCalendarWidget_SetDateTextFormat(@ptrCast(self), @ptrCast(date), @ptrCast(format));
    }

    pub fn IsDateEditEnabled(self: ?*anyopaque, ) bool {
        return qtc.QCalendarWidget_IsDateEditEnabled(@ptrCast(self));
    }

    pub fn SetDateEditEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QCalendarWidget_SetDateEditEnabled(@ptrCast(self), enable);
    }

    pub fn DateEditAcceptDelay(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarWidget_DateEditAcceptDelay(@ptrCast(self));
    }

    pub fn SetDateEditAcceptDelay(self: ?*anyopaque, delay: i32) void {
        qtc.QCalendarWidget_SetDateEditAcceptDelay(@ptrCast(self), delay);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCalendarWidget_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCalendarWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCalendarWidget_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCalendarWidget_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCalendarWidget_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCalendarWidget_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCalendarWidget_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCalendarWidget_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCalendarWidget_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCalendarWidget_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintCell(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_PaintCell(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(date));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintCell(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QCalendarWidget_OnPaintCell(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintCell(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_QBasePaintCell(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @ptrCast(date));
    }

    pub fn UpdateCell(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_UpdateCell(@ptrCast(self), @ptrCast(date));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCell(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QCalendarWidget_OnUpdateCell(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCell(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_QBaseUpdateCell(@ptrCast(self), @ptrCast(date));
    }

    pub fn UpdateCells(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_UpdateCells(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCells(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCalendarWidget_OnUpdateCells(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCells(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_QBaseUpdateCells(@ptrCast(self));
    }

    pub fn SetSelectedDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_SetSelectedDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn SetDateRange(self: ?*anyopaque, min: QtC.QDate, max: QtC.QDate) void {
        qtc.QCalendarWidget_SetDateRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn SetCurrentPage(self: ?*anyopaque, year: i32, month: i32) void {
        qtc.QCalendarWidget_SetCurrentPage(@ptrCast(self), year, month);
    }

    pub fn SetGridVisible(self: ?*anyopaque, show: bool) void {
        qtc.QCalendarWidget_SetGridVisible(@ptrCast(self), show);
    }

    pub fn SetNavigationBarVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QCalendarWidget_SetNavigationBarVisible(@ptrCast(self), visible);
    }

    pub fn ShowNextMonth(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowNextMonth(@ptrCast(self));
    }

    pub fn ShowPreviousMonth(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowPreviousMonth(@ptrCast(self));
    }

    pub fn ShowNextYear(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowNextYear(@ptrCast(self));
    }

    pub fn ShowPreviousYear(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowPreviousYear(@ptrCast(self));
    }

    pub fn ShowSelectedDate(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowSelectedDate(@ptrCast(self));
    }

    pub fn ShowToday(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_ShowToday(@ptrCast(self));
    }

    pub fn SelectionChanged(self: ?*anyopaque, ) void {
        qtc.QCalendarWidget_SelectionChanged(@ptrCast(self));
    }

    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCalendarWidget_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Clicked(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_Clicked(@ptrCast(self), @ptrCast(date));
    }

    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QCalendarWidget_Connect_Clicked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Activated(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QCalendarWidget_Activated(@ptrCast(self), @ptrCast(date));
    }

    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QCalendarWidget_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentPageChanged(self: ?*anyopaque, year: i32, month: i32) void {
        qtc.QCalendarWidget_CurrentPageChanged(@ptrCast(self), year, month);
    }

    pub fn OnCurrentPageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QCalendarWidget_Connect_CurrentPageChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendarWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendarwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCalendarWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcalendarwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendarWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/calendarwidget.html#types
pub const enums = struct {
    pub const HorizontalHeaderFormat = enum {
        pub const NoHorizontalHeader: i32 = 0;
        pub const SingleLetterDayNames: i32 = 1;
        pub const ShortDayNames: i32 = 2;
        pub const LongDayNames: i32 = 3;
    };

    pub const VerticalHeaderFormat = enum {
        pub const NoVerticalHeader: i32 = 0;
        pub const ISOWeekNumbers: i32 = 1;
    };

    pub const SelectionMode = enum {
        pub const NoSelection: i32 = 0;
        pub const SingleSelection: i32 = 1;
    };

};
