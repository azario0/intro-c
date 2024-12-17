// Arrays are used to store multiple values of the same type in contiguous memory locations.
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array

    // Access and print array elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Modify an element
    numbers[2] = 35;
    printf("Modified element 2: %d\n", numbers[2]);

    return 0;
}