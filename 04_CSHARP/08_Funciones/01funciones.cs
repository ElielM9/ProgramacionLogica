// Funciones en C#

Console.WriteLine("Ingresa el nombre a mostrar");
var mensajeArg = Console.ReadLine();
Saludar(mensajeArg);

// Definir el procedimiento (No regresa ningun tipo de informacion)
void Saludar(string mensaje)
{
    Console.WriteLine($"Hola {mensajeArg}");
}