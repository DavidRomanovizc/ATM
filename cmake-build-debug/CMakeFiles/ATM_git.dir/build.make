# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\ATM_git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\ATM_git\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ATM_git.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ATM_git.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ATM_git.dir/flags.make

CMakeFiles/ATM_git.dir/main.cpp.obj: CMakeFiles/ATM_git.dir/flags.make
CMakeFiles/ATM_git.dir/main.cpp.obj: CMakeFiles/ATM_git.dir/includes_CXX.rsp
CMakeFiles/ATM_git.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\ATM_git\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ATM_git.dir/main.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ATM_git.dir\main.cpp.obj -c D:\Code\ATM_git\main.cpp

CMakeFiles/ATM_git.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATM_git.dir/main.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\ATM_git\main.cpp > CMakeFiles\ATM_git.dir\main.cpp.i

CMakeFiles/ATM_git.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATM_git.dir/main.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\ATM_git\main.cpp -o CMakeFiles\ATM_git.dir\main.cpp.s

CMakeFiles/ATM_git.dir/src/sha256.cpp.obj: CMakeFiles/ATM_git.dir/flags.make
CMakeFiles/ATM_git.dir/src/sha256.cpp.obj: CMakeFiles/ATM_git.dir/includes_CXX.rsp
CMakeFiles/ATM_git.dir/src/sha256.cpp.obj: ../src/sha256.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\ATM_git\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ATM_git.dir/src/sha256.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ATM_git.dir\src\sha256.cpp.obj -c D:\Code\ATM_git\src\sha256.cpp

CMakeFiles/ATM_git.dir/src/sha256.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATM_git.dir/src/sha256.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\ATM_git\src\sha256.cpp > CMakeFiles\ATM_git.dir\src\sha256.cpp.i

CMakeFiles/ATM_git.dir/src/sha256.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATM_git.dir/src/sha256.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\ATM_git\src\sha256.cpp -o CMakeFiles\ATM_git.dir\src\sha256.cpp.s

CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj: CMakeFiles/ATM_git.dir/flags.make
CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj: CMakeFiles/ATM_git.dir/includes_CXX.rsp
CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj: ../src/AccountRecord.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\ATM_git\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ATM_git.dir\src\AccountRecord.cpp.obj -c D:\Code\ATM_git\src\AccountRecord.cpp

CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\ATM_git\src\AccountRecord.cpp > CMakeFiles\ATM_git.dir\src\AccountRecord.cpp.i

CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\ATM_git\src\AccountRecord.cpp -o CMakeFiles\ATM_git.dir\src\AccountRecord.cpp.s

# Object files for target ATM_git
ATM_git_OBJECTS = \
"CMakeFiles/ATM_git.dir/main.cpp.obj" \
"CMakeFiles/ATM_git.dir/src/sha256.cpp.obj" \
"CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj"

# External object files for target ATM_git
ATM_git_EXTERNAL_OBJECTS =

ATM_git.exe: CMakeFiles/ATM_git.dir/main.cpp.obj
ATM_git.exe: CMakeFiles/ATM_git.dir/src/sha256.cpp.obj
ATM_git.exe: CMakeFiles/ATM_git.dir/src/AccountRecord.cpp.obj
ATM_git.exe: CMakeFiles/ATM_git.dir/build.make
ATM_git.exe: CMakeFiles/ATM_git.dir/linklibs.rsp
ATM_git.exe: CMakeFiles/ATM_git.dir/objects1.rsp
ATM_git.exe: CMakeFiles/ATM_git.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\ATM_git\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ATM_git.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ATM_git.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ATM_git.dir/build: ATM_git.exe
.PHONY : CMakeFiles/ATM_git.dir/build

CMakeFiles/ATM_git.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ATM_git.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ATM_git.dir/clean

CMakeFiles/ATM_git.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\ATM_git D:\Code\ATM_git D:\Code\ATM_git\cmake-build-debug D:\Code\ATM_git\cmake-build-debug D:\Code\ATM_git\cmake-build-debug\CMakeFiles\ATM_git.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ATM_git.dir/depend

