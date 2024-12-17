
#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "John Doe";

    printf("Name: %s\n", name);

    strcpy(name, "Jane Smith");
    printf("Modified Name: %s\n", name);

    printf("Length of Name: %lu\n", strlen(name));

    return 0;
}
