# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/kira/Buffer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kira/Buffer/build

# Include any dependencies generated for this target.
include CMakeFiles/Pong_Cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Pong_Cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Pong_Cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pong_Cpp.dir/flags.make

CMakeFiles/Pong_Cpp.dir/main.cpp.o: CMakeFiles/Pong_Cpp.dir/flags.make
CMakeFiles/Pong_Cpp.dir/main.cpp.o: /home/kira/Buffer/main.cpp
CMakeFiles/Pong_Cpp.dir/main.cpp.o: CMakeFiles/Pong_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pong_Cpp.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pong_Cpp.dir/main.cpp.o -MF CMakeFiles/Pong_Cpp.dir/main.cpp.o.d -o CMakeFiles/Pong_Cpp.dir/main.cpp.o -c /home/kira/Buffer/main.cpp

CMakeFiles/Pong_Cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pong_Cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kira/Buffer/main.cpp > CMakeFiles/Pong_Cpp.dir/main.cpp.i

CMakeFiles/Pong_Cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pong_Cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kira/Buffer/main.cpp -o CMakeFiles/Pong_Cpp.dir/main.cpp.s

CMakeFiles/Pong_Cpp.dir/Game.cpp.o: CMakeFiles/Pong_Cpp.dir/flags.make
CMakeFiles/Pong_Cpp.dir/Game.cpp.o: /home/kira/Buffer/Game.cpp
CMakeFiles/Pong_Cpp.dir/Game.cpp.o: CMakeFiles/Pong_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Pong_Cpp.dir/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pong_Cpp.dir/Game.cpp.o -MF CMakeFiles/Pong_Cpp.dir/Game.cpp.o.d -o CMakeFiles/Pong_Cpp.dir/Game.cpp.o -c /home/kira/Buffer/Game.cpp

CMakeFiles/Pong_Cpp.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pong_Cpp.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kira/Buffer/Game.cpp > CMakeFiles/Pong_Cpp.dir/Game.cpp.i

CMakeFiles/Pong_Cpp.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pong_Cpp.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kira/Buffer/Game.cpp -o CMakeFiles/Pong_Cpp.dir/Game.cpp.s

CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o: CMakeFiles/Pong_Cpp.dir/flags.make
CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o: /home/kira/Buffer/Paddle.cpp
CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o: CMakeFiles/Pong_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o -MF CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o.d -o CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o -c /home/kira/Buffer/Paddle.cpp

CMakeFiles/Pong_Cpp.dir/Paddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pong_Cpp.dir/Paddle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kira/Buffer/Paddle.cpp > CMakeFiles/Pong_Cpp.dir/Paddle.cpp.i

CMakeFiles/Pong_Cpp.dir/Paddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pong_Cpp.dir/Paddle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kira/Buffer/Paddle.cpp -o CMakeFiles/Pong_Cpp.dir/Paddle.cpp.s

CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o: CMakeFiles/Pong_Cpp.dir/flags.make
CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o: /home/kira/Buffer/PongObject.cpp
CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o: CMakeFiles/Pong_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o -MF CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o.d -o CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o -c /home/kira/Buffer/PongObject.cpp

CMakeFiles/Pong_Cpp.dir/PongObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pong_Cpp.dir/PongObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kira/Buffer/PongObject.cpp > CMakeFiles/Pong_Cpp.dir/PongObject.cpp.i

CMakeFiles/Pong_Cpp.dir/PongObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pong_Cpp.dir/PongObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kira/Buffer/PongObject.cpp -o CMakeFiles/Pong_Cpp.dir/PongObject.cpp.s

CMakeFiles/Pong_Cpp.dir/Ball.cpp.o: CMakeFiles/Pong_Cpp.dir/flags.make
CMakeFiles/Pong_Cpp.dir/Ball.cpp.o: /home/kira/Buffer/Ball.cpp
CMakeFiles/Pong_Cpp.dir/Ball.cpp.o: CMakeFiles/Pong_Cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Pong_Cpp.dir/Ball.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pong_Cpp.dir/Ball.cpp.o -MF CMakeFiles/Pong_Cpp.dir/Ball.cpp.o.d -o CMakeFiles/Pong_Cpp.dir/Ball.cpp.o -c /home/kira/Buffer/Ball.cpp

CMakeFiles/Pong_Cpp.dir/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Pong_Cpp.dir/Ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kira/Buffer/Ball.cpp > CMakeFiles/Pong_Cpp.dir/Ball.cpp.i

CMakeFiles/Pong_Cpp.dir/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Pong_Cpp.dir/Ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kira/Buffer/Ball.cpp -o CMakeFiles/Pong_Cpp.dir/Ball.cpp.s

# Object files for target Pong_Cpp
Pong_Cpp_OBJECTS = \
"CMakeFiles/Pong_Cpp.dir/main.cpp.o" \
"CMakeFiles/Pong_Cpp.dir/Game.cpp.o" \
"CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o" \
"CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o" \
"CMakeFiles/Pong_Cpp.dir/Ball.cpp.o"

# External object files for target Pong_Cpp
Pong_Cpp_EXTERNAL_OBJECTS =

Pong_Cpp: CMakeFiles/Pong_Cpp.dir/main.cpp.o
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/Game.cpp.o
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/Paddle.cpp.o
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/PongObject.cpp.o
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/Ball.cpp.o
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/build.make
Pong_Cpp: /usr/lib/x86_64-linux-gnu/libSDL2.so
Pong_Cpp: CMakeFiles/Pong_Cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kira/Buffer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Pong_Cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pong_Cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pong_Cpp.dir/build: Pong_Cpp
.PHONY : CMakeFiles/Pong_Cpp.dir/build

CMakeFiles/Pong_Cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pong_Cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pong_Cpp.dir/clean

CMakeFiles/Pong_Cpp.dir/depend:
	cd /home/kira/Buffer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kira/Buffer /home/kira/Buffer /home/kira/Buffer/build /home/kira/Buffer/build /home/kira/Buffer/build/CMakeFiles/Pong_Cpp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Pong_Cpp.dir/depend
