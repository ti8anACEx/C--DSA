#include <iostream>

__declspec(dllexport) void moo() {
    std::cout<< "moo" << std::endl;
}