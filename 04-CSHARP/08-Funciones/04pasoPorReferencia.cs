// Paso por referencia en C#

// Cambiar valor (Paso por referencia: se pasa la direccion de memoria de la variable original)
void CambiarValor(ref int parametro)
{
    parametro = 5;
}

// Ejemplo de paso por referencia: Se pasa una referencia (Dir. de memoria) de la variable.
int argumento = 10;

Console.WriteLine($"Valor antes de la funcion: {argumento}");
CambiarValor(ref argumento);
Console.WriteLine($"Valor despues de la funcion: {argumento}");
