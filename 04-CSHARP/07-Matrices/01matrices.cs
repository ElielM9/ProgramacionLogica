//Matrices en C#

// Definir constantes
const int FILAS = 2;
const int COLUMNAS = 3;

// Definir la matriz 
int[,] matriz = new int[FILAS, COLUMNAS];

// Introducir valores en la matriz 
matriz[0, 0] = 100;
matriz[0, 1] = 200;
matriz[0, 2] = 300;

matriz[1, 0] = 400;
matriz[1, 1] = 500;
matriz[1, 2] = 600;

// Imprimir la matriz 
Console.WriteLine($"Valor 1: {matriz[0, 0]}");
Console.WriteLine($"Valor 6: {matriz[1, 2]}");


// Sintaxis simplificada de una matriz 
int[,] matriz2 = {
    {100, 200, 300},
    {400, 500, 600}
};

Console.WriteLine($"Valor 1: {matriz2[0, 0]}");
Console.WriteLine($"Valor 6: {matriz2[1, 2]}");


// Iteracion de matrices
Console.WriteLine();
// Obtener la cantidad de filas (Dimension 0)
Console.WriteLine($"Filas: {matriz.GetLength(0)}");

// Obtener cantidad de columnas (Dimension 1)
Console.WriteLine($"Columnas: {matriz.GetLength(1)}");

// Iterar la matriz 
Console.WriteLine("--Iteracion de matrices--");
for (int fil = 0; fil < matriz.GetLength(0); fil++)
{
    for (int col = 0; col < matriz.GetLength(1); col++)
    {
        Console.WriteLine($"Matriz: {fil} | {col}: {matriz[fil, col]}");
    }
    Console.WriteLine();
}


