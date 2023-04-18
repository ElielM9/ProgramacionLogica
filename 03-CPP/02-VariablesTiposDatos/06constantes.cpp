// Constantes en C++
#include <iostream>
#include <cmath> //Libreria de funciones matematicas
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
    // Definir constantes
    const int NUMERO = 10;
    const float PI = 3.14;

    cout << "Constante: " << NUMERO << endl;
    cout << "Constante PI: " << PI << endl;

    // Constantes matematicas.
    cout << "Constante math PI: " << M_PI << endl;

    const int SEGUNDOS_MINUTO = 60;
    cout << "Segundos por minuto: " << SEGUNDOS_MINUTO << endl;

    return 0;
}