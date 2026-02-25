// Alcance de variables en C
#include <stdio.h>

// Variables globales: Las variables globales funcionan en todo el programa y se definen fuera de cualquier método.
int variableGlobal = 5;
int a = 10;

// Definir procedimiento
void cambio(int variableLocalFuncion)
{
    // Cambiar el valor de la variable
    variableLocalFuncion = 25;
    // Variable local: La variable local oculta a la variable global y se le da prioridad hasta que finaliza el método.
    int a = 50;
    int b = 100;
    // Cambio a la variable global:
    variableGlobal = 15;
    // Imprimir variables
    printf("Variabe local (Cambio): %d\n", variableLocalFuncion);
    printf("Variable local a (Cambio): %d\n", a);
    printf("Variable local b (Cambio): %d\n", b);
}

int main()
{
    int variableLocal = 20;

    // Acceder a la variable global
    printf("Variable global a desde Main: %d\n", a);

    // Modificar la variable global
    a = 30;

    // Llamar la funcion de cambio
    cambio(variableLocal);

    // Imprimir las variables
    printf("\nVariable local (Main): %d", variableLocal);
    printf("\nVariable global a (Main): %d", a);
    printf("\nVariable global (Main): %d", variableGlobal);

    return 0;
}