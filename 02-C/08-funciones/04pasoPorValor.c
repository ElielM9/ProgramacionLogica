#include <stdio.h>

void cambiarValor(int parametro)
{
    parametro = 20;
}

int main()
{

    // Ejemplo de paso por valor: Solamente se pasa una copia del valor original. 
    int argumento = 10;
    printf("Valor antes de funcion: %d\n", argumento);
    cambiarValor(argumento);
    printf("Valor despues de funcion: %d\n", argumento);

    return 0;
}