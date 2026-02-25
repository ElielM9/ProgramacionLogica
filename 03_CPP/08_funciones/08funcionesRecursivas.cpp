// Funciones recursivas en C++: Son funciones que se llaman a sí mismas y, cada vez que se mandan a llamar tiene que acercarse a un caso base
#include <iostream>
using namespace std;

// Definimos la funcion
void funcionRecursiva(int);

int main()
{
    // Imprimir de 1 - 5 de manera recursiva
    int valor = 5;
    funcionRecursiva(valor);

    return 0;
}

void funcionRecursiva(int numero)
{
    // Caso base
    if (numero == 1){
        cout << "Valor recursivo " << numero << endl;
    } 
    // Caso recursivo 
    else{
        funcionRecursiva(numero - 1);
        cout << "Numero " << numero << endl; 
    }
}
