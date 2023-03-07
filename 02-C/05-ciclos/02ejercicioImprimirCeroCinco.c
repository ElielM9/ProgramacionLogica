// Imprimir numero del 0 al 5.
#include <stdio.h>

int main()
{
    // Definir variables
    int contador = 0, max = 5;

    // Ciclo while
    while (contador <= max)
    {
        printf("Numero: %d \n", contador++);
    }

    return 0;
}