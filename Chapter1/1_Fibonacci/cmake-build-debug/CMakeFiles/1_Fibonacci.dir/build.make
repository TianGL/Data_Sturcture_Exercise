# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cygdrive/c/Users/Geliang/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Geliang/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_Fibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_Fibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_Fibonacci.dir/flags.make

CMakeFiles/1_Fibonacci.dir/main.cpp.o: CMakeFiles/1_Fibonacci.dir/flags.make
CMakeFiles/1_Fibonacci.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_Fibonacci.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1_Fibonacci.dir/main.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/main.cpp

CMakeFiles/1_Fibonacci.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_Fibonacci.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/main.cpp > CMakeFiles/1_Fibonacci.dir/main.cpp.i

CMakeFiles/1_Fibonacci.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_Fibonacci.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/main.cpp -o CMakeFiles/1_Fibonacci.dir/main.cpp.s

CMakeFiles/1_Fibonacci.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/1_Fibonacci.dir/main.cpp.o.requires

CMakeFiles/1_Fibonacci.dir/main.cpp.o.provides: CMakeFiles/1_Fibonacci.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/1_Fibonacci.dir/build.make CMakeFiles/1_Fibonacci.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/1_Fibonacci.dir/main.cpp.o.provides

CMakeFiles/1_Fibonacci.dir/main.cpp.o.provides.build: CMakeFiles/1_Fibonacci.dir/main.cpp.o


CMakeFiles/1_Fibonacci.dir/fib.cpp.o: CMakeFiles/1_Fibonacci.dir/flags.make
CMakeFiles/1_Fibonacci.dir/fib.cpp.o: ../fib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/1_Fibonacci.dir/fib.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1_Fibonacci.dir/fib.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/fib.cpp

CMakeFiles/1_Fibonacci.dir/fib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_Fibonacci.dir/fib.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/fib.cpp > CMakeFiles/1_Fibonacci.dir/fib.cpp.i

CMakeFiles/1_Fibonacci.dir/fib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_Fibonacci.dir/fib.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/fib.cpp -o CMakeFiles/1_Fibonacci.dir/fib.cpp.s

CMakeFiles/1_Fibonacci.dir/fib.cpp.o.requires:

.PHONY : CMakeFiles/1_Fibonacci.dir/fib.cpp.o.requires

CMakeFiles/1_Fibonacci.dir/fib.cpp.o.provides: CMakeFiles/1_Fibonacci.dir/fib.cpp.o.requires
	$(MAKE) -f CMakeFiles/1_Fibonacci.dir/build.make CMakeFiles/1_Fibonacci.dir/fib.cpp.o.provides.build
.PHONY : CMakeFiles/1_Fibonacci.dir/fib.cpp.o.provides

CMakeFiles/1_Fibonacci.dir/fib.cpp.o.provides.build: CMakeFiles/1_Fibonacci.dir/fib.cpp.o


# Object files for target 1_Fibonacci
1_Fibonacci_OBJECTS = \
"CMakeFiles/1_Fibonacci.dir/main.cpp.o" \
"CMakeFiles/1_Fibonacci.dir/fib.cpp.o"

# External object files for target 1_Fibonacci
1_Fibonacci_EXTERNAL_OBJECTS =

1_Fibonacci.exe: CMakeFiles/1_Fibonacci.dir/main.cpp.o
1_Fibonacci.exe: CMakeFiles/1_Fibonacci.dir/fib.cpp.o
1_Fibonacci.exe: CMakeFiles/1_Fibonacci.dir/build.make
1_Fibonacci.exe: CMakeFiles/1_Fibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 1_Fibonacci.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1_Fibonacci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_Fibonacci.dir/build: 1_Fibonacci.exe

.PHONY : CMakeFiles/1_Fibonacci.dir/build

CMakeFiles/1_Fibonacci.dir/requires: CMakeFiles/1_Fibonacci.dir/main.cpp.o.requires
CMakeFiles/1_Fibonacci.dir/requires: CMakeFiles/1_Fibonacci.dir/fib.cpp.o.requires

.PHONY : CMakeFiles/1_Fibonacci.dir/requires

CMakeFiles/1_Fibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1_Fibonacci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1_Fibonacci.dir/clean

CMakeFiles/1_Fibonacci.dir/depend:
	cd /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter1/1_Fibonacci/cmake-build-debug/CMakeFiles/1_Fibonacci.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_Fibonacci.dir/depend

