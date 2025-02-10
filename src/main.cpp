#include <iostream>
#include <vector>
#include <string>
#include "messages.h"

int main() {
    debug_log("Entering main()");

    std::vector<std::string> messages;
    messages = {hello(), cross(), world()};

    for (auto it = messages.begin(); it != messages.end(); ++it) {
        std::cout << *it;
        if (it + 1 != messages.end()) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    debug_log("Exiting main()");
    return 0;
}