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
CMAKE_SOURCE_DIR = /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RPN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RPN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RPN.dir/flags.make

CMakeFiles/RPN.dir/main.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RPN.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/main.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/main.cpp

CMakeFiles/RPN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/main.cpp > CMakeFiles/RPN.dir/main.cpp.i

CMakeFiles/RPN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/main.cpp -o CMakeFiles/RPN.dir/main.cpp.s

CMakeFiles/RPN.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/main.cpp.o.requires

CMakeFiles/RPN.dir/main.cpp.o.provides: CMakeFiles/RPN.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/main.cpp.o.provides

CMakeFiles/RPN.dir/main.cpp.o.provides.build: CMakeFiles/RPN.dir/main.cpp.o


CMakeFiles/RPN.dir/rpn.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/rpn.cpp.o: ../rpn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RPN.dir/rpn.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/rpn.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/rpn.cpp

CMakeFiles/RPN.dir/rpn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/rpn.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/rpn.cpp > CMakeFiles/RPN.dir/rpn.cpp.i

CMakeFiles/RPN.dir/rpn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/rpn.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/rpn.cpp -o CMakeFiles/RPN.dir/rpn.cpp.s

CMakeFiles/RPN.dir/rpn.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/rpn.cpp.o.requires

CMakeFiles/RPN.dir/rpn.cpp.o.provides: CMakeFiles/RPN.dir/rpn.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/rpn.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/rpn.cpp.o.provides

CMakeFiles/RPN.dir/rpn.cpp.o.provides.build: CMakeFiles/RPN.dir/rpn.cpp.o


CMakeFiles/RPN.dir/caculation.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/caculation.cpp.o: ../caculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RPN.dir/caculation.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/caculation.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/caculation.cpp

CMakeFiles/RPN.dir/caculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/caculation.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/caculation.cpp > CMakeFiles/RPN.dir/caculation.cpp.i

CMakeFiles/RPN.dir/caculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/caculation.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/caculation.cpp -o CMakeFiles/RPN.dir/caculation.cpp.s

CMakeFiles/RPN.dir/caculation.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/caculation.cpp.o.requires

CMakeFiles/RPN.dir/caculation.cpp.o.provides: CMakeFiles/RPN.dir/caculation.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/caculation.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/caculation.cpp.o.provides

CMakeFiles/RPN.dir/caculation.cpp.o.provides.build: CMakeFiles/RPN.dir/caculation.cpp.o


CMakeFiles/RPN.dir/append2rpn.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/append2rpn.cpp.o: ../append2rpn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RPN.dir/append2rpn.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/append2rpn.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/append2rpn.cpp

CMakeFiles/RPN.dir/append2rpn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/append2rpn.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/append2rpn.cpp > CMakeFiles/RPN.dir/append2rpn.cpp.i

CMakeFiles/RPN.dir/append2rpn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/append2rpn.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/append2rpn.cpp -o CMakeFiles/RPN.dir/append2rpn.cpp.s

CMakeFiles/RPN.dir/append2rpn.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/append2rpn.cpp.o.requires

CMakeFiles/RPN.dir/append2rpn.cpp.o.provides: CMakeFiles/RPN.dir/append2rpn.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/append2rpn.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/append2rpn.cpp.o.provides

CMakeFiles/RPN.dir/append2rpn.cpp.o.provides.build: CMakeFiles/RPN.dir/append2rpn.cpp.o


CMakeFiles/RPN.dir/priority.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/priority.cpp.o: ../priority.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RPN.dir/priority.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/priority.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/priority.cpp

CMakeFiles/RPN.dir/priority.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/priority.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/priority.cpp > CMakeFiles/RPN.dir/priority.cpp.i

CMakeFiles/RPN.dir/priority.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/priority.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/priority.cpp -o CMakeFiles/RPN.dir/priority.cpp.s

CMakeFiles/RPN.dir/priority.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/priority.cpp.o.requires

CMakeFiles/RPN.dir/priority.cpp.o.provides: CMakeFiles/RPN.dir/priority.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/priority.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/priority.cpp.o.provides

CMakeFiles/RPN.dir/priority.cpp.o.provides.build: CMakeFiles/RPN.dir/priority.cpp.o


