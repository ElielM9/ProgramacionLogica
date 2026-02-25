// Operadores de incremento y decremento en C++
#include <iostream>
using namespace std;

int main()
{

    int a = 0, b, c;

    // Operadores de incremento (++): Incrementa la variable en 1.

    // Post Incremento: Se incrementa hasta la proxima vez que se usa la variable.
    a++;
    cout << "Nuevo valor de a (a++): " << a << endl;
    // Pre Incremento: Se incrementa la variable de inmediato.
    ++a;
    cout << "Nuevo valor de a (++a): " << a << endl;

    // Operadores de Decremento (--): Decrementa la variable en 1.

    // Post decremento: Se decrementa la proxima vez que se utiliza la variable.
    a--;
    cout << "Nuevo valor de a (a--): " << a << endl;

    // Pre decremento: Se decrementa la variable de inmediato.
    --a;
    cout << "Nuevo valor de a (--a): " << a << endl;

    return 0;
}