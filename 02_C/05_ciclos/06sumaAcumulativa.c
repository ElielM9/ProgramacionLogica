#include <stdio.h>

int main()
{
    int min = 0, max = 5, acumulador = 0;

    // Ciclo For
    printf("Suma ciclo for \n");
    for (int numero = 1; numero <= max; numero++)
    {
        // Imprimir la suma
        printf("\nSuma: %d + %d", numero, acumulador);
        acumulador += numero;
        // Imprimir la suma parcial acumulada
        printf("\nSuma parcial: %d", acumulador);
    }
    printf("\nLa suma de los primeros 5 numeros es: %d", acumulador);

    // Ciclo while
    printf("\nSuma ciclo while \n");
    int numero = 1;
    while (numero <= max)
    {
        printf("\nSuma: %d + %d", numero, acumulador);
        acumulador += numero;
        // Imprimir la suma parcial acumulada
        printf("\nSuma parcial: %d", acumulador);

        numero++;
    }

    // Ciclo do while
    printf("\nSuma ciclo do while \n");
    do
    {
        printf("\nSuma: %d + %d", numero, acumulador);
        acumulador += numero;
        // Imprimir la suma parcial acumulada
        printf("\nSuma parcial: %d", acumulador);

        numero++;

    } while (numero <= max);

    return 0;
}