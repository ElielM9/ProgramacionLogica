
// Pedir valores al usuario 
Console.Write("Ingresa el primer valor: ");
var a = Convert.ToInt32(Console.ReadLine());

Console.Write("Ingresa el segundo valor: ");
var b = Convert.ToInt32(Console.ReadLine());

var resultado = Sumar(a, b);
Console.WriteLine($"Suma o total: {resultado}");

// Definir la funcion sumar
int Sumar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}
