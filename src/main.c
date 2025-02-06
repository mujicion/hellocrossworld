#include <stdio.h>

char* hello() {
    return "Hello";
}

char* world() {
    return "World";
}

int main() {
    char* szHello = hello();
    char* szWorld = world();
    printf("%s %s\n", szHello, szWorld);
}