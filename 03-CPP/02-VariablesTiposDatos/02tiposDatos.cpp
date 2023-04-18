// Tipos de datos en C++
#include <iostream>
#include <iomanip>
using namespace std;

/*
int - Entero
float - Real
double - Real más grande
char - Caracter.
bool - Booleano o Lógico.
*/

int main()
{
    // Entero
    int numero = 2;
    cout << "Entero: " << numero << endl;

    // Float
    float flotante = 8.43;
    cout << fixed << setprecision(2); // 2 digitos para float point numeros. (0 a 15 digitos )
    cout << "Float: " << flotante << endl;

    // Double
    double doble = 9.899999;
    cout << "Double: " << doble << endl;

    // Char - caracter
    char caracter = 'a';
    char caracterAscii = 65;
    cout << "Caracter: " << caracter << endl;
    cout << "Caracter Ascii: " << caracterAscii << endl;

    // Boolean - Logico
    bool booleano = true; // 1 - True / 0 False
    cout << "Boolean: " << booleano << endl;

    // Cadenas - Strings
    char cadenas[] = "Hola"; // Cadenas como en C
    cout << "Cadena 1: " << cadenas << endl;

    string cadena = "Adios";
    cout << "Cadenas 2: " << cadena << endl;

    return 0;
}