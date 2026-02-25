#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    // Convertir string a numero
    char cadena1[] = "10";
    char cadena2[] = "20";

    // Atoi - ascii to int
    int resultado = atoi(cadena1) + atoi(cadena2); // = 30

    printf("Resultado: %d\n", resultado);

    // Convertir de numero a string
    int edad = 28;
    char edadTexto[5];

    //  Itoa - int to ascii o ftoa - float to ascii
    // itoa(edad, edadTexto, 10);
    printf("Convertido a texto: %s %s\n", edadTexto, "anios");

    // Valores aleatorios
    int min = 0, max = 100;
    srand(time(0));
    int valorAleatorio = rand() % 100;

    printf("Valor al azar entre 0 y 100: %d\n", valorAleatorio);
    // Valores aleatorios entre un rango
    valorAleatorio = rand() % (200 - 100) + 100;
    printf("Valor al azar entre 100 y 200: %d\n", valorAleatorio);

    // Valor absoluto de un numero: Es el mismo numero sin signo.
    int numero, numeroAbs;
    printf("Ingresa un valor: ");
    scanf("%d", &numero);

    numeroAbs = abs(numero);
    printf("Valor absoluto: %d\n", numeroAbs);

    // Redondeo y truncado de un numero
    float num = 8.5;
    int redondeo, truncado;

    redondeo = round(num);
    printf("Redondeo: %d\n", redondeo);

    truncado = trunc(num);
    printf("Truncado: %d\n", truncado);



    return 0;
}