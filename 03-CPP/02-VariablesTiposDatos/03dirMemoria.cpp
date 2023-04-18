// Direccion de memoria en C++
#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    // Imprimir el valor de la variable
    cout << "Valor de numero: " << numero << endl;
    // Imprimir la direccion de memoria
    cout << "Direccion de memoria: " << &numero << endl; 

    return 0;
}