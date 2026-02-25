// Funciones en C++
#include <iostream>
using namespace std;

// Definir funcion (Procedimientto porque no regresa un valor)
void saludar(string mensaje)
{
    cout << "Mensaje: " << mensaje << endl;
}

int main()
{
    string mensajeArg;
    cout << "Escribe tu mensaje " << endl;
    getline(cin, mensajeArg);

    saludar(mensajeArg);
    saludar(mensajeArg);
    saludar(mensajeArg);
    saludar(mensajeArg);

    return 0;
}