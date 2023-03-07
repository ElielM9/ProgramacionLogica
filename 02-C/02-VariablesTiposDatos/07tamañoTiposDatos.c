#include <stdio.h>
#include <stdbool.h>

int main()
{
    // sizeof para saber el tamaño de cada tipo de dato.
    int entero;
    float flotante;
    double doble;
    char caracter;
    char cadena[] = "Hola mundo";
    bool booleano = true;

    // Imprimir el tamaño de cada variable
    //%lu - long unsigned
    printf("Tamaño de Int en Bytes: %lu", sizeof(entero));
    printf("\nTamaño de Float en Bytes: %lu", sizeof(flotante));
    printf("\nTamaño de Double en Bytes: %lu", sizeof(doble));
    printf("\nTamaño de Char en Bytes: %lu", sizeof(caracter));
    printf("\nTamaño de Cadena en Bytes: %lu", sizeof(cadena));
    printf("\nTamaño de Booleano en Bytes: %lu", sizeof(booleano));


    return 0;
}