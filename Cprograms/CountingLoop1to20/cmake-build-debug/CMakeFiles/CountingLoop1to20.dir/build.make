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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /private/var/folders/74/t5d8vk1j3zv3dbs0k3vzjxrm0000gn/T/AppTranslocation/E401E732-5C32-4ED9-A728-51BC2304CAC5/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/74/t5d8vk1j3zv3dbs0k3vzjxrm0000gn/T/AppTranslocation/E401E732-5C32-4ED9-A728-51BC2304CAC5/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/araju55/CLionProjects/CountingLoop1to20

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CountingLoop1to20.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CountingLoop1to20.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CountingLoop1to20.dir/flags.make

CMakeFiles/CountingLoop1to20.dir/main.c.o: CMakeFiles/CountingLoop1to20.dir/flags.make
CMakeFiles/CountingLoop1to20.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CountingLoop1to20.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CountingLoop1to20.dir/main.c.o   -c /Users/araju55/CLionProjects/CountingLoop1to20/main.c

CMakeFiles/CountingLoop1to20.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CountingLoop1to20.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/araju55/CLionProjects/CountingLoop1to20/main.c > CMakeFiles/CountingLoop1to20.dir/main.c.i

CMakeFiles/CountingLoop1to20.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CountingLoop1to20.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/araju55/CLionProjects/CountingLoop1to20/main.c -o CMakeFiles/CountingLoop1to20.dir/main.c.s

# Object files for target CountingLoop1to20
CountingLoop1to20_OBJECTS = \
"CMakeFiles/CountingLoop1to20.dir/main.c.o"

# External object files for target CountingLoop1to20
CountingLoop1to20_EXTERNAL_OBJECTS =

CountingLoop1to20: CMakeFiles/CountingLoop1to20.dir/main.c.o
CountingLoop1to20: CMakeFiles/CountingLoop1to20.dir/build.make
CountingLoop1to20: CMakeFiles/CountingLoop1to20.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CountingLoop1to20"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CountingLoop1to20.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CountingLoop1to20.dir/build: CountingLoop1to20

.PHONY : CMakeFiles/CountingLoop1to20.dir/build

CMakeFiles/CountingLoop1to20.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CountingLoop1to20.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CountingLoop1to20.dir/clean

CMakeFiles/CountingLoop1to20.dir/depend:
	cd /Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/araju55/CLionProjects/CountingLoop1to20 /Users/araju55/CLionProjects/CountingLoop1to20 /Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug /Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug /Users/araju55/CLionProjects/CountingLoop1to20/cmake-build-debug/CMakeFiles/CountingLoop1to20.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CountingLoop1to20.dir/depend

