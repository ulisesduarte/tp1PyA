#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, diagonal, superficie, perimetro;

    // El usuario ingresa los datos desde la consola
    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);

    // Declaramos las variables y le guaramos los valores primero en base y altura
    diagonal = sqrt((base * base) + (altura * altura));
    superficie = base * altura;
    perimetro = 2 * (base + altura);

    // Imprimimos en consola los resultados obteniendo números solo con dos decimales
    printf("\nResultados:\n");
    printf("Diagonal principal: %.2f\n", diagonal);
    printf("Superficie: %.2f\n", superficie);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
