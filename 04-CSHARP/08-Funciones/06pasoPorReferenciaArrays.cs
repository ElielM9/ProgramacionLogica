// Paso por referencia de arrays en C#

void CambiarValor(int[] parametro)
{
    parametro[0] = 20;
}

// Los arrays se pasan por referencia por defecto en C#
int[] argumento = {10};

Console.WriteLine($"Valor antes de la funcion: {argumento[0]}");
CambiarValor(argumento);
Console.WriteLine($"Valor despues de la funcion: {argumento[0]}");
