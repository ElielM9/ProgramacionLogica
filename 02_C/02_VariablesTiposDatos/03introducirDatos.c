// Inteoducir datos en C
#include <stdio.h>

int main()
{
    // Declarar una variable
    int numero = 0;
    printf("Imprimir variable: %d", numero);
    // Direccion de memoria de una variable.
    printf("\nDireccion de memoria: %p", &numero);

    // Solicita al usuario que introduzca un valor
    printf("\nIntroduce un numero: \n");
    // Leer la información del usuario.}
    scanf("%d", &numero);
    // Imprimir la información del usuario.
    printf("\nNumero proporcionado: %d", numero);
    printf("\nDireccion de memoria: %p", &numero);

   

    return 0;
};