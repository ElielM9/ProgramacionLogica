#include <iostream>
using namespace std;

int main()
{
    string cadena = "Hola a todos";

    string subCadena = cadena.substr(0, 4);
    cout << "Subcadena: " << subCadena << endl;

    return 0;
}