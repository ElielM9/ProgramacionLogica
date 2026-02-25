// Paso por valor en C#

// Definir funcion (Paso por valor: no afecta al valor originals)
void CambiarValor(int parametro)
{
    parametro = 5;
}

// Ejemplo de paso por valor: Solamente se pasa una copia del valor original.
int argumento = 10;

Console.WriteLine($"Valor antes de la funcion: {argumento}");
CambiarValor(argumento);
Console.WriteLine($"Valor despues de la funcion: {argumento}");
