#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    // Convertir de texto a numero
    string cadena1 = "10";
    string cadena2 = "20";

    // Stoi: String to int
    int resultado = stoi(cadena1) + stoi(cadena2);
    cout << resultado << endl;

    // Convertir de numero a string
    int a = 10;
    int b = 20;

    // To_String
    cout << to_string(a) + to_string(b) << endl;

    // Valores aleatorios
    srand(time(0));
    int valorAleatorio = (rand() % 100 + 1);
    cout << "Valor aleatorio entre 1 - 100: " << valorAleatorio << endl;

    // Valores aleatorios ente un rango
    int min = 100, max = 200;
    valorAleatorio = rand() % ((max + 1) - min) + min;
    cout << "Valor aleatorio entre 100 - 200: " << valorAleatorio << endl;

    // Valor absoluto de un numero
    int numero, numeroAbs;
    cout << "Ingresa un numero" << endl;
    cin >> numero;

    numeroAbs = abs(numero);
    cout << "Valor absoluto: " << numero << endl;

    // Redondeo y truncado
    float num = 9.5;
    int redondeo, truncado;

    redondeo = round(num);
    cout << "Redondeo: " << redondeo << endl;

    truncado = trunc(num);
    cout << "Truncado: " << truncado << endl;

    return 0;
}
