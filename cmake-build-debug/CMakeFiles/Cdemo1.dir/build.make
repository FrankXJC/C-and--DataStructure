# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/frank/CLionProjects/Cdemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/frank/CLionProjects/Cdemo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cdemo1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cdemo1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cdemo1.dir/flags.make

CMakeFiles/Cdemo1.dir/isPrime.c.o: CMakeFiles/Cdemo1.dir/flags.make
CMakeFiles/Cdemo1.dir/isPrime.c.o: ../isPrime.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/frank/CLionProjects/Cdemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Cdemo1.dir/isPrime.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cdemo1.dir/isPrime.c.o   -c /Users/frank/CLionProjects/Cdemo/isPrime.c

CMakeFiles/Cdemo1.dir/isPrime.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cdemo1.dir/isPrime.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/frank/CLionProjects/Cdemo/isPrime.c > CMakeFiles/Cdemo1.dir/isPrime.c.i

CMakeFiles/Cdemo1.dir/isPrime.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cdemo1.dir/isPrime.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/frank/CLionProjects/Cdemo/isPrime.c -o CMakeFiles/Cdemo1.dir/isPrime.c.s

# Object files for target Cdemo1
Cdemo1_OBJECTS = \
"CMakeFiles/Cdemo1.dir/isPrime.c.o"

# External object files for target Cdemo1
Cdemo1_EXTERNAL_OBJECTS =

Cdemo1: CMakeFiles/Cdemo1.dir/isPrime.c.o
Cdemo1: CMakeFiles/Cdemo1.dir/build.make
Cdemo1: CMakeFiles/Cdemo1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/frank/CLionProjects/Cdemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Cdemo1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cdemo1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cdemo1.dir/build: Cdemo1

.PHONY : CMakeFiles/Cdemo1.dir/build

CMakeFiles/Cdemo1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cdemo1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cdemo1.dir/clean

CMakeFiles/Cdemo1.dir/depend:
	cd /Users/frank/CLionProjects/Cdemo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/frank/CLionProjects/Cdemo /Users/frank/CLionProjects/Cdemo /Users/frank/CLionProjects/Cdemo/cmake-build-debug /Users/frank/CLionProjects/Cdemo/cmake-build-debug /Users/frank/CLionProjects/Cdemo/cmake-build-debug/CMakeFiles/Cdemo1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cdemo1.dir/depend

