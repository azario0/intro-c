
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    numbers[2] = 35;
    printf("Element 2 modified: %d\n", numbers[2]);

    return 0;
}
