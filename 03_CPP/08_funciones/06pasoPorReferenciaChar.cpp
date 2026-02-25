// Paso por referencia en cadenas
#include <iostream>
using namespace std;

// Sin el operador de & se pasa una copia del valor de la cadena, se coloca para pasar la referencia de memoria. 
void cambiarValor(string &parametro)
{
    parametro = "Adios";
}

int main()
{

    string arg = "Hola";

    cout << "Valor antes de funcion " << arg << endl;
    cambiarValor(arg);
    cout << "Valor despues de funcion " << arg << endl;

    return 0;
}