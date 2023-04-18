// Ejercicio mayor de edad en C++
#include <iostream>
using namespace std;

int main()
{
    const int EDAD_ADULTO = 18;
    int edadPersona;

    // Pedirle edad al usuario
    cout << "Ingresa tu edad: " << endl;
    cin >> edadPersona;

    // Validar si es mayor de edad
    if (edadPersona >= EDAD_ADULTO)
    {
        cout << "Eres mayor de edad: " << endl;
    }
    else
    {

        cout << "Eres menor de edad: " << endl;
    }

    return 0;
}