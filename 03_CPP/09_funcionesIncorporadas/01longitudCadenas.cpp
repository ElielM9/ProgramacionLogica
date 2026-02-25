#include <iostream>
using namespace std;

int main()
{
    string cadena = "Hola";

    cout << "Largo de cadena: " << cadena.length() << endl;

    for (int i = 0; i < cadena.length(); i++)
    {

        cout << "Cadena: " << cadena[i] << endl;
    }

    return 0;
}