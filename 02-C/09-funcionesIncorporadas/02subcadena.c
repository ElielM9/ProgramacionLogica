#include <stdio.h>
#include <string.h>

int main()
{
    // Obtener subcadena
    char cadena[] = "Hola a todos";
    char subcadena[10];

    // Se copia a partir del caracter indicado de inicio e indicamos cuantos caracteres se copian.
    int inicio = 0, nCaraceres = 4;

    strncpy(subcadena, &cadena[inicio], nCaraceres);
    subcadena[nCaraceres];

    printf("Cadena original: %s\n", cadena);
    printf("Subcadena: %s\n", subcadena);

    return 0;
}