#include "messages.h"
#include <iostream>

void debug_log(const std::string& message) {
    std::cout << message << std::endl;
}

std::string hello() {
    debug_log("Entering hello()");
    return "Hello";
}

std::string world() {
    debug_log("Entering world()");
    return "World";
}