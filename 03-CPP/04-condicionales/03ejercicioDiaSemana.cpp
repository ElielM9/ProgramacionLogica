// Ejercicio de dia de la semana en C++
#include <iostream>
using namespace std;

int main()
{

    int diaSemana;
    cout << "Ingresa un dia de la semana (1 - 3) " << endl;
    cin >> diaSemana;

    // Validar el dia de la semana
    if (diaSemana == 1)
        cout << "Hoy es Lunes" << endl;
    else if (diaSemana == 2)
        cout << "Hoy es martes" << endl;
    else if (diaSemana == 3)
        cout << "Hoy es miercoles" << endl;
    else
        cout << "Valor invalido" << endl;

    return 0;
}