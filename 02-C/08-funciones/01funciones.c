// Funciones en C
#include <stdio.h>

// Definir funcion (Procedimiento porque no regresa ningpun valor) saludar.
void saludar(char mensaje[])
{
    printf("%s\n", mensaje);
}

int main()
{
    char argMensaje[50];
    printf("Escribe un mensaje: ");
    scanf("%[^'\n']s", argMensaje);

    saludar(argMensaje);
    saludar(argMensaje);

    return 0;
}
