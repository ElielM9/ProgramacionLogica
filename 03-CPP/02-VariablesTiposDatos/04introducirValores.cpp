// Introducir valores en C++
#include <iostream>
using namespace std;

int main()
{
    // Declarar la variable
    int numero;

    // Solicitar el valor al usuario.
    cout << "Ingresa un numero: " << endl;
    cin >> numero;

    // Imprimir la informacion proporcionada
    cout << "El valor ingresado es: " << numero << endl;

    // Cadenas
    string nombre;
    cout << "Ingresa tu nombre: " << endl;
    // cin >> nombre;
    cin.ignore(); 
    getline(cin, nombre); // Lee una cadena completa con espacios.
    cout << "Tu nombre es: " << nombre << endl;

    return 0;
}