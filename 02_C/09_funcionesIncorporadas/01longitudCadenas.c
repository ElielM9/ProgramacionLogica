#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[] = "Hola";
    printf("%s\n", cadena);

    // Obtener la longitud de la cadena
    printf("Largo de cadena: %ld\n", strlen(cadena));

    // Recorrer la cadena
    for (int i = 0; i < strlen(cadena); i++)
    {
        printf("%c\n", cadena[i]);
    }

    return 0;
}