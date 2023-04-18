// If Else en C++
#include <iostream>
using namespace std;

int main()
{

    int numero;
    cout << "Ingresa un numero: " << endl;
    cin >> numero;

    // Validar si es un valor positivo
    // If else
    if (numero > 0)
    {
        cout << "Valor positivo: " << numero << endl;
    }
    else if (numero < 0)
    {
        cout << "Valor negativo: " << numero << endl;
    }
    else
    {
        cout << "Valor 0 o invalido: " << numero << endl;
    }

    // Operador ternario: Permite simplificar un if else solamente. Se recomienda usar cuando solo sea una linea de código.

    // Verdadero : Falso
    (numero > 0) ? cout << "Valor positivo " : cout << "Valor 0 o negativo ";

    return 0;
}
