// Apuntadores en C: Un apuntador es una variable que apunta a otra variable, almacena su dirección de memoria.
#include <stdio.h>

int main()
{
    int numero = 10;
    printf("Valor de la variable: %d\n", numero);
    //%p - Pointer
    printf("Direccion en memoria de la variable: %p\n", &numero); // Indica que es una direccion de memoria.

    // Definir una variable que sea un apuntador.
    int *apuntador = &numero;
    // Imprimir el valor de la variable apuntador
    printf("Valor de apuntador: %p", apuntador);
    // Obtener el valor de la variable a la que se apunta.
    printf("\nValor almacenado en dir de memoria: %d\n", *apuntador); // Dereference: Obtener el valor de la variable a la que se apunta

    // Modificar el valor de la variable a la que se apunta
    *apuntador = 20;
    printf("Valor modificado \n");
    printf("Valor de la variable: %d\n", numero);
    printf("Valor almacenado en dir de memoria: %d\n", *apuntador);

    return 0;
}