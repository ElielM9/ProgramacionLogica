// Longitud de cadenas en C#

// Las cadenas en C# son inmutables (No se pueden modificar)
string cadena = "XD";
Console.WriteLine($"Largo de cadena {cadena.Length}");

for (int i = 0; i < cadena.Length; i++)
{
    Console.WriteLine($"Cadena: {cadena[i]}");
}
