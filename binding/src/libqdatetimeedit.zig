const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdatetimeedit.html
pub const qdatetimeedit = struct {

    /// New constructs a new QDateTimeEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDateTimeEdit object.
    pub fn New2() QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new2();
    }


    /// New3 constructs a new QDateTimeEdit object.
    pub fn New3(dt: ?*anyopaque) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new3(@ptrCast(dt));
    }


    /// New4 constructs a new QDateTimeEdit object.
    pub fn New4(d: QtC.QDate) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new4(@ptrCast(d));
    }


    /// New5 constructs a new QDateTimeEdit object.
    pub fn New5(t: QtC.QTime) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new5(@ptrCast(t));
    }


    /// New6 constructs a new QDateTimeEdit object.
    pub fn New6(dt: ?*anyopaque, parent: ?*anyopaque) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new6(@ptrCast(dt), @ptrCast(parent));
    }


    /// New7 constructs a new QDateTimeEdit object.
    pub fn New7(d: QtC.QDate, parent: ?*anyopaque) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new7(@ptrCast(d), @ptrCast(parent));
    }


    /// New8 constructs a new QDateTimeEdit object.
    pub fn New8(t: QtC.QTime, parent: ?*anyopaque) QtC.QDateTimeEdit {
        return qtc.QDateTimeEdit_new8(@ptrCast(t), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTimeEdit_DateTime(@ptrCast(self));
    }

    pub fn Date(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QDateTimeEdit_Date(@ptrCast(self));
    }

    pub fn Time(self: ?*anyopaque, ) QtC.QTime {
        return qtc.QDateTimeEdit_Time(@ptrCast(self));
    }

    pub fn Calendar(self: ?*anyopaque, ) QtC.QCalendar {
        return qtc.QDateTimeEdit_Calendar(@ptrCast(self));
    }

    pub fn SetCalendar(self: ?*anyopaque, calendar: QtC.QCalendar) void {
        qtc.QDateTimeEdit_SetCalendar(@ptrCast(self), @ptrCast(calendar));
    }

    pub fn MinimumDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTimeEdit_MinimumDateTime(@ptrCast(self));
    }

    pub fn ClearMinimumDateTime(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMinimumDateTime(@ptrCast(self));
    }

    pub fn SetMinimumDateTime(self: ?*anyopaque, dt: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetMinimumDateTime(@ptrCast(self), @ptrCast(dt));
    }

    pub fn MaximumDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QDateTimeEdit_MaximumDateTime(@ptrCast(self));
    }

    pub fn ClearMaximumDateTime(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMaximumDateTime(@ptrCast(self));
    }

    pub fn SetMaximumDateTime(self: ?*anyopaque, dt: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetMaximumDateTime(@ptrCast(self), @ptrCast(dt));
    }

    pub fn SetDateTimeRange(self: ?*anyopaque, min: ?*anyopaque, max: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetDateTimeRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn MinimumDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QDateTimeEdit_MinimumDate(@ptrCast(self));
    }

    pub fn SetMinimumDate(self: ?*anyopaque, min: QtC.QDate) void {
        qtc.QDateTimeEdit_SetMinimumDate(@ptrCast(self), @ptrCast(min));
    }

    pub fn ClearMinimumDate(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMinimumDate(@ptrCast(self));
    }

    pub fn MaximumDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QDateTimeEdit_MaximumDate(@ptrCast(self));
    }

    pub fn SetMaximumDate(self: ?*anyopaque, max: QtC.QDate) void {
        qtc.QDateTimeEdit_SetMaximumDate(@ptrCast(self), @ptrCast(max));
    }

    pub fn ClearMaximumDate(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMaximumDate(@ptrCast(self));
    }

    pub fn SetDateRange(self: ?*anyopaque, min: QtC.QDate, max: QtC.QDate) void {
        qtc.QDateTimeEdit_SetDateRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn MinimumTime(self: ?*anyopaque, ) QtC.QTime {
        return qtc.QDateTimeEdit_MinimumTime(@ptrCast(self));
    }

    pub fn SetMinimumTime(self: ?*anyopaque, min: QtC.QTime) void {
        qtc.QDateTimeEdit_SetMinimumTime(@ptrCast(self), @ptrCast(min));
    }

    pub fn ClearMinimumTime(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMinimumTime(@ptrCast(self));
    }

    pub fn MaximumTime(self: ?*anyopaque, ) QtC.QTime {
        return qtc.QDateTimeEdit_MaximumTime(@ptrCast(self));
    }

    pub fn SetMaximumTime(self: ?*anyopaque, max: QtC.QTime) void {
        qtc.QDateTimeEdit_SetMaximumTime(@ptrCast(self), @ptrCast(max));
    }

    pub fn ClearMaximumTime(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_ClearMaximumTime(@ptrCast(self));
    }

    pub fn SetTimeRange(self: ?*anyopaque, min: QtC.QTime, max: QtC.QTime) void {
        qtc.QDateTimeEdit_SetTimeRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    pub fn DisplayedSections(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_DisplayedSections(@ptrCast(self));
    }

    pub fn CurrentSection(self: ?*anyopaque, ) QString::Section {
        return qtc.QDateTimeEdit_CurrentSection(@ptrCast(self));
    }

    pub fn SectionAt(self: ?*anyopaque, index: i32) QString::Section {
        return qtc.QDateTimeEdit_SectionAt(@ptrCast(self), index);
    }

    pub fn SetCurrentSection(self: ?*anyopaque, section: QString::Section) void {
        qtc.QDateTimeEdit_SetCurrentSection(@ptrCast(self), section);
    }

    pub fn CurrentSectionIndex(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_CurrentSectionIndex(@ptrCast(self));
    }

    pub fn SetCurrentSectionIndex(self: ?*anyopaque, index: i32) void {
        qtc.QDateTimeEdit_SetCurrentSectionIndex(@ptrCast(self), index);
    }

    pub fn CalendarWidget(self: ?*anyopaque, ) QtC.QCalendarWidget {
        return qtc.QDateTimeEdit_CalendarWidget(@ptrCast(self));
    }

    pub fn SetCalendarWidget(self: ?*anyopaque, calendarWidget: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetCalendarWidget(@ptrCast(self), @ptrCast(calendarWidget));
    }

    pub fn SectionCount(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_SectionCount(@ptrCast(self));
    }

    pub fn SetSelectedSection(self: ?*anyopaque, section: QString::Section) void {
        qtc.QDateTimeEdit_SetSelectedSection(@ptrCast(self), section);
    }

    pub fn SectionText(self: ?*anyopaque, section: QString::Section, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_SectionText(@ptrCast(self), section);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.SectionText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn DisplayFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_DisplayFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.DisplayFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDisplayFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QDateTimeEdit_SetDisplayFormat(@ptrCast(self), format_str);
    }

    pub fn CalendarPopup(self: ?*anyopaque, ) bool {
        return qtc.QDateTimeEdit_CalendarPopup(@ptrCast(self));
    }

    pub fn SetCalendarPopup(self: ?*anyopaque, enable: bool) void {
        qtc.QDateTimeEdit_SetCalendarPopup(@ptrCast(self), enable);
    }

    pub fn TimeSpec(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_TimeSpec(@ptrCast(self));
    }

    pub fn SetTimeSpec(self: ?*anyopaque, spec: i32) void {
        qtc.QDateTimeEdit_SetTimeSpec(@ptrCast(self), @intCast(spec));
    }

    pub fn TimeZone(self: ?*anyopaque, ) QtC.QTimeZone {
        return qtc.QDateTimeEdit_TimeZone(@ptrCast(self));
    }

    pub fn SetTimeZone(self: ?*anyopaque, zone: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetTimeZone(@ptrCast(self), @ptrCast(zone));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDateTimeEdit_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QDateTimeEdit_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QDateTimeEdit_QBaseSizeHint(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClear(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClear(self: ?*anyopaque, ) void {
        qtc.QDateTimeEdit_QBaseClear(@ptrCast(self));
    }

    pub fn StepBy(self: ?*anyopaque, steps: i32) void {
        qtc.QDateTimeEdit_StepBy(@ptrCast(self), steps);
    }

    /// Allows for overriding the related default method
    pub fn OnStepBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnStepBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStepBy(self: ?*anyopaque, steps: i32) void {
        qtc.QDateTimeEdit_QBaseStepBy(@ptrCast(self), steps);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeEdit_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeEdit_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn DateTimeChanged(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QDateTimeEdit_DateTimeChanged(@ptrCast(self), @ptrCast(dateTime));
    }

    pub fn OnDateTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TimeChanged(self: ?*anyopaque, time: QtC.QTime) void {
        qtc.QDateTimeEdit_TimeChanged(@ptrCast(self), @ptrCast(time));
    }

    pub fn OnTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_TimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DateChanged(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QDateTimeEdit_DateChanged(@ptrCast(self), @ptrCast(date));
    }

    pub fn OnDateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetDateTime(self: ?*anyopaque, dateTime: ?*anyopaque) void {
        qtc.QDateTimeEdit_SetDateTime(@ptrCast(self), @ptrCast(dateTime));
    }

    pub fn SetDate(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QDateTimeEdit_SetDate(@ptrCast(self), @ptrCast(date));
    }

    pub fn SetTime(self: ?*anyopaque, time: QtC.QTime) void {
        qtc.QDateTimeEdit_SetTime(@ptrCast(self), @ptrCast(time));
    }

    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QDateTimeEdit_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QDateTimeEdit_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn Validate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QDateTimeEdit_Validate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QDateTimeEdit_QBaseValidate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    pub fn Fixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QDateTimeEdit_Fixup(@ptrCast(self), input_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QDateTimeEdit_QBaseFixup(@ptrCast(self), input_str);
    }

    pub fn DateTimeFromText(self: ?*anyopaque, text: []const u8) QtC.QDateTime {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDateTimeEdit_DateTimeFromText(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnDateTimeFromText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QDateTime) void {
        qtc.QDateTimeEdit_OnDateTimeFromText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDateTimeFromText(self: ?*anyopaque, text: []const u8) QtC.QDateTime {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDateTimeEdit_QBaseDateTimeFromText(@ptrCast(self), text_str);
    }

    pub fn TextFromDateTime(self: ?*anyopaque, dt: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_TextFromDateTime(@ptrCast(self), @ptrCast(dt));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.TextFromDateTime: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextFromDateTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QDateTimeEdit_OnTextFromDateTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextFromDateTime(self: ?*anyopaque, dt: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_QBaseTextFromDateTime(@ptrCast(self), @ptrCast(dt));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.TextFromDateTime: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StepEnabled(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_StepEnabled(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnStepEnabled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnStepEnabled(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseStepEnabled(self: ?*anyopaque, ) i32 {
        return qtc.QDateTimeEdit_QBaseStepEnabled(@ptrCast(self));
    }

    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDateTimeEdit_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QDateTimeEdit_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateTimeEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtimeedit.html
pub const qtimeedit = struct {

    /// New constructs a new QTimeEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QTimeEdit {
        return qtc.QTimeEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QTimeEdit object.
    pub fn New2() QtC.QTimeEdit {
        return qtc.QTimeEdit_new2();
    }


    /// New3 constructs a new QTimeEdit object.
    pub fn New3(time: QtC.QTime) QtC.QTimeEdit {
        return qtc.QTimeEdit_new3(@ptrCast(time));
    }


    /// New4 constructs a new QTimeEdit object.
    pub fn New4(time: QtC.QTime, parent: ?*anyopaque) QtC.QTimeEdit {
        return qtc.QTimeEdit_new4(@ptrCast(time), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UserTimeChanged(self: ?*anyopaque, time: QtC.QTime) void {
        qtc.QTimeEdit_UserTimeChanged(@ptrCast(self), @ptrCast(time));
    }

    pub fn OnUserTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QTime) callconv(.c) void) void {
        qtc.QTimeEdit_Connect_UserTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTimeEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QTimeEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdateedit.html
pub const qdateedit = struct {

    /// New constructs a new QDateEdit object.
    pub fn New(parent: ?*anyopaque) QtC.QDateEdit {
        return qtc.QDateEdit_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDateEdit object.
    pub fn New2() QtC.QDateEdit {
        return qtc.QDateEdit_new2();
    }


    /// New3 constructs a new QDateEdit object.
    pub fn New3(date: QtC.QDate) QtC.QDateEdit {
        return qtc.QDateEdit_new3(@ptrCast(date));
    }


    /// New4 constructs a new QDateEdit object.
    pub fn New4(date: QtC.QDate, parent: ?*anyopaque) QtC.QDateEdit {
        return qtc.QDateEdit_new4(@ptrCast(date), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateEdit_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn UserDateChanged(self: ?*anyopaque, date: QtC.QDate) void {
        qtc.QDateEdit_UserDateChanged(@ptrCast(self), @ptrCast(date));
    }

    pub fn OnUserDateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QDate) callconv(.c) void) void {
        qtc.QDateEdit_Connect_UserDateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateEdit_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateEdit_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateEdit_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/datetimeedit.html#types
pub const enums = struct {
    pub const Section = enum {
        pub const NoSection: i32 = 0;
        pub const AmPmSection: i32 = 1;
        pub const MSecSection: i32 = 2;
        pub const SecondSection: i32 = 4;
        pub const MinuteSection: i32 = 8;
        pub const HourSection: i32 = 16;
        pub const DaySection: i32 = 256;
        pub const MonthSection: i32 = 512;
        pub const YearSection: i32 = 1024;
        pub const TimeSections_Mask: i32 = 31;
        pub const DateSections_Mask: i32 = 1792;
    };

};
