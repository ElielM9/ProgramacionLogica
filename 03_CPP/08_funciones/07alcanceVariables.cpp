// Alcance de variables en C++
#include <iostream>
using namespace std;

// Variables globales: Las variables globales funcionan en todo el programa y se definen fuera de cualquier método.
int variableGlobal = 5;
int a = 10;

// Procedimiento
void cambio(int variableLocalFuncion)
{
    // Cambiamos el valor de la variable localFuncion
    variableLocalFuncion = 40;

    // Variable local: La variable local oculta a la variable global y se le da prioridad hasta que finaliza el método.
    int a = 50;
    int b = 100;

    variableGlobal = 15;

    // Imprimir variables
    cout << "Variable local desde cambio " << variableLocalFuncion << endl;
    cout << "Variable local a desde cambio " << a << endl;
    cout << "Variable global a desde cambio " << ::a << endl; 
    cout << "Variable local b desde cambio " << b << endl;
}

int main()
{

    int variableLocal = 20;

    // Imprimir la variable global
    cout << "Variable global a desde main " << a << endl;
    // Modificar variable global
    a = 30;

    // Imprimir variable local
    cout << "Variable local desde main " << variableLocal << endl;

    // Llamar a la funcion
    cambio(variableLocal);

    // Imprimir variables globales
    cout << "Variable global a desde main " << a << endl;
    cout << "Variable global desde main " << variableGlobal << endl;

    return 0;
}