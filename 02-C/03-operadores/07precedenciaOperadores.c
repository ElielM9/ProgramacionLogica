// Precedencia de operadores en C
#include <stdio.h>

int main()
{
    // Prioridad de ejecucion de los operadores.
    // 1- Parontesis y corchetes.
    // 2- Operadores unarios (-, --, ++, !)
    // 3- Aritmeticos (*, / y %).
    // 4- Aritmeticos (+ y -).
    // 5- Operadores relacionales (<, <=, >, >=)
    // 6- Operadores de igualdad (== y !=).
    // 7- Operadores logicos (&& y ||).
    // Operadores de asignacion (=, +=, -=, etc).

    // Las expresiones se revisan de izquierda a derecha.
    int a = 12 / 3 + 2 * 3 - 1;
    // 1- Division - 12 / 3 = 4
    // 2- Multiplicacion - 2 * 3 = 6
    // 3- Suma - 4 + 6 = 10
    // 4- Resta - 10 - 1 = 9
    printf("Valor de a: %d", a);



    
}