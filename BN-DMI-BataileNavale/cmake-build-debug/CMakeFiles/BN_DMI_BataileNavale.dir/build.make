# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BN_DMI_BataileNavale.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BN_DMI_BataileNavale.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BN_DMI_BataileNavale.dir/flags.make

CMakeFiles/BN_DMI_BataileNavale.dir/main.c.obj: CMakeFiles/BN_DMI_BataileNavale.dir/flags.make
CMakeFiles/BN_DMI_BataileNavale.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BN_DMI_BataileNavale.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BN_DMI_BataileNavale.dir\main.c.obj   -c "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\main.c"

CMakeFiles/BN_DMI_BataileNavale.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BN_DMI_BataileNavale.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\main.c" > CMakeFiles\BN_DMI_BataileNavale.dir\main.c.i

CMakeFiles/BN_DMI_BataileNavale.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BN_DMI_BataileNavale.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\main.c" -o CMakeFiles\BN_DMI_BataileNavale.dir\main.c.s

# Object files for target BN_DMI_BataileNavale
BN_DMI_BataileNavale_OBJECTS = \
"CMakeFiles/BN_DMI_BataileNavale.dir/main.c.obj"

# External object files for target BN_DMI_BataileNavale
BN_DMI_BataileNavale_EXTERNAL_OBJECTS =

BN_DMI_BataileNavale.exe: CMakeFiles/BN_DMI_BataileNavale.dir/main.c.obj
BN_DMI_BataileNavale.exe: CMakeFiles/BN_DMI_BataileNavale.dir/build.make
BN_DMI_BataileNavale.exe: CMakeFiles/BN_DMI_BataileNavale.dir/linklibs.rsp
BN_DMI_BataileNavale.exe: CMakeFiles/BN_DMI_BataileNavale.dir/objects1.rsp
BN_DMI_BataileNavale.exe: CMakeFiles/BN_DMI_BataileNavale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BN_DMI_BataileNavale.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BN_DMI_BataileNavale.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BN_DMI_BataileNavale.dir/build: BN_DMI_BataileNavale.exe

.PHONY : CMakeFiles/BN_DMI_BataileNavale.dir/build

CMakeFiles/BN_DMI_BataileNavale.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BN_DMI_BataileNavale.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BN_DMI_BataileNavale.dir/clean

CMakeFiles/BN_DMI_BataileNavale.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale" "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale" "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug" "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug" "P:\1er annee\Modules I-CT\ICT-431\bataille-navale\BN-DMI-BataileNavale\cmake-build-debug\CMakeFiles\BN_DMI_BataileNavale.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BN_DMI_BataileNavale.dir/depend
