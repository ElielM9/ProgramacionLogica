// Tamaño de los tipos de datos en C++
#include <iostream>
using namespace std;

int main()
{
    int entero = 10;
    float flotante = 2.3;
    double doble = 5.9999;
    char caracter = 'A';
    bool booleano = false;
    string cadena = "Hola";

    cout << "Tamaño en byted de Int: " << sizeof(entero) << endl;
    cout << "Tamaño en bytes de float: " << sizeof(flotante) << endl;
    cout << "Tamaño en bytes de double: " << sizeof(doble) << endl;
    cout << "Tamaño en bytes de char: " << sizeof(caracter) << endl;
    cout << "Tamaño en bytes de bool: " << sizeof(booleano) << endl;
    cout << "Tamaño en bytes de string: " << sizeof(cadena) << endl;
    cout << "Tamaño de la cadena: " << cadena.length() << endl;
    cout << "Tamaño de la cadena: " << cadena.size() << endl;

    return 0;
}