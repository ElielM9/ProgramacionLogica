#include <iostream>
using namespace std;

int sumar(int a, int b)
{
    return a + b;
}

int main()
{

    int a, b;

    cout << "Ingresa el primer valor " << endl;
    cin >> a;

    cout << "Ingresa el segundo valor " << endl;
    cin >> b;
   
    cout << "Suma: " << sumar(a, b) << endl;

    return 0;
}