// compile with:
// g++ -o hello_world hello_world.cpp class/pause.cpp

#include <iostream> // imports namespace std
#include "class/pause.h" // imports namespace ps

// main loop
int main() {
    std::cout << "Hello World!\n";
    ps::pause();
    return 0;
}
