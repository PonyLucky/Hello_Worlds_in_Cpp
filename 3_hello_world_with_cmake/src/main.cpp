// compile with:
// g++ -o build/hello_world src/hello_world.cpp src/pause.cpp

#include "../includes/pause.hpp" // imports namespace ps
#include <iostream> // imports namespace std

// main loop
int main() {
    std::cout << "Hello World!\n";
    ps::pause();
    return 0;
}
