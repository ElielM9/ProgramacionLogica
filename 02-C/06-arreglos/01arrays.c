// Arrays en C
#include <stdio.h>

int main()
{
    // Declaración de arrays
    int largoArray = 5;
    int numerosArray[largoArray];
    // Modificar los valores del array
    numerosArray[0] = 13;
    numerosArray[1] = 11;
    numerosArray[4] = 3;

    printf("Valor 1: %d", numerosArray[0]);
    printf("\nValor 2: %d", numerosArray[1]);
    printf("\nValor 3: %d", numerosArray[2]);
    printf("\nValor 4: %d", numerosArray[3]);
    printf("\nValor 5: %d", numerosArray[4]);

    // Declaración simplificada de arrays
    int numeros[] = {2, 3, 5, 7, 11};
    printf("\nValor 1 de numeros: %d", numeros[0]);
    printf("\nValor 5 de numeros: %d", numeros[5]); // Valor basura y es invalido

    // Iteracion de arrays
    printf("\nIteracion de arrays");
    for (int i = 0; i < largoArray; i++)
    {
        printf("\nValor %d: %d", i, numerosArray[i]);
    }

    // Calcular el largo de un arreglo
    int tamanioArray = sizeof(numeros); // Peso del array
    printf("\nTamaño del array en bytes: %d ", tamanioArray);

    int tamanioUnElemento = sizeof(numeros[0]); // Tamaño de un elemento
    printf("\nTamaño un elemento: %d ", tamanioUnElemento);

    int longitudArray = tamanioArray / tamanioUnElemento;
    printf("\nLargo del array: %d", longitudArray);

    for (int i = 0; i < longitudArray; i++)
    {
        printf("\nValor %d: %d", i, numeros[i]);
    }

    return 0;
}