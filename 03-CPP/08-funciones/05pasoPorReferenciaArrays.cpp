#include <iostream>
using namespace std;

void cambiarValor(int *parametro)
{
    parametro[0] = 20; 
    parametro[1] = 30; 
    parametro[2] = 40; 
}

int main()
{

    int arg[] = {10, 20, 30};

    cout << "Valor antes de funcion " << arg[0] << endl;
    cambiarValor(arg);
    cout << "Valor despues de funcion " << arg[0] << endl;

    return 0;
}