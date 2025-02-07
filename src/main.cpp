#include <iostream>
#include <vector>
#include <string>
#include "messages.h"

int main() {
    std::vector<std::string> messages;
    messages.push_back(hello());
    messages.push_back(world());

    for (auto it = messages.begin(); it != messages.end(); ++it) {
        std::cout << *it;
        if (it + 1 != messages.end()) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}