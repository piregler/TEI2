# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.24.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.24.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build

# Include any dependencies generated for this target.
include CMakeFiles/CMakeBSP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CMakeBSP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CMakeBSP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMakeBSP.dir/flags.make

CMakeFiles/CMakeBSP.dir/bsp.c.o: CMakeFiles/CMakeBSP.dir/flags.make
CMakeFiles/CMakeBSP.dir/bsp.c.o: /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/bsp.c
CMakeFiles/CMakeBSP.dir/bsp.c.o: CMakeFiles/CMakeBSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CMakeBSP.dir/bsp.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CMakeBSP.dir/bsp.c.o -MF CMakeFiles/CMakeBSP.dir/bsp.c.o.d -o CMakeFiles/CMakeBSP.dir/bsp.c.o -c /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/bsp.c

CMakeFiles/CMakeBSP.dir/bsp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMakeBSP.dir/bsp.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/bsp.c > CMakeFiles/CMakeBSP.dir/bsp.c.i

CMakeFiles/CMakeBSP.dir/bsp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMakeBSP.dir/bsp.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/bsp.c -o CMakeFiles/CMakeBSP.dir/bsp.c.s

CMakeFiles/CMakeBSP.dir/func.c.o: CMakeFiles/CMakeBSP.dir/flags.make
CMakeFiles/CMakeBSP.dir/func.c.o: /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/func.c
CMakeFiles/CMakeBSP.dir/func.c.o: CMakeFiles/CMakeBSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CMakeBSP.dir/func.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CMakeBSP.dir/func.c.o -MF CMakeFiles/CMakeBSP.dir/func.c.o.d -o CMakeFiles/CMakeBSP.dir/func.c.o -c /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/func.c

CMakeFiles/CMakeBSP.dir/func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMakeBSP.dir/func.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/func.c > CMakeFiles/CMakeBSP.dir/func.c.i

CMakeFiles/CMakeBSP.dir/func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMakeBSP.dir/func.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src/func.c -o CMakeFiles/CMakeBSP.dir/func.c.s

# Object files for target CMakeBSP
CMakeBSP_OBJECTS = \
"CMakeFiles/CMakeBSP.dir/bsp.c.o" \
"CMakeFiles/CMakeBSP.dir/func.c.o"

# External object files for target CMakeBSP
CMakeBSP_EXTERNAL_OBJECTS =

CMakeBSP: CMakeFiles/CMakeBSP.dir/bsp.c.o
CMakeBSP: CMakeFiles/CMakeBSP.dir/func.c.o
CMakeBSP: CMakeFiles/CMakeBSP.dir/build.make
CMakeBSP: CMakeFiles/CMakeBSP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable CMakeBSP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CMakeBSP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMakeBSP.dir/build: CMakeBSP
.PHONY : CMakeFiles/CMakeBSP.dir/build

CMakeFiles/CMakeBSP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CMakeBSP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CMakeBSP.dir/clean

CMakeFiles/CMakeBSP.dir/depend:
	cd /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/src /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build /Users/stefanmuller/Documents/Studium/Übungen/2_Semester/TEI_2/C_Code/Aufgabenblatt_4/build/CMakeFiles/CMakeBSP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CMakeBSP.dir/depend

