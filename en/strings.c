// Strings in C are arrays of characters terminated by a null character (\0).
#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "John Doe"; // Declare and initialize a string

    // Print the string
    printf("Name: %s\n", name);

    // Modify the string
    strcpy(name, "Jane Smith");
    printf("Modified name: %s\n", name);

    // String length
    printf("Length of name: %lu\n", strlen(name));

    return 0;
}