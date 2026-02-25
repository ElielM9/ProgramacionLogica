
// Convertir de texto a numero 
string cadena1 = "10";
string cadena2 = "20";

int resultado = Convert.ToInt32(cadena1) + Convert.ToInt32(cadena2);


// Convertir de numero a string
int a = 10;
int b = 20;
Console.WriteLine(Convert.ToString(a) + Convert.ToString(b));


// Valores aleatorios 
var aleatorio = new Random();
// Generar valores aleatorios entre 0 - 100 
int valorAleatorio = aleatorio.Next(100 + 1); // + 1 incluye el numero final. 
Console.WriteLine($"Valor aleatorio entre 0 - 100 {valorAleatorio}");

int min = 100, max = 200;
valorAleatorio = aleatorio.Next(min, max + 1);
Console.WriteLine($"Valor aleatorio entre 100 - 200 {valorAleatorio}");


// Valor absoluto de un numero
int numero, numeroAbs;
Console.WriteLine("Ingresa un valor"); 
numero = Convert.ToInt32(Console.ReadLine());

numeroAbs = Math.Abs(numero);
Console.WriteLine($"Valor absoluto de {numero}: {numeroAbs}"); 


// Redondeo y truncado 
var num = 9.5F;

var redondeo = Math.Round(num);
Console.WriteLine($"Redondeo: {redondeo}");

var truncado = Math.Truncate(num);
Console.WriteLine($"Truncado: {truncado}");