// Ejercicio suma acumulativa en C#
int max = 5;
int acumulador = 0;

for (int contador = 0; contador <= max; contador++)
{
    Console.WriteLine($"Suma: {contador} + {acumulador}");
    acumulador += contador; // acumulador = acumulador + contador
    Console.WriteLine($"Suma acumulada: {acumulador}");
}
Console.WriteLine($"Suma total: {acumulador}");