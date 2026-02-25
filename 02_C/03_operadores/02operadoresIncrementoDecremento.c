// Operadores de incremento y decremento en C
#include <stdio.h>

int main()
{
    int a, b, c;

    // Incremento (++): Incrementa la variable en 1.
    a = 0;
    // Post incremento: Se incrementa la proxima vez que se use la variable.
    a++;
    printf("Nuevo valor: %d", a);
    // Pre Incremento: Se incrementa la variable de inmediato.
    ++a;
    printf("\nNuevo valor: %d", a);

    a = 5;
    b = 2;
    c = ++a * b++;
    printf("\nValor de c: %d", c);
    printf("\nValor de a: %d", a); // No tiene pendiente ningun incremento.
    printf("\nValor de b: %d", b); // Tenia pendiente un incremento.

    // Decremento (--): Decrementa la variable en 1.
    a = 5;
    b = 2;
    // Pre decremento: Se decrementa la variable de inmediato.
    // Post decremento: Se decrementa la proxima vez que se utiliza la variable.

    c = --a * b--;
    printf("\nValor de c: %d", c);
    printf("\nValor de a: %d", a); 
    printf("\nValor de b: %d", b);


    return 0; 
}
