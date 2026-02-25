#include <iostream>
using namespace std;

// Definir funcion (Paso por valor: no afecta al valor originals)
void cambiarValor(int parametro)
{
    parametro = 2;
}

int main()
{
    // Ejemplo de paso por valor: Solamente se pasa una copia del valor original.
    int argumento = 10; 

    cout << "Valor antes de funcion " << argumento << endl; 
    cambiarValor(argumento);
    cout << "Valor despues de funcion " << argumento << endl;

    return 0;
}