// Operadores aritmeticos en C++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, e, f;
    float d;

    // Suma
    a = 3 + 4;
    cout << "Suma: " << a << endl;

    // Resta
    b = 6 - 2;
    cout << "Resta: " << b << endl;

    // Multiplicacion
    c = a * 2;
    cout << "Producto: " << c << endl;

    // Division
    d = b / 2.5;
    cout << "Cociente: " << d << endl;

    // Modulo - Residuo
    f = 9 % 2;
    cout << "Residuo: " << f << endl;

    // Potencia
    e = pow(a, 2);
    cout << "Potencia: " << e << endl;

    return 0;
}