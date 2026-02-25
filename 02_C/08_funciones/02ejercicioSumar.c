#include <stdio.h>

int sumar(int a, int b)
{
    int suma = a + b;

    return suma;
}

int main()
{
    // Definir variabes a utilizar
    int a, b, resultado;

    // Pedir valores al usuario
    printf("Ingresa el primer valor: ");
    scanf("%d", &a);

    printf("\nIngresa el segundo valor: ");
    scanf("%d", &b);

    // Ejecutar la función
    resultado = sumar(a, b);
    // Imprimir el resultado
    printf("Suma: %d", resultado);

    return 0;
}