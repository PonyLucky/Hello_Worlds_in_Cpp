# 2) Hello World with library
Same from before but instead of having the declaration and definition of the `pause()` function in `hello_world.cpp` we decided to instill a library for it.

## class/pause.h
The `.h` or `.hpp` are files solely used to define the functions of a library before running it. Technically speaking H files are for **C** and HPP for **C++**. Whether you use H or HPP files does not matter for this kind of examples. This is only an example, still you should use HPP when programming in C++ if possible.

So as the comment in the first line describe it, we include a guard. It means that we check if **PAUSE** is defined, if *no* we define the library in the memory. If *yes* it means the library was already defined and that we won't define it a second time.

Normally including more than one time a lib is not important as it only contains static functions. But if the lib contains global variables or anything that should stay in the memory, re-including the lib will overwrite everything. Hence creating bugs.

After the guard we define the namespace of the lib. Defining a namespace is not necessary but of good practice. In the case you have multiple librairies with the same function name they will overshadowing themselves. This will not happen if you pose a namespace proper to the lib.

Then we declare the `pause()` function.

Declaring a function before defining it allows multiple things:
- The compilator can work faster in both checking the source code and the compilation part.
- Initially, to be able to call another function in the lib in all circonstances.
So that if we have a lib with two functions, the first one will be able to call the second one even if the second function is in the end of the file. Normally the compilator would have no way to know that a second function named `s_func()` does exist, thus creating an error. But because both functions were declared beforehand, during the definition of `f_func()` when you call `s_func()` the compilator knows that a function of this name exists.
To be precise in this part because this function name is in the memory, when we call it the computer just have to link it with the place in the RAM where the function is kept. After all when we define the second function we don't change its location in the RAM memory, just its content.

I'll do a real life example for the second point of the previous list. You write a post in a blog, in your post you want to promote your product but you did not have the time to add the page of your product in your personnal website yet. So what you do is creating a blank page of your future product so that you can hyperlink it in your post. And you will fill the page of your product later, hopefully it don't matter because the URL will not change. Your post will know where to redirect your future customers no matter what.

So basically calling a H file instead of directly the CPP one permits stability and flexibility over the order of creation of the functions in your library.

## class/pause.cpp
The script ask for its structure from the header file.

Then following the structure of the header we define the namespace and the function. By the way in the specific case where a library don't have many functions, instead of doing:
```cpp
namespace ps
{
    void pause () { /*...*/ }
}
```
This could be more interesting:
```cpp
void ps::pause() { /*...*/ }
```

## hello_world.cpp
The only differences here are that we include the `pause` library and that we point at the namespace **ps** before calling `pause()`.
