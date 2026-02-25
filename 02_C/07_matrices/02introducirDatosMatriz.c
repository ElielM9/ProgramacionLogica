#include <stdio.h>

int main()
{
    int filas, columnas;
    // Introducir valores a una matriz
    printf("Ingresa el numero de filas: ");
    scanf("%d", &filas);

    printf("\nIngresa el numero de columnas: ");
    scanf("%d", &columnas);

    // Crear la matriz
    int matriz[filas][columnas];

    // Introducir los valores de la matriz
    for (int fil = 0; fil < filas; fil++)
    {
        for (int col = 0; col < columnas; col++)
        {
            printf("\nDato %d | %d: ", fil, col);
            scanf("%d", &matriz[fil][col]);
        }
    }

    // Iterar la matriz para imprimir
    printf("\nImpresion de la matriz");
    for (int fil = 0; fil < filas; fil++)
    {
        printf("\nFila %d", fil);

        for (int col = 0; col < columnas; col++)
        {
            printf("\nMatriz %d | %d: %d", fil, col, matriz[fil][col]);
        }
        printf("\n");
    }

    return 0;
}