# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build

# Include any dependencies generated for this target.
include CMakeFiles/CVector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CVector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CVector.dir/flags.make

CMakeFiles/CVector.dir/src/main.cpp.o: CMakeFiles/CVector.dir/flags.make
CMakeFiles/CVector.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CVector.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CVector.dir/src/main.cpp.o -c /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/main.cpp

CMakeFiles/CVector.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CVector.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/main.cpp > CMakeFiles/CVector.dir/src/main.cpp.i

CMakeFiles/CVector.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CVector.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/main.cpp -o CMakeFiles/CVector.dir/src/main.cpp.s

CMakeFiles/CVector.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/CVector.dir/src/main.cpp.o.requires

CMakeFiles/CVector.dir/src/main.cpp.o.provides: CMakeFiles/CVector.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CVector.dir/build.make CMakeFiles/CVector.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/CVector.dir/src/main.cpp.o.provides

CMakeFiles/CVector.dir/src/main.cpp.o.provides.build: CMakeFiles/CVector.dir/src/main.cpp.o


CMakeFiles/CVector.dir/src/CVector.cpp.o: CMakeFiles/CVector.dir/flags.make
CMakeFiles/CVector.dir/src/CVector.cpp.o: ../src/CVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CVector.dir/src/CVector.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CVector.dir/src/CVector.cpp.o -c /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/CVector.cpp

CMakeFiles/CVector.dir/src/CVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CVector.dir/src/CVector.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/CVector.cpp > CMakeFiles/CVector.dir/src/CVector.cpp.i

CMakeFiles/CVector.dir/src/CVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CVector.dir/src/CVector.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/CVector.cpp -o CMakeFiles/CVector.dir/src/CVector.cpp.s

CMakeFiles/CVector.dir/src/CVector.cpp.o.requires:

.PHONY : CMakeFiles/CVector.dir/src/CVector.cpp.o.requires

CMakeFiles/CVector.dir/src/CVector.cpp.o.provides: CMakeFiles/CVector.dir/src/CVector.cpp.o.requires
	$(MAKE) -f CMakeFiles/CVector.dir/build.make CMakeFiles/CVector.dir/src/CVector.cpp.o.provides.build
.PHONY : CMakeFiles/CVector.dir/src/CVector.cpp.o.provides

CMakeFiles/CVector.dir/src/CVector.cpp.o.provides.build: CMakeFiles/CVector.dir/src/CVector.cpp.o


CMakeFiles/CVector.dir/src/test.cpp.o: CMakeFiles/CVector.dir/flags.make
CMakeFiles/CVector.dir/src/test.cpp.o: ../src/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CVector.dir/src/test.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CVector.dir/src/test.cpp.o -c /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/test.cpp

CMakeFiles/CVector.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CVector.dir/src/test.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/test.cpp > CMakeFiles/CVector.dir/src/test.cpp.i

CMakeFiles/CVector.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CVector.dir/src/test.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/src/test.cpp -o CMakeFiles/CVector.dir/src/test.cpp.s

CMakeFiles/CVector.dir/src/test.cpp.o.requires:

.PHONY : CMakeFiles/CVector.dir/src/test.cpp.o.requires

CMakeFiles/CVector.dir/src/test.cpp.o.provides: CMakeFiles/CVector.dir/src/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/CVector.dir/build.make CMakeFiles/CVector.dir/src/test.cpp.o.provides.build
.PHONY : CMakeFiles/CVector.dir/src/test.cpp.o.provides

CMakeFiles/CVector.dir/src/test.cpp.o.provides.build: CMakeFiles/CVector.dir/src/test.cpp.o


# Object files for target CVector
CVector_OBJECTS = \
"CMakeFiles/CVector.dir/src/main.cpp.o" \
"CMakeFiles/CVector.dir/src/CVector.cpp.o" \
"CMakeFiles/CVector.dir/src/test.cpp.o"

# External object files for target CVector
CVector_EXTERNAL_OBJECTS =

CVector: CMakeFiles/CVector.dir/src/main.cpp.o
CVector: CMakeFiles/CVector.dir/src/CVector.cpp.o
CVector: CMakeFiles/CVector.dir/src/test.cpp.o
CVector: CMakeFiles/CVector.dir/build.make
CVector: CMakeFiles/CVector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CVector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CVector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CVector.dir/build: CVector

.PHONY : CMakeFiles/CVector.dir/build

CMakeFiles/CVector.dir/requires: CMakeFiles/CVector.dir/src/main.cpp.o.requires
CMakeFiles/CVector.dir/requires: CMakeFiles/CVector.dir/src/CVector.cpp.o.requires
CMakeFiles/CVector.dir/requires: CMakeFiles/CVector.dir/src/test.cpp.o.requires

.PHONY : CMakeFiles/CVector.dir/requires

CMakeFiles/CVector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CVector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CVector.dir/clean

CMakeFiles/CVector.dir/depend:
	cd /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build /home/kirill/kirill/progs/repet/Ekaterina_Tereshkovich/2/task_1_Real/build/CMakeFiles/CVector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CVector.dir/depend

