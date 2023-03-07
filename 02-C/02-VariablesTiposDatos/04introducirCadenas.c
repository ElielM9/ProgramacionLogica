// Introducir cadenas en C
#include <stdio.h>

int main()
{
    int tamanio = 30;
    char nombre[tamanio];

    // Indicarle al usuario que proporcione el valor
    printf("Proporciona tu nonbre: \n");
    // Leer la información del usuario
    // scanf("%s", nombre);
    // Escanear datos con espacios.
    // scanf("%[^'\n']s", nombre);
    fgets(nombre, tamanio, stdin);
    // gets(nombre);

    // Imprimir la informacion del usuario
    printf("\nTu nombre es: %s", nombre);

    return 0;
}