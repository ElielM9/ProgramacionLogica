// Ejercicio mayor de edad en C#

const int EDAD_ADULTO = 18;
int edadPersona;

Console.WriteLine("Ingresa tu edad");
edadPersona = Convert.ToInt32(Console.ReadLine());

if (edadPersona >= EDAD_ADULTO)
{
    Console.WriteLine("Eres mayor de edad");
}
else if (edadPersona < 0)
{
    Console.WriteLine("Valor erroneo");
}
else
{
    Console.WriteLine("Eres menor de edad");
}

