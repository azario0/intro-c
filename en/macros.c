// Macros are used to define constants or small pieces of code that can be reused throughout the program. 
// They are defined using the #define preprocessor directive.

#include <stdio.h>

// Define a constant using #define
#define PI 3.14159

// Define a macro to calculate the square of a number
#define SQUARE(x) ((x) * (x))

int main() {
    float radius = 5.0;

    // Use the PI macro
    float area = PI * SQUARE(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}