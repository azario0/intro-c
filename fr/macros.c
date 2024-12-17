// Les macros sont utilisées pour définir des constantes ou des petits morceaux de code qui peuvent être réutilisés tout au long du programme. Elles sont définies en utilisant la directive préprocesseur #define.


#include <stdio.h>

// Définir une constante en utilisant #define
#define PI 3.14159

// Définir une macro pour calculer le carré d'un nombre
#define SQUARE(x) ((x) * (x))

int main() {
    float radius = 5.0;

    // Utiliser la macro PI
    float area = PI * SQUARE(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}