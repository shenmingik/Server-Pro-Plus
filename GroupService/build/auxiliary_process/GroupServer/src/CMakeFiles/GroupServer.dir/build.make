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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/ByteTalk/GroupService

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ByteTalk/GroupService/build

# Include any dependencies generated for this target.
include auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/depend.make

# Include the progress variables for this target.
include auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/progress.make

# Include the compile flags for this target's objects.
include auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/flags.make

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/flags.make
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o: ../auxiliary_process/GroupServer/src/GroupServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/GroupService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GroupServer.dir/GroupServer.cpp.o -c /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.cpp

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GroupServer.dir/GroupServer.cpp.i"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.cpp > CMakeFiles/GroupServer.dir/GroupServer.cpp.i

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GroupServer.dir/GroupServer.cpp.s"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.cpp -o CMakeFiles/GroupServer.dir/GroupServer.cpp.s

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.requires:

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.requires

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.provides: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.requires
	$(MAKE) -f auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build.make auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.provides.build
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.provides

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.provides.build: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o


auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/flags.make
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o: ../auxiliary_process/GroupServer/src/GroupServer.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/GroupService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o -c /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.pb.cc

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GroupServer.dir/GroupServer.pb.cc.i"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.pb.cc > CMakeFiles/GroupServer.dir/GroupServer.pb.cc.i

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GroupServer.dir/GroupServer.pb.cc.s"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/GroupServer.pb.cc -o CMakeFiles/GroupServer.dir/GroupServer.pb.cc.s

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.requires:

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.requires

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.provides: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.requires
	$(MAKE) -f auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build.make auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.provides.build
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.provides

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.provides.build: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o


auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/flags.make
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o: ../auxiliary_process/GroupServer/src/ZooKeeperFow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/GroupService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o -c /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/ZooKeeperFow.cpp

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.i"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/ZooKeeperFow.cpp > CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.i

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.s"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/ZooKeeperFow.cpp -o CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.s

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.requires:

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.requires

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.provides: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.requires
	$(MAKE) -f auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build.make auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.provides.build
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.provides

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.provides.build: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o


auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/flags.make
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o: ../auxiliary_process/GroupServer/src/run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ByteTalk/GroupService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GroupServer.dir/run.cpp.o -c /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/run.cpp

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GroupServer.dir/run.cpp.i"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/run.cpp > CMakeFiles/GroupServer.dir/run.cpp.i

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GroupServer.dir/run.cpp.s"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && /usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src/run.cpp -o CMakeFiles/GroupServer.dir/run.cpp.s

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.requires:

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.requires

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.provides: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.requires
	$(MAKE) -f auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build.make auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.provides.build
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.provides

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.provides.build: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o


# Object files for target GroupServer
GroupServer_OBJECTS = \
"CMakeFiles/GroupServer.dir/GroupServer.cpp.o" \
"CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o" \
"CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o" \
"CMakeFiles/GroupServer.dir/run.cpp.o"

# External object files for target GroupServer
GroupServer_EXTERNAL_OBJECTS =

../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o
../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o
../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o
../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o
../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build.make
../bin/GroupServer: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ByteTalk/GroupService/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../../../bin/GroupServer"
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GroupServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build: ../bin/GroupServer

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/build

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/requires: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.cpp.o.requires
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/requires: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/GroupServer.pb.cc.o.requires
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/requires: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/ZooKeeperFow.cpp.o.requires
auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/requires: auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/run.cpp.o.requires

.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/requires

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/clean:
	cd /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src && $(CMAKE_COMMAND) -P CMakeFiles/GroupServer.dir/cmake_clean.cmake
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/clean

auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/depend:
	cd /home/ubuntu/ByteTalk/GroupService/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ByteTalk/GroupService /home/ubuntu/ByteTalk/GroupService/auxiliary_process/GroupServer/src /home/ubuntu/ByteTalk/GroupService/build /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src /home/ubuntu/ByteTalk/GroupService/build/auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : auxiliary_process/GroupServer/src/CMakeFiles/GroupServer.dir/depend

