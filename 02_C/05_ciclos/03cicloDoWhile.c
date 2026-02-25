// Ciclo Do While en C
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Definir variables
    int numero;
    bool condicion;
    // Do While
    do
    {
        printf("Proporciona un valor positivo: \n");
        scanf("%d", &numero);
        condicion = numero > 0;

    } while (!condicion); // Se repite mientras no sea positivo

    return 0;
}
