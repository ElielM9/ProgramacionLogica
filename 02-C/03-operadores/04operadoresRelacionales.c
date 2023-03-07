// Operadores relacionales (comparacion) en C
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5;
    int b = 6;

    printf("Valor de a: %d", a);
    printf("\nValor de b: %d", b);

    // Igual ==: Es verdadero si dos variables tienen el mismo valor.
    bool c = a == b;
    printf("\n¿a es igual a b?: %d", c);

    // Diferente !=: Es verdadero si las variables son diferentes.
    c = a != b;
    printf("\n¿a es diferente de b?: %d", c);

    // Mayor que >: Es verdadero si la variable es mayor que otra.
    c = a > b;
    printf("\n¿a es mayor que b?: %d", c);

    // Mayor o igual >=: Es verdadero si la variable es mayor o igual que otra.
    c = a >= b;
    printf("\n¿a es mayor o igual a b?: %d", c);

    // Menor que <: Es verdadero si la variable es menor que otra.
    c = a < b;
    printf("\n¿a es menor a b?: %d", c);

    // Menor o igual <=: Es verdadero si la variable es menor o igual que otra.
    c = a <= b;
    printf("\n¿a es menor o igual a b?: %d", c);

    return 0;
}