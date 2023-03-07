// Matrices en C
#include <stdio.h>

// Definir constantes para el tamaño de la matrizz
#define FILAS 2
#define COLUMNAS 3

int main()
{

    // Definir la matriz
    int matriz[FILAS][COLUMNAS];

    // Llenar una matriz
    matriz[0][0] = 100;
    matriz[0][1] = 200;
    matriz[0][2] = 300;

    matriz[1][0] = 400;
    matriz[1][1] = 500;
    matriz[1][2] = 600;

    // Acceder a los valores
    // printf("Valor 1: %d", matriz[0][0]);
    // printf("\nValor 6: %d", matriz[1][2]);

    // Declarar matrices de manera simplificada
    int matriz2[FILAS][COLUMNAS] = {100, 200, 300, 400, 500, 600};
    printf("\nValor 1: %d", matriz2[0][0]);

    // Otra sintaxis simple
    int matriz3[FILAS][COLUMNAS] = {
        {100, 200, 300},
        {400, 500, 600}};
    printf("\nValor 1: %d", matriz3[0][0]);

    // Iteracion de matrices
    printf("\nIteracion de matrices");
    for (int fil = 0; fil < FILAS; fil++)
    {
        printf("\nFila pivote: %d", fil);

        for (int col = 0; col < COLUMNAS; col++)
        {
            printf("\nMatriz %d | %d: %d", fil, col, matriz[fil][col]);
        }

        printf("\n");
    }


    return 0;
}