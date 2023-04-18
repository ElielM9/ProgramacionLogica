#include <iostream>
using namespace std;

int main()
{
    int max = 5, acumulador = 0;

    for (int numero = 0; numero <= max; numero++)
    {
        cout << "Suma: " << numero << " + " << acumulador << endl;
        acumulador += numero;
        cout << "Suma acumulada: " << acumulador << endl;
    }
    cout << "Suma total: " << acumulador << endl;

    return 0;
}