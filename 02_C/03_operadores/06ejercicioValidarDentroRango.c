#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Definicion de variables.
    int min = 0;
    int max = 5;
    int valor;
    bool dentroRango;

    // Pedir valor al usuario.
    printf("Ingresa un valor entre 0 - 5: \n");
    scanf("%d", &valor);

    // Comprobar si el valor está dentro de rango.
    dentroRango = valor >= min && valor <= max;
    printf("\n¿El valor está dentro de rango?: %d", dentroRango);
}