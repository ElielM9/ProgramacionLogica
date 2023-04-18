// Arreglos en C++
#include <iostream>
using namespace std;

int main()
{
    // Declaración de arrays
    int numerosArray[5];
    numerosArray[0] = 13;
    numerosArray[1] = 21;
    numerosArray[4] = 62;

    cout << "Valor 1: " << numerosArray[0] << endl;
    cout << "Valor 2: " << numerosArray[1] << endl;
    cout << "Valor 3: " << numerosArray[3] << endl;

    // Declaracion simplificada de arrays.
    int numeros[] = {2, 3, 5, 7};
    cout << "Valor 1 de numeros: " << numeros[0] << endl;
    cout << "Valor 2 de numeros: " << numeros[1] << endl;
    cout << "Valor 5 de numeros: " << numeros[4] << endl; // Valor basura, no es valido
    cout << endl;

    // Iteracion de arrays
    
    // Calcular el largo de un array
    int largoArray = sizeof(numeros) / sizeof(numeros[0]);
    cout << "Largo del array: " << largoArray << endl;

    cout << "Iteracion de arrays" << endl;
    for (int i = 0; i < largoArray; i++)
    {
        cout << "Valor " << i << ": " << numeros[i] << endl;
    }

  




    return 0;
}