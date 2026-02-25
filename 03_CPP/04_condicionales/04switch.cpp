// Switch en C++
#include <iostream>
using namespace std;

int main()
{

    int diaSemana;
    cout << "Ingresa un dia de la semana (1 - 3)" << endl;
    cin >> diaSemana;

    switch (diaSemana)
    {
    case 1:
        printf("Es lunes");
        break;
    case 2:
        printf("Es martes");
        break;
    case 3:
        printf("Es miercoles");
        break;
    default:
        cout << "Valor invalido" << endl;
    }

    return 0;
}