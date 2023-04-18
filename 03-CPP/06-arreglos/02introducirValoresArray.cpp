// Introducir valores a un array en C++
#include <iostream>
using namespace std;

int main()
{
    int largoArray;
    do
    {
        cout << "Ingresa el largo del arreglo: ";
        cin >> largoArray;
    } while (largoArray <= 0);
    cout << "Largo del array: " << largoArray << endl;
    cout << endl;

    // int numeros[largoArray];
    int *numeros = new int[largoArray];

    // Solicitar valores al usuario
    for (int i = 0; i < largoArray; i++)
    {
        cout << "Ingresa el valor " << i << endl;
        cin >> numeros[i];
    }

    // Iterar todos los numeros
    for (int i = 0; i < largoArray; i++)
    {
        cout << "Valor " << i << ": " << numeros[i] << endl;
    }

    return 0;
}