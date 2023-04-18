// Operadores relacionales (Comparadores) en C++
#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 20;
    cout << "Valor a: " << a << endl;
    cout << "Valor b: " << b << endl;

    // Igual ==: Es verdadero si dos variables tienen el mismo valor.
    bool c = a == b;
    cout << "a es igual a b? " << c << endl;

    // Diferente !=: Es verdadero si las variables son diferentes.
    c = a != b;
    cout << "a es diferente de b? " << c << endl;

    // Mayor que >: Es verdadero si la variable es mayor que otra.
    c = a > b;
    cout << "a es mayor que b? " << c << endl;

    // Mayor o igual >=: Es verdadero si la variable es mayor o igual que otra.
    c = a >= b;
    cout << "a es mayor o igual que b? " << c << endl;

    // Menor que <: Es verdadero si la variable es menor que otra.
    c = a < b;
    cout << "a es menor que b? " << c << endl;

    // Menor o igual <=: Es verdadero si la variable es menor o igual que otra.
    c = a <= b;
    cout << "a es menor o igual que b? " << c << endl;

    return 0;
}
