# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build"

# Utility rule file for RunTests.

# Include the progress variables for this target.
include CMakeFiles/RunTests.dir/progress.make

CMakeFiles/RunTests: run_tests.lic

run_tests.lic: Install/oiko-threads-test
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Running Tests"
	cd "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build/Install" && ./oiko-threads-test && cd "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app"

RunTests: CMakeFiles/RunTests
RunTests: run_tests.lic
RunTests: CMakeFiles/RunTests.dir/build.make
.PHONY : RunTests

# Rule to build all files generated by this target.
CMakeFiles/RunTests.dir/build: RunTests
.PHONY : CMakeFiles/RunTests.dir/build

CMakeFiles/RunTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RunTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RunTests.dir/clean

CMakeFiles/RunTests.dir/depend:
	cd "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app" "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app" "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build" "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build" "/Users/marinos/projects/finished/oiko-nomic-threads code/oiko-threads app/build/CMakeFiles/RunTests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/RunTests.dir/depend

