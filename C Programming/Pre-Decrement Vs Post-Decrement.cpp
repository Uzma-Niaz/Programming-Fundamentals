#include <stdio.h>

int main() {
    int x = 5;

    // Post-decrement: use x first, then decrement
    printf("x--: %d\n", x--);
    printf("Now x: %d\n", x);

    // Pre-decrement: decrement first, then use x
    printf("--x: %d\n", --x);

    return 0;
}

