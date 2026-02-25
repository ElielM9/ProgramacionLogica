#include <iostream>
using namespace std;

int main()
{

    int min = 0;
    int max = 5;
    int valor;
    bool dentroRango;

    // Pedir valores al usuario
    cout << "Introduce un valor entre 0 - 5 " << endl;
    cin >> valor;

    // Validar si el dato está dentro del rango
    dentroRango = valor > min && valor <= max;
    cout << "Valor dentro de rango? " << dentroRango << endl;

    return 0;
}