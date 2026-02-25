// Ciclo Do While en C++
#include <iostream>
using namespace std;

int main()
{

    int numero;

    do
    {
        cout << "Ingresa un numero positivo: " << endl;
        cin >> numero;

    } while (numero <= 0);
    cout << "Valor positivo: " << numero << endl;

    return 0;
}
