// Ciclo While en C
#include <stdio.h>

int main()
{
    // Definir variables.
    int contador = 0, repeticiones = 5;

    // Definir ciclo while
    while (contador <= repeticiones)
    {
        printf("Buenos dias %d \n", contador);
        contador++;
    }

    return 0;
}