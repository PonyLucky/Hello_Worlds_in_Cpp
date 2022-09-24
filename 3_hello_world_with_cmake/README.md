# Hello World with CMake
In this project the content is the same but we changed the structure to a correct one using CMake.

## CMake ?
CMake makes it easier to compile C and C++ projects. Basically CMake forms in your stead the command line to compile using g++. In addition, CMake allows flexibility in the structure of the project and using CMake is considered a good practice.

The book *Modern CMake* of 2017 is a must-have, this project is simple example of old CMake good practices.

## Structure
- `build/` directory for the output (like executables).
- `includes/` directory for the header files (**H** and **HPP** files).
- `src/` directory for the source files (**CPP** files).
- `CMakeLists.txt` file to configure CMake.

### build
In this directory we have the CMake data files and the executable `hello_world`.

### includes
This directory contains the header files useed to declare the functions of each classes.

### src
The `src` directory include the source code files. So the `main.cpp` and the **CPP** file of each classes.

### CMakeLists.txt
About this one just read the comments. 
