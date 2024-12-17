#include <stdio.h>

int main() {
    int num = 42;              // Normal integer variable
    int *ptr;                  // Pointer to an integer

    ptr = &num;                // Assign the address of 'num' to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 100;
    printf("New value of num: %d\n", num);

    return 0;
}
