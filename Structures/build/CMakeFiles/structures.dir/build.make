# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/irmorales/projects/CProjects/Structures/Structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/irmorales/projects/CProjects/Structures/Structures/build

# Include any dependencies generated for this target.
include CMakeFiles/structures.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/structures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structures.dir/flags.make

CMakeFiles/structures.dir/main.c.o: CMakeFiles/structures.dir/flags.make
CMakeFiles/structures.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/irmorales/projects/CProjects/Structures/Structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/structures.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/structures.dir/main.c.o   -c /home/irmorales/projects/CProjects/Structures/Structures/main.c

CMakeFiles/structures.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/structures.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/irmorales/projects/CProjects/Structures/Structures/main.c > CMakeFiles/structures.dir/main.c.i

CMakeFiles/structures.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/structures.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/irmorales/projects/CProjects/Structures/Structures/main.c -o CMakeFiles/structures.dir/main.c.s

# Object files for target structures
structures_OBJECTS = \
"CMakeFiles/structures.dir/main.c.o"

# External object files for target structures
structures_EXTERNAL_OBJECTS =

structures: CMakeFiles/structures.dir/main.c.o
structures: CMakeFiles/structures.dir/build.make
structures: CMakeFiles/structures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/irmorales/projects/CProjects/Structures/Structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable structures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/structures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/structures.dir/build: structures

.PHONY : CMakeFiles/structures.dir/build

CMakeFiles/structures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/structures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/structures.dir/clean

CMakeFiles/structures.dir/depend:
	cd /home/irmorales/projects/CProjects/Structures/Structures/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/irmorales/projects/CProjects/Structures/Structures /home/irmorales/projects/CProjects/Structures/Structures /home/irmorales/projects/CProjects/Structures/Structures/build /home/irmorales/projects/CProjects/Structures/Structures/build /home/irmorales/projects/CProjects/Structures/Structures/build/CMakeFiles/structures.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/structures.dir/depend

