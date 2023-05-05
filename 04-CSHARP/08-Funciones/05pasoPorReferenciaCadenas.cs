// Paso por referencia de cadenas en C#

void CambiarValor(ref string parametro)
{
    parametro = "Adios";
}

// Ejemplo de paso por referencia: Se pasa una referencia (Dir. de memoria) de la variable.
string argumento = "Hola";

Console.WriteLine($"Valor antes de la funcion: {argumento}");
CambiarValor(ref argumento);
Console.WriteLine($"Valor despues de la funcion: {argumento}");
