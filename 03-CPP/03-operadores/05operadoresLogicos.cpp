// Operadores Logicos en C++
#include <iostream>
using namespace std;

int main()
{

    bool a = true;
    bool b = false;
    cout << "Valor a: " << a << endl;
    cout << "Valor b: " << b << endl;

    // Operador AND (&&): Verdadero si ambos son verdaderos.
    bool c = a && b;
    cout << "a y b son verdaderos? " << c << endl;

    // Operador OR (||): Verdadero si cualquiera es verdadero.
    c = a || b;
    cout << "a o b son verdaderos? " << c << endl;

    // Operador NOT (!): Invierte el valor original.
    c = !a;
    cout << "a es verdadero? " << c << endl;

    return 0;
}