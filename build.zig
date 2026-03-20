const std = @import("std");
const Io = std.Io;

var cpp_sources: std.ArrayList([]const u8) = .empty;
var qt_include_paths: std.ArrayList([]const u8) = .empty;
var cpp_flags: std.ArrayList([]const u8) = .empty;
var binding_libs: std.ArrayList(*std.Build.Step.Compile) = .empty;

pub fn build(b: *std.Build) !void {
    const target = b.standardTargetOptions(.{});
    var optimize = b.standardOptimizeOption(.{});
    if (optimize == .Debug) optimize = .ReleaseFast;

    const qt6_build_path = b.option(
        []const u8,
        "qt6-build-path",
        "Path to qt6-zig-build directory (default: qt6-zig-build/)",
    ) orelse "qt6-zig-build";

    var arena = std.heap.ArenaAllocator.init(b.allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    const io = b.graph.io;
    const cwd = Io.Dir.cwd();

    // =====================================================================
    // Discover Qt include paths
    // =====================================================================
    const qt_include_base = try std.fs.path.join(allocator, &.{ qt6_build_path, "qt-sources", "6.8.3", "include" });
    const qt_modules = [_][]const u8{ "QtCore", "QtGui", "QtWidgets" };

    if (pathExists(cwd, io, qt_include_base)) {
        try qt_include_paths.append(allocator, qt_include_base);
    }

    for (qt_modules) |mod| {
        const mod_path = try std.fs.path.join(allocator, &.{ qt_include_base, mod });
        if (pathExists(cwd, io, mod_path)) {
            try qt_include_paths.append(allocator, mod_path);
        }
    }

    // Fallback: check system paths
    if (qt_include_paths.items.len == 0) {
        for ([_][]const u8{
            "C:/Users/nikon/projects/qt6-static/include",
            "C:/Users/nikon/projects/qt6-static/include/QtCore",
            "C:/Users/nikon/projects/qt6-static/include/QtGui",
            "C:/Users/nikon/projects/qt6-static/include/QtWidgets",
        }) |p| {
            if (pathExists(cwd, io, p)) {
                try qt_include_paths.append(allocator, p);
            }
        }
    }

    // =====================================================================
    // C++ compilation flags
    // =====================================================================
    inline for ([_][]const u8{
        "-O2",
        "-std=c++17",
        "-w",
        "-fno-exceptions",
        "-DQT_STATIC",
        "-DQT_NO_DEBUG",
        "-DUNICODE",
        "-D_UNICODE",
        "-DNOMINMAX",
        "-DQT_NO_FOREACH",
    }) |flag| {
        try cpp_flags.append(allocator, flag);
    }

    for (qt_include_paths.items) |inc_path| {
        try cpp_flags.append(allocator, b.fmt("-I{s}", .{inc_path}));
    }

    // =====================================================================
    // Discover C++ source files in binding/src/
    // =====================================================================
    const src_dir_path = try std.fs.path.join(allocator, &.{ b.build_root.path.?, "binding", "src" });
    var dir = try cwd.openDir(io, src_dir_path, .{ .iterate = true });
    defer dir.close(io);
    var walker = try dir.walk(allocator);
    defer walker.deinit();

    while (try walker.next(io)) |entry| {
        if (entry.kind == .file and (std.mem.endsWith(u8, entry.path, ".cpp") or std.mem.endsWith(u8, entry.path, ".c"))) {
            try cpp_sources.append(allocator, try std.fs.path.join(allocator, &.{ "binding", "src", entry.path }));
        }
    }

    std.debug.assert(cpp_sources.items.len != 0);

    // =====================================================================
    // Create a static library for each C++ source
    // =====================================================================
    for (cpp_sources.items) |source| {
        var basename = std.fs.path.stem(std.fs.path.basename(source));
        // strip "lib" prefix if present
        if (std.mem.startsWith(u8, basename, "lib")) {
            basename = basename[3..];
        }

        const is_c_file = std.mem.endsWith(u8, source, ".c");

        const lib = b.addLibrary(.{
            .name = basename,
            .root_module = b.createModule(.{
                .target = target,
                .optimize = optimize,
                .strip = optimize != .Debug,
                .pic = true,
            }),
            .linkage = .static,
        });

        if (!is_c_file) {
            lib.root_module.linkSystemLibrary("stdc++", .{});
        }
        const flags = if (is_c_file) &[_][]const u8{ "-O2", "-w" } else cpp_flags.items;
        lib.root_module.addCSourceFiles(.{ .files = &.{source}, .flags = flags });

        b.installArtifact(lib);
        try binding_libs.append(allocator, lib);
    }

    // =====================================================================
    // translate_c: Generate Zig bindings from C header
    // =====================================================================
    const translate_c = b.addTranslateC(.{
        .root_source_file = b.path("binding/include/libqt6c.h"),
        .target = target,
        .optimize = optimize,
    });

    for (qt_include_paths.items) |inc_path| {
        translate_c.addIncludePath(std.Build.LazyPath{ .cwd_relative = inc_path });
    }

    // =====================================================================
    // Create Zig modules
    // =====================================================================
    const qtc_bindings = b.createModule(.{
        .root_source_file = translate_c.getOutput(),
    });

    const qtzig_types = b.createModule(.{
        .root_source_file = b.path("binding/include/libqtc.zig"),
    });
    qtzig_types.addImport("qt6c", qtc_bindings);

    const qt6zig_mod = b.addModule("qt6zig", .{
        .root_source_file = b.path("binding/libqt6.zig"),
    });
    qt6zig_mod.addImport("qt6c", qtc_bindings);
    qt6zig_mod.addImport("qt6zig", qtzig_types);
    qt6zig_mod.addImport("qtzig", qtzig_types);

    // =====================================================================
    // Example executables
    // =====================================================================
    const examples = [_]struct { name: []const u8, src: []const u8 }{
        .{ .name = "hello_window", .src = "examples/hello_window/main.zig" },
        .{ .name = "hello_button", .src = "examples/hello_button/main.zig" },
        .{ .name = "simple_app", .src = "examples/simple_app/main.zig" },
    };

    // Qt static lib path
    const qt_lib_path = try std.fs.path.join(allocator, &.{ qt6_build_path, "zig-out", "lib" });

    for (examples) |example| {
        const exe = b.addExecutable(.{
            .name = example.name,
            .root_module = b.createModule(.{
                .root_source_file = b.path(example.src),
                .target = target,
                .optimize = optimize,
            }),
        });

        // Hide console window on Windows
        exe.subsystem = .windows;

        exe.root_module.addImport("qt6zig", qt6zig_mod);
        exe.root_module.addImport("qt6c", qtc_bindings);
        exe.root_module.addImport("qtzig", qtzig_types);

        // Link binding wrapper libraries (compiled above)
        for (binding_libs.items) |lib| {
            exe.root_module.linkLibrary(lib);
        }

        // Link Qt6 static libraries
        if (pathExists(cwd, io, qt_lib_path)) {
            exe.root_module.addLibraryPath(std.Build.LazyPath{ .cwd_relative = qt_lib_path });
        }

        // Qt static libs
        for ([_][]const u8{
            "Qt6Widgets",
            "Qt6Gui",
            "Qt6Core",
            "qwindows",
            "qtHarfbuzz",
            "qtFreetype",
            "qtLibpng",
            "qtLibjpeg",
            "qtPcre2",
            "qtZlib",
            "qtDoubleConversion",
        }) |lib_name| {
            exe.root_module.linkSystemLibrary(lib_name, .{});
        }

        // Windows system libraries required by Qt
        for ([_][]const u8{
            "gdi32",
            "user32",
            "shell32",
            "ole32",
            "oleaut32",
            "uuid",
            "advapi32",
            "ws2_32",
            "winmm",
            "imm32",
            "dwmapi",
            "uxtheme",
            "d3d11",
            "dxgi",
            "dwrite",
            "d2d1",
            "setupapi",
            "comdlg32",
            "winspool",
            "version",
            "shlwapi",
            "kernel32",
            "userenv",
            "netapi32",
            "crypt32",
            "dxguid",
            "api-ms-win-core-synch-l1-2-0",
            "authz",
            "d3d12",
            "propsys",
            "ntdll",
            "bcrypt",
            "wtsapi32",
            "opengl32",
            "shcore",
            "d3d9",
        }) |lib_name| {
            exe.root_module.linkSystemLibrary(lib_name, .{});
        }

        exe.root_module.linkSystemLibrary("stdc++", .{});

        const install_exe = b.addInstallArtifact(exe, .{});
        const run_step = b.step(
            b.fmt("example-{s}", .{example.name}),
            b.fmt("Build and run {s} example", .{example.name}),
        );
        run_step.dependOn(&install_exe.step);

        const run_cmd = b.addRunArtifact(exe);
        run_cmd.step.dependOn(&install_exe.step);
        const run_run_step = b.step(
            b.fmt("run-{s}", .{example.name}),
            b.fmt("Run {s} example", .{example.name}),
        );
        run_run_step.dependOn(&run_cmd.step);
    }

    // =====================================================================
    // Generator build step (compile only, may need API updates for 0.16)
    // =====================================================================
    const gen_exe = b.addExecutable(.{
        .name = "qt6zig-gen",
        .root_module = b.createModule(.{
            .root_source_file = b.path("gen/main.zig"),
            .target = target,
            .optimize = optimize,
        }),
    });
    b.installArtifact(gen_exe);

    const gen_step = b.step("gen", "Build the binding generator");
    gen_step.dependOn(&gen_exe.step);
}

fn pathExists(cwd: Io.Dir, io: Io, path: []const u8) bool {
    cwd.access(io, path, .{}) catch return false;
    return true;
}