CMakeFiles/RPN.dir/readnumber.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/readnumber.cpp.o: ../readnumber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RPN.dir/readnumber.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/readnumber.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/readnumber.cpp

CMakeFiles/RPN.dir/readnumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/readnumber.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/readnumber.cpp > CMakeFiles/RPN.dir/readnumber.cpp.i

CMakeFiles/RPN.dir/readnumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/readnumber.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/readnumber.cpp -o CMakeFiles/RPN.dir/readnumber.cpp.s

CMakeFiles/RPN.dir/readnumber.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/readnumber.cpp.o.requires

CMakeFiles/RPN.dir/readnumber.cpp.o.provides: CMakeFiles/RPN.dir/readnumber.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/readnumber.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/readnumber.cpp.o.provides

CMakeFiles/RPN.dir/readnumber.cpp.o.provides.build: CMakeFiles/RPN.dir/readnumber.cpp.o


CMakeFiles/RPN.dir/displayprogress.cpp.o: CMakeFiles/RPN.dir/flags.make
CMakeFiles/RPN.dir/displayprogress.cpp.o: ../displayprogress.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RPN.dir/displayprogress.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPN.dir/displayprogress.cpp.o -c /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/displayprogress.cpp

CMakeFiles/RPN.dir/displayprogress.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPN.dir/displayprogress.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/displayprogress.cpp > CMakeFiles/RPN.dir/displayprogress.cpp.i

CMakeFiles/RPN.dir/displayprogress.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPN.dir/displayprogress.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/displayprogress.cpp -o CMakeFiles/RPN.dir/displayprogress.cpp.s

CMakeFiles/RPN.dir/displayprogress.cpp.o.requires:

.PHONY : CMakeFiles/RPN.dir/displayprogress.cpp.o.requires

CMakeFiles/RPN.dir/displayprogress.cpp.o.provides: CMakeFiles/RPN.dir/displayprogress.cpp.o.requires
	$(MAKE) -f CMakeFiles/RPN.dir/build.make CMakeFiles/RPN.dir/displayprogress.cpp.o.provides.build
.PHONY : CMakeFiles/RPN.dir/displayprogress.cpp.o.provides

CMakeFiles/RPN.dir/displayprogress.cpp.o.provides.build: CMakeFiles/RPN.dir/displayprogress.cpp.o


# Object files for target RPN
RPN_OBJECTS = \
"CMakeFiles/RPN.dir/main.cpp.o" \
"CMakeFiles/RPN.dir/rpn.cpp.o" \
"CMakeFiles/RPN.dir/caculation.cpp.o" \
"CMakeFiles/RPN.dir/append2rpn.cpp.o" \
"CMakeFiles/RPN.dir/priority.cpp.o" \
"CMakeFiles/RPN.dir/readnumber.cpp.o" \
"CMakeFiles/RPN.dir/displayprogress.cpp.o"

# External object files for target RPN
RPN_EXTERNAL_OBJECTS =

RPN.exe: CMakeFiles/RPN.dir/main.cpp.o
RPN.exe: CMakeFiles/RPN.dir/rpn.cpp.o
RPN.exe: CMakeFiles/RPN.dir/caculation.cpp.o
RPN.exe: CMakeFiles/RPN.dir/append2rpn.cpp.o
RPN.exe: CMakeFiles/RPN.dir/priority.cpp.o
RPN.exe: CMakeFiles/RPN.dir/readnumber.cpp.o
RPN.exe: CMakeFiles/RPN.dir/displayprogress.cpp.o
RPN.exe: CMakeFiles/RPN.dir/build.make
RPN.exe: CMakeFiles/RPN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable RPN.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RPN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RPN.dir/build: RPN.exe

.PHONY : CMakeFiles/RPN.dir/build

CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/main.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/rpn.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/caculation.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/append2rpn.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/priority.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/readnumber.cpp.o.requires
CMakeFiles/RPN.dir/requires: CMakeFiles/RPN.dir/displayprogress.cpp.o.requires

.PHONY : CMakeFiles/RPN.dir/requires

CMakeFiles/RPN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RPN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RPN.dir/clean

CMakeFiles/RPN.dir/depend:
	cd /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug /cygdrive/d/Git/Data_Sturcture_Exercise/Chapter4/RPN/cmake-build-debug/CMakeFiles/RPN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RPN.dir/depend

