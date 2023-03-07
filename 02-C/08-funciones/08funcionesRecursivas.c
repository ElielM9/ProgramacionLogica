// Funciones recursivas en C:
// Son funciones que se llaman a sí mismas y, cada vez que se mandan a llamar tiene que acercarse a un caso base
#include <stdio.h>

// Declaracion de la funcion
void funcionRecursiva(int numero);

int main()
{
    // Imprimir del 1 - 5 de manera recursiva
    int valor = 5;
    funcionRecursiva(valor);

    return 0;
}

// Implementacion de la funcion recursiva
void funcionRecursiva(int numero)
{
    // Caso base
    if (numero == 1)
    {
        printf("Valor recursivo: %d\n", numero);
    }
    else
    { // Caso recursivo
        funcionRecursiva(numero - 1);
        printf("Valor: %d\n", numero);
    }
}