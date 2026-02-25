// IF Else en C
#include <stdio.h>

int main()
{
    int numero;
    printf("Ingresa un número: \n");
    scanf("%d", &numero);

    // If
    // Verificar si el numero es positivo.
    if (numero > 0)
    {
        printf("Valor positivo = %d", numero);
    }
    // Else if
    else if (numero < 0)
    {
        printf("Valor negativo = %d", numero);
    }
    else
    {
        printf("Valor 0 = %d", numero);
    }

    // Operador ternario: Nos permite simplificar un if else solamente. Se recomienda usar cuando solo sea una linea de código. 
    //Verdadero : Falso
    (numero > 0) ? printf("Valor positivo") : printf("Valor 0 o negativo");


return 0;
}
