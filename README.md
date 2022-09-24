# Hello Worlds in C++
The goal of this repoo is to provide different ways of writing hello worlds in C++ to showcase the acceptable structures for C++ projects along some tips to gain good practices.

## General Information
Executables files with Windows are `.EXE` and those of Linux are `.` (no extension).

As I am programming on Linux my output files **AND** the comments on how to compile the projects do not have any extension.

So considering some people would want to compile on Windows in every compile commands in the console. The output part is systematically named `hello_world`. Windows users would have to change it to `hello_world.exe`.

## Projects
|Name & Link|Description|
|----------|----------|
|[Hello World](1_hello_world/README.md)|This one is a casual hello world all in one source file.|
|[Hello World with library](2_hello_world_with_library/README.md)|Same from before but instead of having the declaration and definition of the `pause()` function in `hello_world.cpp` we decided to instill a library for it.|
|[Hello World with CMake](3_hello_world_with_cmake/README.md)|In this project the content is the same but we changed the structure to a correct one using CMake.|