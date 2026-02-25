// Algoritmo mayor de edad
#include <stdio.h>

int main()
{
    // Definicion de variables
    const int EDAD_ADULTO = 18;
    int edadPersona;
    // Pedirle su edad al usuario.
    printf("Proporciona tu edad \n");
    scanf("%d", &edadPersona);

    // Validar si es mayor de edad.
    if (edadPersona >= EDAD_ADULTO)
    {
        printf("El usuario es mayor de edad");
    }
    else
    {
        printf("El usuario es menor de edad");
    }

    return 0;
}
