// Tipos de datos básicos en C
#include <stdio.h>
#include <stdbool.h>

/*
int - Entero
float - Real
double - Real más grande
char - Caracter.
bool - Booleano o Lógico.
*/

int main()
{
    // Tipo entero. (formato para imprimir: %d - decimal , %i - integer)
    int entero = 10;
    printf("Tipo entero: %d", entero);

    // Tipo float (formato para imprimir: %f - float)
    float flotante = 10.5;
    printf("\nTipo Float: %.2f", flotante);

    // Tipo double (formato para imprimir: %f, %lf - long double)
    double doble = 10.24;
    printf("\nTipo doble: %.2lf", doble);

    // Tipo caracter (formato para imprimir: %c - char)
    char caracter = 'A';
    printf("\nTipo caracter: %c", caracter);
    printf("\nTipo caracter pero en decimal: %d", caracter);

    // Tipo booleano: 1 - True, 0 - False
    bool booleano = false; // True o False
    printf("\nTipo Booleano: %d", booleano);

    // Tipo cadena (formato para imprimir: %s - string)
    char cadena[] = "Mi cadena";
    printf("\nTipo cadena: %s", cadena);//\0 - null

    char cadena2[20] = "Mi cadena dos";
    printf("\nTipo cadena dos: %s", cadena2);

    return 0;
};
