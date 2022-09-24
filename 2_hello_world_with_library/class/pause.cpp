#include "pause.h"
#include <iostream>

namespace ps
{
    // Pause and wait for ENTER
    void pause() {
        std::cout << "\nPress ENTER to continue...";
        std::getchar();
        return;
    }
} // namespace ps
