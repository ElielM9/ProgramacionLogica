// Arrays en C#

// Declaración de arrays 
int[] numerosArray;
numerosArray = new int[5];

numerosArray[0] = 13;
numerosArray[1] = 21;
numerosArray[4] = 62;

Console.WriteLine($"Valor 1: {numerosArray[0]}");
Console.WriteLine($"Valor 2: {numerosArray[1]}");
Console.WriteLine($"Valor 3: {numerosArray[2]}");
Console.WriteLine($"Valor 5: {numerosArray[4]}");

// Declaracion simplificada de arrays 
int[] numeros = { 100, 200, 300, 400 };
Console.WriteLine($"Valor 1: {numeros[0]}");
Console.WriteLine($"Valor 2: {numeros[1]}");
Console.WriteLine($"Valor 3: {numeros[2]}");
// Console.WriteLine($"Valor 4: {numeros[4]}");


// Iteracion de arrays 

// Largo del array 
Console.WriteLine($"Largo del array {numeros.Length}");

Console.WriteLine("Iteracion del array");
for (int i = 0; i < numeros.Length; i++)
{
    Console.WriteLine($"Valor del array: {numeros[i]}");
}

// ForEach 
Console.WriteLine("For mejorado");
foreach (var numero in numeros)
{
    Console.WriteLine($"Valor: {numero}");
}
