# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sholde/dev/master/poocs/tp/td1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sholde/dev/master/poocs/tp/td1

# Include any dependencies generated for this target.
include mylib/CMakeFiles/mylib.dir/depend.make

# Include the progress variables for this target.
include mylib/CMakeFiles/mylib.dir/progress.make

# Include the compile flags for this target's objects.
include mylib/CMakeFiles/mylib.dir/flags.make

mylib/CMakeFiles/mylib.dir/mylib.cpp.o: mylib/CMakeFiles/mylib.dir/flags.make
mylib/CMakeFiles/mylib.dir/mylib.cpp.o: mylib/mylib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sholde/dev/master/poocs/tp/td1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mylib/CMakeFiles/mylib.dir/mylib.cpp.o"
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mylib.dir/mylib.cpp.o -c /home/sholde/dev/master/poocs/tp/td1/mylib/mylib.cpp

mylib/CMakeFiles/mylib.dir/mylib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mylib.dir/mylib.cpp.i"
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sholde/dev/master/poocs/tp/td1/mylib/mylib.cpp > CMakeFiles/mylib.dir/mylib.cpp.i

mylib/CMakeFiles/mylib.dir/mylib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mylib.dir/mylib.cpp.s"
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sholde/dev/master/poocs/tp/td1/mylib/mylib.cpp -o CMakeFiles/mylib.dir/mylib.cpp.s

# Object files for target mylib
mylib_OBJECTS = \
"CMakeFiles/mylib.dir/mylib.cpp.o"

# External object files for target mylib
mylib_EXTERNAL_OBJECTS =

mylib/libmylib.a: mylib/CMakeFiles/mylib.dir/mylib.cpp.o
mylib/libmylib.a: mylib/CMakeFiles/mylib.dir/build.make
mylib/libmylib.a: mylib/CMakeFiles/mylib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sholde/dev/master/poocs/tp/td1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmylib.a"
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && $(CMAKE_COMMAND) -P CMakeFiles/mylib.dir/cmake_clean_target.cmake
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mylib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mylib/CMakeFiles/mylib.dir/build: mylib/libmylib.a

.PHONY : mylib/CMakeFiles/mylib.dir/build

mylib/CMakeFiles/mylib.dir/clean:
	cd /home/sholde/dev/master/poocs/tp/td1/mylib && $(CMAKE_COMMAND) -P CMakeFiles/mylib.dir/cmake_clean.cmake
.PHONY : mylib/CMakeFiles/mylib.dir/clean

mylib/CMakeFiles/mylib.dir/depend:
	cd /home/sholde/dev/master/poocs/tp/td1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sholde/dev/master/poocs/tp/td1 /home/sholde/dev/master/poocs/tp/td1/mylib /home/sholde/dev/master/poocs/tp/td1 /home/sholde/dev/master/poocs/tp/td1/mylib /home/sholde/dev/master/poocs/tp/td1/mylib/CMakeFiles/mylib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mylib/CMakeFiles/mylib.dir/depend

