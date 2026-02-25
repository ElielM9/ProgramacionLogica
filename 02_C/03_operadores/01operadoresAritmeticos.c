// Operadores Aritmeticos en C
#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c, e, f;
    float d;

    // Suma: +
    a = 3 + 4;
    printf("\nSuma es: %d", a);

    // Resta: -
    b = 6 - 2;
    printf("\nResta es: %d", b);

    // Multiplicación: *
    c = a * 2;
    printf("\nProducto: %d", c);

    // Division: /
    d = b / 2;
    printf("\nCociente: %f", d);

    // Módulo (Residuo de la division): %
    e = 9 / 3;
    printf("\nResiduo: %d", e);

    // Potencia: pow(valor, valor)
    f = pow(7, 2);
    printf("\nPotencia: %d", f);


    return 0; 
}