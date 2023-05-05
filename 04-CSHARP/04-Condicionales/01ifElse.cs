// If Else en C#

int numero;
Console.WriteLine("Ingresa un numero");
numero = Convert.ToInt32(Console.ReadLine());

// Verificar si el valor es positivo 
// If else - Else if 
if (numero > 0)
{
    Console.WriteLine($"Valor positivo: {numero}");
}
else if (numero < 0)
{
    Console.WriteLine($"Valor negativo: {numero}");
}
else
{
    Console.WriteLine($"Valor 0: {numero}");
}


// Operador ternario: Permite simplificar un if else solamente. Se recomienda usar cuando solo sea una linea de código.

// Verdadero : Falso
var resultado = (numero > 0) ? "Positivo" : "Negativo o 0";
Console.WriteLine($"Valor: {resultado}");
