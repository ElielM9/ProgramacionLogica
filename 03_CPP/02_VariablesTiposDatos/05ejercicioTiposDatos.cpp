#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Definir variables
    string nombreCompleto;
    int edad;
    float sueldo;
    bool empleadoConfianza;

    // Solicitar datos al usuario.
    cout << "Ingresa tu nombre: " << endl;
    getline(cin, nombreCompleto);
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;
    cout << "Ingresa tu sueldo: " << endl;
    cin >> sueldo;
    cout << "Eres empleado de confianza?: 1True - 0False " << endl;
    cin >> empleadoConfianza;

    // Imprimir la informaciòn
    cout << "La informacion es: " << endl;
    cout << "Nombre: " << nombreCompleto << endl;
    cout << "Edad: " << edad << endl;
    cout << fixed << setprecision(2);
    cout << "Sueldo: " << sueldo << endl;
    cout << "Empleado de confianza: " << empleadoConfianza << endl;

    return 0;
}