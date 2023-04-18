#include <iostream>
using namespace std;

// Cambiar valor (Paso por referencia: se pasa la direccion de memoria de la variable original)
void cambiarValor(int *parametro)
{
    *parametro = 20;
}

int main()
{

    // Ejemplo de paso por referencia: Se pasa una referencia (Dir. de memoria) de la variable.
    int argumento = 10;

    cout << "Valor antes de funcion " << argumento << endl;
    cambiarValor(&argumento);
    cout << "Valor despues de funcion " << argumento << endl;

    return 0;
}