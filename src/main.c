#include <stdio.h>

char* hello() {
    return "Hello";
}

char* world() {
    return "World";
}

int main() {
    char* messages[2];
    messages[0] = hello();
    messages[1] = world();

    for (int i = 0; i < 2; i++) {
        printf("%s", messages[i]);
        if (i < 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}