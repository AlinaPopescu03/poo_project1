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
CMAKE_COMMAND = "C:\Users\Alina\AppData\Local\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Alina\AppData\Local\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Alina\Desktop\poo v2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Alina\Desktop\poo v2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/poo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/poo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/poo.dir/flags.make

CMakeFiles/poo.dir/main.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/poo.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\main.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\main.cpp"

CMakeFiles/poo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\main.cpp" > CMakeFiles\poo.dir\main.cpp.i

CMakeFiles/poo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\main.cpp" -o CMakeFiles\poo.dir\main.cpp.s

CMakeFiles/poo.dir/sources/factura.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/factura.cpp.obj: ../sources/factura.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/poo.dir/sources/factura.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\factura.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\factura.cpp"

CMakeFiles/poo.dir/sources/factura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/factura.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\factura.cpp" > CMakeFiles\poo.dir\sources\factura.cpp.i

CMakeFiles/poo.dir/sources/factura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/factura.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\factura.cpp" -o CMakeFiles\poo.dir\sources\factura.cpp.s

CMakeFiles/poo.dir/sources/abonament.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/abonament.cpp.obj: ../sources/abonament.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/poo.dir/sources/abonament.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\abonament.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\abonament.cpp"

CMakeFiles/poo.dir/sources/abonament.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/abonament.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\abonament.cpp" > CMakeFiles\poo.dir\sources\abonament.cpp.i

CMakeFiles/poo.dir/sources/abonament.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/abonament.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\abonament.cpp" -o CMakeFiles\poo.dir\sources\abonament.cpp.s

CMakeFiles/poo.dir/sources/client.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/client.cpp.obj: ../sources/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/poo.dir/sources/client.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\client.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\client.cpp"

CMakeFiles/poo.dir/sources/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/client.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\client.cpp" > CMakeFiles\poo.dir\sources\client.cpp.i

CMakeFiles/poo.dir/sources/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/client.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\client.cpp" -o CMakeFiles\poo.dir\sources\client.cpp.s

CMakeFiles/poo.dir/sources/Printare.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/Printare.cpp.obj: ../sources/Printare.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/poo.dir/sources/Printare.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\Printare.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\Printare.cpp"

CMakeFiles/poo.dir/sources/Printare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/Printare.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\Printare.cpp" > CMakeFiles\poo.dir\sources\Printare.cpp.i

CMakeFiles/poo.dir/sources/Printare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/Printare.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\Printare.cpp" -o CMakeFiles\poo.dir\sources\Printare.cpp.s

CMakeFiles/poo.dir/Citire.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/Citire.cpp.obj: ../Citire.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/poo.dir/Citire.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\Citire.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\Citire.cpp"

CMakeFiles/poo.dir/Citire.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/Citire.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\Citire.cpp" > CMakeFiles\poo.dir\Citire.cpp.i

CMakeFiles/poo.dir/Citire.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/Citire.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\Citire.cpp" -o CMakeFiles\poo.dir\Citire.cpp.s

CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.obj: ../sources/Abonament_Premiu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\Abonament_Premiu.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\Abonament_Premiu.cpp"

CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\Abonament_Premiu.cpp" > CMakeFiles\poo.dir\sources\Abonament_Premiu.cpp.i

CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\Abonament_Premiu.cpp" -o CMakeFiles\poo.dir\sources\Abonament_Premiu.cpp.s

CMakeFiles/poo.dir/sources/abonament_angajati.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/abonament_angajati.cpp.obj: ../sources/abonament_angajati.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/poo.dir/sources/abonament_angajati.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\abonament_angajati.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\abonament_angajati.cpp"

CMakeFiles/poo.dir/sources/abonament_angajati.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/abonament_angajati.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\abonament_angajati.cpp" > CMakeFiles\poo.dir\sources\abonament_angajati.cpp.i

CMakeFiles/poo.dir/sources/abonament_angajati.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/abonament_angajati.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\abonament_angajati.cpp" -o CMakeFiles\poo.dir\sources\abonament_angajati.cpp.s

CMakeFiles/poo.dir/sources/factura_angajati.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/factura_angajati.cpp.obj: ../sources/factura_angajati.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/poo.dir/sources/factura_angajati.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\factura_angajati.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\factura_angajati.cpp"

CMakeFiles/poo.dir/sources/factura_angajati.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/factura_angajati.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\factura_angajati.cpp" > CMakeFiles\poo.dir\sources\factura_angajati.cpp.i

CMakeFiles/poo.dir/sources/factura_angajati.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/factura_angajati.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\factura_angajati.cpp" -o CMakeFiles\poo.dir\sources\factura_angajati.cpp.s

CMakeFiles/poo.dir/sources/eroare_date.cpp.obj: CMakeFiles/poo.dir/flags.make
CMakeFiles/poo.dir/sources/eroare_date.cpp.obj: ../sources/eroare_date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/poo.dir/sources/eroare_date.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\poo.dir\sources\eroare_date.cpp.obj -c "C:\Users\Alina\Desktop\poo v2\sources\eroare_date.cpp"

CMakeFiles/poo.dir/sources/eroare_date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poo.dir/sources/eroare_date.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Alina\Desktop\poo v2\sources\eroare_date.cpp" > CMakeFiles\poo.dir\sources\eroare_date.cpp.i

CMakeFiles/poo.dir/sources/eroare_date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poo.dir/sources/eroare_date.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Alina\Desktop\poo v2\sources\eroare_date.cpp" -o CMakeFiles\poo.dir\sources\eroare_date.cpp.s

# Object files for target poo
poo_OBJECTS = \
"CMakeFiles/poo.dir/main.cpp.obj" \
"CMakeFiles/poo.dir/sources/factura.cpp.obj" \
"CMakeFiles/poo.dir/sources/abonament.cpp.obj" \
"CMakeFiles/poo.dir/sources/client.cpp.obj" \
"CMakeFiles/poo.dir/sources/Printare.cpp.obj" \
"CMakeFiles/poo.dir/Citire.cpp.obj" \
"CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.obj" \
"CMakeFiles/poo.dir/sources/abonament_angajati.cpp.obj" \
"CMakeFiles/poo.dir/sources/factura_angajati.cpp.obj" \
"CMakeFiles/poo.dir/sources/eroare_date.cpp.obj"

# External object files for target poo
poo_EXTERNAL_OBJECTS =

poo.exe: CMakeFiles/poo.dir/main.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/factura.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/abonament.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/client.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/Printare.cpp.obj
poo.exe: CMakeFiles/poo.dir/Citire.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/Abonament_Premiu.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/abonament_angajati.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/factura_angajati.cpp.obj
poo.exe: CMakeFiles/poo.dir/sources/eroare_date.cpp.obj
poo.exe: CMakeFiles/poo.dir/build.make
poo.exe: CMakeFiles/poo.dir/linklibs.rsp
poo.exe: CMakeFiles/poo.dir/objects1.rsp
poo.exe: CMakeFiles/poo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable poo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\poo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/poo.dir/build: poo.exe
.PHONY : CMakeFiles/poo.dir/build

CMakeFiles/poo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\poo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/poo.dir/clean

CMakeFiles/poo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Alina\Desktop\poo v2" "C:\Users\Alina\Desktop\poo v2" "C:\Users\Alina\Desktop\poo v2\cmake-build-debug" "C:\Users\Alina\Desktop\poo v2\cmake-build-debug" "C:\Users\Alina\Desktop\poo v2\cmake-build-debug\CMakeFiles\poo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/poo.dir/depend
