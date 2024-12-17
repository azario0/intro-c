// Pointers are variables that store the memory address of another variable. They are a powerful feature of C and are widely used for dynamic memory allocation, passing arguments to functions, and more.
#include <stdio.h>

int main() {
    int num = 42;              // A normal integer variable
    int *ptr;                  // A pointer to an integer

    ptr = &num;                // Assign the address of 'num' to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Modify the value using the pointer
    *ptr = 100;
    printf("New value of num: %d\n", num);

    return 0;
}