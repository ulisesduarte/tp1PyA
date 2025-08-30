#include <stdio.h>

int main() {
    int num1, num2;
    int suma, producto, resta;
    char opcion;

    do {
        // Ingresamos los valores que el usuario quiere operar
        printf("\nIngrese el primer valor: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo valor: ");
        scanf("%d", &num2);

        // Calcular suma, producto y resta
        suma = num1 + num2;
        producto = num1 * num2;
        resta = num1 - num2;

        // Imprimimos en consola las operaciones
        printf("\nResultados:\n");
        printf("La suma es: %d\n", suma);
        printf("El producto es: %d\n", producto);
        printf("La resta (primer valor menos segundo) es: %d\n", resta);

        // Le preguntamos al usuario si quiere seguir realizando operaciones
        printf("\n¿Desea realizar otra operacion? (s/n): ");
        scanf(" %c", &opcion);

    } while(opcion == 's' || opcion == 'S');//quiere decir que si pone s en mayuscula o minuscula sigue el ciclo para evitar errores de tipeo del usuario

    printf("\nPrograma finalizado.\n");

    return 0;
}
