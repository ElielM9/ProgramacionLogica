// Introducir valores en matrices en C#

// Definir variables 
int filas, columnas;

// Pedir el largo de la matriz al usuario
do
{
    Console.WriteLine("Ingresa las filas");
    filas = Convert.ToInt32(Console.ReadLine());

    Console.WriteLine("Ingresa las columnas");
    columnas = Convert.ToInt32(Console.ReadLine());
} while (filas <= 0 || columnas <= 0);

// Declarar la matriz 
int[,] matriz = new int[filas, columnas];

// Pedir valores de la matriz al usuario 
for (int fil = 0; fil < filas; fil++)
{
    for (int col = 0; col < columnas; col++)
    {
        Console.WriteLine($"Ingresa el valor {fil} | {col}");
        matriz[fil, col] = Convert.ToInt32(Console.ReadLine());
    }
}

// Imprimir los valores 
for (int fil = 0; fil < filas; fil++)
{
    for (int col = 0; col < columnas; col++)
    {
        Console.WriteLine($"Matriz: {fil} | {col}: {matriz[fil, col]}");
    }
    Console.WriteLine();
}
