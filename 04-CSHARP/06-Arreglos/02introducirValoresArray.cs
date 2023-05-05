// Introducir valores a un array en C#

// Crear el array
int largoArray;
do
{
    Console.WriteLine("Ingresa el largo del arreglo");
    largoArray = Convert.ToInt32(Console.ReadLine());
} while (largoArray <= 0);

int[] numeros = new int[largoArray];

// Solicitar valores al usuario
for (int i = 0; i < numeros.Length; i++)
{
    Console.WriteLine("Ingresa un valor");
    numeros[i] = Convert.ToInt32(Console.ReadLine());
}

// Imprimir los valores del array 
foreach (int numero in numeros)
{
    Console.WriteLine($"Valor: {numero}");
}