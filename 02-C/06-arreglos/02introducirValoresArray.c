// Introducir valores a un array e C
#include <stdio.h>

int main()
{
    int numeroElementos;

    // Solicitar cantidad de elementos del array.
    do
    {
        printf("Introduce el tamaño del array: ");
        scanf("%d", &numeroElementos);
    } while (numeroElementos <= 0);

    // Crear el arreglo
    int numeros[numeroElementos];

    // Solicitar valores al usuario.
    for (int i = 0; i < numeroElementos; i++)
    {
        printf("\nIntroduce el valor %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Mostrar cada elemento del array
    for (int i = 0; i < numeroElementos; i++)
        printf("\nValor %d: %d", i, numeros[i]);



    return 0;
}