// Switch en C
#include <stdio.h>

int main()
{
    int diaSemana;
    printf("Ingresa un dia de la semana 1 - 5 \n");
    scanf("%d", &diaSemana);

    // Validar el dia usando un switch
    switch (diaSemana)
    {
    case 1:
        printf("Es lunes");
        break;
    case 2:
        printf("Es martes");
        break;
    case 3:
        printf("Es miercoles");
        break;
    case 4:
        printf("Es jueves");
        break;
    case 5:
        printf("Es viernes");
        break;
    default:
        printf("No es valido");
    }
}