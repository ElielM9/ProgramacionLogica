// Operadores de asignacion en C++
#include <iostream>
using namespace std;

int main()
{
    // Operadores de asignacion
    // Igual (=): Asigna un valor a la variable.
    int numero = 10;
    cout << "Valor numero: " << numero << endl;

    numero = 20; // Sobreescribe el primer valor.
    cout << "Nuevo valor: " << numero << endl;

    // Operadores de asignacion compuestos.

    // Mas igual +=: Suma un valor indicado a la variable.
    numero += 5; // numero = numero + 5
    cout << "Nuevo valor: " << numero << endl;

    // Menos igual -=: Resta un valor indicado a la variable.
    numero -= 3; // numero = numero - 3
    cout << "Nuevo valor: " << numero << endl;

    // Multiplicacion igual *=: Multiplica por un valor indicado a la variable.
    numero *= 2; // numero = numero * 2
    cout << "Nuevo valor: " << numero << endl;

   // Division igual /=: Divide entre un valor indicado a la variable.
    numero /= 7; // numero = numero / 2
    cout << "Nuevo valor: " << numero << endl;

  // Módulo (Residuo) igual %=: Da el residuo de dividir entre un valor indicado a la variable
    numero %= 2; // numero = numero % 2
    cout << "Nuevo valor: " << numero << endl;


    return 0;
}
