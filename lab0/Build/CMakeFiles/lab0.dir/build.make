# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build"

# Include any dependencies generated for this target.
include CMakeFiles/lab0.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab0.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab0.dir/flags.make

CMakeFiles/lab0.dir/src/main.cpp.obj: CMakeFiles/lab0.dir/flags.make
CMakeFiles/lab0.dir/src/main.cpp.obj: C:/Users/Kirill\ Zimaltynov/Desktop/OOP_Projects/lab0/src/main.cpp
CMakeFiles/lab0.dir/src/main.cpp.obj: CMakeFiles/lab0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab0.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab0.dir/src/main.cpp.obj -MF CMakeFiles\lab0.dir\src\main.cpp.obj.d -o CMakeFiles\lab0.dir\src\main.cpp.obj -c "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\main.cpp"

CMakeFiles/lab0.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab0.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\main.cpp" > CMakeFiles\lab0.dir\src\main.cpp.i

CMakeFiles/lab0.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab0.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\main.cpp" -o CMakeFiles\lab0.dir\src\main.cpp.s

CMakeFiles/lab0.dir/src/Reader.cpp.obj: CMakeFiles/lab0.dir/flags.make
CMakeFiles/lab0.dir/src/Reader.cpp.obj: C:/Users/Kirill\ Zimaltynov/Desktop/OOP_Projects/lab0/src/Reader.cpp
CMakeFiles/lab0.dir/src/Reader.cpp.obj: CMakeFiles/lab0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab0.dir/src/Reader.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab0.dir/src/Reader.cpp.obj -MF CMakeFiles\lab0.dir\src\Reader.cpp.obj.d -o CMakeFiles\lab0.dir\src\Reader.cpp.obj -c "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Reader.cpp"

CMakeFiles/lab0.dir/src/Reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab0.dir/src/Reader.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Reader.cpp" > CMakeFiles\lab0.dir\src\Reader.cpp.i

CMakeFiles/lab0.dir/src/Reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab0.dir/src/Reader.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Reader.cpp" -o CMakeFiles\lab0.dir\src\Reader.cpp.s

CMakeFiles/lab0.dir/src/Counter.cpp.obj: CMakeFiles/lab0.dir/flags.make
CMakeFiles/lab0.dir/src/Counter.cpp.obj: C:/Users/Kirill\ Zimaltynov/Desktop/OOP_Projects/lab0/src/Counter.cpp
CMakeFiles/lab0.dir/src/Counter.cpp.obj: CMakeFiles/lab0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab0.dir/src/Counter.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab0.dir/src/Counter.cpp.obj -MF CMakeFiles\lab0.dir\src\Counter.cpp.obj.d -o CMakeFiles\lab0.dir\src\Counter.cpp.obj -c "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Counter.cpp"

CMakeFiles/lab0.dir/src/Counter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab0.dir/src/Counter.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Counter.cpp" > CMakeFiles\lab0.dir\src\Counter.cpp.i

CMakeFiles/lab0.dir/src/Counter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab0.dir/src/Counter.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Counter.cpp" -o CMakeFiles\lab0.dir\src\Counter.cpp.s

CMakeFiles/lab0.dir/src/Writer.cpp.obj: CMakeFiles/lab0.dir/flags.make
CMakeFiles/lab0.dir/src/Writer.cpp.obj: C:/Users/Kirill\ Zimaltynov/Desktop/OOP_Projects/lab0/src/Writer.cpp
CMakeFiles/lab0.dir/src/Writer.cpp.obj: CMakeFiles/lab0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab0.dir/src/Writer.cpp.obj"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab0.dir/src/Writer.cpp.obj -MF CMakeFiles\lab0.dir\src\Writer.cpp.obj.d -o CMakeFiles\lab0.dir\src\Writer.cpp.obj -c "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Writer.cpp"

CMakeFiles/lab0.dir/src/Writer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab0.dir/src/Writer.cpp.i"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Writer.cpp" > CMakeFiles\lab0.dir\src\Writer.cpp.i

CMakeFiles/lab0.dir/src/Writer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab0.dir/src/Writer.cpp.s"
	C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\src\Writer.cpp" -o CMakeFiles\lab0.dir\src\Writer.cpp.s

# Object files for target lab0
lab0_OBJECTS = \
"CMakeFiles/lab0.dir/src/main.cpp.obj" \
"CMakeFiles/lab0.dir/src/Reader.cpp.obj" \
"CMakeFiles/lab0.dir/src/Counter.cpp.obj" \
"CMakeFiles/lab0.dir/src/Writer.cpp.obj"

# External object files for target lab0
lab0_EXTERNAL_OBJECTS =

lab0.exe: CMakeFiles/lab0.dir/src/main.cpp.obj
lab0.exe: CMakeFiles/lab0.dir/src/Reader.cpp.obj
lab0.exe: CMakeFiles/lab0.dir/src/Counter.cpp.obj
lab0.exe: CMakeFiles/lab0.dir/src/Writer.cpp.obj
lab0.exe: CMakeFiles/lab0.dir/build.make
lab0.exe: CMakeFiles/lab0.dir/linkLibs.rsp
lab0.exe: CMakeFiles/lab0.dir/objects1.rsp
lab0.exe: CMakeFiles/lab0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable lab0.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab0.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab0.dir/build: lab0.exe
.PHONY : CMakeFiles/lab0.dir/build

CMakeFiles/lab0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab0.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab0.dir/clean

CMakeFiles/lab0.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0" "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0" "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build" "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build" "C:\Users\Kirill Zimaltynov\Desktop\OOP_Projects\lab0\Build\CMakeFiles\lab0.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/lab0.dir/depend
