# 1) Hello World
This one is a casual hello world all in one source file.

## hello_world.cpp
There is a call to include the standard lib `iostream`:
```cpp
#include <iostream>
```

Then we declare a function to prevent the script from closing in mere millisecond and instead waiting for input ENTER before closing:
```cpp
void pause() { /*...*/ }
```

Finally we declare the `main` loop function, display "Hello World!" using **cout** from the namespace **std** (imported from *iostream*). And pauses the script.
