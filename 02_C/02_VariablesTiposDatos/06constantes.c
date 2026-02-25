// Constanes en C
#include <stdio.h>
// Definir constantes
#define PI 3.14159265
// Libreria con constantes en C
#include <math.h>

int main()
{
    // Definir constantes
    const int CONSTANTE = 10;
    // CONSTANTE = 20; No se pueden modificar
    printf("El valor es: %d", CONSTANTE);
    printf("\nValor PI es: %.4f", PI);

    // Constantes definidad en C
    printf("\nValor PI math: %.4f \n", M_PI);

    const int SEGUNDOS_MINUTO = 60;
    printf("\nConstante segundos por minuito: %d", SEGUNDOS_MINUTO);



    return 0;
}