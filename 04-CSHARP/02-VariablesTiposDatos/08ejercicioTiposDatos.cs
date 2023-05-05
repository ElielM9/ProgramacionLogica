Console.Write("Ingresa tu nombre"); 
var nombre = Console.ReadLine();

Console.Write("Ingresa tu edad"); 
var edad = Convert.ToInt32(Console.ReadLine());

Console.Write("Ingresa tu sueldo"); 
var sueldo = Convert.ToDouble(Console.ReadLine());

Console.Write("¿Eres de confianza?"); 
var empleadoConfianza = Convert.ToBoolean(Console.ReadLine());

// Imprimir todos los valores 
Console.WriteLine("La informacion es: "); 
Console.WriteLine($"Nombre {nombre}"); 
Console.WriteLine($"Edad {edad}"); 
Console.WriteLine($"Sueldo {sueldo:C2}"); 
Console.WriteLine($"De confianza {empleadoConfianza}"); 

