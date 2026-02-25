// Operadores logicos en C
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    bool b = false;
    printf("Valor de a: %d", a);
    printf("Valor de b: %d", b);

    // Operador AND (&&): Verdadero si ambos son verdaderos.
    bool c = a && b;
    printf("\na y b son verdaderos?: %d", c);

    // Operador OR (||): Verdadero si cualquiera es verdadero.
    c = a || b;
    printf("\na o b son verdaderos?: %d", c);

    // Operador NOT (!): Invierte el valor original.
    c = !a;
    printf("\na es verdadero?: %d", c);


    return 0;
}