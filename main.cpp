#include "lib.h"
#include "version.h"
#include <iostream>

int main(int, char**) {
    std::cout << "Hello, World! VersЫion " 
              << VERSION_MAJOR << "." 
              << VERSION_MINOR << "." 
              << VERSION_PATCH 
              << std::endl;
    return 0;
}