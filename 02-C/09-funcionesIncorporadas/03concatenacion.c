#include <stdio.h>
#include <string.h>

int main()
{

    // La cadena destino debe ser suficientemente grande para soportar el resultado de la concatenacion
    char destino[11] = "Hola ";
    char origen[] = "Mundo";

    // Concatenar cadenas
    // char *strcat(char *destino, const char *origen);
    strcat(destino, origen);
    printf("Concatenacion: %s\n", destino);

    return 0;
}