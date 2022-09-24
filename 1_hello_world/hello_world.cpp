// compile with:
// g++ -o hello_world hello_world.cpp

#include <iostream> // imports namespace std

// Pause and wait for ENTER
void pause() {
    std::cout << "\nPress ENTER to continue...";
    std::getchar();
    return;
}

// main loop
int main() {
    std::cout << "Hello World!\n";
    pause();
    return 0;
}
