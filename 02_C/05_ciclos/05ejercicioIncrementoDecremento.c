#include <stdio.h>

int main()
{
    // Imprimir los primeros numeros de 3 en 3.
    int max = 10, min = -10;
    printf("Incrementos de 3 en 3 \n");

    for (int numero = 1; numero <= max; numero += 3) //numero = numero + 3
    {
        printf("Numero: %d\n", numero);
    }

    printf("\nDecrementos de 3 en 3 \n");
    for (int numero = 1; numero >= min; numero -= 3) //Numero = numero - 3.
    {
        printf("Numero: %d \n", numero);
    }

    return 0;
}