// Matrices en C++
#include <iostream>
using namespace std;

int main()
{

    // Definir constantes
    const int FILAS = 2;
    const int COLUMNAS = 3;

    // Definir matriz
    int matriz[FILAS][COLUMNAS];

    // Introducir valores en la matriz manualmente
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    // Imprimir valores de la matriz
    cout << "Valor 1: " << matriz[0][0] << endl;
    cout << "Valor 6: " << matriz[1][2] << endl;

    // Declaracion simplificada de matrices
    // int matriz2[FILAS][COLUMNAS] = {100, 200, 300, 400, 500, 600}; // No se suele utilizar porque es dificil de leer
    int matriz2[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << "Valor 1: " << matriz2[0][0] << endl;
    cout << "Valor 6: " << matriz2[1][2] << endl;

    // Iteracion de matrices
    cout << "Iteracion de matrices" << endl;

    for (int fil = 0; fil < FILAS; fil++)
    {
        cout << "Fila pivote " << fil << endl;
        for (int col = 0; col < COLUMNAS; col++)
        {
            cout << "Matriz " << fil << " | " << col << ": " << matriz2[fil][col] << endl;; 
        }
        cout << endl; 
    }

    return 0;
}