#include <iostream>
using namespace std;

int main()
{

    // Definir variables
    int filas, columnas;

    // Pedir al usuario los tamaños
    cout << "Ingresa un numero de filas: " << endl;
    cin >> filas;

    cout << "Ingresa un numero de columnas: " << endl;
    cin >> columnas;

    // Crear la matriz de manera dinamica
    int **matriz = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }

    // Solicitar valores al usuario
    for (int fil = 0; fil < filas; fil++)
    {

        for (int col = 0; col < columnas; col++)
        {
            cout << "Dato " << fil << " | " << col << ": ";
            cin >> matriz[fil][col];
        }
    }

    // Iteracion de la matriz
    cout << "Iteracion de matrices" << endl;

    for (int fil = 0; fil < filas; fil++)
    {
        cout << "Fila pivote " << fil << endl;
        for (int col = 0; col < columnas; col++)
        {
            cout << "Matriz " << fil << " | " << col << ": " << matriz[fil][col] << endl;
            ;
        }
        cout << endl;
    }

    // Eliminamos la memoria solicitada
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}