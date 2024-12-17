// C supports various data types, including primitive types (e.g., int, float, char) and derived types (e.g., arrays, pointers).

#include <stdio.h>

int main() {
    // Primitive data types
    int age = 25;               // Integer
    float height = 5.9;         // Floating-point number
    char grade = 'A';           // Single character
    double pi = 3.1415926535;   // Double precision floating-point

    // Print the values
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("Pi: %.10f\n", pi);

    return 0;
}