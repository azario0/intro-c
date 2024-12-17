// Functions are reusable blocks of code that perform specific tasks. They help in modularizing the program.

#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int x = 10, y = 20;

    // Call the function
    int result = add(x, y);

    printf("Sum of %d and %d is %d\n", x, y, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}