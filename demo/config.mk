PRJTYPE = Executable
LIBS = energycore stbimg gfxwnd glfw glad macu
ifeq ($(TARGET_OS), Windows)
	LIBS += opengl32 gdi32 winmm ole32 user32 shell32
else
	LIBS += GL X11 Xrandr Xinerama Xcursor pthread dl
endif
ifeq ($(VARIANT), Debug)
	MLDFLAGS = -export-dynamic
endif
EXTDEPS = gfxwnd::0.0.1dev macu::0.0.2dev
MOREDEPS = ..
