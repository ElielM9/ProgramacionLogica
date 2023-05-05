// Ejercicio que dia de la semana es
#include <stdio.h>

int main()
{
    int diaSemana;
    printf("Proporciona un dia de la semana: \n");
    scanf("%d", &diaSemana);

    // Validar que dia es.
    if (diaSemana == 1)
        printf("Es lunes");
    else if (diaSemana == 2)
        printf("Es martes");
    else if (diaSemana == 3)
        printf("Es miercoles");



    return 0;
}
