
var min = 0;
var max = 5;
int valor;
bool dentroRango; 

// Solicitar valores al usuario.
Console.Write("Ingresa un valor entre 0 - 5");
valor = Convert.ToInt32(Console.ReadLine());

// Validar si el dato está dentro del rango. 
dentroRango = valor > min && valor <= max;
Console.WriteLine($"Valor dentro de rango? {dentroRango}"); 

