// Operadores de asignación en C
#include <stdio.h>

int main()
{
    // Operadores de asignación.
    // Igual =: Para asignar un valor.
    int numero = 10;
    printf("Valor asignado: %d", numero);

    numero = 20; // Se le asigna un nuevo valor
    printf("\nNuevo valor>: %d", numero);

    // Operadores de asignación compuestos.
    // Mas igual +=: Suma un valor indicado a la variable.
    numero += 5; // numero = numero + 5
    printf("\nNuevo valor: %d", numero);

    // Menos igual -=: Resta un valor indicado a la variable.
    numero -= 3; // numero = numero - 3
    printf("\nNuevo valor: %d", numero);

    // Multiplicacion igual *=: Multiplica por un valor indicado a la variable.
    numero *= 2; // numero = numero * 2
    printf("\nNuevo valor: %d", numero);

    // Division igual /=: Divide entre un valor indicado a la variable.
    numero /= 2; // numero = numero / 2
    printf("\nNuevo valor: %d", numero);

    // Módulo (Residuo) igual %=: Da el residuo de dividir entre un valor indicado a la variable
    numero %= 2; // numero = numero % 2
    printf("\nNuevo valor: %d", numero);


    return 0; 
}