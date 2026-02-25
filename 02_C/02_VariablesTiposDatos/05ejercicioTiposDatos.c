#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Definir variables
    int edad;
    int largoCadena = 50;
    char nombreCompleto[largoCadena];
    float sueldo;
    bool empleadoConfianza;
    int empleadoConfianzaTemp;

    // Solicitar valores al usuario
    printf("Ingresa tu nombres completo: \n");
    scanf("%[^'\n']s", nombreCompleto);

    printf("\nIntroduce tu edad: \n");
    scanf("%d", &edad);

    printf("\nProporciona tu sueldo: \n");
    scanf("%f", &sueldo);

    printf("\n¿Eres empleado de confianza? (1 - 0) \n");
    scanf("%d", &empleadoConfianzaTemp);
    empleadoConfianza = empleadoConfianzaTemp;

    // Imprimir la informacion del usuario.
    printf("\nLa informacion proporcionada es: ");
    printf("\nNombre: %s", nombreCompleto);
    printf("\nEdad: %d", edad);
    printf("\nSueldo: $%.2f", sueldo);
    printf("\nEmpleado de confianza: %d", empleadoConfianza);

    return 0;
}