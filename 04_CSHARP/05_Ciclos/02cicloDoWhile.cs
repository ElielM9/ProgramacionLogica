// Ciclo Do While en C#

int numero;

do
{
    Console.WriteLine("Ingresa un numero");
    numero = Convert.ToInt32(Console.ReadLine());
} while (numero <= 0);