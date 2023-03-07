#include <stdio.h>

void cambiarValor(int parametro[])
{
    // Cambia los valores del array desde la funcion.
    parametro[0] = 4;
    parametro[1] = 5;
    parametro[2] = 6;
}

char *cambiarValorChar(char *parametro)
{
    parametro = "Adios";

    return parametro;
}

int main()
{
    // Ejemplo de paso por referencia: Los arrays y matrices siempre se pasan por referencia.
    int arg[] = {1, 2, 3};

    printf("Valor antes de funcion: %d %d %d\n", arg[0], arg[1], arg[2]);
    cambiarValor(arg);
    printf("Valor despues de funcion: %d %d %d\n", arg[0], arg[1], arg[2]);

    // Paso por referencia con cadenas
    // char arg2[] = "Hola a todos";
    char *arg2 = "Hola a todos";
    printf("\nValor antes de funcion: %s\n", arg2);
    arg2 = cambiarValorChar(arg2);
    printf("Valor despued de funcion: %s", arg2);

    return 0;
}